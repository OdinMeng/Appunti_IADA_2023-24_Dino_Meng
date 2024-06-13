---
data: 2024-06-03
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Concetto di Thread
tipologia: appunti
stato: "1"
capitolo: Sincronizzazione
---
- - -
*Concetto teorico di Thread: definizione e caratteristiche*
- - -
# Concetto Teorico di Thread
## Definizione di Thread
In Linux (e in quasi tutti i SO), un *processo* può avere molteplici flussi di esecuzione, detti *Thread*
- I thread possono essere visti come un *insieme di processi che condividono la memoria*
- Ma eseguono lo stesso programma

**Nota:** anche Windows permette di creare thread con la System Call `CreateThread()`

Ogni Thread esegue *lo stesso programma e condivide gli stessi dati*
- I segmenti *data*, *heap* e *code* $(\zeta, \delta, \xi)$ sono condivisi 

Un Thread é un *flusso del codice in esecuzione*
- Ha il *suo stack*
- Contiene lo *stato delle funzioni in esecuzione*

Ogni *thread ha uno stack*
- E chiaramente opera su *Registri* e ha un *Program Counter*

![450](images/thread-mem.png)

![600](images/mt-mp.png)

## Comunicazione tra Thread
I Thread possono comunicare tra loro più facilmente che i processi, usando:
- *Variabili globali* in $\delta$ (che è *nativamente* condivisa)
- Costrutti di sincronizzazione
	- *Mutex*
	- *Condition Variable* (vedremo solo sommariamente)
  - *Semafori*

Oggigiorno é più spesso usata un'architettura *multi-thread* che *multi-process*. In realtà dipende sono scelte: ad esempio *Chrome* è ha un paradigma *multi-process*. Ognuno ha i suoi vantaggi e svantaggi; 
- *Multi-thread:* un po' più *"semplice"* da implementare e sincronizzare. Però se il processo principale cade, gli alti thread cadono assieme
- *Multi-process:* complicato da sincronizzare, tuttavia non ha lo svantaggio di programmi multi-thread

## User e Kernel Thread
Esistono due modi per implementare i thread.

- **Kernel Thread**: il *kernel* permette di creare thread
	- Sono di fatto dei processi *light*
	- Vedremo questi, principalmente (in Linux)
- **User Thread**: creati dal *programmatore* o da una *libreria*
	- Il processo (in qualche modo) gestisce e orchestra più flussi di esecuzione
	- Il kernel ne è allo scuro
	- Molto complicato! Inoltre ho le limitazioni dell'esecuzione in *User Mode*
Poi si può fare anche robe strane, come *combinarle*, ma ne staremo allo scuro.

![650](images/u-k-thread.png)
