---
data: 2024-05-05
corso:
  - "[[Analisi Matematica II]]"
argomento: Teorema del Dini
tipologia: appunti
stato: "1"
capitolo: Curve e Superfici
---
- - -
*Teorema del Dini (o delle funzioni implicite): enunciato, idea grafica.*
- - -
# 0. Voci correlate
- [[Curva in Forma Implicita]]
- [[Curve Regolari]]
- [[Gradiente di Campi Scalari]]
# 1. Enunciato del teorema del Dini
Adesso vediamo un risultato importante per la parte sulle *curve e superfici*.

#Teorema 
> [!thm] della funzione implicita, o del Dini
> Sia $\varphi: A \subseteq \mathbb{R}^2 \longrightarrow \mathbb{R} \in \mathcal{C}^1(A)$ con $A$ aperto. Sia $(x_0,y_0)=\underline{x_0} \in A$ un punto tale che
> $$
> \varphi(\underline{x_0})=0, \nabla \varphi(\underline{x_0}) \neq 0
> $$
> Allora esistono gli intorni $U(x_0)$ e $V(y_0)$ su cui sono definite le le funzioni $g:U \longrightarrow V$ o (vel) $h: V \longrightarrow U$ tali che
> $$
> L_0(\varphi) \cap (U \times V) = \left\{\begin{align}&G(g) \impliedby \varphi_y(\underline{x_0}) \neq 0 \\ & G(h) \impliedby \varphi_x (\underline{x_0}) \neq 0\end{align}\right.
> $$
> (Nota: $G(f(\cdot))$ indica *"grafico della funzione $f$*). In un senso geometrico, abbiamo che $g, h$ sono delle *curve cartesiane*.
> 
> Inoltre si ha che possiamo calcolare le derivate di $g, h$ come
> $$
> \begin{gather} 
> g'(x) = -\frac{\varphi_x(x, g(x))}{\varphi_y(x, g(x))} \impliedby \varphi_y(\underline{x_0}) \neq 0\\ h'(x)=-\frac{\varphi_y(h(y),y)}{\varphi_x(h(y), y)} \impliedby \varphi_x(\underline{x_0}) \neq 0
> \end{gather}
> $$
> In particolare la *retta tangente* a $L_0(\varphi)$ in $\underline{x_0}$ ha l'equazione
> $$
> \varphi_x(\underline{x_0})(x-x_0)+\varphi_y(y-y_0)=0
> $$
> Ovvero il prodotto scalare
> $$
> r_t : \langle \nabla \varphi(\underline{x_0}), \underline{x}-\underline{x_0}\rangle =0
> $$
^c915ce

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^c915ce]]
La prima parte è omessa. Si dimostra solo la formula per la *retta tangente*. Per dimostrarla si suppone che esista $g$, ovvero che $\varphi_y(\underline{x_0}) \neq 0$ (la dimostrazione è analoga nel caso dell'esistenza di $h$ o entrambi); di conseguenza, abbiamo che la sua retta tangente è
$$
y=\underbracket{g(x_0)}_{y_0}+g'(x_0)(x-x_0)
$$
Allora, usando la formula per la derivata di $g$, abbiamo
$$
y-y_0=g'(x_0)(x-x_0) \iff (y-y_0)=-\frac{\varphi_x(\underline{x_0})}{\varphi_y(\underline{x_0})}(x-x_0)
$$
che ci porta al risultato finale
$$
\boxed{\varphi_x(\underline{x_0})(x-x_0)+\varphi_y(\underline{x_0})(y-y_0)=0}
$$
che è la tesi. $\blacksquare$

# 2. Idea grafica del teorema del Dini
Adesso diamo un'idea grafica del *teorema del Dini*, in particolare la prima tesi (ovvero l'esistenza di $g,h$).

**Caso $g$.** Nel caso in cui esiste $g: U \longrightarrow V$ (in particolare senza $h$), abbiamo che la *derivata-vettore* $\nabla \varphi$ è *nulla* verticalmente, ma non orizzontalmente. In questo caso, possiamo tracciare il *"quadrato"* $U \times V$ in cui abbiamo una *funzione* (che deve mandare elementi di $U$ ad uno e solo elemento di $V$).
![[Pasted image 20240505202343.png]]

#Osservazione 
> [!rmk] l'ipotesi cruciale
> Notiamo che l'*ipotesi essenziale* per la validità del *teorema del Dini* è quella della non-nullità del gradiente, $\nabla f \neq \underline{0}$.
> 
> In un certo senso, possiamo applicare il *teorema del Dini* anche se il primo criterio (ovvero la funzione deve annullarsi in $\underline{x_0}$); infatti se avessimo $\varphi(\underline{x_0}) = c \in \mathbb{R}\diagdown\{0\}$, basta ridefinire la funzione come $\tilde{\varphi}(\underline{x}):=\varphi(\underline{x})-c$. 
> 
> Invece, se avessi $\nabla f = \underline{0}$, non ci si scappa.

#Esempio 
> [!exm] esempio di funzione non-dinibile
> Abbiamo $f(x,y)=x^2-y^2$. Per il *teorema del Dini* non si può essere sicuri di prendere un intorno di $(0,0)$ tale da avere una *curva regolare*: infatti, è così. Se prendiamo il punto $\underline{0}$ e provassimo a considerare un suo qualsiasi quadrato, avrò sempre una *non-funzione* (che manda un elemento in più elementi: quindi una multifunzione).

**FIGURA 3.1.**
![[Pasted image 20240505202855.png|500]]

**Caso $h$.** Completamente analoga al caso $g$, solo che operiamo su una curva del tipo $f(y)=x$ (ovvero con assi invertiti).
![[Pasted image 20240505203142.png|650]]

**Caso $g, h$.** Se abbiamo l'esistenza sia di $g$ che di $h$, allora abbiamo una *funzione invertibile* (biiettiva). Infatti, considerando la retta $f(x,y)=x-2y$ abbiamo che possiamo *esplicitarla* come due curve:
$$
L_0(f)\to\left\{  \begin{align}& g(x)=\frac{x}{2} \\ &h(y)=2y\end{align}\right.
$$
Infatti, troviamo che $(g \circ h)(\lambda) = (h \circ g)(\lambda) = \lambda$.
