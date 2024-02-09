---
data: 2024-01-09
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Teorema spettrale
tipologia: appunti
stato: "1"
capitolo: Geometria Euclidea (cenni)
---
- - -
*Il teorema spettrale per le matrici simmetriche: enunciato, conseguenze immediate ed esempi.*
- - -
# 0. Voci correlate
- [[Definizione di Matrice Diagonale e Applicazione Diagonalizzabile]]
- [[Definizione di Autovalore, Autovettore, Autospazio]]
- [[Matrice]]
- [[Definizione della Matrice associata a un'Applicazione Lineare]]
# 1. Enunciato del teorema
#Teorema 
> [!thm] spettrale per le matrici simmetriche
> Sia $A \in M_n(\mathbb{R})$ una matrice *quadrata simmetrica* ([[Matrice#^501fe6]]).
> Allora *esiste sempre* una *base ortonormale di autovettori* per l'applicazione lineare associata alla matrice ([[Applicazioni Lineari Notevoli#^fd2d05]]), $L_A(v) = A\cdot v$.

#Corollario 
> [!cor] ulteriore criterio di diagonalizzabilità
> Sia $M^\mathcal{E}_\mathcal{E}(f)$ una *matrice associata alla trasformazione lineare* $f$ per il *dominio*.
> Se questa matrice è *simmetrica*, allora $f$ è *diagonalizzabile* con una base *ortonormale* $\mathcal{B}$; dunque
> $$
> P = M^\mathcal{B}_\mathcal{E}(\operatorname{id}_\mathbb{R}^3) \implies P^{-1}\cdot A \cdot P \text{ diagonale} 
> $$

# 2. Esempio
#Esempio 
> [!exm] Esempio 2.1.
> Consideriamo la *matrice simmetrica*
> $$A = \begin{pmatrix}2 & 0 & -3 \\ 0 & -1 & 0 \\ -3 & 0 & 2 \end{pmatrix} $$
> di cui sappiamo che la sua trasformazione lineare associata $L_A$ è *diagonalizzabile*.
> 
> Calcoliamo lo *spettro* di $f$ considerando le *radici del polinomio caratteristico* $p_f(\lambda)$.
> ... *parte lasciata da svolgere al lettore per esercizio* ...
> Dunque abbiamo $\operatorname{sp} f = \{-1, 5\}$
> 
> Verifichiamo che $m_g(-1) = m_a(-1)$, calcolandone l'autospazio
> ... *parte lasciata da svolgere al lettore per esercizio* ...
> Ora calcoliamo l'autospazio per $\lambda = 5$.
> ... *parte lasciata da svolgere al lettore per esercizio* ...
> Infine abbiamo ottenuto i tre vettori
> $$\begin{pmatrix}0 \\ 1 \\ 0 \end{pmatrix}, \begin{pmatrix}1 \\ 0 \\ 1 \end{pmatrix}, \begin{pmatrix}-1 \\ 0 \\ 1 \end{pmatrix} $$
> che forma una *base ortonormale* per $\mathbb{R}^3$.
