---
data: 2024-03-29
corso:
  - "[[Analisi Matematica II]]"
argomento: Norma Euclidea in RN
tipologia: appunti
stato: "1"
capitolo: Struttura di R^N
---
- - -
*Definizione di norma euclidea in $\mathbb{R}^N$. Legame tra norma e distanza. Proprietà della norma. Disuguaglianza di Cauchy-Schwarz.*
- - -
# 0. Voci correlate
- [[Norma, versore e angolo]]
- [[Prodotto Scalare in RN]]
- [[Definizione di RN]]
- [[Topologia in RN]]
# 1. Definizione di Norma Euclidea in $\mathbb{R}^N$
#Definizione 
> [!def] norma euclidea in $\mathbb{R}^N$
> Definiamo per un qualsiasi vettore $\underline{x} \in \mathbb{R}^N$ la sua *norma* come
> $$
> \lVert\underline{x} \rVert := \sqrt{\langle\underline{x}, \underline{x} \rangle} = \sqrt{\sum_{i=1}^{N} x_i^2}
> $$

#Osservazione 
> [!rmk] legame tra norma e distanza
> Osserviamo che vale la seguente *relazione* tra *norma* $\lVert \cdot \rVert$ e la distanza $d(\cdot, \cdot)$.
> $$
> \lVert \underline{x} \rVert = d(\underline{x}, 0) \land d(\underline{x}, \underline{y}) = \lVert \underline{x}-\underline{y} \rVert
> $$

# 2. Disuguaglianza di Cauchy-Schwarz
#Teorema 
> [!thm] disuguaglianza di Cauchy-Schwarz
> Osserviamo che vale la seguente disuguaglianza per $\underline{x}, \underline{y} \in \mathbb{R}^N$.
> $$
> \lvert \langle \underline{x}, \underline{y} \rangle \rvert \leq \lVert \underline{x}\rVert \cdot \lVert \underline{y} \rVert
> $$
> Inoltre vale l'*uguaglianza* se e solo se $\underline{x}, \underline{y}$ sono *linearmente indipendenti*.
^a525b6

# 3. Proprietà della norma
#Proposizione 
> [!prp] proprietà della norma
> Sia $\lVert \cdot \rVert$ la *norma* su $\mathbb{R}^N$. Allora valgono le seguenti.
> i.
> $$
> \lVert \underline{x} \rVert = 0 \iff \underline{x} = \underline{0}
> $$
> ii. 
> $$
> \lVert \lambda\underline{x} \rVert = \lvert \lambda \rvert \lVert \underline{x} \rVert 
> $$
> iii. 
> $$
> \lVert \underline{x} + \underline{y}\rVert\leq \lVert \underline x \rVert + \lVert \underline{y} \rVert
> $$
^db3cdc

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^db3cdc]]
Omessa. Il punto iii. può essere dimostrato con la *disuguaglianza di Cauchy-Schwarz* ([[#^a525b6]]). $\blacksquare$

#Osservazione 
> [!rmk] possiamo dimostrare la disuguaglianza triangolare
> Con gli strumenti appena appresi, possiamo *dimostrare formalmente* la *disuguaglianza triangolare* ([[Definizione di Spazio Metrico#^740289]]). Infatti, ho che
> $$
> \lVert \underline{x}+\underline{y}\rVert  = \rVert \underline{x}- (-\underline{y}) \rVert =d(\underline{x}, \underline{y} ) \leq \rVert \underline{x}\lVert + \lVert \underline{y} \rVert = d(\underline{x},\underline{0})+d(\underline{y},\underline{0}) 
> $$
> che è la tesi per $\underline{z}=\underline{0}$.
