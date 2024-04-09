---
data: 2023-12-09
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Riferimento affine su uno Spazio Affine
tipologia: appunti
capitolo: Geometria Affine
stato: "1"
---
- - -
*Definizione di riferimento affine su uno spazio affine; esempio.*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Definizione di Spazio Affine]]
- [[Definizione di Base]]
- [[Spazio Affine su K]]
# 1. Definizione di riferimento affine
#Definizione 
> [!def] riferimento affine su uno spazio affine relativo ad una base
> Sia $\mathbb{A}$ uno *spazio affine* su $V$ ([[Definizione di Spazio Affine#^100c32]]), sia $V$ di *dimensione finita* con $\dim V = n$ ([[Dimensione#^3a9321]]).
> Definiamo un *riferimento affine su* $\mathbb{A}$ come la *coppia* $(O, \mathcal{B})$, dove
> - $O \in \mathbb{A}$ è un punto che definiamo essere *"l'origine del riferimento affine"*.
> - $\mathcal{B}$ è una *base* di $V$ ([[Definizione di Base#^def430]]).
> 
> Allora dato un *riferimento affine* $(O, \mathcal B)$ e dato un *punto* $P \in \mathbb{A}$, le *coordinate* di $P$ rispetto a $(O, \mathcal{B})$ sono la $n$-upla (ovvero il *vettore-riga*) $(p_1, \ldots, p_n)$ data dalle *coordinate* rispetto alla base $\mathcal{B}$ del vettore $\sigma(O, P)$ ([[Definizione di Base#^820fd0]]).

# 2. Esempio con spazio affine su K
#Definizione 
> [!def] riferimento standard / canonico
> Se consideriamo lo spazio affine $\mathbb{A}^n_\mathbb{R}$ ([[Spazio Affine su K]]) e il riferimento affine $(O, \mathcal{E})$ dove:
> - $O = (0,0)$
> - $\mathcal{E} = \{e_1, e_2\}$ è la *base canonica* dove 
>   $$e_1 = \begin{pmatrix}1 \\ 0 \end{pmatrix}, e_2 = \begin{pmatrix}0 \\ 1 \end{pmatrix}$$
>
> Allora il riferimento $(O, \mathcal{E})$ viene definito come il *"riferimento standard/canonico"* di $A^n_\mathbb{R}$ e le *coordinate* di un qualsiasi punto rispetto a $(O, \mathcal{E})$ sono dette le *"coordinate standard"*.

#Esempio 
> [!exm] esempio con riferimento canonico
> Considero lo spazio affine $\mathbb{A}^3_\mathbb{R}$ e il *riferimento standard* $(O, \mathcal{E})$.
> Allora fissando il punto $P = (3,1,2)$ voglio ottenere le sue *coordinate standard* rispetto al *riferimento standard*.
> Considero dunque il vettore $\sigma(O, P)$:
> $$\overrightarrow{OP} = \begin{pmatrix} 3-0 \\ 1-0 \\ 2-0\end{pmatrix} = \begin{pmatrix}3 \\ 1 \\ 2 \end{pmatrix}$$
> Consideriamo dunque le sue *coordinate* rispetto alla *base standard* $\mathcal{E}$;
> $$\overrightarrow{OP} = 3 \begin{pmatrix}1 \\ 0 \\ 0 \end{pmatrix} + 1\begin{pmatrix}0 \\ 1 \\ 0\end{pmatrix} + 2\begin{pmatrix}0 \\ 0 \\ 1 \end{pmatrix}$$
> Pertanto le *coordinate* di $\sigma(O,P)$, ovvero le coordinate del punto $P$ rispetto al riferimento standard, sono $3, 1, 2$.

#Esempio 
> [!exm] esempio con riferimento non canonico
> Se avessimo considerato sempre lo stesso punto $P = (3,1,2) \in \mathbb{A}^3_\mathbb{R}$ ma avessimo preso un altro *riferimento affine* $(O', \mathcal{B})$, dove:
> - $O' = (1,0,0)$
> - La base non standard è $$\mathcal{B} = \left\{\begin{pmatrix}2 \\ 0 \\ 0 \end{pmatrix}, \begin{pmatrix}0 \\ 1 \\ 0 \end{pmatrix}, \begin{pmatrix} 0 \\ 0 \\ -1\end{pmatrix}\right\}$$
> 
> Allora per calcolare le *coordinate* del punto $P$ rispetto al *"nuovo"* riferimento affine si deve comunque prendere in considerazione il vettore $\sigma(O', P)$:
> $$\overrightarrow{O'P} = \begin{pmatrix}3-1 \\ 1-0 \\ 2-0 \end{pmatrix} = \begin{pmatrix}2 \\ 1 \\ 2 \end{pmatrix}$$
> Allora in questo caso le *coordinate* di $\sigma(O', P)$ rispetto a $\mathcal{B}$ sono $(1,1,-2)$.

