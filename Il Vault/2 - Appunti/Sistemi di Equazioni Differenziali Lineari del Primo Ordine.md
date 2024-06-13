---
data: 2024-05-18
corso:
  - "[[Analisi Matematica II]]"
argomento: Sistemi di Equazioni Differenziali Lineari del Primo Ordine
tipologia: appunti
stato: "1"
capitolo: Equazioni Differenziali
---
- - -
*Sistemi di equazioni differenziali lineari. Caso $N=1$ (scalare); necessità di definire l'esponenziazione di matrici. Definizione di spazio delle matrici euclideo normato. Lemma: convergenza della matrice esponenziale. Teorema: soluzioni a sistemi di equazioni differenziali lineari.*
- - -
# 0. Voci correlate
- [[Sistema di Equazioni Differenziali del Primo Ordine]]
- [[Equazioni Differenziali Lineari del primo ordine]]
# 1. Definizione di Sistema di Equazioni Differenziali Lineari
Vediamo un *caso particolare* di sistemi di equazioni differenziali.

#Definizione 
> [!def] sistema di equazioni differenziali lineari
> Sia dato $\Sigma$ un *sistema lineare* ([[Sistemi Lineari#^6f6520|1]]) di dimensione $N$ a *coefficienti costanti*, definita come
> $$
> \boxed{\Sigma :X' =AX}
> $$
> con $A \in M_N(\mathbb{R})$ e $X$ un *vettore-colonna* che contiene le *derivate* $(x_1'(t),\ldots, x_N'(t))$ e $X$ le funzioni $(x_1(t),\ldots,x_N(t))$. Equivalentemente posso leggere $\Sigma$ come
> $$
> \begin{pmatrix}x_1'(t)\\ x_2'(t) \\ \vdots \\ x_N'(t)  \end{pmatrix}=\begin{pmatrix}a_{11} & \ldots & a_{1N} \\ a_{21} & \ldots & a_{2N} \\ \vdots & & \vdots \\ a_{N1} & \ldots & a_{NN}\end{pmatrix}\begin{pmatrix}x_1(t) \\ x_2(t) \\ \vdots \\ x_N(t) \end{pmatrix}=\begin{pmatrix}(\prod_{1\leq i \leq N }a_{1i}  )x_1(t) \\ \vdots \\ (\prod_{1 \leq i \leq N}a_{Ni})x_N(t) \end{pmatrix}
> $$

# 2. Detour sull'esponenziazione delle matirici
#Osservazione 
> [!rmk] caso scalare
> Per $N=1$ ho il caso scalare $x'(t)=ax(t)$, con la soluzione $x(t)=A e^{at}$ ([[Equazioni Differenziali Lineari del primo ordine#^106c24|1]]). Come posso generalizzare tale soluzione? Voglio trovare un modo per *definire* l'esponenziazione delle metrici $e^A$.

L'idea per *esponenziare* le matrici è quella di usare la *serie di Taylor* per $\exp$ ([[Esempi di Serie di Taylor-MacLaurin#^897ce3]]), ovvero
$$
e^x=\sum^{+\infty}_{n=0}\frac{x^n}{n!}
$$
Per usare $x \in M_N(\mathbb R)$, definendo così l'*esponenziazione di una matrice* come una *serie di matrici*, devo prima introdurre la nozione di norma per lo spazio $M_N(\mathbb{R})$ per poter valutare la *convergenza* di tale serie.

 #Definizione 
 > [!def] norma di una matrice
 > Si definisce la norma di una matrice $A \in M_N(\mathbb{R})$ come
 > $$
 > \lVert A\rVert=\sqrt{\sum_{i,j =1}^n a_{ij}^2}
 > $$
 > Ovvero questa è la *norma euclidea* su $M_N(\mathbb R) \sim \mathbb{R}^{N \times N}$.
 > 
 > Allora definisco $(M_N(\mathbb R), \lVert \cdot \rVert)$ come uno *spazio euclideo normato*.
 
 #Lemma 
 > [!lem] convergenza della matrice esponenziale
 > Si dimostra che data una matrice $A \in M_N(\mathbb R)$, si ha che la serie
 > $$
 > \sum^{+\infty}_{k=0}\frac{A^k}{k!} = I+A+\ldots+\frac{A^N}{N!}+\ldots={S_k}+\ldots+ =\overline{S\ }< +\infty
 > $$
 > è *convergente*. Ovvero
 > $$
 > \exists \overline{S}  \in M_N(\mathbb R): \lim_N \lVert S_N - \overline{S\ } \rVert = 0 
 > $$
 
 #Definizione 
 > [!def] matrice esponenziale
 > Si definisce la *matrice esponenziale*, data una matrice $A \in M_N(\mathbb R)$ come la serie di potenze
 > $$
 > e^A = \sum^{+\infty}_{n=0}\frac{A^n}{n!}
 > $$
 
# 3. Soluzioni a Sistemi di ODE lineari
#Teorema 
> [!thm] sistemi a soluzioni di equazioni differenziali del primo ordine lineari
> Sia $\Sigma$ un *sistema di equazioni differenziali lineari del primo ordine*. Allora una sua soluzione è data da
> $$
> \boxed{X(t)=e^{t \cdot A} \cdot c}
> $$
> Con $X$ un vettore $n \times 1$, $e^{t A}$ un vettore $n \times n$, e $c$ un vettore arbitrario $n \times 1$.

