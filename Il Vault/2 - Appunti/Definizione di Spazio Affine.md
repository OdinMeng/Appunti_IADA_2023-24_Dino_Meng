---
data: 2023-12-09
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Definizione di Spazio Affine
tipologia: appunti
stato: "1"
capitolo: Geometria Affine
---
- - -
*Definizione di Spazio Affine: le proprietà caratterizzanti, l'origine del concetto di spazio affine.*
- - -
# 0. Voci correlate
- [[Vettori Applicati]]
- [[Vettori Liberi]]
- [[Spazi Vettoriali]]
# 1. Definizione di Spazio Affine
#Definizione 
> [!def] spazio affine
> Sia $V$ un $K$-*spazio vettoriale* ([[Spazi Vettoriali#^7e2c4e]]).
> Definiamo un insieme $\mathbb{A}$ come uno *spazio affine su* $V$ nel caso in cui esiste l'*applicazione* $\sigma$
>   $$\sigma: \mathbb{A} \times \mathbb{A} \longrightarrow V$$
> (Inoltre denotiamo l'applicazione $\sigma$ degli elementi $P, Q \in \mathbb{A}$ come)
> $$\sigma(P, Q) = \overrightarrow{PQ}$$
> Poi questa applicazione $\sigma$ deve rispettare i seguenti *criteri* (SA1., SA2.). 
> - SA1. (l'unicità del vettore di due punti)
>   $$\forall P \in \mathbb{A}, \forall v \in V, \exists!Q \in \mathbb{A}: v = \overrightarrow{PQ}$$
> - SA2. (la somma di due punti è la risultante)
>   $$\forall P, Q, R \in \mathbb{A}, \overrightarrow{PQ}+\overrightarrow{QR}=\overrightarrow{PR}$$
^100c32

#Definizione 
> [!def] punto di spazio affine
> Sia $\mathbb{A}$ uno *spazio affine* su $V$ ([[#^100c32]]), allora un qualunque elemento di $\mathbb{A}$ si dice *punto*.
> 

# 2. Origine del concetto
#Osservazione 
> [!rmk] spazio affine come generalizzazione dei vettori liberi
> Questa definizione di *spazio affine* emerge come *generalizzazione* delle proprietà dei *vettori liberi* ([[Vettori Liberi#^d09c32]]).
> Infatti abbiamo visto che questi *vettori liberi* formano uno *spazio vettoriale* ([[Spazi Vettoriali#^7e2c4e]]), e che per ogni *punto* $P$ e per ogni *vettore libero* $v$ esiste un *vettore applicato* ([[Vettori Applicati#^cc8a3c]]) con punto di applicazione $P$ e *classe di equipollenza* $v$ ([[Vettori Liberi#^dc78a7]]). Geometricamente questo ragionamento viene illustrato nella *figura 2.1.*.
> Dopodiché il punto $Q$ che abbiamo determinato è *unico* e vale che le classe di equipollenza del vettore $PQ$ è uguale a $v$, che è una classe di equipollenza.
> $$\overrightarrow{PQ} = v$$
> In particolare vale anche la proprietà *SA2.* della definizione di *spazio affine*: se ho *tre punti*, allora posso *"collegare"* solo il punto iniziale e finale, *"saltando"* il punto intermedio (*figura 2.2.*).

**FIGURA 2.1.** (*Vettore applicato come elemento particolare di un vettore libero*)
![[Pasted image 20231209113517.png]]
**FIGURA 2.2.** (*Regola SA2. in termini di vettori applicati*)
![[Pasted image 20231209113528.png]]
