---
data: 2024-06-02
corso:
  - "[[Analisi Matematica II]]"
argomento: Formula di Riduzione su Insiemi Normali in 2D
tipologia: appunti
stato: "1"
capitolo: Calcolo Integrale in più Variabili
---
- - -
*Definizione di insieme normale rispetto all'asse $x$ (o $y$). Proposizione fondamentale: gli insiemi normali sono misurabili. Teorema: formula di riduzione su insiemi normali.*
- - -
# 0. Voci correlate
- [[Integrazione di Riemann su n-rettangoli]]
- [[Cenni alla Misura di Peano-Jordan]]
# 1. Insiemi Normali Rispetto alle Assi
**IDEA.** Come *"primo passo"* verso l'integrazione su insiemi arbitrari, possiamo generalizzare la nozione del *rettangolo* e passare al *"rettangolo distorto"* in una maniera arbitraria: così posso usarci il *teorema di Fubini* ([[Teorema di Fubini]]).

#Definizione 
> [!def] insieme normale rispetto all'asse $x$
> Siano $\varphi, \psi:[a,b] \longrightarrow \mathbb{R} \in \mathcal{C}^0$ tale che $\phi \leq \psi$ in $[a,b]$. L'insieme $E \subseteq \mathbb{R}^2$ definito come
> $$
> E:=\left\{(x,y) \in \mathbb{R}^2: \varphi(x) \leq y \leq \psi(x)\right\}
> $$
> si dice *"normale rispetto all'asse $x$"* (la definizione vale analogamente scambiando $x$ con $y$, in questo caso è normale rispetto all'asse $y$).

**FIGURA 1.1.** (*Insiemi Normali*)
![[Pasted image 20240602195757.png]]

#Proposizione 
> [!prp] proprietà fondamentale dei normali
> Si ha che se $E$ è *un insieme normale rispetto all'asse $x$ o $y$*, allora essa è *misurabile secondo Peano-Jordan*.

# 2. Integrazione su Insiemi Normali
Adesso si tratta di *"applicare Fubini"* su $E$, dato che possiamo *"estenderlo"* ad un rettangolo con alcuni punti di trascurabilità.

#Teorema 
> [!thm] formula di riduzione su insiemi normali
> Sia $f: E \subseteq \mathbb{R}^2 \longrightarrow \mathbb{R}$ con $E$ un *insieme normale* rispetto all'asse $x$ (o $\textcolor{red}{y}$), definita dalle funzioni $\varphi, \psi: [a,b] \longrightarrow \mathbb{R}$. 
> 
> Allora $f \in \mathcal{R}(E)$ e vale la formula
> $$
> \boxed{
> \begin{align}
> \iint_E f(x,y) \ \text{d}x \text{ d}y &= \int_a^b\left(\int_{\varphi(x)}^{\psi(x)} f(y) \ \text{d}y\right) \text{ d}x  
> \\
> &\textcolor{RED}{''=\int_a^b \left(\int_{\varphi(y)}^{\psi(y)} f(x) \ \text{d}x\right) \text{ d}x}
> \end{align}
> }
> $$

**FIGURA 2.1.** (*Fubini su normali*)
![[Pasted image 20240602200224.png]]
