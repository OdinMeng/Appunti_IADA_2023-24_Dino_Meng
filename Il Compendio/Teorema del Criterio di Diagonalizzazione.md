---
data: 2023-12-03
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Teorema del Criterio di Diagonalizzazione
tipologia: appunti
stato: "1"
---
*Teorema del Criterio di Diagonalizzazione: osservazione preliminare, enunciato ed esempio.*
- - -
# 0. Osservazione preliminare
#Osservazione 
> [!rmk] osservazione preliminare
> Supponiamo che $f: V \longrightarrow V$ sia un'*applicazione lineare* con $\dim V = n$ ([[Definizione di Applicazione Lineare#^9b39f9]]), tale per cui il *polinomio caratteristico* ([[Polinomio Caratteristico di una Applicazione Lineare#^3daf01]]) $P_f(\lambda)$ si scompone nel prodotto di *$n$ fattori lineari* che sono tutti *distinti*; ovvero un polinomio del tipo
> $$P_f(\lambda = (\lambda-\alpha_1)\cdot \ldots \cdot (\lambda - \alpha_n); \alpha_1 \neq \ldots \neq \alpha_n$$
> 
> Allora $\alpha_1, \ldots, \alpha_n$ sono *autovalori* ([[Definizione di Autovalore, Autovettore, Autospazio#^1098ea]]) in quanto radici del *polinomio caratteristico*.
> Per definizione, si verifica che 
> $$\forall \alpha_i ,\exists v_i \neq 0_V: f(v_i) = \alpha_i v_i$$
> In questo modo determiniamo tutti gli *autovettori* $v_i$ relativi ad ogni autovalore $\alpha_i$ diverso.
> Quindi si evince che $v_1, \ldots, v_n$ sono *linearmente indipendenti* in quanto appartengono ad *autospazi diversi* ([[Definizione di Autovalore, Autovettore, Autospazio#^1486dc]], [[Proposizioni su Autospazi#^529f85]]).
> Pertanto, gli *autovettori* $v_1, \ldots, v_n$ per il *teorema di estensione* ([[Teoremi sulle Basi#^dbffba]]) e per il *teorema dello scarto* ([[Teoremi sulle Basi#^938ed7]]) saranno in grado di formare una base $\mathcal{B}$ per $V$.
> Pertanto ho una *base di autovettori* per $V$; ciò significa che $f$ è *diagonalizzabile*.
> 
> Inoltre notiamo che la *molteplicità geometrica* ([[Molteplicità Geometrica e Algebrica di uno Autovalore#^0fc15c]]) di *ogni autovalore* $\alpha_i$ è uguale alla sua *molteplicità algebrica* ([[Molteplicità Geometrica e Algebrica di uno Autovalore#^f27f78]]), per la *proposizione 3.1.* ([[Molteplicità Geometrica e Algebrica di uno Autovalore#^f9542a]]).
> Ciò implica che 
> $$\dim \operatorname{Aut}{\alpha_i}=1$$
> Inoltre, dato che 
> $$v_i \in \operatorname{Aut}{\alpha_i}, v_i \neq 0_V \implies \operatorname{Aut}{\alpha_i} = \operatorname{span}{v_i}$$
> Questa è *una* situazione della diagonalizzabilità: però ce ne sono altre, e li presentiamo col seguente teorema.
# 1. Enunciato
#Teorema 
> [!thm] del criterio della diagonalizzabilità di un'applicazione lineare
> Sia $f: V \longrightarrow V$ un'*applicazione lineare* di *dimensione finita*. 
> Allora $f$ è *diagonalizzabile* se e solo se valgono le seguenti proprietà:
> 1. Il *polinomio caratteristico* $P_f(\lambda)$ si scompone *completamente* in fattori di *primo grado* (non necessariamente distinti).
> 2. Per ogni autovalore $\bar{\lambda}$ (ovvero radice del polinomio caratteristico $P_f(\lambda)$), vale la seguente relazione:
>    $$m_g(\bar{\lambda}) = m_a(\bar{\lambda})$$
>    
> Alternativamente si può *"parafrasare"* le due condizioni come il seguente:
> 1. $$P_f(\lambda) = (\lambda-\alpha_1)^{m_1} \cdot \ldots \cdot (\lambda-\alpha_k)^{m_k}, k \leq n$$
> 2. $$m_i = \dim \operatorname{Aut}{\alpha_i}$$
# 2. Dimostrazione
#Dimostrazione 
**DIMOSTRAZIONE** del *teorema del criterio di diagonalizzazione*
Omessa.
# 3. Esempio (prototipo di un'esercizio dell'esame)
#Esempio 
> [!exm] Esempio 3.1.
> Consideriamo il seguente esempio, che sarà un possibile *modello-base* dell'esercizio dell'esame.
> Consideriamo la *seguente applicazione lineare* $\mathbb{R}^3 \longrightarrow \mathbb{R}^3$ con la sua *base canonica* $\mathcal{E}_3$.
> $$f\begin{pmatrix}x \\ y \\ z\end{pmatrix} = \begin{pmatrix}2x + 0y - 3z \\ 0x - y + 0z \\ -3x+0y+2z \end{pmatrix}$$
> 1. Calcolo la matrice associata $M^\mathcal{E}_\mathcal{E}(f)$
>    $$M^\mathcal{E}_\mathcal{E}(f) = \begin{pmatrix}2 & 0 & -3 \\ 0 & -1 & 0 \\ -3 & 0 & 2 \end{pmatrix}$$
> 2. Considero il polinomio associato $P_f(\lambda)$ e lo pongo a 0
>    $$\begin{align} P_f(\lambda) = 0 \iff \det\begin{pmatrix}2-\lambda & 0 & -3 \\ 0 & -1-\lambda & 0 \\ -3 & 0 & 2-\lambda \end{pmatrix} &= 0 \\ (2-\lambda)(-1-\lambda)(2-\lambda)+(-3)(-3)(1-\lambda) &= 0\\  \ldots &= 0 \\ (\lambda+1)^2(\lambda-5) = 0\end{align}$$
> 3. Considero lo spettro di $f$
>    $$\operatorname{Sp}{f} = \{-1, 5\}$$
> 4. Considero la molteplicità algebrica di ogni autovalore
>    $$m_a(-1) = 2; m_a(5) = 1$$
> 5. Per determinare se $f$ è diagonalizzabile dobbiamo verificare che
>    $$\begin{cases}m_a(-1) = 2 \implies m_g(-1) = 2 \\ m_a(5) = 1 \implies m_g(5) = 1 \end{cases}$$
>    Notiamo che la seconda si verifica da sola gratuitamente: quindi ci resta da determinare se la molteplicità geometrica di $-1$ è effettivamente $2$.
> 6. Per calcolare $\operatorname{Aut}{(-1)}$ consideriamo
>    $$(M^\mathcal{E}_\mathcal{E}(f) - (-1)\mathbb{1}_3) =\begin{pmatrix}3 & 0 & -3 \\ 0&0&0 \\ -3 & 0 & 3\end{pmatrix}$$
>    Ma, dato che *seconda colonna* di questa matrice è l'*immagine* della *seconda colonna* della base standard (in quanto è la matrice associata a $f_{-1}$); allora l'immagine di del vettore $e_2$ è *sempre* base del nucleo di questa matrice.
>    $$\ker \begin{pmatrix}3 & 0 & -3 \\ 0&0&0 \\ -3 & 0 & 3\end{pmatrix} = \operatorname{span} (\begin{pmatrix}0 \\ 1 \\ 0\end{pmatrix},\begin{pmatrix}1 \\ 0 \\ 1\end{pmatrix} )$$
>    Che dimostra
>    $$\dim \ker (f_{-1}) = 2 \implies m_g(-1) = 2$$
>    Pertanto per il *teorema del criterio di diagonalizzabilità*, $f$ è *diagonalizzabile*.
