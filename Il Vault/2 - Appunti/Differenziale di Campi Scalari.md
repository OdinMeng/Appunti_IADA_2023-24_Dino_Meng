---
data: 2024-03-29
corso:
  - "[[Analisi Matematica II]]"
argomento: Differenziale di Funzioni in più variabili
tipologia: appunti
stato: "1"
capitolo: Calcolo Differenziale Multivariata
---
- - -
*Definizione di differenziabilità per funzioni in più variabili. Definizione di differenziale. Caso $N=1$. Proprietà del differenziale di una funzione.*
- - -
# 0. Voci correlate
- [[Formula di Taylor]]
- [[Definizione di Continuità di Funzione in più variabili]]
- [[Derivata Direzionale]]
- [[Topologia in RN]]
# 1. Definizione di Differenziabilità di una Funzione
#Definizione 
> [!def] funzione differenziabile in un punto
> Sia $f:A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$, con $A$ aperto ([[Topologia in RN#^3a70fb|1]]) e $\underline{x_0} \in A$.
> Si dice che $f$ è *"differenziabile in $\underline{x_0} \in A$"* se esiste un'*operatore lineare* $L_{x_0}$ del tipo
> $$
> L_{x_0}; \mathbb{R}^N \longrightarrow \mathbb{R}
> $$
> tale che valga
> $$
> \begin{gather}
> \lim_{\underline{x} \to \underline{x_0} }\frac{f(\underline{x})-f(\underline{x_0})-L_{x_0}(\underline{x}-\underline{x_0}) }{\lVert \underline{x}- \underline{x_0 }\rVert}=0
> \\
> \Updownarrow
> \\
> f(\underline{x})=f(\underline{x_0})+L_{x_0}(\underline{x}-\underline{x_0})+o(\rVert \underline{x}-\underline{x_0}\lVert)
> \end{gather}
> $$
> (*ovvero se il resto è un o-piccolo della norma $\rVert \underline{x}-\underline{x_0}\lVert$*)
> 
> Se la funzione $f$ è *differenziabile*, l'operatore $L_{x_0}$ si dice *"differenziale di $f$ in $\underline{x_0}$"* e la si indica come
> $$
> L_{x_0}=\text{d}f_{x_0}
> $$

^aabe21

# 2. Esempi di differenziali
#Osservazione 
> [!rmk] caso $N=1$
> In $\mathbb{R}$ ho il *differenziale* $\text{d}f_{x_0} = f'(x_0)$. Infatti, prendendo la *formula di Taylor* per $f$ col resto in forma di *Peano*, ho
> $$
> f(x)=f(x_0)+f'(x_0)(x-x_0)+R(x)
> $$
> dove $R=o(x-x_0)$ (quindi il resto è un *o-piccolo*, come voluto dalla definizione).
> 
> Allora ho $\text{d}f_{x_0}$ come una funzione definita come
> $$
> \text{d}f_{x_0}(x)=f'(x_0)(x)
> $$
> (*sempre ammessa se esista $f'(x_0)$!*)

# 3. Proprietà del differenziale
#Teorema 
> [!thm] proprietà del differenziale
> Sia $f:A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$, con $A$ aperto e $\underline{x_0} \in A$. Allora valgono le seguenti.
> 
> i. Se $f$ è *differenziabile* in $\underline{x_0}$, allora $f$ è *continua* in $\underline{x_0}$; ovvero vale il limite
> $$
> \lim_{\underline{x} \to \underline{x_0} }f(\underline{x}) = f(\underline{x_0})
> $$
> ii. Se $f$ è *differenziabile* in $\underline{x_0}$, allora vale la seguente relazione tra il suo *differenziale* e la sua *derivata direzionale*;
> $$
> \forall \underline{v} \in \mathbb{R}^N, \boxed{\frac{\partial f}{\partial \underline{v} }(\underline{x_0})=\text{d}f_{x_0}(\underline{v} )}
> $$
^afff32

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^afff32]]
i. Osserviamo preliminarmente che il differenziale ha il seguente limite:
$$
\lim_{\underline{x} \to \underline{x_0} }\text{d}f_{x_0}(\underline{x}-\underline{x_0})=0
$$
Infatti, per il *teorema di Riesz* ([[Teorema di Riesz#^a9143c]]), e per la *disuguaglianza di Cauchy-Schwarz* ([[Norma Euclidea in RN#^a525b6]]) ho
$$
\text{d}f_{x_0}(\underline{x}-\underline{x_0}) = \langle \underline{a}, \underline{x}-\underline{x_0}\rangle \leq \lVert \underline{a} \rVert \cdot \lVert \underline{x}-\underline{x_0} \rVert
$$
dove $\underline{a}$ è un *vettore fisso* (di conseguenza la sua *norma* è un *valore fisso*) e la norma di $\underline{x}-\underline{x_0}$ tende a $0$, per $\underline{x} \to \underline{x_0}$.
Adesso basta prendere l'ipotesi iniziale, per cui $f$ si può esprimere come
$$
f(\underline{x})=f(\underline{x_0})+\text{d}f_{x_0}(\underline{x}-\underline{x_0})+o(\rVert \underline{x}-\underline{x_0}\lVert)
$$
da cui consegue il limite
$$
\lim_{\underline{x} \to \underline{x_0} }f(\underline{x})=\lim_{\underline{x} \to \underline{x_0}}f(\underline{x_0})+\underbracket{\text{d}f_{x_0}(\underline{x}-\underline{x_0})}_{\to 0}+\underbracket{o(\rVert \underline{x}-\underline{x_0}\lVert)}_{\to 0} = f(\underline{x_0})
$$
che è la tesi.
ii. Sia $t\geq 0$. Notiamo che per la differenziabilità di $f$ abbiamo
$$
f(\underline{x_0}+t\underline{v}) = f(\underline{x_0})+\text{d}f_{x_0}(t \underline{v})+o(\rVert t \underline v\lVert) = \ldots+o(|t|)
$$
Allora, prendendo il suo rapporto incrementale ho
$$
\begin{align}
\lim_{t \to 0}\frac{f(\underline{x_0}+t\underline{v}) - f(\underline{x_0})}{t} &= \lim_{t \to 0}\frac{\text{d}f_{x_0}(t\underline{v})+o(|t|)}{t} \\
&= \lim_{t \to 0}\frac{t \cdot\text{d}f_{x_0}(\underline{v})+o(|t|)}{t} \\
&= \lim_{t \to 0}\text{d}f_{x_0}(\underline{v})+\frac{o(|t|)}{t} \\ &= \text{d}f_{x_0}(\underline{v})
\end{align}
$$
che è la tesi. $\blacksquare$

#Osservazione 
> [!rmk] possiamo usare il teorema di Riesz
> Notiamo che se chiamo il differenziale $L=d f_{\underline{x_0} }$ allora posso usare il *teorema di rappresentazione di Riesz* ([[Teorema di Riesz#^47405d|1]]). Infatti se definisco un vettore $\mathbb{A} = (a_1,\ldots, a_N) \in \mathbb{R}^N$, allora posso dire che questa *rappresenta* il differenziale $L$. Allora, scegliendo un qualsiasi vettore $v$ ho
> $$
> \langle \mathbb A, v \rangle = a_1v_1+\ldots+a_N v_N = L(\underline{v})
> $$
> Adesso, usando la proprietà *ii.* ([[#^afff32|2]]) del differenziale ho l'uguaglianza importante
> $$
> \frac{\partial f}{\partial \underline{v} }=L(\underline{v})
> $$
> ovvero il *"differenziale di $f$ applicato su $\underline{v}$ è la derivata direzionale lungo $\underline{v}$"*.
^725483

