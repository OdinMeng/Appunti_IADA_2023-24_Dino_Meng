---
data: 2024-05-17
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Semafori
tipologia: appunti
stato: "1"
capitolo: Sincronizzazione
---
- - -
*I semafori: definizione, storia, implementazione dei semafori in Linux. Sintassi C per semafori. Semafori non-anonimi e anonimi. Esempi-esercizi*
- - -
# I Semafori
## Definizione di Semaforo
**Definizione** (*Semaforo*)
Un *Semaforo* è un numero **Intero Positivo** condiviso da più thread
- Inizializzato a un certo valore in fase di creazione

Thread concorrenti (in realtà anche processi) possono fare due operazioni:
- *Incremento di $1$*
- *Decremento di $1$*

Il semaforo non può *mai* assumere *valori negativi*.
Se il decremento comporta che il semaforo diventi negativo, allora
- Il thread si *blocca*, *attendendo* che un altro thread faccia un incremento

Un *semaforo* è come un *secchio* con dei *gettoni*: o *metto* dei gettoni, o provo a *toglierli*. Se provo a togliere un secchio senza gettoni, aspetto che il prossimo ne prenda uno.

**Esempio**
Supponiamo di avere *due processi* e *un semaforo*
1. Il *semaforo* è inizializzato a $0$
2. $B$ decrementa
    - Il semaforo non può asusmere valori negativi
    - $B$ entra in attesa
3. $A$ incrementa
    - $B$ si sblocca
    - Il semaforo ha valore $0$
4. $A$ decrementa
    - $A$ si blocca
5. $B$ incrementa
    - $A$ si sblocca
5. Il semaforo ha valore $0$

![500](images/semaphore.png)

## Storia dei Semafori
Sono un costrutto di sincronizzazione semplice, potente e flessibile
- Inventato da *Dijkstra* nel 1965
- Usato per svariati scopi in tutti i linguaggi di programmazione e sistemi operativi

In Linux, due implementazioni
- *System V semaphores*: più vecchi, complessi. Non li vedremo
- *POSIX semaphores*: li vedremo

**NOTA:** possono essere usati anche tra processi diversi (e non solo tra thread di uno stesso processo)

## Tipologie di Semafori
I *POSIX semaphores* possono essere:
- *Named*: hanno un nome univoco. Possono essere usati da più processi indipendenti (anche senza relazioni di parentela)
	- Il più pratico
- *Unnamed*: non hanno nome. Possono essere condivisi tra:
	- Thread, senza particolari accorgimenti (l'unico caso in cui diventa pratico)
	- Processi: se creati tramite  `fork` e risiedono in una zona di memoria condivisa (con `shmget` o `mmap`) (il caso meno pratico, anche se possibile)

Il principio di funzionamento è lo stesso:
1. Il semaforo viene creato/inizializzato
2. I processi/thread possono effettuare delle:
    - *Post* per incrementare il semaforo
    - *Wait* per decrementare il semaforo (ed eventualmente attendere)
3. Il semaforo viene distrutto/chiuso

## Named Semaphores
Si utilizzano le seguenti funzioni:
1. `sem_open()`
2. `sem_post(sem)`, `sem_wait(sem)` e `sem_getvalue()`
3. `sem_close()` e `sem_unlink()`

Necessario includere l'header:
```c
#include <semaphore.h>
```

I semafori sono handle opachi di tipo:
```
sem_t
```

1. *Creazione*
```c
#include <fcntl.h> /* Defines O_* constants */
#include <sys/stat.h> /* Defines mode constants */
#include <semaphore.h>

sem_t *sem_open(const char * name , int oflag , ...
                /* mode_t mode , unsigned int value */ );
```

**Argomenti obbligatori:** 
Crea un semaforo dal nome `name`
- Deve iniziare con `/`
- Può essere un qualsiasi identificativo
  Esempio: `/mysem`
- L'argomento `oflag` specifica cosa fare *se il semaforo esiste* o no:
	- `O_CREAT`: crea e apre se non esiste. Apre se esiste
	- `O_CREAT | O_EXCL`: crea e apre. Fallisce se già esiste

**Argomenti opzionali:**
- `value` specifica il valore iniziale
- `mode` specifica i permessi, come per i file

Se si usa il flag `O_CREAT`, `value` vanno specificati!

**Valore di ritorno**: il semaforo in caso di successo, se no `SEM_FAILED`

2. *Chiusura e distruzione*
```c
#include <semaphore.h>
int sem_close(sem_t * sem );
int sem_unlink(const char * name );
```

`sem_close` chiude il semaforo per il processo corrente
`sem_unlink` rimuove il semaforo per tutti i processi

**Valore di ritorno**: $0$ in caso di successo, se no $-1$

3. *Incrementa/Decrementa*
```c
#include <semaphore.h>
int sem_wait(sem_t * sem );
int sem_post(sem_t * sem );
```

`sem_wait` decrementa di $1$ il semaforo
- Se il semaforo dovesse assumere valori negativi, blocca il chiamante

`sem_post` incrementa di $1$ il semaforo

**Valore di ritorno**: $0$ in caso di successo, se no $-1$

3. *Operazioni particolari*
```c
#include <semaphore.h>
int sem_trywait(sem_t *sem);
int sem_getvalue(sem_t *restrict sem, int *restrict sval);
```

`sem_trywait` come la `sem_wait`
- Ma non blocca in caso il semaforo vada in negativo
- Ma fallisce

`sem_getvalue` colloca nell'intero puntato da `sval` il valore del semaforo


## Esempio di Semafori Non Anonimi
Si creino due programmi che comunicano tramite un semaforo.
- Il primo effetua una `post` ogni volta che l'utente preme *Enter*
- Il secondo stampa una stringa ogni volta che il primo effettua una `post`

**Programma 1**
```c
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <semaphore.h>
#include <string.h>

int main(int argc, char *argv[]){
    sem_t * s;
    
    s = sem_open("/semaforo", O_CREAT , S_IRUSR | S_IWUSR, 0);
    if(s == SEM_FAILED) {
        printf("Error creating/opening the semaphore %s\n", strerror(errno));            
        exit (1);
    }
    
    while(1){
        printf("Premi enter per una post: ");
        getchar();
        sem_post(s);
    }
    sem_close(s); /* Codice irraggiungibile*/
    return 0;
}
```

**Programma 2**
```c
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <semaphore.h>
#include <string.h>

int main(int argc, char *argv[]){
    sem_t * s;
    int i = 0;
    
    s = sem_open("/semaforo", O_CREAT , S_IRUSR | S_IWUSR, 0);
    if(s == SEM_FAILED) {
        printf("Error creating/opening the semaphore %s\n", strerror(errno));           
        exit (1);
    }
    
    while(1){
        sem_wait(s);
        printf("Wait %d effettuata\n", i);
        i++;
    }
    sem_close(s); /* Codice irraggiungibile*/
    return 0;
}
```

**Osservazioni:**
- Il valore del semaforo è persistente. Se Programma 2 non viene eseguito, il semaforo può crescere di valore
- Si possono eseguire più istanze di entrambi i programmi
  - Più istanze di Programma 1 accumulano valore nel semaforo
  - Se ci sono più istanze di Programma 2, solo una può essere sbloccata per ogni incremento
  - Il sistema operativo tendezialmente è *fair*. Fa load balancing tra più semafori in attesa

## Unnamed semaphores
Si utilizzano in maniera simile, ma più semplice rispetto ai *Named Semaphores*
Diversa procedure di aperture chiusura

1. *Creazione*
```c
#include <semaphore.h>
int sem_init(sem_t * sem , int pshared , unsigned int value );
```

Crea il semaforo e lo colloca in `sem`, inizializzato a `value`

**Importante:**
`sem_open` ritorna un puntatore a semaforo (`sem_t *`), che viene allocato dalla libreria
`sem_init` colloca il puntatore a semaforo in `sem`
- Il programmatore deve devidere dove allocare il semaforo, di tipo `sem_t`
- Può esser una variabile globale, locale, allocata dinamicamente o su una regione di memoria condivisa

**Argomenti obbligatori**
Se `pshared` è $0$, il semaforo non viene condiviso tra processi, ma solo tra thread
- `sem` può essere una comune variabile globale

Se `pshared` è $\neq 0$, il semaforo viene condiviso tra processi (tramite `fork`)
- `sem` deve essere in una zona di memoria condivisa

**Conseguenza:** meglio usare Named Semaphore con applicazioni multi-processo

2. *Distruzione*
```c
#include <semaphore.h>
int sem_destroy(sem_t * sem );
```

Distrugge il semaforo `sem`.
Se esso è condiviso tra processi, tutti i processi devono invocare `sem_destroy`

Nota: `sem_close` e `sem_unlink` sono usato solo coi *Named Semaphores*

3. *Incremento/Decremento*
Si usano `sem_post()` e `sem_wait()` come per i *Named Semaphores*

## Unnamed semaphores - Esempio
Si crei un programma con due thread. Il primo ogni secondo manda un messaggio al secondo, usando una variabile globale condivisa (di tipo `char[]`).
Il secondo lo stampa. 

**Struttura del programma:**
```c
#include <stdio.h>                                                                                      
#include <unistd.h>
#include <semaphore.h>
#include <pthread.h>

sem_t s_scrittura, s_lettura;     /* Due semafori */
char buffer [50]; /* Buffer condiviso tra Thread */

void * sender(void *arg){
    ...
}

void receiver(){
    ...
}

int main(int argc, char *argv[]){
    pthread_t t;
    sem_init(&s_scrittura, 0, 0);
    sem_init(&s_lettura, 0, 1);
    pthread_create(&t, NULL, sender, NULL); /* Thread creato per sender */
    receiver();                             /* Il Main fa da receiver */
}
```

**Logica del programma:**
Bisogna evitare che un thread legga mentre un altro scrive
- Si potrebbe leggere una stringa in stato inconsistente!
- Senza terminatore!
 
Servono due semafori:
- `s_scrittura` notifica che `sender` ha terminato una scrittura
  - `sender` mette un *gettone* quando finisce la scrittura, `receiver` attende il gettone per iniziare la lettura
- `s_lettura` notifica che `receiver` ha terminato la lettura
  - `receiver` mette un *gettone* quando finisce la lettura, `sender` attende il gettone per iniziare la nuova scrittura
  
`s_scrittura` deve essere inizializzato a $0$ perchè `receiver` aspetti la prima scrittura
`s_lettura` deve essere inizializzato a $1$ perchè `sender` possa fare la prima scrittura

**Sender:**
1. `sem_wait(s_lettura)`: per essere sicuro che `receiver` abbia terminato la lettura
2. Scrive su `buffer`
3. `sem_wait(s_scrittura)`: per notificare termine scrittura

**Receiver:**
1. `sem_wait(s_scrittura)`: per essere sicuro che `sender` abbia terminato la scrittura
2. Legge su `buffer`
3. `sem_post(s_lettura)`: per notificare termine lettura

**Sender e Receiver:**

```c
void * sender(void *arg){
    int i = 0;    
    while (1){
        sem_wait(&s_lettura);
        sprintf(buffer, "Message %d\n", i);
        sem_post(&s_scrittura);
        i++;
        sleep(1);
    }
}

void receiver(){
    while (1){
        sem_wait(&s_scrittura);
        printf("Received: %s\n", buffer);
        sem_post(&s_lettura);
    }
}

...
sem_init(&s_scrittura, 0, 0);
sem_init(&s_lettura, 0, 1);
```

![width:700px](images/sem-example.png)
