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
#Definizione 
> [!def] intervalli limitati
Siano $a, b \in \mathbb{R}$, con $a < b$ (ovvero $a \leq b \land a \neq b$), allora definiamo le seguenti definizioni degli *intervalli limitati*:
*Intervallo chiuso* compresi gli estremi $$[a,b] := \{x \in \mathbb{R}: a \leq x \leq b\}$$ 
*Intervallo semichiuso*, escluso l'estremo sinistro $$]a, b] := \{x \in \mathbb{R}: a < x \leq b\}$$
*Intervallo semichiuso*, escluso l'estremo destro $$[a, b[ \ := \{x \in \mathbb{R}: a \leq x < b\}$$
*Intervallo aperto*, esclusi gli estremi $$]a, b[ \ := \{x \in \mathbb{R}: a < x < b\}$$
^a1a838

**FIGURA 1.1.** (*Alcuni esempi di intervalli limitati*)
![[Pasted image 20231011161153.png]] 
^6d6e94
# 2. Intervalli illimitati
#Definizione 
> [!def] intervalli illimitati
Se, invece consideriamo $a \in \mathbb{R}$, definiamo allora i seguenti *intervalli illimitati* (o anche *semirette*):
*Intervallo inferiormente illimitato* $$\begin{align}]-\infty, a ] &:= \{x \in \mathbb{R}: x \leq a \}\\ ] - \infty, a[ &:= \{x \in \mathbb{R} : x < a\} \end{align}$$
*Intervallo superiormente illimitato*$$\begin{align}[a, +\infty[  &:= \{x \in \mathbb{R}: x \geq a\} \\ ]a, +\infty [ &:= \{x \in \mathbb{R}: x > a\} \end{align}$$

#Osservazione 
> [!rmk] l'insieme dei reali è l'intervallo illimitato
Si può definire $\mathbb{R}$ anche come $$\mathbb{R} = \ ]-\infty, +\infty[$$

#Osservazione 
> [!rmk] un insieme con un singolo elemento è degenere
Può essere comodo pensare che anche l'insieme con un unico punto $\{a\}$ è un *intervallo*, e lo definiamo come un *intervallo "degenere"*.

#Osservazione 
> [!rmk] l'infinito non è un numero
Notare che $-\infty$ e $+\infty$ *NON* sono numeri reali, bensì dei semplici simboli. $$-\infty, +\infty \not \in \mathbb{R}$$Se voglio, posso estendere l'insieme dei numeri reali tale che $$\tilde{\mathbb{R}} := \mathbb{R} \cup \{+\infty, -\infty\}$$
# 3. Successione di intervalli
#Definizione 
> [!def] successione di intervalli chiusi e limitati
Sia $$(I_n)_n$$definita come una [successione](Assiomi%20di%20Peano,%20il%20principio%20di%20induzione.md) di intervalli *chiusi* e *limitati*.
Allora $$(I_n)_n = I_0, I_1, \ldots ,I_n, \ldots$$ove $$I_i = [a_i, b_i]$$(quindi è un *intervallo chiuso e limitato*) 
^a18c7c
## Intervalli inscatolati e dimezzati
#Definizione 
> [!def] intervalli inscatolati
Gli intervalli si dicono *inscatolati* se $$\forall n, I_{n+1}\subseteq I_{n}$$ovvero graficamente la *figura 3.1.*
^66568f

**FIGURA 3.1.** (*Intervalli inscatolati*)
![[Pasted image 20231011161217.png]] 

#Definizione 
> [!def] intervalli chiusi, inscatolati e dimezzati
Una *successione di intervalli $(I_n)_n$* si dice di *intervalli chiusi, inscatolati* e *dimezzati* se $$\forall n, I_{n+1} \subseteq I_{n}$$ove il nuovo sottoinsieme ha gli elementi $$I_{n+1} =[a_n, \frac{a_n+b_n}{2}] \text{ oppure } [\frac{a_n+b_n}{2}, b_n]$$

#Osservazione 
> [!rmk] la lunghezza di un elemento di intervalli chiusi, inscatolati e dimezzati
Notiamo che se prendiamo un $$I_n =[a_n, b_n] = [a_{n-1}, \frac{a_{n-1}+b_{n-1}}{2}]$$allora la *distanza* tra $a_n$ e $b_n$ è $$a_n-b_n = \frac{2a_{n-1}-a_{n-1}-b_{n-1}}{2}= \frac{a_{n-1}-b_{n-1}}{2}$$ovvero la *"metà della lunghezza del segmento di prima, ovvero $a_{n-1}-b_{n-1}$"*. 
Ricorsivamente si mostra che la lunghezza diventa
$$a_n-b_n = \frac{a_0-b_0}{2^n} $$
^7942fa
