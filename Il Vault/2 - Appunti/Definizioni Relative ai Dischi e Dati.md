---
data: 2024-04-13
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Definizioni Relative ai Dischi e Dati
tipologia: appunti
stato: "1"
capitolo: I Dati sui Sistemi Operativi
---
- - -
*Definizioni relative all'immagazzinamento dei dati nei dischi: blocco, file system, file, direttori, link.*
- - -
# 1. Dati e Dischi
## 1.1. Definizione di Blocco e File System
**Definizione** (*blocco*)
I dischi sono utilizzabili come un *vettore di blocchi* ^d4d309
- Blocchi di $512 B$$-8 KB$

**FIGURA** (*L'idea dei blocchi*)
![width:400px center](images/disk-list.png)

**Definizione** (*File System, cenno*)
Il *File System* permette di organizzare questi blocchi per avere ^3b666b
- *File* di grandezza variabile (quindi la sostanza)
- *Organizzati* in un albero di cartelle (quindi la struttura)
Quindi possiamo definire il *file system* come un *algoritmo per rappresentare le cartelle in un disco*.

---
## 1.2. I File
**Definizione.** (*File*)
I *file* sono una *sequenza ordinata di bit* che contengono delle *informazioni*.
Hanno un *nome* e degli *attributi* (ovvero metadati):
- Identificativo nel SO
- Permessi
- Tempo di creazione, di ultimo accesso

I file sono *organizzati* in *direttori* o *cartelle* o *folder* o *directory*
- Possono essere create, modificate o cancellate *come i file* (vedremo che in realtà le cartelle non sono altro che dei *"file speciali"*)
- A differenza dei file non contengono byte *ma altri direttori o file*

**Operazioni sui File.**
Sui file, un programma (tramite System Call del SO) può effettuare le *operazioni* di:
- Creazione
- Lettura
- Scrittura
- Cancellazione
- *Seek* (movimento del cursore) (ricordiamoci che l'accesso ai file è *sequenziale*)

**Osservazione.** (*Accesso sequenziale dei file*)
Le operazioni di lettura e scrittura sono sempre *sequenziali*. Il file viene letto/scritto byte per byte, tramite un *cursore*. E' possibile riposizionare il cursore tramite l'operazione di *seek*


---
## 1.3. I Direttori
**Definizione.** (*Directory/Direttori*)
Una *Directory* è un contenitore di nodi (file o altre Directory)
- Organizzazione tipicamente ad albero.
- Tipicamente è un grafo *senza cicli* (a meno che consideriamo i *link*, come faremo dopo)

**Definizione.** (*Partizioni*)
Un disco é diviso in una o più *partizioni*
Ogni partizione contiene un *albero di direttori*, in particolare
- Vi é un direttorio *radice*
- *Tutti* i file e direttori vi son contenuti

**Operazioni con le cartelle.**
Operazioni sui direttori sono *simili a quelle su file*:
- Creazione
- Rimozione
- *Listing*
- *Renaming*

*Ricordare!* Il SO mette a disposizione delle *System Call* per queste operazioni.
- Esse sono a *basso livello*. Possono essere difficili da usare
- La libreria standard del C mette a disposizione delle *funzioni a più alto livello* (più facili da usare) che al loro interno *utilizzano le necessarie System Call* (quindi non c'è mai scampo da queste System Call!)
	- Ricordiamo che abbiamo *sempre* una situazione del tipo
	- *Hardware <-=-> Sistema Operativo <-=-> System Call <-=-> Libreria <-=-> Software*

**FIGURA** (*L'albero delle cartelle*)
![width:550px center](images/tree.png)

---
## 1.4. Link e cicli
**Problema** (*i link*)
L'albero é l'organizzazione *più naturale*.
Tuttavia i *link* ([[File System Linux#^4db40f|1]], [[File System Linux#^f7fd3b|2]]) possono creare dei *cicli*
- Coi link, *cancellazione più complessa*
	- Sto cancellando il file originale o una copia?
	- Vedremo in fondo dopo

I cicli *complicano* molto la *gestione del File System*
- Immaginare un processo di *ricerca ricorsiva* in una cartella con cicli
	- Processo *potenzialmente infinito se non gestito correttamente!* (pericoloso)

**Osservazione 1.** (*i link ai file vanno bene*)
I link a file non possono generare cicli. Infatti abbiamo una situazione del tipo
![width:500px center](images/link-file.png)

**Osservazione 2.** (*i link a direttori vanno gestiti*)
I link a direttori possono generare cicli:
![width:500px center](images/link-dir.png)
*Possibili soluzioni*: mai visitare i link durante ricerca (questa è la soluzione comune); altrimenti avrei un *ciclo infinito*.

## 1.5. Partizioni
**Definizione.** (*Partizione di un disco*)
Un disco é diviso in *partizione* ([[Allocazione dei Blocchi#^aa26bd|1]])
Ogni partizione contiene 
- Informazioni di controllo; tra cui informazioni per far *partire* il *sistema operativo*, dei *metadati* e così via...
- *Tabella degli inode*
- Blocchi di dato (ovvero quelli in cui mettiamo i *dati*)

**FIGURA.** (*L'idea della partizione*)
![width:600px](images/disk-layout.png)

Adesso vediamo la definizione di *blocchi di dato*.
**Definizione.** (*Data block, Directory block*)
I blocchi di dato sono di due tipi:
- *Data Block*: hanno il contenuto di un file. *Dati binari*
- *Directory Block*: hanno il contenuto di una cartella. *Lista di coppie* $(nome, inode)$

**FIGURA.** (*Esempio generale di un disco*)
![width:800px](images/inode-table.png)
