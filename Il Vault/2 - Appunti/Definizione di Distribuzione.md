---
data: 2024-03-30
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Definizione di Distribuzione
tipologia: appunti
stato: "0"
capitolo:
---
- - -
*Definizione di distribuzione di una v.a.. ... (?)*
- - -
# 0. Voci correlate
- [[Strutture Matematiche della Probabilità]]
- [[Spazio di Probabilità Discreto]]
- [[Definizione di Variabile Aleatoria]]
# 1. Definizione di Distribuzione
#Osservazione 
> [!rmk] la situazione con le variabili aleatorie
> Con le *variabili aleatorie* abbiamo creato la situazione nella *figura 1.1.*; ovvero abbiamo una funzione che trasforma $\Omega \to \mathbb{R}$, un'altra funzione che trasforma $\mathcal{A}\to[0,1]$. Inoltre, abbiamo creato uno nuovo spazio che comprende $\mathbb{R}, \mathcal{B}$.
> 
> Cosa manca? Esatto, un modo per associare $\mathcal{B}\to[0,1]$. A seguito vedremo un modo per definire tale funzione.

**FIGURA 1.1.** (*La situazione con le v.a.*)
![[Pasted image 20240330152111.png]]

#Definizione 
> [!def] distribuzione su una v.a.
> Data una variabile aleatoria $X$, definiamo una *distribuzione* (o *legge*) di $X$ come una funzione definita come la composizione
> $$
> p_x = p\circ X^{-1}
> $$
> oppure, usando le notazioni della probabilità, abbiamo
> $$
> p_x(B)=p(\{X \in B\}), \forall B \in \mathcal{B}
> $$
> (*così si vede che la definizione è ben posta*)

