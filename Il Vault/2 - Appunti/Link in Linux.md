---
data: 2024-04-16
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Link in Linux
tipologia: appunti
stato: "1"
capitolo: I Dati sui Sistemi Operativi
---
- - -
*Approfondimento sul link in linux: definizione. Hard e soft link, comportamenti. Differenze.*
- - -
# 1. Link
**Definizione.** (*Link generalizzato*)
Un link é un *nome aggiuntivo per un altro file*.
Utile per svariati compiti
- Gestione file di configurazione
- Condivisione di informazioni tra utenti
- Mantenimento ordinato dellla struttura dei file
- E molto altro!

**Definizione.** (*Hard Link e Soft Link*)
Esistono due tipi di link:
- **Hard Link:** l'inode appare *in una seconda directory* che vi punta; abbiamo quindi un *riferimento aggiuntivo* allo stesso *i-node*.
- **Soft Link:** é un alias a un certo path; in questo caso è un *"file speciale"* che va a recuperare il contenuto del file puntato, se possibile.

**Figura.** (*Idea*)
![600](images/symhardlnk.png)

## 1.1. Comportamenti del Soft Link
Come detto prima, i soft link sono degli *Shortcut* per un file o una directory
- Se ho un grande file con un *path lungo e complesso*, ne posso creare un soft link nella mia Home Directory
- Se cancello un Soft Link, *non succede niente al file originale*
- Se il file originale viene cancellato, il Soft Link *continua a esistere* ma diventa *invalido*
- Se creo un altro file con quel nome, il Soft Link *torna a essere valido*
- I Soft Link sono molto flessibili

**System Call.**
E' un concetto di Linux
Per creare un Soft Link si usa la *System Call*:
```c
int symlink(const char *target, const char *linkpath);
```
Si rimuove un Soft Link come fosse un normale file.

*Nota:* Si possono creare Soft Link a cartelle *e verso altri dischi*
Le funzioni di ricerca *non devono attraversare i Soft Link per evitare cicli*

---
## 1.2. Comportamenti del Hard Link
Un Hard Link é un *riferimento aggiuntivo a un inode*
La directory dove viene creato, contiene *una nuova entry* che ha lo *stesso inode number*

![600](images/symhardlnk.png)

**Implicazioni.**
- Un Hard Link é *un link al contenuto del file* (quindi non un semplice rimando)
- Non può mai essere *invalido* (a meno che qualcosa di *veramente brutto* sia successo col File System)
- Hard Link e file originario hanno la *stessa importanza e la stessa natura*: in un certo senso diventano la stessa cosa
- Cancellare un Hard Link causa la cancellazione del file *solo se non vi sono altri Hard Link* (o il riferimento originale). Come si fa? Questo è il compito del *sistema operativo*.
Compiti del sistema operativo
- Mantenere un *reference count* per ogni inode
- Cancellare un inode e il suo contenuto *se esso va* a $0$
- Questo è l'approccio accettato, dato che altri approcci sarebbero impensabili. Ad esempio, quello di cercare l'interno disco in ricerca di altri riferimenti non può essere fattibile.

**System Call.**
Si creano con la System Call:
```c
int link(const char *oldpath, const char *newpath);
```

*Nota*: La System Call per rimuovere un file in Linux é `unlink`.
Di fatto rimuovere un file, significa decrementare il suo *reference count* (e *eventualmente rimuovere l'inode*)
*Non si possono creare Hard Link a cartelle*. Concettualmente sbagliato; ci sarebbe un pastroccio!

## 1.3. Differenza tra Hard Link e Soft Link
**Figua.** (*Differenza tra Hard Link e Soft Link*)
![500](images/blocks-links.png)

**Osservazioni.** Non posso creare degli *hard link* per file su *dischi diversi*, dato che avrei degli *inode diversi* per *dischi diversi*.
