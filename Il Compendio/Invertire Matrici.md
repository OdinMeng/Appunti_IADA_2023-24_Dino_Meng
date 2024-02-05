---
data: 2023-11-21
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Invertire Matrici
tipologia: appunti
stato: "1"
---
*Metodi per invertire matrici.*
- - -
# 0. Preambolo
Nella *proposizione 3.1.* sul rango ([[Teoremi su Rango#^4dbbdd]]) abbiamo semplicemente dimostrato *l'esistenza* di $B$ ($A^{-1}$): ma siamo avari di conoscenza e vogliamo sapere tutto, otteniamo dunque un *algoritmo* per determinare $B$.
# 1. Manipolazione della matrice con le O.E.
Quindi *"procediamo"* con la dimostrazione *costruttiva* di *proposizione 3.1.* ([[Teoremi su Rango#^4dbbdd]]).
Abbiamo appena visto che per calcolare $A^{-1}$ dobbiamo risolvere *tutti* i sistemi lineari
$$A \cdot B^{(i)} = e_i $$
Quindi cerchiamo di risolverli *tutti* in un singolo colpo considerando la matrice $(A|\mathbb{1}_n)$.
Notiamo che
$$A \text{ invertibile} \implies \operatorname{rg}(A)=n \implies \operatorname{rg}(\tilde{A})=n$$
dove $\tilde{A}$ rappresenta la matrice $A$ gradinizzata mediante l'algoritmo di Gauß.
Quindi abbiamo una matrice del tipo
$$\tilde{A} = \begin{pmatrix}1 & \ast & \ast & \ldots & \ast \\0 & 1 & \ast & \ldots &\ast \\\vdots & & \ddots & \ldots & \ast \\0 & \ldots &\ldots & \ldots & 1 \end{pmatrix} $$
Notiamo che mediante le operazioni elementari *O.E.* possiamo *"annullare"* la colonna ${n}$-esima facendo rimanere solo l'elemento $\tilde{A}_{nn}=1$.
Ovvero
$$
\tilde{A} = \begin{pmatrix}1 & \ast & \ast & \ldots & \ast \\0 & 1 & \ast & \ldots &\ast \\\vdots & & \ddots & \ldots & \ast \\0 & \ldots &\ldots & \ldots & 1 \end{pmatrix} \rightarrow \begin{pmatrix}1 & \ast & \ast & \ldots & 0 \\0 & 1 & \ast & \ldots &0  \\ \vdots & & \ddots & \ldots & \vdots \\0 & \ldots &\ldots & \ldots & 1 \end{pmatrix} 
$$
Ripetendo *a ritroso* da $n$ fino al primo elemento, portiamo $\tilde{A}$ nella forma della matrice identità $\mathbb{1}_n$.
Quindi applicando queste operazioni a $(A|\mathbb{1}_n)$ otteniamo una matrice del tipo $(\mathbb{1}_n|B)$ con $B$ una certa matrice $M_n(K)$. 
Ora, la matrice di *partenza* codificava i sistemi $Ax = e_i$, le cui soluzioni sono le colonne dell'inversa $A^{-1}$, ricordando che le *O.E.* non cambiano le soluzioni in quanto queste portano a sistemi lineari equivalenti.
L'ultima matrice codifica i *sistemi lineari* del tipo $\mathbb{1}_n x = B^{(i)}$, le *soluzioni* di questo ultimo sistema sono le *colonne* della matrice inversa $A^{-1}$, ovvero di $B$, il che ci mostra
$$B = A^{-1} $$
## Esempio
#Esempio 
>[!ex] Esempio 1.1. Calcolo dell'inversa di una matrice
> Allora vediamo di calcolare l'inversa di una matrice; sia dunque
> $$A = \begin{pmatrix}2 & 1 \\ 5 & 3 \end{pmatrix}$$
> e vogliamo calcolare l'inversa $A^{-1}$. 
> Allora con l'algoritmo appena descritto consideriamo la matrice completa
> $$(A | \mathbb{1}_2) = \begin{pmatrix}2 & 1 & | & 1 & 0 \\5 & 3 & | & 0 & 1 \end{pmatrix} $$
> Effettuando delle operazioni su questa matrice, in particolare la *gradinizzazione* mediante l'[[Algoritmo di Gauß]] e dopodiché delle operazioni elementari, abbiamo la matrice
> $$(\mathbb{1}_2 | A^{-1}) = \begin{pmatrix}1 & 0 & | & 3 & 1 \\ 0 & 1 & | & -5 & 2 \end{pmatrix}$$
> Allora la matrice inversa è
> $$A^{-1} = \begin{pmatrix} 3 & -1 \\ -5 & 2\end{pmatrix}$$
^a51ef6
# 2. Metodo dei cofattori (cenno)
**OSS 2.1.** Dall'*esempio 1.1.* ([[#^a51ef6]]) noto che la matrice inversa di $A$ è esattamente lo stesso con dei numeri e segni scambiati.
Quindi voglio codificare con un *singolo numero* l'invertibilità di una matrice quadrata, che definiremo come il *determinante* ([[Determinante]]).
Consideriamo ad esempio il caso per le matrici quadrate $M_2(K)$.
Siano quindi
$$A = \begin{pmatrix}a_{11} & a_{12} \\ a_{21} & a_{22} \end{pmatrix} $$
e 
$$ B = \begin{pmatrix}a_{22} & -a_{12} \\ -a_{21} & a_{11} \end{pmatrix} $$
Svolgendo la moltiplicazione righe per colonne ([[Operazioni particolari con matrici#^eecbc9]]), otteniamo 
$$A B = \begin{pmatrix}a_{11}a_{22}-a_{12}a_{21} & -a_{11}a_{12} + a_{11}a_{12} \\ a_{21}a_{22}-a_{21}a_{22} & -a_{21}a_{12}+a_{11}a_{22}\end{pmatrix} = \begin{pmatrix} a_{11}a_{22}-a_{12}a_{21} & 0 \\0 & a_{11}a_{22}-a_{12}a_{21}\end{pmatrix} $$
Notiamo che gli elementi $(AB)_{11}$ e $(AB)_{22}$ hanno lo stesso numero $a_{11}a_{22}-a_{12}a_{21}$: dunque da qui abbiamo due risultati: ^b56a11
1) $A$ invertibile se e solo se $a_{11}a_{22}-a_{12}a_{21} \neq 0$
2) se $A$ invertibile, allora 
$$A^{-1} = \frac{1}{a_{11}a_{22}-a_{12}a_{21}}\begin{pmatrix}a_{22} & -a_{12} \\ -a_{21} & a_{11} \end{pmatrix} $$
# 3. Metodo dei cofattori (definizione rigorosa)
Per vedere il *metodo dei cofattori*, andare alla pagina [[Cofattore di una matrice]].
![[Cofattore di una matrice#^70361d]]
