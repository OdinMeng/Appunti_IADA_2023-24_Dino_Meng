---
data: 2024-05-12
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Principio di Archimede
tipologia: appunti
stato: "1"
capitolo: Solidi e Fluidi
---
- - -
*Principio di Archimede.*
- - -
# 1. Principio di Archimede
#Teorema 
> [!thm] principio di Archimede
> Supponiamo che un cubo avente volume $\Delta V$ e massa $m$. Sia $\rho$ la densità del fluido. 
> 
> Allora sul corpo si esercita una *forza esterna*, detta la *"spinta di Archimede"* che è calcolata come segue
> $$
> F_f = -\Delta V \cdot \rho g
> $$
> Più generalmente, se non ho un cubo ho
> $$
> \sum \vec{F}_{\text{ext} } = m_{\text{cubo} }\vec{g}-\Delta V \cdot \rho \vec{g}
> $$
^d38569

**FIGURA 1.1.** (*Principio di Archimede*)
![[Pasted image 20240512222046.png|500]]

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^d38569]]
Supponiamo di avere l'*equilibrio meccanico*, ovvero la *risultante delle forze esterne* è nulla. Da cui ho
$$
\sum \vec{F}=\vec{P}=0
$$
Per far *"sparire"* la forza peso, suppongo una nuova forza $\vec{F}_f$ e la pongo uguale a $-\vec{P}$. Così soddisfo l'equilibrio meccanico. In particolare ho
$$
\vec{F}_f = -mg = -\Delta V \rho g
$$
A questo punto posso decidere che $\vec{F}_f$ è *sempre uguale*, indipendentemente da cosa è contenuto nel cubo (in altre parole posso far variare $\rho$). Posso pure generalizzare per il *caso non ho l'equilibrio meccanico*.

#Corollario 
> [!cor] determinare se un corpo galleggia o meno
> Per determinare se un corpo galleggia o meno, è sufficiente *confrontare* la *densità del fluido* con la *densità del corpo*. Chiamiamo la densità del fluido $\rho_\sim$ e la densità del corpo $\rho$.
> 
> i. *Galleggia* solo se $\rho_{\sim} > \rho$
> ii. *Affonda* solo se $\rho > \rho_\sim$
> iii. *Non succede niente* solo se $\rho = \rho_\sim$

