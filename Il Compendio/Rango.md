---
data: 2023-11-17
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Rango
tipologia: appunti
stato: "1"
---
*Definizione di rango, osservazioni, esempi.*
- - -
# 1. Definizione di rango
**OSS 1.1.** Sia $A \in M_{m,n}(K)$, allora le *colonne* di $A$ sono *tutti* elementi di $K^m$. Dunque $$A^{(1)}, \ldots, A^{(n)} \in K^m $$

#Definizione 
> [!def] Definizione 1.1. (rango)
Sia $A \in M_{m,n}(K)$; definiamo il *rango* della *matrice* ([[Matrice#^18867e]]) $A$ e lo denotiamo con $\operatorname{rg}(A)$ oppure $\operatorname{rk}(A)$ (*la seconda è la dicitura internazionale*) come la *dimensione* ([[Dimensione#^3a9321]]) dello *span* ([[Combinazione Lineare#^126061]]) dello *sottospazio* generato dalle *colonne* di $A$:
$$\operatorname{rg}(A):= \dim(\operatorname{span}(A^{(1)}, \ldots, A^{(n)})) $$
^d641ff

# 2. Osservazioni sul rango
**OSS 2.1.** Se $A_{m,n}(K)$ allora 
- $\operatorname{rg}(A) \leq m$; infatti $$A^{(1)}, \ldots, A^{(n)} \in K^m  \implies \operatorname{span}(A^{(1)}, \ldots, A^{(n)}) \subseteq K^m$$
  dunque per la *proposizione 3.1.* sulla dimensione ([[Dimensione#^265196]]) $$\dim(A^{(1)}, \ldots, A^{(n)}) \leq \dim(K^m)$$
- $\operatorname{rg}(A) \leq n$; infatti abbiamo $n$ colonne, dunque $\operatorname{span}(A^{(1)}, \ldots, A^{(n)})$ ha $n$ generatori; pertanto una *base* di $\operatorname{span}(A^{(1)}, \ldots, A^{(n)})$ ha al più $n$ generatori (che viene verificato quando *tutti* i vettori colonna solo linearmente indipendenti); pertanto
  $$ \operatorname{span}(A^{(1)}, \ldots, A^{(n)}) \leq n$$

**OSS 2.3.** Noteremo che questa definizione *non* cambierà se invece di considerare le *colonne* consideriamo le *righe*.

# 3. Esempio
#Esempio 
> [!ex] Esempio 3.1. (matrice 2x3)
> Consideriamo la matrice
> $$A \in M_{2,3}(K) = \begin{pmatrix}2 & 1 & 3 \\ 1 & 0 & -1 \end{pmatrix} $$
> Dalla definizione di *rango* e dall'*osservazione 1.2.* sappiamo che
> $$\operatorname{rg}(A) = \dim(\operatorname{span}((2,1), (1,0), (3, -1))) \leq \min\{2,3\} = 2$$
> Dato che tutte le *colonne* sono linearmente indipendenti.
> Invece se due colonne fossero invece *linearmente dipendenti*, quindi *proporzionali* tra di loro (in quanto una di queste sono ottenibili mediante lo scalamento dell'altro), allora avremmo
> $$\operatorname{rg}(A)=1$$

#Esempio 
> [!ex] Esempio 3.2. (matrice identità $\mathbb{1}_n$)
> Sia $\mathbb{1}_n$ la *matrice identità* $n$ x $n$ ([[Matrice#^d1d34b]]), abbiamo
> $$\operatorname{rg}(\mathbb{1}_n) = \dim(\operatorname{span}(\begin{pmatrix} 1 \\ \vdots \\ 0\end{pmatrix}), \ldots, \begin{pmatrix} 0\\ \vdots\\ 1\end{pmatrix}) = \dim(K^n) = n$$

# 4. Teoremi
Per dei teoremi vedere questa pagina: [[Teoremi su Rango]]