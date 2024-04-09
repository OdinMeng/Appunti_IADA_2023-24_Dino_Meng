---
data: 2024-03-22
corso:
  - "[[Analisi Matematica II]]"
argomento: Funzione Somma di una Serie di Potenze
tipologia: appunti
stato: "1"
capitolo: Successioni e Serie di Funzioni
---
- - -
*Definizione di funzione somma di una serie di potenze, proprietà della funzione somma.*
- - -
# 0. Voci correlate
- [[Insieme e Raggio di Convergenza per una Serie di Potenze]]
- [[Definizione di Serie di Potenze]]
- [[Teoremi di Passaggio del Limite per le Serie di Funzioni]]
# 1. Definizione di Funzione Somma
#Definizione 
> [!def] funzione somma di una serie di potenze
> Sia $\sum_n a_n(x-x_0)^n$ una serie di potenze con insieme di convergenza $I_\mathcal{R}$. 
> Per ogni $x \in I_\mathcal{R}$ definiamo la *funzione somma* come
> $$
> f(x):=\sum^{+\infty}_{n=0}a_n(x-x_0)^n
> $$
> ovvero una funzione del tipo $f:I_\mathcal{R} \longrightarrow \mathbb{R}$. 

^fb512c

# 2. Proprietà della Funzione Somma
#Teorema 
> [!thm] proprietà della funzione somma
> Sia $f(x)$ la *funzione somma* per la *serie di potenze* $\sum_n a_n(x-x_0)^n$. Allora valgono le seguenti.
> i. (*teorema di integrazione termina a termine*) $f$ è *continua* in $I_\mathcal{R}$ e vale che
> $$
> \begin{align}
> \int_{x_0}^x f(t) \ \text{d}t &= \int_{x_0}^x \sum^{+\infty}_{n=1}a_n(t-x_0)^n \ \text{d}t \\&= \sum^{+\infty}_{n=1}\int_{x_0}^x a_n(t-x_0)^n \ \text{d}t = \boxed{\sum^{+\infty}_{n=1}\frac{a_n}{n+1}(x-x_0)^{n+1}}
> \end{align}
> $$
> ii. (*teorema di derivazione termine a termine*) $f$ è *derivabile* in $I_\mathcal{R}$ e vale che
> $$
> \begin{align}
> \frac{\text{d} }{\text{d}x}[f(x)] &= \frac{\text{d} }{\text{d}x }\left[\sum^{+\infty}_{n=0} a_n(x-x_0)^n\right] \\ &= \sum^{+\infty}_{n=0}\frac{\text{d} }{\text{d}x }[a_n(x-x_0)^n] = \boxed{\sum^{+\infty}_{n=1}n a_n (x-x_0)^{n-1}}
> \end{align}
> $$

#Corollario 
> [!cor] la funzione somma è infinitamente derivabile
> La funzione somma $f$ è *derivabile infinitamente volte* in $I_\mathcal{R}$ e $\forall k \in \mathbb{Z}$ vale che
> $$
> \frac{\text{d}^k}{\text{d}x^k}f(x)=\sum^{+\infty}_{n=k}(n)(n-1)\ldots(n-k+1)(x-x_0)^{n-k}\cdot a_n
> $$
> e la serie-derivata ha *raggio di convergenza* $\mathcal{R}$.

^071d88

