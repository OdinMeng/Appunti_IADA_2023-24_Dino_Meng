---
data: 2024-01-09
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Ortogonalità e ortonormalità
tipologia: appunti
stato: "1"
capitolo: Geometria Euclidea (cenni)
---
- - -
*Definizione di ortogonalità tra due vettori e di una base, ortonormalità di una base di un R-spazio vettoriale. Esempi di basi ortonormali.*
- - -
# 0. Voci correlate
- [[Norma, versore e angolo]]
- [[Teorema spettrale]]
# 1. Condizioni di ortogonalità e di ortonormalità
#Definizione 
> [!def] vettori ortogonali
> Due vettori $v, w \in \mathbb{R}^n$ si dicono *ortogonali* se si verifica che il loro *prodotto scalare è nullo*.
> $$v \cdot w = 0$$

#Osservazione 
> [!rmk] conseguenza geometrica
> Come osservato nell'*osservazione 3.2* sugli angoli ([[Norma, versore e angolo#^013add]]), l'ortogonalità di due vettori è sostanzialmente la codificazione *"algebrica"* della perpendicolarità di due rette.
> Infatti due vettori sono ortogonali se e solo se perpendicolari.

#Definizione 
> [!def] base ortogonale
> Sia $\mathcal B$ una *base* di $\mathbb{R}^n$ ([[Definizione di Base#^def430]]).
> Allora $\mathcal B$ si dice *ortogonale* se tutti gli *elementi* di tale insieme sono *a due a due* ortogonali tra di loro.
> 

#Definizione 
> [!def] base ortonormale
> Sia $\mathcal B$ una *base* di $\mathbb{R}^n$.
> Allora $\mathcal{B}$ si dice *ortonormale* se questa base è *ortogonale* e tutti gli elementi della base $b \in \mathcal B$ sono dei *versori* ([[Norma, versore e angolo#^8d3d4d]]).

^ac24ad

# 2. Ortogonale di un sottospazio vettoriale
#Definizione 
> [!def] ortogonale di un sottospazio
> Sia $W \subseteq \mathbb{R}^n$ un *sottospazio vettoriale*.
> Si definisce *l'ortogonale di $W$* come l'insieme formato dai vettori in $\mathbb{R}^n$ tali che questi vettori e ogni vettore di $W$ sia *ortogonale*.
> $$W^\bot = \{v \in \mathbb{R}^n: \forall w \in W, v \cdot w = 0\}$$

# 3. Esempi/esercizi misti
#Esempio 
> [!exm] Esempio 3.1.
> Sia $\mathcal{B}$ il seguente insieme di vettori in $\mathbb{R}^3$.
> $$\mathcal B = \left\{\begin{pmatrix} 3 \\ -2 \\ 0\end{pmatrix}, \begin{pmatrix}2 \\ 3 \\ 0 \end{pmatrix}, \begin{pmatrix}0 \\ 0 \\ -1 \end{pmatrix}   \right\}$$
> $\mathcal{B}$ è una base *ortogonale* per $\mathbb{R}^3$.
> Infatti i *prodotti scalari* tra il terzo e primo, terzo e secondo elemento sono ovviamente nulli; facendo dei calcoli, lasciati da svolgere al lettore, si verifica che i primi due vettori sono ortogonali.

#Esercizio  
> [!exr] Esercizio 3.1.
> Dimostrare che la *base canonica* per $\mathbb{R}^n$ per un qualsiasi $n \in \mathbb{N}$
> $$\mathcal{E}_n = \left\{\begin{pmatrix} 1 \\ 0 \\ \vdots \\ 0\end{pmatrix}, \begin{pmatrix}0 \\ 1 \\ \vdots \\ 0 \end{pmatrix}, \ldots, \begin{pmatrix}0 \\ 0 \\ \vdots \\ 1 \end{pmatrix}   \right\} $$
> è *ortonormale*.

#Esercizio 
> [!exr] Esercizio 3.2.
> Sia $\mathcal{B}$ una *base ortonormale* per $\mathbb{R}^n$.
> Sia definito la *matrice di cambiamento* 
> $$B = M^\mathcal{B}_\mathcal{E}(\operatorname{id}_{\mathbb{R}^n})$$
> Calcolare $^t B \cdot B$.

#Esercizio  
> [!exr] Esercizio 3.3.
> Mostrare che $W^\bot$ è un *sottospazio vettoriale* per $\mathbb{R}^n$.