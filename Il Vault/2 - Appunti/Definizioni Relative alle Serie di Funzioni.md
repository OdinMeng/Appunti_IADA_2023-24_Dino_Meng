---
data: 2024-03-20
corso:
  - "[[Analisi Matematica II]]"
argomento: Definizioni Relative alle Serie di Funzioni
tipologia: appunti
stato: "1"
capitolo: Successioni e Serie di Funzioni
---
- - -
*Trasposizione teorica della parte relativa alle serie numeriche sulle serie di funzioni. Definizione di serie di funzioni; definizione di convergenza di una serie.*
- - -
# 0. Voci Correlate
- [[Definizione di Serie]]
- [[Carattere di una Serie]]
- [[Convergenza Puntuale e Uniforme per Successioni di Funzioni]]
# 1. Trasposizione teorica
#Osservazione 
> [!rmk] possiamo trasporre tutto ciò che sappiamo sulle serie numeriche alle serie di funzioni
> Avendo studiato bene le *successioni di funzioni*, possiamo *"esportare"* ciò che sappiamo sulle *serie numeriche* alle *serie di funzioni*, con definizioni opportune.

# 2. Definizioni Miste
#Definizione 
> [!def] ridotta di una serie di funzioni
> Sia $(f_n)_n$ una *successioni di funzioni* del tipo $f_n: E \longrightarrow \mathbb{R}$ Per ogni punto nel dominio $x \in E$ definisco la *ridotta* $n$-*esima* della serie di funzioni come
> $$
> s_n(x):=f_1(x)+\ldots+f_n(x)
> $$

#Definizione 
> [!def] serie di funzioni
> La somma formale
> $$
> \sum^{+\infty}_{n\in\mathbb{N} }f_n(x)
> $$
> si dice *serie di funzioni*.

#Definizione 
> [!def] convergenza di una serie
> Sia $\sum_n f_n(x)$ una serie di funzioni. Se la successione delle ridotte $(s_n)_n$ (*ricordiamoci che è una funzione!*) converge *uniformemente* (o *puntualmente*) ad una funzione $s(x)$ definita sul medesimo dominio $E$, allora si dice che la *serie* $\sum_n f_n(x)$ *converge uniformemente* (o *puntualmente*) su $E$ con *somma* $s(x)$.

