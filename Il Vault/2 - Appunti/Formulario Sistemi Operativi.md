---
data: 2024-06-03
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Formulario Sistemi Operativi
tipologia: appunti
stato: "0"
capitolo:
---
- - -
*Studio approfondito del formulario di Sistemi Operativi: descrizione dettagliata di ogni system call (o funzione di libreria) data.*
- - -
# 1. Console
```c
int printf(const char *format, ...);
int scanf(const char * format, ...);
```

# 2. Gestione degli Errori
```c
void perror(const char *s);
```
- Stampa il messaggio d'errore relativo all'ultima *System Call* (o anche *funzione di libreria*) chiamata, premettendo la stringa passata per argomento.

```c
char *strerror(int errnum);
```
- Ritorna una stringa, dato un *identificativo* dell'errore.

# 3. Stringhe
**Direttiva richiesta** - `#include <string.h>` e `#include <stdlib.h>`

```c
size_t strlen(const char *s);
```
- Data una stringa passata per argomento, ritorna la *lunghezza* della stringa. `size_t` è un *tipo alias* per un `unsigned long int` (tipicamente).

```c
char *strcpy(char *dest, const char *src);
char *strncpy(char *dest, const char *src, size_t n);
```
- Data una stringa `src`, la copia nella stringa `dest`. Stare attenti alla lunghezza delle stringhe! La seconda versione della funzione permette di evitare problemi con tale situazione.

```c
char * strcat(char *dest, const char *src);
char * strncat(char *dest, const char *src, size_t n);
```
- Somma (concatena) date due stringhe, facendo una somma del tipo `dest+src`.

```c
int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2);
```
- Compara due stringhe, lettera per lettera. Ritorna un intero: $0$ se sono uguali, $<0$ se `s1` precede `s2`, $>0$ altrimenti.

```c
int sprintf(char *str, const char *format, ...);
```
- Scrive una *stringa* e la salva su un buffer. Ritorna il valore dei *byte* scritti nel buffer (o $< 0$ se c'è qualcosa di storto).

```c
int sscanf(char *str, const char *format, ...);
```
- Cerca sulla stringa il *format* e lo salva su puntatori passati per argomento (analoga a `scanf`, solo che al posto di `stdin` si opera su `str`).

```c
int atoi(const char *nprt);
double atof(const char *nprt);
```
- Converte una stringa un numero (intero o float); ritorna un numero $\neq0$ se andato bene, $0$ altrimenti. Nota: non c'è nessun modo per distinguere $0$ come *valore effettivamente ritornato* e come *errore*. Per questa casistica si consiglia `strtol`.

# 4. File (Libreria Standard)
**Direttiva richiesta** - `#include <stdio.h>` e `#include <stdlib.h>`

```c
FILE *fopen(const char *path, const char *mode);
```
- Apre un file (rappresentato con l'handle opaco `FILE *`), in `path` e nella modalità `mode` (NOTA! Quella è una stringa).

```c
int fclose(FILE *fp);
```
- Chiude un file. Ritorna $0$ se andato a buon fine, `ERRNO` altrimenti.

```c
int fgetc(FILE *stream);
char * fgets(char *s, int size, FILE *stream);
```
- La prima legge il prossimo carattere del file che viene convertito in `int` (in caso di errori viene ritornato `EOF`); la seconda fa la stessa con le stringhe, legge al più `size` byte (o finché individua una nuova riga) e ritorna la stringa `s` (in caso di errori ritorna il puntatore nullo `NULL`).

```c
int fputc(int c, FILE *stream);
int fputs(const char *s, FILE *stream);
```
- La prima scrive un carattere (rappresentato in `int`) sul file; la stessa fa la stessa cosa, solo con stringhe. La prima ritorna il carattere scritto, la seconda un numero $>0$. In caso di errori si ritorna `EOF`.

```c
int fprintf(FILE *stream, const char* format, ...);
int fscanf(FILE *stream, const char *format, ...);
```
- Equivalenti a `printf`, `scanf` solo che lavoriamo su file. La prima ritorna il numeri caratteri stampati con successo; la seconda ritorna il numero di variabili individuate ed assegnate.

```c
int fseek(FILE *stream, long offset, int whence);
long ftell(FILE *stream);
```
- Manipolazione del cursore virtuale: la prima modifica il cursore virtuale, a seconda della costante `whence` impostata: se è `SEEK_SET` allora la si sposta di `offset` byte dall'inizio dal file. Comportamento analogo per `SEEK_CUR, SEEK_END`, solo che si parte rispettivamente dalla posizione attuale e dalla fine del file. La seconda funzione ritorna la posizione del cursore virtuale: ritorna $0$ in caso di successo, $-1$ altrimenti.

```c
size_t fread(void *ptr, size_t size, size_t nmemb, FILE * stream);
size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
```
- Legge e scrive dati binari dal/sul file. `ptr` specifica il puntatore del buffer (su cui salvare il risultato o da cui leggere); `size` specifica la lunghezza del singolo dato binario, `nmemb` la quantità dei dati binari con cui agiamo. `stream` è il file.

```c
void setbuf(FILE *stream, char *buf);
```
- Modifica la bufferizzazione: dato un flusso di comunicazione `stream`, si modifica la dimensione del buffer con `buf`. Se `buf = NULL` allora è completamente disabilitata.

```c
int fflush(FILE * stream);
```
- Costringe al buffer di svuotarsi: ad esempio per caso `stream = stdout` si va a *"forzare"* tutti i `printf` emessi (se non ci sono nuove righe).

```c
int remove(const char *pathname)
```
- Rimuove un file, se ha i permessi.

# 5. Cartelle
**Direttive richieste** - `#include <sys/types.h>` e `#include <dirent.h>`

```c
DIR * opendir(const char *name);
int closedir(DIR *dirp);
```
- Apre un direttorio (o cartella), ritorna un puntatore ad un handle opaco (`DIR`). L'altra funzione chiude il direttorio aperto: $0$ in caso di successo, $-1$ altrimenti. 

```c
struct dirent *readdir(DIR *dirp);
```
- Legge tutti gli inode contenuti nella cartella. Ritorna un puntatore ad una `struct dirent` (vedremo dopo), oppure `NULL` se la cartella è già tutta letta.

```c
struct dirent
{
	ino_t d_ino;
	char d_name[];
};
```
- `d_ino` è il numero dell'inode; `d_name` è il nome dell'entità.

# 6. File (System Call)
**Direttive richieste** - `#include <sys/types.>, <sys/stat.h>, <fcntl.h>, <unistd.h>`

```c
int open(const char *path, int oflag, ...);
int close(int filedes);
```
- Apre e chiude un file. `oflag` sono i flag per i permessi, si usano le costanti definite in `fcntl.h`. Si ritorna un interno, che rappresenta un *file descriptor*.

```c
ssize_t read(int filedes, void *buf, size_t nbyte);
ssize_t write(int filedes, const void *buf, size_t count);
```
- Legge e scrive dati binari su file, scrivendo (o leggendo) su `buf`, ognuna grande `nbyte` (o `count`).

```c
off_t lseek(int filedes, off_t offset, int whence);
```
- Completamente analoga alla sua controparte `fseek`.

```c
int link(const char *path1, const char *path2);
int symlink(const char *path1, const char *path2);
```
- Crea un *link* a file `path1` chiamato `path2`. `link` è per l'hard link, `symlink` per i soft link (detti simbolici).

```c
int unlink(const char *pathname);
int mkdir(const char *path, mode_t mode);
int rmdir(const char *path);
```
- La prima rimuove file, la seconda crea o rimuove cartelle.

```c
int truncate(const char *path, off_t length);
int ftruncate(int filedes, off_t length);
```
- Va a troncare i contenuti di un file di `length` byte. La prima richiede il path, la seconda richiede il file aperto in modalità scrittura.

```c
int stat(const char *restrict path, struct stat *restrict buf);
```
- Va a leggere i metadati di un file e lo salva in `buf`. $0$ per successo e $-1$ per insuccesso.

```c
struct stat
{
	ino_t st_ino;
	mode_t st_mode;
	uid_t st_uid;
	gid_t st_gid;
	off_t st_size;
}
```
- Metadati di un file. `ino_t` individua l'inode number, `st_mode` la modalità del file (ovvero tipologia e permessi), `st_uid` il numero dell'utente proprietario, `st_gid` il numero del gruppo primario, `st_size` la dimensione del file in byte.

# 7. Processi
**Direttive Richieste** - `#include <sys/types.h>, <unistd.h>, <sys/wait.h>`

```c
pid_t fork(void);
```
- Il processo si duplica, eseguendo lo stesso codice. Nel processo figlio si ritorna $0$, nel processo padre il PID effettivo del figlio, oppure $-1$ in caso di errore.

```c
pid_t wait(int *stat_loc);
pid_t waitpid(pid_t pid, int *stat_loc, int options);
```
- Il processo padre aspetta un suo processo figlio termini. Il primo comando attende un processo figlio qualsiasi: comportamento bloccante. Ritorna il processo del figlio terminato e salva il valore di ritorno nel puntatore `stat_loc`. Il secondo comando si specifica il PID del figlio da aspettare ($<-1$ si aspetta il GID, $=-1$ si aspetta un figlio qualsiasi, $=0$ si aspetta il GID del padre, $>0$ si aspetta un PID specificato); in `options` si può specificare il comportamento della wait, in particolare `WNOHANG` specifica che il comportamento della funzione non è bloccante.

```c
int execl(const char *path, const char *arg0, ... , (char*)NULL);
int execv(const char *path, char * const argv[] );
int execle(const char *path, const char *arg,0 ..., (char*)NULL, char *const envp[] );
int execve(const char *path, char *const argv[] , char *const envp[] );
int execlp(const char *file, const char *arg0, ..., (char*) NULL);
int execvp(const char *file, char *const argv[] );
```
- Cambia il comportamento di un processo, eseguendo un comando specificato in `path` (o in `file`). Parametri diversi a seconda della tipologia di funzione: `l` per listare gli argomenti come argomenti opzionali, `v` invece come un array di stringhe. `l` per specificare le variabili d'ambiente in un'array. `p` per cercare il comando nei path specificati come variabili d'ambiente (tipo `/bin/`). Ritorna un valore solo se c'è un errore, in questo caso $-1$.

```c
int system(const char *comand);
```
- Il processo si duplica e il figlio esegue `comand` in bash: sostanzialmente un `fork(); -> execl("/bin/sh", "sh", "-c", comand, (char*) NULL); -> wait();`. Ritorna il valore di ritorno del comando eseguito.

```c
void exit(int status);
int atexit(void (*function)(void));
void _exit(int status);
void abort(void);
```
- Termina il programma: il primo lo fa ritornando il valore `status` (equivalente ad una return nel main). Il secondo specifica una funzione da eseguire quando un programma si termina con `exit`; il terzo è la System Call vera e propria, terminando il programma ancora più immediatamente. L'ultimo rilascia un segnale `SIGABRT`, se non gestito causa la terminazione immediata del programma.

```c
pid_t getpid(void);
pid_t getppid(void);
```
- Ritorna il PID del processo (o del padre, nel secondo comando).

# 8. Segnali
**Direttive Richieste** - `#include <signal.h>, <sys/types.h>, <unistd.h>`

```c
int sigaction(int sig, const struct sigaction *restrict act, struct sigaction *restrict oact);
```
- Definisce un *signal handler* (ovvero funzione che gestisce un segnale): `sig` è il segnale (definito dalle costanti del tipo `SIGKILL`, `SIGUSR1`, `SIGINT`, ...). `act` è il nuovo comportamento (definito dalla struttura `struct sigaction`) e salva il vecchio comportamento nel puntatore `oact`.

```c
typedef void (*signalhandler_t)(int);
```
- Definisce il tipo alias `signalhandler_t` come un puntatore ad una funzione che accetta un interno e ritorna nulla.

```c
signalhandler_t signal(int signum, signalhandler_t handler);
```
- Come `sigaction`, ma a livello più basso.

```c
int kill(pid_t pid, int sig);
int raise(int sig);
unsigned alarm(unsigned seconds);
```
- Manda segnali. Il primo manda un segnale particolare ad un processo; il secondo il processo manda a sé stesso un segnale; la terza fa la stessa cosa, con `SIGALRM` e dopo `seconds` secondi.

```c
int pause(void);
```
- Il processo attende l'arrivo di un segnale.

```c
struct sigaction
{
	void (*sa_handler)(int);
	void (*sa_sigaction)(int , siginfo_t *, void *);
	sigset_t sa_mask;
	int sa_flags;
}
int sigemptyset(sigset_t *sa_mask);
```
- Definisce il comportamento del *signal handler*; `sa_handler` definisce il comportamento. O è una funzione che accetta un interno, o è una costante del tipo `SIG_IGN` o `SIG_DFL`. `sa_sigaction` è come `sa_handler`, solo che vuole più argomenti (non lo useremo: è una storia complicata); `sa_mask` va inizializzata con `int sigemptyset(sigset_t *sa_mask);` (non vedremo); inizializzeremo `sa_flags` con $0$.

# 9. Inter-process communication e Memoria
**Direttive Richieste** - `#include <unistd.h>, <fcntl.h>, <sys/types.h>, <sys/stat.h>, <mman.h>, <stdlib.h>, <unistd.h>`.

```c
int pipe(int fildes[2]);
```
- Crea una *pipe* tra processi anonimi; ritorna un vettore di *file descriptor*, il primo è il flusso in lettura, il secondo è il flusso in scrittura.

```c
int mkfifo(const char *pathname, mode_t mode);
```
- Crea una *FIFO* di nome `pathname`, con i permessi specificati in `mode`.

```c
void *mmap(void *addr, size_t len, int prot, int flags, int fildes, off_t off);
int munmap(void *addr, size_t len);
```
- Il primo crea una *zona di memoria condivisa*; di solito si mette `addr` come puntatore nullo (viene deciso dal sistema operativo), `len` la lunghezza della zona condivisa, `prot` dei permessi sulla zona di memoria (ovvero se va letta, scritta, eccetera...), `flags` dei flag di configurazione (di solito si ha `MAP_ANONYMOUS | MAP_SHARED` o `MAP_SHARED`), e `fildes` e `off` sono imposti come `fd, 0` o `-1, 0`. Il secondo elimina una zona di memoria, dovrebbe essere un indirizzo ritornato da `mmap(...);`: ritorna $0$ in caso di successo, $-1$ altrimenti.

```c
void *malloc(size_t size);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
void free(void *ptr);
```
- Interagisce con lo Heap: le prime due creano un puntatore ad una zona dello Heap: in particolare la prima non inizializza nulla, la seconda lo si inizializza a $0$. La seconda ridimensiona una zona dello Heap. La terza libera la zona dello Heap (importante per evitare le *memory leak*!).

```c
int brk(void *addr);
void *sbrk(intptr_t increment);
```
- Cambiano la locazione del *program break*: la prima nel valore specificato dal puntatore `addr`, la seconda accetta un valore numerico.
# 10. Thread e Sincronizzazione
**Direttive Richieste** - `#include <pthread.h>, <semaphore.h>, <fcntl.h>, <sys/stat.h>`

```c
int pthread_create(pthread_t *thread, const phthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
```
- Crea un *thread* in Linux. Si va a salvare il thread nel puntatore `thread`, non ci interessa `attr` (spesso lo mettiamo come `NULL`); `start_routine` è una funzione che accetta e ritorna un puntatore `void *` (ovvero un puntatore generico), e l'argomento fornito è `arg`.

```c
void pthread_exit(void *retval);
int pthread_cancel(pthread_t pthread);
```
- Termina un thread. Nel primo il thread si cancella da solo, ritornando `retval` (un puntatore generico, per rendere tutto flessibile); nel secondo viene cancellato da un altro thread.

```c
pthread_t pthread_self(void);
```
- Ritorna l'identificativo `pthread` del thread in esecuzione.

```c
int pthread_join(pthread_t thread, void **retval);
```
- Aspetta che il `thread` termini, e salva il valore ritornato in `retval` (che è un doppio puntatore, dato che voglio salvare un puntatore in un puntatore).

```c
int pthread_mutex_init(pthread_mutex_t *restrict mutex, const pthreat_mutexattr_t *restrict attr);
```
- Inizializza una *mutex* sulla variabile `mutex`. Non vedremo `attr`, la si setta come il puntatore nullo `NULL`. Ritorna $0$ in caso di successo.

```c
int pthread_mutex_lock(pthread_mutex_t *mutex);
int pthread_mutex_trylock(pthread_mutex_t *mutex);
```
- Prova a fare la *lock* sulla *mutex* `mutex`. La prima è bloccante, la seconda no. Nel secondo caso, se è occupato si ritorna l'errore `EBUSY`. Altrimenti in caso di successo si ritorna $0$.

```c
int pthread_mutex_unlock(pthread_mutex_t *mutex);
```
- Effettua l'*unlock* sulla *mutex* `mutex`. Ritorna $0$ in caso di successo.

```c
sem_t *sem_open(const char *name, int oflag, /*mode_t mode, unsigned int value */);
```
- Inizializza un *semaforo non-anonimo*, di nome `name` (va iniziato con `/`), con le modalità specificate in `oflag` (spesso si mette `O_CREAT` per creare se non esiste o solo aprire se esiste, oppure `O_CREAT | O_EXECL` per creare solo nel caso in cui non esiste, altrimenti errore). Ritorna il semaforo in caso di successo, altrimenti la costante `SEM_FAILED`. Inoltre si può specificare i permessi con `mode` e il valore di inizializzazione `value` (obbligatorio nel caso in cui si crea il semaforo da nuovo!).

```c
int sem_init(sem_t sem*, int pshared, unsigned int value);
```
- Crea un *semaforo anonimo*. Si specifica se è condiviso tra *processi parenti* o *medesimi thread* con `pshared` ($0$ per thread (in tal caso si salva il semaforo in una variabile globale), $\neq 0$ per non-thread (in tal caso si salva il semaforo in una zona di memoria condivisa) ). Viene inizializzato con valore `value`.

```c
int sem_post(sem_t *sem);
int sem_wait(sem_t *sem);
int sem_getvalue(sem_t *sem, int *sval);
```
- Effettua delle operazioni col semaforo `sem`. Sono autoesplicativi.

```c
int sem_close(sem_t *sem);
int sem_unlink(const char *name);
```
- Chiude e distrugge un semaforo non-anonimo (nota: questi comandi funzionano esclusivamente per semafori *named*!).
