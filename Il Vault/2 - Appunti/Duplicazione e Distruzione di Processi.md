---
data: 2024-05-16
corso: "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Duplicazione e Distruzione di Processi
tipologia: appunti
stato: "1"
capitolo: Processi
---
- - -
*Duplicazione e distruzione di processi: comando fork, wait. Conseguenza: grafi di precedenze.*
- - -
# Manipolazione dei Processi
In un SO, la manipolazione dei processi è effettuata tramite System Call

**In Windows:**
```c
BOOL CreateProcessA(
  LPCSTR                lpApplicationName,
  LPSTR                 lpCommandLine,
  LPSECURITY_ATTRIBUTES lpProcessAttributes,
  LPSECURITY_ATTRIBUTES lpThreadAttributes,
  BOOL                  bInheritHandles,
  DWORD                 dwCreationFlags,
  LPVOID                lpEnvironment,
  LPCSTR                lpCurrentDirectory,
  LPSTARTUPINFOA        lpStartupInfo,
  LPPROCESS_INFORMATION lpProcessInformation
);
```
Molto complessa!

**In Linux**: esistono 6 System Call principali
- `fork`: crea un *processo duplicato*
- `exec`: carica un *codice eseguibile* (esegue un altro programma)   
- `wait`: aspetta la *terminazione di un figlio* (importante per la sincroniccazione!)
- `kill`: invia un segnale (uccide/termina processi)
- `signal`: cattura un segnale 
- `exit`: *termina* il processo corrente

**FIGURA.** (*Esempio di chiamate di System Call*)
![width:1000px](images/fork-exec-wait.png)

## Confronto tra Windows e Linux
**Windows vs Linux**:
Windows ha una System Call complessa (`CreateProcessA`)
- Molto verboso
- Molti parametri
- Molto tipizzata

Linux preferisce System Call *semplici* e sintetiche:
- `fork` clona un processo
- `exec` permette di eseguire un file eseguibile nel processo corrente

---
# Funzione `fork`
## Definizione di Fork
**Definizione.**
```c
#include <unistd.h>
pid_t fork (void);
```

*Crea un nuovo processo figlio*, *copiando* completamente l’*immagine di memoria* del processo padre (data, heap, stack)
- I due processi evolvono *indipendentemente*
- La memoria è *completamente indipendente* tra padre e figlio 
- Il codice viene generalmente *condiviso tra padre e figlio*
	- Codice copy-on-write (copiato quando viene modificato)

Nota: `pid_t` è un alias per un `int`, come `size_t`

**Note tecniche.**
- Tutti i *descrittori dei file aperti* nel processo padre sono *duplicati nel processo figlio*
- Sia il processo child che il processo parent continuano ad eseguire *l’istruzione successiva alla `fork`*
- Valore di ritorno:
	- Processo *figlio*: $0$
	- Processo *padre*: PID del processo figlio
	- Errore della fork:  PID negativo (solo padre). Di solito non accade
- Si può sfruttare il valore di ritorno per *differenziare* il processo padre e figlio.

**Osservazioni:**
Il valore di ritorno della `fork` è fondamentale!
Un programma scritto in termini di `fork` *non è immediatamente comprensibile*
- Operazione atomica, ma *effetti complessi*
- E' possibile creare *alberi di processi complessi*, con codice complesso


Esempio di utilizzo: *Scrivere un programma che si duplica, ed esegue rami di codici diversi.*
```c
#include <stdio.h>
#include <unistd.h>
int main()
{
     pid_t  pid;
     pid = fork();
     if (pid == 0){
        printf("Sono il figlio!\n");
     }
     else{
        printf("Sono il Padre!\n");
     }
     return 0;
}

```

```c
#include  <stdio.h>
#include  <sys/types.h>
#include <unistd.h>
void Figlio(void);               
void Padre(void);
int  main()
{
     pid_t  pid;
     pid = fork();
     if (pid == 0)
        Figlio(); 
     else
        Padre();
}
void  Figlio(void)
{
     int i=0;
     for(i=0;i<10;i++){	
		usleep(200);
		printf("\tSono il figlio. i= %d\n",i);                                     
     }
}
void Padre(void)
{
     int   i=1;
     for(i=0;i<10;i++){
		usleep(250);
		printf("Sono il padre. i= %d\n",i);
     }
}
```


---
## Esempi di Fork
**Fork Bomb:** un programma che chiama la `fork` in un ciclo infinito, blocca la macchina a causa dei troppi processi
```c
#include <unistd.h>
int main(void)
{
    while(1) 
        fork(); 
}
```

**Fork Bomb in Bash:**
```bash
:(){ :|:& };:
```
che equivale a:
```bash
myfork() {
    myfork | myfork &
}
myfork
```

## Albero di Processi
**Esercizio:** si determini l'albero di processi generato dal seguente codice e l'output generato (*importante per l'esame!*)

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

![200](images/fork-1.png)
**Output**:
2 4 3 4 1 4 1 4

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

![300](images/fork-2.png)
**Output**:
2 2 2 2 

## Osservazione sulla Bufferizzazione
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

**Output**:
```
A
B
B
C
C
C
C
```

**Esercizio:** si determini l'output generato dal seguente programma
**Nota:** non ci sono i `\n` nelle `printf`
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

**Output**:
```
A B C A B C A B C A B C
```
**Perchè?**
Dipende dalla duplicazione della memoria dopo la `fork` e dall'I/O bufferizzato della `printf`. Infatti, l'output è *bufferizzato*! Importante per l'esame

---
# Funzione `wait`
## Definizione di Wait
Vediamo la *seconda System Call* fondamentale per i processi.

```c
#include <sys/wait.h>
pid_t wait (int *status);
```

Attende la *prima terminazione* di *un* figlio. Entra in stato di *attesa*.
Argomento `status`:
- Puntatore ad un intero; 
- Se non è *NULL* specifica lo stato di uscita del processo figlio (*valore restituito dal figlio*) (di solito non ci interessa)

Valore di ritorno:
- Il *PID del figlio terminato*
- $0$ in caso di *errore* (esempio: non ci sono figli)

**Casistica:**
- Se il processo non ha figli: *Errore*
- Se il processo ha dei figli che sono *già terminati*: ritorna *istantaneamente*
- Se il processo ha dei figli *non ancora terminati*: *blocca il chiamante* finché non termina un figlio

**Note tecniche.**
La funzione `wait` *consuma* un figlio per volta.
Dopo che un figlio è stato *ritornato* al padre tramite una `wait`:
- Il SO rilascia *le risorse del processo figlio* (rappresentate sul PCB)
  - Il SO mantiene informazioni su processi terminati di cui non è ancora stata effettuata una `wait`
  - Traccia che il processo è esistito
	- Valore di ritorno e informazioni su esecuzione
- Non verrà ritornato in successive invocazioni

Da questo comportamento possiamo definire altre *classi di processi*.
**Processi Zombie:** processo terminato il cui padre non ha ancora effettuato una `wait`
- Dopo che viene effettuata, il *processo è morto definitivamente* e non ne rimane traccia
- In questo stato, il PCB è ancora presente in memoria

**Processi Orfani:** processi in cui *padre è morto*.
- Se il padre muore, i figli *continuano l'esecuzione*
- Diventano figli del processo *init* ($PID=1$)
- *Periodicamente*, *init* esegue delle `wait` per consumare gli *orfani morti*

## System Call Alternativo
Alternativamente possiamo usare un altro *system call*, più configurabile.

```c
#include <sys/wait.h>
pid_t waitpid(pid_t pid, int *status, int options);
```

Attende la *prima terminazione* di:
- Un qualsiasi figlio se `pid == -1` (come `wait` classica)
- Un figlio con PID `pid` se `pid>0`
- Un qualsiasi figlio il cui *group ID* è uguale a quello del chiamante se `pid == 0`
- Il figlio il cui *group ID* è uguale a `abs(pid)` se `pid < -1`
	- Esempio: -3 equivale a GID 3.
	- **group ID**: intero positivo associato a un processo. Serve per definire gruppi di processi creati dall'utente. Utile per mantenere ordine.

**Altri argomenti di `waitpid`**:
- `status` come nella `wait`, un *"ritorno al valore"* secondario
- `options`: controlla *se la funzione è bloccante*. E' una *bitmask*.
	- $0$ *bloccante*
	- `WNOHANG`: *non blocca* in caso di assenza di figlio già morto. Si usa per *"controllare"* se un figlio sia morto o meno: utile!
	- Altri flag per intercettare solo figli morti in *condizioni particolari*

# Grafi di Precedenze
Introduciamo una conseguenza di *fork, wait* molto importante: i grafi i precedenze.

## Esercizio 1
**Esercizio:** si scriva un programma che implementa il seguente grafo di precedenze con `fork` e `wait`.

**Nota:**
Ogni biforcazione si implementa tramite una `fork` e ogni ricongiungimento tramite una `wait`
Per risolvere questi tipi di esercizi, è importante *prima fare un diagramma* che pianifica il codice, poi creare il programma effettivo!

**Importante:** questi esercizi permettono di scrivere codice che parallelizza diverse operazioni
Fondamentale per programmazione parallela

![width:250px bg right:22% ](images/fork-wait-simple.png)

**SOLUZIONE.**
```c
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main() {
    pid_t pid;
    printf ("T1\n");
    pid = fork();
    if (pid == 0) {
        printf ("T3\n");
        return 0;
    } else {
        printf ("T2\n");
        wait ((int *) 0);
    }
    printf ("T4\n");
    return 0;
}
```

## Esercizio 2
**Esercizio:** si scriva un programma che implementa il seguente grafo di precedenze con `fork` e `wait`.

**Nota:** questo è il grafo per eseguire in maniera efficiente 3 richieste HTTP alle URL.
- `http://a.com/`
- `http://b.com/1`
- `http://b.com/2`

Prima di ogni richiesta, è necessario effettuare la risoluzione DNS. Due URL hanno lo stesso dominio.

**Nota**: nei casi reali, il programmatore deve risolvere il problema efficientemente. Deve costruire da solo il grafo di precedenze.

![width:400px bg right:40% ](images/fork-wait-simple-2.png)


**Soluzione.**
```c
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main() {
    pid_t pid;
    printf ("T1 - Start\n");
    pid = fork();
    if (pid == 0) {
        printf ("T3 - DNS b.com\n");
        pid_t pid2;
        pid2=fork();
        if (pid2==0){
            printf ("T6 - HTTP http://b.com/1\n");
            return 0;
        }
        else{
            printf ("T5 - HTTP http://b.com/2\n");
            wait ((int *) 0);  /* Attende T6 */
            return 0;
        }
    } else {
        printf ("T2 - DNS a.com\n");
        printf ("T4 - HTTP http://a.com/\n");
        wait ((int *) 0); /* Attende T3 - T5 */
    }
    printf ("T7 - Utilizzo i risultati\n");
    return 0;
}
```

**Nota:** T5 aspetta T6 che è suo figlio. T7 non può *aspettare* T6, in quanto non è suo figlio
La `wait` *aspetta* solo sui figli, *NON* sui nipoti!

## Esercizio 3
**Esercizio:** si scriva un programma che implementa il seguente grafo di precedenze con `fork` e `wait`.
![width:250px bg right:40% ](images/fork-wait-imp.png)

Questo grafo è *molto difficile* da realizzare mediante sole `fork` e `wait`

T4 non può *attendere* T1. Non è suo figlio! Come faccio a gestire la freccia diagonale?
In generale:
- Si possono *attendere* solo i figli
- Ogni figlio può essere atteso una volta sola

**PROBLEMA.**
```c
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main() {
    pid_t pid;
    printf ("T0\n");
    pid = fork();
    if (pid == 0) {
        printf ("T2\n");
        wait ( ??? ) /*  <--------- IMPOSSIBILE! */
        printf ("T4\n");
    } else {
        printf ("T1 -\n");
        printf ("T3 -\n");
        wait ((int *) 0); /* Attende T4 */
    }
    printf ("T7 - Utilizzo i risultati\n");
    return 0;
}
```

Come si può implementare questo grafo? (Da fare per esercizio!)

## Grafi Impossibili
Grafi impossibili (matematicamente dimostrabili con la teoria dei grafi):
![width:750px ](images/graph-imp.png)
Vedremo che in realtà sono molto facilmente implementabili con i *semafori*.