---
data: 2023-12-09
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Definizione di Sottospazio Affine
tipologia: appunti
stato: "1"
capitolo: Geometria Affine
---
- - -
*Definizione di Sottospazio Affine, esempio e definizione di dimensione per sottospazio affine.*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Spazi Vettoriali]]
- [[Dimensione]]
- [[Definizione di Spazio Affine]]
- [[Spazio Affine su K]]
# 1. Definizione di Sottospazio Affine
#Definizione 
> [!def] Definizione 1.1. (sottospazio affine passante per Q e parallelo a W)
> Sia $\mathbb{A}$ uno *spazio affine* su $V$ ([[Definizione di Spazio Affine#^100c32]]) e consideriamo un *punto* $Q \in \mathbb{A}$ e un *sottospazio vettoriale* $W \subseteq V$ ([[Sottospazi Vettoriali#^9bcbf2]]).
> Definiamo allora il *sottospazio affine passante per $Q$ e parallelo a $W$* il seguente insieme:
> $$\mathbb{S} := \{ P \in \mathbb{A} \ | \ \overrightarrow{QP} \in W \} \subseteq \mathbb{A} $$
> Ovvero *"l'insieme di tutti i punti di uno spazio affine tali che l'applicazione $\sigma$ di un punto qualsiasi e $Q$ stia in $W$"*.
> Inoltre, diciamo che il *sottospazio vettoriale* $W$ è la *giacitura* di $\mathbb{S}$.
^a1f242

# 2. Esempio su R2
#Esempio 
> [!ex] Esempio 2.1. (esempio di sottospazio affine su $\mathbb{A}^2_\mathbb{R}$)
> Consideriamo lo *spazio affine* $\mathbb{A}^2_\mathbb{R}$ con $V = \mathbb{R}^2$ ([[Spazio Affine su K#^30176a]]).
> Prendiamo il punto $Q = (2,1)$ e $W = \operatorname{span}(\begin{pmatrix} 1 \\ 1\end{pmatrix})$.
> Allora vogliamo sapere *"chi è lo sottospazio affine $\mathbb{S}$"*.
> Scriviamo innanzitutto la definizione dello sottospazio affine e vediamo di *"analizzarlo"*:
> $$\begin{align}\mathbb{S} & = \{P \in \mathbb{A}^2_\mathbb{R} : \overrightarrow{QP} \in W \} \\ &= \left\{(x_1, x_2): \begin{pmatrix}x_1 - 2 \\ x_2-1 \end{pmatrix} \in \operatorname{span}\begin{pmatrix} 1 \\ 1\end{pmatrix}\right\} \\ &= \left\{(x_1,x_2): \begin{pmatrix}x_1 -2 \\ x_2-1\end{pmatrix} = t \begin{pmatrix}1 \\ 1 \end{pmatrix}, t \in \mathbb{R} \right\} \\ &= \left\{(x_1,x_2): \begin{pmatrix}x_1 -2 \\ x_2-1\end{pmatrix} = \begin{pmatrix}t \\ t \end{pmatrix}, t \in \mathbb{R} \right\} \\ &= \left\{(x_1,x_2): \begin{cases}x_1 = 2+t \\ x_2 = 1+t \end{cases} \ , t \in \mathbb{R} \right\}  \end{align}$$
> Vedremo in seguito che questa è la *forma parametrica* della descrizione di un *sottospazio vettoriale* e questa ci permette di *"generare"* tutti i possibili punti di $\mathbb{S}$ che vogliamo, ponendo $t$ per un qualsiasi numero.
# 3. Dimensione di Sottospazio Affine
#Definizione 
> [!def] Definizione 3.1. (dimensione di sottospazio affine)
> Sia $\mathbb{A}$ uno *sottospazio affine* su $V$ e sia $\mathbb{S} \subseteq \mathbb{A}$ un *sottospazio affine* di *giacitura* $W$.
> Diciamo che la *dimensione* ([[Dimensione#^3a9321]]) di $\mathbb{S}$ è la medesima della sua *giacitura* $W$.
> $$\boxed{\dim \mathbb{S} := \dim W}$$

^e4d250

