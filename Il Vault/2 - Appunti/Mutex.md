---
data: 2024-06-03
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Mutex
tipologia: appunti
stato: "1"
capitolo: Sincronizzazione
---
- - -
*Primo costrutto di sincronizzazione: I mutex. Problema preliminare, definizione di Mutex e implementazione in Linux.*
- - -
# I mutex
Vediamo un *primo costrutto* di sincronizzazione: i *mutex*.

## Problema delle Sezioni Critiche
I thread condividono la memoria
- Possono condividere informazioni usando *Variabili Condivise*

E' necessario sincronizzare l'*accesso alle variabili condivise*
- Due thread non devono scrivervi contemporaneamente
- Un thread non deve leggere una variabile condivisa mentre un'altro la scrive
- Altrimenti avrei *casini*!
- Tema accennato con i *segnali*, mediante il *problema dell'incremento perso* ([[Segnali#^45417b]]).

**PROBLEMA.**
Immaginiamo due thread che eseguono il seguente codice:
```c
static int glob = 0;
static void * threadFunc(void *arg){
    int loops = *((int *) arg);
    int loc, j;
    for (j = 0; j < loops; j++) {
        loc = glob;
        loc++;
        glob = loc;
    }
    return NULL;
}
```

Il seguente codice produce risultati non predicibili.

**Esempio:**
- Thread 1 è interrotto durante l'incremento
- Thread 2 effettua l'incremento 
- Thread 1 completa l'incremento

L'incremento effettuato dal Thread 2 *è perso!* (o potenzialmente); ho uno *stato inconsistente del programma*. Avrò l'incremento perso circa al $\sim 50 \%$.

![450](images/sync-fail.png)

**Osservazioni**
Sostituire:
```c
loc = glob;
loc++;
glob = loc;
```
con `glob++;` non risolve il problema.
In molti processori (e.g., ARM) non hanno una istruzione di incremento
- Il compilatore traduce `glob++;` in istruzioni Assembly equivalenti alle 3 righe di codice di cui sopra

## Definizione di Sezione Critica
**Definizione.** (*Sezione critica*)
Una *Sezione Critica* è una sezione di codice la cui esecuzione deve essere *atomica* (nel senso autonoma)
- Non può essere *interrotta* da un altro thread
- Nessun altro thread può eseguire quel codice *contemporaneamente*

Una sezione critica accede a *risorse condivise*
- *Solo un thread per volta vi può fare accesso*

Le sezioni critiche sono anche dette *Regioni Critiche* (sinonimo). 

## Funzionamento di sezione critica
Prima di vedere il costrutto, vediamo come funzionerebbe (da un punto di vista teorico) una *sezione critica*

L'accesso a una sezione critica avviene in *Mutua Esclusione*
- Un thread si *prenota* per l'accesso
	- Se la sezione critica non è utilizzata, il thread vi accede (*lock*)
	- Altrimenti attende finchè non si libera
- Al termina della sezione critica, il thread *rilascia* la sezione (*post*)

![600](images/critical-region.png)

Adesso siamo pronti per vedere il *mutex*.

## Definizione di Mutex
Un *Mutex* è un costrutto di sincronizzazione che gestisce l'accesso a una sezione critica

Un mutex ha due stati
- **Locked**: la sezione è occupata
- **Free**: la sezione è libera

Un thread può fare due azioni su un mutex:
- **Lock**: prenota l'accesso per l'occupazione della sezione critica
- **Release/Unlock**: rilascia la sezione critica

![600](images/mutex.png)

## Implementazione in Pthread
I mutex sono variabili di tipo `pthread_mutex_t`
- Sono solitamente *variabili globali*
- Inizializzate dal `main`
- Usate da *qualsiasi thread* 

Necessario includere:
```c
#include <pthread.h>
```
Si utilizzano con le funzioni di libreria `pthread_mutex_*`

## Inizializzazione dei Mutex
```c
#include <pthread.h>
int pthread_mutex_init(pthread_mutex_t * mutex , const pthread_mutexattr_t * attr );
```

Inizializza il mutex `mutex`, che viene *passato per riferimento* (tipo `pthread_mutex_t *` )
L'argomento `attr` specifica gli attributi, che non vedremo
- Può essere `NULL`

Valore di ritorno, come in tutte le funzioni di Pthread (omesso nelle successive slide):
- $0$ in caso di successo
- Il codice di errore altrimenti

## Lock di Mutex
```c
#include <pthread.h>
int pthread_mutex_lock(pthread_mutex_t * mutex );
```

Acquisisce il *lock* del mutex
- Blocca il chiamante finchè il lock non diventa libero

## Release di Mutex
```c
#include <pthread.h>
int pthread_mutex_unlock(pthread_mutex_t * mutex );
```

Rilascia il lock

**Nota:** `mutex` è **sempre** passato per riferimento! 

## Altre Operazioni
```c
#include <pthread.h>
int pthread_mutex_trylock ( pthread_mutex_t *mutex);
```
Acquisisce il lock
- Se il lock è già preso da qualcun'altro fallisce con errore (valore di ritorno) `EBUSY`

## Distruzione di Mutex
```c
#include <pthread.h>
int pthread_mutex_destroy ( pthread_mutex_t *mutex );
```

Rilascia la *memoria occupata* dal lock mutex
Tale lock non sarà più utilizzabile

---
## Esempio
Realizzazione del precedente programma (incremento di una variabile da parte di due thread in parallelo) usando in mutex

```c
#include <stdio.h>                                                                                                                 
#include <stdlib.h>
#include <stdlib.h>
#include <pthread.h>

static int glob = 0;
static pthread_mutex_t mtx;

static void * threadFunc(void *arg){
    int loops = *((int *) arg);
    int loc, j;
    for (j = 0; j < loops; j++) {
        pthread_mutex_lock(&mtx);       /*    LOCK            */
        loc = glob;                                     /* ┰                  */
        loc++;                                            /* ┃ Critical Section */
        glob = loc;                                     /* ┻                  */
        pthread_mutex_unlock(&mtx);   /*    RELEASE         */
    }
    return NULL;
}
int main(int argc, char *argv[]){
    pthread_t t1, t2;
    int loops = 10000000;
    
    pthread_mutex_init(&mtx, NULL);
    pthread_create(&t1, NULL, threadFunc, &loops);
    pthread_create(&t2, NULL, threadFunc, &loops);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_mutex_destroy(&mtx);   
    printf("glob = %d\n", glob);
    exit(0);
}
```

Il programma senza l'uso di mutex:

```c
#include <stdio.h>                                                                                        
#include <stdlib.h>
#include <pthread.h>

static int glob = 0;

static void * threadFunc(void *arg){
    int loops = *((int *) arg);
    int loc, j;
    for (j = 0; j < loops; j++) {
        loc = glob;                 /* ┰                  */
        loc++;                      /* ┃ Critical Section */
        glob = loc;                 /* ┻                  */
    }
    return NULL;
}

int main(int argc, char *argv[]){
    pthread_t t1, t2;
    int loops = 10000000;    
    pthread_create(&t1, NULL, threadFunc, &loops);
    pthread_create(&t2, NULL, threadFunc, &loops);      
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);      
    printf("glob = %d\n", glob);
    exit(0);
}
```

La somma non è correttamente $20000000$, ma un numero inferiore (e.g., $10493368$)

---
## Deadlock
Un *Deadlock* o stallo è una situazione in cui due o più thread risultano bloccati
- *Ognuno attende una condizione che non potrà mai verificarsi*
- Il programma cessa di eseguire

Quando si usano due o più mutex possono capitare situazioni di questo tipo
- Necessario che il programmatore le preveda e le eviti

**Esempio Analogico:** Vado in segreteria segreteria per chiedere qualcosa relativo al bando ERASMUS+; la segreteria mi manda all'ufficio internazionale per le informazioni. L'ufficio internazionale mi manda alla segreteria studenti (oppure Banana Joe).

**Esempio:** 
**Thread A:**
```c
pthread_mutex_lock(mutex1); // <--- LOCK 1
pthread_mutex_lock(mutex2); // <--- LOCK 2
... Sezione Critica ...
pthread_mutex_unlock(mutex2);
pthread_mutex_unlock(mutex1);
```

**Thread B:**
```c
pthread_mutex_lock(mutex2); // <--- LOCK 2
pthread_mutex_lock(mutex1); // <--- LOCK 1
... Sezione Critica ...
pthread_mutex_unlock(mutex1);
pthread_mutex_unlock(mutex2);
```

Come evitare i deadlock:
- Usare altri *tipi di sincronizzazione* quando possibile:
	- Pipe, FIFO
- Usare un *basso numero di mutex*
- *Modellare l'uso di tanti mutex* con espedienti matematici
	- Tecniche basate sui grafi
	- Non vediamo in questo corso
- Usare il buonsenso!
