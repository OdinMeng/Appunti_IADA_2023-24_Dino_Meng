---
data: 2024-03-05
corso:
  - "[[Analisi Matematica II]]"
argomento: Integrali Impropri Notevoli
tipologia: appunti
stato: "1"
capitolo: Fondamenta degli Integrali Generalizzati
---
- - -
*Alcuni integrali impropri notevoli, sotto forma di teoremi. Integrali impropri su intervalli illimitati e limitati.*
- - -
# 1. Integrali Impropri delle Funzioni Campione
#Osservazione 
> [!rmk] l'idea di studiare il comportamento delle "funzioni campione"
> L'idea di questa sezione è quella di trovare alcune *funzioni campione*, che diventeranno dei *strumenti di confronto* per stimare alcuni *integrali* che potrebbero risultare difficili da *calcolare*. Infatti, si vedrà di usare questi integrali impropri notevoli con dei *teoremi di confronto*.

#Teorema 
> [!thm] integrali impropri su semirette
> A. *Semiretta verso destra*
> Sia $J=[a, +\infty)$ con $a > 0$.
> Si ha l'equivalenza
> $$
> \int_a^{+\infty}\frac{1}{x^\alpha}\text{ d}x  \text{ esiste finito} \iff \alpha >1
> $$
> B. *Semiretta verso sinistra*
> Sia $J = (-\infty, b]$ con $b<0$.
> Si ha l'equivalenza
> $$
> \int_{-\infty}^b \frac{1}{|x|^\alpha}\text{ d}x \text{ esiste finito} \iff \alpha > 1
> $$
^84083f

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^84083f]].
Per la dimostrazione di questo teorema è sufficiente considerare le primitive delle funzioni
$$
\frac{1}{x^\alpha}
$$
considerando per $\alpha=1$ e $\alpha \neq 1$. $\blacksquare$

#Teorema 
> [!thm] integrali impropri su intervalli limitati
> A. *Aperto a destra*
> Sia $J=[a, b)$ con $0 \leq a < b < +\infty$.
> Si ha l'equivalenza
> $$
> \int_a^b \frac{1}{(b-x)^\alpha} \text{ d}x \text{ esiste finito} \iff \alpha < 1
> $$
> B. *Aperto a sinistra*
> Sia $J=(a, b]$ con $0 \leq a < b < +\infty$. 
> Si ha l'equivalenza
> $$
> \int_a^b \frac{1}{(x-a)^\alpha} \text{ d}x \text{ esiste finito} \iff \alpha < 1
> $$

# 2. Applicazione alla Probabilità
#Osservazione 
> [!rmk] applicazione degli integrali impropri nella probabilità
> Nella probabilità, si ha che le *funzioni* rappresentano la *densità di probabilità* per un certo evento.
> Ad esempio si ha la *distribuzione normale*
> $$
> \phi = \left(\int_{-\infty}^{+\infty} e^{\frac{1}{2}t^2} \text{ d}t \right)\frac{1}{\sqrt{2\pi}}
> $$
> (*figura 2.1.*). Per calcolare la probabilità di uno o più eventi si prende semplicemente l'*integrale di un pezzo sotto la curva*.

**FIGURA 2.1.** (*la distribuzione normale*)
![[Pasted image 20240305160639.png]]
