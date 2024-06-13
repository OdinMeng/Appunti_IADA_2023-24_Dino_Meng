---
data: 2024-06-09
corso:
  - "[[Analisi Matematica II]]"
argomento: Temi Analisi II Omari
tipologia: appunti
stato: "0"
capitolo:
---
- - -
*Temi dell'esame di Analisi Matematica II di Pierpaolo Omari, SOLO con le consegne.*
- - -
## 10.06.2019
1. Si consideri la serie di funzioni
$$
\sum^{+\infty}_{n=0}\frac{x \cos(nx)}{1+n^2}
$$
- Si determini, giustificando la risposta, l'insieme di convergenza puntuale della serie
- Si provi che, per ogni $x = a>0$ la serie converge uniformemente su $[-a,a]$.
- Si provi che, per ogni $a>0$ la serie non converge uniformemente su $\mathbb{R}$.
- Per ogni $a>0$, si calcoli, giustificando la risposta, l'integrale
$$
\int_{-a}^a \left(\sum^{+\infty}_{n=0} \frac{x\cos(nx)}{1+n^2}\right)\text{ d}x
$$

---

2. Si consideri la funzione
$$
f(x,y,z)=x^2+xy^2+xy+z^2+1
$$
- Si calcoli il gradiente $\nabla f$
- Si calcoli l'Hessiana $Hf$
- Si determinino i punti critici di $f$
- Si calcolino gli autovalori della matrice Hessiana nei punti critici di $f$
- Si studi la natura dei punti critici di $f$
- Si determinino $\inf f$ e $\sup f$.
- Si stabilisca per quali $k \in \mathbb R$ gli insiemi di livello $L_k(f)$ sono superfici regolari in forma implicita

---

3. Si ponga
$$
J=\left\{(x,y,z) \in \mathbb{R}^3: x>0, |y|<\frac{1}{1+x^2}, |z|<\frac{1}{1+x^2}\right\}
$$
- Si calcoli l'integrale
$$
\iiint_J x \text{ d}x\text{ d}y\text{ d}z
$$
- Si stabilisca per quali $\alpha>0$ è finito l'integrale
$$
\iiint_J x^\alpha \text{ d}x\text{ d}y\text{ d}z
$$

---

4. Si consideri il campo vettoriale $g: \mathbb{R}^2 \longrightarrow \mathbb{R}^2$ definito da
$$
g(x,y)=(e^x+y, x+e^y)
$$
- Si calcoli la Jacobiana $Jg$

## 15.07.2019
1. Per ogni $n \in \mathbb{N}$ si ponga
$$
f_n(x)=\left \{
\begin{align}
& \frac{x}{n}, x \leq 0 \\ &nx^n, x >0
\end{align}
\right.
$$
- Si determinino l'insieme di convergenza puntuale di $(f_n)_n$ e la funzione limite $f$
- Si stabilisca, giustificando la risposta, se $(f_n)_n$ converge uniformemente a $f$ in $]-\infty,0]$, $]0,1[$ e $[-1, \frac{1}{2}]$.
- Si stabilisca, giustificando la risposta, se è vero che
$$
\lim_n \int_{-1}^1 f_n(x)\text{ d}x = \int_{-1}^1 f(x)\text{ d}x
$$

---

2. Si definiscano $K = \{(u,v) \in \mathbb{R}^2: 2u^2 + v^2 \leq 1\}$ e $\sigma:K \longrightarrow \mathbb{R}$ con $\sigma(u,v)=(v, 2u, 1+4u^2+2v^2)$.
- Si calcoli $\sigma_u \times \sigma_v$
- Si provi che $\sigma$ è iniettiva
- Si provi che $\sigma$ definisce una superficie regolare semplice in forma parametrica
- Si determini il piano tangente a $\Sigma=\sigma(K)$ in $(0,0,1)$
- Posto $f(x,y,z)=2x^2+y^2+z$, si determino gli estremi assoluti di $f$ su $\Sigma$

---

3. Si ponga
$$
E=\left\{(x,y,z) \in \mathbb{R}^3: |x|\leq 1, |y| \leq 1, 1 \leq z \leq 1+|x|+|y|\right\}
$$
- Si calcoli il volume di $E$
- Si calcoli l'area della frontiera di $E$

---

4. Si indici con $y_k(t)$ la soluzione del problema di Cauchy $(PC)_{k \in \mathbb{R} }$ al variare di $k$ in $\mathbb{R}$, definita come
$$
(PC)_k:\left\{\begin{align}
& y'(t)=2y(t)-y^2(t) \\
& y(0)=k
\end{align}\right.
$$
- Si determini la soluzione $y_k$ per $k \in \{0,1,2\}$
- Si provi che per ogni $k \in ]0,2[$ la soluzione $y_k$ è limitata, crescente e definita su $\mathbb{R}$
- Per ogni $k \in ]0,2[$, si calcolino i limiti
$$
L_1=\lim_{x \to -\infty}y_k(x), L_2= \lim_{x \to +\infty}y_k(x)
$$

## 24.06.2019
1. Si consideri la serie di funzioni
$$
\sum_{n=1}^{+\infty}(-1)^n \sin\left(\frac{1}{n+x^2}\right)
$$
- Si determini, giustificando la risposta, l'insieme di convergenza puntuale della serie
- Si determini, giustificando la risposta, l'insieme di convergenza uniforme della serie.
- Detta $s(x)$ la somma della serie, si determini $N$ in modo che
$$
\sup_{x \in \mathbb{R} }\left|\sum^N_{n=1} (-1)^n \sin\left(\frac{1}{n+x^2}\right)-s(x)\right| < 10^{-2}
$$

---

2. Si consideri la funzione
$$
f(x,y)=\int_{2xy}^{x^2+y^2}e^{t^2}\text{ d}t
$$
- Si provi che $f(x,y)\geq 0$ su $\mathbb{R}^2$
- Si determinino gli zeri di $f$
- Si determini il limite $\lim_{x\to+\infty}f(x,0)$
- Si determini $\min f$ e $\sup f$
- Si calcoli il gradiente di $f$
- Si determinino i punti critici di $f$
- Si stabilisca quali punti critici di $f$ sono di minimo assoluto

---

3. Si ponga
$$
E=\{(x,y,z) \in \mathbb{R}^3: x^2+y^2 \leq 1 , 0 \leq z \leq 2+xy\}
$$
- Si calcoli il volume di $E$
- Si calcoli l'area di frontiera di $E$

## 10.02.2020
1. Si ponga
$$
f(x)=\left \{
\begin{align}
& \frac{1-e^{-x^2} }{x} , x \neq 0 \\ &0, x=0
\end{align}
\right.
$$
- Si sviluppi $f$ in serie di Taylor-Maclaurin
- Si determini il raggio di convergenza dello sviluppo
- Si approssimi $\int_{[0,1]}f$ con un errore inferiore a $10^{-2}$

---

2. Si ponga 
$$
\Gamma = \{(x,y,z) \in \mathbb{R}^3: x^2+y^2-z=1, x+y+z=0\}
$$
- Si provi che $\Gamma$ è il sostegno di una curva regolare in forma implicita in $\mathbb{R}^3$
- Si provi che $\Gamma$ è compatto
- Si dimostri l'esistenza in $\Gamma$ di punti di quota minima e di quota massima
- Si determinino la quota minima e la quota massima di $\Gamma$

---

3. Si ponga
$$
\Phi(u,v,w)=\begin{pmatrix}v-w \\ u-v \\ v+w \end{pmatrix}
$$
- Dimostrare che $\Phi$ è biiettiva
- Posto $E=\{(x,y,z) \in \mathbb{R}^3: -z \leq x \leq 2-z, -x \leq y \leq 3-x, z-4 \leq x \leq z\}$, usare la trasformazione $\Phi$ per calcolare
$$
\iiint_E (x+z)^2 \text{ d}x\text{ d}y\text{ d}z
$$

## 10.07.2017
2. Posto $E=[-2,2] \times \mathbb{R}$, si consideri la funzione $f:E \longrightarrow \mathbb{R}$ definita come
$$
f(x,y)=x^2+2y^2-xy^2
$$
- Si provi che $f(x,y) \geq 0$ in $E$
- Si calcoli $\nabla f(x,y)$
- Si calcoli $Hf(x,y)$
- Si determinino gli estremi relativi di $f$ nell'interno di $E$
- Si determinino gli estremi relativi e assoluti di $f$ sulla frontiera di $E$
- Si determinino $\inf_E f$, $\sup_E f$, specificando se sono di minimo o di massimo

---

3. Si ponga
$$
E=\{(x,y,z) \in \mathbb{R}^3: x^2+y^2 \leq 1, x^2+y^2-2 \leq z \leq 1-\sqrt{x^2+y^2}\}
$$
- Calcolare il volume di $E$
- Calcolare l'area di frontiera di $E$

---

4. Si determinino tutte le soluzione dell'equazione differenziale $y'' - y = e^{-x}+\sin(2x)$ che siano limitate su $[0,+\infty)$

