---
data: 2023-10-17
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Campi
tipologia: appunti
stato: "1"
---
*Definizione di un campo; le proprietà caratterizzanti dei campi; esempi di campi e non-campi.*
- - -
# 0. Preambolo
Questo capitolo ci serve per riflettere sui *fondamenti* che abbiamo usato finora, in particolare quando abbiamo parlato di [equazioni](Equazioni%20e%20soluzione), [sistemi lineari](Equazioni%20e%20Proprietà%20Lineari), [matrici](Matrice), [spazi vettoriali](Spazi%20Vettoriali), come quando parliamo delle matrici a *coefficienti reali*; oppure dei $\mathbb{R}$-*spazi vettoriali*. Tutte le proprietà di cui abbiamo visto valgono in quanto $\mathbb{R}$ è un *campo* con le sue operazioni $+, \cdot$.
Infatti avevamo implicitamente fatto una *meta-operazione* in cui usavamo le proprietà di questo campo. Ora definiamo rigorosamente un *campo*.
# 1. Definizione
**DEF 1.** Sia $K$ un *insieme* ([[Teoria degli Insiemi]]) si cui sono definite delle operazioni (o funzioni) ([[Funzioni]]) di *somma* e *moltiplicazione*, ovvero: $$\begin{align}+ : \ &K \times K \longrightarrow K \\ &(a,b) \mapsto a+b \\ \cdot: \ &K \times K \longrightarrow K \\ &(a,b) \mapsto a\cdot b \end{align} $$tali per cui vengono soddisfatte le seguenti proprietà $K$: $$\begin{align}&\text{K}_1: \forall a, b \in K; a+b=b+a \ | \ a\cdot b = b \cdot a \\&\text{K}_2: \forall a,b,c \in K; a+(b+c)= (a+b)+c \ | \ a\cdot (b \cdot c) = (a \cdot b) \cdot c\\ &\text{K}_3: \exists 0 \in K: \forall a \in K, a+0=0+a=a \\&\text{K}_{3.1}: \exists 1 \in K: \forall a \in K, a\cdot 1 = 1 \cdot a = a \\ &\text{K}_4: \forall a \in K, \exists (-a)\in K: a + (-a) = -a + a = 0 \\&\text{K}_{4.1}: \forall a \in K\diagdown, \{0\} \exists a^{-1}: a\cdot a^{-1} = a^{-1}\cdot a = 1 \\&\text{K}_5: \forall a, b, c \in K, (a+b)\cdot c =a\cdot c + b \cdot c\end{align}$$
Queste regole si chiamo rispettivamente nei seguenti modi:
	*K1*: Commutatività rispetto alla somma e prodotto
	*K2*: Associatività rispetto alla somma prodotto
	*K3*: Esistenza degli elementi neutri $0, 1$ dove $0 \neq 1$
	*K4*: Esistenza degli opposti (somma) e inversi (prodotto)
	*K5*: Distributività
Allora un tale insieme si dice **campo**.

## 1.1. Esempi
**ESEMPIO 1.1.a.** Gli insiemi $\mathbb{Q, R, C}$ sono dei *campi infiniti*, invece $\mathbb{N,Z}$ *non* sono *campi*.
**OSS 1.1.a.** Osserviamo che possono esistere anche dei *campi finiti*, che hanno una rilevanza fondamentale nella *crittografia*. L'esempio **1.1.c.** sarà l'esempio di un *campo finito*.

**ESEMPIO 1.1.b.** L'insieme delle *funzioni razionali* ovvero $$\{\frac{p}{q}: p,q\text{ sono polinomi in una variabile}\}$$può essere dotata di *somma* e *prodotto* in modo tale da rendere questa un *campo*.

**ESEMPIO 1.1.c.** Sia $$\mathbb{Z}_2 := \{0, 1\}$$su cui definiamo una operazione di *somma* e *prodotto* ($+, \cdot$).
Definiamo queste mediante delle *tabelle di somma* e di *moltiplicazione*.

| $+$  | 0   | 1   |
| --- | --- | --- |
| 0   | 0   | 1   |
| 1   | 1   | 0   |

| $\cdot$ | 0   | 1   |
| ------- | --- | --- |
| 0       | 0   | 0   |
| 1       | 0   | 1   |

Allora concludo che $$(\mathbb{Z}_2,+, \cdot)$$è un *campo finito*.
# 2. Conclusione
Pertanto la precedente nozione di $\mathbb{R}$-*spazio vettoriale* sarà da ora in poi sostituita da quella di $K$-spazio vettoriale, con $K$ un campo. Analogo il discorso per le *matrici a coefficienti in $K$*, ovvero $M_{m,n}(K)$.
