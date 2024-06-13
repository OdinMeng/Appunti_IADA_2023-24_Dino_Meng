---
data: 2024-05-21
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Terminazione dei Processi
tipologia: appunti
stato: "1"
capitolo: Processi
---
- - -
*Terminazione dei processi: funzione exit, system call _exit, funzione abort.*
- - -
# Terminazione di un Processo
Ci sono diversi modi per terminare un processo:

## Funzione Exit
**1. Modo Standard** (valore di ritorno, funzione exit)
- Dal `main` avviene una `return`
    ```c
    return status;
    ```
- Viene chiamata la funzione `exit`
    ```c
    #include <stdlib.h>
    void exit(int status);
    ```
Tutti i buffer (di console e file) vengono *flushed*
L'argomento `status` è ritornato al SO

Per permettere queste operazioni di pulizia, vengono chiamate tutte le *funzioni di chiusura*:
1. Della *libreria standard*
2. *Definite dall'utente* tramite la funzione `int atexit(void (*function)(void));`

```c
void fun(void) { printf("Exiting\n"); }
  
int main()
{
    atexit(fun);
    exit(10);
}
```
Viene stampato `Exiting`

## System Call \_exit
**2. System Call `_exit`**
```c
#include <unistd.h>
void _exit(int status);
```
Termina immediatamente *senza controllare i buffer.*
Invocata nei processi *figli* che potrebbero leggere *buffer* in stato intermedio dei padri
Usata specialmente dopo `exec` fallite
- Il figlio *non dovrebbe eseguire nessuna istruzione* dopo la `exec`!
- I buffer possono contenere *dati del padre che non devono essere scritti dai figli*

**Nota:**
- La `_exit` è una System Call
- La `exit` è una funzione di libreria. Fa pulizia e poi invoca la `_exit`

## Funzione Abort
**3. Terminazione Anomala:**
  - Viene ricevuto un **segnale** non gestito (vedremo)
  - Il programma chiama la `abort`.
    ```c
    #include <stdlib.h>
    void abort(void);
    ```

## Riassunto
In qualunque modo termini il processo, il kernel compie le seguenti azioni:
- *Rimozione della memoria* utilizzata dal processo
- Chiusura dei *descrittori aperti*

Stato di un processo: raccolto con wait(), waitpid(). Diventa un *processo-zombie*.
