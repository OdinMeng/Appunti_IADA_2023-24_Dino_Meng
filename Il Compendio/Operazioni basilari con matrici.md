---
data: 2023-10-12
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Operazioni basilari con matrici
tipologia: appunti
stato: "1"
---
*Definizioni di operazioni con matrici; somma interna $+$, prodotto esterno (scalamento) $\cdot$, l'insieme delle matrici come $\mathbb{R}$-spazio vettoriale con queste operazioni.*
- - -
# 0. Preambolo
Avendo definito la [[Matrice]], andiamo a introdurre delle *operazioni* con delle *matrici* al fine di rendere *l'insieme delle matrici* $M_{m,n}(\mathbb{R})$ ([[Matrice]], **DEF 1.2.**) un $\mathbb{R}$*-spazio vettoriale*. 

# 1. Somma interna
**DEF 1.** Siano $m, n \in \mathbb{N} \diagdown \{0\}$, definiamo la **somma** delle *matrici* $A$ e $B$ e lo denotiamo $A+B$; per definire questa nuova matrice data dalla somma, definiamo *ogni sua entrata*. Quindi *l'entrata di posto* $i,j$ di $A+B$ è data da: $$(A+B)_{ij} := A_{ij} + B_{ij}$$
Qui si utilizza il fatto che per descrivere una *matrice* è sufficiente determinare come ottenere ciascuna delle sue *entrate*.

**ESEMPIO 1.1.** $$\begin{pmatrix} 1 & 2 & 5 \\ -1 & 3 & -2 \end{pmatrix} + \begin{pmatrix}1 &0 &1 \\ 0&-1&0 \end{pmatrix} = \begin{pmatrix}2 &2&6\\-1&2&-2 \end{pmatrix}$$
**OSS 1.1.** La *matrice nulla* ([[Matrice]], **DEF 2.2.**) è in effetti l'*elemento neutro* della somma tra matrici. Infatti questo sarà fondamentale per dimostrare che *l'insieme delle matrici $m \times n$ $M_{m,n}(\mathbb{R})$* è uno $\mathbb{R}$-*spazio vettoriale* ([[Spazi Vettoriali]]).

# 2. Prodotto per scalare (scalamento)
**DEF 2.** Sia $A \in M_{m,n}(\mathbb{R})$ e $\lambda \in \mathbb{R}$; definiamo allora il *prodotto (o la moltiplicazione) per uno scalare $\lambda$* per $A$, come la matrice $(\lambda \cdot A)$, le cui entrate sono ottenute facendo$$(\lambda \cdot A)_{ij} := \lambda \cdot A_{ij}$$ 
**ESEMPIO 2.1.** $$3 \cdot \begin{pmatrix}1 &2&3\\-3&-2&-1 \end{pmatrix} = \begin{pmatrix}3&6&9\\-9&-6&-3 \end{pmatrix}$$
