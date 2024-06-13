---
data: 2024-06-03
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Problema del Produttore e Consumatore
tipologia: appunti
stato: "1"
capitolo: Sincronizzazione
---
- - -
*Problema tipico della programmazione parallela: il problema del produttore e consumatore.*
- - -
# Produttore e consumatore
Vediamo un *problema classico* dell'informatica.

**Problema.** (*Produttore e consumatore*)
Problema classico dell'informatica, applicabile in molti contesti
- Pacchetti di rete
- Calcolo parallelo

**Definizione**:
- Due thread comunicano tramite *un buffer di grandezza limitata*, che contiene massimo $N$ oggetti
	- Il thread *producer* inserisce gli oggetti nel buffer
	- Il thread *consumer* estrae gli oggetti dal buffer, nell'ordine in cui sono stati inseriti

![600](images/prod-cons.png)

## Soluzione non-concorrente
**Variabili Condivise tra Produttore e Consumatore:**
```c
<tipo> buffer [N]; // Il buffer
int contatore = 0; // Indicazione di elementi usati nel buffer
```

**Variabili NON Condivise:**
```c
int in;  // Indice dove il produttore inserisce in buffer
         // Gestito in artitmetica Modulo N
int out; // Indice dove il consumatore estrare
```

**Produttore:**
```c
while (1) {
    while (contatore == BUFFER_SIZE); /* non fa niente se il buffer è pieno */
    buffer[in] = next_produced;
    in = (in + 1) % BUFFER_SIZE;
    contatore++;
}
```

**Consumatore:**
```c
while (1) {
    while (contatore == 0); /* non fa niente se il buffer è vuoto */
    next_consumed = buffer[out];
    out = (out + 1) % BUFFER_SIZE;
    contatore--;
}
```

Questa
Il codice della slide precedente non funziona.
- C'è accesso *concorrente a variabili condivise*
Le istruzioni `contatore++;` e `contatore--;` non possono essere eseguite simultaneamente
- Alcuni incrementi o decrementi potrebbero essere persi
- Il programma ha un *baco!*
- Il programma non è *thread safe*.

## Prima Soluzione Concorrente
**1. Accesso concorrente a `contatore`**: è possibile usare un *mutex*
  Nota: non c'è mai accesso concorrente a stesso elemento di `buffer`
 - Tuttavia le istruzioni `while (contatore == BUFFER_SIZE);` e `while (contatore == 0);` effettuano *Busy Waiting*
	- Controlla continuamente la variabile `contatore`
	- Spreco enorme di CPU!

## Soluzione Classica
Si usano due semafori
- Semaforo `empty`: conta quanti posti *liberi* ci sono nel buffer
- Semaforo `full`: conta quanti posti *occupati* ci sono nel buffer

La variabile `contatore` diventa *inutile*. I semafori già contano quanti posti liberi e occupati ci sono

Soluzione completa nel *materiale* in `esercizi/myProdCons.c` ([[myProdCons.c]])

**Inizializzazione**
```c
<tipo> buffer [N];
sem_t empty, full;

int main(){
    ...
    sem_init(&empty, 0, N); /* Inizialmente N posti liberi */
    sem_init(&full, 0, 0);  /* e 0 occupati */
    ...
}
```

**Produttore**
```c
int in = 0;
while (1) {
    sem_wait(&empty); /* Attende che ci posto libero nel buffer */  
    buffer[in] = next_produced;
    in = (in + 1) % N; 
    sem_post(&full); /* Un dato un più nel buffer */
}
```

**Consumatore**
```c
int out = 0;
while (1) {
    sem_wait(&full); /* Attende che ci siano dati da consumare */ 
    <type> next_consumed = buffer[out];
    out = (out + 1) % N;
    sem_post(&empty); /* Un posto libero in più nel buffer */
}
```
