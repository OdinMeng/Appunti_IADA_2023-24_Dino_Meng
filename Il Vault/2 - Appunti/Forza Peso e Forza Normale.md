---
data: 2024-03-24
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Forza Peso e Forza Normale
tipologia: appunti
stato: "1"
capitolo: Dinamica
---
- - -
*Definizione di forza peso e forza normale ad una superficie. Esempio di forza peso e forza normale di un corpo.*
- - -
# 0. Voci correlate
- [[Principi della Dinamica]]
- [[Definizione di Massa e di Forza]]
# 1. Forza Peso
#Definizione 
> [!def] forza peso
> Supponiamo di avere un corpo con massa $m$. Come ci è noto, in caduta libera il corpo cade con un'accelerazione $g$.
> 
> Quindi per le leggi di Newton, possiamo definire la *forza peso* come la quantità
> $$
> \vec{F}_g = m \vec g = -mg \cdot \hat{j}
> $$
^58d9f1

#Osservazione 
> [!rmk] la forza peso non è necessariamente una forza inerziale
> Anche se la formula $F_g = mg$ assomiglia a $F = ma$, ricordiamo che queste sono *molto diverse*. Infatti, non è detto che le masse $m$ siano necessariamente uguali ([[Definizione di Massa e di Forza#^39cc8c|1]]).
> 
> Inoltre, si nota che
> $$
> \vec{F} = m \vec{g}
> $$
> è un *caso particolare* della *legge gravitazionale universale*; infatti, se si vuole essere più precisi, $\vec{g}$ è un valore al variare in *altezza dal centro della terra e massa della terra*; $\vec{g}=\vec{g}(r_T, m_T)$.

# 2. Forza Normale
#Definizione 
> [!def] forza normale
> Adesso supponiamo di avere un *corpo* su una *superficie* (*figura 2.1.*). Come si potrebbe osservare, questo corpo subisce la *forza peso* ([[#^58d9f1|1]]), tuttavia non è in movimento.
> Allora, per la legge di Newton dev'esserci una forza che si oppone alla forza peso $\vec{F}_g$.
> 
> Si ha infatti la *forza normale*, che è un *caso particolare* di *forza di contatto*; è la *spinta* della superficie. In particolare, il verso di questa forza è *perpendicolare* (ovvero normale) alla superficie.
> 
> La forza normale si denota con $\vec{N}$. 

^990693

**FIGURA 2.1.** (*Corpo su una superficie*)
![[Pasted image 20240324161107.png]]
# 3. Esempio Combinato
#Esempio 
> [!exm] esempio dei due blocchi
> Supponiamo di avere due blocchi, uno posto sopra l'altro  (ovvero la *figura 3.1.*). Conoscendo le sole forze pesi dei corpi, vogliamo trovare la forza normale esercitata su entrambi i corpi.
> 
> Innanzitutto rappresentiamo le forze secondo il *diagramma di corpo libero* ([[Diagramma di Corpo Libero|1]]); ovvero abbiamo al *figura 3.2.*. Adesso, sfruttiamo le *leggi di Newton* ([[Principi della Dinamica#^cbe22b|2]]).
> 
> Innanzitutto posso dire che la forza risultante sul *primo corpo* è
> $$
> \sum \vec{F}_1 = \vec{N}+\vec{N}_{12}+\vec{F}_{g1} = m \vec{a}_1 = 0
> $$
> Parimenti, sul secondo corpo abbiamo
> $$
> \sum \vec{F}_2 = \vec{N}_{21}+\vec{F}_{g2} = m \vec{a}_2 = 0
> $$
> L'obiettivo è di *isolare* la $\vec{N}$. 
> Allora usiamo la terza legge di Newton, per cui $\vec{N}_{12}=-\vec{N}_{21}$. Inoltre, per definizione di forza peso abbiamo $\vec{F}_{g1}=m_1 \vec{g}; \vec{F}_{g2} = m_2 \vec{g}$.
> 
> Infine, combinando tutto ho
> $$
> \begin{align}
> \vec{N} &= - \vec{N}_{12}-\vec{F}_{g1}\\&=\vec{N}_{21}-\vec{F}_{g1}\\  &=-\vec{F}_{g2}-\vec{F}_{g1}  \\ &= -m_2 \vec{g}-m_1 \vec{g} = -(m_1+m_2)\vec{g}
> \end{align}
> $$
> che è la risposta voluta.
^1432b2

**FIGURA 3.1.** (*Situazione iniziale*)
![[Pasted image 20240324161355.png]]

**FIGURA 3.2.** (*Diagramma dei corpi liberi*)
![[Pasted image 20240324162244.png]]
