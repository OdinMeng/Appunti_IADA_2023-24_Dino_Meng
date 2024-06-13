---
data: 2024-05-05
corso:
  - "[[Analisi Matematica II]]"
argomento: Superficie Regolare in Forma Cartesiana
tipologia: appunti
stato: "1"
capitolo: Curve e Superfici
---
- - -
*Breve descrizione qui*
- - -
# 0. Voci correlate
- [[Superficie Regolare in Forma Parametrica]]
- [[Curve Regolari]]
- [[Curva in Forma Implicita]]
- [[Campo Scalare e Insieme di Livello]]
# 1. Superficie Regolare in Forma Cartesiana
#Definizione 
> [!def] superficie regolare in forma cartesiana
> Sia $f:K \subseteq \mathbb{R}^2 \longrightarrow \mathbb{R}$ con $K=\overline{A \ }$ (lo si pone per evitare di creare insiemi connessi e chiusi *"male"*).
> Supponiamo $\nabla f$ estendibile su *tutto* $K$, con continuità. Allora la funzione
> $$
> \sigma: K \longrightarrow \mathbb{R}^3
> $$
> definita come $\sigma(u,v):=(u,v,f(u,v))$, va a definire una *superficie regolare semplice* che si dice *"in forma cartesiana"*.

#Osservazione 
> [!rmk] la regolarità delle superfici cartesiane
> Si dimostra, con calcoli a mano, che la *superficie in forma cartesiana* è sempre *regolare*. Infatti si ha
> $$
> \sigma_u \times \sigma_v = \det\begin{pmatrix}\xi_1 & \xi_2 & \xi_3 \\ 1 & 0 & f_u(u,v) \\ 0 & 1 & f_v(u,v) \end{pmatrix}=(-f_u, -f_v, 1)
> $$
> quindi non *si annulla mai*.

# 2. Superficie Regolare in Forma Implicita
#Definizione 
> [!def] superficie regolare in forma implicita
> Sia $\varphi: A \subseteq \mathbb{R}^3 \longrightarrow \mathbb{R} \in \mathcal{C}^1(A)$, con $A$ aperto, tale che:
> i. La curva di livello non è vuota
> $$
> \Sigma :=L_0(\varphi)\neq \emptyset
> $$
> ii. Il gradiente non è nullo per il sostegno
> $$
> \forall \underline{x} \in \Sigma, \nabla \varphi(\underline{x})\neq 0
> $$
> Allora la coppia $(\varphi, \Sigma)$ si dice *superficie regolare in forma implicita* di cui $\varphi(x,y,z)$ è l'*equazione* e $\Sigma$ il *sostegno*.

#Definizione 
> [!def] piano tangente
> Sia $(\varphi, \Sigma)$ una *superficie regolare in forma implicita*, con $\underline{x_0} \in \Sigma$ fissato.
> 
> Si definisce il *piano tangente a $\Sigma$ in $\underline{x_0}$* dall'equazione
> $$
> \langle \nabla \varphi(\underline{x_0}), \underline{x}-\underline{x_0}\rangle = 0
> $$
> e si ha che il vettore $\nabla\varphi (\underline{x_0})$ è *ortogonale* a $\Sigma$ in $\underline{x_0}$.
