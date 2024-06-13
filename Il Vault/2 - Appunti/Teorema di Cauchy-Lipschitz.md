---
data: 2024-05-10
corso:
  - "[[Analisi Matematica II]]"
argomento: Teorema di Cauchy-Lipschitz
tipologia: appunti
stato: "1"
capitolo: Equazioni Differenziali
---
- - -
*Teorema di Cauchy-Lipschitz per l'esistenza e l'unicità della soluzione per un problema di Cauchy ben-posto.*
- - -
# 0. Voci correlate
- [[Definizioni Relative alle Equazioni Differenziali]]
- [[Teorema di esistenza di Peano]]
# 1. Teorema di Cauchy-Lipschitz

^e8d8df

#Teorema 
> [!thm] teorema di Cauchy-Lipschitz, dell'esistenza e dell'unicità locale delle soluzioni
> Sia $f(x,y):A \subseteq \mathbb{R}^2 \in \mathcal{C}^0(A)$ e tale che la sua derivata parziale $f_y$ sia continua $(\frac{\partial f}{\partial y} \in \mathcal{C}^0(A)$), poi sia $(x_0,y_0) \in A$ un punto.
> 
> Allora vale che
> $$
> \exists h>0, \exists!y:I=(x_0-h,x_0+h)\longrightarrow \mathbb{R} \in \mathcal{C}^1(I)
> $$
> tale che questa $y(\cdot)$ risolva il *problema di Cauchy*
> $$
> (PC):\left\{\begin{align}
> & y'(x)=f(x,y(x)) \\
> & y(x_0)=y_0
> \end{align}\right.
> $$
^a5ca9d

Per dare una dimostrazione, si enuncia prima il *lemma di Volterra*.

#Lemma 
> [!lem] di Volterra
> Sia $f:A \subseteq \mathbb{R}^2 \in \mathcal{C}^0(A)$ e il *problema di Cauchy* $(PC)$ definita come
> $$
> (PC):\left\{\begin{align}
> & y'(x)=f(x,y(x)) \\
> & y(x_0)=y_0
> \end{align}\right.
> $$
>
> Allora si ha che sono equivalenti:
> i. Una funzione $y:[x_0-h,x_0+h] \longrightarrow \mathcal{C}^1$ risolve $(PC)$
> *se e solo se*
> ii. La funzione $y:[x_0-h,x_0+h]\longrightarrow \mathcal{C}^1$ è risolve l'equazione integrale di volterra, definita come
> $$
> y(x)=y_0+\int_{x_0}^x f(t,y(t))\ \text{d}t
> $$

Adesso siamo pronti per dimostrare Cauchy-Lipschitz.

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^a5ca9d]]
*Nota: si dà solo l'idea costruttiva della dimostrazione, senza scendere troppo nei dettagli*
Ci sono tanti modi per dimostrare questo teorema: qui useremo la nozione di *successione di funzioni* ([[Definizione di Successione di Funzioni#^51bdde|1]]), cercando una famiglia $(y_n)_n$ che converga uniformemente alla soluzione. Procediamo dunque per costruzione: sia $y_0(x)\equiv y_0$ il *primo approssimante* per la soluzione. Adesso definiamo $y_1(x)$ come
$$
y_1(x)=y_0+\int_{x_0}^x f(t, y_0(t)) \ \text{d}t
$$
Dopodiché si definisce il prossimo approssimante come
$$
y_2(x)=y_0+\int_{x_0}^x f(t, y_1(t)) \text{ d}t
$$
Per induzione estendiamo questa famiglia di funzioni $(y_n)_n$ su $\mathbb{N}$, definendo il termine generale come
$$
(y_n)_n:
\left\{
\begin{align}
& y_0(x)=y_0\\ & y_n(x)=y_0+\int_{x_0}^x f(t, y_{n-1}(t))\ \text{d}t
\end{align}
\right.
$$
Dopodiché si dimostra che la successione $(y_n)_n$ *converge uniformemente* su $y$, che è soluzione di *Cauchy* poiché soddisfa il *lemma di Volterra* (ovvero risolve *l'equazione integrale di Volterra*). In matematichese, si ha
$$
\lim_n y_n(x) \stackrel{\text{unif} }= y(x) \iff y(x)=\lim_n y_0+\int_{x_0}^x f(t, y_n(t)) \text{ d}t
$$
che garantisce sia *l'unicità* che *l'esistenza*, provando la tesi. $\blacksquare$

# 2. Problema di Cauchy ben-posto
Diamo una classificazione per *problemi di Cauchy* che rispettano i criteri del *teorema di Cauchy-Lipschitz*.

#Definizione 
> [!def] problema di Cauchy ben posto
> Un *problema di Cauchy* $(PC)$ del tipo
> $$
> (PC):\left\{\begin{align}
> & y'(x)=f(x,y(x)) \\
> & y(x_0)=y_0
> \end{align}\right.
> $$
> Si dice *"ben posto"* se $f$ rispetta i *criteri del teorema di Cauchy-Lipschitz*, ovvero se $f$ è *continua* e la sua derivata $f_y$ è *continua*.
