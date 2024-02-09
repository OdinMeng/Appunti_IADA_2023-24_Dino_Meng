---
data: 2023-12-03
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Proposizioni sulle Applicazioni Lineari Diagonalizzabili
tipologia: appunti
stato: "1"
---
*Proposizioni di caratterizzazione sulle applicazioni lineari diagonalizzabili.*
- - -
# 1. Osservazione sulle matrici
#Osservazione 
> [!rmk] condizione necessaria e sufficiente per la diagonalizzabilità di un'applicazione lineare
> Ricordiamo che se $f: V \longrightarrow V$ è un'*applicazione lineare* di *dimensione finita* ([[Definizione di Applicazione Lineare#^9b39f9]]), e $N, N'$ sono le *matrici associate di* $f$ alle basi $\mathcal{B}, \mathcal{C}$ di $V$, ovvero
> $$N= M^\mathcal{B}_\mathcal{B}(f); N'=M^\mathcal{C}_\mathcal{C}(f)$$
> Supponiamo inoltre che $N'$ sia diagonale.
> Allora dato che $N, N'$ sono simili sicuramente vale che
> $$N' = P^{-1}\cdot N \cdot P$$
> dove $P$ è una *matrice quadrata* invertibile.
> 
> Pertanto si può dire che un'applicazione lineare $f$ è *diagonalizzabile* se e solo se *presa una sua matrice associata $N$, questa è simile ad una matrice diagonale; ovvero esiste una matrice $P$ tale che la matrice risultante del calcolo $P^{-1}\cdot N \cdot P$ sia diagonale.*

# 2. Proposizione di caratterizzazione delle applicazioni diagonalizzabili
#Proposizione 
> [!prp] proprietà fondamentale della diagonalizzabilità
> Sia $f: V \longrightarrow V$ un'*applicazione lineare* di *dimensione finita*.
> Allora $f$ è diagonalizzabile *se e solo se* esiste una base $\mathcal{B}$ di $V$ costituita tutta da *autovettori*.
^b86a9d

#Dimostrazione 
**DIMOSTRAZIONE** della *proposizione 2.1.* ([[#^b86a9d]])
"$\implies$": Basta considerare la definizione di *applicazione lineare diagonalizzabile* ([[Definizione di Matrice Diagonale e Applicazione Diagonalizzabile#^ea7cde]]).
"$\impliedby$: Sia $\mathcal{B} = \{v_1, \ldots, v_n\}$ una *base* costituita da *autovettori* ([[Definizione di Autovalore, Autovettore, Autospazio#^0f1977]]), allora ad ogni $v_i$ è associato un *autovalore* $\lambda_i$ ([[Definizione di Autovalore, Autovettore, Autospazio#^1098ea]]) tale che valga l'uguaglianza $f(v_i) = \lambda_i v_i$.
Ma allora ciò vuol dire che la sua *matrice associata* ([[Definizione della Matrice associata a un'Applicazione Lineare#^ea78d6]]) è 
$$M^{\mathcal{B}}_\mathcal{B}(f) = \begin{pmatrix}\lambda_1 & 0 & \ldots & 0 \\ 0 & \lambda_2 & \ldots & 0 \\ \vdots & \vdots & \vdots & \vdots \\ 0 & 0 & 0 & \lambda_n\end{pmatrix}$$
Allora chiaramente questa matrice è *diagonale*, il che significa $f$ è *diagonalizzabile*. $\blacksquare$
## Gli autovalori possono essere uguali (osservazione fondamentale)
> [!rmk] Osservazione 2.1. 
> Però notiamo che non abbiamo supposto che tutti gli *autovalori* $\lambda_i$ sono tutti distinti: infatti, alcuni *autovettori* possono avere lo stesso autovalore!
> Per comprendere che una tale base possa esistere, andiamo a ripensare gli *autospazi* ([[Definizione di Autovalore, Autovettore, Autospazio#^1486dc]]) in una nuova maniera.
> In particolare, ridimostriamo che gli *autospazi* sono *sottospazi vettoriali* in una maniera alternativa.
> Sia $f: V \longrightarrow V$ un'applicazione lineare di dimensione finita; sia $\lambda \in K$ un *autovalore*.
> Allora per definizione deve esistere un *autovettore* per l'autovalore $\lambda$; ovvero
> $$\begin{align}f(v) = \lambda \cdot v &\iff f(v) - \lambda \cdot v = 0 \\ &\iff f(v) - \lambda \cdot \operatorname{id}_V(v) = 0 \\ &\iff (f-\lambda\operatorname{id}_V)(v) = 0 \\ f_\lambda := f-\lambda\operatorname{id}_V &\iff f_\lambda(v) = 0\end{align}$$
> Consideriamo dunque la *"nuova applicazione"*
> $$f_\lambda: V \longrightarrow V$$
> Notiamo innanzitutto che $v \neq 0_V \in \ker f_\lambda$.
> Pertanto $\ker f_\lambda \neq \{0\}$; allora $f_\lambda$ *non* è *iniettiva*.
> Allora $f_\lambda$ *non* è neanche *invertibile*;
> dunque per qualsiasi base $\mathcal{B}$ di $V$ vale che
> $$\begin{align}M^\mathcal{B}_\mathcal{B}(f) \text{ non invertibile} &\iff \det(M^\mathcal{B}_\mathcal{B}(f_\lambda)) = 0 \\ &\iff \det(M^\mathcal{B}_\mathcal{B}(f-\lambda \cdot \operatorname{id}_V))=0 \\ &\iff \det(M^\mathcal{B}_\mathcal{B}(f) - \lambda M^\mathcal{B}_\mathcal{B}(\operatorname{id}_V)) = 0 \\ &\iff \det(M^\mathcal{B}_\mathcal{B}(f) - \lambda \cdot \mathbb{1}_n) = 0\end{align}$$
> Pertanto gli *autovalori* di $f$ sono *tutti e soli* gli *autovalori* $\lambda \in K$ tali per cui si ha
> $$\boxed{\det(M^\mathcal{B}_\mathcal{B}(f) - \lambda \cdot \mathbb{1}_n) = 0}$$
> Per una qualsiasi base $\mathcal{B}$ di $V$.
> Il nostro problema principale sarà quello di trovare quei valori $\lambda$ che soddisfano tale uguaglianza; ovvero dobbiamo trovare gli *autovalori* $\lambda$: lo risolveremo mediante la definizione del *polinomio caratteristico* ([[Polinomio Caratteristico di una Applicazione Lineare#^b7816e]]).
> 
> Infine, osserviamo che l'autospazio di $\lambda$ è sottospazio vettoriale di $V$ (come volevasi dimostrare all'inizio).
> $$\begin{align}\operatorname{Aut}\lambda &= \{v \in V: f(v) = \lambda v\} \\ &= \{v \in V: f_\lambda(v) = 0\} \\ &= \ker f_\lambda \end{align}$$
> Infatti, essendo $\ker f_\lambda$ uno *sottospazio vettoriale* di $V$, allora $\operatorname{Aut} \lambda$ è anch'esso uno *sottospazio vettoriale*.
> 

^b8112c

