---
data: 2024-05-21
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Esercizi sui Processi
tipologia: appunti
stato: "0"
capitolo: Processi
---
- - -
*Esercizi sui processi.*
- - -
# Sezione A.
Un processo è
`• Una componente del sistema operativo`
`• Il codice eseguibile di un programma`
`• Un programma in esecuzione` 
*Risposta*: Un programma in esecuzione

I processi sono identificati da:
`• Un nome` `• Un ID numerico` `• Non hanno identificativi`
*Risposta*: Un ID numerico

I processi sono in relazione tra loro in una struttura:
`• Ciclica` `• Ad albero`
*Risposta*: Ad albero

Il Context Switching è:
`• La momentanea sospensione di un processo`
`• La terminazione di un processo`
*Risposta*: La momentanea sospensione di un processo

Nello scheduler di Linux, processi:
`• Hanno tutti la stessa priorità di scheduling`
`• Hanno una priorità assegnabile dall'utente`
`• Hanno una priorità calcolata automaticamente dal SO`
*Risposta*: Hanno una priorità assegnabile dall'utente

# Sezione B.
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
**Risposta:** 4 ($2^2$)

Un processo il cui processo padre muore:
`• Viene terminato dal SO`
`• Riceve un segnale dal SO`
`• Viene ereditato (diventa figlio) dal processo init` 
**Risposta**: Viene ereditato (diventa figlio) dal processo init

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
**Risposta:**
```
A
B
B
```

La System Call `execve` crea un nuovo processo?
`• Sempre` `• Mai` `• Dipende da come viene invocata` 
**Risposta:** Mai (cambia la natura del processo)

La funzione `system` crea un nuovo processo?
`• Sempre` `• Mai` `• Dipende da come viene invocata` 
**Risposta:** Sempre (è stata implementate mediante fork)

# Sezione C.
Quale System Call si usa per generare un segnale?
`• signal` `• kill` `• write`  `• send` 
**Risposta:** kill

Una funzione handler riceve degli argomenti?
`• No` `• Riceve una stringa` `• Riceve un intero`
**Risposta:** Riceve un intero

Quale è il comportamento di default di un processo quando riceve un segnale?
`• Il segnale viene ignorato` `• Il processo termina` `• Dipende dal segnale` 
**Risposta:** Dipende dal segnale

Un signal handler può modificare le variabili globali del processo?
`• Si` `• No` 
**Risposta:** Tecnicamente sì, ma fortemente sconsigliato (sì)

Quale segnale viene inviato dal SO quando si preme `CTRL+C` sulla tastiera?
`• SIGKILL` `• SIGINT` `• SIGHUB` `• SIGSTP` 
**Risposta:** SIGINT

Le *pipe* sono
`• Monodirezionali` `• Bidirezionali` `• Dipende dai parametri di creazione` 
**Risposta.** Monodirezionali

Le *pipe* sono identificate da un nome?
`• Si` `• No`
**Risposta.** No

Le *FIFO* sono identificate da?
`• Un ID numerico` `• Una stringa` `• Un Path`
**Risposta.** Un Path

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
**Risposta.** Legge un intero da myfifo

Una zona di memoria condivisa creata tramite `shmget` e `shmat` può essere condivisa anche tra processi senza legami di parentela?
`• Si` `• No` 
**Risposta.** Non posso rispondere (parte saltata)

Le funzioni `shmat` e `mmap` hanno valore di ritorno:
`• char *` `• int` `• int*` `• void*` `• void`
**Risposta.** void* (puntatore a void)

Si consideri il seguente spezzone di codice:
```c
int fd = open("/tmp/mymem", O_RDWR|O_CREATE);
ftruncate(fd, 64);
void* shmem = mmap(NULL, size, PROT_READ|PROT_WRITE, MAP_SHARED, fd, 0);
sprintf( (char*)shmem, "Ciao Mondo!");
```
Dopo che il programma è terminato, il contenuto della zona di memoria presiste?
`• Si, in memoria` `• Si, nel file /tmp/mymem` `• No` 
**Risposta.** Si, nel file /tmp/mymem
