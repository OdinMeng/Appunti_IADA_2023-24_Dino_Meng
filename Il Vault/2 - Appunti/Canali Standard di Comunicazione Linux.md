---
data: 2024-03-21
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Canali Standard di Comunicazione Linux
tipologia: appunti
stato: "1"
capitolo: Linguaggio Bash
---
- - -
*Canali Standard di Comunicazione Linux. Comandi per manipolare il flusso di comunicazione.*
- - -
# 1. I standard di comunicazione in Linux
**NOZIONE PRELIMINARE.** In Linux, ogni processo, ha a disposizione *3 canali standard di comunicazione* con l'*esterno* (ovvero i dispostivi I/O).
- **Standard Input** (`stdin`): per ricevere dati in ingresso.  ^4cb7d4
- **Standard Output** (`stdout`): per stampare l'output ^59d2cb
- **Standard Error** (`stderr`): per stampare eventuali errori
Questa convenzione è *caratteristica* per i sistemi *POSIX-like* ([[Storia e Definizione di Linux#^1ad28a]]).

Di default, un programma riceve lo Standard Input da tastiera, e stampa Standard Output e Standard Error su console.

**FIGURA: Illustrazione grafica dei canali di comunicazione**
![width:400px center](images/standard-streams.jpg)

**CONSEGUENZE.** Questo implica quello che già abbiamo visto:
- `read` legge da `stdin`, quindi *di default da tastiera* (quindi non *direttamente* dalla *tastiera*!)
- `echo` stampa su `stdout` che *di default è console* (quindi non *direttamente* sullo *schermo*!)
- Per stampare su `stderr`, si può usare: `echo "An error!" >&2`. Di default, lo `stderr` è visualizzato a schermo
Tutti i programmi ben scritti, devono attenersi a usare questi *canali standard*.
- Ciò permette una *grande flessibilità* (flessibilità)
- *Tutti* i programmi di default di Linux *lo fanno* (universalità)

---
# 2. Redirezionare i canali (redirect)
## 2.1. Redirezione 1>
**1. Redirezione `stdout` su file**: è possibile eseguire un programma e *redirezionare* lo `stdout` su file anziché stamparlo sul terminale (come di default)
- **Formato**: `comando > file` oppure `comando 1> file`
- Questo perché $1$ indica `stdout` mentre $2$ indica `stderr`

**Esempio**: `date > data.txt` La data corrente viene salvata in `data.txt` e non stampata ad output
**Nota**: se `file` esiste, il contenuto viene sovrascritto, a meno che si usa la *modalità append*.

## 2.2. Redirezione 1>>
**2. Append `stdout` su file**: simile alla *redirezione*. Il file non viene cancellato, ma lo `stdout` del programma *viene aggiunto in coda*.
- **Formato**: `comando >> file` oppure `comando 1>> file`

**Esempio**: Scrivere su un file la data due volte, con un intervallo di 5 secondi
```bash
date > file.txt
sleep 5 # Pausa di 5 secondi
date >> file.txt # "Appende" a file.txt
```

**Esempio**: Si scriva un programma che riceve due argomenti. Ricerca nella folder corrente tutti i file che hanno il nome del primo argomento e salva la lista nel file il cui nome è il secondo argomento
```bash
#!/bin/bash
if (( "$#" != "2" ))
then
    echo "Servono due argomenti"
else
    find . -name $1 > $2
fi
```

## 2.3. Redirezione 2>
**3. `stderr` su file**: permette di redirigere lo `stderr` su un file.
- **Formato**: `comando 2> file`
- Questo perchè $1$ indica `stdout` mentre $2$ indica `stderr`

## 2.4. Redirezione <
**4. `stdin` da file**: permette di prelevare da file anziché da tastiera lo `stdin` un programma; quindi si *"dirotta"* il flusso di `stdin`, rimpiazzando lo *default* (ovvero la tastiera) con il *file*.
- **Formato**: `comando < file`

## 2.5. Pipe
**5. Pipe**: è possibile redirezionare lo `stdout` di un primo comando nello `stdin` di un secondo. Ovvero avrà una situazione del tipo *...->comando1->stdout->stdin->comando2->...*. In essenza, sto *concatenando* due comandi, creando così una *catena di processi*.
- **Formato**: `comando1 | comando2`
- **NOTA.** E' uno dei costrutti più potenti del bash, siccome permette di svolgere *compiti complessi con poco codice*: ne vedremo le potenzialità assieme ai comuni comandi bash

**FIGURA: Illustrazione del concetto di pipe**
![width:800px center](images/pipe.png)

## 7. Sostituzioni in variabili Bash
**6. Sostituzione in variabile**: è possibile usare lo `stdout` di un comando come una variabile.
- **Formato**: `$(comando)` oppure `` `comando` ``

**Esempi**:
- `a=$(ls /tmp)`: la stringa `a` contiene l'elenco dei file in `/tmp`
- `rm $( find / -name "*.tmp" )`: rimuove tutti i file nel sistema che terminano per `.tmp`