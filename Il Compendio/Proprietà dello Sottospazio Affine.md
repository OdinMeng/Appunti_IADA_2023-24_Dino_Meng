---
data: 2023-12-09
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Proprietà dello Sottospazio Affine
tipologia: appunti
stato: "1"
capitolo: Geometria Affine
---
- - -
*Tre proprietà dello sottospazio affine.*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Definizione di Sottospazio Affine]]
# 1. Le proprietà dello Sottospazio Affine
#Proposizione 
> [!prp] le tre proprietà dello sottospazio affine
> Sia $\mathbb{A}$ uno *spazio affine* su $V$ ([[Definizione di Spazio Affine#^100c32]]) e sia $\mathbb{S} \subseteq A$ uno *sottospazio affine* di giacitura $W$ passante per $Q$ ([[Definizione di Sottospazio Affine#^a1f242]]).
> Allora valgono le seguenti proprietà:
> 1. Il punto $Q$ per cui passa $\mathbb{S}$ appartiene a $\mathbb{S}$ stesso.
>    $$Q \in \mathbb{S}$$
> 2. Chiusura (?) di $\sigma$ in $W$.
>    $$\forall P_1, P_2 \in \mathbb{S}, \sigma(P_1, P_2) = \overrightarrow{P_1P_2} \in W$$
> 3. Lo sottospazio affine passante per un altro punto di $\mathbb{S}$ è lo stesso.
>    $$\forall R \in \mathbb{S}, \mathbb{S} = \{P \in \mathbb{A}: \sigma(R, P) \in W \}$$
^7668d6

#Dimostrazione
**DIMOSTRAZIONE** della *proposizione 1.1.* ([[#^7668d6]])
1. Questo è evidentemente vero e sembra addirittura quasi una tautologia;
   $$Q \in \mathbb{S} \implies \overrightarrow{QQ} \in W \iff 0_W \in W$$
   e questo è palesemente vero in quanto $W$ è *sottospazio vettoriale*.
2. Vogliamo verificare l'implicazione $P_1, P_2 \in \mathbb{S} \implies \sigma(P_1, P_2) \in W$.
   Per definizione vale che
   $$\overrightarrow{QP_1}, \overrightarrow{QP_2} \in W$$
   Allora possiamo riscriverli come
   $$\overrightarrow{P_1P_2} \stackrel{\text{SA2}}= \overrightarrow{P_1Q} + \overrightarrow{QP_2} = -\overrightarrow{QP_1}+\overrightarrow{QP_2} \in W $$
3. Devo mostrare la *doppia inclusione* 
$$\mathbb{S} = \{P \in \mathbb{A}: \sigma(R, P) \in W \}$$
"$\subseteq$": Sia $P$ un qualsiasi elemento di $\mathbb{S}$; allora per definizione vale che $\sigma(Q, P) \in W$.
D'altro canto abbiamo che $R \in \mathbb{S}$, allora vale pure $\sigma(R, P) \in W$. Pertanto
$$\overrightarrow{RP} \stackrel{\text{SA2}}= \overrightarrow{RQ} + \overrightarrow{QP} = -\underbrace{\overrightarrow{QR}}_{\in W} + \underbrace{\overrightarrow{QP}}_{\in W} \implies \sigma(R, P) \in  W$$
"$\supseteq$": Sia $P \in \mathbb{A}$ un punto qualsiasi tale che $\sigma(R, P) \in W$. Dato che $R \in \mathbb{S}$, allora deve valere che $\sigma(Q, R) \in W$. Però possiamo scrivere $\sigma(Q, P)$ come
$$\overrightarrow{QP} = \overrightarrow{QR}+\overrightarrow{RP} \in W$$
ed entrambi appartengono a $W$, di conseguenza $\sigma(Q,P) \in W$, ovvero $P \in \mathbb{S}$. $\blacksquare$

#Osservazione 
> [!rmk] lo sottospazio affine con giacitura W è spazio affine su W
> Notiamo che se $\mathbb{S} \subseteq \mathbb{A}$ è *sottospazio affine* con *giacitura* $W$, allora si può mostrare che $\mathbb{S}$ è *spazio affine* su $W$.