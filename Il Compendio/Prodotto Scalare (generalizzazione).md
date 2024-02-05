---
data: 2024-01-28
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Prodotto Scalare (generalizzazione)
tipologia: appunti
stato: "1"
capitolo:
---
- - -
*Concetto generalizzato di prodotto scalare. Nota: informazioni prese da "Algebra Lineare" di S. Lang*
- - -
# 1. Prodotto scalare
#Definizione 
> [!def] Definizione 1.1. (prodotto scalare)
> Sia $V$ un *$\mathbb K$-spazio vettoriale*. Un'operazione $<\cdot, \cdot>$ (o denotata anche come $\cdot$) si dice *prodotto scalare* se una funzione del tipo
> $$<\cdot, \cdot>: V \times V \longrightarrow K$$
> e se soddisfa la seguenti tre proprietà:
> SP1. (*commutatività*)
> $$\forall v, w \in V, v \cdot w = w \cdot v$$
> SP2. (*bilinearità*)
> $$\forall u, v, w \in V, u \cdot (v+w) = u \cdot v + u \cdot w$$
> SP3. (*bilinearità*)
> $$\forall \lambda \in K, \forall u, v \in V, (\lambda u) \cdot v = \lambda \cdot (u \cdot v) \land u \cdot (\lambda \cdot v) = \lambda \cdot (u \cdot v)$$
> 
> Inoltre, se l'operazione soddisfa anche la seguente proprietà:
> $$\forall w \in W, v \cdot w = 0 \implies v = 0$$
> allora il prodotto scalare si dice *non degenere*.

#Esempio 
> [!ex] Esempio 1.1.
> Il prodotto vettoriale su $\mathbb{R}^2$ soddisfa le condizioni del prodotto scalare.
> $$\forall u, v \in \mathbb{R}^2; u = (x, y) \land v = (x', y'); u \cdot v = x' x + y' y$$
> ([[Prodotto Scalare#^8840d2]])

#Esempio 
> [!ex] Esempio 1.2.
> Il prodotto scalare sulle funzioni continue (dunque integrabili, ([[Tipologie di Funzioni Integrabili#^dd4f09]])) sull'intervallo $[0, 1]$, ovvero appartenenti all'$\mathbb{R}$-spazio vettoriale $\mathcal{F}$, è definito come il seguente:
> $$\cdot: \mathcal{F} \times \mathcal{F} \longrightarrow \mathbb{R}$$
> del tipo
> $$f \cdot g = \int_0^1 f(t)g(t)  \ \text{d}t$$