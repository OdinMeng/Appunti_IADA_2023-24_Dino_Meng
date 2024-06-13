---
data: 2024-05-21
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Funzionamento Interno della Malloc (cenni)
tipologia: appunti
stato: "1"
capitolo: Memoria
---
- - -
*Cenni al funzionamento interno della malloc: program break, syscall sbrk, strutture dati Arena e Linked List, struttura interna degli spazi liberi o occupati dello heap.*
- - -
# Cenni di funzionamento interno della Malloc
Le funzioni `malloc calloc realloc free` sono delle funzioni di libreria: mantengono lo heap $\xi$ con delle *strutture dati*. Vediamo in dettaglio *come* fanno a mantenere questo heap

## System Call sbrk
Esse usano la System Call `sbrk`.

```c
void *sbrk(intptr_t increment);
```

Incrementa di `increment` il *data segment*, inteso come unione di *segmento codice, dati e heap* ($\zeta \cup \delta \cup \xi$).
In pratica, informa il SO che l'*heap* si sta *espandendo*.
- Il SO, se necessario, *imposterà* la MMU per accogliere pagine aggiuntive

Chiamare la `sbrk` è di per se sufficiente per poter usare indirizzi virtuali più alti

![700](images/sbrk.png)

Tuttavia, per il programmatore sarebbe difficile gestire la memoria dinamica solo usando la `sbrk`
- Dovrebbe tenere traccia di *ogni allocazione e di ogni de allocazione*
- Dovrebbe avere una tecnica per riusare i *buchi* lasciati liberi da una deallocazione
	- Nel momento in cui si fa una nuova allocazione, così da evitare delle eventuali *frammentazioni*.
- Invocare la `sbrk` a ogni allocazione è *inefficiente*
	- Una System Call è lenta (implica un *Context Switch*)
Che incubo! Meno male che non bisogna reinventarsi la ruota...

Le funzioni di libreria `malloc`, etc., gestiscono tutto ciò per il programmatore
- Utilizzando opportune *strutture dati*

---
## Storia della Malloc
La moderna funzione `malloc` deriva dalla proposta di Doug Lea, professore della *State University of New York at Oswego*

Internamente usa una *linked list* per tenere traccia delle zone occupate.

**Nota Tecnica:** *heap* ha due significati!
1. Una struttura dati che implementa una coda a priorità tramite un albero (*informatica teorica*)
    - Permette di trovare facilmente il massimo di un insieme di numeri
    - Veloce da aggiornare
2. La zona della memoria virtuale dove viene allocata la memoria dinamica (*informatica ingegneristica*) ($\xi$)
Queste due definizioni non c'entrano per niente a vicenda

## Funzionamento della Malloc
La `malloc` gestisce *blocchi di grandezza variabile*
- Non c'è nessuna discretizzazione o utilizzo di blocchi di grandezza fissa
- Porta ad avere *frammentazione esterna*: memoria sprecata perchè è una zona contigua troppo piccola per essere allocata

**Esempio.** (*Frammentazione esterna*)
E' possibile che si giunga a  situazione come questa:
- Esempio con blocchi di dimensione fissa di 8B

![600](images/fragm.png)

`malloc(48)` potrebbe essere evasa, se la memoria libera fosse contigua. Cosa si fa per risolvere questo problema? Niente, la si accetta com'è.

## Struttura Dati: Arena
La `malloc` gestisce indipendentemente *più di una zona di memoria*, dette *Arenas*.
- Le strutture dati sono replicate
- Rende *più efficiente l'utilizzo in contesti multithread*
	- Le funzioni `malloc`, etc., sono Thread Safe
- Evita che diversi thread vengano rallentati aspettando il release di un *lock*
	- I lock sono necessari, ma l'utilizzo di più di un strutture ne diminuisce l'impatto
- Le *Arena* sono praticamente un espediente per la *malloc* *efficiente* e *sicura*.

## Struttura Dati: Linked List e Doubly Linked List
1.  Una zona di memoria gestita dalla `malloc` é amministrata tramite una *linked list*
2. I segmenti ancora liberi sono una *Doubly linked list*
	- Le zone allocate sono momentaneamente rimosse dalla lista

![600](images/block-list.png)

3. Ogni *zona libera o allocata* ha una `struct` nei *primi byte* che fornisce *informazioni su di essa e sui blocchi adiacenti* (struttura interna delle zone di memoria)

- **Zona Libera**
  ![600 ](images/block-free.png)
- **Zona Allocata**
  ![400 ](images/block-used.png)

---
## Allocazione di Grandi Regioni di Memoria
In caso la `malloc` debba allocare *grandi regioni di memoria* (tipicamente $>128~kB$) usa la System Call `mmap` per allocare una zona di memoria.
- `malloc` chiede una regione di tipo `MAP_ANONYMOUS|MAP_PRIVATE`. Non deve essere condivisa con nessuno (no flag `MAP_SHARED`!)
- Il SO crea *una o più pagine per il processo*
- Le colloca in una posizione *a sua scelta* nello *spazio degli indirizzi virtuali*
- Non sempre ottengo un *puntatore* in $\xi$

![400](images/mmap.png)
