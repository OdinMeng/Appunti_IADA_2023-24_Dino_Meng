---
data: 2024-05-18
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Approssimazione delle Densità con la Gaussiana
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Assolutamente Continue
---
- - -
*Conseguenze del teorema del limite centrale: approssimazione di alcune densità con la gaussiana. Binomiale, Poisson e Gamma.*
- - -
# 0. Voci correlate
- [[Teorema del Limite Centrale]]
- [[Densità Binomiale]]
- [[Densità di Poisson]]
- [[Densità Gamma]]
# 1. Approssimazione Normale della Binomiale
#Teorema 
> [!thm] approssimazione normale della binomiale
> Sia $X_k \sim B(1, q)$ (ovvero ha la *densità binomiale*, [[Densità Binomiale#^7f761d|1]]). Allora dai calcoli su tale densità ricordiamo che $E[X_k]=q$ e $\operatorname{var}{X_k} = q(1-q)$. Sia $Y_n \sim B(n, q)$.
> 
> Allora valgono per $n \to +\infty$, che questi sono approssimabili con la *gaussiana*.
> $$
> \begin{gather}
> Y_n \simeq Y \sim \mathcal N(nq, nq(1-q))\\
> \overline{X}_n \simeq X \sim \mathcal N\left(q, \frac{q(1-q)}{n}\right)
> \end{gather}
> $$
> Con la *funzione di ripartizione* per $Y_n$ definita come
> $$
> p\{Y_n \leq x \} \simeq p\{Y\leq x\}=\phi\left(\frac{x-nq}{\sqrt{nq(1-q)}}\right) 
> $$

#Osservazione 
> [!rmk] correzione di continuità
> Notiamo che abbiamo *variabili aleatorie discrete* ([[Variabile Aleatoria Discreta#^fa74dd|1]]), dunque abbiamo il problema per cui
> $$
> p\{Y_n \leq x\}=p\{Y_n \leq x+\delta\}, \forall \delta\in [0,1] 
> $$
> Quindi con tale approssimazione abbiamo *valori diversi* di $p\{Y_n \leq x\}$, dato che la gaussiana è *continua*. Per convenzione scegliamo $\delta=0.5$ e calcoliamo $p\{Y_n \leq x\}$ come
> $$
> \phi\left(\frac{x+0.5-nq}{\sqrt{nq(1-q)} }\right)
> $$
> questa procedura si chiama *correzione di continuità*.

#Osservazione 
> [!rmk] due approssimazioni per la binomiale
> Notiamo che abbiamo *due approssimazioni possibili* per la binomiale $B(n,q)$.
> 
> Di solito si usa l'*approssimazione normale* quando abbiamo
> $$
> nq > 5 \land n(1-q)>5
> $$
> Invece quando non abbiamo tale condizione possiamo *provare* ad usare l'*approssimazione di Poisson*, se abbiamo
> $$
> n>50 \land q<\frac{10}{n}
> $$
> Se la seconda condizione non viene rispettata, si potrebbe contare il numero di insuccessi $\tilde{q}=1-q$.

# 2. Approssimazione Normale della Poisson
#Teorema 
> [!thm] l'approssimazione normale della Poisson
> Siano $X_k \sim P_1, Y_n \sim P_n$. Ricordiamoci che la *somma di Poisson* è ancora una *Poisson*.
> 
> Allora, dato che $\mu = \sigma^2 = 1$ per $X_k$, abbiamo
> $$
> \begin{gather}
> Y_n \simeq Y \sim \mathcal{N}(n,n) 
> \\ 
> p\{Y_n \leq x\}\simeq \phi\left(\frac{x-n}{\sqrt{n} }\right)
> \\
> \overline{X}_n \simeq X \sim \mathcal{N}\left(1, \frac{1}{n}\right)
 > \end{gather}
> $$

#Osservazione 
> [!rmk] caso d'uso
> Si usa quest'approssimazione per $n \geq 5$ e anche quando $\lambda \not \in \mathbb{Z}$.

# 3. Approssimazione Normale della Gamma
#Teorema 
> [!thm] approssimazione normale della gamma
> Sia $X_k \sim \Gamma(1, \lambda)$. Poiché la somma di gamma rimane una gamma ([[Densità Gamma#^565afe|1]]), si ha che $Y_n \sim \Gamma(n, \lambda)$.
> 
> Abbiamo $\mu = \frac{1}{\lambda}$ e $\sigma^2 = \frac{1}{\lambda^2}$. Allora per $n\geq 30\to+\infty$ si ha
> $$
> \begin{gather}
> Y_n \simeq Y \sim \mathcal{N}\left(\frac{n}{\lambda}, \frac{n}{\lambda^2}\right) \\
> \overline{X}_n \simeq X \sim \mathcal{N}\left(\frac{1}{\lambda}, \frac{1}{n\lambda^2}\right)
> \\
> p\{Y_n \leq x\}\simeq \phi\left(\frac{x-\frac{n}{\lambda} }{\sqrt{\frac{n}{\lambda^2} } }\right)=\phi \left(\frac{\lambda x -n}{\sqrt{n} }\right)
> \end{gather}
> $$

