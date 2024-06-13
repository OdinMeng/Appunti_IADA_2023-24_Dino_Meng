---
data: 2024-04-17
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Esercizi Bash
tipologia: appunti
stato: "1"
capitolo: Linguaggio Bash
---
- - -
*Esercizi Bash*
- - -
# 1. Slides Trevisan
1. Si scriva un programma che riceve due argomenti. Se entrambi sono dei file, stampa il contenuto di entrambi
2. Si scriva un programma che per ogni file/cartella nella cartella corrente dice se esso è un file o una cartella. 
3. Si scriva un programma che riceve un intero come argomento. Se esso è minore di 10, crei i file `0.txt`, ..., `9.txt` 
4. Si scriva un programma che legge due path da tastiera. Se sono uguali, controlla che il path corrisponda a una cartella. Se affermativo, stampa il path.
5. Si scriva un programma che legge due interi da tastiera e stampa il prodotto
6. Scrivere su un file la data due volte, con un intervallo di 5 secondi
7. Si scriva un programma che riceve due argomenti. Ricerca nella folder corrente tutti i file che hanno il nome del primo argomento e salva la lista nel file il cui nome è il secondo argomento
8. Si scriva un programma che riceve due argomenti: il primo argomento è una cartella, il secondo argomento un pattern. Il programma trova tutte le linee dei file `.c` o `.h` nella cartella, che contengono il pattern. Le linee vengono salvate nel file `/tmp/output.txt`.
9. Si crei un programma che cerca ricorsivamente tutti i file presenti in una cartella passata come primo argomento.
   Collochi quei file in una cartella ricevuta come secondo argomento, suddividendoli in sottocartelle separate per estensione.
   **Nota:** si assuma che che i nomi di cartelle non contengano `.` e i file ne contengano uno solo, nella forma `nome.estensione`

- Dato il file `vini.txt` contentente il nome, l'anno, la città e il prezzo di alcune bottiglie di vino:
```
ribolla 2012 udine 21
prosecco 2018 trieste 15
barbera 2009 torino 20
freisa 2010 torino 18
barbera 2013 torino 14
barolo 1984 alba 45
```
- Eseguire i seguenti, utilizzando comandi Bash:
	1. Si trovino il nome e l'anno del vino più caro:
	2. Si trovino i nomi dei vini prodotti a Torino:
	3. Si calcoli quanti vini sono presenti per ogni città:
	4. Si calcoli quanti anni passano tra il vino più vecchio e più nuovo:

- Dato il file `file.txt` contentente:
```
luca 1985 milano
martino 1990 torino
giovanni 1971 trieste
andrea 1984 milano
```
- Eseguire i seguenti, utilizzando comandi Bash:
	1. Si calcoli il numero di righe nel file:
	2. Si calcoli quante città sono incluse nel file:
	3. Si trovi la città che appare il maggior numero di volte e il numero di occorrenze:

