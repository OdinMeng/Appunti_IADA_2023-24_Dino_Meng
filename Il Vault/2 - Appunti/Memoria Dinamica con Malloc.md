---
data: 2024-05-21
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Memoria Dinamica con Malloc
tipologia: appunti
stato: "1"
capitolo: Memoria
---
- - -
*Implementazioni della memoria dinamica con la malloc.*
- - -
# La memoria dinamica
In C è possibile utilizzare la *memoria dinamica* per creare *strutture dati* la cui dimensione non è nota in fase di compilazione

**Uso tipico**: creazione di vettori di lunghezza arbitraria e decisa a *run time*. Esempio: lista linkata

**Funzionamento**: si utilizzano indirizzi virtuali nel segmento *Heap* $\xi$. Esso può crescere durante l'esecuzione del programma. Il *program break* serve per *"stabilire"* il limite degli indirizzi virtuali nello heap $\xi$, e si può andare a modificarlo.

![350](images/layout-detail.png)

## Manipolazione della Memoria Dinamica in Linux
**In Linux**
Per utilizzare la memoria dinamica si utilizzano delle *funzioni di libreria* (`malloc`, `free`, ecc...) per *allocare o liberare blocchi di memoria*.

Le funzioni di libreria utilizzano la System Call `sbrk` che informa il sistema operativo che il processo emetterà indirizzi virtuali *in zone precedentemente* non usate (aumenta o decrementa il *program break*).
- In pratica si informa il SO che l'Heap sta crescendo e il processo accederà a *pagine di memoria virtuale aggiuntive*

**Thread-Safe**
Tutte le funzioni di libreria per la memoria dinamica sono *Thread Safe*.
- Possono essere invocate in parallelo da molteplici *thread*
	- *Ma non all'interno di Signal Handler!*
- Internamente mantengono e usano *mutex* (che vedremo) per regolare l'accesso alle strutture dati

## Funzione `malloc` 
```c
#include <stdlib.h>
void *malloc(size_t size);
```

Alloca `size` byte di memoria e ritorna il puntatore alla memoria allocata.
La memoria *NON* è inizializzata, può contenere qualsiasi valore
Se l'allocazione *fallisce* (e.g., manca memoria), ritorna `NULL`. Altrimenti ritorna l'indirizzo `void *` da convertire mediante un cast.

**Note** (*Utilizzo*)
1. La `malloc` richiede `size` in byte. Bisogna utilizzare l'operatore `sizeof` per conoscere la dimensione del tipo di variabile da allocare. Ricordiamoci che viene valutata in *fase di compilazione*!
2. Il valore di ritorno è `void *`, ovvero un puntatore senza tipo.
Per utilizzare la memoria allocata, conviene *assegnarla a un puntatore al tipo desiderato*

**Esempio:**
```c
/* Vogliamo allocare un vettore di float*/
float * v;
/* La lunghezza è determinata a run time */
scanf("%d", &n);
/* I byte da allocare sono n blocchi ognuno lungo quanto un float */
v = malloc(n * sizeof(float)); /* Un void* è assegnato a un float* */
v[0] = 12.2; /* Aritmetica dei puntatori */
```

## La funzione `calloc`
```c
#include <stdlib.h>
void *calloc(size_t nmemb, size_t size);
```
Simile alla `malloc`. Funzione gemella
Alloca memoria per un array di `nmemb` *elementi* ognuno di `size` byte e ne *ritorna il puntatore*.
La memoria *é inizializzata* a $0$.

**Osservazione:** a differenza della `malloc`, la `calloc` riceve `size` e `nmemb` e fa la moltiplicazione internamente. Come mai? Boooh; comunque useremo più la `malloc`

## La funzione `realloc`
Voglio *modificare* la dimensione della memoria dinamica appena creata con `malloc`. Come famo?

```c
#include <stdlib.h>
void *realloc(void *ptr, size_t size);
```
*Modifica la dimensione della zona di memoria* puntata da `ptr` a `size` byte.
Il valore di ritorno è il puntatore *alla zone estesa*
- Se comporta un *restringimento* della zona di memoria, i dati in eccesso sono *persi*
- Se comporta un aumento, la zona aggiuntiva *NON* è inizializzata (come con malloc)

**Nota:** `ptr` deve essere stato ottenuto con `malloc` `calloc` o `realloc`. Altrimenti succedono cose grave...

**Osservazione:** se possibile, la `realloc` estende la zona di memoria corrente, e il valore di ritorno è uguale a `ptr`
Se non è possibile, i dati vengono copiati in *una nuova regione*, il cui indirizzo viene ritornato 

## La funzione `free`
```c
#include <stdlib.h>
void free(void *ptr);
```

*Dealloca* (o libera) la zona di memoria indicata da `ptr`.
- Ovviamente `ptr` deve essere stato ottenuto con `malloc` `calloc` o `realloc`
Se si tenta di liberare più volta una zona di memoria, il comportamento non è definito (ovvero è meglio evitare di far casini, probabilmente si ottengono dei *segmentation Fault*.

## Esempio
**Esercizio:** si scriva un programma che memorizza un numero $N$ di `float` letti da tastiera.
Il numero $N$ è letto da tastiera all'inizio del programma.
Infine il programma ne stampa la media.

```c
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    float * v, s = 0;

    printf("Quanti numeri vuoi leggere? ");
    scanf("%d", &n);
    printf("Inserisci %d numeri:\n", n);

    v = malloc (n*sizeof(float)); /* Allocazione. Notare cast implicito da void* a float* */
    for (i=0; i<n; i++)
        scanf("%f", &v[i]);

    for (i=0; i<n; i++) /* Calcola la somma */
        s += v[i];

    printf("Media: %f\n", s/n);
    free (v); /* Deallocazione */
    return 0;
}
```

---
## Importanza della `free`
Tutte le zone di memoria vanno deallocate tramite la `free`
Se non viene fatto, la memoria è liberata al termine del processo

**Importante!**
- Non deallocare la memoria è sempre un errore!
- Nei programmi che devono essere eseguiti per lungo tempo, la memoria non deallocata causa il cosiddetto *Memory Leak*: a un certo punto, viene allocata tutta la memoria del sistema!
- Per questo in certi contesti *non* è consentito usare la memoria dinamica.

## Errori comuni con la Memoria Dinamica
**Errori comuni:**
Valore di ritorno di `malloc` non assegnato a un puntatore
```c
// Errato
float v = malloc(5*sizeof(float));
float v [10] = malloc(5*sizeof(float));
// Corretto
float * v = malloc(5*sizeof(float));
```

Creare un array la cui dimensione non è nota durante la compilazione
```c
// Errato
float v [n];
// Corretto
float * v = malloc(n*sizeof(float));
```

**Errori comuni:**
Utilizzo errato dell'aritmetica dei puntatori
```c
float * v = malloc(5*sizeof(float));
// Errato
v+2 = 43.5; // v+2 è un puntatore
&(v+2) = 43.5;  // (v+2) è già un puntatore. Usare '&' non ha senso
// Corretto
*(v+2) = 43.5;
v[2] = 43.5;
```
Utilizzo errato nella `scanf`
```c
// Errato
scanf("%f", v[2]);
scanf("%f", *(v+2) );
// Corretto
scanf("%f", &v[2]);
scanf("%f", v+2 );
```
