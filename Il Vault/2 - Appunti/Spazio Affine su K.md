---
data: 2023-12-09
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Spazio Affine su K
tipologia: appunti
stato: "1"
capitolo: Geometria Affine
---
- - -
*Esempio particolare di spazio affine: definizione di spazio affine su $K^n$, $\mathbb{A}^n_K$*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Introduzione alla Geometria Affine]]
- [[Definizione di Spazio Affine]]
# 1. Definizione particolare di spazio affine su $K^n$
#Esempio 
> [!def] Esempio particolare $\mathbb{A}^n_{K}$
> Si può prendere lo *spazio affine* $\mathbb{A} = K^n$ e scegliere il suo *spazio vettoriale "d'appoggio"* il medesimo (ovvero $V = K^n$): dal discorso introduttorio ([[Introduzione alla Geometria Affine]]) ricordiamoci che comunque $K^n$ svolge due ruoli *diversi*! Da un lato abbiamo $K^n$ in quanto *spazio affine*, dall'altro lato abbiamo $K^n$ in quanto *spazio vettoriale*.
> 
> Allora quando pensiamo $K^n$ in quanto *spazio affine*, denotiamo i suoi elementi come dei *vettori-riga*; invece quando la pensiamo in quanto *spazio vettoriale*, denotiamo i suoi elementi come dei *vettori-colonna*.
> 
> In questo caso la funzione $\sigma$ di *definizione* che rende $K^n$ uno spazio affine è il seguente.
> $$\begin{align} \sigma: & \ K^n \times K^n \longrightarrow K^n \\ & \ (P,Q) \mapsto \overrightarrow{PQ} \\ & \ [(p_1, \ldots, p_n), (q_1, \ldots, q_n)] \mapsto \begin{pmatrix}q_1-p_1 \\ \vdots \\ q_n-p_n\end{pmatrix}\end{align}$$
> Teniamo questa definizione in mente, in quanto questo ci servirà per studiare lo spazio $\mathbb{A}^2_\mathbb{R}$.
> Infatti, indicheremo questo tipo di spazio affine con
> $$\boxed{\mathbb{A}^n_K}$$
^30176a

# 2. Esempio
#Esempio 
> [!exm] dello spazio affine $\mathbb{A}^2_\mathbb{R}$
> Consideriamo lo spazio affine $\mathbb{A}^2_\mathbb{R}$.
> Prendiamo i punti $P, Q = (1,1), (2,0)$.
> Allora in questo caso 
> $$\sigma(P,Q) = \overrightarrow(PQ) = \begin{pmatrix}2-1 \\ 0-1 \end{pmatrix} = \begin{pmatrix}1 \\ -1 \end{pmatrix}$$
> (*figura 3.1.*)

**FIGURA 3.1.** (esempio dello spazio affine 2D sui reali)
![[Pasted image 20231209115048.png]]