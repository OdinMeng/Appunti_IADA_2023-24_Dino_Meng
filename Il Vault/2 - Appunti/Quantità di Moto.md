---
data: 2024-04-22
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Quantità di Moto
tipologia: appunti
stato: "1"
capitolo: Energia e Quantità di Moto
---
- - -
*Richiamo alla seconda legge di Newton, preliminare. Definizione di quantità di moto per un punto materiale, per 2 punti materiali e per un sistema di punti materiali. Proprietà fondamentale: la conservazione della quantità di moto.*
- - -
# 0. Voci correlate
- [[Principi della Dinamica]]
- [[Sistema e Ambiente]]
# 1. Richiamo Preliminare alla Dinamica
**RICHIAMO A NEWTON.** Richiamiamo la *seconda legge di Newton* ([[Principi della Dinamica#^cbe22b|1]]), che ci dice il seguente:
$$
\sum \vec{F}=m \vec{a}
$$
Trattando la *massa* come un *quantità costante*, possiamo scrivere che la forza non è altro che la derivata
$$
\sum \vec{F}=m\frac{\text{d}\vec{v}}{\text{d}t}=\frac{\text{d} }{\text{d}t}(m\vec{v})
$$
Quindi possiamo definire la quantità a destra in una *maniera ben posta*.

# 2. Definizioni di Quantità di Moto
#Definizione 
> [!def] quantità di moto per un punto puntiforme
> Si definisce la *quantità di moto* (o in inglese *"momentum"*) per un *punto materiale* avente massa $m$ con velocità $\vec{v}$ come la grandezza vettoriale
> $$
> \boxed{\vec{p}:=m\vec{v}}
> $$
> quindi abbiamo che
> $$
> \sum \vec{F} = \frac{\text{d} }{\text{d}t}\vec{p}
> $$
> e in particolare
> $$
> K=\frac{1}{2}\frac{p^2}{m}
> $$

#Teorema 
> [!thm] quantità di moto per due o più punti
> Supponiamo di *avere due punti* o *al più numerabile punti*, $m_1, m_2,\ldots$ all'interno del *sistema* $\Sigma$. 
> 
> Chiamando $\vec{X_1}, \vec{X}_2, \ldots$ le *forze esterne agenti sui corpi* e $\vec{F}_{12},\vec{F}_{21}, \ldots$ le *forze interne*, abbiamo che vale
> $$
> \left\{\begin{align}&\vec{X}_1 +\vec{F}_{12}+\ldots+\vec{F}_{1n}=\frac{\text{d} }{\text{d}t}\vec{p}_1 \\ &\vec{X}_2 + \vec{F}_{21}+\ldots+\vec{F}_{2n}=\frac{\text{d} }{\text{d}t }\vec{p}_2\\ &\vdots\end{align}\right.
> $$
> Prendo la *forza del sistema*, abbiamo che le *forze interne si cancellano* e quindi abbiamo
> $$
> \boxed{\sum_{i \in \Sigma}\vec{X}_i=\frac{\text{d} }{\text{d}t} \vec{p}_{\Sigma} }
> $$
> ovvero *"la derivata della quantità di moto è determinata dalle forze esterne sul sistema"*.

**FIGURA 2.1.** (*L'idea per caso di due o più punti*)
![[Pasted image 20240422211712.png]]

#Corollario 
> [!cor] conservazione di quantità del moto
> Sia $\Sigma$ un sistema di punti puntiformi. Se la risultante delle *forze esterne* è nulla, ovvero
> $$
> \sum_{i \in \Sigma}\vec{F}_{\text{ext},i}=0
> $$
> Allora *non ho nessun cambiamento nel moto*. Ovvero, la quantità del moto $p$ è *costante*.

