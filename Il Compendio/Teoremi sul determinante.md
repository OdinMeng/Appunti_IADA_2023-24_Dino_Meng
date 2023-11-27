---
data: 2023-11-21
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Teoremi sul determinante
tipologia: appunti
stato: "1"
---
*Teoremi sul determinante: prime proprietà (multilinearità, alternanza/antisimmetria, normalizzazione); teorema di caratterizzazione del determinante; corollari vari; teorema di caratterizzazione delle matrici quadrate di rango massimo; sviluppo di Laplace del determinante; teorema di Binet.*
- - -
# 1. Le tre proprietà D1, D2, D3
#Proposizione 
> [!prop] Proposizione 1.1. (Le proprietà del determinante D)
> Il *determinante* ([[Determinante#^be5bde]]) gode delle seguenti proprietà:
> - D1. (*multilinearità*)
> Sia $A \in M_n(K)$, supponendo che $A_{(i)} = R_1 + R_2$ (ove $R_1, R_2 \in K^n$)
> allora
> $$\det\left(\begin{matrix}A_{(1)} \\ \vdots \\ R_1+R_2 \\ \vdots \\ A_{(n)}\end{matrix}\right) =  \det\left(\begin{matrix}A_{(1)} \\ \vdots \\ R_1 \\ \vdots \\ A_{(n)}\end{matrix}\right) + \det\left(\begin{matrix}A_{(1)} \\ \vdots \\ R_2 \\ \vdots \\ A_{(n)}\end{matrix}\right)$$
> Inoltre supponendo invece $A_{(i)} = cR$ per un $c \in K$, $R \in K^n$ allora
> $$\det\left(\begin{matrix}A_{(1)} \\ \vdots \\ cR \\ \vdots \\ A_{(n)}\end{matrix}\right) = c \det\left(\begin{matrix}A_{(1)} \\ \vdots \\ R \\ \vdots \\ A_{(n)}\end{matrix}\right)$$
> Analogamente la proprietà della *multilinearità* vale anche quando consideriamo le *colonne* $A^{(i)}$.
> - D2. (*alternanza / antisimmetria*)
> *Nota: per quanto riguarda questa proprietà bisogna distinguere certi casi per certi campi, ma è irrilevante ai fini nostri.*
> Scambiando due righe o colonne di una matrice di posto il determinante cambia di segno, ovvero: siano $i, j \in \{1, \ldots, n\}$, allora
> $$\det\left(\begin{matrix}A_{(1)} \\ \vdots \\ A_{(i)}\\\vdots\\ A_{(j)}\\ \vdots \\ A_{(n)}\end{matrix}\right) = -\det\left(\begin{matrix}A_{(1)} \\ \vdots \\ A_{(j)}\\ \vdots\\A_{(i)}\\ \vdots \\ A_{(n)}\end{matrix}\right) $$
> Da questo discende che svolgendo $k$ scambi di righe/colonne dobbiamo moltiplicare il determinante per $(-1)^{k}$. 
> - D3. (*normalizzazione*)
> Vale che
> $$\det\mathbb{1}_n = 1 $$

^17de20

Possiamo usare queste proprietà come dei *"trucchetti"* per calcolare certi determinanti.
#Esempio 
> [!ex] Esempio 1.1. (esempio di applicazione "concreta")
> Sia $A \in M_n(K)$, ove in particolare
> $$A = \begin{pmatrix}1 & 2 & 1 \\ 0 & 4 & 2 \\ 3 & 6 & 1 \end{pmatrix} $$
> allora
> $$\begin{align}\det A &= 2 \det\left(\begin{matrix}1&1&1 \\ 0 &2 & 2 \\ 3&3&1 \end{matrix}\right)\\ &= 4 \det\left(\begin{matrix}1&1&1 \\ 0 &2 & 1 \\ 3&3&1 \end{matrix}\right) \\ &= 4 (\ldots) \\ &= -8\end{align}$$ 
# 2. Teorema di caratterizzazione del determinante
#Teorema  
> [!thm] Teorema 2.1. (di caratterizzazione del determinante)
> Considerando il *determinante* come funzione, $\det$ è l'unica funzione (*applicazione lineare*)
> $$\det : M_{n}(K) \longrightarrow K $$
> che soddisfa le proprietà *D1, D2, D3* appena elencate. ([[#^17de20]])

La dimostrazione è stata omessa.
# 3. Corollari dei paragrafi 1,2
#Corollario 
> [!cor] Corollario 3.1. (condizioni di determinante nullo)
> Sia $A \in M_{n}(K)$.
> Per avere il determinante $\det A$ *nullo* (uguale a 0) si deve verificare una delle due proprietà (o entrambe):
> i. *Se la matrice ha due righe uguali*
> $$\det A \stackrel{\text{D2}}= -\det A \iff \det A = 0 $$
> ii. *Se la matrice ha almeno una riga/colonna nulla*
> Infatti
> $$\det A = k \det A, k \in K \iff \det A = 0$$

#Corollario 
> [!cor] Corollario 3.2. (effetti sul determinante degli OE)
> Sia $A \in M_n(K)$, siano *O.E.* le cosiddette *operazioni elementari* ([[Algoritmo di Gauß#^8a7c5e]], [[Algoritmo di Gauß#^1f10d6]], [[Algoritmo di Gauß#^175a42]]), allora se $\tilde{A}$ è una matrice ottenuta mediante le *O.E.*, allora valgono le seguenti:
> i. Se $\tilde{A}$ è ottenuta mediante una *OE1*, allora
> $$\det\tilde{A} = \det A $$
> ii. Se $\tilde{A}$ è ottenuta mediante una *OE2* e se $k \in K$ è lo scalare per cui si moltiplica la riga/colonna, allora
> $$\det\tilde{A} = k \det A $$
> iii. Se $\tilde{A}$ è ottenuta con una *OE3* allora
> $$\det \tilde{A} = \det A$$
^d73ef4

**DIMOSTRAZIONE** del punto iii. del *corollario 3.2.* ([[#^d73ef4]])
Se consideriamo
$$ A = \begin{pmatrix}A_{(1)} \\ \vdots \\ A_{(n)} \end{pmatrix}$$
e
$$ \tilde{A} = \begin{pmatrix}A_{(1)} \\ A_{(i)}+cA_{(j)} \\ \vdots \\ A_{(n)} \end{pmatrix}$$
Allora
$$\begin{align} \det \tilde{A} = \det \begin{pmatrix}A_{(1)} \\\vdots \\A_{(i)}+cA_{(j)} \\ \vdots \\ A_{(n)} \end{pmatrix} &= \det\begin{pmatrix}A_{(1)} \\\vdots\\ A_{(i)} \\ \vdots \\ A_{(n)} \end{pmatrix} + \det\begin{pmatrix}A_{(1)}\\\vdots \\ cA_{(j)} \\ \vdots \\ A_{(n)} \end{pmatrix} \\ &= \det A + c \det\begin{pmatrix}A_{(1)} \\ \vdots \\ A_{(j)}\\\vdots \\ A_{(j)} \\ \vdots \\ A_{(n)} \end{pmatrix} \\ &= \det A + 0 = \det A  \end{align} $$

#Corollario 
> [!cor] Corollario 3.3. (effetti dell'algoritmo di Gauß sul determinante)
> Sia $A \in M_n(K)$, sia $\tilde{A}$ la matrice *gradinizzata* a scala mediante Gauß ([[Algoritmo di Gauß]]), allora
> $$\det \tilde{A} = \lambda \det A $$
> per un certo $\lambda \in K\diagdown\{0\}$.
> In particolare
> $$\det A = 0 \iff \det \tilde{A} = 0 $$
> Inoltre se gradinizzandola *non* effettuiamo la *normalizzazione* degli elementi pivot, allora
> $$\det \tilde{A} = (-1)^{k} \det A $$
> dove $k \in \mathbb{N}$ rappresenta il numero di scambi di righe effettuate.
# 4. Teorema di caratterizzazione di matrici invertibili
Con questi strumenti appena sviluppati siamo pronti per dimostrare il risultato, secondo il quale il determinante di una matrice è in grado di caratterizzarne l'invertibilità: ovvero il *teorema di caratterizzazione delle matrici quadrate di rango massimo*.

#Teorema 
>[!thm] Teorema 4.1. (di caratterizzazione delle matrici quadrate di rango massimo)
> Sia $A \in M_n(K)$; allora vale che
> $$\boxed{\operatorname{rg}(A) < n \iff \det(A) = 0 }$$
> equivalentemente
> $$\operatorname{rg}(A) = n \iff \det(A) \neq 0$$
^864f0c

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 4.1.* ([[#^864f0c]])
Questo è un teorema del tipo *se e solo se*, quindi dimostriamo prima la prima implicazione:
"$\implies$": Sia $\operatorname{rg}(A) < n$, sia $\tilde{A}$ la matrice *gradinizzata* mediante Gauß; allora $\tilde{A}$ ha almeno una *riga nulla*, pertanto $\det \tilde{A} = 0 \implies \det A = 0$
"$\impliedby$": Sia $\det A = 0$, sia $\tilde{A}$ la matrice *gradinizzata* mediante Gauß , allora $\det \tilde{A} = 0$. 
Però $\tilde{A}$ è *gradinizzata (a scala)*, dunque *triangolare superiore*: pertanto $\det \tilde{A}$ è determinata dalla produttoria degli elementi della sua diagonale principale composta da $a_{11}, \ldots, a_{nn}$; se questa produttoria è $0$, allora almeno un $a_{ii} \in \tilde{A}$ per $\forall i \in \{1, \ldots, n\}$ è *nullo*.
Quindi dev'esserci *almeno* un gradino più *"lungo"* di $1$, il che implica per la *proposizione 1.1.* ([[Teoremi su Rango#^9290df]])
$$\operatorname{rg}(\tilde{A}) = \boxed{\operatorname{rg}(A) < n }$$

#Corollario 
Ora arriviamo al punto cruciale in cui colleghiamo *l'invertibilità di una matrice* con la sua *determinante*:
> [!cor] Corollario 4.1. (di caratterizzazione delle matrici invertibili)
> Sia $A \in M_n(K)$, allora
> $$\boxed{A \text{ invertibile} \iff \det A \neq 0 }$$
^7f9bc6

#Dimostrazione 
**DIMOSTRAZIONE** del *corollario 4.1.* ([[#^7f9bc6]])
La dimostrazione è banalissima, basta tener conto della *proposizione 3.1.* sul rango ([[Teoremi su Rango#^4dbbdd]]). Infatti
$$ A \text{ invertibile} \iff \operatorname{rg}(A) = n \iff \det A \neq 0 \ \blacksquare$$
# 5. Sviluppo di Laplace del determinante
#Teorema 
> [!thm] Teorema 5.1. (sviluppo di Laplace del determinante)
> Sia $A \in M_n(K)$, e vogliamo calcolare $\det A$: possiamo farlo in due modi
> - Sviluppo lungo la colonna k-esima
> Sia $1 \leq k \leq n$ l'indice di colonna, allora
> $$\det A = \sum_{i=1}^{n}(-1)^{i+k}\cdot a_{ik} \cdot \det(A_{ik}) $$
> - Sviluppo lungo la riga l-esima
> Sia $1 \leq l \leq n$ l'indice di riga, allora 
> $$\det A = \sum_{j=1}^{n}(-1)^{l+j}\cdot a_{lj} \cdot \det(A_{lj}) $$
^f27a22

**OSS 5.1.** Per capire quali *"segni"* prendere con lo *sviluppo di Laplace* è possibile disegnare una matrice dove i segni si alternano (e partendo con l'elemento $1,1$-esimo positivo): ovvero
$$\pm_n = \begin{pmatrix}+ & - & + & - & \ldots\\- &+ &- & + \ & \ldots \\ + & - & + & - & \ldots \\ \vdots & \vdots & \vdots & \vdots \end{pmatrix} $$
Infatti è possibile pensare questa matrice in $K = \{0, 1\} = \{-, +\}$, dove i caselli neri (bianchi) rappresentano il segno positivo e i caselli bianchi (neri) rappresentano il segno negativo.

#Esempio 
> [!es] Esempio-esercizio 5.1.
> Per esercizio si chiede di calcolare $\det A$ usando lo *sviluppo di Laplace* lungo la *seconda colonna* e lungo la *terza riga*, ove
> $$A = \begin{pmatrix}1 & 0 & 2 \\ 0 & 1 & 1 \\ 2 &1 & 1 \end{pmatrix} $$
## Determinante delle matrici trasposte
#Corollario 
> [!cor] Corollario 5.1. (determinante della trasposta)
> Sia $A \in M_n(K)$ allora
> $$\det A = \det {}^t A $$
^5e800f

#Dimostrazione 
**DIMOSTRAZIONE** del *corollario 5.1.* ([[#^5e800f]])
Per definizione $\det {}^t A$ è lo *sviluppo di Laplace* lungo la *prima colonna di* $^t A$, che è equivalente a dire "lo *sviluppo di Laplace* lungo la *prima riga* di $A$", che è uguale a $\det A$.
# 6. Teorema di Binet
#Teorema 
> [!thm] Teorema 6.1. (di Binet)
> Sia $A, B \in M_n(K)$, allora
> $$\det(A \cdot B) = \det A \cdot \det B $$
^beec6a

La dimostrazione è stata omessa.
## Determinante della matrice inversa
#Corollario 
> [!cor] Corollario 6.1. (determinante dell'inversa)
> Sia $A \in M_n(K)$, invertibile.
> Allora
> $$\det (A^{-1}) = \frac{1}{\det A} = (\det A)^{-1} $$
^789a56

#Dimostrazione 
**DIMOSTRAZIONE** del *corollario 6.1.* ([[#^789a56]])
Osserviamo che per definizione vale che
$$A \cdot A^{-1} = \mathbb{1}_n $$
Per il *teorema di Binet* ([[#^beec6a]]) e per la proprietà *D3* ([[#^17de20]]) vale che
$$ \begin{align} \det(A \cdot A^{-1}) &= \det(\mathbb{1}_n) \\ \det A \cdot \det A^{-1} &= 1 \\ \det A^{-1}&=\frac{1}{\det A}\end{align}$$
