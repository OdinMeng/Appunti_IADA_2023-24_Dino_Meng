---
data: 2024-04-17
corso: 
argomento: Domande sui Dati in Sistemi Operativi
tipologia: appunti
stato: "0"
capitolo:
---
- - -
*Domande relative al modulo "Dai su Linux" di Sistemi Operativi, utili per l'esercitazione all'esame!*
- - -
# Slides Trevisan
## File System
La CPU accede al disco:
`• Direttamente` `• Attraverso un'interfaccia` `• Attraverso la memoria`  `• Attraverso la cache`

I link a file possono generare cicli:
`• Vero` `• Falso`

I link a directory possono generare cicli:
`• Vero` `• Falso`

Un disco ha blocchi grandi 4KB (4096B). Un file di grandezza 510B. Quanto spazio viene sprecato a causa della frammentazione **interna**:
`• 4606B` `• 3586B` `• Impossibile da stabilire`

Un disco ha blocchi grandi 4KB (4096B). Un file di grandezza 510B. Quanto spazio viene sprecato a causa della frammentazione **esterna**:
`• 4606B` `• 3586B` `• Impossibile da stabilire`

Con l'allocazione concatenata si ovvia al problema della:
`• Frammentazione interna` `• Frammentazione esterna`

In Linux, il FS usa lo schema:
`• FAT` `• Allocazione concatenata` `• Allocazione combinata` `• Allocazione continua`

Quali tra questi é un formato per le tabelle delle partizioni:
`• Ext` `• MBR` `• FAT` `• NTFS` 

## File System Linux
Un inode può rappresentare:
`• File` `• Cartelle` `• File o cartelle` `• Link` `• Partizioni`

Il comando `mount` serve a:
`• Montare dischi` `• Formattare dischi` `• Manipolare directory`

Gli inode possono essere memorizzati:
`• In qualsiasi posizione del disco` `• All'inizio` `• Alla fine`

Gli elementi di una cartella sono memorizzati:
`• All'interno del suo inode` `• In un blocco dati separato`

In Linux, ogni utente può appartenere a un solo gruppo:
`• Vero` `• Falso`

L'utente root esegue i suoi processi in kernel-mode?
`• Si` `• No`

Il permesso di esecuzione sulle directory:
`• Non ha effetto` `• Permette di eseguire i programmi contenuti`
 `• Permette di attraversare la cartella`

La cartella `d` contiene un file `f`. L'utente `u` ha permessi sulla cartella `d` `r-x` e sul file `f` `rw-`. L'utente può rimuovere il file?
`• Si` `• No`

La cartella `d` contiene un file `f`. L'utente `u` ha permessi sulla cartella `d` `r-x` e sul file `f` `rw-`. L'utente può eseguire il file?
`• Si` `• No`

L'utente `u` appartiene ai gruppi `g1` e `g2`. Una cartella contiene i seguenti file.
```
-rw-r--r--  1 u g3    2577901 Jul 28  2013 f1.txt
-r--r--r--  1 v g1    5634545 Jul 13  2013 f2.txt
-rwxrwxrwx  1 z g4    8753244 Jul 29  2013 f3.txt
```
Su quali di questi file `u` ha permesso di scrittura?
`• Tutti` `• Solo f1` `• Solo f3` `• f1 e f3`

## File (domande teoriche)
La `fopen` é:
`• Una funzione di libreria` `• Una System Call` `• Una struct`

La `read` é:
`• Una funzione di libreria` `• Una System Call` `• Una struct`

Si consideri il file `f.txt` contente il testo `frase di prova`.
Dove si trova il cursore (`↓`) del file dopo il seguente codice?
```c
FILE * fp = fopen("f.txt","r");
fscanf(fp, "%s", buffer);
fseek (fp, 3, SEEK_CUR);
```
`• fra↓se di prova` `• frase di ↓prova` `• frase di pr↓ova`  `• frase ↓di prova`

Quale delle seguenti linee di codice é corretta?
`• int fd = open("file.txt", O_RDONLY);`
`• FILE * fd = open("file.txt", O_RDONLY);`
`• FILE * fd = fopen("file.txt", O_RDONLY);`
`• FILE fd = open("file.txt", "rw");`

Quale relazione c'é tra la `fprintf` e `write`?
`• fprintf é una funzione di libreria e usa la SysCall write`
`• write é una funzione di libreria e usa la SysCall fprintf`
`• fprintf e write sono due funzioni di libreria`
`• fprintf e write sono due System Call`

Quale dei seguenti comandi stampa a schermo il contenuto del file `ciao`?
`• echo ciao`
`• print ciao`
`• cat ciao`

## File (domande pratiche)
- Si legga un path da tastiera e se ne stampi il contenuto come file di testo
- Scrittura del testo su un file utilizzando System Call, poi funzioni di libreria

## Link Directory (domande teoriche)
E' possibile creare link a cartelle
`• Di tipo Hard Link`
`• Di tipo Soft Link`
`• Sempre`
`• Mai`

Un Hard Link può riferirsi a un file inesistente
`• Vero` `• Falso`

Un Soft Link può riferirsi a un file inesistente
`• Vero` `• Falso`

Quale System Call permette di conoscere lo user ID del proprietario di una directory?
`• open` `• opendir` `• readdir` `• stat`

La directory `dir` contiene i file `f.txt` e `g.txt`. Il seguente codice:
```c
dp = opendir("dir1");
while ( (dirp = readdir(dp)) != NULL){
    if (strcmp(dirp->d_name,  "dir/f.txt") == 0 )
        printf("%s\n", "Found\n");
```
Stampa:
`• "Found" una volta` `• "Found" due volte` `• Niente`

## Link Directory (domande pratiche)
- Si scriva un programma che riceve un path da riga di comando e stampa se esso é file, directory o link simbolico. 
- Si scriva un programma che riceve una directory da riga di comando e ne lista il contenuto. 

## RAID, FDS
Un sistema di dischi basato su RAID è sempre più affidabile di un disco singolo?
`• Si` `• No`

In un sistema RAID 0, quali sono le conseguenze in caso di fallimento di un disco?
`• I dati vengono persi` `• E' possibile recuperare i dati`

In un sistema RAID 1, quali sono le conseguenze in caso di fallimento di un disco? 
`• I dati vengono persi` `• E' possibile recuperare i dati`

E' possibile creare un sistema RAID 6 con 3 dischi?
`• Si` `• No`

Qual è il sistema di accesso tipico a un FS Distribuito?
`• Bus PCI` `• Rete` `• USB` 
