---
data: 2024-03-19
corso: 
argomento: Strutture di Controllo del Flusso Bash
tipologia: appunti
stato: "0"
capitolo:
---
- - -
*Struttura if-then-elif-else-fi; sintassi per condizioni relativi ai numeri, alle stringhe, alle stringhe referenti a path; operatori logici; cicli for e while.*
- - -
# 1. Struttura if-then-elif-else-fi
Le *condizioni* hanno forme
```bash
if condizione then
    ramo 1
elif condizione2 then
    ramo 2
else
    ramo alternativo
fi
```

Esistono molte *sintassi alternative* per esprimere le *condizioni*. Ne vedremo una parte.

---
# 2. Condizioni
## 2.1. Condizioni tra Numeri
Si utilizza la sintassi `(( espressione ))` (*attenzione che qui NON c'è il dollaro!*)
Gli operatori di confronto sono i classici: ` == ` `!=` `<` `>` `<=` `>=`

**Esempio**:
```bash
read n1 n2e
if (( n1<n2 ))
then
    echo "$n1 minore di $n2"
elif (( n1==n2 )) then
    echo "$n1 uguale a $n2"
else
    echo "$n1 maggiore di $n2"
fi
```

## 2.3. Condizioni tra Stringhe
Si utilizza la *sintassi* `[[ espressione]]`
Gli operatori di *confronto* sono:
- ` = `  `!=`: uguaglianza o differenza (*ATTENZIONE! QUI SI USA UNA SOLA =*) 
- `>` `<`: ordinamento alfabetico
- `-z`: vero se la stringa è vuota (*o la variabile non è definita*; questa è unica per Bash); `! -z` è vero se la variabile non è vuota (o se è *definita*)
- E' *necessario* usare l'operatore `$` e mettere *spazi tra operandi*
  Esempio: `if [[ $a != $b ]]`
  Esempio: `if [[ ! -z $var ]]`: vero se `var` esiste e non è vuota (questo è molto comune in Bash, dal momento che *non esistono* le eccezioni)

**Esempio:**
```bash
#!/bin/bash
read s1
read s2
if [[ $s1 = $s2 ]]
then
    echo "Le stringhe sono uguali"
else
    echo "Le stringhe sono diverse"
fi
```

## 2.4. Condizioni su File
E' molto semplice testare *se un file (ovvero sui path) esiste*, *è vuoto* o è *una cartella*
- (*esiste?*): `-a path`: vero se `path` esiste 
- (*è un file o una cartella?*): 
	- `-f path`: vero se `path` è un file
	- `-c path`: vero se `path` è una cartella
- (*non è vuoto?*): `-s path`: vero se `path` non è vuoto
- (*ho i permessi?*)
	- `-r path`: vero se posso leggere `path` 
	- `-w path`: vero se posso scrivere `path` 
	- `-x path`: vero se eseguire/attraversare leggere `path`

**N.B.** Per le condizione si usano le parentesi quadre `[[ ... ]]`, dato che si trattano di stringhe.

**Esempio**: si scriva un programma che legge due path da tastiera. Se sono uguali, controlla che il path corrisponda a una cartella. Se affermativo, stampa il path.

```bash
#!/bin/bash
echo "Inserisci il primo path:"
read s1
echo "Inserisci il secondo path:"
read s2
if [[ $s1 = $s2 ]]
then
    if [[ -d $s1 ]] 
    then
        echo "$s1 è una cartella" 
    else
        echo "$s1 non è una cartella" 
    fi
else
    echo "Le due stringhe non sono uguali"
fi
```


---
# 3. Operatori logici
Si possono creare *condizioni composte* con gli *operatori booleani*
- `&&`: and
- `||`: or
- `!`: not

Sintassi: `if condizione1 && condizione2`
Esempio: `if (( a>b )) && [[ $c="hello" ]]`

**OSS.** Il Bash è un *linguaggio "lazy"*, ovvero nel senso che se abbiamo condizioni composte, verranno eseguite in una maniera più *"ottimale"*; nel senso che se, ad esempio abbiamo `if condizione1 && condizione2` e abbiamo che la *prima condizione* è *falsa*, allora Bash non verrà *mai controllato* (dunque eseguito). Vedremo a seguito come sarà utile questa caratteristica.

**OSS 2.** Ricordandoci che ogni programma deve *fornire un valore di ritorno*, posso utilizzare la precedenza osservazione per eseguire comandi *secondo una logica voluta*
- Ogni comando/programma avviato in bash fornisce alla shell/script chiamante un valore di ritorno
- Per convenzione un comando ritorna: $0$ se successo, $\neq 0$ in caso di errore
	- In bash, il valore $0$ è interpretato come `true`; un valore $\neq 0$ come `false`
	- *NOTA:* diverso da altri linguaggio come C o Java!

**CONSEGUENZA: Utilizzo in espressioni di comandi**
Ora, combinando il fatto che Bash è un *linguaggio lazy* e che i programmi *devono fornire un valore di ritorno*, abbiamo il seguente utilizzo di comandi.
Esegue `comando2` se `comando1` non dà errore
```bash
comando1 && comando2 
```

Esegue `comando2` se `comando1` dà errore
```bash
comando1 || comando2
```

**Esempio:** eseguo `myprog` solo se la compilazione è andata a buon fine
```bash
gcc myprog.c -o myprog && ./myprog
```

**Esempio:** eseguo un gestore dell'errore `gestione_err` se un'istruzione `istruzione` non è andata a buon fine
```bash
istruzione || gestione_err
```

---
# 4. Cicli `for`
Abbiamo *due modi* per esprimere un *ciclo `for`* in Bash.

**1) Versione semplice**
Scelgo un *"iterabile"* (una successione di numeri oppure una stringa) e ci itero, come se fossimo su Python
```bash
for n in 1 2 3 4
do
    echo "valore di n = $n"
done
```

```bash
for nome in mario giuseppe vittorio
do 
    echo "$nome"
done
```

**2) Versione completa**
Questa sintassi si dice *"stile-C*.
**Sintassi:**
```bash
for ((INITIALIZATION; TEST; STEP))
do
  [COMMANDS]
done
```

**Esempio:**
```bash
for ((i = 0 ; i <= 1000 ; i++))
do
  echo "Counter: $i"
done
```

---
# 5. Cicli `while`

**SINTASSI:**
```bash
while condizione
do
...
done
```

**ESEMPI:**
```bash
n=0
while ((n<4))
do
    ((n=n+1))
    echo $n
done
```

```bash
n=0
until((n>4))
do
((n=n+1))
done

```
