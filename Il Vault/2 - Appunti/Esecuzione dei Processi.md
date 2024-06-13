---
data: 2024-05-21
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Esecuzione dei Processi
tipologia: appunti
stato: "1"
capitolo: Processi
---
- - -
*Funzioni exec e system. Rami di exec. Implementazione di exec.*
- - -
# Funzione `exec`
## Differenza tra Fork e Exec
**FORK.**
La `fork` permette di *duplicare un processo*
- Usata quando il figlio deve eseguire lo stesso programma del padre
- In programmi paralleli: web server, database

**EXEC.**
La `exec` permette di *cambiare la natura di un processo* corrente
- Caricando ed eseguendo un programma diverso
- Usata ogniqualvolta bisogna avviare un nuovo programma

Quando un processo chiama una `exec`:
- Il processo viene rimpiazzato *completamente* dal codice contenuto nel file specificato (text, data, heap, stack vengono *sostituiti*)
- Il nuovo programma inizia a partire *dalla sua funzione* `main`, come se fosse un nuovo processo
- Il PID non cambia

**Conseguenza.**
Cosa *eredita* il processo dopo una `exec`:
- *Variabili d'ambiente*: le variabili definite nel terminale
	- Accessibili tramite la `char *getenv(const char *name)`
- PID e PPID (PID del padre)
- Privilegi, current working directory, root e home directory

Cosa *non viene ereditato*:
- File aperti se hanno il flag `close-on-exec`
- Altrimenti lasciati aperti

## Funzioni Exec
Esistono 7 versioni della `exec`.
Hanno la *stessa funzione*, varia *il modo in cui ricevono gli argomenti*. Sono le seguenti

```c
#include <unistd.h>

int execl(const char *pathname, const char *arg, ...);
int execlp(const char *file, const char *arg, ...);
int execle(const char *pathname, const char *arg, ..., char *const envp[]);
int execv(const char *pathname, char *const argv[]);
int execvp(const char *file, char *const argv[]);
int execve(char *pathname, char *argv[], char* envp[]);
int execvpe(const char *file, char *const argv[], char *const envp[]);
```

## Path
Le funzioni con `p` ricevono il *nome dell'eseguibile* e non il path.
- Il SO rintraccia l'eseguibile nelle cartelle dei programmi installati nel sistema
- Che sono definite nella variabile d'ambiente `PATH`

**Esempio**:  si equivalgono
```c
execlp("cp", ...);
execl("/usr/bin/cp", ...);
```
Perchè, sul mio PC:
```bash
$ echo $PATH
/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin
```

## Passaggio di Argomenti
- Le funzioni con `l` (*"list"*) specificano gli *argomenti* del *nuovo programma* tramite una lista di argomenti. Simile a `printf`.
	- **Esempio**: `execlp("cp", "cp", "file1", "file2");`  
	- *Nota*: Non dimenticare `argv[0]`!

- Le funzioni con `v` specificano gli *argomenti* del nuovo programma tramite un unico vettore di puntatori a `char`. Equivalente a `argv` nel `main`
  - Il primo argomento deve contenere il nome del file associato all'eseguibile che viene caricato (`argv[0]`)
  - L'array di puntatori deve essere terminato da un puntatore NULL
    - Mancando `argc`, questo serve a comunicare la lunghezza del vettore

Esempio:
```c
// Semplice
execlp("cp", "cp", "file1", "file2");

// Generico
const char *args[4];
args[0] = "cp";
args[1] = "file1";
args[2] = "file2";
args[3] = NULL;
execvp("cp", args);
```
*Nota:* Non c'è un modo per specificare la lunghezza nel vettore, per convenzione si pone l'ultimo argomento come *NULL*.

## Variabili d'Ambiente
Le funzioni con `e` ricevono un vettore di variabili d'ambiente. Quindi esse *non* vengono ereditate dal processo esistente.
- Le variabili d'ambiente sono specificate nell'ultimo argomento tramite un vettore di puntatori a `char` (come con `execv-`)
	- Terminato da puntatore `NULL`
	- Ogni elemento è una stringa nella forma `nome=valore`

```c
char *const args[] = {"ls", "/tmp", NULL};
execv("/usr/bin/ls", args);

char *const envs[] = {"a=1", "b=2", NULL};
execve("/usr/bin/ls", args, envs);
```

## Funzione `execve`
**Osservazione:**
- La funzione `execve` è una System Call.
- Le altre funzioni sono di libreria, e invocano la `execve` dopo aver correttamente gestito e aggiustato i parametri

## Esercizi su Exec
1. **Esercizio:** si scriva una *semplice shell* usando le funzioni `fork`, `wait` e `exec`. Importante per l'esame!

**Soluzione.**
```c
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#define MAXLINE 128
int main() {
	char	buf[MAXLINE];	
	pid_t	pid;
	int		status;
	printf("%% ");	/* prompt */
	while (fgets(buf, MAXLINE, stdin) != NULL) {
		if (buf[strlen(buf) - 1] == '\n')
		    buf[strlen(buf) - 1] = 0; 
		if ((pid = fork()) < 0) {
			printf("errore di fork "); exit(1);
		} else if (pid == 0) {		/*figlio */
			execlp(buf, buf, NULL);
			printf("non posso eseguire: %s\n", buf);                                  
			exit(127);
		} else
		if ((pid = waitpid(pid, &status, 0)) < 0) /* padre */
			{printf("errore di waitpid"); exit(1);}
		printf("%% ");
	}
	exit(0);
}
```

**Nota:** per gestire gli *argomenti* dei comandi invocati, bisognerebbe manipolare le stringhe

2. **Esercizio:** si consideri il seguente programma.
```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main (int argc, char ** argv) {
    char str[10];
    int n;
    n = atoi(argv[1]) - 1;
    printf ("%d\n", n);
    if (n>0) {
        sprintf (str, "%d", n);
        execl (argv[0], argv[0], str, NULL);
    }
    printf ("End!\n");
    return 1;
}
```

Cosa viene stampato  eseguendo `./prog 5` ?

**Soluzione.**
```
4
3
2
1
0
End!
```

---
# Funzione `system` 
## Definizione di System
E' una funzione di libreria che invoca un comando *Bash* e ne attende la conclusione
- Utile per usare programmi esterni in un programma
- Internamente usa: `fork`, `exec` e `wait`

```c
#include <stdlib.h>

int system(const char *command);
```

Equivale a una `fork` il cui figlio esegue:
```c
execl("/bin/sh", "sh", "-c", command, (char *) NULL);
```

**Valore di ritorno:** il valore di ritorno *del comando eseguito*

## Implementazione di System
**Implementazione semplice**: (*Importante!*)

```c
int system(const char *cmd)
{
    int stat;
    pid_t pid;
    if (cmd == NULL)
        return(1);
    if ((pid = fork()) == 0) { /* Son */
        execl("/bin/sh", "sh", "-c", cmd, (char *)0);                              
        _exit(127);
    }
    if (pid == -1) {
        stat = -1; /* Error */
    } else { /* Father */
        while (waitpid(pid, &stat, 0) == -1) {
            if (errno != EINTR){
                stat = -1;
                break;
            }
        }
    }
    return(stat);
}
```

## Esercizi su System
**Esercizio:** Si scriva un programma che fa il listing dettagliato di una cartella.
- La cartella è passata come argomento
	- Se non ci sono argomenti, lista la directory corrente
- Usando `ls -lh cartella`

**Soluzione.**
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char * argv[1]) {
   char command[50] = "ls -lh ";

   if (argc == 2)
     strcat(command, argv[1]);
     
   system(command);

   return(0);
} 
```
