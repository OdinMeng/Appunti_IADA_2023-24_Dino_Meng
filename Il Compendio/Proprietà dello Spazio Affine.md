---
data: 2023-12-09
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Proprietà dello Spazio Affine
tipologia: appunti
stato: "1"
capitolo: Geometria Affine
---
- - -
*Lemma di proprietà dello spazio affine, scaturite dalle proprietà di definizione.*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Spazi Vettoriali]]
- [[Definizione di Spazio Affine]]
# 1. Proprietà dello Spazio Affine
#Lemma 
> [!lem] di proprietà dello spazio affine
> Sia $\mathbb{A}$ uno *spazio affine* su $V$ ([[Definizione di Spazio Affine#^100c32]], [[Spazi Vettoriali#^7e2c4e]]).
> Allora valgono le seguenti proprietà.
> $$\begin{align}& 1. \ \forall P \in \mathbb{A}, \sigma(P,P) = \overrightarrow{PP} = 0_V \\ & 2. \ \forall P,Q \in \mathbb{A}, \sigma(P,Q) = -\sigma(Q,P) \iff \overrightarrow{PQ} = -\overrightarrow{QP} \end{align}$$

#Dimostrazione 
**DIMOSTRAZIONE** del *lemma 1.1.*
Le due proprietà seguono dalle *proprietà di definizione* SA1., SA2. dello *spazio affine* ([[Definizione di Spazio Affine#^100c32]]).
1. Devo mostrare che per ogni *vettore* $v \in V$ vale
   $$v + \overrightarrow{PP} = v$$
   in quanto il vettore $\sigma(P,P) = 0_V$.
   Allora per la *SA1.* della proprietà di definizione, vale che
   $$\exists! Q \in \mathbb{A}: v = \overrightarrow{PQ}$$
   Ma allora si ha
   $$\overrightarrow{PQ}+\overrightarrow{PP}  = \overrightarrow{PP} + \overrightarrow{PQ} = \overrightarrow{PQ} = v$$
2. Devo mostrare la somma
   $$\overrightarrow{PQ} + \overrightarrow{QP} = 0_V$$
   Ma allora
   $$\overrightarrow{PQ} + \overrightarrow{QP} \stackrel{\text{SA1}}= \overrightarrow{PP} = 0_V \ \blacksquare$$
