---
data: 2024-06-03
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Thread in Linux
tipologia: appunti
stato: "1"
capitolo: Sincronizzazione
---
- - -
*Implementazione del concetto teorico di Thread su Linux: storia, approccio attuale, system call.*
- - -
# 1. Thread in Linux
## 1.1. LinuxThreads
Inizialmente i Pthread erano implementati dalla libreria *LinuxThreads*
- I thread erano dei processi che condividevano la memoria, i file aperti, ecc.
- Ognuno aveva *diverso PID*
- *Implementazione problematica:* si mischiava concetto di thread e processo. In quell'epoca non c'era ancora il supporto *nativo* di Thread, infatti non avevo altro che delle *fork sofisticate*.

Ora (da 2002), Linux/POSIX usa la libreria *Native POSIX Threads Library (NPLT)*
- Coopera col kernel, che offre supporto ai thread
- Migliori prestazioni

## 1.2. Posix Thread
Nei sistemi POSIX (e Linux), le *funzioni di libreria* per gestire i thread sono chiamate *Pthread*
I thread permettono a un processo:
- Di svolgere più task in maniera concorrente
	- Mentre un thread attende l'I/O o la rete, un altro thread può svolgere un altro compito
- Di sfruttare un sistema *multi-core*
	- Più flussi davvero in esecuzione parallela

I thread in Linux sono *Kernel Thread*

Qui i Posix-Threads condividono:
- La *memoria globale*
- PID e PPID
- File aperti
- Privilegi
- Working directory

Ogni thread ha invece le seguente caratteristiche distinte:
- Un *Thread ID*
	- Il Kernel mantiene la lista dei thread e li *schedula*, facendoli eseguire sulla CPU. Identificativo univoco per il sistema.
- Il suo *stack*
	- Per poter eseguire le funzioni
	- Un thread *mal configurato* puó comunque accedere/corrompere lo *stack* di un altro thread (comunque una cattiva idea!)
- Metadati: scheduling, etc...

## 1.3. Compilazione con Pthreads
Il codice deve includere la direttiva:
```c
#include <pthread.h>
```

Per compilare, bisogna includere la libreria `pthread`
```bash
gcc MyProgram.c -o MyProgram -lpthread 
```

---
# 2. Funzioni per i Pthread
Adesso vediamo come *lavorare* con i *Pthread*

## 2.1. Creazione di un thread

```c
#include <pthread.h>
int pthread_create(pthread_t *thread, const pthread_attr_t *attr,
                   void *(*start)(void *), void *arg);
```

Crea un nuovo thread che esegue la funzione `start` chiamata con l'argomento `arg`
- Come se si invocasse `start(arg)` su un *flusso di esecuzione separato*

**Nota:** Ogni programma, quando nasce, ha un solo thread, detto *main thread*

**PARAMETRI E VALORI DI RITORNO.** 
- L'argomento `arg` é un `void*`, ovvero un puntatore a un tipo di dato a piacere. Questo per avere la *massima flessibilità*.
- Similmente, il valore di ritorno di `start` é un `void*`.
- Non ci interessa l'argomento `attr` che specifica attributi particolari
- L'argomento `thread` é un puntatore a una variabile `pthread_t` che andrà a contenere il Thread ID, per poterlo usare in successive funzioni di libreria (poi per lavorarci sopra)
- In caso di successo, ritorna $0$, altrimenti un codice di errore

**Nota Implementativa**
La `pthread_create()` è una *funzione di libreria*

Essa usa la System Call `int clone( ... )`
- La `clone()` è simile alla `fork()`
- Crea un *processo figlio*
- Più *flessibile* e precisa della `fork()`
	- Permette di *controllare cosa condividono* padre e figlio
- La `pthread_create()` crea un nuovo processo che *condivide la memoria* col padre
	- Che è la definizione di *Thread*

## 2.2. Terminazione di un thread
Un thread termina se:
- La funzione di lancio `start` esegue una `return` (quindi è *finita*)
- Il thread esegue una `pthread_exit()`
- Il thread viene cancellato tramite una `pthread_cancel(pthread_t thread);`, invocata da un altro thread
- Il processo termina se un qualsiasi thread invoca una `exit()` o il thread principale termina il `main` 

```c
include <pthread.h>
void pthread_exit(void *retval);
```

- Termina il *thread corrente* col valore `retval`.
- Equivalente a effettuare una `return` nella funzione di avvio del thread.

## 2.3. Thread ID
```c
include <pthread.h>
pthread_t pthread_self(void);
```

Permette a un thread di ottenere il *proprio Thread ID*.

Il Thread ID va trattato come un *handle opaco*
- Su Linux é un `long int`
- Ma potrebbe essere un puntatore a una struttura dati arbitraria
- Non é affidabile decifrarne il valore

## 2.4. Join di un thread
```c
include <pthread.h>
int pthread_join(pthread_t thread, void **retval);
```

Attende che il thread `thread` *termini*.
- Se é già terminato, ritorna istantaneamente

Immagazzina il valore di ritorno all'indirizzo `retval`
- `retval` é specificato dal *thread morente* tramite `pthread_exit()` o `return`
- `retval` é un `void**`, ovvero un puntatore a puntore a `void`
	- E' l'indirizzo di una variabile che contiene un puntatore. Infatti devo salvare su un *puntatore a void*, quindi devo avere l'*indirizzo del puntatore a void*, sarebbe il *puntatore al puntatore a void*.

I thread devono essere tutti attesi tramite una `pthread_join()`, altrimenti diventano zombie
- *Come avviene per i processi*

Usando la funzione `int pthread_detach(pthread_t thread )` è possibile indicare che il thread `thread` non necessita di una `join`
- Il valore di ritorno viene *scartato*
- Il sistema rimuove ogni informazione sul thread quando esso termina 

**Note:**
I thread sono pari tra loro
- Qualunque thread può fare una `pthread_join` su un altro; anche se comunque non è (di solito) una buona idea fare *join* tra fratelli
*Non* esiste un modo per aspettare la terminazione di un *qualsiasi* thread
- Coi processi si può invece usare la `wait`.
Una `pthread_join` é  sempre bloccante
- Diverso da `waitpid` con flag `WNOHANG`

## 2.5. Esempio di Creazione di un Thread
Creazione di un Thread

```c
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void * threadFunc(void *arg){
    printf("From Thread: %s", (char *) arg);
    int * ret = malloc(sizeof(int));
    *ret = strlen(arg);
    return ret ; // Valore di ritorno del thread
    // Equivale a pthread_exit(ret);
}

int main(int argc, char *argv[]){
    pthread_t t1;
    void *res; // Per valore di ritorno
    int s;

    s = pthread_create(&t1, NULL, threadFunc, "Hello world\n"); // Creazione
    if (s != 0){
        printf("Cannot create thread");
        exit(1);
    }

    printf("Message from main()\n");
    s = pthread_join(t1, &res); // Join. Richiede un void **, ovvero &res
    if (s != 0){
        printf("Cannot join thread");
        exit(1);
    }
    printf("Thread returned %d\n", *((int *)res) ); // Utilizzo del valore di ritorno
    free (res); // Needed as that zone was allocated with malloc
    exit(0);
}
```

## 2.6. Esercizio
**Esercizio.** Si crei un programma che avvia $10$ thread che attendono un tempo casuale tra $0$ e $5$ secondo prima di terminare

```c
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define MAXSLEEP 5
#define THREADNB 10

static void * sleepFunc(void *arg){
    char thread_number = *((char*)arg);
    int n=rand() % MAXSLEEP;
    sleep(n);
    printf("Thread %c terminated after %d seconds\n", thread_number, n);
    return NULL;
}

int main(int argc, char *argv[]){
    int i;
    pthread_t t [THREADNB];
    char names [THREADNB];
    
    for (i=0;i<THREADNB;i++){
        names[i] = 'A' + i;
        pthread_create(&t[i], NULL, sleepFunc, &names[i]);
    }
    for (i=0;i<THREADNB;i++)
        pthread_join(t[i], NULL);
    return 0;
}
```

---
## 2.7. Thread in Bash
Normalmente, i comandi `ps` e `top` mostrano solo i processi

Per visualizzare i thread:
- `ps -T opzioni`. Esempio: `ps -T ax`
- `top -H`

Ogni thread presente nel `/proc` file system
- Come se fosse un processo: `/proc/[tid]`
- Per ottenere la lista di thread di un processo: `/proc/[pid]/task`
  - Contiene la lista dei thread di un processo
