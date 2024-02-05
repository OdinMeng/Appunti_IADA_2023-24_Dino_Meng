---
data: 2023-11-17
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Teoremi su Rango
tipologia: appunti
stato: "1"
---
*Teoremi e/o proposizioni sul rango: metodo per computare il rango, connessione colonne-righe.*
- - -
# 1. Metodo per computare il rango
Ora vedremo una proposizione che ci permetterà di calcolare il rango di una matrice usando l'algoritmo di Gauß ([[Algoritmo di Gauß]])

#Proposizione 
> [!prop] Proposizione 1.1. (Effetti degli O.E. sul rango)
> Sia $A \in M_{m,n}(K)$ e $\tilde{A}$ una matrice ottenuta da $A$ applicando le *operazioni elementari* OE1,2,3,. ([[Algoritmo di Gauß#^8a7c5e]], [[Algoritmo di Gauß#^1f10d6]], [[Algoritmo di Gauß#^175a42]]); allora valgono le seguenti:
> $$\begin{align}&1. \ \operatorname{rg}(A) = \operatorname{rg}(\tilde{A}) \\ &2. \ \tilde{A} \text{ a scala} \implies \operatorname{rg}(\tilde{A}) = r, \text{ ove }r \text{ è il numero di righe non nulle} \end{align}$$
^9290df

**DIMOSTRAZIONE** della *proposizione 1.1.*.
Omessa. $\blacksquare$
# 2. Connessione colonne-righe
#Proposizione 
> [!prop] Proposizione 2.1.
> Sia $A \in M_{m,n}(K)$; allora vale che
> $$\operatorname{rg}(A)=\operatorname{rg}(^t A) $$
> ovvero che il *rango* di una matrice è alla stessa della sua *trasposta* ([[Operazioni particolari con matrici#^bf11d7]]); quindi considerare la *colonna* oppure la *riga* per trovare il rango non cambia.
# 3. Invertibilità di una matrice
#Osservazione 
> [!oss] Osservazione 3.1. (collegamento Rouché-Capelli e Cramer)
Guardando il *corollario del teorema di Rouché-Capelli* ([[Teorema di Rouché-Capelli#^4ed5f2]]), notiamo che questo ci ricorda il *teorema di Cramer* ([[Teoremi sui Sistemi Lineari#^97243e]]): infatti entrambe prescrivono la *compatibilità* di un sistema lineare, sotto certe condizioni. C'è una connessione più profonda tra questi due teoremi? Ora vediamo con la seguente proposizione.

#Proposizione 
> [!prop] Proposizione 3.1. (Invertibilità di una matrice)
> Sia $A \in M_{n}(K)$ una *matrice quadrata* ([[Matrice#^a95650]]).
> Allora il rango di questa matrice è *massima* (ovvero $n$) se e solo se questa è *invertibile*:
> $$\boxed{\operatorname{rg}(A) = n \iff \exists A^{-1}: A \cdot A^{-1} = \mathbb{1}_n} $$
^4dbbdd

#Dimostrazione 
**DIMOSTRAZIONE** della *Proposizione 3.1.*.
Questo è un teorema del tipo *"se e solo se"*: dimostriamo dunque due implicazioni.
"$\impliedby$": Sia $A$ *invertibile*, allora per il *teorema di Cramer*,
$$\forall b \in K^n, Ax=b \text{ compatibile}$$
Dunque per il *corollario di Rouché-Capelli* ([[Teorema di Rouché-Capelli#^4ed5f2]]),
$$\forall b \in K^n, Ax=b \text{ compatibile} \implies \operatorname{rg}(A) = n $$
"$\implies$": Supponendo $\operatorname{rg}(A)=n$, voglio mostrare che esiste $B \in M_n (K)$ *inversa* di $A$ (ovvero $AB = BA = \mathbb{1}_n)$.
Allora è sufficiente *costruire* la matrice $B$ tale che $AB = \mathbb{1}_n$.
Ora, vale che 
$$AB = \mathbb{1}_n \iff A\cdot B^{(i)} = \begin{pmatrix}0 \\ \vdots \\ 1 \\ \vdots \\ 0 \end{pmatrix}$$
Dove il numero $1$ sta in posizione $i$-esimo.
Chiamo dunque $e_i$ il vettore-colonna
$$ e_i =\begin{pmatrix}0 \\ \vdots \\ 1 \\ \vdots \\ 0 \end{pmatrix} = (K^n)_{j},  \begin{cases}0 \text{ se } j \neq i \\ 1 \text{ se }j=1\end{cases}$$
Allora $AB = \mathbb{1}_n$ se e solo se *tutti i sistemi lineari*
$$A \cdot B^{(i)} = e_i $$
sono *compatibili* per $i \in \{1, \ldots, n\}$.
Dato che $\operatorname{rg}(A)=n$, sappiamo che *tutti* questi sistemi lineari sono compatibili e dunque le loro *soluzioni* determineranno le colonne della matrice $B$. $\blacksquare$
