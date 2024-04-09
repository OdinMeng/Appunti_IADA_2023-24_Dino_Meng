---
data: 2023-12-02
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Definizione di Matrice Diagonale e Applicazione Diagonalizzabile
tipologia: appunti
stato: "1"
---
*Definizione di una matrice quadrata diagonale e di un'applicazione lineare diagonalizzabile.*
- - -
# 1. Matrice quadrata diagonale
#Definizione 
> [!def] matrice quadrata diagonale
> Sia $A \in M_n(K)$ una *matrice quadrata* ([[Matrice#^a95650]]).
> $A$ si dice anche *diagonale* se tutti gli elementi non-nulli appartengono solo alla *diagonale principale* della matrice ([[Matrice]]).
# 2. Applicazione Lineare Diagonalizzabile
#Definizione 
> [!def] applicazione lineare diagonalizzabile
> Sia $f: V \longrightarrow V$ un'*applicazione lineare* ([[Definizione di Applicazione Lineare#^9b39f9]]) con $\dim V = n$.
> $f$ si dice *diagonalizzabile* se esiste una base $\mathcal{B}$ di $V$ tale che la *matrice associata* $M^\mathcal{B}_\mathcal{B}(f)$ ([[Definizione della Matrice associata a un'Applicazione Lineare#^ea78d6]]) è *diagonale*.

^ea7cde

#Osservazione 
> [!rmk] significato della diagonalizzabilità
> Dire che la *matrice associata* $M^\mathcal{B}_\mathcal{B}(f)$ è *diagonale* è equivalente a dire che *ogni immagine dell'elemento della base* $\mathcal{B}$ è *autovettore* per un certo autovalore $\lambda_i$.
> Infatti se $M^\mathcal{B}_\mathcal{B}(f)$ è diagonale, allora è una matrice del tipo
> $$\begin{pmatrix}\lambda_1 & 0 & \ldots & 0 \\ 0 & \lambda_2 & \ldots & 0 \\ \vdots & \vdots & \vdots & \vdots \\ 0 & 0 & 0 & \lambda_n\end{pmatrix}$$
> Allora, *per definizione*, ogni immagine del vettore di $\mathcal{B}$ è del tipo
> $$f(v_i) = 0 \cdot \lambda_1 + \ldots + \lambda_i v_i + \ldots + 0 \cdot \lambda_n$$
> Ovvero $v_i$ è elemento dello spettro di $\lambda_i$.

