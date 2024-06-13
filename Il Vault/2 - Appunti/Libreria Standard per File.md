---
data: 2024-04-16
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Libreria Standard per interazione coi File
tipologia: appunti
stato: "1"
capitolo: I Dati sui Sistemi Operativi
---
- - -
*Libreria standard del linguaggio C per interagire con i file.*
- - -
# 1. File in C
---
## 1.1. Premessa
**In C è possibile interagire coi File.**
In C, come in tutti i linguaggi, è possibile *leggere e scrivere su file*.
Esistono varie funzioni per farlo.
1. **Funzioni di libreria:** portabili tra SO. In queste pagine vedremo queste, contenute in `<stdio.h>`; sono le *stesse* in tutti i *sistemi operativi*.
2. **System Call** per *Linux*

**Tipi di File.**
I file possono essere:
- Binari: contenere *sequenze di bit arbitrarie*.
	- Immagini, file compressi
- Testuali: contengono *solo caratteri stampabili*
	- File `.txt`, `.html`, sorgenti di programmi `.c`

Noi vedremo principalmente file testuali.

**Operazioni di base sui file.**
Le operazioni di base sono:
- Apertura di un file; informo l'*S.O.* che sto per farci qualcosa
- Lettura o scrittura nel file; *effettuo le operazioni necessarie*
- Chiusura del file; *concludo e salvo le modifiche*

Vedremo le funzioni principali per queste operazioni.
- Esistono *anche altre operazioni*, che vedremo nel corso quando parleremo di file *e file system*

---
# 2. Apertura e chiusura file
---
## 2.1. Apertura di un File
**Apertura di un File in generale.**
Un programma può accedere a file su disco, tramite il loro *path* (ovvero quella stringa che indica la posizione del file sul disco).

Prima di leggere o scrivere un file, il programma deve *aprirlo*.
- Indicare al sistema operativo che accederà a tale file e in che *modalità*

La *modalità* può essere:
- Lettura (read)
- Scrittura (write)
- Aggiunta (o *append*)

L'accesso (scrittura/lettura) ai file è *sequenziale*.
Si inizia a leggere o scrivere dall'inizio e si prosegue
- Simile all'idea di *cursore* degli editor grafici; infatti c'è un *"cursore virtuale"*, che rappresenta la *posizione del file aperto*.
- Esistono funzioni per riposizionare il *cursore*, vedremo più avanti

Quando si apre un file, bisogna *indicare* se esso è *binario o testuale*.
- Se testuale, le funzioni si aspettano `\n` per delimitare le righe

**Implementazione in C.**
Per indicare un *file aperto*, su cui è possibile effettuare operazioni, in C si usa il tipo `FILE *`.
- Tecnicamente esso è *un puntatore* a una variabile di tipo `FILE`. 
- Non ci interessa che tipo è `FILE`; precisamente sarebbe una *struct*, ma è in ogni caso una questione che non ci riguarda.

`FILE *` è un cosiddetto *handle opaco*: è un puntatore. *Ma non ci interessa a cosa punta*.
Solo le funzioni di libreria hanno interesse ad accedere al dato, al *programmatore* non ne interessa niente.
Pertanto il contenuto di `FILE` può cambiare o non seguire uno standard.

## 2.2. Apertura di File in C
Per aprire un file si usa la funzione `fopen(path, modo)`. Essa ritorna un `FILE *`.
- `path` può essere assoluto o relativo.
- `modo` indica se apriamo in lettura (`r`), scrittura (`w`) o aggiunta (`a`). Di default la modalità è *testuale*. Per indicare *modalità binaria*, aggiungere `b` (es. `rb` o `wb`). 
- Nota benissimo: si deve inserire una *stringa* in entrambi i casi!

**Esempio:**
```c
FILE * f;
f = fopen("file.txt", "r");
if (f==NULL){ /*Errore*/ }
```
In caso di errore, la `fopen` ritorna il puntatore nullo `NULL`.

**Note.** (*Comportamenti in casi di non-esistenza del file*)
- In modalità *scrittura e aggiunta*, se il file non esiste, *viene creato*.
- In modalità *lettura*, se il file non esiste, la `fopen` ritorna `NULL`.
- In modalità *scrittura*, se il file esiste, il suo contenuto *viene cancellato all'apertura*

---
## 2.3. Chiusura di File
**Chiusura file:** quando non si accede più a un file, bisogna *chiuderlo* e dismettere il corrispondente `FILE *`
Si chiama la funzione `fclose(file)` che accetta come argomento un `FILE *`.
- Mai chiamare la `fclose` con un `FILE *` invalido settato a `NULL`!
- Si può chiudere un file aperto *solo una volta*

Se un file non viene chiuso, la chiusura è effettuata *automaticamente dal SO* quando il programma termina.

---
# 3. Lettura/scrittura su File Testuali

## 3.1. Lettura su File
Le funzioni che si usano simili a quelle che si usano per leggere da tastiera e scrivere su console.

1. **Lettura**:
- `fgetc(file)`: legge *un carattere* e lo fornisce come *valore di ritorno*
	- Ritorna la costante `EOF` se il file è finito (*"End of File"*)
- `fgets(buffer, N, file)`: legge *una stringa* di massimo `N` caratteri.
	- Legge fino a quando ha letto `N` caratteri o trova `\n`, che *è incluso* nella stringa ritornata e terminata da `\0`
	- Ritorna `NULL`($=0$) se il file è finito, altrimenti ritorna `buffer`

## 3.2. Scrittura su file
2. **Scrittura**:
- `fputc(carattere, file)`: scrive un *carattere* su file
- `fputs(stringa, file)`: scrive una *stringa* su file

*Nota:* queste funzioni possono leggere e scrivere *anche su terminale*. E' sufficiente dire loro di leggere dal file `stdin` e scrivere su file `stdout`.
- `fputc('a', stdout)` $\equiv$  `putc('a')`
- Abbiamo già visto che la `fgets` è una valida alternativa alla insicura `gets`.
- Infatti queste funzioni sono le *"versioni generiche"* delle funzioni appena menzionate.

**Esempio**: si legga un path da tastiera e se ne stampi il contenuto come file di testo
```c
#include <stdio.h>

int main ()
{
    char s[100], buffer [100];
    FILE * f;
    
    printf("Inserisci un path: ");
    scanf("%s", s);
    
    f = fopen(s, "r");
    if (f==NULL){
        printf("Impossibile aprire %s\n", s);
        return 1; /* Errore */
    }
    
    /* Non è importante la lunghezza di buffer */
    while ( fgets(buffer, 100, f) )
        fputs(buffer, stdout); // Equivale a printf("%s", s);
    
    fclose(f);
    return 0;
}
```

## 3.3. Comandi Generali di Lettura/Scrittura su File
**Comandi Alternativi.**
- Alternativamente si possono usare le funzioni `fprintf` e `fscanf` che sono equivalenti a `printf` e `scanf` con la differenza che scrivono *su file* e *non da console*.

**Sintassi**:
`fprintf(file, formato, argomenti)`
`fscanf (file, formato, &argomenti)`

Queste funzioni sono particolarmente utili per leggere e scrivere *numeri interi e reali*

**Esempio:**
```c
fprintf(f, "%d\n", 123); // scrive il numero 123 e un ritorno a capo
```

**Esempio**: si legga un numero $N$ da tastiera e si stampi sul file `numeri.txt` i numeri da 1 a $N$
```c
#include <stdio.h>

int main ()
{
    int n, i;
    FILE * f;
    
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    
    f = fopen("numeri.txt", "w");
    if (f==NULL){
        printf("Impossibile aprire numeri.txt\n");
        return 1;
    }
    
    for (i=1; i<=n; i++)
        fprintf(f, "%d\n", i);
        
    fclose(f);
    return 0;
}
```

## 3.4. Nota su `fgetc` e `fgets`
**Nota.**
In caso di *lettura*, abbiamo visto che `fgetc` e `fgets` hanno *comportamenti diversi*. In pratica, in caso di file completamente letto:
- `fgetc` ritorna la costante `EOF`
- `fgets` ritorna la costante `NULL`
- `fscanf` ritorna la costante `EOF`
- Non abbiamo *numeri* $1$ o $0$
Questo è un retaggio storico delle versioni vecchie.

E' possibile usare la funzione `eof(FILE *)` per verificare se il file è stato letto completamente.
- Ritorna `TRUE` / `FALSE`

---
## 3.5. Formati per comandi `printf` e `scanf`
Abbiamo visto che `(f/s)printf` e `(f/s)scanf` permettono di *specificare il formato* come `%d` `%f` `%s` `%c`.
Riassumiamo:
- Carattere `char`: `%c`
- Stringa `char []`: `%s`
- Intero `int`: `%d`
- Reale `float`: `%f`

Lista completa: [https://man7.org/linux/man-pages/man3/printf.3.html](https://man7.org/linux/man-pages/man3/printf.3.html)

Esistono modificatori per definire numero di cifre decimali, padding per interi, ecc..

---
## 3.6. Esercizio su Lettura/Scrittura di File
**Esercizio**: si legga `persone.txt` che contiene su ogni riga nome ed età di una persona, separati da `' '`. Si calcoli l'età media. Esempio di file:
```
martino 31
andrea 37
```


```c
#include <stdio.h>

int main ()
{
    int n=0, s, e;
    FILE * f;
    char nome[100];
    
    f = fopen("persone.txt", "r");
    if (f==NULL){
        printf("Impossibile aprire persone.txt\n");
        return 1;
    }
    
    /* La fscanf si aspetta di trovare su ogni riga una parola e un intero */
    while (fscanf(f, "%s %d\n", nome, &e) != EOF){
        n++; s+=e; /* Accumula i contatori */
    }
        
    printf("La media è %f\n", (float)s/n ); /* Notare il casting */
    return 0;
}
```


# 4. Funzioni di libreria per file: Recap
Abbiamo già visto le funzioni di libreria più comuni per leggere su file.
Esse sono parte della *libreria standard* `libc`.
- Sono utilizzabili su *qualsiasi SO* (portabile)
- E' sufficiente ricompilare il programma
- Utilizzano *System Call diverse a seconda del SO*

Funzioni principali:
- Puntatore a  file: `FILE *`
- Apertura/chiusura: `fopen` `fclose` 
- Lettura/scrittura di caratteri: `fgetc`, `fputc`
- Lettura/scrittura di righe: `fgets`, `fputs`
- Lettura/scrittura con formato: `fscanf`, `fgets`
- Lettura/scrittura grezza `fread`, `fwrite`
- Riposizionamento: `fseek`, `rewind`, `ftell`

**Esempio**: si legga un path da tastiera e se ne stampi il contenuto come file di testo
```c
#include <stdio.h>

int main ()
{
    char s[100], buffer [100];
    FILE * f;
    
    printf("Inserisci un path: ");
    scanf("%s", s);
    
    f = fopen(s, "r");
    if (f==NULL){
        printf("Impossibile aprire %s\n", s);
        return 1; /* Errore */
    }
    
    /* Non è importante la lunghezza di buffer */
    while ( fgets(buffer, 100, f) )
        fputs(buffer, stdout); // Equivale a printf("%s", s);
    
    fclose(f);
    return 0;
}
```

# 5. Funzioni per manipolare il Cursore
**Nota.** (*sequenzialità*)
La lettura/scrittura su file è *sequenziale*.
Un file aperto ha un *cursore* simile a quello di un editor testuale
- Determina la posizione di partenza per la prossima operazione
- Esso è posizionato a un *offset* preciso all'interno del file
- Una lettura sposta in avanti il cursore dei caratteri letti
- Una scrittura inserisce i caratteri nella posizione del cursore

Esistono delle funzioni per spostare arbitrariamente il cursore, come viste prima.

**Esempio.**
Consideriamo un file 10 caratteri contenente la frase `ciao mondo`. Viene aperto con:
```c
FILE * fp = fopen("ciao.txt", "r");
```
Il cursore a questo punto è all'inizio del file.
```	
↓──────────┐  
│ciao mondo│
└──────────┘
```
Effettuando una lettura con la `fscanf` si legge una parola (spazio finale incluso).
```c
fscanf(fp, "%s", buffer);
```
Il cursore sarà quindi all'inizio della parola successiva. Una successiva `fscanf` leggerebbe `mondo`
```	
┌────↓─────┐  
│ciao mondo │
└──────────┘
```

**Elenco.**
1. E' possibile *spostare manualmente il cursore* con la funzione
```c
int fseek(FILE *fp, long distanza, int partenza)
```
Dove:
- `FILE *fp`: è il puntatore a file sul quale agire
- `long distanza`: è il nuovo offset.
- `int partenza` o `whence` indica da dove `distanza` *viene calcolata*. Può assumere
	- `SEEK_SET`: inizio del file
	- `SEEK_END`: fine del file
	- `SEEK_CUR`: posizione corrente del cursore
	- Nota: tutti i tre e valori sono delle *costanti* definite nella liberia.

**Figura.** (*funzionamento di `fseek`*)
![width:800px center ](images/fseek.png)

2. Per sapere *in che posizione è il cursore*:
```c
long ftell(FILE *stream);
```

**Esempio.**
Consideriamo un file 10 caratteri contenente la frase
`ciao mondo`.

```c
FILE * fp = fopen("ciao.txt", "r");
fscanf(fp, "%s", buffer); // Buffer contiene "ciao". Il cursore è prima di "mondo"

fseek (fp, 0, SEEK_SET);  // Il cursore torna all'inizio del file
fscanf(fp, "%s", buffer); // Leggo di nuovo "ciao"
```

Similmente:

```c
FILE * fp = fopen("ciao.txt", "r");
fgets(buffer, 2, fp); // Buffer contiene "ci". Il cursore è tra "ci" e "ao mondo"
fseek (fp, -3, SEEK_END);  // Il cursore si posiziona tra "ciao mo" "ndo"
fgets(buffer, 2, fp);// Leggo "nd"
```

---
# 6. Funzioni per la lettura e la scrittura su File Binari

**Funzioni `fread` e `fwrite`**
Simili a `fgets` e `fputs`, ma *per file binari*.
- Ignorano il ritorno a capo `\n`.
- Leggono/scrivono *una quantità fissa di byte*
- Ottime per file binari: *contengono caratteri non stampabili*, e anche tanti `'\0'` (*terminatori*).
	- Impossibile leggere correttamente i terminatori.
	- Possiamo scrivere qualsiasi cosa! Permettono di leggere/scrivere file binari (che contengono `'\0'`).
		- Oppure `int`, `float`, `struct` e vettori 

**Funzionamento**: leggi/scrivi nella `nmemb` oggetti, ognuno grande `size` byte dal puntatore a file `stream` e scrivili/leggili da `ptr`.
**Valore di ritorno**: il numero di elementi effettivamente letti/scritti.

```c
size_t fread(void *restrict ptr, size_t size, size_t nmemb,
                    FILE *restrict stream);
size_t fwrite(const void *restrict ptr, size_t size, size_t nmemb,
                    FILE *restrict stream);
```

---
**Esempio.**
Lettura di un vettore di interi.
Si supponga un file contente (in binario) i 2 interi che rappresentano i numeri $1990$ e $2023$.
In esadecimale e considerando `int` su 4 byte, avremo nel file:
```
0x00 0x00 0x07 0xC6 0x00 0x00 0x07 0xE7
```
**Suggerimento:** crea il file con `echo -n -e '\x00\x00\x07\xC6\x00\x00\x07\xE7' > ciao.txt`

Per leggerli in C, si procede con la funzione `fread`

```c
FILE * fp = fopen("ciao.txt", "rb"); // Notare modalità "rb"
int v [2];
fread(v, sizeof(int), 2, fp);
```

*Nota:* è errato usare `fscanf(... , "%d", ...)` che si aspetta dei numeri scritti come stringhe!

**Osservazioni dall'esempio:**
- `size_t` è un alias per il tipo di dato *intero senza segno* che viene usato per rappresentare grandezze di strutture dati.
- `sizeof` è un operatore che ritorna il numero di byte che un tipo di dato occupa
  - Durante la *compilazione*, il compilatore sostituisce l'espressione col suo risultato


---
# 7. Bufferizzazione
Adesso evidenziamo un *aspetto particolare* della lettura/scrittura di file su *C*

**Definizione.** (*Bufferizzazione*)
In C, l'input/output su file è *bufferizzato*
- Le funzioni di scrittura come `fprintf` *non invocano sempre la System Call* per la scrittura su file
- Esse scrivono *su un buffer in memoria*
- Quando esso è *pieno*, il contenuto è *effettivamente scritto* su file

**Motivazione.**
Questo comportamento *migliora significativamente le prestazioni* in caso di tante scritture di piccole dimensione: bisognerebbe accedere al disco ad ogni operazione! Quindi in un un'unica andata scriviamo ciò che ci interessa.

**Figura.** (*Bufferizzazione*)
![550](images/io-buf.png)

## 7.1. Manipolazione delle Bufferizzazione
**Definizione.** (*Costante BUFSIZ*)
La dimensione di default è la costante `BUFSIZ`, che è di circa *65kB*.
E' possibile *settare la dimensione del buffer* per casi particolari:
```c
void setbuf(FILE *stream, char *buf);
```

**Funzione.**
1. Si può *forzare una scrittura su file*:
```c
int fflush(FILE *stream);
```

**Nota**: quando lo standard output è su console esso è *new line-buffered*. Un ritorno a capo `\n`, forza il *flush*.
Per rendere uno stream *new line-buffered* is usa la funzione `setvbuf`.

---
# 8. Funzione per la Rimozione dei File
**Rimozione**
```c
int remove(const char *pathname);
```
*Non é necessario che il file sia aperto*.
In Linux, `remove()` usa la *System Call*:
```c
int unlink(const char *pathname);
```
Vedremo come mai si chiama *"unlink"* in seguito, quando approfondiremo gli *hard/soft link*.
