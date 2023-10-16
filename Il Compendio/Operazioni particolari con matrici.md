---
data: 2023-10-12
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Operazioni particolari con matrici
tipologia: appunti
stato: "0"
---
*Trasposta di una matrice (definizione di matrice simmetrica e antisimmetrica). Definizione di prodotto tra due matrici.*
- - -
# 1. Matrice trasposta
- - - 
**traspórre** (ant. **transpórre**) v. tr. [dal lat. _transponĕre_, comp. di _trans-_ «trans-» e _ponĕre_ «porre»] (coniug. come _porre_). – **1.** Porre, collocare una cosa dopo un’altra, invertendo l’ordine in cui tali cose erano inizialmente: _il copista per errore ha trasposto i versi 24-25 dopo i versi 26-30_; col senso più generico di porre in diverso ordine: _il periodo potrebbe migliorarsi notevolmente trasponendo qualche parola_; _se necessario si potrà t. qualche numero del programma_; _t. i fili di una linea telefonica_.
- - - 
**DEF 1.** Sia $A \in M_{m,n}(\mathbb{R})$; definiamo la **trasposta** di $A$ come quella matrice, che indichiamo con $^{t}A$, che è un elemento di $M_{m,n}(\mathbb{R})$, determinato dalla seguente proprietà: *"l'entrata di posto $i,j$ di $^{t}A$ è uguale all'entrata di posto $j, i$ di $A$"*. In parole povere, scambiamo le *righe* della matrice con le *colonne* (invertendo così l'ordine).
Quindi $$(^{t}A)_{ij} := A_{ji}\ ; \ \begin{align}i \in \{1, \ldots, n\} \\ j \in \{1, \ldots, m\}\end{align}$$
**ESEMPIO 1.1.** 
Se prendiamo $$ A = \begin{pmatrix}1 &2&3 \\ -3&-2&-1\end{pmatrix}$$allora si ha $$^tA = \begin{pmatrix}1 &-3\\2&-2\\3 & -1 \end{pmatrix}$$
**OSS 1.1.** Notiamo che *generalmente* non ha senso chiedersi se $$^t A = A$$in quanto in una buona parte dei casi (ovvero delle *matrici non quadrate* ([[Matrice]], **DEF 2.1.**)) il numero delle colonne $m$ e il numero delle righe $n$ vengono scambiate (per definizione); infatti se $A$ è una matrice $m \times n$, allora $^tA$ sarà una matrice di $n \times m$.
## 1.1. Proprietà della trasposta
**PROP 1.1.** Prendendo $A, B \in M_{m,n}(\mathbb{R})$ allora si verificano le due proprietà: $$\begin{align}&\text{(i) }^t(A+B) = (^{t}A)  +  (^tB)\\ &\text{(ii) }^t(^tA)  = A\end{align}$$
**DIMOSTRAZIONE.**
Innanzitutto osserviamo che ha senso chiedersi se queste proprietà sono valide, in quanto per definizione in [[Operazioni basilari con matrici]], sommando due matrici $m \times n$ si ottiene un altra matrice $m \times n$; infatti da un lato si sommano prima due matrici $m \times n$ poi per trasporlo in una matrice $n \times m$, dall'altro si sommano due matrici trasposte $n \times m$ (ottenendo ovviamente un altra matrice $n \times m$).

Per dimostrare la *(i)*, dimostriamo che tutte le entrate della matrice nel *membro sinistro dell'uguaglianza* e nel *membro destro* sono, infatti, effettivamente uguali.
Per farlo fissiamo le $i, j$ e prendiamo le entrate di posto $i, j$. Allora $$\begin{align}&\text{(*) } (^t(A+B))_{ij} \stackrel{\text{def.}} = (A+B)_{ji} \stackrel{\text{def.}}=A_{ji} + B_{ji} \\&\text{(}\triangle\text{) } (^tA)_{ij} +(^tB)_{ij} \stackrel{\text{def.}}= A_{ji} + B_{ji }\end{align}$$E notiamo che (\*) e  ($\triangle$) sono uguali, completando così la dimostrazione.

Per la dimostrazione di *(ii)* basta fissare $i, j$ e considerare le entrate di posto $i, j$; $$(^t(^tA))_{ij} = (^tA)_{ji} = A_{ij}$$$\blacksquare$

# 2. Prodotto righe per colonne
Ora andiamo a introdurre una nuova operazione tra matrici e per farlo è opportuno considerare una specie di analogia, una situazione che ci aiuti a comprendere il concetto.
## 2.1. Definizione analogica
Immaginiamo di trovarci in un negozio A che presenta i seguenti prezzi (tralasciando questioni economico-finanziarie):
- Costo pasta: $C_p = 1$
- Costo latte: $C_l = 2$ 
- Costo uova: $C_u = 3$
Ora supponiamo di dover comprare $n_p, n_l, n_u$ quantità di pasta, latte e uova; ora vogliamo calcolare il costo totale, che sarebbe una specie di *"combinazione lineare"* dove i *coefficienti scalari* vengono rappresentati dai quantitativi, i *vettori* invece dai *costi*. Quindi abbiamo $$n_pC_p + n_lC_l + n_uC_u$$
Ora definiamo il *prodotto righe per colonne* come $$\begin{pmatrix} C_p & C_l & C_u\end{pmatrix} \cdot \begin{pmatrix}n_p \\ n_l \\ n_u \end{pmatrix} :=n_pC_p + n_lC_l + n_uC_u $$
Adesso supponiamo di aver trovato un altro negozio B che offre altri prezzi ancora più competitivi; ovvero $$C'_p = -3\ ; \ C'_l = -2 \ ; C'_u = -1$$quindi per tenere sotto controllo i due *totali di spesa*, potrei *"impacchettare"* le due righe dei *costi unitari* in una matrice: $$\begin{pmatrix} C_p &C_l & C_u \\C'_p&C'_l & C'_u\end{pmatrix}$$e sarebbe ragionevole definire il prodotto di: $$\begin{pmatrix} C_p &C_l & C_u \\C'_p&C'_l & C'_u\end{pmatrix} \cdot \begin{pmatrix}n_p \\ n_l \\ n_u \end{pmatrix}$$come la matrice $2 \times 1$ dove la prima riga rappresenta il *costo totale del primo negozio* e la seconda riga invece il *costo totale del secondo negozio*: $$\begin{pmatrix} n_pC_p + n_lC_l + n_uC_u \\ n_pC'_p + n_lC'_l + n_uC'_u\end{pmatrix}$$
Ricapitolando, abbiamo moltiplicato una *matrice 2x3* per una *matrice 3x1* e abbiamo ottenuto una *matrice 2x1*. 
In altre parole, la matrice ottenuta dalla moltiplicazione è quella matrice le cui *entrate* sono date dalla *moltiplicazione di ciascuna delle due righe della prima matrice con la colonna della seconda matrice*.
In questo modo, se volessimo aggiungere la seconda colonna di quantitativi $\begin{pmatrix}n'_p \\ n'_l \\ n'_u  \end{pmatrix}$, quello che andremmo a ottenere è una situazione del tipo: $$\begin{pmatrix} C_p &C_l & C_u \\C'_p&C'_l & C'_u\end{pmatrix} \cdot \begin{pmatrix} n_p & n'_p \\ n_l & n'_l \\ n_u & n'_u \end{pmatrix}$$ che diventa $$\begin{pmatrix}n_pC_p + n_lC_l + n_uC_u & n'_pC_p + n'_lC_l + n'_uC_u \\ n_pC'_p + n_lC'_l + n_uC'_u & n'_pC'_p + n'_lC'_l + n'_uC'_u \end{pmatrix}$$dove a sinistra abbiamo i *quantitativi della prima colonna*, a destra *i quantitativi della seconda colonna $'$*.
## 2.2. Definizione generale
**DEF 2.2.1.** Siano $A \in M_{1,n}(\mathbb{R})$, $B \in M_{n, 1}(\mathbb{R})$; allora definiamo il **prodotto riga per colonna** come *la combinazione lineare* data da $$A_{(1)} \cdot B^{(1)} := a_{11}b_{11}+\ldots+a_{1n}b_{n1} = \sum_{i=1}^n a_{1i}b_{i1}$$

**DEF 2.2.2.** In generale, se $A \in M_{m,p}(\mathbb{R})$ e $B \in M_{p, n}(\mathbb{R})$ allora definiamo il **prodotto** $A \cdot B$ come la *matrice $m \times n$* la cui *entrata di posto $ij$* è data dalla seguente: $$(A\cdot B)_{ij} := A_{(i)} \cdot B^{(i)} = \sum_{k=1}^p a_{1k}b_{k1}$$
**OSS 2.2.1.** Notiamo che il *prodotto tra due matrici $A \cdot B$* è definita solo se il numero di colonne di $A$ coincide con il numero di righe di $B$. 
Inoltre, la *"matrice risultante"* diventa una matrice $a \times b$ (ove $a$ è il numero delle colonne di $A$, $b$ il numero di righe di $B$).

## 2.3. Esempi
Diamo alcuni esempi-esercizi.
**ESEMPIO 2.3.1.**

**ESEMPIO 2.3.2.**

**OSS 2.3.2.a.**
Notiamo di aver ottenuto la stessa matrice a destra.

**ESEMPIO 2.3.3.**

**OSS 2.3.3.a.** 
Come notato prima, la seconda matrice sembra di comportarsi come il numero $1.$; infatti se lo moltiplichi a destra o a sinistra, ottieni la stessa matrice moltiplicata.

**ESEMPIO 2.3.4.**

**OSS 2.3.4.a.**
Notiamo che il *prodotto delle matrici* non è un'operazione *commutativa*; questo determina delle forti conseguenze, soprattutto nella *meccanica quantistica* con il *principio di indeterminazione di Heisenberg*.
