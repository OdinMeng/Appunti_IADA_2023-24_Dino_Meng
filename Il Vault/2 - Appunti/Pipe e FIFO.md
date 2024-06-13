---
data: 2024-05-21
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Pipe e FIFO
tipologia: appunti
stato: "1"
capitolo: Processi
---
- - -
*Costrutti per l'Inter-Process-Communication: Pipe e FIFO*
- - -
# Obiettivi
**Definizione.** (*Processi indipendenti e cooperanti*)
In un sistema dotato in SO, diversi processi sono in esecuzione contemporaneamente.
Essi possono essere classificati in:
- **Processi indipendenti**: non sono influenzati né influenzano altri processi
- **Processi cooperanti**: *interagiscono con altri processi*. Devono usare meccanismi opportuni per farlo
Ci concentreremo sui *processi cooperanti*, in particolare i loro meccanismi.

Tutti i SO mettono a disposizione strumenti per la *Inter-Process Communication*
Sono tipicamente basati su:
- *Scambio di messaggi* (esempio: segnali)
- *Scambio di dati* (vedremo le *pipe* o le *FIFO*)
- *Memoria condivisa* (vedremo *mmap* o *shmget*)
- Altri costrutti di sincronizzazione
Ogni SO utilizza meccanismi diversi.

**LINUX.**
In Linux, ci sono *tanti meccanismi*.
- Storicamente stratificati
- Ereditati da System V
- Parte di standard POSIX
Ci concentreremo su:
- Pipe, FIFO (*Byte stream*)
- Memory Mapping (*Shared memory*)
- Sincronizzazione (semafori, eccetera...)
Ogni meccanismo ha una sua caratteristica diversa: alcuni presuppongono *legami di parentela*, altri senza, eccetera...

![450](images/ipc.png)

---
# Le pipe
## Concetto di Pipe
**Idea.** (*Pipe*)
Le *pipe* sono la più vecchia e la più usata forma di IPC introdotta in Unix
- Permettono di scambiare *dati* (sotto forma di bytestream) tra processi
- Modello *produttore-consumatore*; *produttore* --> *consumatore*
- Si usano con le stesse System Call dei file: `read`, `write`
- Risiedono in memoria; molto veloce!
- *Non sono persistenti*: quando i processi terminano, tutto ciò che rimane viene distrutto

**Limitazioni:**
- Sono half-duplex (comunicazione *in un solo senso*)
- Utilizzabili solo tra processi *con un "antenato" in comune*
	- Si dice che le pipe sono *anonime*.

**Come superare queste limitazioni?**
- Le *FIFO* (o *named pipe*) possono essere utilizzati tra più programmi
	- Si identificano tramite un nome

## Primo Esempio di Pipe
Le *pipe* sono comunemente usate nella shell, per redirezionare gli `stdout` e `stdin`, come visto con *Bash*.

**Esempio:**
```
ls | wc -l
```

Per fare questa operazione, la shell:
- Usa due `fork` e `exec` per creare io processi `ls` e `wc`
- Crea una *pipe* per connettere lo `stdout` di `ls` con lo `stdin` di `wc`
![width:500px center](images/pipe-example.png)
- Studieremo questo *a basso livello*
## Definizione di Pipe
**Definizione:**
Le pipe sono un *byte stream*
- Vi si scrivono/leggono byte
- Non solo caratteri stampabili
Sono *unidirezionali*:
- Hanno un ingresso e una uscita
Hanno *capacità limitata*:
- I dati accodati (scritti ma non ancora letti) *non possono eccedere una soglia*
- Soglia configurabile: 65 KB di default
	- Si può variare con `fcntl(fd, F_SETPIPE_SZ, size)`

---
## Sintassi in C per Pipe

**Creazione:**
```c
#include <unistd.h>
int pipe (int filedes [2]);
```

Ritorna due descrittori di file attraverso l'argomento fd (*passato per riferimento*; ricordiamoci che un vettore è un puntatore!)
- `fd[0]` è aperto in lettura (*out*)
- `fd[1]` è aperto in scrittura (*in*)
- L'output di `fd[0]` è l'input di `fd[1]`

**I/O su pipe.**
Si usano le funzioni `read` e `write`
- Il valore di ritorno è il numero di byte scritti/letti

**Lettura**:
- La `read` è bloccante finché non è letto almeno un byte. Se la pipe è morta, ritorna $0$.

**Scrittura**:
- Se la *pipe* è piena, la `write` è *bloccante*

**Chiusura di una pipe:**
- Se leggo un pipe e ottengo $0$, significa che *sono stati chiusi tutti i file descriptor*. Così posso effettuare l'*operazione di gestione* per la chiusura di pipe.

**Confronto Pipe-File.**
- Sui *file* assumo che il contenuto sia *immutabile*, letto in sequenza fino all'*EOF*.
- Sui *pipe* la *EOF* non esiste! Teoricamente potrei scriverci quanto voglio.

**Nota:** se scrivo su una *pipe* che non ha un *reader* (`fd[0]` è stato chiuso), il processo riceve *il segnale* `SIGPIPE` (*broken pipe*)
- Comporta la terminazione del processo, se non c'è un *Signal Handler* opportuno

## Prassi delle pipe
**Condivisione tra processi:**
Per utilizzare una pipe tra più processi:
- Il processo padre *crea la pipe* e ottiene i due `fd`
- Esso fa una `fork`
- Entrambi i processi possono accedere alla *pipe* usando i due `fd`

![220](images/pipe-fork.png)

**Nota.**
- Solitamente un processo (e.g., padre) scrive, e un altro (e.g., figlio) legge
- Tecnicamente possibile che un processo legga e scriva
	- Crea però *problemi di sincronizzazione*
- Ogni processo chiude i `fd` che *non usa* (buona pratica)

![220](images/pipe-fork2.png)

---
## Esempio di Pipe
**Esempio:**
```c
int pfd [2] ;
pipe ( pfd ); /* Crea la pipe */
switch ( fork () ) {
case -1: exit(1);
case 0:
    /* Child */
    close ( pfd [1]);
    /* Può ora leggere */
    break ;
default :
    /* Parent */
    close ( pfd [0]);
    /* Scrive nella pipe */
    break ;
}
```

## Messaggi su pipe
**Messaggi su pipe**
Ci sono diverse strategie per scambiare messaggi tramite *pipe*
![width:800px center](images/pipe-msg.png)

1. Scelgo un byte per rappresentare la *fine* del messaggio (come `\0`)
2. Approccio complementare: prima scrivo il *la lunghezza del messaggio*, poi il messaggio effettivo
3. Ho $n$ bytes fissati per messaggio. Il più semplice

## Esercizio sulle pipe
**Esercizio:** si crei un programma che genera un figlio. Il processo padre riceve una stringa da riga di comando e la passa al figlio tramite una *pipe*. Il figlio riceve la stringa e la stampa.

```c
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#define MAXLINE 1024

int main(int argc, char *argv[])
{
	int pfd[2], status;
	char line[MAXLINE];
	
	pipe(pfd);
	if (fork() > 0) { /* Padre */
		close(pfd[0]);
		write(pfd[1], argv[1], strlen(argv[1]));                           
		wait(&status);
	} else { /* Figlio */
		close(pfd[1]);
		read(pfd[0], line, MAXLINE);
		printf("Ricevuto: %s\n", line);
	}
	exit(0);
}
```

**Esercizio:** si crei un programma con due processi. Il processo padre riceve il nome di un file da riga di comando e ne passa il contenuto al figlio tramite una *pipe*. Il figlio riceve il contenuto e lo stampa.

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#define MAXSIZE 1000

int main(int argc, char * argv[]){
    int pfd[2], status;   
    
    pipe(pfd);
    if(fork()>0){
        close(pfd[0]);
        FILE * fp;
        char line[MAXSIZE];

        fp=fopen(argv[1],"r");
        while(fgets(line,sizeof(line),fp)!=NULL) /* Itera riga per riga*/
           write(pfd[1],line,sizeof(line));      /* Scrive nella pipe */
        close(pfd[1]);
        wait(&status);
        exit(0);
    }
    else {
        char buffer [MAXSIZE];
        close(pfd[1]);
        while (read(pfd[0],buffer,sizeof(buffer)) > 0)  /* Quando read ritorna 0, la pipe è morta*/             
        exit(0);
    }
}
```


---
# Le FIFO
## Motivazioni per le FIFO
**Richiamo.**
Facciamo un breve richiamo sulle *pipe*, per poter parlare delle *FIFO* e darne una motivazione.

**Pipe "normali"**
- Possono essere utilizzate solo da processi che hanno un *"antenato" in comune* (sono anonime)
- Motivo: unico modo per ereditare descrittori di file

**Named pipe o FIFO**
- Permettono a processi *non collegati* di comunicare
- Utilizzano il file system per *"dare un nome"* alla pipe
- Le *FIFO* sono un tipo di file
	- La macro `S_ISFIFO` dopo una `stat` restituirà `true`
- La procedura per creare un fifo è simile alla procedura *per creare file*
	- In certi versi le FIFO possono essere trattati come file, similmente alle pipe

## Sintassi C per FIFO
```c
#include <sys/types.h>
#include <sys/stat.h>
int mkfifo(const char *path, mode_t mode);
```

Crea un *FIFO* dal `pathname` specificato
Argomento `mode` specifica i permessi  (come nella `open`).
- E.g.: `S_IRWXU`, `S_IRGRP`, etc.

Valore di ritorno: $0$ se successo, $-1$ se errore

**Utilizzo:**
Come file e *pipe*: tramite `read` e `write`
Ogni processo che ha i permessi per `pathname` può usarla

1. **Apertura:** dopo essere state create con `mkfifo`, le FIFO vanno aperte con una `open` o una `fopen`

**Flag.**
File aperto senza flag `O_NONBLOCK`:
- Se il file è aperto in *lettura*, la `open` *si blocca* fino a quando un altro processo non apre la FIFO in scrittura
- Se il file è aperto in *scrittura*, la `open` *si blocca* fino a quando un altro processo non apre la FIFO in lettura

File aperto con flag `O_NONBLOCK`
- Se il file è aperto in lettura, la `open` *ritorna immediatamente*
- Se il file è aperto in scrittura, e nessun altro processo è stato aperto in lettura, la `open` *ritorna un messaggio di errore*

**Input/Output:**
- Con `read` e `write`
- I dati nella *FIFO* sono *bufferizzati dal kernel*

**Importante:**
- Una *FIFO* ha un pathname ma è *solo un espediente* per permettere a diversi processi di accedervi
- Quando un *FIFO* viene chiusa (o i processi terminano) il nome del file persiste nel file system, ma esso *non contiene alcun dato*
- Non ho dei *file* presenti sul disco! Sono dei *file virtuali*

## Sintassi Bash per FIFO
Si possono creare e usare le *FIFO* in Bash in maniera semplice:
```bash
mkfifo myfifo
tr 'aeiou' 'AEIOU' < myfifo &
man 2 pipe > myfifo
```

## Esercizi sulle FIFO
**Esercizio:** si crei un programma che: 
1) se riceve `read` come argomento, stampa ciò che viene scritto su una pipe e 
2) se riceve `write` come argomento, legge iterativamente una riga da tastiera e la scrive su una pipe.

**Soluzione.**
```c
#include <stdio.h>
#include <sys/stat.h>
#include <string.h>
#include <stdlib.h>
#define FIFO "my-fifo"
#define BUF_SIZE 512

int main(int argc, char * argv[]){
    FILE * f;
    char buffer[BUF_SIZE];
    
    if (argc != 2 || ( strcmp(argv [1], "read")==0 && strcmp(argv [1], "write")==0 ) ){
        printf("Usage: fifo read|write\n");
        return 1;
    }
    
    if (mkfifo(FIFO, S_IRWXU)<0)
        perror("Warning. FIFO not created");
   
    if (strcmp(argv [1], "read")==0){
        f = fopen(FIFO, "r");
        if (f==NULL){
            perror("Impossible to open the FIFO");
            return 1;
        }
        
        printf("Read mode:\n");
        while(fgets(buffer,BUF_SIZE,f)!=NULL)
            printf("%s", buffer);

    }else{
        f = fopen(FIFO, "w");
        if (f==NULL){
            perror("Impossible to open the FIFO");
            return 1;
        }
        
        printf("Write mode. Write lines of text:\n");
        while(fgets(buffer, BUF_SIZE, stdin)!=NULL){
            fputs(buffer, f);
            fflush(f);
        }
    }    
    return 0;
}
```

**Esercizio:** si crei un programma che legge da una FIFO e stampa il contenuto in maiuscolo.

**Soluzione.**
```c
#include <stdio.h>
#include <ctype.h>
#include <sys/stat.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    int i, n, l;
    FILE * f;
    char buffer[512];
    
    i = mkfifo("myfifo", S_IRWXU);
    if (i<0){
        printf("Impossible creare la FIFO\n"); /* Potrebbe già esistere */
    }
   
    f = fopen("myfifo", "r");
    if (f==NULL){
        printf("Impossible aprire la FIFO\n");
        exit(1);     
    }
    while(fgets(buffer,sizeof(buffer),f)!=NULL){
        l = strlen(buffer);
        for (i=0; i<l; i++)
            putc(toupper(buffer[i]), stdout);   
    }
}
```
La si testi con: `echo "ciao mondo" > myfifo`
