---
data: 2023-10-24
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Sistemi lineari a scala
tipologia: appunti
stato: "1"
---
*Definizione dei sistemi lineari a scala; elementi di pivot; compatibilità dei sistemi lineari gradinizzati.*
- - -
# 0. Preambolo
> [!oss] Preambolo.
Se in [[Teoremi sui Sistemi Lineari]] avevamo sviluppati degli *stratagemmi* per poter determinare delle caratteristiche per alcuni sistemi, ora vogliamo di essere in grado di poter *risolvere* un qualsiasi *sistema lineare arbitrario*. 
La meta-tecnica che useremo consisterà nel seguente: prima di risolvere un *caso particolare*, poi di dimostrare che *tutti* i casi generali si riconducono al caso particolare risolto.
Infatti per cominciare ci focalizziamo su un sottoinsieme particolare dei *sistemi lineari*: i c.d. *sistemi lineari a scala*
# 1. Definizione di sistema a scala
#Definizione 
> [!def] Definizione 1.1. (matrice a scala)
Sia $A \in M_{m,n}(K)$ e sia $r \in \{0, 1, \ldots, m\}$ il *numero delle righe non nulle di $A$*.
Allora chiamiamo $A$ una *matrice a scala* se sussistono le seguenti.
>1. $r = 0$, ovvero $A = 0$.
>2. $r > 0$ e vale che $A_{(i)} \neq 0, i \in \{1, \ldots, r\}$; in parole questo vuol dire che le eventuali *righe nulle di $A$* devono *"stare in basso"* (ovvero dopo e non prima di $r$).
   >
   Inoltre sia $\bar{j \ }$ *l'indice della prima colonna non-nulla* e sia $$j_i := \min\{j: a_{ij} \neq 0\}, \forall i \in \{1, \ldots , r\}$$ovvero l'indice del *primo elemento non-nullo di una riga $i$*, allora deve pure valere che $$j_1 > j_2 > \ldots > j_r$$e tutti questi valori $j_i$ devono essere maggiori di $\bar{j \ }$; ovvero $$j_i \geq \bar{j \ }, \forall i$$

#Definizione 
> [!def] Definizione 1.2. (elementi pivot di una matrice a scala)
> Definiamo gli elementi $$j_i = a_{ij_i}$$ come gli *elementi di pivot*.
# 2. Esempi di sistema a scala 
Ora proponiamo delle matrici e li analizziamo in riferimento alla definizione appena data.

#Esempio 
> [!ex] Esempio 2.1.
Prendiamo le matrici $$\begin{gather}A = \begin{pmatrix} 0 & 1 & 3 & 2 \\ 0 & 0 & 1 & 3 \\ 0  & 0 & 0 & -2 \end{pmatrix} \\ \\ B= \begin{pmatrix} 2 & -1 & 3 & 1 \\ 0 & 0 & 1 & 4 \\ 0 & 0 & 0 & 0\end{pmatrix} \\\\ C = \begin{pmatrix} 2 & -1 & 3 & 1 \\ 0 & 0 & 0 & 0 \\ 0 & 0 & 1 & 4\end{pmatrix} \\ \\ D = \begin{pmatrix}2 &-1 & 3 & 1 \\ 0 & 0 & 2 & 1 \\ 0 & 0 & 3 & 2\end{pmatrix}\end{gather}$$

#Osservazione 
> [!oss] Osservazione 2.1. (Matrice $A$)
Facciamo delle osservazioni sulla *matrice A*. Notiamo che:
>1. Non è nulla, quindi bisogna vedere l'altra condizione
>2. Non ci sono righe nulle; quindi $r$ è il numero di righe effettive di $A$; in altre parole $r = m$.
>3. Abbiamo i seguenti *elementi di pivot*: $j_1 = a_{12} = 1$, $j_2 = a_{23} = 3$, $j_3 = a_{34} = 4$. Allora abbiamo la seguente relazione: $$j_3 > j_2 > j_1$$quindi questa matrice è *a scala*, secondo la definizione appena data.
>$$ $$

#Osservazione 
> [!oss] Oservazione 2.2. (Matrice $B$)
Ora guardiamo la *matrice B*. Notiamo che anche questa è a scala, visto che:
$$j_1 = 1 > j_2 = 3$$e $j_3$ non esiste in quanto la terza riga è *nulla*. Infatti $r = m -1 = 2$. 

#Osservazione 
> [!oss] Osservazione 2.3. (Matrice $C$)
Osserviamo che $C$ *non* è a scala in quanto abbiamo $r = 2$ (in parole abbiamo 2 righe non nulle), però $C_{(2)} = 0$ (ovvero la seconda riga sta nel mezzo della matrice, non in basso).

#Osservazione 
> [!oss] Osservazione 2.4. (Matrice $D$)
**OSS 2.D.**
Neanche questa *non* è a scala in quanto gli elementi di pivot seguono la seguente relazione: $$j_1 < j_2 = j_3$$dove $j_2$ dev'essere minore di $j_3$, non uguale.

#Osservazione 
> [!oss] Osservazione 2.5. (determinare sistemi non compatibili)
Se si ha una matrice del tipo $B$ (ovvero una in cui abbiamo almeno una riga nulla), ci si chiede se è possibile fissare una n-upla dei *coefficienti* $b$ tale da rendere $Ax = b$ *incompatibile*. ([[Sistemi Lineari#^dc691c]]).
La risposta è sì; infatti fissando $b_n$, $n$ essendo l'indice di una qualsiasi riga *nulla*, un numero che sia diverso da $0$, allora abbiamo un sistema incompatibile. Infatti si avrebbe l'equazione $$0+\ldots+0 = x, \forall x \in \mathbb{K}\diagdown\{0\}$$che non è risolvibile.
# 3. Compatibilità di sistemi a scala
> [!oss] Osservazione 3.1. (compatibilità dei sistemi)
Riprendendo l'osservazione posta nell'*osservazione 2.5.*, ora ci chiediamo se vale il contrario: ovvero se fissando $b_n$ il numero $0$, allora abbiamo un *sistema lineare compatibile*.
Per poter dare una risposta prima dobbiamo capire quando $Ax = b$ ha soluzione; sicuramente se $Ax = b$ ha soluzione e le righe $A_{r+1}, \ldots, A_{m}$ sono nulle, allora anche i valori $b_{r+1}, \ldots, r_m$ sono nulli. Vale il viceversa?
Vediamo un esempio.

#Esempio 
> [!ex] Esempio 3.1.
Prendiamo la *matrice B* dall'*esempio 2.1.* e un certo $b$. Ovvero $$B= \begin{pmatrix} 2 & -1 & 3 & 1 \\ 0 & 0 & 1 & 4 \\ 0 & 0 & 0 & 0\end{pmatrix}\ ; \ b = \begin{pmatrix}-4 \\ 5 \\ 0 \end{pmatrix}$$allora abbiamo il *sistema lineare* $$Bx = b$$Ora cerchiamo di risolverla. Questo sistema equivale a: $$\begin{cases}2x_1-x_2+3x_3+x_4=-4 \\ x_3+4x_4 = 5 \\ 0  = 0 \end{cases}$$Ora fissiamo $x_4 = t = 1$; abbiamo dunque $$\begin{cases}2x_1-x_2+3x_3+x_4=-4 \\ x_3+4x_4 = 5 \rightarrow x_3 = 1 \\ x_4 = 1 \end{cases}$$Dunque se $x_3 = x_4 = 1$, abbiamo $$2x_1-x_2  + 3 +1 = -4 \implies x_1 =\frac{-8+x_2}{2}$$e fissando $x_2= 1$, abbiamo $x_1 = -\frac{7}{2}$. 
Abbiamo trovato una soluzione particolare $$s = \begin{pmatrix}-\frac{7}{2}\\1\\1\\1 \end{pmatrix}$$

#Osservazione 
> [!oss] Osservazione 3.2. (il passo fondamentale)
Osserviamo che il *passo fondamentale* che ci ha permesso di trovare $s$ è quello di *esplicitare* gli *elementi di pivot*. Infatti abbiamo ottenuto $x_1, x_3$ (che sono gli elementi di pivot) determinando un valore arbitrario $t, u$ per $x_2, x_4$.

#Proposizione 
> [!prop] Proposizione 3.1. (compatibilità di un sistema a scala)
Vedendo che vale il viceversa enunciamo il seguente.
*Tesi.* Sia $Ax = b$ un *sistema lineare arbitrario* ove $A \in M_{m,n}(K)$ e supponiamo che $A$ sia una *matrice a scala* con $r$ righe non-nulle.
Allora vale $$Ax = b \text{ è compatibile} \iff b_{r+1} = \ldots = b_m = 0$$

**DIMOSTRAZIONE** della *proposizione 3.1.*.
Dimostriamo che entrambe le implicazioni ($\implies$ e $\impliedby$) sono veri.
- "$\implies$" : Sia $s \in K^n$ una soluzione del tipo $$s = \begin{pmatrix}s_1 \\ \vdots \\ s_m \end{pmatrix}$$tale che $As = b$ viene soddisfatta. Sia per ipotesi $A$ una *matrice a scala*; dunque $$\forall i \in \{r, r+1, \ldots, m\}:A_{(i)}=0$$Le corrispondenti equazioni sono quindi $$\begin{cases} 0 x_1 + \ldots + 0 x_n = b_{r+1} \\ \ldots \\0 x_1 + \ldots + 0x_n = b_m\end{cases}$$e ciò implica il seguente seguente: $$\begin{cases} 0s_1 + \ldots +0s_n = b_{r+1} \\ \ldots \\0s_1 + \ldots + 0s_n = b_m\end{cases} \implies \begin{cases}b_{r+1} = 0 \\ \ldots \\ b_m = 0 \end{cases}$$Dimostrando così la prima parte della tesi.

- " $\impliedby$ " : Vogliamo trovare una *soluzione*. Quindi troviamo un modo per *costruirla*.
  Allora per *costruire* una *soluzione* $s$ dobbiamo procedere a ritroso, partendo *"dal basso"* (ovvero dalla $m$-esima riga), quindi dalle ultime equazioni.
  Infatti per *ipotesi* tutte queste equazioni (dalla $r+1$-esima alla $m$-esima) sono del tipi $0=0$ in quanto abbiamo definito $A$ come una matrice *a scala*; quindi qui non ci poniamo il problema. Infatti sappiamo che $\forall i \in \{r+1, \ldots, m\}$ vale che $b_i = 0$. 
  Ora *"partiamo"* da $r$, che è la *prima* equazione *non identicamente nulla*, della forma $$a_{rj_r}x_{j_r}+ a_rj_{rj_{r}+1}x_{j_{r}+1}+\ldots+a_{rn}x_n = b_r$$che *"parte"* dall'elemento di *pivot* (ovvero il *primo* elemento non-zero della riga) $j_r$. Infatti teniamo a mente che $a_{rj_r} \neq 0$.
  Posso dunque esplicitare $x_{jr}$; $$x_{jr}=\frac{b_r -(a_{rj_r+1}x_{j_r+1}+\ldots+a_{rn}x_n)}{a_{rj_r}}$$Possiamo *scegliere* tutti i valori a piacimento (ovviamente affinché queste appartengano al campo $K$) ai valori $$x_{j_{r}+1}, \ldots,x_n$$e determinare il corrispondente valore di $x_{jr}$. 
  A questo punto scegliamo i valori $$s_{r+1}, \ldots, s_n \in K$$a piacimento e definiamo $$s_{jr} := \frac{b_r - (a_{rj_r+1}x_{j_r+1},+\ldots+a_{rn}x_n)}{a_{rj_r}}$$
  Ora *"saliamo"* alla *penultima* equazione non nulla. Ovvero $$a_{r-1j_{r-1}}x_{j_{r-1}} + a_{r-1,j_{r-1}+1}x_{j_{r-1}+1} + \ldots + a_{r-1,n}x_n = b_{r-1}$$dato che abbiamo una matrice a scala sappiamo che $j_r > j_{r-1}$; ovvero che l'elemento $j_{r-1}$ deve *"stare dietro"* a $j_r$. 
  Ora possiamo scegliere, a nostro piacimento, dei valori non oltre a quelli già scelti$$s_{j_{r-1}+1},s_{j_{r-1}+2}, \ldots, s_{j_{r}-1} \in K$$
  e definire $$s_{j_{r-1}} := \frac{b_{r-1}-(a_{r-1j_{r-1}+1}s_{j_{r-1}+1}+ \ldots + a_{r-1j_r-1}s_{j_r-1})}{a_{r-1j_{r-1}}}$$
  Poiché possiamo ripetere lo stesso esatto procedimento fino a $s_1$, possiamo dire che in questo modo abbiamo ottenuto tutti i valori $s_i$ della soluzione $s$ in modo che vengono soddisfatte *tutte* le equazioni. $\blacksquare$

#Esempio 
> [!ex] Esempio 3.2.
Con il procedimento appena descritto risolviamo un *sistema lineare*.
Ho dunque $$A = \begin{pmatrix}1 & -1 & 1 & 1 & 2 & 1\\ 0 & -1 & 3 & 2 & 1 & -1\\0 & 0 & 0 & 1 & 2 & 1 \\0 & 0 & 0 & 0 & 0 & 0 \end{pmatrix}\in M_{4,6}(\mathbb{R})$$allora dal risultato precedente sappiamo che il sistema lineare $$Ax = b$$è *compatibile* se e solo se $b_4 = 0$.
Scegliamo dunque un tale $b$, $$b = \begin{pmatrix}1 \\ 1 \\ 1 \\ 0 \end{pmatrix}$$e troviamo una soluzione di $Ax = b$. Le equazioni sono dunque: $$\begin{cases}x_1 -x_2 +x_3 +x_4+ 2x_5 +x_6 = 1 \\-x_2 +3x_3+2x_4 +x_5 -x_6 = 1 \\ x_4 +2x_5 + x_6 = 1 \end{cases}$$Partiamo dunque dall'ultima equazione: $$x_4 = 1-2x_5 + x_6$$e scegliendo $x_5 = 1, x_6 = 0$ abbiamo $$x_4 = -1$$Allora passiamo alla penultima equazione: abbiamo $$x_2 = -1+3x_3+2x_4+x_5-x_6$$e sappiamo che $x_4, x_5, x_6$ sono stati già determinati; scegliamo dunque solo $x_3 = -1$. Allora si ha $$x_2 = -1+3(-1)+2(-1)+(1)-0 = -5$$Ora finalmente finiamo con la prima equazione: $$x_1 = 1+x_2-x_3-x_4-2x_5-x_6 = \ldots = -4$$Ricapitolando, abbiamo determinato la soluzione $$s = \begin{pmatrix}-4 \\ -5 \\ -1 \\ -1 \\ 1 \\ 0 \end{pmatrix}$$del sistema $Ax = b$.

#Osservazione 
> [!oss] Osservazione 3.3. (automatizzare questo ragionamento)
Osserviamo che sapendo risolvere con questo metodo possiamo risolvere *qualunque* sistema lineare con $A$ a scala; fortunatamente col [[Algoritmo di Gauß]] andremo a dimostrare che qualsiasi matrice $A$ può essere trasformata in scala tramite il processo della *"gradinizzazione"*: quindi per questo ci sarà sufficiente *solo* risolvere sistemi lineari con la matrice dei coefficienti a scala, per poter risolvere *tutti* i sistemi lineari arbitrari.