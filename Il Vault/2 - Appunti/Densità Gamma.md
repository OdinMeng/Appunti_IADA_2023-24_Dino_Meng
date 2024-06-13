---
data: 2024-05-12
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Densità Gamma
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Assolutamente Continue
---
- - -
*Densità gamma. Definizione preliminare: funzione gamma di Eulero. Definizione di densità gamma avente parametri $\alpha,\lambda$ positivi. Valor medio della densità gamma elevata ad una potenza qualsiasi. La somma di densità gamma è una densità gamma. Corollario: somma di densità esponenziale.*
- - -
# 0. Voci correlate
- [[Funzione Integrabile in Senso Generalizzato]]
- [[Variabile Aleatoria Assolutamente Continua]]
- [[Densità Esponenziale]]
# 1. Fondamenta sulla Gamma di Eulero
Prima di parlare della *densità gamma*, parliamo della *funzione gamma di Eulero*.

#Definizione 
> [!def] funzione gamma di Eulero
> Si chiama la *funzione gamma di Eulero* come l'integrale
> $$
> \Gamma(\alpha):=\int_0^{+\infty}x^{\alpha-1}e^{-x}\ \text{d}x
> $$

#Proposizione 
> [!prp] le proprietà della funzione gamma
> La funzione gamme di Eulero soddisfa le seguenti proprietà.
> 
> i. 
> $$
> \Gamma(\alpha+1)=\alpha \Gamma(\alpha)
> $$
> ii. 
> $$
> \Gamma(n)=(n-1)!, \forall n \in \mathbb{N}
> $$
> iii. *Formula di riflessione*
> $$
> \Gamma(\alpha)\Gamma(1-\alpha)=\frac{\pi}{\sin(\alpha\pi)}, \forall \alpha \not \in \mathbb{Z}
> $$
> iv. *Formula sui semi-interi*
> $$
> \Gamma\left(n+\frac{1}{2}\right)=\sqrt{\pi}\prod_{k=0}^{n-1}\left(k+\frac{1}{2}\right)
> $$

Non dimostreremo nulla.

# 2. Densità Gamma
#Definizione 
> [!def] densità gamma
> Diciamo che una *v.a.* ha *densità gamma di parametri $\alpha,\lambda >0$* se ammette come densità la funzione
> $$
> f(x)=\left\{
> \begin{align}
> & \frac{\lambda^\alpha}{\Gamma(\alpha)}x^{\alpha-1}e^{-\lambda x}, x>0 \\
> &0, x \leq 0
> \end{align} 
> \right.
> $$
> Denotiamo tale densità col simbolo $\Gamma(\alpha,\lambda)$.
> 
> Osservare che per $\alpha=1$ ho esattamente l'esponenziale $\mathcal{E}(\lambda)$. Ovvero vale che $\Gamma(1,\lambda)=\mathcal{E}(\lambda)$.

^1d1dae

Per dimostrare che questa è una densità si procede per cambio di variabile $y=\lambda x$ e di valutare l'integrale, ottenendo così
$$
\int_\mathbb{R}f = \ldots = \frac{1}{\Gamma(\alpha)}\underbracket{\int_0^{+\infty}y^{\alpha-1}e^{-y}\ \ \text{d}y}_{\Gamma(\alpha)}=1
$$

Per valutare la sua media e varianza consideriamo il seguente lemma.

#Lemma 
> [!lem] lemma preliminare per la media
> Vale che, per una densità $X \sim \Gamma(\alpha,\lambda)$
> $$
> \forall k \in \mathbb{N}, E[X^k]=\frac{(\alpha+k-1)(\alpha+k-2)\ldots (\alpha)}{\lambda^k}
> $$
^452f15

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^452f15]]
Si tratta di calcolare l'integrale
$$
\int_0^{+\infty}\frac{\lambda^a}{\Gamma(\alpha)}a^{k+1-1}e^{-\lambda x}\ \text{d}x
$$
L'idea è quella di sfruttare il fatto che
$$
\int_0^{+\infty}\frac{\lambda^{a+k} }{\Gamma(a+k)}x^{\alpha+k-1}e^{-\lambda x}\ \text{d}x=1
$$
dato che avrei la funzione $\Gamma(\alpha+k, \lambda)$. Usiamo il trucco di dividere e moltiplicare per $\lambda^k$ e di usare il fatto che $\Gamma(\alpha+k)=(\alpha+k-1)\ldots(\alpha)\Gamma(\alpha)$ (questo vale su $\mathbb{N}$). Allora in definitiva otteniamo
$$
\int_0^{+\infty}\frac{\lambda^a}{\Gamma(\alpha)}a^{k+1-1}e^{-\lambda x}\ \text{d}x = \frac{(\alpha+k-1)\ldots(\alpha)}{\lambda^k}\underbracket{\int_0^{+\infty}\frac{\lambda^{\alpha+k} }{\Gamma(\alpha+k)}x^{\alpha+k-1}e^{-\lambda k}\ \text{d}x }_{1}
$$
che è la tesi. $\blacksquare$

#Teorema 
> [!thm] media e varianza della gamma
> Vale che la *media* e la *varianza* di una $\Gamma(\alpha, \lambda)$ è
> $$
> \begin{gather}
> E[X]=\frac{\alpha}{\lambda}; E[X^2]=\frac{\alpha(\alpha+1)}{\lambda^2} \\
> \operatorname{var}X = \frac{\alpha}{\lambda^2}
> \end{gather}
> $$

^c78182

# 3. Somma di Variabili Aleatori Gamma Indipendenti
Vediamo una *proprietà fondamentale* della *densità gamma*.

#Proposizione 
> [!prp] somma di variabili aleatori gamma
> Siano $X_1,\ldots,X_n$ delle *variabili aleatorie indipendenti*, ognuna con densità $\Gamma(\alpha_k, \lambda)$. 
> 
> Allora posto $X:=\sum_k X_k$ si ha che $X$ è una *variabile aleatoria assolutamente continua di tipo gamma* con densità
> $$
> X \sim \Gamma\left(\sum_{k=1}^{n}\alpha_k, \lambda\right)
> $$
^565afe

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^565afe]]
Si dimostra il caso $N=2$, per la generalizzazione su $\mathbb{N}$ si procede per induzione. Per il lemma sulla somma di *variabili aleatorie assolutamente continue* ([[Variabile Aleatoria Assolutamente Continua#^edc8f8]]) si ha
$$
f(x)=\int_\mathbb{R} f_1(y)f_2(x-y)\ \text{d}y
$$
Dato che abbiamo $X_1 \sim \Gamma(\alpha_1, \lambda)$ e $X_2 \sim \Gamma(\alpha_2, \lambda)$ dobbiamo calcolare
$$
f(x)=\frac{\lambda^{\alpha_1} \lambda^{\alpha_2 } }{\Gamma(\alpha_1)\Gamma(\alpha_2)}e^{-\lambda x}\int_0^x y^{\alpha_1-1}(x-y)^{\alpha_2-1}\ \text{d}y
$$
Effettuiamo un cambio di variabile, con $y=xt$. Dunque in questo momento si ha che l'integrale diventa
$$
\int_0^x y^{\alpha_1-1}(x-y)^{\alpha_2-1}\ \text{d}y \to \int_0^1(xt)^{\alpha_1-1}x^{\alpha_2-1}(1-t)^{\alpha_2-1}x \ \text{d}t
$$
Noto che posso portare fuori i termini $x^{\alpha_1-1}$ e $x^{\alpha_2-1}$, portandoci
$$
f(x)=x^{\alpha_1+\alpha_2-1}e^{-\lambda x}\textcolor{RED}{\frac{\lambda^{\alpha_1} \lambda^{\alpha_2 } }{\Gamma(\alpha_1)\Gamma(\alpha_2)}\int_0^1 t^{\alpha_1-1}(1-t)^{\alpha_2-1}\ \text{d}t }
$$
Adesso considero la parte colorata in rosso come una *costante*, chiamandola $c$. A questo punto abbiamo
$$
f(x)=\left\{\begin{align}
& c x^{\alpha_1+\alpha_2-1}e^{-\lambda x}, x>0 \\ &0, x \leq 0
\end{align}\right.
$$
Essendo $f$ una *densità* (condizione necessaria per il lemma), ricaviamo che la costante $c$ è proprio
$$
c=\frac{\lambda^\alpha}{\Gamma(\alpha)}
$$
che prova $f$ essere una densità associata a $\Gamma(\alpha_1+\alpha_2, \lambda)$. $\blacksquare$

#Corollario 
> [!cor] somma tra esponenziali
> Se $X_1,\ldots,X_n$ sono *variabili aleatorie indipendenti* con densità esponenziale $\mathcal{E}(\lambda)$, allora la sua somma $X=\sum_k X_k$ ha densità $\Gamma(n, \lambda)$.
^7c962a

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^7c962a]]
Omessa, basta considerare che $\mathcal{E}(\lambda)=\Gamma(1, \lambda)$. $\blacksquare$

