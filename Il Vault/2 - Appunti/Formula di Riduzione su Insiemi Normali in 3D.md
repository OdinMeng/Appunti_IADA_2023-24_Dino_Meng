---
data: 2024-06-02
corso:
  - "[[Analisi Matematica II]]"
argomento: Formula di Riduzione su Insiemi Normali in 3D
tipologia: appunti
stato: "1"
capitolo: Calcolo Integrale in più Variabili
---
- - -
*Formule di riduzione su insiemi normali in $\mathbb{R}^3$: definizione di insieme normale rispetto ad un piano, formule di riduzione per corde e per sezioni.*
- - -
# 0. Voci correlate
- [[Formule di Riduzione in 3D]]
# 1. Riduzione per Corde
Adesso vediamo una serie di formule per il *caso* $\mathbb{R}^{N=3}$: al posto di curve che definiscono *insiemi normali* abbiamo *superfici*. Vediamo il caso *analogo* alla *riduzione per corde* ([[Formule di Riduzione in 3D#^0f97d0]]).

#Definizione 
> [!def] insieme normale rispetto ad un piano
> Sia $K$ un *insieme compatto-misurabile secondo Peano-Jordan* in $\mathbb{R}^2$ ([[Cenni alla Misura di Peano-Jordan#^325d78|1]]), su cui definiamo le funzioni $\varphi, \psi: K\longrightarrow \mathbb{R} \in \mathcal{C}^0(K)$, tali che $\forall(x,y) \in \mathbb{R}^2, \varphi(x,y) \leq \psi(x,y)$.
> 
> Allora l'insieme
> $$
> E = \left\{(x,y,z) \in \mathbb{R}^3 : (x,y) \in K, \varphi(x,y) \leq z \leq \psi(x,y)\right\}
> $$
> Si dice *normale rispetto al piano* $xy$. Scambiando eventuali variabili, possiamo definire insiemi normali rispetto al piano $xz, yz$.

#Proposizione 
> [!prp] 
> Gli insiemi normali in $\mathbb{R}^3$ sono *compatti-misurabili in $\mathbb{R}^3$*.

**FIGURA 1.1.** (*Insiemi normali rispetto al piano $xy$*)
![[Pasted image 20240602212149.png]]

#Teorema 
> [!thm] formula di riduzione per corde
> Sia $f:E \subseteq \mathbb{R}^3 \longrightarrow \mathbb{R} \in \mathcal{C}^0$ con $E$ un *insieme normale* rispetto al piano $xy$, definito da $\psi, \varphi$ su $K$. 
> 
> Allora $f \in \mathcal{R}(E)$ e vale la formula
> $$
> \boxed{\iiint_E f(x,y,z) \text{ d}x \text{ d}y \text{ d}z = \iint_K \left(\int_{\varphi(x,y)}^{\psi(x,y)}f(z)\text{ d}z\right) \text{ d}x \text{ d}y}
> $$
> L'idea del teorema è quello di *fissare un punto* $(x,y)$ in $K$ e integrare la restrizione $f_{|(x,y)}$ sulla retta $z$.

**FIGURA 1.2.** (*Integrazione per corde*)
![[Pasted image 20240602212958.png]]

# 2. Riduzione per Sezioni
#Definizione 
> [!def] insieme sezionabile in 3D
> Sia $E$ un *insieme compatto-misurabile* in $\mathbb{R}^3$. Si dice che $E$ è *sezionabile rispetto all'asse* $z$ se ponendo
> $$
> \left \{
> \begin{align}
> & m_z:= \min\{z \in \mathbb{R}: (x,y,z) \in E\} \\
> & M_z := \max \{z \in \mathbb{R}: (x,y,z) \in E\}
> \end{align}
> \right.
> $$
> si ha che $m_z < M_z$ e vale che prendendo un valore arbitrario $\bar{z} \in [m_z, M_z]$ da cui si la sua sezione associata $S_\bar{z}:=\{(x,y) \in \mathbb{R}^2: (x,y, \bar{z}) \in E\}$ essa è misurabile (ovvero $S_\bar{z} \in \mathcal{M}(\mathbb{R}^2)$).
> $$
> \forall \bar{z}, S_\bar{z} \in \mathcal{M}(\mathbb{R}^2) 
> $$

**FIGURA 2.1.** (*Insieme sezionabile*)
![[Pasted image 20240602214329.png]]

#Teorema 
> [!thm] formula di riduzione per sezioni
> Sia $f: E \subseteq \mathbb{R}^3 \longrightarrow \mathbb{R} \in \mathcal{C}^0(E)$ con $E$ *sezionabile rispetto all'asse* $z$, sia posta $S_\bar{z}(E)$ una sezione arbitraria del dominio, con $m_z \leq \bar{z}\leq M_z$.
> 
> Allora vale che $f \in \mathcal{R}(E)$ (ovvero *Riemann-integrabile* su $E$) e vale la formula
> $$
> \boxed{
> \iiint_E f(x,y,z) \text{ d}x \text{ d}y \text{ d}z = \int_{m_z}^{M_z}\left(\iint_{S_\bar{z}(E)} f(x,y) \text{ d}x \text{ d}y\right)\text{ d}z
> }
> $$
> L'idea è quella di prendere una *sezione*, integrarla poi per farla variare in $z$.

