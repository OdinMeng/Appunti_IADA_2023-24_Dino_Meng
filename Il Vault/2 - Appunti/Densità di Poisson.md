---
data: 2024-04-30
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Densità di Poisson
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Discrete
---
- - -
*Densità di Poisson. Definizione, motivazione e significato. Esercizio.*
- - -
# 0. Voci correlate
 - [[Densità associate a Variabili Aleatorie Discrete]]
 - [[Densità Binomiale]]
# 1. Definizione di Densità di Poisson
Adesso vediamo una densità importante per *approssimare* le *densità binomiali*.

#Definizione 
> [!def] densità di Poisson
> Sia $\lambda>0$ un *parametro reale* (ovviamente fissato). Chiamo la *densità di Poisson di parametro $\lambda$* come la funzione
> $$
> q(x)=\left\{ \begin{align}& \frac{\lambda^x}{x!}e^{-\lambda}, x \in \mathbb{N} \\ &0, \text{altrimenti}\end{align}\right.
> $$
> Viene indicato con $p_\lambda$.

#Teorema 
> [!thm] la densità di Poisson è una densità
> Si ha che $p_\lambda$ è sempre una *densità*. Infatti dallo sviluppo di Taylor abbiamo ([[Esempi di Serie di Taylor-MacLaurin#^897ce3|1]])
> $$
> \sum_{x=0}^{+\infty}\frac{\lambda^x}{x!}=e^{\lambda}
> $$
> Dunque
> $$
> \sum_{x=0}^{+\infty}q(x)=e^{\lambda-\lambda}=1
> $$

# 2. Derivazione della Densità di Poisson
Vogliamo capire da *dove viene* questa densità. L'idea principale è quella di ottenere il *limite delle densità binomiali* $B\left(n, \frac{\lambda}{n}\right)$ su $n$ ([[Densità Binomiale#^01be20|1]]). Adesso osserviamo bene.

#Osservazione 
> [!rmk] il limite delle densità binomiali
> Si ha la *famiglia delle densità binomiali* posta come
> $$
> (\mathcal B_n)_n=B\left(n, \frac{\lambda}{n}\right)\to q_n
> $$
> Sia fissato adesso un $k \in \mathbb{N}$ qualunque, vogliamo calcolare il valore $q_n(k)$.
> Per definizione si ha
> $$
> q_n(k)=\binom{n}{k}\left(\frac{\lambda}{n}\right)^k \left(1-\frac{\lambda}{n}\right)^{n-k}
> $$
> ([[Densità Binomiale#^01be20|1]]). Questo vale per $k \in \{0, \ldots, n\}$. Calcolando esplicitamente i coefficienti binomiali, abbiamo
> $$
> q_n(k)=\frac{n!}{k!(n-k)!}\frac{\lambda^k}{n^k}\left(1-\frac{\lambda}{n}\right)^n\left(1-\frac{\lambda}{n}\right)^{-k}
> $$
> Dato che ho $k$ fissato, posso scegliere uno spettro di valori $n$ tale che $n \geq k$. Così risulta
> $$
> \begin{align}
> q_n(k)&=\frac{\textcolor{RED}{n!} }{\textcolor{LIME}{k!}\textcolor{RED}{(n-k)!} }\frac{\textcolor{LIME}{\lambda^k} }{\textcolor{RED}{n^k} }\left(1-\frac{\lambda}{n}\right)^n\left(1-\frac{\lambda}{n}\right)^{-k} \\ &= \textcolor{LIME}{\frac{\lambda^k}{k!} }\left(1-\frac{\lambda}{n}\right)^n\left(1-\frac{\lambda}{n}\right)^{-k} \underbracket{ \textcolor{RED}{\frac{n(n-1)\ldots(n-k+1)}{n(n)\ldots(n)} } }_{k \ \text{fattori}} \\ &=\frac{\lambda^k}{k!}e^{-\lambda}
> \end{align} 
> $$
> Considerando i limiti 
> $$
> \begin{gather}
> \lim_n \left(1-\frac{\lambda}{n}\right)^n = e^{-\lambda} \\
> \lim_n \left(1-\frac{\lambda}{n}\right)^k=1 \\
> \lim_n \frac{n}{n}\cdot \frac{n-1}{n}\cdot \ldots \cdot \frac{n-k+1}{n}=1\cdot\ldots \cdot 1 = 1
> \end{gather}
> $$
> In conclusione si enuncierà il seguente teorema per riassumere tutto.

#Teorema 
> [!thm] proprietà fondamentale della densità di Poisson
> Sia $(\mathcal{B}_n)_n$ la famiglia di densità posta come
> $$
> (\mathcal B_n)_n=B\left(n, \frac{\lambda}{n}\right)=q_n
> $$
> Allora vale che, per un qualsiasi $k \in \mathbb{N}$ fissato,
> $$
> \boxed{\lim_n \mathcal{B}_n(k)=\frac{\lambda^k}{k!}e^\lambda =p_\lambda(k)}
> $$
> Ovvero la *"famiglia delle densità binomiali converge verso la densità di Poisson"*.

^f1fe6f

# 3. Significato pratico
Osserviamo il *significato* della densità di Poisson in *termini pratici*.

#Osservazione 
> [!rmk] densità di Poisson in termini pratici
> Prendiamo uno *schema di prove ripetute* con $q_n=\frac{\lambda}{n}$; ovvero la *probabilità* $q$ diminuisce con singola prova. Va notate che il risultato appena provato prima ([[#^f1fe6f|1]]) vale anche per un $q_n$ tale che
> $$
> \lim_n n q_n=\lambda
> $$
> Ovvero abbiamo $q_n \sim \frac{1}{n}$. 
> 
> Posto $\lambda_n = nq_n$, abbiamo per la *continuità* che i limiti si trasmettono (quindi $\lim_n \lambda_n = \lim_n nq_n = \lambda$. Pertanto,
> $$
> \lim_n p_{\lambda_n}(k)=p_\lambda(k)
> $$
> Ovvero c'è uno scarto tra il *"limite approssimato"* e il *"limite target"* di
> $$
> \lim_n \left|B(n, q_n)(k) -p_{\lambda_n} (k)\right|=0
> $$
> 
> Quindi per approssimare $B(n,q_n)$, che potrebbe risultare ostico da calcolare con i coefficienti binomiali, possiamo semplicemente usare $p_\lambda$ che contiene solo dei fattoriali ed esponenti. Empiricamente si mostra che minimalmente il numero ideale $n$ è $n=50$

# 4. Esercizio sulla densità di Poisson
#Esercizio 
> [!exr] gli errori in una pagina
> Ci sono mediamente 1,2 errori di battitura per pagina di un libro. Calcolare la probabilità di trovare in una data di 2000 pagine zero errori e almeno tre errori.

**SVOLGIMENTO.** 
Qui si ha uno *schema di prove ripetute* con $q=1.2/2000$ che rappresenta la probabilità di avere un carattere erroneo. Volendo possiamo prendere la densità $B(2000, q)$. Tuttavia, questo diventa impossibile da calcolare per una mente umana. Prendiamo dunque $p_\lambda$ con $\lambda = nq = 1.2$. Adesso diventa tutto facile da calcolare: basta associare $X$ la densità $p_\lambda$ e calcolare le probabilità
$$
\begin{gather}
p\{X=0\}=e^{-\lambda}\sim 0.3 \\
p\{X\geq 3\}=1-p\{x<3\}=1-\sum_{j=0}^{2}p\{X=j\}=\ldots\sim0.12
\end{gather}
$$
che finisce l'esercizio. $\blacksquare$