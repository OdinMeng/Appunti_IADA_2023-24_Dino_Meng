---
data: 2023-12-10
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Passaggio tra Equazioni Cartesiane e Parametriche di uno Sottospazio Affine
tipologia: appunti
stato: "1"
capitolo: Geometria Affine
---
- - -
*Passaggio tra equazione cartesiana a parametrica (e viceversa) di uno sottospazio affine.*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Definizione di Sottospazio Affine]]
- [[Sistemi Lineari]]
- [[Teorema di Rouché-Capelli]]
- [[Definizione di Base]]
- [[Dipendenza e Indipendenza Lineare]]
- [[Rango]]
- [[Teoremi su Rango]]
# 1. Da cartesiana a parametrica
#Proposizione 
> [!prp] algoritmo di passaggio da equazione cartesiane a parametriche
> Sia $Ax = b$ un *sistema lineare* ([[Sistemi Lineari#^6f6520]]) che *esprime* le *equazioni cartesiane* ([[Definizione di Equazioni Cartesiane e Parametriche di uno Sottospazio Affine#^bc4fe3]]) di un *sottospazio affine* ([[Definizione di Sottospazio Affine#^a1f242]]).
> 
> Allora per trovare le *equazioni parametriche* di questo *sottospazio affine* è sufficiente considerare il *teorema di struttura delle soluzioni per i sistemi lineari* ([[Teoremi sui Sistemi Lineari#^49a263]]): ovvero si tratta prima di determinare una *soluzione particolare* $\tilde{s}$ risolvendo $Ax=b$, e poi determinando l'insieme delle soluzioni $W$ di $Ax=0$; essendo $W$ lo *span* ([[Combinazione Lineare]]) di alcuni vettori, allora avremo dei parametri liberi che chiameremo $t_1, \ldots, t_n$.
> 
> Infine un *qualunque elemento* della soluzione di $Ax=b$ è un *elemento* dello *sottospazio affine* ([[Definizione di Equazioni Cartesiane e Parametriche di uno Sottospazio Affine#^0461d1]]): pertanto si avrà un *sistema di equazioni* con delle variabili libere arbitrarie, che è esattamente la nozione di *equazioni parametriche*.

#Esempio 
> [!exm] Esempio 1.1. 
> Si consideri il seguente esempio.
> $$S: \begin{cases} 3x_1-2x_2 = 1 \\ 6x_1-4x_2 = 2 \end{cases}$$
> Per il *teorema di Rouché-Capelli* ([[Teorema di Rouché-Capelli]]), questo *sistema lineare* è compatibile. Calcoliamo dunque la sua generica soluzione $s$.
> 
> In primo luogo determiniamo il *numero di equazioni* necessarie per descrivere il sottospazio, calcolando $\dim S = \dim W = 2-rg(A) = 1$
> Allora $S$ è una *retta* e la sua sola equazione cartesiana è
> $$\begin{cases}3x_1 - 2x_2 = 1 \end{cases}$$
> 
> Ora, considerando il *teorema di struttura delle soluzioni di un sistema lineare qualsiasi*, sappiamo che $s = s_0 + \tilde{s}$.
> Teniamo la *soluzione particolare* $$\tilde{s} \stackrel{x_1 = 0} = \begin{pmatrix}0 \\ -\frac{1}{2} \end{pmatrix}$$
> Ora calcoliamo il sottospazio delle soluzioni $s_0$; 
> $$3x_1-2x_2 = 0 \implies 3x_1 = 2x_2 \implies \{s_0\} = \operatorname{span}\left(\begin{pmatrix}1 \\ \frac{3}{2} \end{pmatrix}\right)$$
> 
> Pertanto le equazioni parametriche di $S$ sono
> $$S: \begin{cases}x_1 = 2t \\ x_2 = 3t-\frac{1}{2} \end{cases}$$
# 2. Da parametrica a cartesiana
#Proposizione 
> [!prp] algoritmo di passaggio da equazioni parametriche a cartesiane
> Supponiamo di avere le seguenti *equazioni parametriche* ([[Definizione di Equazioni Cartesiane e Parametriche di uno Sottospazio Affine#^3babd4]]) per un *sottospazio affine* $S \subseteq \mathbb{A}^n_K$, ovvero un sistema del tipo
> $$\begin{cases}x_1-q_1 = t_1w_{11} + \ldots + t_k w_{1k} \\ \vdots \\ x_n-q_n = t_1 w_{n1} + \ldots + t_k w_{nk}  \end{cases}$$
> Queste valgono *se e solo se* i vettori $x_i-q_i$ sono *combinazioni lineari* della *base* di $W$, ovvero $w_1, \ldots, w_k$; allora questo vale se e solo se i vettori
> $$\left\{w_1 ,\ldots, w_k, \begin{pmatrix}x_1-q_1 \\ \vdots \\ x_n-q_n \end{pmatrix} \right\}$$
> sono *linearmente dipendenti* ([[Dipendenza e Indipendenza Lineare#^719f18]]): questo vale *se e solo se* la matrice completa del sistema ha rango $k$; infatti il *rango minimo* dev'essere $k$ in quanto $w_1, \ldots, w_k$ sono *linearmente indipendenti* in quanto elementi della base, ma il *rango massimo* dev'essere anche $k$ dato che abbiamo *un vettore linearmente dipendente*.
> 
> In altre parole, bisogna imporre la condizione
> $$\operatorname{rg}\begin{pmatrix}w_{11} & \ldots & w_{1k} & x_1-q_1 \\ \vdots & & \vdots & \vdots \\ w_{n1} & \ldots & w_{nk} & x_n-q_n\end{pmatrix} = k$$
> Allora usiamo il *teorema di caratterizzazione del rango* ([[Teoremi su Rango#^9290df]]): prima gradinizziamo la matrice $(A|b)$ mediante *l'algoritmo di Gauß* ([[Algoritmo di Gauß]]), dopodiché imponiamo le ultime $n-k$ righe nulle.
> Ovvero, avremmo una matrice del tipo
> $$\begin{pmatrix}\ast & | & \ast \\ 0 & | & \boxed{\ast}\end{pmatrix}$$
> Infatti imponiamo le equazioni che troviamo nella parte segnata uguale a $0$. Così troviamo le *equazioni cartesiane* per $S$.

#Esempio 
> [!exm] Esempio 2.1.
> Si consideri il seguente esempio.
> Abbiamo in $\mathbb{A}^2_\mathbb{R}$ il *sottospazio affine* $S$ dei punti $P:(x,y)$ con le *equazioni parametriche*
> $$\begin{cases}x = t \\ y = 2+t \end{cases} \equiv \begin{pmatrix}x \\ y-2 \end{pmatrix} = t\begin{pmatrix}1 \\ 1 \end{pmatrix}$$
> Allora per ottenere le equazioni cartesiano e considero la *matrice completa* e lo gradinizzo mediante *l'algoritmo di Gauß*
> $$\begin{pmatrix}1 & x \\ 1 & y-2\end{pmatrix} = \begin{pmatrix}1 & x \\ 0 & y-2-x \end{pmatrix}$$
> Ora dobbiamo imporre che $rg(A|b) = 1$, ovvero $y-2-x = 0$.
> In definitiva, l'equazione cartesiana ottenuta è l'unica equazione
> $$y= x+2$$
> che ha senso, dato che $\dim S = \dim \operatorname{span}\left(\begin{pmatrix} 1 \\ 1 \end{pmatrix}\right) = 1$.

