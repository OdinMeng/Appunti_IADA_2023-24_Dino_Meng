---
data: 2023-09-28
corso: "[[Analisi Matematica I]]"
argomento: Coppie Ordinate e Prodotto Cartesiano
tipologia: appunti
stato: "1"
---
*Nozione primitiva di coppia ordinata, differenze tra insiemi e coppie ordinate.*
- - -
# DEF 1. Nozione primitiva di coppia ordinata
Una **coppia ordinata** è un **aggregato** con **due** elementi, in cui si distingue il primo e il secondo elemento. Una coppia ordinata con elementi $a$ e $b$ viene indicata come $(a,b)$.
**ATTENZIONE.** Si deve notare che la *coppia ordinata* è un concetto diverso da quello dell'[insieme](Teoria%20degli%20Insiemi); infatti $(a,b) \neq \{a,b\}$, in quanto $\{a,b\}=\{b,a\}$ è vera per $\forall a,b$, invece $(a,b)=(a',b') \iff a=a';b=b'$, di conseguenza $(a,b)\neq(b,a)$ a meno che $a=b$.
# DEF 2. Prodotto Cartesiano
Siano $A,B$ insiemi;
Si definisce il **prodotto cartesiano** di $A$ e $B$ come il seguente:
$$A \times B := \{(a,b) : a\in A, b \in B\}$$
**ESEMPIO 2.1.** Il *Piano Cartesiano* $\pi$ studiato alle scuole superiori si costruisce e si definisce nel seguente modo:$$\pi = \{(a,b): a\in \mathbb{R}, b\in\mathbb{R}\}$$Notiamo che gli insiemi $A,B$ sono uguali; infatti $$\pi = \mathbb{R} \times \mathbb{R} = \mathbb{R}^2$$**OSS 2.1.1.** Il *Piano Cartesiano* appena descritto è un concetto molto importante per la matematica, in quanto esso costituisce un nesso tra i numeri e il piano $\pi$.
**ILLUSTRAZIONE GRAFICA.**
![[Pasted image 20231001144747.png]] ^61dab9

**ESEMPIO 2.2.** Similmente $$A \times B \times C := \{(a,b,c) : a\in A, b \in B,c\in C\}$$$$\mathbb{R}^3=\{(x,y,z):x\in\mathbb{R},y\in\mathbb{R},z\in\mathbb{R}\}$$**ILLUSTRAZIONE GRAFICA**
![[Pasted image 20231001144802.png]]

**SUBDEF 2.1.** Generalizzando, si definisce $\mathbb{R}^n$ come: $$\mathbb{R}^n := \{(x_1,\ldots,x_n:x_1)\in\mathbb{R},x_1,\ldots,x_n\in\mathbb{R}\}$$
	**SUBDEF 2.1.1** Si definisce la componente $(x_1,\ldots,x_n:x_1)$ come una **n-upla** (vettore)

**ESEMPIO 2.3.** Si hanno $A=\{a_1,\ldots,a_5\}$ e $B=\{b_1,\ldots,b_4\}$; scrivi e rappresenta graficamente $A \times B$.$$A\times B=\{(a_i,b_j):i=1,2,3,4,5;j=1,2,3,4\}$$![[Pasted image 20231001144820.png]]
