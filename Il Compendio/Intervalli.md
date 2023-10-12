---
data: 2023-10-09
corso: "[[Analisi Matematica I]]"
argomento: Intervalli
tipologia: appunti
stato: "1"
---
*Definizione di intervalli. Intervalli limitati, aperti, chiusi, inscatolati e dimezzati. Alcuni esempi*
- - -

# 1. Intervalli limitati
Siano $a, b \in \mathbb{R}$, con $a < b$ (ovvero $a \leq b \land a \neq b$), allora definiamo le seguenti definizioni degli *intervalli limitati*:
- **DEF 1.1.** Intervallo **chiuso** compresi gli estremi $$[a,b] := \{x \in \mathbb{R}: a \leq x \leq b\}$$
- **DEF 1.2.** Intervallo **semichiuso** $$]a, b] := \{x \in \mathbb{R}: a < x \leq b\}$$
- **DEF 1.3.** Similmente (da **DEF 1.2.**), altro intervallo **semichiuso** $$[a, b[ \ := \{x \in \mathbb{R}: a \leq x < b\}$$
- **DEF 1.4.** Intervallo **aperto** $$]a, b[ \ := \{x \in \mathbb{R}: a < x < b\}$$
Alcuni esempi di intervalli:
![[Pasted image 20231011161153.png]]
# 2. Intervalli illimitati
Se, invece consideriamo $a \in \mathbb{R}$, definiamo allora i seguenti *intervalli illimitati* (o anche *semirette*):
- **DEF 2.1.** Intervallo **inferiormente illimitato** $$\begin{align}]-\infty, a ] &:= \{x \in \mathbb{R}: x \leq a \}\\ ] - \infty, a[ &:= \{x \in \mathbb{R} : x < a\} \end{align}$$
- **DEF 2.2.** Intervallo **superiormente illimitato** $$\begin{align}[a, +\infty[  &:= \{x \in \mathbb{R}: x \geq a\} \\ ]a, +\infty [ &:= \{x \in \mathbb{R}: x > a\} \end{align}$$
**OSS 2.1.** Si può definire $\mathbb{R}$ anche come $$\mathbb{R} = \ ]-\infty, +\infty[$$
**OSS 2.2.** Può essere comodo pensare che anche l'insieme con un unico punto $\{a\}$ è un *intervallo "degenere"*.

**OSS 2.3.** Notare che $-\infty$ e $+\infty$ *NON* sono numeri reali, bensì dei semplici simboli. $$-\infty, +\infty \not \in \mathbb{R}$$Se voglio, posso estendere l'insieme dei numeri reali tale che $$\tilde{\mathbb{R}} := \mathbb{R} \cup \{+\infty, -\infty\}$$
# 3. Successione di intervalli
**DEF 3.1.** Sia $$(I_n)_n$$definita come una [successione](Assiomi%20di%20Peano,%20il%20principio%20di%20induzione) (**DEF 4.2.1.**) di intervalli *chiusi* e *limitati*. Quindi $$(I_n)_n = I_0, I_1, \ldots ,I_n, \ldots$$ove $$I_i = [a_i, b_i]$$(quindi è un *intervallo chiuso e limitato*)

## 3.1. Intervalli inscatolati e dimezzati
**DEF 3.1.1.** Gli intervalli si dicono **inscatolati** se $$\forall n, I_{n+1}\subseteq I_{n}$$ovvero graficamente
![[Pasted image 20231011161217.png]]

**DEF 3.1.2.** Una *successione di intervalli $(I_n)_n$* si dice di *intervalli chiusi, inscatolati* e **dimezzati** se $$\forall n, I_{n+1} \subseteq I_{n}$$ove il nuovo sottoinsieme ha gli elementi $$I_{n+1} =[a_n, \frac{a_n+b_n}{2}] \text{ oppure } [\frac{a_n+b_n}{2}, b_n]$$
**OSS 3.1.2.1.** Notiamo che se prendiamo un $$I_n =[a_n, b_n] = [a_{n-1}, \frac{a_{n-1}+b_{n-1}}{2}]$$allora la *distanza* tra $a_n$ e $b_n$ è $$a_n-b_n = \frac{2a_{n-1}-a_{n-1}-b_{n-1}}{2}= \frac{a_{n-1}-b_{n-1}}{2}$$ovvero la *"metà della lunghezza del segmento di prima, ovvero $a_{n-1}-b_{n-1}$"*.
