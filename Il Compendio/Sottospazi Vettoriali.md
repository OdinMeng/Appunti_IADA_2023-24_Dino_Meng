---
data: 2023-10-04
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Sottospazi Vettoriali
tipologia: appunti
stato: "1"
---
*Sottospazio vettorali: definizione, esempi, interpretazione geometrica.*
- - -
# 1. Sottospazio Vettoriale
**DEF 1.** Sia $V$ un $\mathbb{R}$-*spazio vettoriale*; un sottoinsieme $W \subseteq V$ si dice un *sottospazio vettoriale* se valgono le seguenti:
1. Il vettore *nullo* di $V$ appartiene a $W$
2. $\forall v,w \in W$; vale che $v+w \in W$ (*chiusura rispetto alla somma*)
3. $\forall \lambda \in \mathbb{R}$, $\forall v \in W$, vale che $\lambda \cdot v \in W$ (*chiusura rispetto allo scalamento*)

Consideriamo ora l'$\mathbb{R}$-[spazio vettoriale](Spazi%20Vettoriali)  $V_2$, ovvero $$V_2: (\mathbb{R}^2, +, \cdot)$$introdotto in precedenza (**ESEMPIO 2.1.**).
Ora consideriamo il seguente sottoinsieme $W \subseteq V_2$; $$W := \{(x,y) \in V_2: x-3y=0\}$$
Facciamo le seguenti *osservazioni*. 
**OSS 1.1.** In $V_2$ esiste il vettore nullo $(0,0)$; in questo caso il vettore nullo $(0,0)$ vale anche in $W$.
**OSS 1.2.** In $V_2$ è definita una *somma $+$*. Se $v$, $w$ sono due elementi di $W$, allora sono in particolare elementi di $V_2$; dunque $v +w \in V_2$. In aggiunta vale che $v+w \in W$. Infatti: se $v = (v_1, v_2)$ $w=(w_1, w_2)$ allora $$\begin{align}&v \in W \implies v_1-3v_2 = 0 \\ &w \in W \implies w_1 - 3w_2 = 0 \end{align}$$quindi $$(v_1-3v_2) + (w_1-3w_2) = 0 = 0+0 = 0$$ovvero $$(v_1+w_1)-3(v_2+w_2) = 0$$ovvero $(v+w) \in W$
**OSS 1.3.** Infine consideriamo $v \in W$ e $\lambda \in \mathbb{R}$. Se $$\lambda \cdot v \in V_2$$allora vale anche $$\lambda \cdot v \in W$$
Infatti se $v = (v_1, v_2)$, allora $\lambda \cdot v = (\lambda \cdot v_1, \lambda \cdot v_2)$; $$\begin{align}&v \in W \implies v_1-3v_2= 0\\ \text{allora }&\lambda\cdot(v_1-3v_2) = \lambda\cdot 0 = 0 \\ \text{quindi }& (\lambda \cdot v_1)- 3(\lambda \cdot v_2) = 0 \\ \text{ovvero } &\lambda \cdot v \in W\end{align}$$

# 2. Interpretazione geometrica
**ESEMPIO 2.1.** Consideriamo $\mathbb{R}^2$ come l'insieme dei *punti nel piano*, ovvero il classico *piano cartesiano $\pi$*
Definiamo il sottoinsieme $$W := \{(x,y) \in \mathbb{R}^2: x-3y = 0\}$$
Ovviamente $W$ è uno *sottospazio vettoriale* di $\mathbb{R}^2$; notiamo che se rappresentiamo $\mathbb{R}^2$ come l'insieme dei punti nel piano, allora si può rappresentare $W$ come l'insieme dei *punti nella retta $r$*, ove $r: x - 3y = 0 \iff y = \frac{1}{3}x$

![[Pasted image 20231006182940.png]]

**ESEMPIO 2.2.** In $\mathbb{R}^2$ consideriamo il seguente: $$C := \{(x,y) \in \mathbb{R}^2 : x^2+y^2 = 1\}$$
Osserviamo subito che la *proprietà caratterizzante di $C$* non è un'*equazione lineare*; infatti si tratta di un'equazione di secondo grado.
Precisamente nel contesto della *geometria analitica*, $C$ rappresenterebbe la circonferenza $$(x-\alpha)^2+(y-\beta)^2 = \gamma^2$$ove $(\alpha, \beta)$, quindi $(0,0)$, rappresentano le coordinate dell'origine del cerchio e $\gamma$, quindi $1$, il raggio.
Vediamo subito che $C$ *non* è un sottospazio vettoriale di $\mathbb{R}^2$, in quanto $(0,0)$ non appartiene a $C$.

![[Pasted image 20231006182954.png]]
