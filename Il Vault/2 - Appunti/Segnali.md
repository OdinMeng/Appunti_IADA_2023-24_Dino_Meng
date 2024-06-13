---
data: 2024-05-21
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Segnali
tipologia: appunti
stato: "1"
capitolo: Processi
---
- - -
*Tutto sui segnali in Linux*
- - -
# Concetto di segnale
## Richiamo agli Interrupt
**RICHIAMO.** (*Interrupt*)
In quasi tutti i sistemi ad elaboratore, esistono gli *interrupt*:
Un *interrupt* informa la CPU che deve interrompere il compito corrente per eseguire un'azione impellente ([[Comunicazione Architettura e I'Esterno#^84b9a9|1]]).
Un interrupt viene generato da:
- Un *dispositivo hardware* che vuole notificare al sistema un evento (di solito una linea elettrica, circa 5V)
- Particolari *istruzioni nel codice* (e.g., istruzione `INT`)
	- Quando un processo chiama una System Call genera un interrupt software
	- Sono delle *”finte interrupt”*
## Definizione di Segnale
Un *segnale* permette la *gestione di eventi asincroni* che interrompono il normale funzionamento di un *processo*
- E' un interrupt software
	- In particolare mirate sui *processi*
- Notifica un evento a un processo specifico

Possono essere *generati* da
- *Kernel* per comunicare eventi eccezionali:
	- Condizioni di errore
	- Azioni dell'utente (e.g.,  `CTRL+C` su tastiera)
- Un *altro processo* (se ne ha i permessi):
	- Permettono una primitiva comunicazione tra processi
	- Usando la system call `kill`

## Notizie Storiche
Esistono dalle *prime versioni di Unix* (siamo negli anni ‘90; [[Storia e Definizione di Linux#^3b8c03|1]])
- Formalizzati in Unix 4
- Rappresentava un *primo meccanismo di Inter-process communication*

In principio erano inaffidabile e gestiti in modo *best-effort*
- *Potevano andare perduti*
- La gestione era *complicata*
- *Poca configurazione* possibile

I segnali esistono anche in *Windows*, sebbene abbiano un funzionamento leggermente diverso (in realtà molto!). Tuttavia ci concentreremo sui *segnali in Linux*.

---
# Segnali in Linux
## Molteplicità dei Segnali
Esistono *diversi tipi di segnali* in Linux
- Dipende dalle versioni di Linux
- Comando `kill -l` lista i segnali
	- 64 in Ubuntu 20
	- Circa 10 saranno importanti per noi

Ogni segnale ha un *identificatore mnemonico e numerico*
- Identificatori di segnali iniziano con i tre caratteri SIG (che sta per *”SIGnal”*)
	- Es. `SIGINT` è il segnale di interruzione e ha numero $2$  
- I nomi simbolici corrispondono ad un intero positivo (in C queste costanti vengono definite su `signal.h` )

Come detto prima, ogni segnale viene generato da un *evento specifico nel SO*, o *manualmente* da un processo.
Un segnale può avere i seguenti effetti su un processo:

## Effetti dei Segnali
**Importanti**
1. Viene *ignorato*
2. *Termina il processo*
3. Interrompe momentaneamente il processo. Esegue una *funzione handler*. Dopodiché il processo riprende

**Secondari**
4. Crea un *core dump*: un *file* che contiene lo stato del programma per poter essere debuggato
5. *Stoppa* il processo
6. *Fa ripartire* il processo

Adesso vediamo *in specifico* quali segnali ha i comportamenti elencati sopra

**Segnali ignorati di default:**
- `SIGCHLD`: inviato al padre quando un figlio termina

**Segnali che di default terminano un processo:**
Sono tanti!
- `SIGINT`: viene inviato al processo in esecuzione quando si preme `CTRL+C`; vedremo che si può modificare il comportamento 
- `SIGABRT`: inviato da system call `abort()` (ha un’utilità abbastanza discutibile)
- `SIGFPE`: inviato da eccezione aritmetica (ad esempio l’operazione $\frac{1}{0}$)  
- `SIGHUP`: Inviato ad un processo se il terminale *viene disconnesso* (sta per *”Signal HangUP”*)
- `SIGKILL`: Maniera sicura per uccidere un processo.
	**Nota**: Non si può creare un handler per `SIGKILL`! Ovvero il suo comportamento non può essere modificato!
- `SIGSEGV`: Accesso di memoria non valido
- `SIGTERM`: Segnale di *terminazione* normalmente usato. Generato dal comando `kill` di default
- `SIGUSR1` e `SIGUSR2`: generati solo da processi utente, mai dal SO. Servono per comunicazione tra processi
	- Di conseguenza sono da *modificare*!

---
## Lista completa degli segnali su Linux 
Lista più completa.
Il comportamento di default può essere modificato:
- Per *ignorare* un segnale
- Per *gestirlo* tramite un *handler*
- *NON* per indurre Terminazione o Core Dump
- Tranne `SIGKILL` e `SIGSTOP` (non vanno mai modificati!) 

![400](images/signal-list.png)

---
## Signal Handler
Un processo può definire un *signal handler*.
- Una *funzione* che viene eseguita quando il processo riceve il segnale
- Se non lo fa, c'è il *comportamento di default* 

L’idea si esprime con la seguente frase: *"Se e quando ricevi un certo segnale, esegui questa funzione"*
  
## Stato di un Segnale
Fasi di vita di un segnale:
1. **Generazione**: da parte del *kernel o di un processo*
2. **Consegna**: nel più breve tempo possibile consegna il segnale al processo.
    - Finché un segnale non è consegnato è *pending*
    - Questa è una fase importante!
    - Vengono gestiti mediante una *bitmask* (lo terremo in mente per l’osservazione seguente)
1. **Gestione**:
    - Il kernel avvia la *funzione handler* del processo nel caso ce ne sia una
    - Altrimenti compie l'*azione di default* per quel segnale (termina o ignora)

**Osservazione:**
I segnali non vengono accodati.
I segnali pendenti per un processo sono gestite da una *mask*.
- Se lo *stesso segnale* è generato *più volte* prime che sia consegnato, esso lo sarà *una sola volta*

# Manipolazione dei Segnali
Adesso vediamo una serie di *system call* su C per manipolare le System Call. Si userà la libreria `<signal.h>`.

## System Call `sigaction`

```c
#include <signal.h>
int sigaction(int signum, const struct sigaction *act,
              struct sigaction *oldact);
```

*Modifica il comportamento* del processo corrente a un segnale particolare.

**Argomenti**:
- `signum`: *segnale da trattare*
- `act`: *puntatore a struttura* che definisce trattamento
- `oldact`: *puntatore a comportamento precedente*. Può servire per ristabilire il comportamento precedente. Ci permette di poter *sapere il vecchio comportamento*.

**Ritorna** -1 se c’è stato errore

Adesso vediamo la struct `sigaciton`.

```c
struct sigaction {
    void   (* sa_handler )( int );
    sigset_t  sa_mask ;
    int       sa_flags ;
    void   (* sa_restorer )( void );
};
```
- `sa_handler` specifica il comportamento
	- Se *funzione*, specifica un *handler* (un puntatore a funzione che ritorna nulla)
	- Se `SIG_IGN` ignora
	- Se `SIG_DFL` ripristina comportamento di default
- `sa_mask`: *segnali da bloccare* mentre l'handler è in esecuzione (gestita con *bitmask*)
	- Si inizializza con la funzione `int sigemptyset(sigset_t *set);`
	- Nel corso non faremo altre operazioni su questo campo
- `sa_flags`: flag (non vediamo). Settiamo sempre a $0$
- `sa_restorer`: per uso interno

**Esempio:** si crei una funzione per ignorare un segnale definito dal chiamante
```c
int ignoreSignal ( int sig )
{
    struct sigaction sa ;
    sa.sa_handler = SIG_IGN ;
    sa.sa_flags = 0;
    sigemptyset (&sa.sa_mask );
    return sigaction ( sig , &sa , NULL );
}
```

**Funzione Handler.**
La funzione handler deve prendere un argomento `int`
- Quando *invocata dal SO*, contiene il numero del segnale
- Deve ritornare `void`

```c
void myHandler ( int sig )
{
    /* Actions to be performed when signal
    is delivered */
}
```

*Nota:* L'handler è una funzione del programma.
- Che viene invocata *automaticamente* dal SO alla ricezione del segnale
- E *non dal programmatore*. Potrebbe, ma non ha senso

---
## Funzionamento Interno di `sigaction`
Viene invocata *automaticamente dal kernel* alla consegna del segnale
Il programma si *interrompe*, esegue l'handler
Infine, *continua l'esecuzione* dal punto di interruzione

![width:600px ](images/signals.png)

---
## Esercizio con `sigaction`
**Esempio:** si crei un programma che gestisce i segnali `SIGINT`, `SIGHUP` e `SIGTERM`


```c
#include <signal.h>
#include <stdio.h>
void func(int signum){
    printf("ricevo %d\n", signum);
}

int main (){
    struct sigaction new_action, old_action;

    new_action.sa_handler = func;
    sigemptyset ( &new_action.sa_mask); /* Si noti l'uso di sigemptyset */
    new_action.sa_flags = 0;

    sigaction (SIGINT, &new_action, NULL);
    sigaction (SIGHUP, &new_action, NULL);
    sigaction (SIGTERM, &new_action, NULL);

    while(1) ;
    return 0;
}
```
Per terminare il programma, bisogna mandargli un segnale `SIGKILL`. Lo si fa digitando `pkill -KILL <nome prog>`

---
## System Call `signal`
Esiste la System Call `signal`, più a basso livello.

```c
#include <signal.h>
typedef void (*sighandler_t)(int);
sighandler_t signal(int signum, sighandler_t handler);
```

Argomenti:
- `sig`: quale segnale gestire
- `handler` specifica il comportamento. E' *puntatore a funzione*.

*Nota:* consigliato usare `sigaction`


---
## System Call `kill`
Manda un segnale *ad un processo* oppure a un *gruppo di processi*

```c
#include <sys/types.h>
#include <signal.h>

int kill(pid_t pid, int sig);
```

Argomenti:
- `sig`: segnale da mandare
- `pid`:
	- se `> 0`: spedito al processo identificato da `pid`
	- se `0`: spedito a tutti i processi appartenenti allo *stesso gruppo* del processo che invoca `kill()`
	  - se `<0`: spedito al gruppo di processi identificati da `–pid` (ovvero $|\text{pid}|$)
	  - se `-1`: a *tutti i processi*: da *non usare*!

*Privilegi:* un processo può mandare un segnale solo a processi dello *stesso utente*. Tranne *root*, che può mandare a tutti.

## Esercizio con `kill`
**Esercizio:** si crei un programma che genera un processo figlio. Il padre manda al figlio un segnale `SIGUSR1` ogni secondo. Il figlio stampa l'avvenuta ricezione.

```c
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void handler(int signum){
  printf("Ricevuto\n");
}

int main (){
  pid_t pid;
  struct sigaction action;
  
  pid = fork();
  if (pid!=0){ /* Father */
    while(1){
        sleep(1);
        kill (pid, SIGUSR1);
        /* pause(); Would be equivalent */
    }
  } else{ /* Child */
    action.sa_handler = handler;
    sigemptyset (&action.sa_mask);
    action.sa_flags = 0;
    sigaction (SIGUSR1, &action, NULL);                                                      
    while (1);
  }
  return 0;
}
```

---
## System Call `raise`

```c
#include <signal.h>
int raise (int sig);
```

Permette a un processo di *inviare un segnale a se stesso*.
Di fatto:
```c
raise (sig);
```
equivale a:
```c
kill (getpid(), sig);
```

---
## System Call `pause`

```c
#include <unistd.h>
int pause (void);
```

*Sospende il processo fino all’arrivo di un segnale*
Serve a implementare l’*attesa passiva* di un segnale
Ritorna dopo che il segnale è stato catturato ed il gestore è stato eseguito, *restituisce sempre* (-1)

---
## System Call `alarm`

```c
#include <unistd.h>
unsigned int alarm (unsigned int seconds);
```

Implementa un *timeout*
Il SO manda un segnale `SIGALRM` al processo dopo `seconds` secondi
- Se non vi era già un timeout settato, restituisce subito $0$
- Altrimenti, restituisce *i secondi che mancano* allo scadere dell’ultimo allarme settato. *Cancella il vecchio timeout* e inserisce il nuovo
- Se `seconds` è $0$, si *disattiva* il timeout

**Osservazioni:**
Il timeout è gestito dal kernel.
Il tempo effettivo può essere leggermente maggiore a causa del tempo di reazione del kernel
- Quindi *non* è affidabile fino a millisecondi $ms$ o $\mu s$!
- Ovvero non vanno implementati in sistemi dove i millisecondi contano

---
## Esercizio con `alarm` e `pause`
**Esempio:** funzione `sleep` implementata con `alarm` e `pause`
```c
static void myAlarm (int signo) {
    return;
}
void mySleep (unsigned int nsecs) {
    signal(SIGALRM, myAlarm)
    alarm (nsecs);
    pause ();
}
```


---
# Considerazioni sulle System Call per Segnali
Un handler è un flusso di *esecuzione concorrente*
- Può iniziare in *qualsiasi istante*
- Mentre il flusso principale sta compiendo qualsiasi azione
- Operazione molo delicata!

**Importante:**
Per questo motivo l'handler *non deve modificare variabili* globali che sono usate anche dal flusso principale
- Potrebbe portare in stato inconsistente
- Potrebbe portare al *problema dell’incremento perso*

## Problema dell’incremento perso

^45417b

- Immaginiamo che il programma venga interrotto tra la riga $2$ e la riga $3$ del seguente codice:
  ```c
  1 local = global;  /* Supponiamo global = 1 */
  2 local++;         /* Local = 2 */
  --- Interruzione ---
  3 global = local;
  ```
- L'handler esegue l'operazione:
    ```c
    global++;        /* Global = 2 */
    ```
- La variabile `global` viene *incrementata*
- Il programma riprende dall'istruzione $3$.
  ```c
    ...
  --- Interruzione ---
  3 global = local;  /* Global = 2 */
  ```
- L'incremento dell'handler si è perso. `global`$=2$ anzichè $3$. Questo è un grande problema!

Problema che vedremo approfonditamente per i programmi *multi-thread*

## Conseguenze
Da questo definiamo le nozioni di *funzione rientrante* e *funzione non rientrante*.

**Definizioni:**
1. **Funzione rientrante:** può essere usata con sicurezza in più flussi
2. **Funzione non rientrante:** *NON* può essere usata con sicurezza in più flussi (può portare a stati inconsistenti)

In generale, negli handler, bisogna:
- Chiamare *solo funzioni rientranti*
- Evitare di *manipolare variabili globali* che sono usate dal flusso principale.

**Classificazione.** Classifichiamo alcune funzioni già note
- Molte funzioni di libreria C *NON* sono rientranti
	- `fprintf`, `fscanf`: gestione del *buffer* problematica.
	- Non vanno chiamate dentro un handler!
- Alcune funzioni *sono rientranti* e possono essere interrotte senza problemi: `sleep`, etc. Vedi `man`
- Le *System Call* sono rientranti:
	  - Se un programma riceve un segnale mentre è eseguita una sua system call (e.g., `read`):
	  - Le System Call *bloccanti* terminano e non riprendono (e.g., `read`, `write`, `wait`)
	  - Le System Call *non bloccanti* riprendono (e.g., `fork`, `getpid`)

# Segnali nella shell
Vediamo alcuni comandi per *operare* con i segnali.

1. *Kill*
```bash
kill pid
```
Invia un segnale al processo `PID`.
Di default manda `SIGTERM`.
Possibile specificare con opzioni `-KILL` `-INT`

```bash
pkill nome
killall nome
```
Stesso comportamento, ma manda il segnale a tutti i processi del programma `nome`

---
## Esercizio Misto
**Esercizio:** si scriva un programma in C che memorizza quanti `SIGTERM` ha ricevuto. Alla pressione di `CTRL+C` stampa tale numero e termina. Si nomini il programma `sample`.

Si scriva anche uno script bash che manda 10 segnali `SIGTERM` al processo.

**Programma Bash:**
```bash
for i in $( seq 5) ; do
    pkill sample
done
```

**Programma C:**
```c
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int c;

void handler(int signum){
  if (signum==SIGTERM)
    c+=1;
  else if (signum==SIGINT){
    printf("Ricevuti %d SIGTERM\n", c);
    exit (0);
  }
}

int main (){
    struct sigaction action;
    c=0;
    action.sa_handler = handler;
    sigemptyset (&action.sa_mask);
    action.sa_flags = 0;
    sigaction (SIGTERM, &action, NULL);
    sigaction (SIGINT, &action, NULL);

    while (1);
}
```

Notare l’uso dell’ handler! E’ in grado di ricevere e maneggiare segnali diversi! (Volendo potevo pure creare due handler diversi)

Quando si preme `CTRL+C`, viene mandato un `SIGINT` al programma, che stampa `c` e termina

**Extra:** si faccia uno script bash che automatizza tutta la sequenza: avvio del programma in C, consegna segnali e chiusura.

```bash
./sample &
PID=$!
for i in $( seq 5) ; do
    kill $PID
done
kill -INT $PID
```


---
## Comandi per Mandare Segnali
Abbiamo dei *comandi* per mandare *segnali a processi*

1. Se `CTRL+C`, viene inviato `SIGINT`
- Programma termina se non c'è un handler

2. Se `CTRL+Z` viene inviato `SIGTSTP`
- Di default l'applicazione viene sospesa
- E messa in background dalla shell
- A questo punto possiamo fare due cose:
	- `fg` fa riprendere l'esecuzione in foreground
	- `bg` far riprendere l'esecuzione in background

**Molto utile** se ho lanciato un comando lungo e voglio usare la shell mentre esegue  
```bash
$ ./longjob
^Z
[1]+  Stopped                ./longjob
$ bg
[1]+ ./longjob &
$ terminale libero
```

3. Quando eseguo un programma in background (`./job &`) e chiudo il terminale, viene mandato il segnale di Hang Up `SIGHUP`
- Di default il programma viene terminato
- Si può modificare comportamento

Oppure uso il comando `nohup` che esegue un comando immune a `SIGHUP

``` bashsh
nohup ./job
```

Utile se lancio job su terminale remoto e devo andare a casa!

**Alternativa più pulita**: comando `screen` che genera *terminale virtuale*

## Handler in Bash
Handler di segnali in script bash: si usa il comando `trap`. Ascoltate la trap?

```bash
trap command SIGNAL
```
Esegue il comando o la funzione `command` se lo script riceve il segnale `SIGNAL`
Esiste lo pseudo-segnale aggiuntivo `EXIT`, chiamato quando lo script termina

```bash
tempfile=/tmp/tmpdata
trap "rm -f $tempfile" EXIT
```

## Esercizio Bash
**Esercizio:** si crei un programma bash che conta quanti SIGUSR2 riceve, e li stampa quando viene premuto `CTRL+C` e lo si nomini `sample.sh`

```bash
#!/bin/bash

count=0
function husr(){
    let count++
}
function hint(){
    echo "Ricevuti $count SIGUSR2"
    exit 0
}

trap husr SIGUSR2
trap hint SIGINT

while true; do
    sleep 1
done
```


Si inviino i segnali col comando: `bash pkill -USR2 sample.sh`
*Nota:* dichiarazione di funzione in Bash
