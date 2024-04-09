---
data: 2023-10-12
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Matrice
tipologia: appunti
stato: "1"
---
*Definizione di matrice, matrice quadrata, l'insieme delle matrici, matrice nulla. L'insieme delle matrici come $\mathbb{R}$-spazio vettoriale con le operazioni di somma interna e scalamento; Matrici triangolari superiori (e l'insieme delle matrici triangolari superiori come sottospazio vettoriale); Definizione della diagonale principale di una matrice; Matrici simmetriche ed antisimmetriche; Matrice identità; Matrice inversa e l'invertibilità delle matrici.*
- - -
# 1. Definizione di Matrice
#Definizione 
> [!def] matrice $m \times n$ a coefficienti in $K$
Siano $m, n \in \mathbb{N} \diagdown \{0\}$; allora si definisce una *matrice* $m \times n$ a *coefficienti in $K$* come una *tabella rettangolare di $m \cdot n$ elementi* del tipo: $$\begin{pmatrix}a_{11} & a_{12} & \ldots & a_{1n} \\\ a_{21} & a_{22} & \ldots & a_{2n} \\ \ldots \\ a_{m1} & a_{m2} & \ldots & a_{mn} \end{pmatrix}$$
Dove ciascun *coefficiente* $a_{ij}$ è un numero in $K$. $$\forall i \in \{1, \ldots ,m\}; \forall j \in \{1, \ldots ,n\}; a_{ij} \in \mathbb{K}$$Per convenzione i numeri (*indici*) $i, j$ iniziano con $1$. 
Diciamo che il coefficiente $a_{ij}$ è di posto $i, j$. 
^18867e

#Esempio 
> [!exm] Esempio 1.1.
La seguente è una matrice $3 \times 4$.
$$\begin{pmatrix} 1 & \sqrt{2} & -2 & 2 \\ 0 & 3 & 4 & 6 \\ 7 & -1 & 5 & 3 \end{pmatrix}$$
Scegliamo qualche coefficiente: $$a_{12} = \sqrt{2}; a_{21} = 0$$Ovviamente si nota che *NON* è *sempre* vero che $a_{ij} = a_{ji}$; infatti qui abbiamo $a_{12}\neq a_{21}$

## $i$-esima riga e colonna della matrice
Sia $A=(a_{ij})_{i = 1, \ldots, m; j = 1, \ldots, n}$ una matrice a coefficienti reali. Allora definiamo le seguenti:

#Definizione 
> [!def] riga e colonna $i$-esima di una matrice
Per ogni $i \in \{1, \ldots, m\}$ la $i$*-esima riga* è la *matrice*$$A_{(i)} := (a_{i1}, \ldots, a_{in})$$
 Per ogni $j \in \{1, \ldots, n\}$ la $i$*-esima colonna* è la *matrice* $$A^{(j)} := \begin{pmatrix}a_{1j} \\ a_{2j} \\ \ldots \\ a_{mj} \end{pmatrix}$$
## L'insieme delle matrici 
#Definizione 
> [!def] l'insieme delle matrici $M_{m,n}(\mathbb K)$
Dati $m, n \in \mathbb{N}$, ove $m>0, n>0$, denotiamo *l'insieme delle matrici* $m \times n$ a coefficienti in $K$ con $$M_{m,n}(\mathbb{K}) $$

#Osservazione 
> [!rmk] $M_{m,n}(K)$ diventa un $K$-spazio vettoriale
 Notiamo che con le operazioni di *somma interna* e di *prodotto per uno scalare* definite in [[Operazioni basilari con matrici]], $$(M_{m,n}(\mathbb{R}), +, \cdot)$$è uno [spazio vettoriale](Spazi%20Vettoriali.md).
^c6b210
# 2. Famiglie di matrici
## Matrici quadrate
#Definizione 
> [!def] matrice quadrata di ordine $n$
Una *matrice* si dice *quadrata* se il numero delle *righe* ($n$) coincide con il suo numero delle *colonne* ($m$), ovvero $m=n$.
>
 Inoltre per denotare *l'insieme delle matrici quadrate* si scrive $$M_n(\mathbb{R})$$ove $n \in \mathbb{N}, n>0$. 
 >
Si osserva che nel caso delle *matrici quadrate* è possibile definire la *diagonale principale* come la *parte di $A$ data dalle entrate di posto $A_{ii}, i \in \{1,\ldots,n\}$*.
^a95650

#Esempio 
> [!exm] Esempio 2.1.
La seguente è una *matrice quadrata $2 \times 2$*
$$A = \begin{pmatrix} 1 & 2 \\ -2 & 5 \end{pmatrix}$$
La *diagonale principale* di $A$ sarebbe $(1,5)$.
## Matrici nulle
#Definizione 
> [!def] matrice nulla
Una *matrice* $m \times n$ *nulla* è è la *matrice $m \times n$* le cui *entrate* (o *coefficienti*) sono tutte nulle, $0$.
$$0 := \begin{pmatrix}0 & \ldots & 0 \\ \vdots & & \vdots \\ 0 & \ldots & 0\end{pmatrix}$$ 
^c2c598
## Matrici triangolari superiori
#Definizione 
> [!def] le matrici triangolari superiori
Si definisce *l'insieme delle matrici triangolari superiori $2 \times 2$* come $$T_{2}(\mathbb{R}):= \{A \in M_2(\mathbb{R}): a_{21} = 0\}$$ovvero una matrice quadrata del tipo $$\begin{pmatrix}a_{11}&a_{12}\\0 &a_{22} \end{pmatrix}$$
Ovviamente è possibile generalizzare per le matrici quadrate $M_n(\mathbb{R})$. 
^920878

#Osservazione 
> [!rmk] Osservazione 2.1. 
Notiamo che questo insieme è un sottoinsieme di $M_2(\mathbb{R})$; $$T_2(\mathbb{R}) \subseteq M_2(\mathbb{R})$$Infatti se l'insieme delle matrici $2 \times 2$ $M_2(\mathbb{R})$ è un *$\mathbb{R}$-spazio vettoriale* ([[Spazi Vettoriali]], **DEF 1.**), allora $T_2(\mathbb{R})$ è un *sottospazio vettoriale* ([[Sottospazi Vettoriali]], **DEF 1.**).
Infatti valgono le seguenti:
>1. La matrice nulla $\begin{pmatrix}0&0\\0 &0 \end{pmatrix}$ appartiene anche a $T_2(\mathbb{R})$.
>2. Le operazioni di *somma* e di *scalamento* sono chiuse; ovvero $$A, B \in T_2(\mathbb{R}) \implies (A+B)\in T_2(\mathbb{R})$$e $$\lambda \in \mathbb{R}, A \in T_2(\mathbb{R}) \implies (\lambda \cdot A) \in T_2(\mathbb{R})$$
E' possibile verificare 2. verificando che la combinazione lineare di $A, B \in T_2(\mathbb{R})$ appartiene anch'esso a $T_2(\mathbb{R})$.
$$\begin{align} \lambda_1 \cdot A + \lambda_2 \cdot B &= \begin{pmatrix}\lambda_1a_{11} & \lambda_1 a_{12}\\ 0 &\lambda_1 a_{22}\end{pmatrix} + \begin{pmatrix} \lambda_2b_{11} & \lambda_2 b_{12}\\ 0 &\lambda_2 b_{22}\end{pmatrix} \\ &=  \begin{pmatrix} \lambda_1 a_{11} + \lambda_2 b_{11}  & \lambda_1a_{12}+\lambda_2b_{12} \\ 0 & \lambda_1a_{22} + \lambda_2b_{22}\end{pmatrix} \in T_2(\mathbb{R}) \  \blacksquare\end{align} $$
>
Questa osservazione è analoga per $T_n(\mathbb{R})$ e $M_n(\mathbb{R})$.

## Matrici simmetriche e antisimmetriche
#Osservazione 
> [!rmk] preambolo
Considerando da quanto detto in [[Operazioni particolari con matrici]] (**OSS 1.1.**), abbiamo notato che *non* ha sempre senso chiedersi se la *trasposta* di una matrice è uguale alla matrice stessa, ovvero $$¿ \ ^tA = A \ ?$$tuttavia questo acquisisce significato quando consideriamo le matrici quadrate appartenenti a $M_n(\mathbb{R})$.

#Esempio 
> [!exm] Esempio 2.2.
Prendo una matrice $3 \times 3$ che chiamo $A$.
Sapendo che alla prima riga $A_{(1)}$ ho fissato $A_{(1)} = \begin{pmatrix} 1&2&3 \end{pmatrix}$, allora in questo modo ho già fissato $A^{(1)} = \begin{pmatrix}1 \\ 2 \\ 3 \end{pmatrix}$, in quanto voglio che $A^{(1)} = (^tA_{(1)})$. (ovvero che la trasposta della prima riga sia uguale alla prima colonna). 
Il procedimento si ripete per $A_{(2)} = \begin{pmatrix}2 &?&? \end{pmatrix}$, dove i punti segnati con $?$ possono essere sostituiti con qualsiasi valori. Per convenienza inseriremo con dei numeri crescenti, ovvero $4,5$ (e alla fine $6$). Alla fine otteniamo
$$A = \begin{pmatrix}1&2&3\\2&4&5\\3&5&6 \end{pmatrix}$$che soddisfa $^tA = A$. Inoltre osserviamo che questa matrice è *simmetrica* alla diagonale.

#Definizione 
> [!def] matrice simmetrica e antisimmetrica
Allora definiamo una matrice $A \in M_{n}(\mathbb{R})$:
*Simmetrica* se vale che $$A =\  ^tA$$ 
*Antisimmetrica* se vale che $$A = -^tA$$
^501fe6

#Osservazione 
> [!rmk] Osservazione 2.3.
Osservo una peculiarità delle matrici *antisimmetriche*; infatti se voglio costruirne una mi accorgo che tutte le entrate della *diagonale principale* devono essere nulle, in quanto l'unico numero che rimane uguale quando moltiplicato per $-1$ è $0$.

#Osservazione 
> [!rmk] Osservazione 2.4.
Notiamo che le *matrici nulle* e *quadrate* sono le *uniche* matrici che sono sia *antisimmetriche* che *simmetriche*. Infatti, $0 = 0$ e $0 = -0$.

## Matrice unità (o identità)
#Osservazione 
> [!rmk] preambolo
Considerando da quanto detto e notato per quanto riguarda il *prodotto tra matrici* ([[Operazioni particolari con matrici]]), possiamo definire una matrice che comporta come il numero $1$ dei numeri reali $\mathbb{R}$ per questa suddetta operazione. ([[Operazioni particolari con matrici]], **PROP 2.4.3.**)

#Definizione 
> [!def] matrice identità di ordine $n$
Sia $n \in \mathbb{N}$ e $n > 0$, allora la *matrice unità* (o *identità*) è quella matrice quadrata appartenente a $M_n(\mathbb{R})$ le cui entrate sono tutte nulle, fuorché quelle della *diagonale principale*, che sono tutti uguali a $1$. Denotiamo questa matrice con $$\mathbb{1}_n \text{ o } I_n \text{ o } \text{Id}_n$$ove $$(\mathbb{1}_n)_{ij} = \begin{cases}0 \text{ se }i \neq j \\ 1 \text{ se }i = j\end{cases}$$ 
^d1d34b
## Matrice inversa
#Osservazione 
> [!rmk] osservazione sui numeri reali
Nei dei numeri reali $\mathbb{R}$, dato un $a \in \mathbb{R}, a \neq 0$ diciamo che un altro numero $b \in \mathbb{R}$ è l'inversa di $a$ se è vera che $$a \cdot b = b\cdot a = 1$$e $b$ è unica. Infatti questo è esattamente *l'assioma M3)* dei numeri reali ([[Assiomi dei Numeri Reali]]).

#Definizione 
> [!def] matrice inversa
Allora, tracciando un parallelismo tra i *numeri reali* e le il *prodotto tra matrici* ([[Operazioni particolari con matrici]]), chiamiamo la *matrice quadrata* $A \in M_{n}(\mathbb{R})$ *invertibile* se esiste una matrice $B \in M_{n}(\mathbb{R})$ tale che valga $$A \cdot B = B \cdot A = \mathbb{1}_n$$che chiamiamo $$B = A^{-1}$$

#Proposizione 
> [!prp] le proprietà della matrice inversa
Prendendo $A, B \in M_{n}(\mathbb{R})$, valgono le seguenti proprietà:
>1. Se $A$ è *invertibile*, allora la sua inversa $A^{-1}$ è *unica*.
>2. Se $A,B$ sono invertibili allora $A \cdot B$ *invertibile*, la quale inversa sarebbe $B^{-1} \cdot A^{-1}$.
>$$ $$

#Dimostrazione 
**DIMOSTRAZIONE** della *proposizione 2.1.*. 
1. Prendiamo per assurdo $B,C$ inverse di $A$.
Allora per definizione$$\begin{align}&A \cdot B = B \cdot A = \mathbb{1}_{n}\\ &A \cdot C = C \cdot A = \mathbb{1}_n\end{align}$$allora $$B = B \cdot \mathbb{1}_n = B \cdot (A \cdot C) = (B \cdot A) \cdot C = \mathbb{1}_n \cdot C = C$$quindi per proprietà transitiva $$B=C$$
che è assurdo. $\blacksquare$
2. Qui basta fare dei calcoli per verificare che $B^{-1} \cdot A^{-1}$ è $(A\cdot B)^{-1}$. Ovvero basta verificare che $(A \cdot B)\cdot(B^{-1}\cdot A^{-1}) = \mathbb{1}_{n}$ (e viceversa); $$\begin{align}(A \cdot B)\cdot(B^{-1}\cdot A^{-1})&=A \cdot(B \cdot B^{-1}) \cdot A^{-1} \\ &= A \cdot \mathbb{1}_n \cdot A^{-1} \\ &= A \cdot A^{-1} \\ &= \mathbb{1}_n \\ \text{analogamente}\\(B^{-1}\cdot A^{-1})\cdot(A\cdot B) &= B^{-1}\cdot(A^{-1} \cdot A) \cdot B \\ &= B^{-1} \cdot \mathbb{1}_{n} \cdot B \\&= B^{-1} \cdot B \\ &= \mathbb{1}_n \\\blacksquare\end{align}$$
#Osservazione 
> [!rmk] Osservazione 2.7.
L'analogia tra *l'invertibilità* rispetto al prodotto definito in $\mathbb{R}$ e l'invertibilità rispetto al *prodotto righe per colonne* di matrici *NON* si estende fino al punto di poter dire che *OGNI* matrice non-nulla è invertibile. Infatti si propone il seguente controesempio.

#Esempio 
> [!exm] Esempio 2.3.
Considero la seguente matrice $A \in M_2(\mathbb{R})$: $$A = \begin{pmatrix}1 & 1 \\1 & 1 \end{pmatrix}$$la matrice $A$ *non* è *invertibile*.
>
Infatti, per assurdo suppongo che esista $A^{-1} = B$. Allora $$B = \begin{pmatrix}b_{11} & b_{12} \\ b_{21} & b_{22} \end{pmatrix}$$Allora per definizione deve valere $$C=A \cdot B = \begin{pmatrix} 1 & 0 \\0 & 1\end{pmatrix}$$Prendiamo le entrate $C_{11}$ e $C_{21}$. Per definizione del *prodotto righe per colonne* abbiamo: $$\begin{align}&C_{11} = 1 = \begin{pmatrix}1&1 \end{pmatrix} \begin{pmatrix}b_{11}  \\ b_{21}\end{pmatrix} = b_{11} + b_{21} \\ &C_{21} = 0 = \begin{pmatrix}1 & 1 \end{pmatrix}\begin{pmatrix} b_{11} \\ b_{21}\end{pmatrix} = b_{11}+b_{21} \end{align}$$Ma questo implicherebbe che $$b_{11} + b_{21} = 1 = 0$$che è un *assurdo*, in quanto $1 \neq 0$.

## Minore ij-esimo di una matrice
#Definizione 
> [!def] Minore ij-esimo di una matrice
> Sia $A = M_n(K)$, siano $i,j \in \{1, \ldots, n\}$ dei *valori fissati* che rappresentano gli *indici*. 
> Definiamo dunque il *minore ij-esimo della matrice A* $A_{n-1}(K)$ come la *sottomatrice* $A_{ij} \subset A$ ottenuta *eliminando* la riga i-esima e la colonna j-esima.

#Esempio 
> [!exr] Esempio 2.7.1.
> Sia $A \in M_3(K)$; allora il minore di $A$ $13$-esimo è
> $$A_{13} = \begin{pmatrix}a_{21} & a_{22} \\ a_{31} & a_{32}\end{pmatrix} $$

**TRUCCO.** Un *"trucco"* grafico che può essere utile di determinare il *minore* è quello di prendere la matrice originale, sbarrare la riga $i$-esima e la colonna $j$-esima, poi infine di considerare solo ciò che rimane.
![[Pasted image 20231121155840.png]]