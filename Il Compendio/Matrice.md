---
data: 2023-10-12
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Matrice
tipologia: appunti
stato: "1"
---
*Definizione di matrice, matrice quadrata, l'insieme delle matrici, matrice nulla. L'insieme delle matrici come $\mathbb{R}$-spazio vettoriale con le operazioni di somma interna e scalamento; Matrici triangolari superiori (e l'insieme delle matrici triangolari superiori come sottospazio vettoriale); Definizione della diagonale principale di una matrice; Matrici simmetriche ed antisimmetriche; Matrice identità; Matrice inversa e l'invertibilità delle matrici.*
- - -
# 1.  Definizione di Matrice
**DEF 1.** Siano $m, n \in \mathbb{N} \diagdown \{0\}$; allora si definisce una **matrice** $m \times n$ a **coefficienti reali** come una *tabella rettangolare di $m \cdot n$ elementi* del tipo: $$\begin{pmatrix}a_{11} & a_{12} & \ldots & a_{1n} \\\ a_{21} & a_{22} & \ldots & a_{2n} \\ \ldots \\ a_{m1} & a_{m2} & \ldots & a_{mn} \end{pmatrix}$$
Dove ciascun *coefficiente* $a_{ij}$ è un numero *reale*; $$\forall i \in \{1, \ldots ,m\}; \forall j \in \{1, \ldots ,n\}; a_{ij} \in \mathbb{R}$$Per convenzione i numeri (*indici*) $i, j$ iniziano con $1$. 
Diciamo che il coefficiente $a_{ij}$ è di posto $i, j$.

**ESEMPIO 1.1.** La seguente è una matrice $3 \times 4$.
$$\begin{pmatrix} 1 & \sqrt{2} & -2 & 2 \\ 0 & 3 & 4 & 6 \\ 7 & -1 & 5 & 3 \end{pmatrix}$$
Scegliamo qualche coefficiente: $$a_{12} = \sqrt{2}; a_{21} = 0$$Ovviamente si nota che *NON* è *sempre* vero che $a_{ij} = a{ji}$; infatti qui abbiamo $a_{12}\neq a_{21}$

## 1.1. $i$-esima riga e colonna della matrice
Sia $A=(a_{ij})_{i = 1, \ldots, m; j = 1, \ldots, n}$ una matrice a coefficienti reali. Allora definiamo:
**DEF 2.1.** Per ogni $i \in \{1, \ldots, m\}$ la $i$**-esima riga** è la *matrice*$$A_{(i)} := (a_{i1}, \ldots, a_{in})$$
**DEF 2.2.** Per ogni $j \in \{1, \ldots, n\}$ la $i$**-esima colonna** è la *matrice* $$A^{(j)} := \begin{pmatrix}a_{1j} \\ a_{2j} \\ \ldots \\ a_{mj} \end{pmatrix}$$
## 1.2. L'insieme delle matrici 
**DEF 1.2.** Dati $m, n \in \mathbb{N}$, ove $m>0, n>0$, denotiamo **l'insieme delle matrici** con $$M_{m,n}(\mathbb{R}) $$
**OSS 1.2.1.** Notiamo che con le operazioni di *somma interna* e di *prodotto per uno scalare* definite in [[Operazioni basilari con matrici]], $$(M_{m,n}(\mathbb{R}), +, \cdot)$$è uno [spazio vettoriale](Spazi%20Vettoriali).
# 2. Tipologie di matrici
## 2.1. Matrici quadrate
**DEF 2.1.** Una *matrice* si dice **quadrata** se il numero delle *righe* ($n$) coincide con il suo numero delle *colonne* ($m$).
**SUBDEF 2.1.1.** Per denotare **l'insieme delle matrici quadrate** si scrive $$M_n(\mathbb{R})$$ove $n \in \mathbb{N}, n>0$.

**ESEMPIO 2.1.1.** La seguente è una *matrice quadrata $2 \times 2$*
$$A = \begin{pmatrix} 1 & 2 \\ -2 & 5 \end{pmatrix}$$
**DEF 2.1.2** Nel caso delle *matrici quadrate* è possibile definire la **diagonale principale** come la *parte di $A$ data dalle entrate di posto $A_{ii}, i \in \{1,\ldots,n\}$*.

**ESEMPIO 2.1.2.** Nell'**ESEMPIO 2.1.1.** la *diagonale principale* sarebbe $(1,5)$.
## 2.2. Matrici nulle
**DEF 2.2.** Una *matrice* $m \times n$ **nulla** è è la *matrice $m \times n$* le cui *entrate* (o *coefficienti*) sono tutte nulle, $0$.
$$0 := \begin{pmatrix}0 & \ldots & 0 \\ \vdots & & \vdots \\ 0 & \ldots & 0\end{pmatrix}$$
## 2.3. Matrici triangolari superiori
**DEF 2.3.** Si definisce **l'insieme delle matrici triangolari superiori $2 \times 2$** come $$T_{2}(\mathbb{R}):= \{A \in M_2(\mathbb{R}): a_{21} = 0\}$$ovvero una matrice di forma $$\begin{pmatrix}a_{11}&a_{12}\\0 &a_{22} \end{pmatrix}$$
Ovviamente è possibile generalizzare per le matrici quadrate $M_n(\mathbb{R})$.

**OSS 2.3.1.** Notiamo che questo insieme è un sottoinsieme di $M_2(\mathbb{R})$; $$T_2(\mathbb{R}) \subseteq M_2(\mathbb{R})$$Infatti se l'insieme delle matrici $2 \times 2$ $M_2(\mathbb{R})$ è un *$\mathbb{R}$-spazio vettoriale* ([[Spazi Vettoriali]], **DEF 1.**), allora $T_2(\mathbb{R})$ è un *sottospazio vettoriale* ([[Sottospazi Vettoriali]], **DEF 1.**).
Infatti valgono le seguenti:
1. La matrice nulla $\begin{pmatrix}0&0\\0 &0 \end{pmatrix}$ appartiene anche a $T_2(\mathbb{R})$.
2. Le operazioni di *somma* e di *scalamento* sono chiuse; ovvero $$A, B \in T_2(\mathbb{R}) \implies (A+B)\in T_2(\mathbb{R})$$e $$\lambda \in \mathbb{R}, A \in T_2(\mathbb{R}) \implies (\lambda \cdot A) \in T_2(\mathbb{R})$$
E' possibile verificare 2. verificando che la combinazione lineare di $A, B \in T_2(\mathbb{R})$ appartiene anch'esso a $T_2(\mathbb{R})$.
$$\begin{align} \lambda_1 \cdot A + \lambda_2 \cdot B &= \begin{pmatrix}\lambda_1a_{11} & \lambda_1 a_{12}\\ 0 &\lambda_1 a_{22}\end{pmatrix} + \begin{pmatrix} \lambda_2b_{11} & \lambda_2 b_{12}\\ 0 &\lambda_2 b_{22}\end{pmatrix} \\ &=  \begin{pmatrix} \lambda_1 a_{11} + \lambda_2 b_{11}  & \lambda_1a_{12}+\lambda_2b_{12} \\ 0 & \lambda_1a_{22} + \lambda_2b_{22}\end{pmatrix} \in T_2(\mathbb{R}) \  \blacksquare\end{align} $$
Questa osservazione è analoga per $T_n(\mathbb{R})$ e $M_n(\mathbb{R})$.

## 2.4. Matrici simmetriche e antisimmetriche
Considerando da quanto detto in [[Operazioni particolari con matrici]] (**OSS 1.1.**), abbiamo notato che *non* ha sempre senso chiedersi se la *trasposta* di una matrice è uguale alla matrice stessa, ovvero $$¿ \ ^tA = A \ ?$$tuttavia questo acquisisce significato quando consideriamo le matrici quadrate appartenenti a $M_n(\mathbb{R})$.
**ESEMPIO 2.4.1.** Prendo una matrice $3 \times 3$ che chiamo $A$.
Sapendo che alla prima riga $A_{(1)}$ ho fissato $A_{(1)} = \begin{pmatrix} 1&2&3 \end{pmatrix}$, allora in questo modo ho già fissato $A^{(1)} = \begin{pmatrix}1 \\ 2 \\ 3 \end{pmatrix}$, in quanto voglio che $A^{(1)} = (^tA_{(1)})$. (ovvero che la trasposta della prima riga sia uguale alla prima colonna). 
Il procedimento si ripete per $A_{(2)} = \begin{pmatrix}2 &?&? \end{pmatrix}$, dove i punti segnati con $?$ possono essere sostituiti con qualsiasi valori. Per convenienza inseriremo con dei numeri crescenti, ovvero $4,5$ (e alla fine $6$). Alla fine otteniamo
$$A = \begin{pmatrix}1&2&3\\2&4&5\\3&5&6 \end{pmatrix}$$che soddisfa $^tA = A$. Inoltre osserviamo che questa matrice è *simmetrica* alla diagonale.

**DEF 2.4.** Allora definiamo una matrice $A \in M_{n}(\mathbb{R})$:
1. **Simmetrica** se vale che $$A =\  ^tA$$
2. **Antisimmetrica** se vale che $$A = -^tA$$
**OSS 2.4.1.** Osservo una peculiarità delle matrici *antisimmetriche*; infatti se voglio costruirne una mi accorgo che tutte le entrate della *diagonale principale* devono essere nulle, in quanto l'unico numero che rimane uguale quando moltiplicato per $-1$ è $0$.

**OSS 2.4.2.** Notiamo che le *matrici nulle* e *quadrate* sono le *uniche* matrici che sono sia *antisimmetriche* che *simmetriche*. Infatti, $0 = 0$ e $0 = -0$.

## 2.5. Matrice unità (o identità)
Considerando da quanto detto e notato per quanto riguarda il *prodotto tra matrici* ([[Operazioni particolari con matrici]]), possiamo definire una matrice che comporta come il numero $1$ dei numeri reali $\mathbb{R}$ per questa suddetta operazione. ([[Operazioni particolari con matrici]], **PROP 2.4.3.**)
**DEF 2.5.** Sia $n \in \mathbb{N}$ e $n > 0$, allora la **matrice unità** (o **identità**) è quella matrice quadrata appartenente a $M_n(\mathbb{R})$ le cui entrate sono tutte nulle, fuorché quelle della *diagonale principale*, che sono tutti uguali a $1$. Denotiamo questa matrice con $$\mathbb{1}_n \text{ o } I_n \text{ o } \text{Id}_n$$ove $$(\mathbb{1}_n)_{ij} = \begin{cases}0 \text{ se }i \neq j \\ 1 \text{ se }i = j\end{cases}$$
## 2.6. Matrice inversa
**OSS 2.6.1.** Nei dei numeri reali $\mathbb{R}$, dato un $a \in \mathbb{R}, a \neq 0$ diciamo che un altro numero $b \in \mathbb{R}$ è l'inversa di $a$ se è vera che $$a \cdot b = b\cdot a = 1$$e $b$ è unica. Infatti questo è esattamente *l'assioma M3)* dei numeri reali ([[Assiomi dei Numeri Reali]]).

**DEF 2.6.** Allora, tracciando un parallelismo tra i *numeri reali* e le il *prodotto tra matrici* ([[Operazioni particolari con matrici]]), chiamiamo la *matrice quadrata* $A \in M_{n}(\mathbb{R})$ **invertibile** se esiste una matrice $B \in M_{n}(\mathbb{R})$ tale che valga $$A \cdot B = B \cdot A = \mathbb{1}_n$$che chiamiamo $$B = A^{-1}$$
**PROP 2.6.1.** Prendendo $A, B \in M_{n}(\mathbb{R})$, valgono le seguenti proprietà:
1. Se $A$ è *invertibile*, allora la sua inversa $A^{-1}$ è *unica*.
2. Se $A,B$ sono invertibili allora $A \cdot B$ *invertibile*, la quale inversa sarebbe $B^{-1} \cdot A^{-1}$.

**DIMOSTRAZIONI.** 
1. Prendiamo per assurdo $B,C$ inverse di $A$.
Allora per definizione$$\begin{align}&A \cdot B = B \cdot A = \mathbb{1}_{n}\\ &A \cdot C = C \cdot A = \mathbb{1}_n\end{align}$$allora $$B = B \cdot \mathbb{1}_n = B \cdot (A \cdot C) = (B \cdot A) \cdot C = \mathbb{1}_n \cdot C = C$$quindi per proprietà transitiva $$B=C$$$\blacksquare$

2. Qui basta fare dei calcoli per verificare che $B^{-1} \cdot A^{-1}$ è $(A\cdot B)^{-1}$. Ovvero basta verificare che $(A \cdot B)\cdot(B^{-1}\cdot A^{-1}) = \mathbb{1}_{n}$ (e viceversa); $$\begin{align}(A \cdot B)\cdot(B^{-1}\cdot A^{-1})&=A \cdot(B \cdot B^{-1}) \cdot A^{-1} \\ &= A \cdot \mathbb{1}_n \cdot A^{-1} \\ &= A \cdot A^{-1} \\ &= \mathbb{1}_n \\ \text{analogamente}\\(B^{-1}\cdot A^{-1})\cdot(A\cdot B) &= B^{-1}\cdot(A^{-1} \cdot A) \cdot B \\ &= B^{-1} \cdot \mathbb{1}_{n} \cdot B \\&= B^{-1} \cdot B \\ &= \mathbb{1}_n \\\blacksquare\end{align}$$
**OSS 2.6.2.** L'analogia tra *l'invertibilità* rispetto al prodotto definito in $\mathbb{R}$ e l'invertibilità rispetto al *prodotto righe per colonne* di matrici *NON* si estende fino al punto di poter dire che *OGNI* matrice non-nulla è invertibile. Infatti si propone il seguente controesempio.
**ESEMPIO 2.6.2.a.** Considero la seguente matrice $A \in M_2(\mathbb{R})$: $$A = \begin{pmatrix}1 & 1 \\1 & 1 \end{pmatrix}$$la matrice $A$ *non* è *invertibile*.
**DIMOSTRAZIONE.** Per assurdo suppongo che esista $A^{-1} = B$. Allora $$B = \begin{pmatrix}b_{11} & b_{12} \\ b_{21} & b_{22} \end{pmatrix}$$Allora per definizione deve valere $$C=A \cdot B = \begin{pmatrix} 1 & 0 \\0 & 1\end{pmatrix}$$Prendiamo le entrate $C_{11}$ e $C_{21}$. Per definizione del *prodotto righe per colonne* abbiamo: $$\begin{align}&C_{11} = 1 = \begin{pmatrix}1&1 \end{pmatrix} \begin{pmatrix}b_{11}  \\ b_{21}\end{pmatrix} = b_{11} + b_{21} \\ &C_{21} = 0 = \begin{pmatrix}1 & 1 \end{pmatrix}\begin{pmatrix} b_{11} \\ b_{21}\end{pmatrix} = b_{11}+b_{21} \end{align}$$Ma questo implicherebbe che $$b_{11} + b_{21} = 1 = 0$$che è un *assurdo*, in quanto $1 \neq 0$.
