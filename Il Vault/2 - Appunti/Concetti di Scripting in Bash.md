---
data: 2024-03-19
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Concetti di Scripting in Bash
tipologia: appunti
stato: "1"
capitolo: Linguaggio Bash
---
- - -
*Definizione di Bash e script bash; valore di ritorno di un script bash; sintassi per accedere ai parametri di riga di un comando bash*
- - -
# 1. Definizione di Bash
Con *Bash* si intende il *software shell di default* in GNU/Linux
Permette di:
- Eseguire comandi (già visto)
- Definire variabili e utilizzarle
- Controllare il flusso (`if`, `while`, ecc...) con i vari *costrutti*

E' un *linguaggio completo* di tutti i costrutti.
Ha una sintassi particolare e *problematica*; nel senso che è molto *"particolare"* e *"pedantica"* nella sua *sintassi*.

Una lista di comandi può essere racchiusa in un file detto *script*.

# 2. Esempio di Script Bash
Uno script di esempio nel file `script.sh`:
```bash
#!/bin/bash
# primo esempio di script
echo $RANDOM
```

`#!/bin/bash` Indica che il file è uno *script bash*; questa è *obbligatoria*!
`# primo esempio di script` E' un commento
`echo $RANDOM` Stampa il *contenuto* della variabile `$RANDOM`

Per eseguire lo script.
```
./script.sh
```
Il file *deve* avere permessi di lettura ed esecuzione; quindi bisogna anche usare `chmod u+x script.sh` per aggiungere i permessi opportuni.

# 3. Il valore di Ritorno in Bash

Uno script è una lista di comandi che vengono eseguiti più delle strutture di controllo.
```bash
ls # Lista i file
./myprog # Avvia il programma myprog
```

Ogni processo in Linux/POSIX deve fornire un *Valore di Ritorno* al chiamante, ovvero:
- La *shell*
- Uno *script bash*
- Un *qualsiasi altro processo*

Il valore di ritorno è un *valore numerico intero*
- Usato dal chiamante per vedere se c'è stato errore
- Per convenzione $0$ se *successo*, $\neq 0$ in *caso di errore*

In uno script bash, si accede al Valore di Ritorno dell'ultimo comando tramite la variabile speciale `$?`

# 4. Accedere ai parametri di riga del comando
Ricordare che i *script Bash* sono dei *programmi*, ergo possono usare i *parametri* forniti dalla riga del comando.
Si *ottengono con*:
- `$1`, `$2`, ...: *contenuti dei parametri*
- `$0`: *nome dello script*
- `$#`: *numero di argomenti*

**Esempio**: il nome dello script è `script.sh` e viene eseguito come `./script.sh ciao`.
```bash
#!/bin/bash
echo $0 # Stampa "./script.sh"
echo $1 # Stampa "ciao"
echo $# # Stampa "1"
```
