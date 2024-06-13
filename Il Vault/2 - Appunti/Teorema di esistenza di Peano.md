---
data: 2024-05-08
corso:
  - "[[Analisi Matematica II]]"
argomento: Teorema di esistenza di Peano
tipologia: appunti
stato: "1"
capitolo: Equazioni Differenziali
---
- - -
*Teorema di esistenza di Peano: enunciato e osservazioni.*
- - -
# 0. Voci correlate
- [[Definizioni Relative alle Equazioni Differenziali]]
# 1. Teorema di esistenza di Peano
Come prima cosa studiamo le *condizioni sufficienti* per l'*esistenza* di soluzioni per *problemi di Cauchy*.

#Teorema 
> [!thm] di esistenza locale, o di Peano
> Siano $f: A \subseteq \mathbb{R}^2 \in \mathcal{C}^0(A)$ (*continua!*) con $A$ aperto e $(x_0,y_0) \in A$. Sia posto il problema di Cauchy $(PC)$ ([[Definizioni Relative alle Equazioni Differenziali#^3ec5ac|1]]) con $f, (x_0,y_0)$. 
> $$
> (PC):\left\{\begin{align}
> & y'(x)=f(x,y(x)) \\
> & y(x_0)=y_0
> \end{align}\right.
> $$
> 
> Allora esiste un raggio $h>0$ sui cui posso definire una funzione $y$ del tipo $y \in \mathcal{C}^1(A), y=(x_0-h, x_0+h)\longrightarrow \mathbb{R}$ che sia *soluzione* del problema di Cauchy $(PC)$.
^9ac878

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^9ac878]]
Omessa. $\blacksquare$

# 2. Questione dell'Unicità
Abbiamo dato una *condizione sufficiente* per l'*esistenza* di $y$, ovvero la *continuità* della funzione $f$. Tuttavia è abbastanza per garantirci anche l'*unicità*? Vediamo col seguente esempio.

#Esempio 
> [!exm] l'esistenza non implica unicità
> Prendiamo il problema di Cauchy $(PC)$ definito come
> $$
> (PC):\left\{\begin{align}
> & y'(x)=2\sqrt{|y|}\\
> & y(0)=0
> \end{align}\right.
> $$
> Abbiamo una soluzione? Dato che $f(y)=2\sqrt{|y|}$ è *continua* su $\mathbb{R}$, deve esistere. 
> 
> Infatti troviamo subito una soluzione $y \equiv 0$.
> 
> E' unica? No, infatti ponendo $y$ come
> $$
> y(x)=\left\{\begin{align}&x^2, x>0\\ &-x^2 , x\leq 0\end{align}\right.
> $$
> trovo che anche questa risolve $(PC)$. 
> 
> Anzi, peggio! Posso trovare una famiglia di funzioni $y_{\alpha,\beta}$ che risolvono il $(PC)$.
> $$
> y_{\alpha,\beta}(x)=\left\{\begin{align}&-(x-\alpha)^2, x \leq \alpha <0 \\ &0, \alpha <x<\beta \\ &(x-\beta)^2, x \geq \beta\end{align}\right.
> $$
> Inoltre, osservo che la derivata parziale $f_y$ non è definita (quindi non derivabile) in $0$.

**Conclusione.** La continuità della funzione non basta; dall'esempio appena menzionato notiamo che la chiave potrebbe stare nella *derivabilità* di $f$ su $y$ (ovvero l'esistenza di $f_y$). Infatti, vedremo col teorema di *Cauchy-Lipschitz* una condizione sufficiente che ci assicuri l'esistenza e l'unicità della soluzione.
