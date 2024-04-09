---
data: 2023-10-02
corso: "[[Analisi Matematica I]]"
argomento: Definizione, strutture e operazioni dei numeri naturali
tipologia: appunti
stato: "1"
---
*Definizione intuitiva dell'insieme dei numeri naturali $\mathbb{N}$, le proprietà strutturali su di esso, definizioni delle operazioni su esso, proprietà delle operazioni. Relazione d'ordine totale $\geq$ su $\mathbb{N}$, struttura algebrica $(\mathbb{N}, +, \cdot, \geq)$.*
- - -
# DEF 1. Insieme dei numeri naturali $\mathbb{N}$
**DEF 1.** Si definisce **l'insieme dei numeri naturali** come *l'insieme dei numeri che servono per contare*, aggiungendoci il numero $0$ per motivi di comodità che si vedranno dopo. Viene denotata come$$\mathbb{N} := \{0, 1, 2, \ldots\}$$
# DEF 2. Proprietà strutturali e operazioni di $\mathbb{N}$
## DEF 2.1. Operazione di somma/addizione
**DEF 2.1.** Si definisce su $\mathbb{N}$ l'operazione di **somma** o **addizione** come la seguente [funzione](Funzioni.md) $$\begin{align}+ :& \space\mathbb{N} \times \mathbb{N} \longrightarrow\mathbb{N}\\&(n,m) \mapsto k:=n+m\end{align}$$
### 2.1. Proprietà dell'operazione $+$
L'operazione *somma*/*addizione* gode delle seguenti tre proprietà.
**PROPRIETA' 2.1.1.** La proprietà **associativa** dice che $$\forall n,m,k \in \mathbb{N}; n+(m+k) = (n+m)+k$$**PROPRIETA' 2.1.3.** La proprietà **commutativa** dice invece che $$\forall m,n \in \mathbb{N} ; m+n=n+m$$**PROPRIETA' 2.1.2.** Con l'operazione $+$ esiste l'elemento neutro $e$ (in questo caso $0$), tale che$$\exists e \in \mathbb{N}: 0+m=m+0=m$$
## DEF 2.2. Operazione di prodotto/moltiplicazione
**DEF 2.2.** Si definisce su $\mathbb{N}$ l'operazione di **prodotto** o **moltiplicazione** come la funzione $$\begin{align}\cdot :&\space\mathbb{N}\times\mathbb{N} \longrightarrow\mathbb{N} \\ &(n,m) \mapsto k:=(n \cdot m) \end{align} $$
### 2.2. Proprietà dell'operazione $\cdot$
L'operazione *prodotto*/*moltiplicazione* gode delle seguenti tre proprietà.
**PROPRIETA' 2.1.1.** La proprietà **associativa** dice che $$\forall n,m,k \in \mathbb{N}; n\cdot(m\cdot k) = (n\cdot m)\cdot k$$**PROPRIETA' 2.1.3.** La proprietà **commutativa** dice invece che $$\forall m,n \in \mathbb{N} ; m\cdot n=n \cdot m$$**PROPRIETA' 2.1.2.** Con l'operazione $+$ esiste l'elemento neutro $e$ (in questo caso $1$), tale che$$\exists e \in \mathbb{N}: 1 \cdot m=m \cdot 1=m$$
## 2.3. Proprietà distributiva
**DEF 2.3.** Esiste una proprietà che lega le *operazioni* $+$ e $\cdot$ tra di loro; ovvero la **proprietà distributiva**, che dice $$\forall m,n,k \in \mathbb{N};n\cdot (m+k) = n\cdot m + n\cdot k$$
## DEF 2.4. Relazione d'ordine totale $\geq$
**DEF 2.4.** Su $\mathbb{N}$ è definita una [relazione d'ordine totale](Relazioni.md) (**DEF. 4.1.**) che si chiama $\geq$.

**OSS 2.4.1.** Essa è *compatibile* con le altre operazioni, ovvero $$\begin{align}\forall n,m,k \in \mathbb{N};& \space n\geq m \implies n+k \geq m+k \\ & \space n\geq m \implies n \cdot k \geq m \cdot k\end{align}$$
# DEF 3. Struttura algebrica $(\mathbb{N}, +, \cdot, \geq)$
**DEF 3.** Avendo appena visto le operazioni $+$, $\cdot$ e la relazione $\geq$ che vengono tutte definite su $\mathbb{N}$, possiamo definire la seguente **struttura algebrica**: $$(\mathbb{N}, +, \cdot ,\geq)$$Pertanto d'ora in poi diamo per scontato che quando si parla di $\mathbb{N}$ vengono già definite le operazioni collegate ad esso.

