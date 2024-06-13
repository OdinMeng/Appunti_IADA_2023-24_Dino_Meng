---
data: 2024-06-03
corso:
  - "[[Analisi Matematica II]]"
argomento: Solidi di Rotazione
tipologia: appunti
stato: "1"
capitolo: Calcolo Integrale in più Variabili
---
- - -
*Formalizzazione delle nozioni di geometria elementare: solidi di rotazione. Definizione e formula di Pappo-Guldino.*
- - -
# 0. Voci correlate
- [[Integrazione di Riemann su n-rettangoli]]
# 1. Definizione di Solido di Rotazione
**IDEA.** Con la *geometria elementare* sappiamo che possiamo far *"ruotare"* degli oggetti bidimensionali lungo un'asse, per ottenere un *solido*. Vediamo come formalizzare tale nozione.

#Definizione 
> [!def] solido di rotazione
> Siano $\varphi, \psi: [a,b] \longrightarrow \mathbb{R} \in \mathcal{C}^0[a,b]$ tali che
> $$
> \forall x \in [a,b], 0 \leq \varphi(x) \leq \psi(x)
> $$
> Allora posso definire l'*insieme normale* rispetto al piano $\pi_{xz}$
> $$
> D=\left\{(x,z) \in \mathbb{R}^2: a \leq z \leq b \land \varphi(z) \leq x \leq \psi(z)\right\}
> $$
> Adesso prendo questo insieme normale (che è una forma bidimensionale sul piano $\pi_{xz}$) e posso *"ruotarlo"* di $2\pi$ sull'asse $z$, dandoci l'insieme
> $$
> \boxed{E=\left\{(x,y,z) \in \mathbb{R}^3: a \leq z \leq b \land  \varphi(z) \leq \sqrt{x^2+y^2} \leq \psi(z)\right\} }
> $$
> che si dice *"solido di rotazione in $\mathbb{R}^3$"*, ottenuto ruotando $D$ attorno all'asse $z$ di $2\pi$.

**FIGURA 1.1.** (*Esempio: tronco bucato e tagliato generato da un trapezio*)
![[Pasted image 20240603203116.png]]

# 2. Formula di Pappo-Guldino
#Teorema 
> [!thm] formula di Pappo-Guldino
> Sia $E$ un *solido di rotazione* in $\mathbb{R}^3$, ottenuto ruotando $D$ nell'asse $z$ di $2\pi$.
> 
> Allora $E$ è *misurabile secondo Peano-Jordan* ([[Cenni alla Misura di Peano-Jordan#^1b7399|1]]) con la sua *misura* il suo volume $V_E$, e vale la formula
> $$
> \boxed{m_3(E)=V_E=2\pi \iint_D x \text { d}x \text{ d}z}
> $$

