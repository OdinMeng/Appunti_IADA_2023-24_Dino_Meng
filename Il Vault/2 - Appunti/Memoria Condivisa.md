---
data: 2024-05-21
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Memoria Condivisa
tipologia: appunti
stato: "1"
capitolo: Memoria
---
- - -
*Condivisione della memoria: loader, librerie e pagine condivise.*
- - -
# 1. Loader, librerie e pagine condivise della Memoria
## 1.1. Loader
Il *Loader* è il componente del SO che *avvia i processi*.
I suoi compiti sono:
- Verificare che l'utente abbia i *permessi*
- Copia il codice del programma e le variabili globali inizializzate *in memoria* ($\delta$)
- Caricare le *librerie condivise*
- Valorizzare `argc` e `argv` (copiate in alto)
- Avviare il processo dal `main` impostando lo *scheduler* del SO

Il compilatore crea il codice macchina

Il loader lo *carica* e ne *avvia* l'esecuzione
- Deve caricare *anche le librerie di sistema*, se sono usate

![400](images/loader.png)

## 1.2. Librerie Condivise
I programmi possono usare *librerie condivise*:
- Offerte *dal SO* per facilitare la chiamata a System Call
- Installate da utente per scopi particolari (e.g., trigonometria)

Le librerie sono codice che gira in *User Mode*
- Non hanno alcun privilegio rispetto al codice utente
- *Non* sono parte del Kernel

Le *librerie condivise* sono *codice eseguibile* in cartelle predefinite del sistema

In **Linux**:
- `/lib`
- `/usr/lib`
- Directory elencate nel file `/etc/ld.so.conf`

In **Windows**:
- `C:\Windows\SYSTEM32`
- Cartella corrente

## 1.3. Formato ELF Linux
Gli eseguibili in Linux sono in formato ELF (*Executable and Linking Format*)
- Oltre il codice, contengono *la lista delle librerie di sistema* che useranno
- Contenute in una posizione predefinita

Le librerie e condivise sono identificate dal nome e dalla versione

---
## 1.4. Locazione delle Librerie Condivise
Le librerie sono caricate *dal Loader* in indirizzi intermedi
Se più processi usano la *stessa libreria*, la *pagina viene condivisa* (ovvero gli indirizzi virtuali vengono tradotti negli stessi indirizzi fisici)

![500](images/layout-2.png)

## 1.5. Memoria Condivisa
La memoria condivisa tra processi funziona *nello stesso modo*
- Gli *indirizzi intermedi,* tra heap e stack, sono usati per tutto ciò che é condiviso
- Esempi: *memory mapping*, eccetera...


![400 ](images/shmem-layout.png)

Tutto ciò è possibile *grazie alla MMU*
- Il SO imposta la MMU per *implementare questo schema*
	- Due indirizzi virtuali vengono *tradotti* per puntare alla medesima zona di memoria condivisa

![500](images/shared-layout.png)

## 1.6. Esempio di Memoria Condivisa
In caso di `mmap` con *persistenza su file*, il kernel si occupa di allineare la zona di memoria condivisa *su disco*

![500](images/shmem-mmap.png)

