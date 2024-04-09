---
data: 2024-03-28
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Formula di Disintegrazione e delle Probabilità Totali
tipologia: appunti
stato: "1"
capitolo: Nozioni preliminari per la Probabilità
---
- - -
*Formule utili per calcolare probabilità senza dover ricondurre al modello probabilistico: formula di disintegrazione, formula delle probabilità totali per casi generali e per dicotomie.*
- - -
# 0. Voci correlate
- [[Probabilità Condizionale]]
# 1. Formula di disintegrazione e delle probabilità totali
#Osservazione 
> [!rmk] lo scopo di queste formule
> Supponiamo di conoscere delle *probabilità condizionali*; se voglio calcolare un qualsiasi altro dato, come ad esempio la probabilità di un evento dalle probabilità condizionali, di solito bisognava ricostruire l'intero *modello probabilistico* $(\Omega, \mathcal{A}, p)$ ([[Spazio di Probabilità Discreto#^58b1f7|1]]).
> 
> Con le formule che vedremo, ci sarà un metodo per evitare tutto ciò.

#Proposizione 
> [!prp] formule di disintegrazione e delle probabilità totali
> Sia $(\Omega, \mathcal{A}, p)$ un *spazio di probabilità*, sia $(B_n)_{n \in N} \subset A$ una *partizione finita o numerabile* di $\Omega$ (ovvero una successione finita o infinita di sottoinsiemi disgiunti di $\Omega$ tali che la loro intersezione riconduca a $\Omega$ stesso; ovvero $\bigcap_n B_n = \Omega$).
> 
> Allora valgono le seguenti formule.
> i. *Formula di disintegrazione*
> $$
> \forall A \in \mathcal{A}, p(A)=\sum_{n \in N} p(A \cap B_n)
> $$
> ii. *Formula delle probabilità totali*
> $$
> p(B_k)>0, \forall n \in N \implies p(A)=\sum_{n \in N}p(A|B_n)\cdot p(B_n)
> $$
^85fa75

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^85fa75]]
Non daremo una dimostrazione completa, bensì un'idea della dimostrazione.
i. Ricordando che $(B_n)_n$ è una partizione di $\Omega$, possiamo scrivere
$$
A = A \cap \Omega = A \cap \left(\bigcup_{n \in N}B_n\right)\stackrel{\text{prop. distributiva} }{\implies}A=\bigcup_{n \in N}(A \cap B_n)
$$
Adesso, ricordando che $(B_n)_n$ sono tutti disgiunti, posso passare alla probabilità e asserire l'uguaglianza
$$
p(A)=p\left(\bigcup_{n \in N}(A \cap B_n)\right)= \sum_{n \in N}p(A \cap B_n)
$$
che è la tesi.
ii. Basta ricordarsi della definizione di probabilità condizionale, per cui
$$
p(A|B_n):= \frac{p(A \cap B_n)}{P(B_n)} \stackrel{p(B_n)> 0}\implies p(A \cap B_n)=P(A|B_n)P(B_n)
$$
e dato che $(B_n)_n$ formano una partizione per $\Omega$, posso sfruttare la formula di disintegrazione per cui posso passare alla probabilità
$$
p(A)=\sum_{n \in N}p(A \cap B_n)=\sum_{n \in N}p(A|B_n)\cdot p(B_n)
$$
che è la tesi. $\blacksquare$

#Osservazione 
> [!rmk] interpretazione geometrica della prima formula
> Possiamo dare un'interpretazione geometrica per la *formula di disintegrazione*.
> 
> Supponiamo di avere una forma $\Omega$, e di tagliarli in $n$ parti, che poi formeranno $B_1$, $B_2$, eccetera...
> Allora per misurare l'area di un segmento $A$ (che rappresenterebbe un evento complesso in $\mathcal{A}$), possiamo semplicemente prendere *tutte le intersezioni* tra $A$ e i $B_n$, poi per sommarli.

**FIGURA 1.1.** (*Interpretazione geometrica*)
![[Pasted image 20240328195506.png]]

# 2. Caso particolare per le dicotomie
#Corollario 
> [!cor] formula delle probabilità totali per le dicotomie
> Siano $A,B \in \mathcal{A}$ degli eventi che hanno probabilità non-estreme ($A,B \in (0,1)$). Allora vale che
> $$
> p(A)=p(A|B)\cdot p(B) + p(A|\mathcal{C}_{\Omega}B)\cdot (1-p(B))
> $$
