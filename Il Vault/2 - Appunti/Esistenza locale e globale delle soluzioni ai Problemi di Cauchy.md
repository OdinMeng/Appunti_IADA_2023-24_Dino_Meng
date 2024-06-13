---
data: 2024-05-10
corso:
  - "[[Analisi Matematica II]]"
argomento: Esistenza locale e globale delle soluzioni ai Problemi di Cauchy
tipologia: appunti
stato: "1"
capitolo: Equazioni Differenziali
---
- - -
*Esistenza locale e globale delle soluzioni ai Problemi di Cauchy. Esempio preliminare. Teorema: condizione sufficiente per l'esistenza globale (la sublinearità). Esempio.*
- - -
# 0. Voci correlate
- [[Teorema di Cauchy-Lipschitz]]
- [[Definizioni Relative alle Equazioni Differenziali]]
# 1. Esempio preliminare
#Esempio 
> [!exm] esempio preliminare per la questione dell'esistenza locale e globale
> Definiamo i seguenti problemi di Cauchy.
> $$
> (PC_1):\left\{\begin{align}
> & y'(x)=y(x)\\
> & y(x_0)=1
> \end{align}\right.
> $$
> e
> $$
> (PC_2):\left\{\begin{align}
> & y'(x)=y^2(x) \\
> & y(x_0)=y_0
> \end{align}\right.
> $$
> Banalmente si trova la soluzione al $(PC_1)$ ponendo $y_1(x)=e^x$ (ovvero col metodo *Ansatz*), e con ulteriori calcoli si trova la soluzione al $(PC_2)$, con $y_2(x)=(1-x)^{-1}$. 
> 
> Inoltre notiamo che queste soluzioni *devono essere uniche*, dal momento che entrambi i problemi di Cauchy soddisfano le condizioni del teorema di Cauchy-Lipschitz.
> 
> Studiando i domini, troviamo che $y_1$ è definita sulla retta reale $I=\mathbb{R}$, invece $y_2$ è definita su un pezzo della retta $I=(-\infty, 1)$. Cosa succede? Perché ho situazioni diverse?
> 
> Vedremo che le equazioni $f_1(x,y)=y$ e $f_2(x,y)=y^2$ hanno *andamenti asintotici* diversi: ovvero in $f_2$ ho un *"esplosione incontrollabile"* della funzione, invece in $f_1$ ho una *"crescita sublineare"*.

# 2. Teorema dell'esistenza globale
#Teorema 
> [!thm] condizione sufficiente per l'esistenza globale
> Sia $f:A \subseteq \mathbb{R}^2 \longrightarrow \mathbb{R} \in \mathcal{C}^0$, con $A=(a,b) \times \mathbb{R}$ (notiamo che $a \in \mathbb{R} \cup \{+\infty\}$ e $b \in \mathbb{R} \cup \{-\infty\}$), e $(x_0,y_0) \in A$ un punto scelto. Sia $(PC)$ il problema di Cauchy definito da $f$.
> 
> Allora si ha che se per ogni compatto $H \Subset (a,b)$ esistono dei parametri $\alpha, \beta \in \mathbb{R}^+$ tali che
> $$
> \left|f(x,y)\right| \leq \alpha|y|+\beta, \forall (x,y) \in H \times \mathbb{R}
> $$
> Questa proprietà si dice *sublinearità* di $f$ su $y$.
> 
> Allora il *problema di Cauchy* $(PC)$ ha una *soluzione definita globalmente*, su $(a,b)$.

^637b48

# 3. Esempio
#Esempio 
> [!exm] esempio
> Vediamo un esempio.
> 
> Sia $f(x,y)=x^2(1+y \sin y)$. La nostra intuizione ci dice che $f$ è *sublineare* su $y$, dato che ho un seno che *"non fa nulla"*. Infatti ho:
> $$
> \forall H \Subset \mathbb{R}, |f(x,y)|\leq|x^2||1+y\underbracket{\textcolor{red}{\left|\sin y\right|} }_{\leq 1} \leq \max_{x \in H} x^2+x^2y
> $$
> Allora abbiamo che $f$ è *sublineare*, con parametri $\alpha, \beta = \max{H}$ (il massimo *deve* esistere per Weierstraß).
> 
> Pertanto, per il *teorema dell'esistenza globale* ho che un qualsiasi problema di Cauchy definito con $f$ ha *soluzioni globali*.

# 4. Lemma di Prolungabilità
Se si fosse nel caso in cui *non* abbiamo sublinearità, si avrebbe comunque un modo per salvarsi.

#Lemma 
> [!lem] di prolungabilita, o di fuga da un compatto
> Sia $f: A \subset \mathbb{R}^2 \longrightarrow \mathbb{R} \in \mathcal{C}^0$ con $A$ aperto. Sia $y:(c,d) \longrightarrow \mathbb{R}$ una *soluzione* dell'equazione differenziale
> $$
> y'(x)=f(x,y)
> $$
> Se *esiste un compatto* $K \Subset A$ tale che $G(y) \subseteq K$ (ovvero il *grafico* di $Y$ sta dentro $K$), allora esiste un raggio $\delta>0$ tale che $y$ è definibile su $(c-\delta, d+\delta)$. Ovvero posso ridefinire $y$ come $y:(c-\delta, d+\delta)\longrightarrow\mathbb{R}$ (cioè prolungabile).
^1c9a26

**FIGURA 1.1.** (*Idea del lemma*)
![[Pasted image 20240510223430.png|450]]

Questo teorema si rivela *particolarmente utile* per dimostrare l'esistenza delle soluzioni su tutto $\mathbb{R}$, procedendo per assurdo, dove non abbiamo funzioni sublineari.

**DIMOSTRAZIONE** del [[#^1c9a26]]
*Nota: opzionale, si da solo l'idea*
Si considera che se ho $f(x,y)$ continua racchiuso in un compatto $K \Subset A \subseteq \mathbb{R}^2$, per Weierstraß ([[Teorema di Weierstraß Generalizzato]]) ho l'esistenza di massimi e minimi;
$$
\exists M=\max_K|f|, \exists m=\min_K|f|
$$
Inoltre possiamo dire che $y'$ è *lipschitziana* ([[Funzione Integrale#^404ea5]]), dato che è *limitato* in $M$: infatti ho
$$
|y'|\leq M \implies |y(b)-y(a)|\leq M|b-a|
$$
(questa è una conseguenza diretta del *teorema di Lagrange*, [[Teorema di Lagrange]])
Dato che è lipschitziana, essa è estendibile: infatti esiste il limite
$$
\bar{y}:=\lim_{x \to d^{-} }y(x)
$$
con $(d,\bar{y}) \in K$. In definita posso considerare il problema di Cauchy
$$
(PC):\left\{\begin{align}
& z=f(x,z) \\
& z(d)=\bar{y}
\end{align}\right.
$$
di cui soluzione è proprio $y$ ridefinita nel suo nuovo intervallo.
