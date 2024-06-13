---
data: 2024-04-13
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Permessi Linux
tipologia: appunti
stato: "1"
capitolo: I Dati sui Sistemi Operativi
---
- - -
*Dettagli sui permessi Linux: Utente/gruppo proprietario; permessi base, speciali; permessi dei link; rappresentazione dei permessi.*
- - -
# 1. Permessi per i File o Cartelle
**Definizione.** (*Utente e gruppo proprietario*)
Ogni file/cartella ha uno e uno solo utente *proprietario*, e uno e uno solo *gruppo* proprietario ([[Utenti e Permessi Linux#^2080e4|1]]).
E' possibile separare i permessi per classi di utenti.
Ovvero si specificano permessi separatamente per:
- **Utente proprietario**: si applica quando il proprietario tenta di fare accesso
- **Gruppo proprietario**: si applica quando un utente del gruppo proprietario accede
  - Nota: il gruppo proprietario non è necessariamente il  **Gruppo principale** del proprietario, ma può essere un **Gruppo secondario**
- **Altri**: tutti gli altri utenti 

# 2. Permessi di base
**Definizione.** (*Permessi base*)
Richiamiamo i *permessi base* ([[Utenti e Permessi Linux#^7687cb|1]], [[Utenti e Permessi Linux#^f307cc|2]], [[Utenti e Permessi Linux#^7708f7|3]]), tenendo conto del fatto che le *cartelle* non sono altro che dei *file contenenti* delle tabelle di i-node. ^a5e2df
- **Lettura:** per i file, *leggere il contenuto*. Per le cartelle, elencare *nodi contenuti*
- **Scrittura:** per i file, *scrivere il contenuto*. Per le cartelle, *aggiungere/rimuovere nodi contenuti*
- **Esecuzione:** per i file, *eseguirli*. Per le cartelle, attraversarle, ovvero *accedere a file (o sottocartelle) contenuti*. 
	- Nota: Per le cartelle, attraversare è diverso da listare (permesso lettura)!

**Nota:** non sono i permessi su un file a determinare se esso può essere *cancellato*, ma sono i *permessi sulla directory* che lo contiene a farlo.

# 3. Permessi speciali
**Definizione.** (*Permessi speciali*)
Oltre i 3 permessi di base, esistono altri tre permessi speciali (o flag) che si possono applicare a file/cartelle. Essi sono *"set user ID (suid)"*, *"set group ID (guid)"* e lo *"sticky bit"*.
- **set user ID (suid):** per i *file*, se eseguito, il processo è eseguito coi privilegi di *utente proprietario*, non di esecutore. Per le *cartelle*, *non ha effetto*.
	 - **Utilizzo:** sui PC, i comandi di sistema (e.g., `reboot`) hanno il **suid**, per permettere riavvio senza chiedere password. Sui server, di solito no!
- **set group ID (guid):** per i *file*, se eseguito, il processo è eseguito coi privilegi di *gruppo proprietario*, non di esecutore; questo di solito è *inutile*. Per le *cartelle*, i *file creati hanno il gruppo della cartella* e non il gruppo principale del creatore (che è azione di default); questo è l'uso *principale* del guid. 
	- **Utilizzo:** quando si creano *cartelle condivise* tra utenti che appartengono a un gruppo creato ad hoc.
- **sticky bit:** per i *file*, non ha *più effetto*. Per le *cartelle*, i file in essa contenuti possono essere *cancellati e spostati solamente dagli utenti che ne sono proprietari*, o dall'*utente proprietario della cartella*.
	- **Utilizzo:** nelle cartelle `/tmp` e `/var/tmp` tutti gli utenti devono poter creare e modificare dei file. Nessuno eccetto il *superuser* (o il proprietario) deve poter rimuovere o spostare file temporanei di altri utenti.
  
**Esempio-Esercizio.** Per un progetto si crea il gruppo `progettoSysOp`, che contiene 3 utenti. Si crea la cartella condivisa `/share/progetto` e la si assegna al gruppo `progettoSysOp`

## 3.1. Esempi dei Permessi Speciali
**SUID.** Abbiamo il comando `reboot` in `\bin\reboot` e il suo codice sorgente è qualcosa del tipo
```C
main()
{
	...
	 reboot();
	 ...
}
```
dove `reboot();` è una *System Call*, che può essere eseguita *solamente* da root. Vediamo il comportamento *default* e il comportamento col *suid*.
- *Default*
```bash
DINO:$\bin\reboot # -> rwx r-x r-x
> Fallisce!
```
- *Con suid*
```bash
PAOLO:$\bin\reboot # -> swx r-x r-x
> Ok! Il PC si riavvia
```

**GUID.** Il nostro computer contiene i seguenti utenti e gruppi:
- *Utenti:* MARTINO, LUCA
- *Gruppi:* DOCENTI, SISOPO, STUDENTI
Denotiamo "=>" per "X ha il gruppo primario Y" e "->" per "X appartiene al gruppo secondario Y".
Abbiamo le appartenenze ai gruppi come: 
- MARTINO => DOCENTI, MARTINO -> SISOP, LUCA => STUDENTI
Voglio creare una cartella comune chiamata `/SHARED`.
Dentro questa martella il prof. MARTINO ci inserisce una sottocartella `/SHARED/PROGETTO`, con appartenenza `MARTINO:SISOP`.
Adesso vediamo i comportamenti di questa sottocartella.
- *Default* (caso `rwx rwx ---`)
```bash
MARTINO:$ mkdir /SHARED/PROGETTO/DATI
> OK! File creato con permessi rwx rwx --- appartenente a MARTINO:DOCENTI
LUCA:$ ... # ci fa qualcosa in nella cartella ./DATI
> No! Non ha i permessi sufficienti
> Per ovviare a questo bisogna usare il comando chgrp, che è molto scomodo da fare. Quindi modifico il comportamento default come segue
```
- *Con GUID* (caso `rwx rws ---`)
```bash
MARTINO:$ mkdir /SHARED/PROGETTO/DATI
> OK! File creato con permessi rwx rwx --- appartenente a MARTINO:SISOP
LUCA:$ ... # ci fa qualcosa in nella cartella ./DATI
> Ok! Va bene
```

**STICKY-BIT.** Prendiamo la cartella `/tmp`
- *Default* (`rwx rwx rwx`)
```bash
MARTINO:$ touch /TMP/F1 # -> MARTINO:DOCENTI; RWX --- ---
LUCA:$ rm /TMP/F1
> Comando eseguito con successo! Ma non dovrebbe essere così. Ognuno può fare ciò che vuole con i file degli altri.
```
- *Con sticky bit* (`rwT rwx rwx`)
```bash
MARTINO:$ touch /TMP/F1 # -> MARTINO:DOCENTI; RWX --- ---
LUCA:$ rm /TMP/F1
> Eh no! Non può, cicce.
```

# 4. Permessi dei Link
**Caso Symlink (caso simbolico).**
Non hanno permessi propri, ma *ereditano i permessi del file/cartella linkato*.
**Nota:** la loro creazione/distruzione resa possibile dai permessi della cartella in cui si trovano

Esempio:
```bash
$ ls /lib
...
lrwxrwxrwx   1 root root  16 feb 24  2020 sendmail -> ../sbin/sendmail*
...
```

**Caso Hard-link.**
La modifica dei permessi su un hard link, affligge anche il file originario; infatti con un *hard link* stiamo creando un *file* che punta allo *stesso* ed *identico* inode ([[File System Linux#^4db40f|1]]).
Motivazione:
- Un hard link non è altro che un riferimento allo stesso *inode* con un nome differente
	- e/o in una cartella differente
- File originario e suo hard link hanno la *stessa importanza*
	- Il file originale è *indistinguibile da un suo hardlink*
- I permessi di un file sono memorizzati *nel suo inode*

# 5. Rappresentazione dei Permessi in Linux
Esistono due notazioni per indicare i permessi di un file/cartella in Linux.

**Rappresentazione simbolica.**
Usata da `ls -l` e la più diffusa
Il primo carattere indica il tipo di file o directory elencata, e non rappresenta propriamente un permesso:
- `-`: file regolare
- `d`: directory
- `b`: dispositivo a blocchi
- `c`: dispositivo a caratteri
- `l`: collegamento simbolico
- `p`: named pipe
- `s`: socket in dominio Unix
Dopodiché abbiamo altri *9 caratteri*, che rappresentano i *permessi di lettura, scrittura ed esecuzione* per l'*utente proprietario*, il *gruppo proprietario* e *tutti gli altri*.
Inoltre  permessi speciali vengono *aggiunti* a questa notazione sostituendo alcune lettere degli ultimi nove caratteri, come segue.
- `s` al posto del primo `x` per il SUID
- `s` al posto del secondo `x` per il GUID
- `t` al posto del terzo `x` per lo sticky bit

**FIGURA.** (*Schema generale della rappresentazione simbolica*)

![width:600px](images/permissions.jpg)

**FIGURA.** (*Schema di rappresentazione simbolica per permessi speciali*)
![width:500px center](images/perm-special.png)

**Rappresentazione Ottale.**
La stessa informazione può essere rappresentata con $4$ cifre in base 8. Dove:
- La prima cifra rappresenta i permessi speciali
- Le altre tre cifre rappresentano i permessi per l'utente proprietario, il gruppo proprietario e tutti gli altri.
La prima cifra è quasi sempre $0$ ed è *omessa*

**FIGURA.** (*Schema della rappresentazione ottale*)
![width:400px center](images/octal.png)

**Esempio**
$750$ equivale a `rwx r-x ---`
- $7 = 4+2+1$ mentre $5 = 4+1$
$644$ equivale a `rw- r-- r--`
- $6 = 4+2$ 

**Trucchetto.**
Possiamo ricordarci la tabella di conversione dall'ottale al binario che è
- `0` <=> `000`
- `1` <=> `001`
- `2` <=> `010`
- `3` <=> `011`
- `4` <=> `100`
- `5` <=> `101`
- `6` <=> `110`
- `7` <=> `111`
