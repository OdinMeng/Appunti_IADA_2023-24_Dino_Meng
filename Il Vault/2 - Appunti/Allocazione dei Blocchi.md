---
data: 2024-04-13
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Allocazione dei Blocchi
tipologia: appunti
stato: "1"
capitolo: I Dati sui Sistemi Operativi
---
- - -
*Definizione di allocazione dei blocchi. Algoritmo di accesso ai blocchi su livello-software. Metodi per allocare i blocchi su disco: allocazione continua, concatenata, FAT, indicizzata e combinata. Prassi: esempi di file system comuni a seconda del S.O. e tabelle delle partizioni.*
- - -
# 1. Allocazione dei blocchi
**Richiamo.** (*il concetto dei blocchi*)
I file system risiedono su disco 
I dischi permettono letture e scritture a *blocchi* ([[Definizioni Relative ai Dischi e Dati#^d4d309|1]])
- Tipicamente da *512B a 8KB*
- E' possibile *leggere/scrivere un blocco per volta*, e *interamente*

![width:600px center](images/disk-list.png)

## 1.1. Accesso ai Blocchi
Il *driver* ([[Componenti di un Sistema Operativo#^848e78|1]]) del disco permettono di *accedere a un blocco*.
-  Ricevono comandi del tipo:
  ```
  read  block 431 to   memory address 0x5984
  write block 126 from memory address 0x9163
  ```
Un *File System* mappa *accessi a file e direttori in comandi per il driver*
- Quindi abbiamo una situazione del tipo
- *APP -> System Call -> (OS) -> Kernel -> File System -> Driver -> (I/O) Disco*

## 1.2. Allocazione dei Blocchi: Definizione
**Definizione** (*allocazione dei blocchi*)
L'*allocazione* é il meccanismo con cui i blocchi sono allocati ai file.
- Ogni file *occupa 1 o più blocchi* ($\geq 1$)

**Problema.** (*frammentazione interna*)
Come conseguenza del meccanismo dell'allocazione dei blocchi abbiamo un noto problema, detto come *"frammentazione interna"*: in sostanza è lo spreco intrinseco di capacità quando un file non ha dimensione multipla della grandezza dei blocchi. La parte sprecata del disco non può essere *mai* usato per altri file

**FIGURA.** (*Frammentazione interne*)
```
      Block size: 1KB
┌─────────────────┬───────────┐
│ 715B                           │ 309B             │
└─────────────────┴───────────┘
      file.txt                         sprecato
```

# 2. Metodi per l'Allocazione dei Blocchi
Adesso iniziamo a vedere dei metodi per l'*allocazione dei blocchi*, quindi degli *algoritmi specifici di File System* ([[Definizioni Relative ai Dischi e Dati#^3b666b|1]]).

## 2.1. Allocazione Continua
**Metodo.** (*Allocazione Continua*)
Ogni file *occupa un insieme di blocchi contigui* (ovvero una dopo l'altra)

**Vantaggi**
- *Semplice e veloce* (forse *troppo* semplice!)
- *Banale accedere* al byte $N$, visto che il file é memorizzato in *maniera contigua* sul disco
	- Ad esempio, per accedere ai byte *centrali* di un file basta andare al blocco *centrale*.
- *Pochi metadati* per file sono necessari
	- Solo *file*, *start* e *length*.

**Svantaggi**
- Crea la *Frammentazione Esterna*: rimangono *blocchi vuoti sparsi* per il disco, che *non possono essere utilizzati* che per file molto piccoli.
- Grave spreco! I buchi diventano *sempre* più grandi col *tempo*.
	- Una *soluzione storica* era quella di fare la c.d. *"deframmentazione del disco"* (defrag); comunque per fare un'operazione del genere ci si può mettere un sacco di tempo.

**FIGURA.** (*Allocazione continua*)
![width:350px bg right:40%](images/alloc-cont.jpg)

---
## 2.2. Allocazione Concatenata
**Modello.** (*allocazione concatenata*)
Ogni File é una *Linked List* di blocchi.
- Ogni blocco contiene il *numero di blocco successivo*; l'equivalente del puntatore `NEXT`
- L'ultimo blocco contiene un *numero speciale che indica la fine*; l'equivalente del puntatore nullo `NULL`

**Vantaggi**:
- No *Frammentazione Esterna*!
- *Tutti i blocchi sono usabili* per ogni file
- Ancora meno metadati necessarie: bastano solo *"file"* e *"start"* (volendo anche *"end"*)

**Svantaggi**:
- Efficiente solo per *accesso sequenziale*
- Accedere ai byte *centrali* del file *richiede di scorrere tutta lista*, dalla *testa* del file.
	- Anche sono leggere il *puntatore* richiedere di leggere tutto il blocco
	- Ricorda: i dischi permettono di *leggere/scrivere un blocco per volta*
- *Poco affidabile!* Un blocco invalido invalida tutto il file
	- Problema per file grandi, che col tempo diventano sempre più soggetti a falle.
	- Sono come delle *candele* in serie: se si rompe una, il circuito non gira più
Per ovviare ad alcuni di questi problemi useremo una versione *ottimizzata* di questo modello. In particolare l'allocazione *FAT*.

**FIGURA.** (*Allocazione concatenata*)
![width:350px bg right:40%](images/alloc-link.jpg)

## 2.3. Allocazione FAT (File Allocation Table)
**Modello.** (*Allocazione FAT*)
Come detto prima, questo è una *variante* dell'*allocazione concatenata*.
I *primi blocchi* del disco contengono una *tabella della FAT* ("File Allocation Table")
- E' una *Linked List* di blocchi
- Approccio *simile a Allocazione concatenata*
	- Ma la lista contenuta nei primi blocchi
	- Più veloce, la FAT può essere in cache
- Usato in Windows e MS-DOS coi File System *FAT* e *FAT32*

**Vantaggi**
- La FAT é *cache-abile* (quindi ottimizzabile con pochi KB)
- Mi servono ancora meno metadati; basta aver salvato la *start block* della *FAT*.

**Svantaggi**
- *Lento accedere a ultimi byte del file* (come allocazione concatenata)
- Se perdo la FAT perdo tutto!
- La *FAT diventa grossa* per dischi grandi (difficilmente *scalabile*)

**FIGURA.** (*FAT*)
![width:350px bg right:40%](images/alloc-fat.jpg)


---
## 2.4. Allocazione Indicizzata
**Modello.** (*Allocazione indicizzata*)
Ogni file ha un *blocco indice* che contiene i numeri di tutti i blocchi.

**Vantaggi**
- Accedere a un *byte arbitrario é veloce*
	- Basta leggere il *blocco indice* ed il *blocco desiderato*

**Svantaggi**
- Si spreca *un blocco per file* (oltre a quello del file)
- Se un file è *troppo grande* diventa impossibile

**FIGURA.** (*Allocazione indicizzata*)
![width:350px bg right:40%](images/alloc-index.jpg)

## 2.5. Allocazione Combinata
**Modello.** (*Allocazione combinata*)
Utilizzata in *Linux*; considerata il *migliore compromesso*
Ogni *file o direttorio* ha una *strutture* detta *"inode"*, che contiene le seguenti informazioni. ^9feac4
- Metadati e permessi del file/direttorio
- I numeri dei *primi 12 blocchi*
	- Alcuni inutilizzati, se file più piccolo; vengono salvati direttamente nelle inode
- *Puntatori indiretti*:
	- Numeri di blocchi i quali contengono a loro volta *una tabella*
	- Su *uno, due e tre livelli* (quindi abbiamo *indici ai dati*, *indici agli indici ai dati* e *indici agli indici agli indici ai dati*)

**Definizione.** (*Inode*)
*Rappresentano un file/cartella* ([[Allocazione dei Blocchi#^9feac4|1]]). Memorizzati in una tabella nei primi blocchi ^cac768
- Ogni inode é una struttura di pochi byte (ha una dimensione fissa)
- Identificati da *inode number*
	- *ATTENZIONE!* Ciò vuol dire che l'inode *non* contiene il *nome del file*! Per trovare ciò bisogna reperirlo con altre funzioni.
- Sono *in numero finito e immutabile*
	- Non si possono memorizzare infiniti file minuscoli

**Vantaggi:** 
- Buon compromesso
- *No frammentazione esterna*
- Come *indexed* (indicizzata) per file piccoli
- Può *indicizzare file anche molto grandi*
- Per file di *medie dimensioni* ho l'*allocazione indicizzata* lo stesso

**Svantaggi:**
- Può richiedere di leggere più di un blocco per accedere a posizioni avanzate nel file (quindi abbiamo tempo di lettura *non costante*)
- C'è una *grandezza massima* per i file, di circa *4TB*.

**FIGURA.** (*Allocazione Combinata con gli inode*)
![width:350px bg right:40%](images/alloc-comb.jpg)

---
# 3. File system comuni
Adesso vediamo degli *algoritmi comuni* per i l'*allocazione dei blocchi*.
## 3.1. Esempi di File System
**Esempi.** (*File System comuni*)
Ogni OS si porta dietro i suoi File System
- **Unix:** UFS, FFS
- **Linux:** tantissimi.
	- `ext3` and `ext4` sono gli *standard di fatto*. Usano *allocazione Combinata*
- **Windows:**
	- FAT, FAT32 basati su FAT
	- NTFS: con indirizzamento ad albero
- **Apple:** HFS, HFS+, APFS (Hierarchical File System)
- **File System distribuiti per Big Data:** GoogleFS, HDFS, CEPH. Sono recenti e vengono utilizzati negli *ambienti professionali*. Li approfondiremo alla fine.

## 3.2. Tabelle delle partizioni
**Definizione.** (*Partizione dei Blocchi*)
Oltre ai FS, esistono degli standard per *partizionare i dischi in più partizioni* (quindi dare una *grandezza fissa* per i dischi). ^aa26bd
- **Master boot record (MBR):** metodo classico. I primi blocchi del disco *indicano le partizioni*
	- Contiene anche il *codice iniziale* per avviare l'elaboratore
	- Massimo dischi da *2 TB e 4 partizioni* (limitata)

- **GUID Partition Table (GPT)** moderno, parte dello Unified Extensible Firmware Interface (*UEFI*) standard
	- Supera le limitazioni di MBR

**FIGURA.** (*Esempio generale di un disco*)
![width:800px](images/inode-table.png)



**FIGURA.** (*L'idea della partizione*)
![width:600px](images/disk-layout.png)


**FIGURA.** (*Management delle partizioni su Windows*)
![width:1000px center](images/windows.png)

**Esempio.** (*Linux*)
Su Linux si opera da riga di comando con `fdisk` o `parted` o con l'utility grafica *gparted*
