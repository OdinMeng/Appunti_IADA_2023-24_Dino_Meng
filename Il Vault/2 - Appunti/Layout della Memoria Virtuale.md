---
data: 2024-05-21
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Layout della Memoria Virtuale
tipologia: appunti
stato: "1"
capitolo: Memoria
---
- - -
*Layout della memoria: organizzazione dell'allocazione degli indirizzi virtuali. Convenzione linux: codice, dati, heap, stack ($\zeta, \delta, \xi, \sigma-\rho$)*.
- - -
# 1. Layout della memoria
Un processo può accedere a *qualsiasi locazione di memoria nello spazio degli indirizzi virtuali*
- Lo spazio degli indirizzi virtuali è *diviso in pagine*
- Se la pagina è in *memoria*, la MMU traduce in *indirizzo fisico*
- Se la pagina *non è in memoria*, il SO la creerà/preleverà *da disco*

## 1.1. Organizzazione della Memoria
Abbiamo molti modi per *organizzare* l'accesso agli indirizzi virtuali.

Un programma che accede a indirizzi "casuali" non è efficiente
- Utilizzo di pagine e memoria sarebbe *molto penalizzato*

Storicamente si cominciavano a usare indirizzi a partire *da quelli "bassi"*:
- Si inizia a utilizzare indirizzo `00 00 00 00`, poi `00 00 00 01`
- Così si riempie una pagina completamente, poi se inizia a usare un'altra

Ci sono diverse convenzioni, che dipendono da architettura dell'elaboratore e OS. Noi vediamo quella per *Linux*

## 1.2. Convenzione Linux
Attualmente, si usano *sia indirizzi all'estremo alto che all'estremo basso*
- La memoria può crescere in due direzioni
- Posso avere due zone di memoria che crescono a seconda dell'esigenza del programmatore

Principalmente abbiamo *direzioni*:
-  **Heap** ($\xi$): cresce dal basso verso l'alto. Usato dal programmatore per allocare memoria quando gli serve
-  **Stack** ($\sigma-\rho$): cresce dall'alto verso il basso. Usato dal compilatore per posizionare le variabili delle funzioni

Un processo può accedere a *qualsiasi locazione di memoria*.
Per convenzione e prestazioni si preferisce iniziare gli *estremi*

Ci sono 4 *zone di memoria*:
- Codice ($\zeta$) - *Dimensione fissata*
- Dati ($\delta$)- *Dimensione fissata* ^7017ea
- Stack ($\sigma-\rho$) - *Dimensione variabile dall'alto al basso*
- Heap $(\xi)$ - *Dimensione variabile dal basso all'alto*

![300](images/layout-1.png)

Adesso andiamo ad approfondire le parti varie.

## 1.3. Codice $\zeta$
Il SO copia il codice del programma dal disco *verso gli indirizzi più bassi*
- Il codice deve obbligatoriamente trovarsi *in memoria*
- Il registro *Program Counter* della CPU punta a un indirizzo in questo range

Questa parte della memoria è *Read Only* (imposta dalla *CPU*): un programma non può modificare se stesso (senno ci sarebbero casini assurdi)

## 1.4. Dati $\delta$

^6aeac3

Gli indirizzi immediatamente *maggiori* del codice, sono usati per le *variabili globali*
- Il compilatore usa questi indirizzi per le variabili globali
- Le variabili globali *inizializzate* vengono riempite direttamente dal SO quando viene avviato il processo
	- Per questo quando inizializziamo gli *array*, devono avere *dimensione nota*.
- Le altre contengono tutti `'\0'` (ovvero hanno valore $0$)

## 1.5. Heap $\xi$
Usato per la *Memoria Dinamica*
- Il programmatore può aver bisogno di *memoria la cui dimensione non viene prevista* in fase di programmazione
- Gestita tramite le funzioni di libreria *malloc* e *free*
- Vedremo *in seguito*

## 1.6. Stack $\sigma-\rho$

^b73f4b

Usato per le variabili relative a funzioni: argomenti e variabili interne
- Come dice, questa zona è gestita come se fosse una *pila*
I dati vengono:
- Impilati per essere aggiunti: *Push* (aggiungo stack)
- Tolti dalla pila quando devono essere usati: *Pop* (rimuovo uno stack)
Si comportano come una *specie di molla*, che va su e giù

I dati vengono aggiunti e tolti dalla cima della pila come nella seguente figura:
![500](images/stack.png)
- Abbiamo una struttura del tipo *last in, first out* (LIFO)

## 1.7. Operazioni di Push e Pop
Concetto pratico per gestire le *funzioni*!
Quando viene chiamata una funzione, si aggiunge un blocco allo stack contente (*Push*):
- Indirizzo di *ritorno*
- *Parametri* copiati (passaggio per valore)
- *Variabili locali* (si cerca il più *vicino*, preferibilmente nello stack stesso) 

Quando la funzione ritorna, il blocco si elimina (*Pop*)

Ogni blocco si chiama *Stack Frame*
- Creato quando la funzione viene invocata
- Cancellato quando la funzione ritorna

**Stack**
![400](images/call-stack.png)

**Stack Frame**
![400](images/stack-frame.png)


---
## 1.8. Stack Frame in Linux
Il layout visto prima é *generico*.

In Linux, precisiamo che ci sono altri costrutti.

Per *data* $\delta$:
- Un segmento per *variabili globali inizializzate* e uno per *quelle non inizializzate*
Per *stack* $\rho-\sigma$:
- `argc` e `argv` in indirizzi alti
- *Top of Stack*: indirizzo minimo per parte alta
Per *heap* $\xi$:
- *Program Break*: indirizzo massimo per parte bassa

![400](images/layout-detail.png)
