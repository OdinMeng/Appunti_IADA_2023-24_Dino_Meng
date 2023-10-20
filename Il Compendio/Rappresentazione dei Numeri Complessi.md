---
data: 2023-10-16
corso: "[[Analisi Matematica I]]"
argomento: Rappresentazione dei Numeri Complessi
tipologia: appunti
stato: "0"
---
*Rappresentazione dei numeri complessi come somma di parte reale e parte immaginaria; il piano di Argand-Gauss.*
- - -
# 1. Rappresentazione
Dalle considerazioni prese in [[Operazioni sui Numeri Complessi]] possiamo fare le seguente considerazioni per poter rappresentare un numero complesso in un modo alternativo.

**DEF 1.1.** Prendendo un numero complesso di forma $(a,b) \in \mathbb{C}$, definiamo le seguenti.
1. $\mathbb{1}$ il numero complesso di forma $(1,0)$ 
2. $i$ il numeri complesso di forma $(0, 1)$

Se li moltiplichiamo per se stessi otteniamo:
1. $\mathbb{1} \cdot \mathbb{1} = \mathbb{1} = (1,0)$ 
2. $i \cdot i = (0,1)\cdot(0,1) = (0*0-1*1, 0*1+1*0) = (-1, 0) = - \mathbb{1}$
   Allora si può affermare che $i^2 = -1$ è la soluzione dell'equazione $x^2+1=0$.

**CONCLUSIONE.** 
Allora posso scrivere il numero complesso $(a,b)$ come il seguente: $$\begin{align}(a,b) &= (a,0) \cdot(1,0 ) + (b,0)\cdot(0,1) \\ &= a(1,0) + b(0,1) \\ (a,b) &= a+ib\end{align}$$
**DEF 2.2.** Il numero $a$ si dice la **parte reale** e viene definita come $\text{Re}(z)$, il numero $b$ ($\text{Im}(z)$ )si dice la **parte immaginaria**.

# 2. Piano di Argand-Gauss
Se prendiamo il *piano cartesiano $\pi$* applicando le regole definite per $\mathbb{C}$, allora otterremo il piano di *Gauss* (oppure di *Argand-Gauss*), dove ogni punto del piano è un *numero complesso*.
Eccovi un esempio grafico:
[ GRAFICO DA FARE ]

Infatti, *geometricamente* un punto $z$ può rappresentare un *vettore geometrico* ([[Vettori Liberi]]) con punto di applicazione $(0,0)$.
Chiamiamo un punto del piano come $z$, che può essere scritto come $$z = \text{Re}(z) +i\text{Im}(z)$$
# 3. Esercizi
Considerando le [[Operazioni sui Numeri Complessi]] e questa rappresentazione di un numero complesso $z$, si propongono alcuni esercizi:
**ESERCIZIO 3.1.** Calcola $$(2+3i)+(4+i)$$
**ESERCIZIO 3.2.** Calcola $$(2-3i)(2+3i)$$
**ESERCIZIO 3.3.** Calcola $$(1+i)(2-i)(7i)$$
**ESERCIZIO 3.4.** Calcola $$\frac{i+1}{i-1}$$
