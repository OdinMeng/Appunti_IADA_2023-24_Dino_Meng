---
data: 2024-04-13
corso: 
argomento: Concetti Avanzati sul File System in Linux
tipologia: appunti
stato: "0"
capitolo:
---
- - -
*Concetti avanzati sul file system in Linux: Virtual File System, montaggio file, definizione di directory.*
- - -
# 1. Richiami Storici 
**Richiamo.** (*Storia del Linux*)
Nel mondo Unix/Linux, esistono molti file system.
- Il primo é stato lo Unix File System (UFS)
- Da esso si sono gli Extended File System (`ext`) per Linux
- Ora siamo alla versione `ext4`
Come visto, basato sul *concetto di inode* ([[Allocazione dei Blocchi#^9feac4|1]]) che rappresenta *un file o un direttorio*
# 2. Virtual File System (VFS) 
**Definizione.** (*Virtual File System*)
Si possono usare *diversi file system*.
Devono implementare l'interfaccia standard *Virtual File System (VFS)*
- Ovvero permettano di effettuare alcune *funzioni fondamentali* e di rendere *generico* il kernel Linux:  
```c
  open(), read(), write(), lseek(), close(), truncate(), stat(),
  mount(), umount(), mmap(), mkdir(), link(), unlink(), symlink(), rename()
  ```
- Quindi si ha una situazione del tipo *Applicazione -> VFS -> File System -> ... -> Hardware*

**FIGURA.** (*L'idea del VFS*)
![width:450px center](images/vfs.png)

---
# 3. Montare File su Linux
**Richiamo.** (*Cartella root*) & **Definizione.** (*Operazione di montaggio dischi*)
Su Linux, tutti i file da ogni disco sono sotto un unico albero di cartelle, detto *"root"* ([[File System Linux#^38ab81|1]])
- Che nasce da `/`; tutto è figlio di questa cartella
- Dischi aggiuntivi vengono *montati* come sotto alberi di `/`

**Operazione.** (*Montare dischi*)
Per *montare* un *FS* si usa il comando
```c
mount device directory
```

**Operazione.** (*Vedere i file montati*)
Per vedere il contenuto di un disco, esso va *montato*. Per vedere i dischi montati si usa lo stesso comando, omettendo tutti gli argomenti.
```c
$ mount
/dev/sda6 on / type ext4 (rw)
proc on /proc type proc (rw)
sysfs on /sys type sysfs (rw)
devpts on /dev/pts type devpts (rw,mode=0620,gid=5) 
/dev/sda8 on /home type ext3 (rw,acl,user_xattr)
/dev/sda1 on /windows/C type vfat (rw,noexec,nosuid,nodev)
/dev/sda9 on /home/mtk/test type reiserfs (rw)
```

**FIGURA.** (*Esempio di una gerarchia di FS montati*)
![width:600px center](images/mount.png)


**Definizione.** (*File di configurazione `fstab`*)
In un sistema Linux, i *dischi che vengono montati automaticamente all'avvio* sono specificati nel file `/etc/fstab`
- Contiene una riga per ogni disco
- Formato `<disk> <mount point> <type> <options> <dump> <pass>`
	- Ovvero *"disco X"* sulla *"cartella Y"* del *"tipo Z"* con certe cose...
- Fondamentale saperlo: se questo file ha certi casini, l'elaboratore non sarà più in grado di partire! 

**Esempio:**
```bash
/dev/sda1   /                         ext4    errors=remount-ro                          0   1
/dev/hda1   /media/hda1     vfat      defaults,utf8,umask=007,gid=46  0   0
```

# 4. Definizione di Directory per Linux
**Corollario.** (*Definizione del direttorio su Linux*)
*Ogni directory é un inode* ([[Allocazione dei Blocchi#^cac768|1]]).
- Occupa almeno un blocco contenente la tabella dei nodi che contiene
Pertanto possiamo considerarla *come un file "speciale"*:
- Il cui contenuto non é un insieme di byte
- Ma una *lista di coppie* $(nome, inode)$ 

**Esempio.**
![500](images/blocks.png)

Dalla figura vediamo che
- inode $2$ é la directory `/`
	- Contiene `etc`: inode $7$
- inode $7$ é la directory `/etc`
	- Contiene `passwd`: inode $6442$
- inode $6442$ é il file `/etc/passwd`
	- Il contenuto é in un blocco dati

**Esempio.**
![550](images/inode-dir.png)
- La cartella `d` (inode $1267$) contiene la cartella `testdir` $2549$ che é vuota