---
data: 2024-03-21
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Filtri e Simili Linux
tipologia: appunti
stato: "1"
capitolo: Linux
---
- - -
*L'idea di filtrare e manipolare testi su Linux. Lista di comandi rilevanti per l'esame.*
- - -
# 1. L'idea di filtrare testi
**L'IDEA PRELIMINARE.** Negli OS Linux esistono una serie di comandi per manipolare testo.
- Filtrare, ordinare, comporre in una *maniera arbitraria*

Essi si aspettano di lavorare *su dati testuali organizzati in righe*, come normali file di testo (o di configurazione) (o file *.csv*)

Permettono di fare operazioni complesse con *poco codice*
- Spesso si usano assieme alle `pipe` al fine di creare *pipeline di processamento*

# 2. Bash Expansion
**OSS.** Osservare il comando `grep main *.c`:
- Esso ricerca il pattern `main` in *tutti* i file che che terminano con `*.c`

La *bash* (quindi NON il comando/programma grep!) *espande* il termine `*.c` in tutti i file che matchano l'espressione **prima** di eseguire il comando
- `grep` non riceve la stringa `*.c` come argomento
- `grep` riceve già la lista di file

**Esempio:** la cartella corrente contiene `prog.c` e `module.c`
- Il comando `grep main *.c`
- Viene trasformato dalla bash nel comando `grep main module.c prog.c`

Questo è un *meccanismo* flessibile per operare su file:
- Agisce *prima* di avviare il comando
- Il testo non deve essere quotato né con `*` né con `'`
- `*` matcha qualsiasi numero di ogni caratteri (*wildcard*)
- `?` matcha un solo carattere (*single wildcard*)
- `~` rappresenta la home directory:
    - `~/file.txt` equivale a `/home/martino/file.txt` se l'utente è `martino`
    - **NOTA!** `.` e `..` non vengono espansi, *sono propriamente parte di un path*
- Liste racchiuse tra `{ ... }` vengono espanse
    - `mkdir /tmp/{dir1,dir2}` viene *"espanso"* in `mkdir /tmp/dir1 /tmp/dir2` (attenzione che in realtà *non sono equivalenti*, tuttavia hanno lo stesso effetto).

**Esempio**: si scriva un programma che riceve due argomenti: il primo argomento è una cartella, il secondo argomento un pattern. Il programma trova tutte le linee dei file `.c` o `.h` nella cartella, che contengono il pattern. Le linee vengono salvate nel file `/tmp/output.txt`.
```bash
#!/bin/bash
if (( "$#" != "2" ))
then
    echo "Servono due argomenti"
else
    cat $1/*.c $1/*.h | grep $2 > /tmp/output.txt
fi
```

# 3. Lista di Comandi
Adesso facciamo una lunga lista di *comandi* per filtrare testi.
## 3.1. Comando `grep`
Il comando `grep` è uno dei comandi *utili per filtrare* dei *contenuti*.

**`grep [options] pattern [file...]`**: stampa le linee del file che contengono il *pattern*. Se non metto il file usa lo standard input: posso usare grep in pipe. Alcune opzioni:
- `-n`: stampa il numero di riga
- `-i`: case insensitive
- `-c`: stampa il numero di match
- `-v`: stampa solo le linee che *non* contengono il pattern
- `-e`: interpreta i pattern come delle *espressioni regolari*

**Esempio dell'utilizzo di `grep`**:
- `grep main *.c`: stampa le linee che contengono `main` in tutti i file che finiscono in `.c`
- `ps -ef | grep bash`: stampa tutti i processi che sono istanze del programma `bash`
Osserviamo che ci sono dei *caratteri speciali* che vengono processati in qualche modo da Bash. Questo è *Bash Expansion*.

---
## 3.2. Comando `cut`
**`cut`**: estrare colonne (o campi) dall'input. Ha *diverse modalità*, di cui ne vedremo *due*; modalità *byte* e modalità *campi*.
- **Modalità byte**: estrae i byte specificati da ogni riga. Si utilizza l'opzione `-b byterange`
- **Modalità campi**: estrae i campi specificati, delimitati da un separatore specifico. Si utilizza l'opzione `-d delimitatore -c campi`. Questo è particolarmente utile per i file *.csv*.

**Esempio:** il file `file.txt` contiene:
```
luca 1985 milano
martino 1990 torino
```

`cat file.txt | cut -b1-2` estrae i primi *2 byte* (caratteri) da ogni riga, e stampa su `stdout`:
```
lu
ma
```

`cat file.txt | cut -d " " -f 2` estrae il *secondo campo del file*, delimitato da uno spazio. Stampa su `stdout`:
```
1985
1990
```

---
## 3.3. Comando `tr` (translate)
**`tr [-cds] [set1] [set2]`**: *legge* dei dati e *sostituisce* i caratteri specificati con altri caratteri (quindi fa una specie di  *"translate"* automatica). Opzioni comuni:
- `-d`: (del) *cancella* tutti i caratteri specificati. E' necessario *un solo set* come argomento
- `-s`: *sostituisce* le ripetizioni del carattere specificato *con un solo carattere*

**Esempio**: `tr a A < file1 > file2`: sostituisce le `a` minuscole con `A` maiuscole. Notare lo `stdin` di `tr` è letto da file con l'operatore `<`. Qui si ha una situazione del tipo *(file1->tr)->file2*

---
## 3.4. Comando `sort` (ordinamento)
**`sort [-dfnru] [-o outfile] [file…]`**: Ordina i dati del file o dello `stdin`. *Di default* si usa l'ordinamento *alfabetico*. Opzioni principali:
- `-f`: tratta maiuscole come minuscole (*case insensitivity*). 
- `-n`: riconosce i numeri e li ordina in modo *numerico* (*numerical*). 
- `-r`: ordina i dati in modo inverso (*reverse*). 
- `-k`: ordina secondo il numero di colonna dato dopo il k (*su file a campi*)
- `-t SEP`: usa un separatore di campo diverso da quello di default (una *non-blank to blank transition*)
- `-u`: ordina e rimuove linee duplicate

**Esempio:** il file `file.txt` contiene:
```
luca 1985 milano
martino 1990 torino
giovanni 1971 trieste
```

`sort < file.txt > sorted.txt` ordina le righe e stampa nel file `sorted.txt`, che conterrà:
```
giovanni 1971 trieste
luca 1985 milano
martino 1990 torino
```

`cat file.txt | sort -k 2 -n` ordina le righe *per anno* (secondo campo) e stampa su `stdout`:
```
giovanni 1971 trieste
luca 1985 milano
martino 1990 torino
```

---
## 3.5. Comando `uniq` (duplicati)
**`uniq [-cdu]`**: *esamina* i dati linea per linea *cercando linee duplicate* e può:
- Di default *elimina duplicati*
- `-c` per ogni riga prepende il *numero di occorrenze* (*dice quanti ce n'erano*)
- `-d` stampa solo le linee duplicate (*solo duplicate*)
- `-u` stampa solo le linee uniche (*solo uniche*)
**NOTA.** Il comando `uniq` non ordina le righe. E' necessario fornirle già ordinate!

## 3.6. Comando `wc` (conteggio parole)
**`wc [-lwc] [file]`**: conta linee (`l`), parole(`w`) e caratteri(`c`) dello `stdin` o del file

**Altri comandi utili** (non per esame): 
- `sed`: ricerca e sostituzione di espressioni regolati
- `awk`: esecuzione di script (stile C) sulle righe di un file
- `comm`: trova le linee in comune (uguali) tra due file
- `paste`: concatena le linee di più file
- `rev`: scrive l'input in ordine inverso di caratteri, linea per linea