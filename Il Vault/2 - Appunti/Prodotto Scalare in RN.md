---
data: 2024-03-29
corso:
  - "[[Analisi Matematica II]]"
argomento: Prodotto Scalare in RN
tipologia: appunti
stato: "1"
capitolo: Struttura di R^N
---
- - -
*Osservazione: $\mathbb{R}^N$ è un $\mathbb{R}$-spazio vettoriale. Definizione di prodotto scalare in $\mathbb{R}^N$, proprietà del prodotto scalare. Definizione di spazio dotato di prodotto scalare.*
- - -
# 0. Voci correlate
- [[Spazi Vettoriali]]
- [[Prodotto Scalare]]
- [[Definizione di RN]]
# 1. Il Prodotto Scalare su $\mathbb{R}^N$
#Osservazione 
> [!rmk] $\mathbb{R}^N$ è un spazio vettoriale
> Osserviamo che $\mathbb{R}^N$ è un *spazio vettoriale* su $\mathbb{R}$ con le operazioni di *somma* $+$ e *scalamento* $\cdot$.
> Possiamo quindi *applicare le definizioni relative ai spazi vettoriali*, partendo dalla nozione di *prodotto scalare euclideo* ([[Prodotto Scalare#^228d4c]]).

#Definizione 
> [!def] prodotto scalare euclideo
> Siano $\underline{x}, \underline{y} \in \mathbb{R}^N$ dei vettori, con $\underline{x}=(x_1,\ldots,x_N)$ e $\underline{y}=(y_1,\ldots,y_N)$. 
> Si definisce il *prodotto scalare euclideo* come l'operazione
> $$
> \langle x, y \rangle := x_1y_1+\ldots+x_Ny_N = \sum^N_{i=1}x_iy_i
> $$

#Proposizione 
> [!prp] le proprietà del prodotto scalare
> Come visto ([[Prodotto Scalare#^e88eae|1]]), il prodotto scalare soddisfa le seguenti proprietà. Come ipotesi iniziali prendiamo
> $$
> \forall \underline{x},\underline{y} ,\underline{z} \in \mathbb{R}^N, \forall \lambda, \mu \in \mathbb{R}
> $$
> i. *bilinearità*
> $$
> \langle \lambda \underline{x}+ \mu \underline{y}, \underline{z}\rangle =\lambda \langle \underline{x}, \underline{z} \rangle + \mu \langle \underline{y}, \underline{z} \rangle
> $$
> ii. *simmetria*
> $$
> \langle \underline{x}, \underline{y}\rangle = \langle \underline{y}, \underline{x} \rangle
> $$
> iii. *forma positiva*
> $$
> \langle \underline{x}, \underline{x}\rangle \geq 0 \land \langle \underline x , \underline x \rangle = 0 \iff \underline{x} = \underline 0 = (0,\ldots,0)
> $$
^ec85cf

# 2. Definizione Generalizzata di Prodotto Scalare
#Definizione 
> [!def] prodotto scalare e spazio dotato di prodotto scalare
> Sia $V$ un $\mathbb{R}$-spazio vettoriale. 
> Un'applicazione del tipo
> $$
> \langle \cdot, \cdot \rangle : V \times V \longrightarrow \mathbb{R}
> $$
> che verifica le proprietà *i.*, *ii.*, *iii.* della *proposizione 3* ([[#^ec85cf|1]]) si dice *"prodotto scalare"*.
> 
> La coppia $(V, \langle \cdot, \cdot \rangle)$ si dice *"spazio dotato di prodotto scalare"*.
