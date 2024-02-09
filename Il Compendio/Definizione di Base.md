---
data: 2023-11-02
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Definizione di Base
tipologia: appunti
stato: "1"
---
*Definizione di base. Teorema di caratterizzazione della base. Coordinate del vettore v rispetto alla base B. Esempi di base.*
- - -
# 1. Definizione di base
#Definizione 
> [!math|{"type":"definition","number":"1.1.","setAsNoteMathLink":true,"label":"base","title":"Base"}] Base.
> Sia $V$ un *K-spazio vettoriale* ([[Spazi Vettoriali#^7e2c4e]]) e sia $U \subseteq V$ un *sottospazio vettoriale di V* ([[Sottospazi Vettoriali#^9bcbf2]]). 
> Allora una *base di* $U$ è un *insieme* $\{u_1, \ldots, u_n\}$ formato da *vettori* di $U$ tali che:  
> $\{u_1, \ldots, u_n\}$ è un *sistema di generatori per $U$* ([[Combinazione Lineare#^f2ee60]])
> e anche
> $u_1, \ldots, u_n$ sono *linearmente indipendenti* ([[Dipendenza e Indipendenza Lineare#^3782e8]])

^def430

## Teorema di caratterizzazione delle basi
#Teorema 
> [!math|{"type":"theorem","number":"1.1.","setAsNoteMathLink":false,"title":"Caratterizzazione delle basi","label":"caratterizzazione-delle-basi"}] Caratterizzazione delle basi.
> Sia $V$ un *K-spazio vettoriale finitamente generato*, allora un sottoinsieme $B \subseteq V$, $B = \{v_1, \ldots, v_n\}$ è una base di $V$ *se e solo se* ogni vettore $v \in V$ si può scrivere in modo *unico* come *combinazione lineare* di $B$.
> $$B \text{ è base di }V \iff \forall v \in V, \exists!\lambda_1, \ldots, \lambda_n: \lambda_1v_1+\ldots+\lambda_nv_n $$
^128180

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema di caratterizzazione delle basi* ([[#^128180]])
Questo è un teorema del tipo *se e solo se*: quindi andiamo per due passi.
- - -
"$\implies$": Sia $B$ una *base* di $V$, allora devo dimostrare che ogni elemento di $V$ può essere scritta come combinazione lineare di $B$ in un modo unico.
Dato che $B$ è in particolare un *sistema di generatori* di $V$, allora dato $v \in V$ si può scrivere come combinazione lineare di $B$, cioè
$$
v = \lambda_1v_1+\ldots+\lambda_nv_n
$$
Ora ci rimane da dimostrare l'*unicità* di tale scrittura: supponiamo allora che esiste
$$
v = \mu_1v_1 + \ldots +\mu_n v_n
$$
Allora 
$$
\lambda_1v_1+\ldots+\lambda_n v_n = \mu_1v_1+\ldots+\mu_nv_n
$$
Pertanto
$$
(\lambda_1-\mu_1)v_1+\ldots+(\lambda_n-\mu_n)v_n=0
$$
Questa è una *combinazione lineare nulla* di $v_1, \ldots, v_n$ (ovvero elementi di $B$): dato che questi sono anche *linearmente indipendenti*, allora l'unica possibilità di tale scrittura è solo se
$$
\lambda_1=\mu_1, \ldots,\lambda_n=\mu_n
$$
che dimostra *l'unicità* della scrittura del vettore.
- - -
"$\impliedby$": Ora supponiamo che ogni elemento $v \in V$ può essere scritta in una maniera *unica* come combinazione lineare di $B$. 
Allora in particolare $B$ è *sistema di generatori* per $V$.
Ci rimane da dimostrare che gli elementi di $B$ sono *linearmente indipendenti*; per farlo prendiamo il vettore nullo $0 \in v$ e scriviamo la sua *combinazione lineare* di elementi di $B$:
$$
\lambda_1v_1 + \ldots +\lambda_n v_n = 0
$$
D'altra parte si può scrivere
$$
0 v_1 + \ldots + 0v_n = 0
$$
Per ipotesi la scrittura di combinazioni lineare di $0$ come elementi di $B$ è *unica*, allora discende che *tutti* i coefficienti $\lambda_i$ sono *nulli*. Ovvero
$$
\lambda_1 =\lambda_2 = \ldots = \lambda_i = 0, \forall_i \in \{1, \ldots, n\}
$$
ovvero $v_1, \ldots v_n$ sono *linearmente indipendenti*.
- - -
## Coordinate di vettori rispetto ad una base
#Definizione 
> [!math|{"type":"definition","number":"1.2.","setAsNoteMathLink":false,"title":"Coordinate di vettore rispetto alla base","label":"coordinate-di-vettore-rispetto-alla-base"}] Coordinate di vettore rispetto alla base.
> Sia $V$ un *K-spazio vettoriale finitamente generato*, sia $B = (v_1, \ldots, v_n)$ una base di $V$, e sia $v$ un *vettore* $v \in V$. Allora possiamo scrivere
> $$v = \lambda_1v_1 + \ldots + \lambda_nv_n $$
> in modo unico con $\lambda_1, \ldots, \lambda_n \in K$. 
> Gli scalari $\lambda_1, \ldots, \lambda_n$ sono detti le *coordinate di* $v$ *rispetto alla base* $B$.
> 
^820fd0
# 2. Esempi di basi
Ora consideriamo degli *esempi* di *basi di spazi vettoriali*.

#Esempio 
> [!math|{"type":"example","number":"2.1.","setAsNoteMathLink":false,"title":"Basi di $K^n$","label":"basi-di-kn"}] Basi di $K^n$.
> In $K^n$ possiamo considerare l'insieme
> $$\mathcal{B}= \left\{\begin{pmatrix} 1\\0\\\vdots\\0\end{pmatrix}, \begin{pmatrix}0\\1\\\vdots\\0 \end{pmatrix}, \ldots, \begin{pmatrix}0\\0\\\vdots\\1 \end{pmatrix}\right\}$$
> Si può dimostrare che $\mathcal{B}$ è una base per $K^n$. 
> Infatti è chiaramente sia *sistema di generatori* per $K^n$ e ogni vettore $v$ di $\mathcal{B}$ sono *linearmente indipendenti*: si lascia la dimostrazione da svolgere per esercizio.
> Si definisce tale base la *base standard* di $K^n$.

#Esempio 
> [!math|{"type":"example","number":"2.2.","setAsNoteMathLink":false,"title":"Basi delle matrici $M_{m,n}(K)$","label":"basi-delle-matrici-mmnk"}] Basi delle matrici $M_{m,n}(K)$.
> Nell'insieme delle *matrici* $M_{m,n}(K)$ ([[Matrice]], **DEF 1.2.**) possiamo considerare le matrici del tipo
> $$\mathcal{B} = \left\{\begin{pmatrix}1 & 0 & \ldots & 0 \\ 0 & 0 & \ldots & 0 \\ \vdots &  & & \vdots \\ 0 & 0 & \ldots & 0 \end{pmatrix}, \ldots,\begin{pmatrix}0 &0 & \ldots & 0 \\ 0 & 0 & \ldots & 0 \\ \vdots & & & \vdots \\ 0 & 0 & \ldots & 1 \end{pmatrix} \right\} $$
> dove ogni matrice $v \in \mathcal{B}$ è una matrice dove *tutte* le entrate sono $0$ a parte un elemento del posto $a_{ij}$, che è uguale a $1$. 
> In parole prendiamo la matrice 
> $$ \begin{pmatrix} 1 & 1 & \ldots & 1 \\1 & 1 & \ldots & 1 \\ \vdots & & & \vdots \\1 & 1 & \ldots & 1\end{pmatrix}$$
> e la *"spacchettiamo"* in matrici con un singolo elemento. Quindi è possibile dimostrare che tutti gli elementi di $\mathcal{B}$ sono sia *sistema di generatori* per una qualsiasi matrice che *linearmente indipendenti*.

#Osservazione 
> [!rmk] Osservazione 2.1.
Notiamo che il *numero degli elementi* (ovvero la cardinalità) dell'insieme $\mathcal{B}$ è esattamente $m \cdot n$. 
