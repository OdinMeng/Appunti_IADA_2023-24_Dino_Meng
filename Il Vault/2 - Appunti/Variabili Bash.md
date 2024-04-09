---
data: 2024-03-19
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Variabili Bash
tipologia: appunti
stato: "1"
capitolo: Linguaggio Bash
---
- - -
*Variabili in bash: concetti preliminari (denominare variabili; leggere e stampare variabili; accedere variabili; variabili numerici e di stringhe), quoting per le stringhe e operazioni matematiche con le variabili (numerici)*
- - -
# 1. Concetti preliminari per le Variabili
**REGOLE PER LA DENOMINAZIONE DELLE VARIABILI.**
1. Sono una combinazione illimitata di lettere, numeri e underscore.
2. *Non* possono *cominciare con numeri* e sono *CASE sensitive*.

**COMANDO READ PER LEGGERE LE VARIABILI DA STDIN.**
Istruzione `read nomevar` (stesso compito di `scanf`)
```bash
read nome
```

**COMANDO ECHO PER STAMPARE LE VARIABILI SU STDOUT.**
Si utilizza `echo` (stesso compito di `printf`)
```bash
echo "Testo su schermo"
```

**ACCESSO ALLE VARIABILI.**
Si accede con `$nomevar`.

```bash
read x  # Legge X da terminale
y=$x    # Assegna a y il valore di x
echo $y # Stampa quanto letto
```

**I DUE TIPI DI VARIABILI.**
I tipi principali sono solo i seguenti:
- **Stringhe**: `a="testo"`
- **Interi**: `a=47`

**Nota**: non inserire spazi prima e dopo ` = ` durante assegnazione

- - -
# 2. Quoting per le stringhe
Le stringhe vanno racchiuse tra `"`  o tra `'`.
Il carattere `\` indica il quoting. Permette di usare nella stringa *il carattere di quoting* (un'escape se vuoi)

**Esempio**:
`a="ciao"` indica la stringa `ciao`
`a='ciao a tutti'` indica la stringa `ciao a tutti`
`a="ha detto: \"ciao\""` indica la stringa `ha detto: " ciao"`

**DIFFERENZE TRA QUOTING IN `'` E IN `"`.**
Le stringhe definite con `"` possono contenere delle variabili che vengono valuate.
```bash
a="test"
b="this is a $a"
c='this is a $a'
```
La variabile `b` contiene `this is a test`
La variabile `c` contiene `this is a $a`

**Esempio generale**: leggere due stringhe da tastiera e stamparle.
```bash
read a
read b
echo $a $b
```

---
# 3. Operazioni Matematiche con le Variabili
*Solo numeri interi con segno* (ovvero *non* esistono i *float*)
- Se si usano valori floating non segnala errore ma fa i *calcoli con numeri interi* (ovvero il risultato verrà *troncato*)

Operazioni ammesse:	`+` `-` `*`	`/`	`%`	`<<` `>>` `&` `^`(or esc.)	`|`

**SINTASSI.**
L'espressione `$(( var1 + var2 ))` restituisce la somma di due variabili
Alternativamente scrivere `$(( $var1 + $var2 ))` è equivalente (quindi il *dollaro* qui non è importante)

**ESEMPIO**: Si scriva un programma che legge due interi da tastiera e stampa il prodotto
```bash
#!/bin/bash
read a
read b
c=$(( a * b ))
echo "Il prodotto è $c"
```

**Note**:
Osservare la forma `c=$(( a * b ))`
Osservare la concatenazione naturale in `echo "Il prodotto è $c"`
