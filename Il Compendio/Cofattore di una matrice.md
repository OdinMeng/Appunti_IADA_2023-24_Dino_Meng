---
data: 2023-11-21
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Cofattore di una matrice
tipologia: appunti
stato: "1"
---
*Definizione di cofattore ij-esimo di una matrice; definizione della matrice dei cofattori di A; calcolo dell'inversa mediante il cofattore*
- - -
# 1. Definizione di cofattore ij-esimo
#Definizione 
>[!def] Definizione 1.1. (cofattore ij-esimo di una matrice)
>Sia $A \in M_n(K)$, siano $1 \leq i \leq n$, $1 \leq j \leq n$.
>Definisco il *cofattore ij-esimo* di $A$ come lo scalare in $K$
>$$(-1)^{i+j}\det(A_{ij})$$
# 2. Definizione della matrice dei cofattori
#Definizione 
> [!def] Definizione 2.1. (matrice dei cofattori di una matrice)
> Sia $A \in M_n(K)$, allora la *matrice dei cofattori di* $A$ è la matrice che indichiamo come
> $$\operatorname{cof}(A) \in M_n(K); (\operatorname{cof}(A))_{ij} = (-1)^{i+j}\cdot \det A_{ij} $$

#Esempio 
> [!es] Esercizio-esempio 2.1.
> Per esercizio si calcoli i cofattori della matrice
> $$\begin{pmatrix}3 & 1 \\ -2 & 0 \end{pmatrix} $$
# 3. Calcolo dell'inversa con il cofattore
#Proposizione 
> [!prop] Proposizione 3.1.
> Sia $A \in M_n (K)$, allora
> $$A \cdot {}^t(\operatorname{cof} A) = \det A \cdot \mathbb{1}_n $$
> (questa vale *sempre*!)
> In particolare set $\det A = 0$ vale che
> $$A^{-1} = \frac{{}^t \operatorname{cof}(A)}{\det A} $$
^70361d

#Dimostrazione 
**DIMOSTRAZIONE** della *proposizione 3.1.* ([[#^70361d]])
Calcola l'entrata di posto $i,j$ della matrice data dal *prodotto riga per colonna* ([[Operazioni particolari con matrici#^eecbc9]]) di $A \cdot {}^t \operatorname{cof}(A)$.
$$\begin{align}(A \cdot {}^t \operatorname{cof}(A))_{ij} = A_{(i)}\cdot ({}^t \operatorname{cof}A)^{j} &= \sum_{k=1}^n a_{ik}\cdot ({}^t\operatorname{cof}(A))_{kj} \\ &= \sum_{k=1}^n (-1)^{jk}\cdot a_{ik} \cdot \det A_{jk}\end{align} $$
Ora succede il seguente:
- Se $i=j$, allora ho esattamente la definizione del *determinante* $\det A$ ([[Teoremi sul determinante#^f27a22]]): quindi $(A \cdot {}^t \operatorname{cof}(A))_{ij} = \det A \iff i=j$
- Se $i \neq j$, allora avrei il determinante di una matrice con *due righe uguali*, dunque $(A \cdot {}^t \operatorname{cof}(A))_{ij} = \det A = 0 \iff i\neq j$
Allora ho una *matrice* dove le entrare $ij$-esime sono composte da $\det A$, e da $0$ in tutti gli altri casi: allora praticamente ho la matrice identità scalata per $\det A$. Dunque alla fine ho
$$A \cdot {}^t \operatorname{cof}(A)_{ij} = \det A \cdot \mathbb{1}_n $$

## Determinare la soluzione di un sistema lineare con Cramer e cofattori
**RICHIAMO** (*al teorema di Cramer*)
![[Teoremi sui Sistemi Lineari#^97243e]]

> [!cor] Corollario 3.1. (determinare soluzioni di sistemi lineari con Cramer)
Osservando il *teorema di Cramer*, notiamo che se prima non avevamo gli strumenti per calcolare l'inversa $A^{-1}$, ora li abbiamo.
Quindi dalla formula determinata nella *proposizione 3.1.* ([[#^70361d]]), segue che che l'$i$-esima entrata della soluzione $S$, che chiameremo $s_i$ sarà determinata da
$$i \in \{1, \ldots, n\}, s_i = \frac{\det(A^{(1)}, \ldots, b, A^{(i+1)}, \ldots, A^{(n)})}{\det A} $$
