---
data: 2023-10-17
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Sistemi Lineari
tipologia: appunti
stato: "1"
---
*Definizione rigorosa di sistema lineare. Nesso tra sistemi lineari, matrici e campi. Teoremi sui sistemi lineari.*
- - -
# 0. Preambolo
Avevamo accennato che cosa sono i *sistemi lineari* nel capitolo sulle [[Equazioni e Proprietà Lineari]]; però avendo definito i [[Campi]], ora è opportuno definirli in una maniera rigorosa e formale. Inoltre rendiamo nota la seguente notazione.

#Definizione 
> [!def] n-upla e matrice colonna $K^n$
Andiamo a identificare i due seguenti spazi vettoriali: la matrice colonna $M_{m,1}(K)$ di tipo $$\begin{pmatrix}b_1 \\b_2\\ \ldots\\b_m \end{pmatrix}$$e la $m$-tupla $K^{m}$ di tipo $$\begin{pmatrix}b_1\\b_2\\\ldots\\b_m \end{pmatrix}$$e questi due spazi vettoriali sono *isomorfi* (ovvero che presentano gli stessi comportamenti). 
# 1. Definizione formale
#Definizione 
> [!def] sistema lineare di $m$ equazioni in $n$ incognite a coefficienti in $K$
Sia $K$ un *campo* ([[Campi]], **DEF 1.**); definiamo un *sistema di $m$ equazioni in $n$ incognite a coefficienti in $K$* come un *sistema di equazioni* nella forma seguente: $$\begin{cases}a_{11}x_1 + a_{12}x_2 + \ldots + a_{1n}x_n = b_1 \\ a_{21}x_1 + a_{22}x_2 + \ldots + a_{2n}x_n = b_2 \\ \vdots \\ a_{m1}x_1 + a_{m2}x_2 + \ldots + a_{mn}x_n = b_{m} \end{cases}$$dove $a_{ij} \in K$, $\forall i \in \{1, \ldots, m\}$ e $\forall j \in \{1, \ldots, n\}$; inoltre $\forall b_{i} \in K, \forall i \in \{1, \ldots, m\}$. 
^6f6520

#Definizione 
> [!def] incognite, termini noti e coefficienti
Gli elementi $x_1, x_2, \ldots, x_n$ sono dette *incognite*.
Gli elementi $b_1, b_2, \ldots, b_m$ sono detti *termini noti*.
Gli elementi $a_{ij}$ sono detti *coefficienti* del *sistema lineare*.

## Soluzione di un sistema
#Definizione 
> [!def] soluzione di un sistema
La *soluzione* di un *sistema lineare* è una *$n$-upla ordinata* di elementi di $K$, che rappresentiamo come un *vettore-colonna*, $S \in K^{n}$, ovvero $$S = \begin{pmatrix}s_1 \\s_2\\ \vdots \\s_n \end{pmatrix}$$ove $s_i \in K$, tali per cui se ad ogni $s_i$ sostituiamo $x_i$ (dove $i \in \{1, 2, \ldots, n\}$), allora tutte le *uguaglianze* del *sistema lineare* diventano *vere*. 
^d967ff
## Omogeneità di un sistema
#Definizione 
> [!def] sistema omogeneo
Un *sistema lineare* si dice *omogeneo* se tutti i *termini noti* sono nulli: ovvero se $b_1, b_2, \ldots, b_m = 0,0,\ldots,0$.
Analogamente, un *sistema lineare* si dice *non omogeneo* se questo sistema non è omogeneo. (Lo so, informazione sorprendentemente non ovvia) 
^54ad7d
## Compatibilità di un sistema
#Definizione 
> [!def] sistema compatibile
Un *sistema lineare* si dice *compatibile* se ammette almeno una *soluzione* $S$; altrimenti si dice incompatibile*.

^dc691c

#Osservazione 
> [!rmk] sistema omogeneo implica sistema compatibile
Se un *sistema lineare* è *omogenea*, allora essa dev'essere anche *compatibile*. Infatti la $n$-upla nulla è *sempre* soluzione di un sistema *omogeneo*.
## Forma compatta di un sistema
> [!def] forma compatta di un sistema lineare
 Dato un *sistema lineare*, definiamo la la matrice $A$ dei *coefficienti* $$A = (a_{ij}); \begin{align}&i \in\{1, \ldots, m\}\\ &j \in \{1, \ldots, n\}\end{align}; A \in M_{m,n}(K)$$e $X$ la $n$-upla delle incognite, $b$ la $n$-upla dei termini noti, ovvero $X, b \in M_{m,1}(K)$ dove $$X= \begin{pmatrix}x_1\\x_2 \\ \vdots \\ x_m \end{pmatrix}; b = \begin{pmatrix}b_1\\b_2\\\vdots\\b_m \end{pmatrix}$$allora posso scrivere il *sistema lineare* in *forma compatta* come $$A \cdot X = b$$
## Equivalenza di due sistemi
#Definizione 
> [!def] sistemi lineari equivalenti
Dato due *sistemi lineari*, queste si dicono *equivalenti* se ammettono le *medesime soluzioni*; ovvero se i loro insiemi delle soluzioni sono uguali.
Più precisamente, dati due sistemi lineari $$Ax = b \text{ e }A'x = b'$$ove $A \in M_{m,n}(K)$ e $b \in K^m$; invece $A' \in M_{m'n}(K)$ e $b' = K^{m'}$, si dicono equivalenti quando hanno le medesime *soluzioni*. ^17d541

#Osservazione 
> [!rmk] l'utilità di questa nozione
Questa nozione è molto utile per risolvere dei sistemi lineari, quindi uno degli obbiettivi principali di questo corso sarà di trovare le operazioni che trasformano dei sistemi lineari in un altro mantenendoli *equivalenti*.

#Osservazione 
> [!rmk] i sistemi equivalenti possono avere equazioni diversi
Osserviamo che da questa definizione *puntuale* di sistema equivalente devono avere lo *stesso* numero di incognite $m$ ma possono avere numeri *diversi* di equazioni $m, m'$.
# 2. Esempi
Tentiamo di applicare queste nozioni mediante degli esempi.

#Esempio 
> [!exm] Esempio 2.1.
Consideriamo il seguente sistema. $$\begin{cases}x_1+2x_2 = 3 \\x_1+2x_2=5 \end{cases}$$che in *forma compatta* si scrive $$\begin{pmatrix} 1&2\\1&2 \end{pmatrix} \begin{pmatrix}x_1\\x_2 \end{pmatrix} = \begin{pmatrix}3 \\ 5 \end{pmatrix}$$
>1. Questo è un sistema *non omogeneo*, in quanto *almeno uno* termine noto è *non-nullo*.
>2. Si può immediatamente stabilire che questo sistema è *incompatibile*; infatti se si suppone che esiste una soluzione $S = \begin{pmatrix} s_1 \\ s_2 \end{pmatrix}$ allora varrebbe che $s_1 + 2s_2 = 3 = 5$, il che è un assurdo.
>$$ $$

#Esempio 
> [!exm] Esempio 2.2.
Consideriamo il seguente sistema.
$$\begin{cases} x_1+2x_2 = 3 \\x_1-x_2 = 1 \end{cases}$$
>1. Chiaramente questo sistema è *non-omogeneo*
>2. Qui non è possibile stabilire a priori se questo sistema sia *compatibile* o meno. Allora mediante delle trasformazioni tentiamo di trovare una soluzione.
   Quindi $$\begin{cases}x_1 + 2x_2 = 3 \sim x_1=3-2x_2 \\x_1-x_2 = 1 \end{cases} \implies \begin{cases}x_1 = 3 - 2x_2 \\ 3-2x_2-x_2 = 1 \sim x_2 = \frac{2}{3} \end{cases}$$allora $$\begin{align}x_1=3-2x_2 \implies x_1 = 3- 2\frac{2}{3} = \frac{5}{3} \end{align} $$quindi il *sistema* ha un'unica *soluzione* $$S = \begin{pmatrix}\frac{5}{3} \\ \frac{2}{3} \end{pmatrix}$$Perciò abbiamo stabilito che il sistema è anche *compatibile*. $$ $$

#Osservazione 
> [!rmk] l'unicità della soluzione
Qui diciamo che la *soluzione* non solo esiste, ma è addirittura *unica* in quanto per ottenere il *sistema finale* abbiamo trasformato il *sistema iniziale* tramite delle operazioni che mantengono i due sistemi *equivalenti*.

#Esempio 
> [!exm] Esempio 2.3.
Consideriamo il sistema lineare $$\begin{cases} x_1 + 2x_2 = 3 \\2x_1 + 4x_2 = 6\end{cases}$$
e tentiamo di trovare una soluzione. Iniziamo dunque effettuando delle manipolazioni; $$\begin{cases} x_1 + 2x_2 = 3 \text{ (a)}\\2x_1 + 4x_2 = 6 \implies2(x_1+2x_2) = 2(3) \stackrel{(a)}\implies 2(3) = 2(3)\end{cases}$$vediamo che la seconda equazione è *sempre vera*; allora ciò significa che anche l'equazione $$x_1+2x_2=3 \iff x_1=3-2x_2$$è sempre vera. 
Perciò posso trovare una soluzione fissando un valore di $x_2$ preciso per poter determinare $x_1$; quindi generalizzando fisso $x_2 = t \in \mathbb{R}$ ed esprimo le soluzioni così: $$x_1 = 3-2t$$
Ovvero le soluzioni sono della forma $$S= \{t \in \mathbb{R}:\begin{pmatrix}3-2t \\ t \end{pmatrix}\}$$da cui discende che abbiamo *infinite* soluzioni. 

#Osservazione 
> [!rmk] interpretazione geometrica dei sistemi lineari
Possiamo riscrivere l'insieme delle soluzioni come $$S = \{t \in \mathbb{R}: \begin{pmatrix}3\\0 \end{pmatrix}+t\begin{pmatrix} -2\\1\end{pmatrix}\}$$che *geometricamente* corrisponde ai *punti* di una *retta* passante per $(3,0)$ e $(1,1)$.
