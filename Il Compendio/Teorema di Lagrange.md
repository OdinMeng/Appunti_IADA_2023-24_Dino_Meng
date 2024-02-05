---
data: 2023-11-23
corso: "[[Analisi Matematica I]]"
argomento: Teorema di Lagrange
tipologia: appunti
stato: "1"
---
*Teorema di Lagrange: enunciato, dimostrazione e interpretazione grafica.*
- - -
# 1. Enunciato del teorema di Lagrange
#Teorema 
> [!thm] Teorema 1.1. (di Lagrange)
> Sia $f: [a, b] \longrightarrow \mathbb{R}$, $f$ *continua* in $[a, b]$ e *derivabile* in $]a, b[$ ([[Definizione di continuità#^ddf65d]], [[Derivata e derivabilità#^6e7606]]).
> Allora si verifica il seguente:
> $$\boxed{\exists \xi \in \ ]a, b[\ : f'(\xi) = \frac{f(b)-f(a)}{b-a}} $$
^ef03c2
# 2. Dimostrazione del teorema di Lagrange
#Dimostrazione 
**DIMOSTRAZIONE** del *teorema di Lagrange* ([[#^ef03c2]])
Per dimostrare il *teorema di Lagrange* basta considerare il *teorema di Cauchy* ([[Teorema di Cauchy#^0c9255]]) per $g(x) = x$; possiamo verificare che $(x)'$ non sarà *mai* $0$, in quanto la derivata della funzione identità è $1$; infatti $1 \neq 0$. 
Infatti per questo motivo si potrebbe considerare il *teorema di Lagrange* come un *corollario* del *teorema di Cauchy*. $\blacksquare$
# 3. Interpretazione grafica
#Osservazione 
> [!oss] Osservazione 3.1. (interpretazione grafica del teorema di Lagrange)
Osserviamo che l'espressione
$$\frac{f(b)-f(a)}{b-a} $$
è *equivalente* al *rapporto incrementale* $R^{f}_{a}(b)$ ([[Rapporto Incrementale#^ccc58b]]).
Quindi il *teorema di Lagrange* ci sta semplicemente dicendo che se considerando la *retta secante* (che chiamiamo $r_{ab}$) tra il punto $(a, f(a))$ e $(b, f(b))$ allora dev'esserci *almeno* un punto per cui la sua tangente è *parallela* a $r_{ab}$. 
^a12a1e

**FIGURA 3.1.** (*Idea grafica*)
![[Pasted image 20231123180819.png]]

**FIGURA 3.2.** (*Idea grafica 2, tratto da "Le Matematiche" di A. D. Aleksandrov, A. N. Kolmogorov, M. A. Lavrent'ev*)
![[Kolmogorov Teorema Lagrange.jpg.jpg]]