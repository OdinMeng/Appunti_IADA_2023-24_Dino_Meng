---
data: 2024-04-23
corso:
  - "[[Analisi Matematica II]]"
argomento: Segno di una Matrice
tipologia: appunti
stato: "1"
capitolo: Ottimizzazione in più variabili
---
- - -
*Nozione preliminare per l'ottimizzazione dei liberi: segno delle matrici.*
- - -
# 0. Voci correlate
- [[Forme Lineari e Quadratiche]]
- [[Matrice]]
- [[Determinante]]
# 1. Definizione del Segno di una Matrice
Prima di enunciare un *criterio* per *distinguere i punti critici*, definiamo il segno di una matrice (nozioni che useremo poi sulla matrice hessiana).

#Definizione 
> [!def] segno di una matrice
> Sia $A \in M_{m,n}(\mathbb{R})$ una matrice. Sia $Q: \mathbb{R}^N \longrightarrow \mathbb{R}$ la sua *forma quadratica* associata ([[Forme Lineari e Quadratiche#^a75fd5|1]]).
> 
> Dato un qualsiasi $\underline{h} \neq \underline{0}$, si dice che $Q$ è:
> - *Positiva* se $Q(\underline{h})>0$
> 	- *Semipositiva* se $Q(\underline{h}) \geq 0$
> - *Negativa* se $Q(\underline{h})<0$
> 	- *Seminegativa* se $Q(\underline{h}) \leq 0$
> - *Indefinita* se $\exists \underline{u},\underline{v} \in \mathbb{R}^N$ tali che
> $$
> Q(\underline{v})<0<Q(\underline{u})
> $$
> 
> Si definisce il *segno della sua matrice* come il *segno della sua forma quadratica* $Q$.

Vediamo delle *condizioni equivalenti* per classificare la *positività* e la *negatività* della matrice.

#Proposizione 
> [!prp] condizioni equivalenti per la positività e la negatività del segno
> Sia $Q$ una *forma quadratica*. Si ha che
> $$
> Q \ \text{positiva} \iff Q(\underline{h}) \geq m\lVert \underline{h}\rVert^2, \forall \underline{h} \in \mathbb{R}^N
> $$
> e
> $$
> Q \ \text{negativa} \iff Q(\underline{h}) \leq m\lVert \underline{h}\rVert^2, \forall \underline{h} \in \mathbb{R}^N
> $$
^7e7e3c

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^7e7e3c]].
Omessa. $\blacksquare$

# 2. Criterio di Sylvester
Vediamo il teorema più utile per poter classificare il segno della matrice.

#Teorema 
> [!thm] criterio di Sylvester
> Sia $Q: \mathbb{R}^N \longrightarrow \mathbb{R}$ una *forma quadratica* con $Q(\underline{h})=\langle A \cdot \underline h, \underline{h}\rangle$. Sia $A$ una matrice simmetrica ($A={}^t A$).
> 
> Allora si ha che:
> $$
> Q>0 \iff \left\{ \begin{align}&\det A_1 = a_{11}>0 \\&\det A_2 = \det\begin{pmatrix}  a_{11} & a_{12} \\ a_{12} & a_{22}\end{pmatrix}>0 \\ &\vdots \\ &\ \det A_N = \det A >0  \end{align}\right.
> $$
> Ovvero prendendo *tutte le determinanti di ogni sottomatrice di $A$* ho solo numeri positivi
> 
> Inoltre ho che
> $$
> Q<0 \iff \left\{ \begin{align}&\det A_1 = a_{11}>0 \\&\det A_2 = \det\begin{pmatrix}  a_{11} & a_{12} \\ a_{12} & a_{22}\end{pmatrix}<0 \\ &\vdots \\ &\ (-1)^N\det A_N = (-1)^N\det A >0  \end{align}\right.
> $$
> Ovvero prendendo *tutte le determinante di ogni sottomatrice di $A$* ho un'oscillazione tra il negativo-positivo.
> 
> Se non vale nessuna delle condizioni equivalenti, si dice che il segno della $Q$ è *indefinita*.

#Esempio 
> [!exm] caso $N=2$
> Abbiamo che
> $$
> \begin{align}
> &Q>0 \iff a_{11}>0 \land \det A >0 \\
> & Q<0 \iff a_{11}<0 \land \det A >0 \\
> & Q  \not \gtrless 0 \text{ (indeterminata) } \iff a_{11}\in \mathbb{R} \land \det A < 0
> \end{align}
> $$

Adesso siamo pronti per enunciare il *test della Hessiana*.