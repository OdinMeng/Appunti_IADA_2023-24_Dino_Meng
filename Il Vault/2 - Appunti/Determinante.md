---
data: 2023-11-21
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Determinante
tipologia: appunti
stato: "1"
---
*Definizione di determinante per matrici quadre 2x2 (cenno); cenno al metodo dei cofattori; definizione per ricorrenza del determinante di una matrice quadra di qualsiasi dimensione; calcolo del determinante di matrici triangolari superiori; regola di Sarrus (definizione di matrici quadre 3x3)*
- - -
# 1. Prima definizione (per matrici 2x2)
#Definizione 
> [!def] determinante della matrice 2x2
> Sia $A \in M_2(K)$.
> Definisco il *determinante* di $A$ come lo scalare in $K$ determinato dalla formula
> $$\det A = a_{11}a{22}-a_{12}a_{21} \in K$$
>

^2bb1d4

**TRUCCO.** Per ricordare questa definizione possiamo fare una sorta di *"grafico"* per aiutarci, in cui disegniamo la matrice e segniamo la *diagonale principale* in rosso e l'*"anti diagonale"* in blu: poi sottraiamo la parte rossa con quella blu.
![[Pasted image 20231121153551.png]]
## Primi enunciati sul determinante
Quanto abbiamo visto in [[Invertire Matrici#^b56a11]], questo ci permette di esporre il seguente enunciato:
#Proposizione 
> [!prp] invertibilità di una matrice
> Sia $M_{2}(K)$, allora
> $$A \text{ invertibile} \iff \operatorname{rg}(A)=2 \iff \det(A)=2 $$
> In tal caso
> $$A^{-1} = \frac{1}{\det A}\begin{pmatrix}a_{22} & -a_{12} \\ -a_{21} & a_{22} \end{pmatrix} $$

#Esempio 
Riprendiamo l'*esempio 1.1.* da [[Invertire Matrici#^a51ef6]]: 
> [!exm] esempio 1.1. da "Invertire Matrici"
> Sia 
> $$A = \begin{pmatrix}2 & 1 \\ 5 & 3 \end{pmatrix} $$
> Allora
> $$\det A = 6-5 = 1 \neq 0 \implies A^{-1} \text{ invertibile}$$
> Pertanto
> $$A^{-1} = \begin{pmatrix}3 & -1 \\ -5 & 2 \end{pmatrix} $$

**OSS 1.1.1.** (*Collegamento geometrico*) Se consideriamo le colonne di $A \in M_2(K)$ come *due vettori colonna* che vivono in $K^2$, poi se supponiamo $a_{ij} > 0$, allora possiamo rappresentare i vettori sul piano cartesiano $\pi$. Si può verificare che se $\mathcal{P}$ è il parallelogrammo determinato da questi due vettori colonna, allora il *determinante* della matrice $A$ è proprio l'*area* di questo parallelogrammo.
![[Pasted image 20231121154754.png]] ^52f4e0
# 2. Definizione di determinante per ricorsione
#Definizione 
> [!def] determinante per lo sviluppo lungo la prima colonna
> Sia $A \in M_n(K)$.
> Definisco il *determinante di* $A$ per *ricorsione* come il seguente:
> - Se $n=1$: allora $A = a_{11} \implies \det(A) = A_{11}$ 
> - Se $n>1$: allora 
> $$\det A = \sum_{i=1}^n (-1)^{i+1}\cdot a_{i1} \cdot \det(A_{i1}) $$
> dove ci ricordiamo che $A_{i1}$ rappresenta il *minore* della matrice $A$ ([[Matrice]])

^be5bde

**OSS 2.1.** Benché questa definizione di *determinante* sia completamente accettabile, percepiamo che rimane comunque *"artificiale"*: scegliamo proprio di svilupparla lungo la *prima* colonna.
Infatti con lo *sviluppo di Laplace del determinante* ([[Teoremi sul determinante]]) vedremo che è possibile definire il *determinante* con lo stesso algoritmo, scegliendo tuttavia di svilupparla lungo un'altra colonna o anche secondo una riga.
Tuttavia dobbiamo aspettare prima di sviluppare dei teoremi sui determinanti per poter definire bene lo *sviluppo di Laplace*.

#Esempio 
> [!exm] determinante di matrice 2x2
> Con questa definizione si può *"ricavare"* la definizione del determinante per una matrice che vive in $M_2(K)$; infatti
$$\begin{align} \det(A \in M_2(K)) = \det(\begin{pmatrix}a_{11} & a_{12} \\ a_{21} & a_{22} \end{pmatrix}) &= (-1)^{1+1}a_{11}\det(A_{11}) + (-1)^{2+1}a_{21}\det(A_{21}) \\ &= a_{11}a_{22}-a_{21}a_{12}\end{align} $$

#Esempio 
> [!exm] esempio numerico del determinante
> Sia $A \in M_3(K)$, in particolare
> $$ A = \begin{pmatrix}1 & 0 & 2 \\ 0 & 1 & 1 \\ 2 & 3 & 1 \end{pmatrix} $$
> Svolgendo i calcoli necessari viene fuori
> $$ \det A = -6 $$
> La *"dimostrazione"* (che in realtà è solo un calcolo) di questo è lasciato da svolgere al lettore.
## Calcolo del determinante di una matrice triangolare superiore
#Proposizione 
> [!prp] Determinante di una matrice triangolare superiore
> Se $A \in M_{n}(K)$ è una *matrice triangolare superiore* ([[Matrice#^920878]]) (quindi $A \in T_n(K) \subseteq M_n (K)$), ovvero del tipo
> $$A = \begin{pmatrix}a_{11} & \ast & \ast & \ldots & \ast \\ 0 & a_{22} & \ast & \ldots & \ast \\ \vdots & & & & \vdots \\ 0 & 0 & 0 & \ldots & a_{nn} \end{pmatrix} $$
> Allora si ha
> $$\det(A) =\prod_{1\leq i \leq n}a_{ii} = a_{11}\cdot\ldots\cdot a_{nn} $$
> in parole *"il determinante di una matrice triangolare superiore è la produttoria degli elementi della diagonale principale".*
^0628b1

#Dimostrazione 
**DIMOSTRAZIONE** di *Proposizione 2.1.1.* ([[#^0628b1]])
Per induzione su $\mathbb{N}$ ([[Assiomi di Peano, il principio di induzione#^76b850]]) dimostriamo che vale la proposizione per ogni $M_{n}(K)$.
- Caso $n=1$:
$$A \in T_{1}(K) \implies A = (a_{11}) \implies \det A=a_{11} \text{ OK}$$
- Passo induttivo $P(n-1) \implies P(n)$: 
Supponendo che valga la proposizione per le matrici $M_{n-1}$, allora dimostriamo che valga anche per $M_{n}$.
Allora per lo *sviluppo di determinante lungo la prima colonna* ([[#^be5bde]]), abbiamo
$$\det A = a_{11}\det A_{11}+0\cdot\ldots + 0\cdot \ldots +\ldots +0 $$
Allora il gioco è fatto perché l'unico termine da *"risolvere"* è $A_{11}$, che è anch'essa una matrice superiore triangolare e vive in $M_{n-1}(K)$ (in quanto *"togliamo"* una riga e una colonna dalla matrice originaria). Pertanto per ipotesi induttiva $\det A_{11} = a_{22}\cdot \ldots \cdot a_{nn}$.
Allora
$$\det A = a_{11} \cdot (a_{22} \cdot \ldots \cdot a_{nn}) = \prod_{1\leq i\leq n}a_{nn} \text{ OK. }\blacksquare$$
# 3. Regola di Sarrus (per matrici 3x3)
#Definizione  
> [!thm] determinante di una matrice 3x3 secondo la regola di Sarrus
> Sia $A \in M_3(K)$,
> allora vale che
> $$\det A = a_{11}a_{22}a_{33}+a_{12}a_{23}a_{31}+a_{13}a_{21}a_{32} - (a_{13}a_{22}a_{31}+a_{32}a_{23}a_{11}+a_{33}a_{21}a_{12})$$

^5b8f2c

**TRUCCO.** Ovviamente questa regola è utile solo se la visualizziamo *graficamente*; ciò consiste in prendere la matrice $A$, poi piazzare le prime due colonne $A^{(1)}$ e $A^{(2)}$ a destra della matrice, poi di segnare le tre diagonali principali a partire da quella principali, le *anti diagonali* e infine di sommare le diagonali principali poi di sottrarre il risultato con le anti diagonali.
![[Pasted image 20231121161448.png]]

> [!exr] Esercizio 3.1.
> Si lascia al lettore di determinare il $\det(A)$ per
> $$A = \begin{pmatrix}1 & 0 & 2 \\ 0 & 1 & 1 \\ 2 & 3 & 1 \end{pmatrix}$$
> mediante la *regola di Sarrus* per esercizio.


