---
data: 2023-10-20
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Teoremi sui Sistemi Lineari
tipologia: appunti
stato: "0"
---
*Teoremi sui sistemi lineari; teorema di Cramer; teoremi di strutture per i sistemi lineari; da continuare*
- - -
# 1. Teoremi sui sistemi lineari
Presentiamo dei teoremi importanti sui [[Sistemi Lineari]].
## 1.1. Teorema di Cramer
**TEOREMA 1.1.** (*di Cramer*) Considero un sistema lineare con $n$ equazioni ed $n$ incognite, di forma $$A\cdot X = b$$Ovvero $A \in M_{n}(K)$.
Ora supponiamo che $A$ sia anche *invertibile* ([[Matrice]], **DEF 2.6.**); allora da qui discende che esiste un'*unica soluzione* $S$ del sistema lineare ed essa è data da $$S = A^{-1}\cdot b$$
**OSS 1.1.1.** Questo teorema è molto importante in quanto ci dà due dati importanti:
1. Da un lato ci dice quando un *sistema lineare* è *compatibile*, quindi c'è questa componente *"esistenziale"* di questo teorema.
2. Dall'altro lato ci fornisce una formula per *calcolare* la soluzione.
L'unico problema di questo teorema è che **per ora** non abbiamo gli strumenti per *invertire una matrice* o *determinare se una matrice sia invertibile o meno*.

**DIMOSTRAZIONE 1.1.** La dimostrazione si struttura in due parti:
1. Una parte in cui devo dimostrare che la soluzione effettivamente *esiste* ed equivale a $A^{-1} \cdot b$
2. Un'altra parte in cui devo dimostrare che essa è effettivamente l'*unica* soluzione

1. Supponendo che $A^{-1}\cdot b$ sia *soluzione*, allora per tale definizione devo essere in grado di sostituirla ad $X$ per poter ottenere un'uguaglianza vera; quindi faccio $$\begin{align} &A\cdot X = b \\ &A \cdot(A^{-1} \cdot b) = b \\ & (A \cdot A^{-1}) \cdot b= b\\ &\mathbb{1}_n \cdot b = b \iff b=b\end{align}$$e l'ultima uguaglianza è vera.
2. Ora supponiamo per assurdo che esiste un'altra soluzione $S'$ sia un'altra soluzione; allora per definizione questa verifica $$\begin{align} &A \cdot S' = b \\ &A^{-1}\cdot(A\cdot S') = A^{-1}\cdot b \text{ (!)}\\ &(A^{-1}\cdot A)\cdot S' = A^{-1} \cdot b \\ &S' = A^{-1} \cdot b\end{align}$$che è esattamente uguale alla soluzione proposta dal teorema di *Cramer*; quindi esiste solo la soluzione $S = A^{-1} \cdot b$.

**OSS 1.1.2.** Focalizziamoci sulla parte contrassegnata con *(!)*; notiamo che abbiamo moltiplicato da ambo le parti per $A^{-1}$ a *SINISTRA*, e non a *DESTRA*; infatti nel contesto delle *matrici* la moltiplicazione a *sinistra* può comportarsi diversamente da quella a *destra*; infatti se avessimo moltiplicato a *destra*, tutta l'espressione avrebbe perso senso in quanto avremmo ottenuto $b \cdot A^{-1}$ in quanto moltiplichiamo una matrice $n \times 1$ per $n \times n$, che non è definita.

## 1.2. Teorema di struttura per i sistemi lineari omogenei
**TEOREMA 1.2.** (*di struttura per le soluzioni dei sistemi lineari omogenei*)
Considero un *sistema lineare omogeneo* di $m$ equazioni in $n$ incognite. Ovvero $$A \cdot X = 0$$dove $A = M_{m,n}(K)$ e $X = K^{n}$, $0$ è la *matrice nulla* ([[Matrice]], **DEF. 2.2.**). 
Poi siano $s, s' \in K^n$ due soluzioni distinte e sia $\lambda \in K$, allora:
1. $s + s'$ è soluzione
2. $\lambda \cdot s$ è soluzione
Pertanto ricordandoci che il vettore (o la matrice) nullo/a è *sempre* soluzione di un sistema *omogeneo*, ottengo che l'*l'insieme delle soluzioni* di questo sistema è l'insieme $$S = \{r \in K^n: A \cdot r = 0\}$$allora si verifica che $S$ è un *sottospazio vettoriale* ([[Sottospazi Vettoriali]], **DEF 1.**) di $K^n$. 

**OSS 1.2.1.** Notiamo che in questo teorema ci interessa *il sistema lineare* sé stesso, invece nel **TEOREMA 1.1.** (di Cramer) ci interessava solo la *matrice* dei coefficienti $A$

**DIMOSTRAZIONE 1.2.**
Dimostriamo la prima parte del teorema
1. Dato che $s$ e $s'$ sono soluzioni, allora devono valere che: $$\begin{cases}A \cdot s =0 \\A \cdot s' = 0 \end{cases}$$E supponendo che $s+s'$ sia soluzione, deve valere anche che: $$A \cdot(s+s') = 0$$
   e sviluppandolo, otterremo
   $$\begin{align}& A \cdot(s+s') = 0 \\&A\cdot s + A \cdot s' = 0 \\&0+0 = 0 \iff 0=0 \end{align}$$
   che è vera.

Prima di dimostrare la seconda parte del teorema ci occorre fare un'osservazione:
	**OSS 1.2.2.** Dati un $A \in M_{m,n}(K)$ e un $s = K^n$ e un $\lambda \in K$ allora abbiamo $$A \cdot (\lambda \cdot s) = \lambda \cdot( A \cdot s)$$
Ora siamo pronti per concludere la dimostrazione.
2. Se $s$ è soluzione, allora è vera che $$A \cdot s = 0$$allora supponendo che $\lambda s$ sia soluzione abbiamo $$A \cdot(\lambda\cdot s) = 0$$e sviluppandola otterremo $$\begin{align} &A\cdot (\lambda\cdot s )= 0 \\ &\lambda \cdot(A \cdot s) = 0 \\ &\lambda \cdot 0 = 0 \iff 0=0 \end{align}$$
   il che è vera. $\blacksquare$

## 1.3. Osservazione
**OSS 1.3.** Osserviamo che possiamo *"combinare"* questi due teoremi e verificare un fenomeno: 
Sia $A \in M_n(K)$ e supponiamo che questa matrice sia anche *invertibile*; ora consideriamo il sistema lineare *omogeneo* $$A \cdot X = 0$$
Allora da qui discende che $0$ è *l'unica* soluzione di questo sistema (per il **TEOREMA 1.1.** (di Cramer)). 
Infatti $\lambda \cdot 0 = 0$ e $0 + 0 = 0$ sono anche *soluzioni* in quanto sono uguali all'*unica soluzione* $0$.

## 1.4. Teorema di struttura per i sistemi lineari
**TEOREMA 1.4.** (*di struttura per le soluzioni dei sistemi lineari*)
Considero un *sistema lineare* $$A \cdot X = b$$con $A \in M_{m,n}(K)$ e $b \in K^n$. Sia $\tilde{s}$ una soluzione; allora un elemento $s \in K^n$ è soluzione di questo sistema lineare se e solo se possiamo scrivere $$s = \tilde{s} + s_0$$dove $s_0$ è una soluzione del *sistema lineare omogeneo* $$A \cdot X = 0$$
In altre parole l'insieme delle soluzione di $A \cdot X = b$ è $$S = \{s \in K^n: s=\tilde{s} + s_0\ \text{ per un qualche }x_0 \text{ sia soluzione}\}$$
**DEF 1.4.1.** Il *sistema lineare omogeneo* $A \cdot X = 0$ si dice il **sistema lineare omogeneo associato** al sistema $A \cdot X = b$.

**DIMOSTRAZIONE 1.4.** Per pianificare la struttura di questo teorema, facciamo due considerazioni sulla [logica formale](Connettivi), in particolare sulla *doppia implicazione* ([[Connettivi]]).
In questo teorema, da un punto di vista logico, vuole dire che $$\text{s è soluzione} \iff s=\tilde{s}+s_0$$allora vogliamo dimostrare che entrambe le *implicazioni* sono vere; ovvero nel senso che $$\begin{cases}s \text{ è soluzione} \implies s=\tilde{s}+s_0 \\ s=\tilde{s}+s_0 \implies s \text{ è soluzione}\end{cases}$$
... [ DA FARE IN CLASSE ]

