---
data: 2024-04-16
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Comandi Bash per Link e Directory
tipologia: appunti
stato: "1"
capitolo: I Dati sui Sistemi Operativi
---
- - -
*Ripasso di comandi bash per link e directory.*
- - -
# 1. Comandi Bash per Link, Directory
Sono programmi pre-installati che facilitano l'uso delle System Call per compiti comuni. Ne facciamo un ripasso

**Comandi per link:**
```bash
ln target link_name
```
Crea un link al path `link_name` verso un path esitente `target` 
- Di default crea un hard link
- L'opzione `-s`
- Si rimuovono i link con `rm`
- Si possono anche usare i comandi più grezzi `link` e `unlink`

**Comandi per `stat`:**
```bash
stat path
```

Invoca la System Call `stat()` sul `path` specificato
- Stampa in formato human-readable tutto ciò che c'è dentro la `struct stat` risultante (e poco altro)
- Esempio:
```
$ stat file.tex 
      File: file.tex
      Size: 0         	Blocks: 0          IO Block: 4194304 regular empty file
    Device: 31h/49d	Inode: 1099555504104  Links: 1
    Access: (0644/-rw-r--r--)  Uid: ( 5012/trevisan)   Gid: ( 5000/det_user)
    Access: 2022-01-07 11:00:28.001143767 +0100
    Modify: 2022-01-07 11:01:29.860547368 +0100
    Change: 2022-01-07 11:01:29.860547368 +0100
     Birth: -
```

**Comandi per directory:**
- `ls directory`: lista il contenuto
- `ll directory`: alias per `ls -lh directory`
- `mkdir directory` e `rmdir directory`: crea o rimuove una directory
- `find ...`: cerca all'interno di una cartella
- `tree directory`: stampa l'albero di file e cartelle contenuti
- `du directory`: ottiene la dimensione della cartella e di tutto ciò che vi é contenuto
