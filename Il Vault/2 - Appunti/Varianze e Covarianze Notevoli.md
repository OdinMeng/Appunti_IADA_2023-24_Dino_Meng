---
data: 2024-05-10
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Varianze e Covarianze Notevoli
tipologia: appunti
stato: "1"
capitolo:
---
- - -
*Varianza e covarianza di densità associate a variabili aleatori notevoli: binomiale, geometrica, ipergeometrica e di Poisson.*
- - -
# 0. Voci correlate
- [[Densità Binomiale]]
- [[Geometria del Piano Affine]]
- [[Densità Ipergeometrica]]
- [[Densità di Poisson]]
# 1. Elenco di Varianze e Covarianze Notevoli
#Teorema 
> [!thm] varianze e covarianze notevoli
> Sia $X_B$ la variabile aleatoria associata alla densità binomiale $B(n,q)$;
> Sia $X_G$ quella associata a $\operatorname{geo}{(q)}$;
> Sia $X_I$ a quella ipergeometrica $\operatorname{iper}{(n,a,b)}$;
> Sia $X_\lambda$ a quella di Poisson $P_\lambda$. 
> 
> Allora valgono le seguenti.
> 
> $$
> \left\{
> \begin{align}
> & \textcolor{red}{E[X_B]=nq}, \operatorname{var}{X_B}=nq(1-q)
> \\
> & E[X_G]=\frac{1}{q}, \operatorname{var}{X_G}=\frac{1-q}{q^2}
> \\
> &E[X_I]=\frac{na}{a+b}, \operatorname{var}{X_I}=\frac{n(a+b-n)ab}{(a+b)^2(a+b-1)}
> \\
> &E[X_\lambda]=\lambda, \textcolor{RED}{\operatorname{var}{X_\lambda} = \lambda}
> \end{align}
> \right.
> $$
> In rosso sono le parti da ricordare.
> 
