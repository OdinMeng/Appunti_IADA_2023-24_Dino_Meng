---
data: 2024-05-25
corso:
  - "[[Analisi Matematica II]]"
argomento: Definizione di n-rettangolo
tipologia: appunti
stato: "1"
capitolo: Calcolo Integrale in più Variabili
---
- - -
*Generalizzazione di intervalli unidimensionali: definizione di $n$-rettangolo su $\mathbb{R}^N$. Definizione di misura $M_n$ su un $n$-rettangolo.*
- - -
# 0. Voci correlate
- [[Intervalli]]
# 1. Definizione di $n$-rettangolo
**Motivazione.** Vogliamo parlare di *integrazione in* $\mathbb{R}^N$, un ambito dell'*analisi matematica* estremamente utile, in particolare per:
- calcolare *aree, superfici, curve* su domini complessi (*misura, geometria*)
- calcolare *quantità fisiche* che richiedono più variabili (*scienza*)
- risolvere alcune *equazioni differenziali a derivate parziali* ([[Definizioni Relative alle Equazioni Differenziali#^40a675]]), note come *P.D.E.* (*matematica*)
Allora, come fatto nel *caso unidimensionale*, bisogna fare delle *considerazioni preliminari* sulle *suddivisioni di intervalli*. Partiamo dalla *generalizzazione del concetto di intervallo* ([[Intervalli#^a1a838]]) in *più variabili*.

#Definizione 
> [!def] $N$-rettangolo
> Si dice *$N$-rettangolo* l'insieme dei *punti* in $\mathbb{R}^N$ formato dal *prodotto cartesiano* degli *intervalli unidimensionali*. Ovvero, dati $(a_1, b_1), \ldots, (a_N, b_N) \in \mathbb{R}^N$ possiamo definire l'$N$-rettangolo $R$ come
> $$
> R=\bigtimes ^N _{i=1} [a_i, b_i]
> $$

^1fa155

# 2. Misura di $n$-rettangoli
Come per *intervalli unidimensionali* possiamo *misurare* la loro lunghezza effettuando la semplice sottrazione $(b-a)$, o per *quadrati* possiamo *moltiplicare base per altezza* $(b_2-a_2)(b_1-a_1)$, possiamo definire la *nozione di misura* su $n$-rettangoli.

#Definizione 
> [!def] misura di $N$-rettangolo
> Si dice la *misura di un $N$-rettangolo $R:=\bigtimes_{i\leq N}[a_i,b_i]$* come la funzione $M_N: \mathbb{R}^N \longrightarrow \mathbb{R}$ definita come
> $$
> M_N(R):=\prod_{i=1}^{N}(b_i-a_i)
> $$

Adesso siamo pronti per *definire* la suddivisione di un $n$-rettangolo $R$.
