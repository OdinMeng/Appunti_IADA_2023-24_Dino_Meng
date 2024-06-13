---
data: 2024-06-03
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Confronto tra Mutex e Semafori
tipologia: appunti
stato: "1"
capitolo: Sincronizzazione
---
- - -
*Confronto tra Mutex e Semafori: implementazione di mutex con semafori e viceversa.*
- - -
# Mutex e Semafori
I **Mutex** regolano l'accesso a una sezione critica:
- Solo un thread per volta può avere il lock
- Operazioni: `lock` `unlock`

I **Semafori** sono degli interi positivi condivisi:
- Simili a un contenitore di gettoni
- Operazioni: `post` `wait`

I *Semafori* sono un costrutto più generale
- Un *Semaforo* può facilmente essere usato come *mutex*. Non vale il contrario!

## Costruzione di Mutex con Semaforo
**Inizializzazione:**
*Mutex*
```c
pthread_mutex_t lock;
pthread_mutex_init(&lock, NULL);
```

*Semaforo*: deve essere inizializzato al valore $1$
```c
sem_t sem;
sem_init(&sem, 0, 1);
```

**Lock:**
*Mutex*
```c
pthread_mutex_lock(&lock);
```

*Semaforo*
```c
sem_wait(&sem); 
```

**Release:**
*Mutex*
```c
pthread_mutex_unlock(&lock);
```

*Semaforo*
```c
sem_post(&sem); 
```

Per implementazione completa, vedi implementazione in `esercizi/myMutex.c` [[myMutex.c]]

**Idea.** (implementazione di lock, unlock)
```c
typedef struct{                                              
    sem_t s;
} myMutex;

myMutex myMutex_init(){
    myMutex m;
    sem_init(&(m.s), 0, 1);
    return m;
}

void myMutex_lock(myMutex * m){
    sem_wait( &(m->s) );
}

void myMutex_unlock(myMutex * m){
    sem_post( &(m->s) );
}
```

---
## Costruzione di Semafori con Mutex
Si può costruire un semaforo con un `mutex`, ma é *inefficiente*
- Un semaforo é un intero condiviso *positivo*
- Un mutex protegge l'accesso a questo intero

**Funzionamento:**
- In caso venga effettuato un decremento (`wait`) quando il semaforo ha valore $0$:
  Il thread attende che un altro thread effettui un incremento (`post`)
- L'unico modo con cui si attendere, é *busy waiting*
	- Un ciclo `for` che verifica ripetutamente
	- Inefficiente

Implementazione (by ChatGPT; se neanche il prof. ha voluto fare...):

```c
struct semaphore {
    pthread_mutex_t mutex;
    int count;
};

void semaphore_init(struct semaphore *sem, int count) {                                  
    pthread_mutex_init(&sem->mutex, NULL);
    sem->count = count;
}

void semaphore_wait(struct semaphore *sem) {
    pthread_mutex_lock(&sem->mutex);
    while (sem->count == 0) {
        pthread_mutex_unlock(&sem->mutex);
        pthread_mutex_lock(&sem->mutex);
    }
    sem->count--;
    pthread_mutex_unlock(&sem->mutex);
}

void semaphore_post(struct semaphore *sem) {
    pthread_mutex_lock(&sem->mutex);
    sem->count++;
    pthread_mutex_unlock(&sem->mutex);
}
```
