---
data: 2024-03-16
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Componenti di un Sistema Operativo
tipologia: appunti
stato: "1"
capitolo: Introduzione ai Sistemi Operativi
---
- - -
*Componenti di un sistema operativo: schema generale. Componenti software: gestori, sincronizzatore e virtualizzatore.*
- - -
# 1. Schema Generale di un Sistema Operativo
**VISIONE GENERALE.**
- Un sistema di elaborazione è composto di diversi moduli
  - Che offrono servizi a utente
  - Ma interagiscono anche tra loro

![width:350px bg auto right:40%](images/so-scheme.png)

**OSSERVAZIONI.**
- I *system call* sono molto *fondamentali*, dal momento che per le *applicazioni* è *strettamente proibito* interagire direttamente con gli hardware. Infatti, si ha una situazione del tipo 
	- *Software <-=-> System call <-=-> OS <-=-> Driver <-=-> Hardware*
- Qui il ruolo del *sistema operativo* diventa fondamentale

# 2. Componenti Software di un S.O.
**LE COMPONENTI SOFTWARE DEL SISTEMA OPERATIVO.**
Principalmente un sistema operativo ha *tre gestori*, per gestire la mediazione *software-hardware*.
- **Gestore dei processi.** Crea e gestisce i *processi* (un processo è un programma in esecuzione) e *trova le risorse* di CPU e memoria *necessarie* all'esecuzione
- **Gestore della memoria.** La memoria di un elaboratore è un unico vettore (dato che stiamo implicitamente usando le architetture *Von-Neumann*) e il SO gestisce l'*allocazione di memoria ai processi* e la *condivisione della memoria* tra programmi.
- **Gestore dei dischi.** La memorizzazione su disco (come un HDD) è persistente e il SO organizza la memoria su disco in una struttura ad albero di directory e file
- **Gestore dei dispositivi di I/O (e di rete).** I dispositivi di I/O *non* sono gestiti *direttamente* dalle applicazioni (sarebbe infatti complicato e creerebbe problemi di funzionamento); i SO utilizza invece i *driver* per pilotare i dispositivi. La connessione di rete rappresenta un caso particolare di I/O: ha un trattamento speciale nei moderni SO. ^848e78
- **Gestore dei meccanismi di protezione.** Nei SO ci sono tanti *utenti* con *diversi permessi di accedere alle risorse* (per accedere a file, dispositivi, configurazione, ecc...). I SO implementa le policy di accesso; vedremo in seguito il caso particolare di *Linux*.

Dopodiché ci sono altre componenti che agevola ai processi di fare ulteriori cose.
  - **Sincronizzazione**. Permette ai processi di *comunicare* e di *sincronizzarsi* tra loro, dal momento che *ogni processo* va per *conto suo*, ma vanno comunque *coordinati*.
  - **Virtualizzazione**. Per supportare la creazione di macchine virtuali o simili (e.g., container). Se il SO offre funzionalità per la virtualizzazione, *le VM saranno molto più veloci* perché possono avere *accesso diretto* ad (alcune) risorse. Ultimamente la *virtualizzazione* divenne un tema fondamentale per i *sistemi operativi*.
