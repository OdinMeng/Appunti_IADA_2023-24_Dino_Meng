---
data: 2024-05-21
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Limiti della Memoria Statica
tipologia: appunti
stato: "1"
capitolo: Memoria
---
- - -
*Motivazioni per la memoria dinamica: limiti della memoria statica*
- - -
# Limiti della memoria statica
Diamo un po' di *motivazioni* per la *memoria dinamica*.

## Variabili Globali, Locali e Statici
Facciamo prima un ripasso sulle *variabili globali, locali e statici*

**Variabili Globali**
Le variabili globali sono allocate nella segmento di *dati* $\delta$ ([[Layout della Memoria Virtuale#^6aeac3]]).
Il loader *inizializza* il valore
```c
int a = 40; /* Inizializzata dal loader*/
int main(){...}
```
Se non specificato, la variabile è inizializzata a $0$.
```c
int a; /* Inizializzata a 0 */ 
int main(){...}
```

**Variabili Locali**
Le variabili di funzione sono allocate nello *stack* $\sigma-\rho$ ([[Layout della Memoria Virtuale#^b73f4b]])
*NON* viene inizializzato il valore! *Possono contenere dati arbitrari*
```c
int f(int a, int b){
    int s = a + b;
    return s;
}
```
Gli argomenti `a` e `b`, la variabile `s` e il valore di ritorno si trovano nello stack

**Variabili Statiche**
le variabili in una funzione con la keyword `static` sono allocate *nel segmento* dati $\delta$ e non nello stack.
Inizializzate dal *loader*.
*Conservano in valore* dopo il termine della funzione.
```c
#include <stdio.h>
int fun(){
  static int count = 0; /* Inizializzata UNA volta sola dal loader all avvio del processo.
                           E NON ogni volta che la funzione viene invocata*/
  count++;
  return count;
}
  
int main(){
  printf("%d ", fun());
  printf("%d ", fun());
  return 0;
}
```
**Stampa** `1 2`
Sono effettivamente strane, non li useremo tanto

## Problema delle Variabili Globali
**Problema.** (*Variabili globali non determinate a priori*)
Ci sono casi in cui il programmatore *non sà quanti dati deve caricare in memoria*
- Lettura di una struttura dati da file
- Input utente di lunghezza variabile

Con quello che abbiamo visto, in C gli array hanno lunghezza fissa, nota a tempo di compilazione
```c
#define N 50
int v [N];
```
Come soluzione si può optare per la seguente

*Sovradimensionamento*: approccio con cui i programmatori creano vettori o matrici di dimensione molto grande
- Atti a contenere (quasi) ogni possibile input
- Approccio funzionante, ma non risolutivo
- La *Memoria Dinamica* risolve questo problema

Cosa non si può assolutamente fare è il seguente.
In C, *NON* si possono creare array di lunghezza non nota al compilatore
Il seguente codice è *sbagliatissimo!!!!!!*
```c
scanf("%d", &n);
int v[n];
```

## Esempio di Sovradimensionamento
**Esempio di sovradimensionamento:** media di $N$ numeri letti da tastiera

**Nota:** la media di $N$ numeri si può calcolare anche senza tenerli in memoria. Basta tenersi la somma $\Sigma$
```c
#include <stdio.h>
#define MAXN 50 /* Se n>50 il programma non funziona */
int main() {
    int n, i;
    float v[MAXN], s = 0;

    printf("Quanti numeri vuoi leggere? ");
    scanf("%d", &n); /* Se n>50 il programma non funziona */
    printf("Inserisci %d numeri:\n", n);

    for (i=0; i<n; i++) 
        scanf("%f", &v[i]); //  &v[i] == v+i
    for (i=0; i<n; i++)
        s += v[i];
    printf("Media: %f\n", s/n);

    return 0;
}
```
