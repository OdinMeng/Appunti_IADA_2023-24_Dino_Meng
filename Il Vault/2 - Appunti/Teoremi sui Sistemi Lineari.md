---
data: 2023-10-20
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Teoremi sui Sistemi Lineari
tipologia: appunti
stato: "1"
---
*Teoremi sui sistemi lineari; teorema di Cramer; teoremi di strutture per i sistemi lineari; da continuare*
- - -
# 1. Teoremi sui sistemi lineari
Presentiamo dei teoremi importanti sui [[Sistemi Lineari]].
## Teorema di Cramer
#Teorema 
> [!thm] di Cramer
Considero un sistema lineare con $n$ equazioni ed $n$ incognite, di forma $$A\cdot X = b$$Ovvero $A \in M_{n}(K)$.
Ora supponiamo che $A$ sia anche *invertibile* ([[Matrice]], **DEF 2.6.**); allora da qui discende che esiste un'*unica soluzione* $S$ del sistema lineare ed essa è data da $$S = A^{-1}\cdot b$$ 
^97243e

#Osservazione 
> [!rmk] l'importanza del teorema di Cramer
Questo teorema è molto importante in quanto ci dà due dati importanti:
Da un lato ci dice quando un *sistema lineare* è *compatibile*, quindi c'è questa componente *"esistenziale"* di questo teorema; dall'altro lato ci fornisce una formula per *calcolare* la soluzione.

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema di Cramer* ([[#^97243e]]).
La dimostrazione si struttura in due parti:
1. Una parte in cui devo dimostrare che la soluzione effettivamente *esiste* ed equivale a $A^{-1} \cdot b$
2. Un'altra parte in cui devo dimostrare che essa è effettivamente l'*unica* soluzione

1. Supponendo che $A^{-1}\cdot b$ sia *soluzione*, allora per tale definizione devo essere in grado di sostituirla ad $X$ per poter ottenere un'uguaglianza vera; quindi faccio $$\begin{align} &A\cdot X = b \\ &A \cdot(A^{-1} \cdot b) = b \\ & (A \cdot A^{-1}) \cdot b= b\\ &\mathbb{1}_n \cdot b = b \iff b=b\end{align}$$e l'ultima uguaglianza è vera.
2. Ora supponiamo per assurdo che esiste un'altra soluzione $S'$ sia un'altra soluzione; allora per definizione questa verifica $$\begin{align} &A \cdot S' = b \\ &A^{-1}\cdot(A\cdot S') = A^{-1}\cdot b \text{ (!)}\\ &(A^{-1}\cdot A)\cdot S' = A^{-1} \cdot b \\ &S' = A^{-1} \cdot b\end{align}$$che è esattamente uguale alla soluzione proposta dal teorema di *Cramer*; quindi esiste solo la soluzione $S = A^{-1} \cdot b$.

#Osservazione 
> [!rmk] attenzione su $(!)$
Focalizziamoci sulla parte contrassegnata con *(!)*; notiamo che abbiamo moltiplicato da ambo le parti per $A^{-1}$ a *SINISTRA*, e non a *DESTRA*; infatti nel contesto delle *matrici* la moltiplicazione a *sinistra* può comportarsi diversamente da quella a *destra*; infatti se avessimo moltiplicato a *destra*, tutta l'espressione avrebbe perso senso in quanto avremmo ottenuto $b \cdot A^{-1}$ in quanto moltiplichiamo una matrice $n \times 1$ per $n \times n$, che non è definita.

## Teorema di struttura per i sistemi lineari omogenei
#Teorema 
> [!thm] di strutture per le soluzione dei sistemi lineari omogenei
Considero un *sistema lineare omogeneo* di $m$ equazioni in $n$ incognite. Ovvero $$A \cdot X = 0$$dove $A = M_{m,n}(K)$ e $X = K^{n}$, $0$ è la *matrice nulla* ([[Matrice#^c2c598]]). 
Poi siano $s, s' \in K^n$ due soluzioni distinte e sia $\lambda \in K$, allora:
>1. $s + s'$ è soluzione
>2. $\lambda \cdot s$ è soluzione
>
Pertanto ricordandoci che il vettore (o la matrice) nullo/a è *sempre* soluzione di un sistema *omogeneo*, ottengo che l'*l'insieme delle soluzioni* di questo sistema è l'insieme $$S = \{r \in K^n: A \cdot r = 0\}$$allora si verifica che $S$ è un *sottospazio vettoriale* ([[Sottospazi Vettoriali#^9bcbf2]]) di $K^n$. 
^598cf8

#Osservazione 
> [!rmk] Osservazione 1.3.
Notiamo che in questo teorema ci interessa *il sistema lineare* sé stesso, invece nel *TEOREMA 1.1.* (di Cramer) ci interessava solo la *matrice* dei coefficienti $A$

#Osservazione 
> [!rmk] osservazione preliminare
Dati un $A \in M_{m,n}(K)$ e un $s = K^n$ e un $\lambda \in K$ allora abbiamo $$A \cdot (\lambda \cdot s) = \lambda \cdot( A \cdot s)$$

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema di Cramer* ([[#^97243e]])
Dimostriamo la prima parte del teorema
1. Dato che $s$ e $s'$ sono soluzioni, allora devono valere che: $$\begin{cases}A \cdot s =0 \\A \cdot s' = 0 \end{cases}$$E supponendo che $s+s'$ sia soluzione, deve valere anche che: $$A \cdot(s+s') = 0$$
   e sviluppandolo, otterremo
   $$\begin{align}& A \cdot(s+s') = 0 \\&A\cdot s + A \cdot s' = 0 \\&0+0 = 0 \iff 0=0 \end{align}$$
   che è vera.
Prima di dimostrare la seconda parte del teorema  occorre tenere in conto l'osservazione 1.4.
Ora siamo pronti per concludere la dimostrazione.
2. Se $s$ è soluzione, allora è vera che $$A \cdot s = 0$$allora supponendo che $\lambda s$ sia soluzione abbiamo $$A \cdot(\lambda\cdot s) = 0$$e sviluppandola otterremo $$\begin{align} &A\cdot (\lambda\cdot s )= 0 \\ &\lambda \cdot(A \cdot s) = 0 \\ &\lambda \cdot 0 = 0 \iff 0=0 \end{align}$$
   il che è vera. $\blacksquare$
## Osservazione sui teoremi precedenti
#Osservazione 
> [!rmk] possiamo combinare i due teoremi appena visti
Osserviamo che possiamo *"combinare"* questi due teoremi e verificare un fenomeno: 
Sia $A \in M_n(K)$ e supponiamo che questa matrice sia anche *invertibile*; ora consideriamo il sistema lineare *omogeneo* $$A \cdot X = 0$$
Allora da qui discende che $0$ è *l'unica* soluzione di questo sistema. 
Infatti $\lambda \cdot 0 = 0$ e $0 + 0 = 0$ sono anche *soluzioni* in quanto sono uguali all'*unica soluzione* $0$.
## Teorema di struttura per i sistemi lineari arbitrari
#Teorema 
> [!thm] di struttura per i sistemi lineari arbitrari
Considero un *sistema lineare* $$A \cdot X = b$$con $A \in M_{m,n}(K)$ e $b \in K^n$. Sia $\tilde{s}$ una soluzione; allora un elemento $s \in K^n$ è soluzione di questo sistema lineare *se e solo* se possiamo scrivere $$s = \tilde{s} + s_0$$dove $s_0$ è una soluzione del *sistema lineare omogeneo* $$A \cdot X = 0$$
In altre parole l'insieme delle soluzione di $A \cdot X = b$ è $$S = \{s \in K^n: s=\tilde{s} + s_0\ \text{ per un qualche }s_0 \text{ sia soluzione di }Ax =0\}$$

^1ce15f

#Definizione 
> [!def] sistema lineare omogeneo associato
Il *sistema lineare omogeneo* $A \cdot X = 0$ si dice il *sistema lineare omogeneo associato* al sistema $A \cdot X = b$. 
^49a263

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 1.3.*.
Per pianificare la struttura di questo teorema, facciamo due considerazioni sulla [logica formale](Connettivi.md), in particolare sulla *doppia implicazione* ([[Connettivi]]).
Questo teorema, da un punto di vista logico, vuole dire che $$\text{s è soluzione} \iff s=\tilde{s}+s_0$$allora vogliamo dimostrare che entrambe le *implicazioni* sono vere; ovvero nel senso che valgono $$\begin{cases}s \text{ è soluzione} \implies s=\tilde{s}+s_0 \\ s=\tilde{s}+s_0 \implies s \text{ è soluzione}\end{cases}$$
1. Dimostriamo la prima.
   Supponiamo che $s$ sia una *soluzione* del sistema lineare $Ax = b$, quindi dobbiamo mostrare che *esiste* un $s_0 \in K^n$ di $Ax = 0$ tale che possiamo scrivere $$s =\tilde{s} + s_0$$Allora definiamo $s_0$ per costruzione, ovvero $s_0 := s - \tilde{s}$; perciò vale sicuramente che $s = \tilde{s} + s_0$. Allora ci resta da verificare che $s_0$ è effettivamente la soluzione del *sistema omogeneo associato*. Quindi $$\begin{align}&A \cdot s_0 \stackrel{?}=0 \\ \implies& A\cdot(s-\tilde{s}) = As -A\tilde{s} = b-b = 0  \ \\ \implies & A \cdot s_0 = 0 \  \blacksquare \end{align}$$
2. Ora dimostriamo il viceversa.
   Supponiamo dunque che esista un $s_0 \in K^n$ tale da essere soluzione del *sistema omogeneo associato*. Sia dunque $s := \tilde{s}+s_0$. Allora voglio mostrare che $s$ sia una soluzione del sistema; allora $$\begin{align}&A\cdot(s) \stackrel{?} = b\\ \implies & A\cdot(\tilde{s}+s_0) \\ \implies & A \cdot \tilde{s}+A \cdot s_0 \underset{\text{supp.}}{\overset{\text{per}}\implies}b+0 = b \ \blacksquare\end{align}$$
Abbiamo finalmente concluso la dimostrazione.

#Osservazione 
> [!rmk] l'insieme delle soluzioni costituisce un sottospazio vettoriale
Notiamo che l'insieme $S$ delle soluzioni di un sistema $AX = b$ forma un *sottospazio vettoriale* ([[Sottospazi Vettoriali]]) di $K^n$ *se e solo se* $b=0$. Infatti:
>Supponendo che $S$ sia uno sottospazio vettoriale, allora abbiamo che le proprietà caratterizzanti di uno sottospazio vengano rispettate; ad esempio il *vettore nullo* $0$ è soluzione. Infatti se $b=0$, allora sicuramente anche $s=0$ è soluzione.
>
>Supponendo il contrario, ovvero che se il sistema fosse *omogeneo*, allora la tesi seguirebbe il *teorema di struttura per i sistemi lineari omogenei*.
# 2. Esempio
Avendo sviluppato questi teoremi come dei *strumenti* per risolvere dei *sistemi lineari*, vediamo degli esempi.

#Esempio 
> [!exm] Esempio 2.1.
Consideriamo il seguente sistema lineare a coefficienti in $\mathbb{Q}$. $$\begin{cases}x+2y-3z=-1 \end{cases}$$ovvero in forma compatta $$\begin{pmatrix}1 & 2 & -3 \end{pmatrix}\begin{pmatrix} x\\y\\z\end{pmatrix} = \begin{pmatrix}-1 \end{pmatrix}$$e possiamo, ad esempio, considerare una soluzione semplice del tipo $$\tilde{s} = \begin{pmatrix}-1 \\ 0 \\ 0 \end{pmatrix}$$Ora per *calcolare* tutte le soluzioni usiamo il *teorema di struttura per i sistemi lineari arbitrari* (**TEOREMA 1.4.**); determiniamo dunque *tutte* le soluzioni del sistema omogeneo associato, ovvero $$Ax = 0 \implies \begin{pmatrix} 1 & 2 & -3\end{pmatrix}\begin{pmatrix}x \\ y \\ z \end{pmatrix} = \begin{pmatrix} 0\end{pmatrix}$$Vediamo che il sistema è equivalente a  $$x+2y-3z = 0 $$Quindi possiamo ad assegnare un qualsiasi valore appartenente al campo $\mathbb{Q}$ $u$ a $y$ e $v$ a $z$. (in altre parole poniamo $y = u, z=v, u,v \in \mathbb{Q}$)
>
Possiamo allora determinare il corrispondente di $x$ come $$x = 3v-2u$$
Ora possiamo determinare la *"ricetta"* per ottenere le soluzioni di questo sistema omogeneo, ovvero $$s_0 = \begin{pmatrix}-2u+3v \\ u \\ v \end{pmatrix}, \forall u,v \in \mathbb{Q}$$Notiamo che possiamo riscrivere questa $3$-upla come $$s_0 = u\begin{pmatrix} -2 \\ 1 \\ 0\end{pmatrix}+v \begin{pmatrix}3 \\ 0 \\ 1 \end{pmatrix}$$
Concludendo, le soluzioni di $Ax = b$ sono gli *elementi* dell'insieme $S$ definito come $$S = \{\begin{pmatrix}-1\\0\\0 \end{pmatrix}+u\begin{pmatrix}-2\\1\\0 \end{pmatrix}+v\begin{pmatrix}3\\0\\1 \end{pmatrix}: \forall u,v \in \mathbb{Q}\}$$
