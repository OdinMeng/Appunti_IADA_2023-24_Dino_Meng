---
data: 2024-01-09
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Prodotto Scalare
tipologia: appunti
stato: "1"
capitolo: Geometria Euclidea (cenni)
---
- - -
*Definizione di prodotto scalare e le proprietà del prodotto scalare.*
- - -
# 0. Voci correlate
- [[Norma, versore e angolo]]
- [[Ortogonalità e ortonormalità]]
# 1. Definizione di Prodotto Scalare
#Definizione 
> [!def] prodotto scalare di due vettori
> Sia $V$ un *spazio vettoriale su $\mathbb{R}$* ([[Spazi Vettoriali#^7e2c4e]]) di *dimensione finita*.
> In particolare si sceglie $V = \mathbb{R}^n$.
> Dati due vettori $v, w \in V$, definiamo il *prodotto scalare* tra $v, w$ come la quantità
> $$v \cdot w \text{ oppure } <v, w> := v_1w_1 + v_2w_2 + \ldots + v_nw_n = \sum_{i=0}^n v_iw_i$$

^228d4c

#Definizione 
> [!def] funzione prodotto scalare
> Definiamo in tal modo la *funzione* prodotto scalare, ovvero una del tipo
> $$\boldsymbol{\cdot} : V \times V \longrightarrow \mathbb{R}$$
> dove $$v \cdot w = \sum_{n \leq i \leq 0}v_iw_i$$

^8840d2

# 2. Proprietà del prodotto scalare
#Proposizione 
> [!prp] la bilinearità del prodotto scalare
> Il prodotto scalare è *bilineare*, ovvero che valgono le seguenti proprietà:
> - $\forall v_1, v_2 \in V, \forall w \in V$, 
>   $$(v_1+v_2)\cdot w = v_1 \cdot w + v_2 \cdot w$$
>  - $\forall \lambda \in \mathbb{R}, \forall v,w \in V$, 
>  $$(\lambda \cdot v)\cdot w = \lambda \cdot (v \cdot w)$$
>  
>  Valgono anche delle analoghe proprietà scambiando $v, w$.

^e88eae


#Osservazione 
> [!rmk] il prodotto scalare tra due vettori uguali
> Sia un $v \in \mathbb{R^2}, v=(v_1, v_2)$ un vettore.
> Allora il prodotto scalare $v \cdot v$ è $v_1^2+v_2^2$.
> Osserviamo che per il *teorema di Pitagora*, questa quantità è proprio la *lunghezza* del vettore $v$ dall'origine $(0,0)$ (*figura 2.1.*)

**FIGURA 2.1.** (*Osservazione 2.1.*)
![[Pasted image 20240109162950.png]]