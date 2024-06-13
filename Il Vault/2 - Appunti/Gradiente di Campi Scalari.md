---
data: 2024-04-14
corso:
  - "[[Analisi Matematica II]]"
argomento: Gradiente di Campi Scalari
tipologia: appunti
stato: "1"
capitolo: Calcolo Differenziale Multivariata
---
- - -
*Gradiente per campi scalari: corollario preliminare, definizione di gradiente. Osservazioni sul gradiente: formula del gradiente, formula di Taylor al primo ordine, l'equazione del piano tangente. Proprietà del gradiente.*
- - -
# 0. Voci correlate
- [[Differenziale di Campi Scalari]]
- [[Formula di Taylor]]
- [[Norma Euclidea in RN]]
# 1. Corollario Preliminare
**Giustificazione.** Prima di definire il *gradiente per una funzione*, enunciamo il seguente teorema per assicurarci che la definizione a venire sarà *ben posta*.

#Corollario 
> [!cor] l'esistenza delle derivate parziali per funzioni differenziabili
> Sia $f:\mathbb{R} \longrightarrow \mathbb{R}^N$ un *campo scalare*.
> Se $f$ è *differenziabile* in un vettore $\underline{x_0}$ allora esistono le tutte le *derivate parziali*, che godono della seguente uguaglianza.
> $$
> \frac{\partial f}{\partial \underline{e_i} }=\frac{\partial f}{\partial x_i}=L(\underline{e_i})=e_i 
> $$
>
^20eaf1

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^20eaf1]]
Basta vedere l'osservazione sulle proprietà del differenziale dei campi scalari, usando il teorema di Riesz finito-dimensionale ([[Differenziale di Campi Scalari#^725483]]). In questo caso abbiamo
$$
\frac{\partial f}{\partial x_i}=L(\underline{e_i})=\langle \underline{e_i}, \mathbb{A} \rangle =0+\ldots+\underline{e_i}_i a_i+0+\ldots+0= e_i
$$
Che è la tesi. $\blacksquare$

# 2. Definizione di Gradiente
Adesso siamo pronti per *definire* il *gradiente* per una funzione *differenziabile*.

#Definizione 
> [!def] gradiente di una funzione differenziabile
> Sia $f$ un *campo scalare* in $\mathbb{R}^N$ differenziabile nel punto $\underline{x_0}$. Si dice il *"gradiente"* di $f$ nel punto $\underline{x_0}$ come il vettore definito come
> $$
> \nabla f(\underline{x_0} ) := \left(\frac{\partial f}{\partial x_1}(\underline{x_0} ) , \ldots, \frac{\partial f}{\partial x_N}(\underline{x_0})\right)
> $$
> ovvero formato dalle *derivate parziali* di $f$ nel punto $\underline{x_0}$.
> 
> Si può dare una definizione globale della funzione estendendo a più punti del dominio.

^c35d56

# 3. Formule sul Gradiente
**Osservazioni.** Con tale *definizione* del gradiente, siamo in grado di dare molte osservazioni su quest'ultimo oggetto, dato che presenta delle peculiarità.

#Osservazione 
> [!rmk] il gradiente rappresenta il differenziale
> Come prima osservazione si vede che il *gradiente* $\nabla f$ rappresenta il *differenziale* di questa funzione, che in particolare è *uguale* alla derivata direzionale su $\underline{v}$ ([[Differenziale di Campi Scalari#^afff32|1]]). Ovvero, abbiamo l'uguaglianza
> $$
> \boxed{\frac{\partial f}{\partial \underline{v} }(\underline{x_0}) = \langle\nabla f(\underline{x_0}), \underline{v} \rangle}
> $$
> Questa formula si dice come *"la formula del gradiente"*.
> 
> Inoltre, notiamo che se la funzione è *non-differenziabile*, allora *di solito* non vale la formula del gradiente. Per convincerci di questo vedere la seguente funzione:
> $$
> f(x,y)=\left\{\begin{align}&\frac{x^2y}{x^2+y^2}, (x,y)\neq(0,0) \\ &0, (x,y)=(0,0) \end{align}\right.
> $$
^824f3e

#Osservazione 
> [!rmk] formule relative al gradiente
> Per l'osservazione posta sopra abbiamo che il differenziale $L=df_{\underline{x_0}}$ gode della seguente uguaglianza:
> $$
> L(\underline{h} )=\langle \nabla f(\underline{x_0}), \underline{h}\rangle
> $$
> Da queste nascono le seguente formule:
> i. *formula di Taylor al primo ordine*
> $$
> \boxed{f(\underline{x})=f(\underline{x_0})+\langle\nabla f(\underline{x_0}), \underline{x}-\underline{x_0} \rangle+ o(\lVert \underline{x}-\underline{x_0}\rVert)}
> $$
> (ricordiamoci che la notazione *o-piccolo* vuol dire che al tendere di $\underline{x}\to \underline{x_0}$ abbiamo la norma della differenza si annulla, [[Introduzione al Calcolo Differenziale in più variabili#^afd891|1]]).
> ii. *l'equazione del piano tangente*: Per $f:\mathbb{R} \to \mathbb{R}^2$, abbiamo
> $$
> z=f(x_0,y_0)+\frac{\partial f}{\partial x}(x_0, y_0)(x-x_0)+\frac{\partial f}{\partial y}(x_0, y_0)(y-y_0)
> $$
> iii. *l'equazione del piano tangente*: Sia $g(x)=f(x, y_0)$ con $y_0$ fissato, allora
> $$
> g(x_0)+g'(x_0)(x-x_0)=f(x_0,y_0)+\frac{\partial f}{\partial x}(x_0, y_0)(x-x_0)+\underbracket{\frac{\partial f}{\partial y}\ldots}_{=0}
> $$
^e0195b

# 4. Proprietà del Gradiente
Adesso vediamo alcune *proprietà* del gradiente, utili per la *massimizzazione* e *minimizzazione* in più variabili.

#Teorema 
> [!thm] proprietà del gradiente
> Sia $f$ differenziabile in $\underline{x_0}$, col suo gradiente non-nullo; ovvero $\nabla f(\underline{x_0})\neq \underline{x_0}$. Sia $\underline{v}$ un versore.
> Allora valgono le seguenti:
> i. *massima del gradiente*
> $$
> \frac{\partial f}{\partial \underline{v} }(\underline{x_0})  \ \text{è massima se }\underline{v}=\frac{\nabla f(\underline{x_0})}{\lVert \nabla f(\underline{x_0})\lVert}
> $$
> ii. *minima del gradiente*
> $$
> \frac{\partial f}{\partial \underline{v} }(\underline{x_0})  \ \text{è minima se }\underline{v}=-\frac{\nabla f(\underline{x_0})}{\lVert \nabla f(\underline{x_0})\lVert}
> $$
^60b656

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^60b656]]
Si tratta di usare la *disuguaglianza di Cauchy-Schwarz* ([[Norma Euclidea in RN#^a525b6]]), per minorare la derivata parziale e prendere gli estremi. Abbiamo dunque
$$
\begin{align}
\frac{\partial f}{\partial \underline{v}} (\underline{x_0}) &= \langle \nabla f(\underline{x_0}), v \rangle \\ - \lVert \nabla f(\underline{x_0}) \rVert\leq-\lVert \nabla f (\underline{x_0})\rVert \cdot \rVert \underline{v} \rVert&\leq \langle \nabla f(\underline{x_0}), v \rangle \leq\lVert \nabla f (\underline{x_0})\rVert \cdot \rVert \underline{v} \rVert \leq \lVert \nabla f(\underline{x_0}) \rVert
\end{align}
$$
Prendendo $\underline{v}=\frac{\nabla f(\underline{x_0})}{\lVert \nabla f(\underline{x_0})\lVert}$ ottengo l'uguaglianza
$$
\nabla f (\underline{x_0})\rVert \cdot \rVert \underline{v} \rVert = \lVert \nabla f(\underline{x_0}) \rVert
$$
che prova la tesi. $\blacksquare$

