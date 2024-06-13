---
data: 2024-06-03
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Domande sulla Sincronizzazione
tipologia: appunti
stato: "1"
capitolo: Sincronizzazione
---
- - -
*Quiz sulla sincronizzazione.*
- - -
# Quiz
Due Thread dello stesso processo condividono le variabili globali?
`• Si` `• No`
**RISPOSTA:** *Sì*

La funzione `pthread_join` attende la terminazione:
`• Di un qualsiasi thread del sistema`
`• Di un qualsiasi thread del processo corrente`
`• Di un thread specifico`

Quando un thread invoca la funzione `pthread_exit`:
`• Il thread corrente termina`
`• Il processo corrente termina`
`• Il thread specificato come argomento della funzione termina`

Si consideri il seguente codice:
```c
void * func(void *arg){
    sleep(5);
    exit(0);
}

int main(){
    ...
    pthread_create(&t, NULL, func, NULL);
    sleep (10)
    pthread_join(t, NULL);
    exit(0);
}
```
Dopo quanti secondi temina il processo?
`• 5` `• 10` `• 15` 

La parallelizzazione è una soluzione per migliorare le prestazioni:
`• di qualsiasi algoritmo`
`• solo di algoritmi che accedono al disco`
`• solo di algoritmi che posono eseguiti per mezzo di più flussi contemporanei`

Il seguente codice è corretto?
```c
pthread_mutex_lock(&mtx);
var++;
pthread_mutex_lock(&mtx);
```
`• Si, il lock viene rilasciato`
`• No, il thread entra in uno stato di attesa perpetuo`

Un semaforo può essere inizializzato:
`• A qualsiasi valore intero`
`• A qualsiasi intero non negativo`
`• A qualsiasi intero positivo`

Un programma esegue il seguente codice:
```c
sem_init(&s, 0, 0);
for (i = 0; i<10; i++){
    sem_wait(&s);
    sem_post(&s);
}
```
Al termine del programma che valore assume il semaforo?
`• 0`
`• 10`
`• Il programma non termina perché entra in uno stato di attesa perpetuo`

Si immaginino due thread di un processo che operano su semaforo `s` inizializzato a $1$.
Il Thread 1 esegue:
```c
void * t1(void *arg){
    sem_post(&s);
    sem_post(&s);
}
```
Il Thread 2 esegue:
```c
void * t2(void *arg){
    sem_wait(&s);
    sem_wait(&s);
    sem_wait(&s);
    sem_post(&s);
}
```
Il programma:
`• Termina`
`• Entra in uno stato di attesa indefinito`
