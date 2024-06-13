---
data: 2024-04-16
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: System Call per interazione coi File
tipologia: appunti
stato: "1"
capitolo: I Dati sui Sistemi Operativi
---
- - -
*System Call Linux per interagire coi file.*
- - -
# 1. System Call per file: Recap
Le funzioni viste precedentemente *sono parte della libreria standard del C*.
- Esse *utilizzano delle System Call* per compiere le operazioni richieste
- Le System Call *variano* a seconda del SO

System Call usate, esempi.
- Linux/POSIX: `open`, `read`, `write`, `lseek`, `close`
- Windows: `CreateFile`, `WriteFile`, `ReadFile`, `CloseHandle`, `SetFilePointer`

**System Call di Linux.**
Noi ci soffermiamo sulle *System Call di Linux*, usabili includendo `<unistd.h>`.
- Esse sono *simili alle funzioni di libreria*, ma sono di più basso livello.
- Si possono usare su *sistemi Linux e Posix*
- *Non esistono su Windows*. Non sono parte di Libreria Standard del C

**Figura.** (*Primo confronto tra System call e Funzioni di Libreria*)
![550](images/sys-vs-lib.png)

# 2. Definizioni Relative all'Apertura di File
**Definizione.** (*file descriptor*)
In Linux, un *file aperto* è identificato da un *file descriptor*.
Esso è un *numero intero non negativo*, che per convenzione hanno tre significati:
- Standard Input: descrittore $0$ (stdin)
- Standard Output: descrittore $1$ (stdout)
- Standard Error: descrittore $2$ (stderr)

**Nota.** (*differenza*)
Nelle funzioni di libreria un file aperto è un `FILE *`. Nelle System Call Linux è un `int`.

**Definizione.** (*File table*)
Il sistema operativo mantiene delle *tabelle* (dette come *"file table"*) che mappano i *file descriptor* ai file fisici su disco (*inode*), ovver una *serie di strutture dati*.

**Figura.** (*Schema*)
![width:600px center](images/file-table.png)

**Nota.** Le tabelle dei *processi A, processi B* rispondono alla domanda: *"quali file sono aperti nei processi individuali?"*; la tabella centrale, ovvero quella generale del S.O. agisce su *dei processi* e l'ultima tabella è la *tabella degli i-node corrispondente*, che serve le richieste.

**Analisi Approfondita.**
1. Per ogni *processo*, vi è una tabella che contiene i *file descriptor*:
	- Contiene un *riferimento alla tabella generale*
	- E dei *flag* (come ad esempio le modalità di apertura del file)
2. La *tabella generale* (una per tutto il SO), contiene:
	- Access Mode: *R, W, RW*
	- File Offset: posizione del *cursore*
3. La *tabella degli inode* è semplicemente una *copia in memoria degli inode interessati* (che si trovano su disco)

# 3. Apertura di File con System Call
**Apertura di un file**
```c
int open(const char *pathname, int flags);
int open(const char *pathname, int flags, mode_t mode);
```
- Apre il file identificato dal path `pathname`.
- `flags` determinano modalità di accesso al file.
	- Uno tra `O_RDONLY`, `O_WRONLY,` e `O_RDWR` deve essere *obbligatoriamente* presente. 
	- Altri flag sono:
		- `O_CREAT` crea il file se non esiste
		- `O_APPEND` apri il file in modalità aggiunta
		- *Nota*: con le funzioni di libreria questo è il *comportamento default*.
	- I flag si sommano usando l'operatore OR bit a bit `|`

**Esempi**.
```c
int fd = open("file.txt", O_RDONLY);
int fd = open("file.txt", O_WRONLY | O_APPEND);
```

**Flag `O_CREAT`.**
Nel caso si specifichi il flag `O_CREAT`, il file viene creato *coi permessi specificati* in `mode`.
Esistono 9 flag:
- `S_I[RWX]USR`, `S_I[RWX]GRP`, `S_I[RWX]OTH`
*Ricordiamoci* che in Linux i file hanno 3 tipi di permessi (Read, Write, Execute), gestibili separatamente per il *proprietario, il gruppo e gli altri utenti* ([[Permessi Linux#^a5e2df|1]]).

---
# 4. Chiusura di File con System Call

**Chiusura di un file**:
```c
int close(int fd);
```
Chiude il *file descriptor*. Il numero `fd` non si riferisce più a nessun file aperto e *può essere riutilizzato in successive* `open` da parte del SO.

---
# 5. Lettura e Scrittura su File con System Call
1. **Lettura da file**:
```c
ssize_t read(int fd, void *buf, size_t count);
```
Leggi `count` byte da `fd` e mettili nella memoria all'indirizzo `buf`.
**Valore di ritorno**: il *numero di byte letti*. Può essere minore di `count` se il file finisce.
- In caso di errore $-1$
- Se si è giunti a EOF $0$

2. **Scrittura su file**:
```c
ssize_t write(int fd, const void *buf, size_t count);
```
Scrivi `count` byte su `fd` e prendendoli nella memoria all'indirizzo `buf`.
**Valore di ritorno**: il *numero di byte scritti*. Può essere inferiore a `count` se il disco si riempie.
- In caso di errore $-1$

**Nota.** `ssize_t` sta per *"signed size_t"*.

# 6. Manipolazione Cursore con System Call
**Riposizionamento Cursore**:
```c
off_t lseek(int fd, off_t offset, int whence);
```
Molto simile alla funzione di libreria `fseek`.
Riposizione il file descriptor `df` all'offset `offset` secondo la direttiva `whence` come segue:
- `SEEK_SET`: `offset` è rispetto a inizio file
- `SEEK_CUR`: `offset` è rispetto a posizione corrente
- `SEEK_END`: `offset` è rispetto a file file. `offset` dovrà essere negativo

*Nota.* C'è una corrispondenza uno a uno con la *funzione di libreria* `fseek`

---
# 7. Esempi Generali
**Esempio**: scrittura utilizzando System Call

```c
const char *str = "Arbitrary string to be written to a file.\n";
const char* filename = "innn.txt";

int fd = open(filename, O_RDWR | O_CREAT);
if (fd == -1) {
    perror("open");
    exit(EXIT_FAILURE);
}

write(fd, str, strlen(str));
printf("Done Writing!\n");

close(fd);
```

**Esempio**: equivalente usando funzioni di libreria
```c
const char *str = "Arbitrary string to be written to a file.\n";
const char* filename = "innn.txt";

FILE* output_file = fopen(filename, "w+");
if (!output_file) {
    perror("fopen");
    exit(EXIT_FAILURE);
}

fwrite(str, 1, strlen(str), output_file); // Si può usare fputs o fprintf
printf("Done Writing!\n");

fclose(output_file);
```

**Esempio**: sono equivalenti le seguenti forme per stampare il messaggio `Hello World` su console.
Usando la `printf` si stampa su Standard Output.
```c
printf("Hello World\n");
```
Si può usare la `fprintf` dicendole di stampare sul file `stdout`, che è un `FILE *` pre-definito.
```c
fprintf(stdout, "Hello World\n");
```

Si può usare la System Call `write` (solo si Linux/POSIX).
- Si stampa sul file descriptor $1$, per convenzione lo Standard Output
- E' necessario specificare quanti byte scrivere. `write` stampa dei byte, non utilizza il terminatore `'\0'` (valore $0$)
```c
write(1, "Hello World\n", 13);
```
