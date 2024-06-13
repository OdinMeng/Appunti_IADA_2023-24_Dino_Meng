---
data: 2024-06-03
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Container
tipologia: appunti
stato: "1"
capitolo: Argomenti Misti (Sistemi Operativi)
---
- - -
*Container: motivazioni, premesse, definizione e feature Linux per i container. Container Engine.*
- - -
# Container
## Motivazioni per Container: Limiti delle VM
1. *Allocazione statica delle risorse*
Una VM ha allocate *staticamente* una certa quantità di risorse della macchina fisica
**Esempio:** un server con $16$ core e $64GB$ di RAM
- Posso fare $3$ VM con $5$ core e $20GB$ di RAM ognuna
- Alcune risorse vanno mantenute per il funzionamento della macchina fisica: $1$ core $4GB$ di RAM
Questo può essere *inefficiente*
- Non sempre tutte le VM hanno necessità di $5$ core! Si potrebbe allocare *"dinamicamente"* le risorse, compiendo una specie di *"overbooking"* in certi casi.

2. *Eccesso Relativo di Software*
Con l'approccio *"una VM - un'applicazione"*, su tutte le VM gira un SO, che di fatto *esegue pochi processi*
- Quelle per cui è dedicata la VM
- **Inefficiente!** proliferazione di *SO che non fanno quasi niente!*
- Esempio: $10 \text{ VM} \implies 10 \text{ Ubuntu}$

Quando voglio avviare una *nuova applicazione*, devo:
- Creare una VM
- Installare il *SO*
- Avviare la mia applicazione
*Ci metto tanto tempo (di lavoro umano)*

## VM vs SO
Facciamo un parallelismo filosofico tra le *VM* e i *SO* (processi).

Ricordiamoci a cosa servono le **VM**:
- *Isolare* sistemi indipendenti
- *Controllare* che essi non si danneggino a vicenda
Ma è simile allo scopo di un *processo* in un SO. Il **SO** serve a:
- *Isolare* processi diversi (con le tecniche della *memoria virtuale*)
- *Controllare* l'accesso alle risorse tramite utenti e privilegi
Quindi l'idea per superare il problema iniziale è quello di usare i processi, al posto delle VM.

**Problema.**
Purtroppo, in un *SO*, *un'applicazione problematica* può *bloccare il sistema*, se:
- Usa al 100% la CPU
- Riempie il disco o la RAM
Un'*applicazione* potrebbe *provocare problemi* a un'altra applicazione
- Satura le risorse di I/O rete, ecc...
- Se *modifica i suoi file di configurazione* (solo se eseguita come `root`)

**Soluzione:** Potrei avviare un processo che ha *risorse limitate*
- Il SO si occupa di limitare l'accesso a CPU/memoria/disco (quindi di creare delle specie di gabbie)
Sarebbe *quasi* come una VM
- Un'applicazione che gira *senza poter influenzare le altre applicazioni!*
I sistemi Linux forniscono queste funzionalità:
- Ovvero far girare processi con *privilegi limitati*. Vediamo di dare una definizione formale ad un costrutto del genere

## Definizione di Container
Un *container* è un albero di processi che gira con privilegi limitati
- Non ha accesso completo alle risorse (disco, CPU, memoria, file, etc.)
- Pensa di essere l'*unico* (inseme di) *processo*(i) *in esecuzione*
I container sono un'illusione: illudono un processo di avere poche risorse.
Vedere: [Containers as an illusion](https://man7.org/conf/ndcsecurity2022/containers_as_an_illusion-NDC-Security-2022-Kerrisk.pdf) per approfondire il discorso

I processi di un container quindi non possono:
- *Vedere gli altri processi* della macchine
- *Vedere le risorse* che *non* gli sono state *assegnate*
Ovviamente un container *non deve poter compromettere l'intera macchina*
- Si utilizzano varie funzionalità di Linux per raggiungere questi scopi

Vedremo in particolare le funzionalità Linux per:
- Isolare File System
- Isolare risorse della CPU e della Memoria
- Isolare i Namespace

## Isolamento del File System
Linux permette di avviare un processo che vede solo un sotto albero del FS
**Funzionalità `chroot`**: cambia *radice del FS*

Permette di evitare che un processo (e i suoi figli) legga/modifichi file fuori dall'albero

**Sintassi:**
```bash
chroot /path/to/new/root command
```

Ovvero il processo `command` ha la radice in `/path/to/new/root` e vede solo questo sottoalbero.

## Isolamento delle Risorse CPU-Memoria
E' possibile limitare quanta CPU e memoria un processo usa.

**Funzionalità `cgroup`:** offerta dalle System Call Linux
- Permettono di limitare:
  - Uso della CPU
  - Uso della memoria
  - Velocità di I/O
  - Traffico di rete
  
Ovvero, permettono di evitare che un processo sovraccarichi il sistema

I `cgroup` sono relativamente nuovi. *Stabili dal 2018* con una modifica al *Kernel Linux*.
Vengono usati attraverso *uno pseudo file system*
- In `/sys/fs/cgroup`

Operazioni:
1. Creazione di un gruppo di processi:
  `mkdir /sys/fs/cgroup/my-group`
2.  Limitazione delle risorse:
  `echo 50000 100000 > /sys/fs/cgroup/cpu/my-group/cpu.max` (ovvero scrivo su `cpu.max` la frazione)
  Significa che i processi del gruppo, in totale, non possono usare più del 50% del tempo CPU della macchina
3.  Collocazione di un processo nel gruppo:
  `echo 8764 > /sys/fs/cgroup/cpu/my-group/cgroup.procs` (ovvero scrivo su `cgroup.procs` il processo a cui appartiene `cgroup`)

## Isolamento dei Namespace
E' possibile creare processi che *non vedono le risorse globali della macchina fisica*, ovvero:
- Quali sono gli *altri processi in esecuzione*
- Le *interfacce di rete*
- I *dispositivi di I/O*
- Gli *utenti* e *gruppi* sulla macchina

**Funzionalità Namespace:** offerta dalle System Call Linux
- Vedi comandi `unshare` e `nsenter`

# Container Engine
Queste funzioni del SO appena elencate sono *potenti*, ma *poco usabili*:
- Per usarle, *necessario conoscerle a fondo*
- *Errori nell'utilizzo* possono compromettere il sistema
- Non c'è sicurezza by default:
	- Necessario *togliere* privilegi ai processi
Quindi devo fare tutto a mano... qual è la soluzione?

Esistono dei software che si chiamano *Container Engine* (ovvero dei tool) che permettono di usare *in maniera semplice queste funzionalità*
- *Avviare container*: gruppi di processi isolati
- *Monitorarne* il funzionamento

Offrono comandi/API semplici per creare container. Popolari:
- **Linux Containers (LXC):** tra i primi a nascere nel 2008
- **Docker:** Nato nel 2013. Standard *de facto*

**Principio di funzionamento:** *eseguono processi con risorse limitate, che vivono in un file system limitato*
- Di *default*, i container hanno *privilegi minimi*
- Possibile configurarli per avere maggiori privilegi: e.g., accedere a porzioni del FS

# Utilizzo odierno
L'utilizzo di *container* sta *prendendo il posto* dell'utilizzo delle *VM*.
- Più scalabile
- Costringe a separare codice da dati
- Ho lo stesso *livello di isolamento*, con *meno fatica*!

Nelle grandi aziende, si utilizzano *cluster di nodi* che eseguono container.
Esistono *software di orchestrazione di container* basati su Docker:
- **Kubernetes**: il più usato. Open-Source
- **OpenShift** e **OKD**: proprietari di *Red Hat*