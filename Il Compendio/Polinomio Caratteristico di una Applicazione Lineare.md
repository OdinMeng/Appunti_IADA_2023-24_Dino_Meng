---
data: 2023-12-03
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Polinomio Caratteristico di una Applicazione Lineare
tipologia: appunti
stato: "1"
---
*Definizione di polinomio caratteristico di una applicazione lineare; esempi.*
- - -
# 1. Definizione del polinomio caratteristico di $f$
#Definizione 
> [!def] polinomio caratteristico di un'applicazione lineare
> Sia $f: V \longrightarrow V$ un'*applicazione lineare* con $\dim V=n$ ([[Definizione di Applicazione Lineare#^9b39f9]]).
> Consideriamo ora l'autovalore $\lambda$ come un *parametro/incognita/variabile*; formiamo quindi il determinante
> $$\det(M^\mathcal{B}_\mathcal{B}(f) - \lambda \cdot \operatorname{id}_V)$$
> dove $\mathcal{B}$ è una qualsiasi *base* di $V$.
> Per la *definizione del determinante* ([[Determinante#^be5bde]]; si possono usare altre definizioni alternative), il determinante della matrice $\det(M^\mathcal{B}_\mathcal{B}(f) - \lambda \cdot \operatorname{id}_V)$ forma un *polinomio* in $\lambda$ a *coefficienti* in $K$ e questo polinomio è detto il *polinomio caratteristico* di $f$, ed e denotato come
> $$P_f(\lambda)$$
^b7816e

#Osservazione 
> [!rmk] utilità del polinomio caratteristico
> Tenendo in conto le considerazioni fatte sulle *applicazioni lineari diagonalizzabili*, in particolare sui suoi *autovalori* ([[Proposizioni sulle Applicazioni Lineari Diagonalizzabili#^b8112c]]), questa definizione del *polinomio caratteristico* $P_f(\lambda)$ serve per *trovare* gli autovalori di $f$: basta porre infatti
> $$\boxed{P_f(\lambda) = 0}$$ 
> e risolvere tale equazione.

^3daf01

# 2. Esempio
#Esempio 
> [!exm] esempio
> Considerare $f: \mathbb{R}^2 \longrightarrow \mathbb{R}^2$, ove
> $$f\begin{pmatrix}x \\ y\end{pmatrix} = \begin{pmatrix}x+y \\ 2x+2y\end{pmatrix}$$
> Con la sua *base canonica*
> $$\mathcal{E} = \{\begin{pmatrix}1 \\ 0\end{pmatrix}, \begin{pmatrix}0 \\ 1 \end{pmatrix}\}$$
> Allora la sua *matrice associata* è
> $$M^\mathcal{E}_\mathcal{E}(f) = \begin{pmatrix}1 & 1 \\ 2 & 2\end{pmatrix}$$
> Pertanto il *polinomio caratteristico* è 
> $$\begin{align}P_f(\lambda) &= \det(M^\mathcal{E}_\mathcal{E}(f)-\lambda \cdot \mathbb{1}_n) \\ &= \det(\begin{pmatrix}1-\lambda & 1 \\ 2 & 2-\lambda \end{pmatrix}) \\ &= (1-\lambda)(2-\lambda)-2 \\ &= \lambda^2-3\lambda \end{align}$$
> Allora ponendo $P_f(\lambda) = 0$ si ha che *gli autovalori di* $f$ sono
> $$P_f(\lambda) = \implies \lambda \in \{0, 3\}$$
> Di conseguenza
> $$\exists v_1, v_2 \in \mathbb{R}^2 \diagdown \{\begin{pmatrix} 0 \\ 0\end{pmatrix}\}: f(v_1) = \lambda_1 v_1; f(v_2) = \lambda_2 v_2$$
> Notiamo che $v_1, v_2$ possono formare una *base* di $V$ in quanto sono *linearmente indipendenti*.
> Allora calcoliamo $v_1, v_2$ determinando
> $$\ker f_0 = \ker f $$
> e 
> $$\ker f_3 = \ker(f - 3 \operatorname{id}_V)$$
> che sono rispettivamente gli *autospazi* di $0, 3$.
