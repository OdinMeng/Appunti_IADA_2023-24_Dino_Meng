---
data: 2024-05-12
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Densità Esponenziale
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Assolutamente Continue
---
- - -
*Densità esponenziale (cose più utili). Definizione, funzione di ripartizione, media e varianza. Proprietà fondamentale: l'assenza di memoria.*
- - -
# 0. Voci correlate
- [[Densità Geometrica]]
- [[Variabile Aleatoria Assolutamente Continua]]
- [[Funzione di Ripartizione per Variabili Aleatorie Assolutamente Continue]]
# 1. Definizione di Densità Esponenziale
#Definizione 
> [!def] densità esponenziale
> Diciamo che $X$ ha *densità esponenziale di parametro $\lambda >0$* se ammette come densità la funzione
> $$
> f(x)=\lambda e^{-\lambda x}\chi_{\mathbb{R}^+}(x)
> $$
> Ovvero abbiamo una *"esponenziale inversa"* sulla semiretta positiva. La si indica con $\mathcal{E}(\lambda)$.
> 
> Si verifica facilmente che $\int_\mathbb{R}\mathcal{E}(\lambda)=1$, per indipendentemente dal parametro non-negativo $\lambda$.

**FIGURA 1.1.** (*Densità esponenziale*)
![[Pasted image 20240512132555.png]]

#Teorema 
> [!thm] funzione di ripartizione, media e covarianza
> La funzione di ripartizione di una densità $\mathcal{E}(\lambda)$ è
> $$
> F(t)=\left\{\begin{align}
> & 1-e^{-\lambda t}, t \geq 0 \\
> & 0, t<0
> \end{align}\right.
> $$
> La sua media e covarianza è
> $$
> \begin{gather}
> E[X]=\frac{1}{\lambda} \\
> \operatorname{var}X = \frac{1}{\lambda^2}
> \end{gather}
> $$
^a81f80

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^a81f80]]
Per calcolare la funzione di ripartizione si tratta banalmente di valutare l'integrale
$$
\int_0^t \lambda e^{-\lambda x}\ \text{d}x
$$
da cui seguono i calcoli (si mette $0$ perché tanto è definita $0$ sulla semiretta negativa). Per quanto concerne invece la media si tratta di valutare l'integrale indefinito
$$
\int_{0}^{+\infty}\lambda x e^{-\lambda x}\ \text{d}x
$$
(sicuramente integrabile dato che c'è l'esponenziale che ammazza sempre le potenze). Lo stesso vale per la media di $E[X^2]$, poi mettendo tutto assieme si ottiene
$$
\operatorname{var}X=E[X^2]-E[X]^2 = \frac{2}{\lambda^2}-\frac{1}{\lambda^2}=\frac{1}{\lambda^2}
$$
che prova le tesi. $\blacksquare$

# 2. Assenza di Memoria dell'esponenziale
#Proposizione 
> [!prp] l'assenza di memoria dell'esponenziale
> Le *variabili aleatorie* di tipo *esponenziale* godono l'*assenza di memoria*. Ovvero 
> $$
> p\{X>T+t|X>T\}=p\{X>t\}
> $$
> *"sotto il condizionamento per cui non ho avuto successo prima di $T$, la probabilità di avere success dopo l'istante $t$ rimane ugualmente"*.
^a8b79c

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^a8b79c]]
Calcoliamoci prima $p\{X>\tau\}$: abbiamo 
$$
p\{X>\tau\} = 1-p\{X\leq \tau\}=1-\underbracket{p\{X=\tau\}}_{0}-p\{X<\tau\}=1-F(\tau)=e^{-\lambda\tau}
$$
Per la definizione di *probabilità condizionale* ([[Probabilità Condizionale#^d4ba5d|1]]) si ha
$$
\begin{align}
p\{X>T+t|X>T\}=\frac{p\{X>T+t \land X > T\} }{p\{X>T\}}&=\frac{p\{X>T+t\} }{p\{X>T\} }\\
&=\frac{e^{-\lambda(T+t) } }{e^{-\lambda T} }=e^{-\lambda T}=p\{X>t\}
\end{align}
$$
che dimostra la tesi. $\blacksquare$

#Osservazione 
> [!rmk] proprietà fondamentale
> Notiamo che è la stessa proprietà di cui gode la *variabile aleatoria geometrica* ([[Densità Geometrica#^50d562|1]]). Inoltre si dimostra che l'*unica* variabile aleatoria assolutamente continua che *gode tale proprietà* è proprio l'*esponenziale*.
> 
> Vedremo un nesso tra queste due *densità* con l'avanzare del corso.
