---
data: 2024-05-16
corso: "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Scheduling tra Processi
tipologia: appunti
stato: "1"
capitolo: Processi
---
- - -
*Scheduling dei processi: ruolo dello scheduler, operazione yield. Algoritmi di scheduling: FCFS, SJFS ,RR, MLQS, CFS.*
- - -
# Scheduling
## Scheduler dei Processi
Lo scheduler dei processi ha più ruoli.

**Ruolo 1.**
Lo *scheduler dei processi* seleziona un processo da eseguire dall’insieme di quelli disponibili
- Mantiene una coda dei *processi pronti*
- Mantiene una coda dei *processi in attesa di evento*. Esempio: completare un'azione di I/O

![500](images/process-queue.png)

**Idea.** (*Classificazione dei processi*)
I processi possono essere classificati *in base al tipo di carico* che generano e il collo di bottiglia che li limita.
- **Processo I/O bound**: impiega la maggior parte del proprio tempo nell'*esecuzione di operazioni di I/O*
- **Processo CPU bound**: impiega la maggior parte del proprio tempo nelle *elaborazioni*

Il compito di uno *scheduler* è di *ottimizzare* l'esecuzione dei processi per farli eseguire nel minor tempo possibile
- Interviene più volte al secondo
- Gestisce l'esecuzione col meccanismo del *time sharing*

Ogni processo inizia dalla *Ready Queue e segue il diagramma di accodamento* finchè non termina
![700](images/scheduling.png)

**Ruolo 2.** + **Definizione.** (*Context Switching*)
Lo scheduler decide a quale processa assegnare la/le CPU
Quando decide che (una) CPU deve essere assegnata a un altro processo, esso deve:
- *Salvare lo stato del processo corrente*
	- Per poterlo poi ripristinare quando il processo stesso potrà ritornare in esecuzione
- *Caricare un nuovo processo* ripristinandone lo stato salvato precedentemente
- Fa molte operazioni sui registri della *CPU*
Si esegue un salvataggio dello stato e, in seguito, un corrispondente ripristino dello stato, detto *Context Switching*

**Nota.** (*Context Switching e l'efficienza*)
Il Context Switching deve essere rapido, siccome è *tempo sprecato*, che non svolge nessun compito utile
- Il SO è ottimizzato per compiere questa azione *velocemente*
- Attualmente nell'ordine di pochi *micro secondi*
- Dipende da hardware e dalle caratteristiche del processo, specialmente la quantità di memoria usata
- Di solito facciamo *context switching* circa una migliaia di volte al secondo. 

**Idea Grafica.**
![600](images/context-switching.png)
- Gli scarti temporali *"idle"* a destra sono *tempo perso*!

---
## Operazione Yield
**Operazione di Yield** (dall'inglese *"dare precedenza $\nabla$"*): un processo dice al kernel, che per il momento *non ha operazioni da fare*.
Il kernel rimuove dalla CPU il processo e lo *riaccoda nella lista dei processi pronti* (stato *ready*)
- E' un modo per rilasciare la CPU prima che scada il quanto di tempo assegnato
- Specialmente usato per processi *real time*, per avere maggior *prestazioni*

In Linux:
```c
#include <sched.h>
int sched_yield(void);
```

---
# Algoritmi di Scheduling
## Problema Preliminare
**Richiamo.** (*L'obbiettivo dello scheduler*)
L'obbiettivo di un SO è di ridurre il *tempo di esecuzione dei processi*. Tuttavia abbiamo dei problemi con questi obbiettivi.
- Obbiettivo *ambiguo*: conviene eseguire prima un lavoro lungo o uno corto?
- Obbiettivo *complesso*: il SO non sa se un processo è lungo/corto, *CPU/I/O intensive*. Praticamente, neanche l'uomo potrebbe delineare un confine netto tra questi due tipi ti processi.

**Conseguenza.**
Esistono diversi *Algoritmi di Scheduling* che si usano per determinare quale processo assegnare a una CPU

## First-Come First Served (FCFS)
**Idea** Il primo processo che richiede la CPU, la ottiene *finchè non termina*
**Pro** Semplice!
**Contro:** Inefficiente (!!!). Sconveniente eseguire un *processo lungo* per primo

![width:800px center ](images/fcfs.png)

## Shortest-Job First Served (SJFS)
**Idea** Il primo più breve, la ottiene la CPU per primo
**Pro** Efficiente (!) Il tempo medio di completamento si abbassa
**Contro:** Inattuabile (!!!): non si sa quanto dura un processo, impossibile determinarlo a priori.

![width:800px center ](images/sjfs.png)

## Round Robin (RR)
**Idea** A turno, ogni processo prende la CPU *per un tempo fissato*
**Pro** Semplice ed equo, il tempo fissato è lo stesso per tutti
**Contro:** Non si possono avere processi ad alta priorità. Forse *troppo* equo

![width:800px center ](images/rr.png)


## Priority Scheduling
**Idea** Ogni processo ha una *priorità data dall'utente*. Viene eseguito il processo a priorità più alta
**Pro** Gestisce la priorità
**Contro:** Un processo a bassa priorità *potrebbe non venire mai eseguito*: funziona bene solo se l'utente definisce bene le priorità

![width:800px center ](images/ps.png)

## Multi-Level Queue Scheduling (MLQS)
**Idea.** Ci sono *code diverse* per ogni livello livello di priorità.
- Ogni coda ha un suo *algoritmo di scheduling*: RR, FCFS
- C'è un *algoritmo di scheduling tra code* (intra-coda)
In questo modo c'è *flessibilità*: si può avere priorità ma non c'è il rischio che un processo non venga mai eseguito 

**Pro** Flessibile, furbo e idealmente semplice
**Contro:** Complesso, un casino da implementare con molti algoritmi e code

Usato in Linux, con varianti

![600](images/mqs.png)

## Linux: Completely Fair Scheduler (CFS)
**In Linux** lo scheduler si chiama *Completely Fair Scheduler*
- I processi sono assegnati a una *Policy di Scheduling* dall'*utente*, ognuna con *meccanismi diversi*
- Il *sistema* provvede a eseguire processi in ogni *policy*, che hanno diversi requisiti
- Le *policy* al loro interno possono gestire *priorità, deadline, ecc*...
	- Ad esempio, `SCHED_DEADLINE` contiene i processi che hanno la garanzia di *essere eseguiti per un certo intervallo di tempo*.
	- Di default ho `SCHED_OTHER`, con *Round Robin* + priorità
	- Le system call per definire priorità sono
		- `nice(2) getpriority(2) setpriority(2) sched_setscheduler(2) sched_getscheduler(2) sched_setparam(2) sched_getparam(2) sched_yield(2)`

![width:600px center ](images/cfs.png)
