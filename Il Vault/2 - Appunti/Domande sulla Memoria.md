---
data: 2024-05-21
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Domande sulla Memoria
tipologia: appunti
stato: "1"
capitolo: Memoria
---
- - -
*Domande teoriche sulla memoria*
- - -
# Domande
Il compito della Memory Management Unit è:
`• Gestire il funzionamento della cache`
`• Allocare zone di memoria`
`• Tradurre gli indirizzi da virtuali a fisici` 
**Risposta:** *Tradurre gli indirizzi da virtuali a fisici*

Cosa fa la MMU quando una pagina non è in memoria?
`• La carica`
`• Termina il processo che ha generato l'indirizzo`
`• Avverte il SO`
**Risposta:** *Avverte il SO* (mediante una Page Fault)

La zona di memoria Stack viene utilizzata per:
`• Memorizzare variabili globali`
`• Memorizzare il codice del programma`
`• Contenere le variabili relative alle funzioni`
`• Allocare la memoria dinamica`
**Risposta:** *Contenere le variabili relative alle funzioni*

Un sistema ha pagine da 1KB, indirizzi virtuali da 32bit e fisici da 16bit. Quanti bit sono dedicati all'offset di pagina?
`• 6` `• 10` `• 22`
**Risposta:** *10* (1KB -> $2^{10}B$; allora ho 10 bit per l'offset)

Un sistema ha pagine da 1KB, indirizzi virtuali da 32bit e fisici da 16bit. Di quante pagine dispone un processo nello spazio degli indirizzi virtuali?
 `• 64` `• 1024` `• circa 4 Milioni`
**Risposta:** *circa 4 Milioni* ($2^{32-10} \approx 4 \cdot 10^6$)

In Linux, il Loader è:
`• Un componente del SO`
`• La funzione principale di un programma`
`• La zona di memoria dove è memorizzato il codice del programma in esecuzione`
**Risposta:** *Un componente del SO*

In Linux, le librerie condivise sono mappate in memoria:
`• In una zona intermedia tra stack e heap`
`• Nella zona di dati`
`• Nella zona di codice`
`• Nello stack`
**Risposta:** *In una zona intermedia tra stack e heap*

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
**Risposta:** *i*

Il seguente codice è corretto in C?
```c
#define size 1024
int i [size];
```
`• Si` `• No`
**Risposta:** *Si*

Si completi il seguente codice C
```c
double * a, int i;
scanf("%d", &i);
a = ...
```
`• float[i]` `• malloc(i);`
`• malloc(i * sizeof(double));`
`• malloc(sizeof(double));`
**Risposta**: `malloc(i*sizeof(double));`

La `malloc`:
`• è una System Call`
`• è utilizzata dalla funzione sbrk`
`• utilizza la System Call sbrk`
**Risposta:** *utilizza la System Call sbrk*