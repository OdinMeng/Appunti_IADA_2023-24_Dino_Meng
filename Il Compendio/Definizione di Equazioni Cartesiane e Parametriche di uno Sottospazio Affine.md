---
data: 2023-12-10
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Definizione di Equazioni Cartesiane e Parametriche di uno Sottospazio Affine
tipologia: appunti
stato: "0"
capitolo: Geometria Affine
---
- - -
*Definizione di Equazioni Cartesiane ed Equazioni Parametriche per la codificazione per uno sottospazio affine; teorema preliminare, dimostrazione e definizioni.*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Sistemi Lineari]]
- [[Teoremi sui Sistemi Lineari]] (di struttura delle soluzioni per i sistemi lineari arbitrari)
- [[Definizione di Spazio Affine]]
- [[Spazio Affine su K]]
- [[Definizione di Sottospazio Affine]]
# 1. Teorema preliminare
#Teorema 
> [!thm] Teorema 1.1. (di codificazione dei sottospazi affini)
> Sia $A \in M_{m,n}(K)$ ([[Matrice#^c6b210]]), $b \in K^m$.
> Supponiamo che il *sistema lineare* $Ax = b$ ([[Sistemi Lineari#^6f6520]]) sia *compatibile* e sia $S$ l'insieme delle *soluzioni* ([[Sistemi Lineari#^d967ff]]).
> Allora 
> $$S=\mathbb{S} \subseteq \mathbb{A}^n_K$$
> è uno *sottospazio affine* la cui *giacitura* è il *sottospazio vettoriale* $W \subseteq K^n$ delle *soluzioni* del *sistema lineare omogeneo associato* $Ax = 0$ ([[Definizione di Sottospazio Affine#^a1f242]])
> Inoltre, 
> $$\dim \mathbb S = \dim W = n - \operatorname{rg}A$$
^0461d1

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 1.1.* ([[#^0461d1]])
Questo teorema segue direttamente dal *teorema di struttura per le soluzioni dei sistemi lineari arbitrari* ([[Teoremi sui Sistemi Lineari#^49a263]]). Infatti *tutte e sole* le soluzioni di $Ax = b$ sono della forma
$$s = \tilde{s}+s_0 \implies s-\tilde{s} = s_0$$
dove $\tilde{s}$ è una *soluzione fissata* di $Ax=b$, invece $x_0$ è una *soluzione qualsiasi* di $Ax=0$.
Pertanto se *"interpretiamo"* $\tilde{s} \in K^n$ come un *punto* $Q \in \mathbb{A}^n_K$ e pensiamo ad una soluzione di $AX=b$, come un *altro punto* $P \in \mathbb{A}^n_K$, allora vediamo che i punti $\sigma(Q,P)$ sono del tipo
$$\overrightarrow{QP} = s-\tilde{s} = s_0 \in W \implies \sigma(Q,P) \in W$$
e $s_0$ appartiene a $W$, che sarebbe l'insieme delle *soluzioni* di $Ax = 0$. Questo è esattamente la *definizione* di un *sottospazio affine* passante per $Q$ di giacitura $W$ ([[Definizione di Sottospazio Affine#^a1f242]]).
In tal caso dal *teorema di dimensione* ([[Teorema di dimensione delle soluzioni di sistemi lineari]]) discende che
$$\dim \mathbb{S} = \dim W = n - \operatorname{rg}A \ \blacksquare$$

# 2. Definizione di Equazioni Cartesiane e Parametriche
## Equazioni Cartesiane
#Definizione 
> [!def] Definizione 2.1. (equazioni cartesiane di uno sottospazio affine)
> Sia $\mathbb{S} \subseteq \mathbb{A}$ un *sottospazio affine* *"codificata"* dal sistema lineare (in parole più rigorose, $\mathbb{S}$ rappresenta le soluzioni del seguente sistema lineare)
> $$Ax = b$$
> Allora le *equazioni* del sistema lineare si dicono *equazioni cartesiane* per $\mathbb{S}$, ovvero le equazioni del tipo
> $$\boxed{\begin{cases}a_{11}x_1 + a_{12}x_2 + \ldots + a_{1n}x_n = b_1 \\ a_{21}x_1 + a_{22}x_2 + \ldots + a_{2n}x_n = b_2 \\ \vdots \\ a_{m1}x_1 + a_{m2}x_2 + \ldots + a_{mn}x_n = b_m \end{cases}}$$

#Osservazione 
> [!oss] Osservazione 2.1.
> Se un sistema lineare $Ax = b$ ha come *insieme delle soluzioni* $S$, allora ogni *sistema lineare equivalente* ([[Sistemi Lineari#^17d541]]) a $Ax=b$ avrà il *medesimo* insieme $S$.
> Pertanto, applicando le *operazioni elementari* ([[Algoritmo di Gauß#^ccc408]]) a $Ax=b$, otteniamo *altre* equazioni cartesiane per $S$.
> Infatti, questa osservazione diventerà la base dell'*"algoritmo"* del passaggio dalle equazioni cartesiane a quelle parametriche ([[Passaggio tra Equazioni Cartesiane e Parametriche di uno Sottospazio Affine]]).
## Equazioni Parametriche
#Osservazione 
> [!oss] Osservazione 2.2. (osservazione preliminare per la definizione di equazioni parametriche)
> Sia ora $\mathbb{S} \subseteq \mathbb{A}^n_K$ un *sottospazio affine* passante per $Q \in \mathbb{A}^n_K$ e di *giacitura* $W \subseteq K^n$. Supponiamo che $W$ è generata dalla *base* ([[Definizione di Base#^def430]]) $w_1, \ldots, w_k$; ovvero $W = \operatorname{span}(w_1, \ldots, w_k)$.
> Allora possiamo scrivere ogni *elemento* della base come *elemento* di $K^n$:
> $$w_1 = \begin{pmatrix}w_{11} \\ \vdots \\ w_{n1} \end{pmatrix}, \ldots, w_k = \begin{pmatrix}w_{1n} \\ \vdots \\ v_{nk} \end{pmatrix}, \forall w_{ij} \in K$$
> Allora per *definizione* se $Q = (q_1, \ldots, q_n) \in \mathbb{A}^n_K$, i punti $P=(x_1, \ldots, x_n) \in \mathbb{A}^n_K$ di $\mathbb{S}$ sono *tutti e soli* punti che soddisfano $\sigma(Q,P) \in W$.
> Riscriviamo quindi questa condizione utilizzando i termini che abbiamo appena introdotto.
> $$\begin{align}\overrightarrow{QP} \in W &\iff \begin{pmatrix}x_1-q_1 \\ \vdots \\ x_n-q_n \end{pmatrix} \in W \\ &\iff \begin{pmatrix}x_1-q_1 \\ \vdots \\ x_n-q_n \end{pmatrix} = t_1 w_1 + \ldots + t_k w_k, t_i \in K \\ &\iff \begin{pmatrix}x_1-q_1 \\ \vdots \\ x_n-q_n \end{pmatrix} = \begin{pmatrix} t_1 w_{11} + \ldots + t_k w_{1k} \\ \vdots \\ t_1 w_{n1} + \ldots + t_k w_{nk}\end{pmatrix} \end{align}$$
> In definitiva abbiamo il *sistema di equazioni*
> $$\begin{cases}x_1 = q_1 + t_1 w_{11} + \ldots + t_k w_{1k} \\ \vdots \\ x_n = q_n + t_1 w_{n1} + \ldots + t_k w_{nk} \end{cases}$$

#Definizione 
> [!def] Definizione 2.2. (equazioni parametriche per uno sottospazio affine)
> Sia $\mathbb{S} \subseteq \mathbb{A}$ uno *sottospazio affine* di giacitura $W$ e passante per $Q$. Sia la base di $W$ generata dai vettori $w_1, \ldots, w_k \in V$. Sia $Q$ il punto $(q_1, \ldots, q_n) \in \mathbb{A}$.
> Allora il seguente sistema di equazioni si dice *equazioni parametriche per uno sottospazio affine con $k$ parametri*.
> $$\boxed{\begin{cases}x_1 = q_1 + t_1 w_{11} + \ldots + t_k w_{1k} \\ \vdots \\ x_n = q_n + t_1 w_{n1} + \ldots + t_k w_{nk} \end{cases}}$$
> dove $t_i$ sono detti *parametri*.
# 3. Pro e Contro
#Osservazione 
> [!oss] Osservazione 3.1. (vantaggi e svantaggi delle due forme)
> Vediamo che abbiamo due *forme* distinte per *"codificare"* un *sottospazio affine*; entrambi di essi hanno i suoi vantaggi e svantaggi.
> Nel caso delle *equazioni parametriche* possiamo facilmente generare punti dello sottospazio, quindi possiamo mediante *gli strumenti dell'informatica* generare una *visualizzazione grafica* dello sottospazio affine inserendo valori di $t$ a piacimento; tuttavia se invece vogliamo verificare che un *punto specifico* appartenga ad uno sottospazio affine, allora si dovrebbe *"provare"* tutti i valori $t$.
> Però saremmo facilitati con le *equazioni cartesiane* a questo fine: basta inserire i valori numerici del punto per verificare se esso appartenga o meno al sottospazio affine.
> 
> Questa distinzione vale anche per gli oggetti algebrici!
# 4. Conseguenze di queste forme
#Osservazione 

#Osservazione 

#Osservazione 