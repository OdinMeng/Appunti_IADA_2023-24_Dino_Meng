---
data: 2024-05-16
corso: "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Concetto di Processo
tipologia: appunti
stato: "1"
capitolo: Processi
---
- - -
*Concetto di processo: definizione, tipologie, ruolo dell’S.O. nella gestione dei processi. La vita dei processi, l’albero dei processi e il process control block (PBC).*
- - -
# Concetto di processo
**Definizione.** (*Processo*)
- Un elaboratore svolge uno o più *compiti*
	- Esempio: Controllare la temperatura di una stanza
- Un *compito* si svolge tramite un procedimento formale detto *algoritmo*
- Un programma implementa un algoritmo *tramite istruzioni* in linguaggio macchina (passaggio astratto->concreto)
	- Può essere scritto in un linguaggio di programmazione e *compilato*
- Un *processo* è un *programma in esecuzione*

**Nota storica.** (*Pre-S.O. e con S.O.*)
Inizialmente, ogni elaboratore *eseguiva un programma per volta*, senza *sistema operativo*.
- Caricato all'*avvio del sistema*
- Oppure eseguiti *sequenzialmente* (batch processing)
In ogni caso, *mai* venivano eseguiti in *contemporanea*.
Oggi i sistemi moderni hanno un SO che permette di *eseguire più processi in contemporanea*
- Le risorse del sistema sono gestite *dal SO* che le mette a disposizione tramite le System Call
- Il SO gestisce l'esecuzione dei processi: *scheduling*
- I processi vengono eseguiti a turno

## Struttura del Processo
**Struttura del processo in memoria.**
Un processo risiede *in memoria*, da allocare.
La struttura di un processo in memoria è generalmente suddivisa in *più sezioni*.
- **Sezione di testo**: contiene il *codice eseguibile* 
- **Sezione dati**: contiene le *variabili globali*
- **Stack**: memoria *temporaneamente utilizzata* durante le chiamate di funzioni
- **Heap**: memoria allocata *dinamicamente* durante l’esecuzione del programma  ($\xi$)
Li approfondiremo bene bene quando parleremo della memoria

**FIGURA.** (*Struttura di un processo da allocare*)
![200](images/process-memory.png)


## Tipologie di Processi
Principalmente abbiamo due tipi di processi eseguiti.

1. **Definizione** (*Processo INIT*)
Nei moderni SO, all'avvio del sistema viene avviato un processo fondamentale detto *init* 
- Per *Linux* o sistemi *POSIX-like*
- Eseguito fino allo shutdown $(+\infty)$
- Eseguito automaticamente dal *kernel*
- Ha PID 1 (vedremo dopo)
Il processo *init* avvia altri processi (tramite svariati file di configurazione) in background:
- Per gestire *periferiche*: rete, antivirus
- Per creare l'*interfaccia grafica* della GUI o del terminale

**Definizione.** (*Servizio*)
Un processo avviato in background da *init* é detto *Servizio*
- Formati e comandi diversi tra distribuzioni Linux per gestirli
  Comandi: `service` o `systemctl`

2. **Definizione.** (*Processo utente*)
L'utente può *creare dei processi* - mediante terminale o interfacce grafiche, che a loro volta usando delle System Call - per svolgere i propri compiti
- Browser
- Editor
- Programmi server: server Web, server DNS
- Eccetera...

## Ruolo del Sistema Operativo nei Processi
**Ruolo del S.O. per i processi.**
Il SO mette a disposizione delle *System Call* per:
1. *Creare* nuovi processi
2. *Sincronizzazione:* Attendere il completamento di altri processi per coordinare un compito complesso
3. *Uccidere* processi

**Definizione.** (*PID*)
I processi sono identificati dal un *PID*
- Il processo *INIT* ha PID $1$ per definizione

---
# La Vita di un Processo
## Stati di un Processo
Un processo si può trovare in diversi stati.
1. *Nascita* (new): è stata richiesta la creazione di un processo mediante un *system call*. Il sistema operativo vede se la richiesta sia *"fattibile o meno"* e ben posta: in tal caso, viene ammessa (admitted).
2. *Pronto* (ready): il processo è pronto per l'esecuzione, ma non è ancora in *esecuzione*. Aspetta che lo *scheduler* del S.O. dia il turno al processo.
3. *In esecuzione* (running): Il processo fa le sue cose. Da questo punto possiamo avere tre esiti:
	1. Il processo ha *finito il suo lavoro* (o qualcosa gli costringe di farlo) ed esce. In tal caso è in stato di *"morte"* (terminated). Ho messo le virgolette, perché il processo starebbe aspettando che la sua morte venga *"confermata"* dal suo padre; il processo non è completamente morto.
	2. Lo scheduler del sistema operativo lo mette in pausa e lo *interrompe* (interrupt), facendolo ritornare allo stato di *ready*.
	3. Ho una *system call* lenta e complessa (come quella di leggere un disco magnetico), e il processo viene bloccato. Allora il processo viene messo in *attesa* (waiting), finché ciò che lo blocca viene completato. Quando viene completato, viene rimesso in *ready*.

**FIGURA.** (*Schema della vita di un processo*)
![500](images/process-status.png)

## L'albero dei processi
Usando le System Call, un processo può creare un altro processo. Infatti, tutti i processi sono figli di qualcuno (tranne *INIT*)
- Il processo generato è *figlio* del processo generante
- Si crea un *albero dei processi*
- Se il processo padre termina, i figli *NON* vengono terminati
- I processi *senza padre* diventano figli del processo *init*

**Esempio di albero dei processi**:
Nota: su alcuni sistemi `init` è rinominato `systemd`
![650](images/process-tree.png)

---
# Process Control Block
Ogni processo è rappresentato nel sistema operativo da un *blocco di controllo* (process control block, PCB) contenente le informazioni connesse. Diventa un'equivalente dell *inode* per i file ([[Allocazione dei Blocchi#^cac768|1]]).

**Definizione.** (*Process Control Block*)
Un *PCB* (Process Control Block) è una struttura dati, contenente dati rappresentativi per un *processo*. Le informazioni registrate sono le seguenti.
- **Stato del processo**: nuovo, pronto, esecuzione, attesa, arresto 
- **Program counter**: indirizzo della successiva istruzione da eseguire 
- **Registri della CPU**: permettono di interrompere il processo 
	- Fondamentale per *interrompere processi*, ovvero *bloccare stato del processo*. Stesso discorso per il PC
- **Informazioni di scheduling**: priorità, risorse consumate. Specificate dall'utente
- **Informazioni sulla gestione della memoria**: puntatori alle varie zone di memoria.
- **Informazioni di I/O**: file aperti, operazioni in attesa, ecc...
- Eccetera...

**FIGURA.** (*PCB*)
![200](images/pcb.png)


---
