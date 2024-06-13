---
data: 2024-05-05
corso:
  - "[[Analisi Matematica II]]"
argomento: Curve Regolari in Forma Implicita
tipologia: appunti
stato: "1"
capitolo: Curve e Superfici
---
- - -
*Conseguenze del teorema del Dini: definizione di curva regolare in forma implicita a due dimensioni, osservazioni miste.*
- - -
# 0. Voci correlate
- [[Curva in Forma Implicita]]
- [[Teorema del Dini]]
- [[Curve Regolari]]
# 1. Curve Regolari in Forma Implicita
Grazie al *teorema del Dini*, possiamo dare una definizione ben posta di *curva regolare in forma implicita*.

#Definizione 
> [!def] curva regolare in forma implicita
> Sia $\varphi: A \subseteq \mathbb{R}^2 \longrightarrow \mathbb{R} \in \mathcal{C}^1(A)$ con $A$ aperto, tale che soddisfi i seguenti criteri.
> $$
> \begin{gather} 
> \Gamma := L_0(\varphi)\neq \emptyset \\
> \nabla f(x_0,y_0)\neq 0, \forall (x_0,y_0) \in \Gamma
> \end{gather}
> $$
> La coppia $(\varphi, L_0(\varphi))$ si dice *curva regolare in forma implicita*, di cui $\varphi(x,y)=0$ si dice *l'equazione* e $\Gamma$ il *sostegno*.

# 2. Proprietà delle Curve Regolari in Forma Implicita
Dal *teorema del Dini* abbiamo che queste curve possiedono delle proprietà particolari.

#Osservazione 
> [!rmk] conseguenze del teorema del Dini
> Sia $(\varphi, L_0(\varphi))$ una *curva regolare in f.i.*. Allora abbiamo che:
> 1. La retta tangente su un punto $\underline{x_0} \in \Gamma$ esiste e lo si calcola con
> $$
> \langle \nabla \varphi(\underline{x_0}), \underline{x}-\underline{x_0}\rangle = 0
> $$
> 2. Supponendo $g$ la sua *curva* in funzione delle asse $x$ (ovvero ho una funzione del tipo $y=g(x)$, allora ho che
> $$
> \begin{gather}
>  g'(x_0)=-\frac{\varphi_x(\underline{x_0})}{\varphi_y(\underline{x_0})} &\implies \varphi_y(\underline{x_0})g'(x_0)+\varphi_x(\underline{x_0})\cdot 1=0\\ &\implies
>\langle \nabla \varphi(\underline{x_0}), (1,g'(x_0))\rangle = 0
> \end{gather}
> $$
> Geometricamente, con la *2* abbiamo che il *vettore* $\nabla\varphi$ è *sempre* ortogonale al vettore $(1,g'(x_0))$, che rappresenta il *vettore tangente* a $\underline{x_0}$. 
> 
> Infatti, abbiamo che $\nabla\varphi (\underline{x})$ è *ortogonale* alle *linee di livello* $\varphi$ in $\underline{x_0}$. Il ragionamento vale in una maniera analoga per l'esistenza di $x=h(y)$.

^3b8ab9

**FIGURA 2.1.**
![[Pasted image 20240505204857.png]]
