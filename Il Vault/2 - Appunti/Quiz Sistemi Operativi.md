---
data: 2024-06-03
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Quiz Sistemi Operativi
tipologia: appunti
stato: "1"
capitolo:
---
- - -
*Tutti i Quiz di Martino Trevisan*
- - -
# U1
Cosa é un processo?
`a) • Un programma` 
`b) • Un algoritmo` 
`c) • Un programma in esecuzione`

Le System Call sono usate da:
`a) • SO per interagire con l'hardWare`
`b) • Dai processi per interagire col SO`

Le Funzioni di Libreria vengono eseguite:
`a) • In User Mode` `b) • In Kernel Mode`

Il File System é organizzato come:
`a) • Un Grafo contentente cicli`
`b) • Un Grafo NON contentente cicli`

POSIX é:
`• Uno standard` `• Un SO` `• Una famiglia di SO`

UNIX é:
`• Closed-Source` `• Open-Source`

Linux é:
`• Closed-Source` `• Open-Source`

# U2
Ubuntu é un SO che utilizza il Kernel:
`• Linux` `• UNIX` `• POSIX`

Red Hat é un:
`• Kernel` `• SO` `• Uno standard`

# U4
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

# U5
Un processo è
`• Una componente del sistema operativo`
`• Il codice eseguibile di un programma`
`• Un programma in esecuzione` 

I processi sono identificati da:
`• Un nome` `• Un ID numerico` `• Non hanno identificativi`

I processi sono in relazione tra loro in una struttura:
`• Ciclica` `• Ad albero`

Il Context Switching è:
`• La momentanea sospensione di un processo`
`• La terminazione di un processo`

Nello scheduler di Linux, processi:
`• Hanno tutti la stessa priorità di scheduling`
`• Hanno una priorità assegnabile dall'utente`
`• Hanno una priorità calcolata automaticamente dal SO`

**Esercizio:** si determini l'albero di processi generato dal seguente codice e l'output generato 
```c
#include <stdio.h>
#include <unistd.h> 
int main(){
    if (fork()){
        if (!fork()){
            fork();
            printf("1 "); 
        }
        else
            printf("2 ");
    }
    else
        printf("3 ");
    printf("4 ");
    return 0;
}
```

**Esercizio:** si determini l'albero di processi generato dal seguente codice e l'output generato
```c
#include <stdio.h> 
#include <unistd.h>

int main(){
  printf("\n");
  if (fork() && (!fork())) { 
    if (fork() || fork()) {
      fork();
    }
  }

  printf("2 "); 
  return 0;
}
```

**Esercizio:** si determini l'output generato dal seguente programma
```c
#include <stdio.h> 
#include <unistd.h>
int main(int argc,char *argv[]){
  printf("A\n"); 
  fork();
  printf("B\n"); 
  fork();
  printf("C\n"); 
  return 0;
}
```

**Esercizio:** si determini l'output generato dal seguente programma
```c
#include <stdio.h> 
#include <unistd.h>
int main(int argc,char *argv[]){
  printf("A "); 
  fork();
  printf("B "); 
  fork();
  printf("C "); 
  return 0;
}
```

L'esecuzione del seguente codice quanti processi genera (incluso il processo che esegue il `main`) ?
```c
#include <stdio.h>
#include <unistd.h>
int main(){
    int N = 2;
    for (i=0; i<N; i++)
        fork();
}
```
`• 2` `• 3` `• 4`  `• 6` 

Un processo il cui processo padre muore:
`• Viene terminato dal SO`
`• Riceve un segnale dal SO`
`• Viene ereditato (diventa figlio) dal processo init` 

Cosa stampa il seguente codice?
```c
#include <stdio.h>
#include <unistd.h>
int main(){
    if ( fork() ){
        printf("A\n");
    }else{
        fork();
        printf("B\n");
    }
}
```

```
• A         • A         • A         • A
   B           A             B            A
   B           A                            B
```

La System Call `execve` crea un nuovo processo?
`• Sempre` `• Mai` `• Dipende da come viene invocata` 

La funzione `system` crea un nuovo processo?
`• Sempre` `• Mai` `• Dipende da come viene invocata` 

Quale System Call si usa per generare un segnale?
`• signal` `• kill` `• write`  `• send` 

Una funzione handler riceve degli argomenti?
`• No` `• Riceve una stringa` `• Riceve un intero`

Quale è il comportamento di default di un processo quando riceve un segnale?
`• Il segnale viene ignorato` `• Il processo termina` `• Dipende dal segnale` 

Un signal handler può modificare le variabili globali del processo?
`• Si` `• No` 

Quale segnale viene inviato dal SO quando si preme `CTRL+C` sulla tastiera?
`• SIGKILL` `• SIGINT` `• SIGHUB` `• SIGSTP` 

Le *pipe* sono
`• Monodirezionali` `• Bidirezionali` `• Dipende dai parametri di creazione` 

Le *pipe* sono identificate da un nome?
`• Si` `• No`

Le *FIFO* sono identificate da?
`• Un ID numerico` `• Una stringa` `• Un Path`

Si consideri il seguente codice C che opera sulla FIFO `myfifo`:
```c
int n;
FILE * f = fopen("myfifo", "r");
fscanf (f, "%d", &n);
```
Che operazione compie?
`• Crea la FIFO myfifo`
`• Scrive un intero in myfifo`
`• Legge un intero da myfifo`

Una zona di memoria condivisa creata tramite `shmget` e `shmat` può essere condivisa anche tra processi senza legami di parentela?
`• Si` `• No` 

Le funzioni `shmat` e `mmap` hanno valore di ritorno:
`• char *` `• int` `• int*` `• void*` `• void`

Si consideri il seguente spezzone di codice:
```c
int fd = open("/tmp/mymem", O_RDWR|O_CREATE);
ftruncate(fd, 64);
void* shmem = mmap(NULL, size, PROT_READ|PROT_WRITE, MAP_SHARED, fd, 0);
sprintf( (char*)shmem, "Ciao Mondo!");
```
Dopo che il programma è terminato, il contenuto della zona di memoria presiste?
`• Si, in memoria` `• Si, nel file /tmp/mymem` `• No` 

# U6
Il compito della Memory Management Unit è:
`• Gestire il funzionamento della cache`
`• Allocare zone di memoria`
`• Tradurre gli indirizzi da virtuali a fisici` 

Cosa fa la MMU quando una pagina non è in memoria?
`• La carica`
`• Termina il processo che ha generato l'indirizzo`
`• Avverte il SO`

La zona di memoria Stack viene utilizzata per:
`• Memorizzare variabili globali`
`• Memorizzare il codice del programma`
`• Contenere le variabili relative alle funzioni`
`• Allocare la memoria dinamica`

Un sistema ha pagine da 1KB, indirizzi virtuali da 32bit e fisici da 16bit. Quanti bit sono dedicati all'offset di pagina?
`• 6` `• 10` `• 22`

Un sistema ha pagine da 1KB, indirizzi virtuali da 32bit e fisici da 16bit. Di quante pagine dispone un processo nello spazio degli indirizzi virtuali?
 `• 64` `• 1024` `• circa 4 Milioni`

In Linux, il Loader è:
`• Un componente del SO`
`• La funzione principale di un programma`
`• La zona di memoria dove è memorizzato il codice del programma in esecuzione`

In Linux, le librerie condivise sono mappate in memoria:
`• In una zona intermedia tra stack e heap`
`• Nella zona di dati`
`• Nella zona di codice`
`• Nello stack`

Si consideri il seguente codice C:
```c
int c = 40;
int main(){
    int i;
    static int j;
    ...
}
```
Quali variabili risiedono nello stack?
`• Tutte` `• i e j` `• i`

Il seguente codice è corretto in C?
```c
#define size 1024
int i [size];
```
`• Si` `• No`

Si completi il seguente codice C
```c
double * a, int i;
scanf("%d", &i);
a = ...
```
`• float[i]` `• malloc(i);`
`• malloc(i * sizeof(double));`
`• malloc(sizeof(double));`

La `malloc`:
`• è una System Call`
`• è utilizzata dalla funzione sbrk`
`• utilizza la System Call sbrk`

# U7
Due Thread dello stesso processo condividono le variabili globali?
`• Si` `• No`

La funzione `pthread_join` attende la terminazione:
`• Di un qualsiasi thread del sistema`
`• Di un qualsiasi thread del processo corrente`
`• Di un thread specifico`

Quando un thread invoca la funzione `pthread_exit`:
`• Il thread corrente termina`
`• Il processo corrente termina`
`• Il thread specificato come argomento della funzione termina`

Si consideri il seguente codice:
```c
void * func(void *arg){
    sleep(5);
    exit(0);
}

int main(){
    ...
    pthread_create(&t, NULL, func, NULL);
    sleep (10)
    pthread_join(t, NULL);
    exit(0);
}
```
Dopo quanti secondi temina il processo?
`• 5` `• 10` `• 15` 

La parallelizzazione è una soluzione per migliorare le prestazioni:
`• di qualsiasi algoritmo`
`• solo di algoritmi che accedono al disco`
`• solo di algoritmi che posono eseguiti per mezzo di più flussi contemporanei`

Il seguente codice è corretto?
```c
pthread_mutex_lock(&mtx);
var++;
pthread_mutex_lock(&mtx);
```
`• Si, il lock viene rilasciato`
`• No, il thread entra in uno stato di attesa perpetuo`

Un semaforo può essere inizializzato:
`• A qualsiasi valore intero`
`• A qualsiasi intero non negativo`
`• A qualsiasi intero positivo`

Un programma esegue il seguente codice:
```c
sem_init(&s, 0, 0);
for (i = 0; i<10; i++){
    sem_wait(&s);
    sem_post(&s);
}
```
Al termine del programma che valore assume il semaforo?
`• 0`
`• 10`
`• Il programma non termina perché entra in uno stato di attesa perpetuo`

Si immaginino due thread di un processo che operano su semaforo `s` inizializzato a $1$.
Il Thread 1 esegue:
```c
void * t1(void *arg){
    sem_post(&s);
    sem_post(&s);
}
```
Il Thread 2 esegue:
```c
void * t2(void *arg){
    sem_wait(&s);
    sem_wait(&s);
    sem_wait(&s);
    sem_post(&s);
}
```
Il programma:
`• Termina`
`• Entra in uno stato di attesa indefinito`

# U8
Quale tra questi non è una motivazione per l'uso di VM?
`• Maggiore sicurezza` `• Maggiore affidabilità` `• Maggiore velocità della memoria`

Una macchina fisica sta eseguendo una VM. Quanti kernel sono in esecuzione?
`• Nessuno` `• 1` `• 2` `• 3`

Una VM può usare direttamente la memoria fisica della macchina?
`• Mai` `• Sempre` `• Se la CPU lo permette`

Una macchina fisica sta eseguendo una container. Quanti kernel sono in esecuzione?
`• Nessuno` `• 1` `• 2` `• 3`

Cosa è un container?
`• Un FS isolato` `• Un namespace` `• Un gruppo di processi con privilegi limitati`

Un container può accedere al File System della macchina ospitante?
`• Sempre` `• Mai` `• Dipende da come è stato creato`

Quale tra questi non è un servizio offerto dai Cloud Provider?
`• Esecuzione di VM` `• Abbonamento a database remoto` `• Licenze di software da eseguire su PC`

Quali delle seguenti affermazioni é vera? Un layer di compatibilità:
`• é una VM` `• é un insieme di container`
`• permette di esguire programmi compilati su un'architettura diversa`
`• permette di esguire programmi compilati su un SO diverso`

Un server, per compiere pienamente le sue funzioni, usa:
`• Socket Passivi` `• Socket Attivi` `• Socket Passivi e Attivi` 

Un client, per compiere pienamente le sue funzioni, usa:
`• Socket Passivi` `• Socket Attivi` `• Socket Passivi e Attivi`

Un Socket Stream è:
`• Monodirezionale` `• Bidirezionale`

E' possibile usare anche le funzioni `read` e `write` per effettuare I/O su Socket Stream?
`• Si` `• No`

A cosa serve il comando `ifconfig`?
`• Configurare il comportamento di un socket`
`• Configurare le interfacce di rete`
`• Inviare pacchetti di configurazione`

A cosa serve un Package Manager?
`• A instradare i pacchetti di rete`
`• A installare i pacchetti software da repository pubblici`
`• A installare i programmi creati dall'utente`

Un pacchetto Deb contiene le tutte sue dipendenze:
`• Si` `• No`

Un pacchetto Deb contiene i file sorgenti:
`• Si` `• No`

Il Package Manager `apt` installa le dipendenze:
`• Automaticamente` `• Mai` `• Su richeista`

Un pacchetto Snap contiene le tutte sue dipendenze:
`• Si` `• No`
