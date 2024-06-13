---
data: 2024-03-18
corso: 
argomento: File System Linux
tipologia: appunti
stato: "0"
capitolo:
---
- - -
*Introduzione ai File system su Linux: organizzazione gerarchica, path assoluto e relativo, comandi relativi ai file system: `ls`, `rm`, `rm`, `touch`, `rmdir`, `mkdir`, `ln`, `cat`, editor testo.*
- - -
# 1. Organizzazione del File System
Il file system su Linux è *gerarchico*, ovvero *ad albero*.
- Organizzato in directory annidate l'una dentro l'altra
- La directory radice è `/` (detta *"root"*) ^38ab81
- Tutte le cartelle del sistema sono contenute nella directory radice.
Esempio: la home degli utenti si trova in `/home/nomeutente`

---
# 2. Esempio di File System
Esempio di albero (*parziale*) delle cartelle di un sistema Linux

![width:600px center ](images/fs-example.png)


---
# 3. Path
**DEFINIZIONE DI PATH.** 
Un *path* identifica un *file o una cartella*.

Un terminale (e i comandi che vi vengono lanciati) sono *sempre posizionati* su una cartella, la *Working Directory*; ovvero *"da dove li eseguo"*
- Ci muove da una cartella all'altra col comando `cd <path>`
- Un path può essere:
	-  Assoluto: inizia con `/` e indica un path completo a partire dalla radice
	-  Relativo: **non** inizia con `/` e indica un path *a partire dalla Working Directory*
- Ci sono dei *"path speciali"*:
	- Ci si può riferire directory corrente con `.`
	- La directory padre di quella corrente è indicata con `..`

**Esempio**: si consideri il seguente albero di cartelle
```
/
└── tmp
    └── directory
        └── file.txt
```
Col comando `cd /tmp` si posiziona il terminale in `/tmp`.
A questo punto:
- `directory` identifica la directory `/tmp/directory`
- `.` identifica la directory `/tmp`
- `..` identifica la directory `/`
- `directory/../..` rappresenta la directory `/`

---
# 4. Strutturazione tipica delle cartelle Linux
Su tutti i sistemi Linux, il file system è organizzato con *le seguenti cartelle di sistema*, necessari al *funzionamento del sistema operativo*. Di queste ne elenchiamo 16.
- `/`: radice
- `/bin`: file *eseguibili* (e *preinstallati*) del sistema – ls, pwd, cp, mv ....
- `/boot`: (*alcuni*) file necessari per l'avvio del sistema, *boot loader* ...
- `/dev`: file speciali che descrivono i *dispositivi* (I/O) – dischi, scheda audio, porte seriali ...
- `/etc`: file eseguibili, script, inizializzazione, *configurazione sistema* (ad esempio indirizzo di rete), file password, ...
- `/home`: directory delle *home directory degli utenti*
- `/lib`: *librerie di sistema* (ricordiamoci che queste *NON* sono i *system calls*!)
- `/lost+found`: contiene i file *danneggiati*
- `/mnt `: punto di *montaggio file system* (mount point) (per i *dispositivi rimuovibili*)
- `/proc`: file system virtuale che contiene informazioni sui *programmi in esecuzione* (processi) 
- `/sys`: programmi di sistema (su *informazioni del sistema*)
- `/tmp`: direttorio *temporaneo*; il sistema operativo ha diritto di *svuotare* questa cartella per *certe situazioni* (quando non si ha abbastanza spazio) o per un certo *intervallo di tempo*.
- `/usr`: file relativi alle *applicazioni installate*
- `/usr/include`: header file libreria *standard C* (come `#include stdio.h`)
- `/usr/bin` e `/usr/lib`: file binari disponibili agli utenti
- `/var`: (*molto importante!*) file di sistema che *variano con frequenza elevata*; ad esempio è utile per le *storage delle web-app installate di sistema*.

---
# 5. Comandi relativi ai File System
Facciamo una carrellata dei comandi per *manipolare* i *file system*
## 5.1. Comando "list directory"
**Comando `ls [opzioni] [dir]`**: lista il contenuto della directory. Opzioni principali:
- `-1`: stampa su una colonna
- `-l`: formato lungo
- `-n`: come –l ma visualizza gli ID al posto del nome del proprietario e del gruppo
- `-t`: ordina per data
- `-s`: mostra la dimensione dei file in blocchi
- `-a`: mostra tutti i file compresi `.` e `..`
- `-R`: elenca il contenuto in modo ricorsivo
**Esempio**: `ls -ahl` è un utilizzo comune per utilizzare questo comando.

**Esempio**: differenti forme di `ls`
```
$ ls
compile.txt  style.css  u1-introduzione  u2-linux
```

```
$ ls -l
total 16
-rw-rw-r-- 1 martino martino  102 set 30 14:16 compile.txt
-rw-rw-r-- 1 martino martino  199 set 30 15:27 style.css
drwxrwxr-x 3 martino martino 4096 ott  1 18:33 u1-introduzione
drwxrwxr-x 3 martino martino 4096 ott  4 10:20 u2-linux
```
## 5.2. Comando "remove"
**Comando `rm [-rfi] [filename]`**: *rimuove* il/i file selezionati. Opzioni principali:
- `-r`: rimozione *ricorsiva* del contenuto delle directories.
- `-f`: rimozione di *tutti i file* (anche *protetti in scrittura*) senza avvisare. 
- `-i`: con questa opzione `rm` chiede conferma

**Esempio**: cancella tutti i file in `cartella`
```
rm cartella/*
```

**Nota:** con `*` si intendono tutti i file dentro una cartella

**NOTA BENISSIMO!** Questo comando è *pericolossismo*, quindi quando si scrive un comando che usa `rm` bisogna stare non attenti, ma di più! Ad esempio il comando
```bash
sudo rm -rf /*
```
è in grado di cancellare l'*intero computer* e tocca ri-installare un qualsiasi sistema operativo.

---
## 5.3. Comandi per modificare il File System
**Comando `cd <dir>`**: *cambia* directory. (*"change directory"*) 

**Comando `mkdir <dir>`**: crea sub-directory.  (*"make directory"*)
**Comando `rmdir <dir>`**: rimuove sub-directory, solo se vuota. Altrimenti fallisce. Questa è l'opzione più sicura, rispetto a `rm`. (*"remove directory"*)

**Comando `cp  <file1> <file2>` e `mv <file1> <file2>`**: *copia/sposta file o cartelle*. Opzioni principali
- `-f`: effettua le operazioni senza chiederne conferma
- `-i`: chiede conferma nel caso che la copia sovrascriva il file di destinazione
- `-r`: ricorsivo. Copia/sposta la directory e tutti i suoi file, incluso le sottodirectory ed i loro file

---
## 5.4. Collegamenti su Linux
**Comando `ln [-s] <sorgente> <destinazione>`**: crea un *link*. In Linux esistono due tipi di link:
- **HARD LINK**: associa un *secondo path* al contenuto del file. Se il primo file viene spostato, il link rimane valido e funzionante. E' l'*opzione di default* (*!!!*) ^4db40f
	- *Robusto*: non può può mai essere invalido. Non si può usare tra dischi diversi, né per linkare cartelle
- **SOFT LINK**: è un *semplice rimando* a un altro path. Se il path destinazione non esiste o viene spostato, il link semplicemente non funziona. Si usa l'opzione `-s`. Quindi si ha una specie di *file speciale*. ^f7fd3b
	-  *Flessibile*: può linkare a un altro file system o a una cartella

---
## 5.5. Ricerca di file nelle directories
**Comando `find [path] [-n nome] [-print]`**: ricerca ricorsiva di directories
**Esempio:** cerca i file che finiscono per `.txt` nella directory `/tmp`:
```bash
find /tmp -name *.txt
```
E' possibile fitrare su varie **proprietà** dei file o cartelle:
- Tempo di creazione/modifica
- Utente o gruppo proprietario
- Grandezza

**Nota**: Non effettua ricerca nel *contenuto* del file, bensì solo *attributi* del file.

---
## 5.6. Stampare e creare (o toccare) file
**Comando `cat <file>`**: stampa il *contenuto* di un file

**Comando `touch <file>`**: *crea* il file se non esiste; altrimenti *modifica la data dell'ultimo accesso al file*

**Esempio**: creare un file `a.txt`, aprirlo con un editor e scrivervi dentro `ciao`, poi stampare il file
```bash
$ touch a.txt
... modificare con editor
$ cat a.txt
ciao
```
---
## 5.7. Visualizzare e scrivere su file
**Comando `less <file>`**: apre il file in un visualizzatore interno alla shell dove si può scorrere in entrambe le direzioni, utile per i *file lunghi*

Esistono svariati *altri comandi per visualizzare il contenuto* di un file.
- Comandi per stampare file binari (`hexdump`)
- Comandi per stampare le prime (`head`) o le ultime righe (`tail`) di un file
- *Editor avanzati* utilizzabili dentro la shell.
  - `nano` il più semplice
  - Ne esistono molti. Sono in competizione `emacs` e `vi` (o `vim`), detta *Guerra degli editor*. Qui gli editor diventano una specie di *"religione"* per i programmatori.