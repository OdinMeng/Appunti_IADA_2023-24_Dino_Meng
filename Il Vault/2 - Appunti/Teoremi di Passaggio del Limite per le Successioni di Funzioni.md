---
data: 2024-03-18
corso:
  - "[[Analisi Matematica II]]"
argomento: Teoremi di Passaggio del Limite per le Successioni di Funzioni
tipologia: appunti
stato: "1"
capitolo: Successioni e Serie di Funzioni
---
- - -
*Teoremi di Passaggio del Limite per le Successioni di Funzioni: Continuità, scambio con la derivata e con l'integrale. Esempi.*
- - -
# 0. Voci Correlate
- [[Convergenza Puntuale e Uniforme per Successioni di Funzioni]]
- [[Definizione di Continuità]]
- [[Funzioni di potenza, radice e valore assoluto]]
- [[Derivata e derivabilità]]
- [[Integrabilità secondo Riemann]]
# 1. Teorema di passaggio al limite per funzioni continue
#Teorema 
> [!thm] di passaggio al limite per funzioni continue
> Sia $f_n:[a,b]\longrightarrow \mathbb{R}$ una *successione di funzioni continue*. Sia $f:[a,b]\longrightarrow\mathbb{R}$.
> Se $f_n$ *converge uniformemente a* $f$, allora $f$ è *continua*. 
^8dbd30

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^8dbd30]]
Riscrivo le ipotesi come il seguente:
*"$f_n$ converge uniformemente a $f$"* diventa
$$
\begin{gather}
\forall \varepsilon>0, \exists \bar{n}: \forall n \geq \bar{n}, \forall x \in [a,b] \\ |f_n(x)-f(x)| \leq \varepsilon
\end{gather}
$$
*"$f_n$ sono continue"* diventa
$$
\begin{gather}
\forall x_0 \in [a,b], \forall m \in \mathbb{N}, \forall \varepsilon>0, \exists \delta>0: \\ x \in (x_0- \delta_m, x_0+\delta_m) \implies |f_m(x)-f_m(x_0)| \leq \varepsilon
\end{gather}
$$
Adesso riscrivo la tesi, di cui voglio provare, come
$$
\begin{gather}
\forall x_0 \in [a,b], \forall \varepsilon>0, \exists \delta>0: \\ x \in (x_0-\delta,x_0+\delta) \implies |f(x)-f(x_0)| \leq \varepsilon
\end{gather}
$$
Per dimostrare questo prendere $|f(x)-f(x_0)|$ e aggiungere 
$$
f_m(x)-f_m(x)+f_m(x_0)-f_m(x_0)=0
$$
e si ha che
$$
|f(x)-f(x_0)| = |f(x)-f_m(x)+f_m(x)-f_m(x_0)+f_m(x_0)-f(x_0)|
$$
e per la disuguaglianza triangolare si ha
$$
\begin{align}
| f(x)-f(x_0)|&\leq\underbracket{|f(x)-f_m(x)|}_{\leq \varepsilon}+\underbracket{|f_m(x)-f_m(x_0)|}_{\leq \varepsilon}+\underbracket{|f_m(x_0)-f(x_0)|}_{\leq \varepsilon} \\ & \leq 3\varepsilon = \varepsilon'
\end{align}
$$
che è la tesi, dato che $\varepsilon$ è un valore arbitrario. $\blacksquare$

# 2. Teorema del scambio del limite con la derivata
#Teorema 
> [!thm] del scambio del limite con la derivata
> Sia $f_n: (a,b) \longrightarrow \mathbb{R}$ una *successione di funzioni derivabili*.
> Se valgono che:
> i. La successione delle derivate $(f'_n)_n$ *converge uniformemente* in $(a,b)$ verso $g$;
> ii. La successione delle funzioni $(f_n)_n$ *converge uniformemente* in almeno in un punto $t_0 \in (a,b)$.
> Allora la successione delle funzioni $(f_n)_n$ *converge uniformemente* in $(a,b)$. Sia $f$ il suo *limite*, risulta $f$ *derivabile* e si ha $f'=g$. In altre parole, si può scambiare la derivata col limite;
> $$
> \lim_n \frac{\text{d} }{\text{d}t}f_n(t) = \frac{\text{d} }{\text{d}t}\left(\lim_n f_n(t)\right)
> $$
^3c0dde

#Dimostrazione 
**DIMOSTRAZIONE DEL** [[#^3c0dde]]
Omessa. La dimostrazione è disponibile sulla p. 114 del Pagani-Salsa. $\blacksquare$

#Osservazione 
> [!rmk] la convergenza uniforme di una successione non garantisce la convergenza delle derivate
> Si osserva che la *convergenza uniforme* di una successione $(f_n)_n$ non garantisce la *derivabilità* della *convergenza delle derivate* $(f'_n)_n$.
> 
> Infatti, prendiamo il seguente controesempio. Posto $f_n(x)$ come
> $$
> f_n(x)=\frac{\sin(nx)}{n}
> $$
> sappiamo che chiaramente $\lim_n f_n(x)=0$, in una maniera uniforme.
> Adesso consideriamo le $(f'_n)_n$; queste sono uguali a
> $$
> f'_n(x)=\cos(nx)
> $$
> tuttavia, queste *non hanno limite*, dunque *non convergenti in alcun modo*.

# 3. Teorema del scambio del limite con l'integrale
#Teorema 
> [!thm] del scambio del limite con l'integrale
> Se $f_n:[a,b]\longrightarrow\mathbb{R}$ è una *successione di funzioni limitate* ed *integrabili secondo Riemann* su $[a,b]$ e *converge uniformemente* a $f$, allora $f$ è *integrabile secondo Riemann* su $[a,b]$ e vale che
> $$
> \lim_n \int_a^b f_n(t) \ \text{d}t = \int_a^b f(t) \text{ d}t
> $$
^6171eb

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^6171eb]]
Omessa, dimostrazione disponibile sulla p. 115 del Pagani-Salsa. $\blacksquare$

#Osservazione 
> [!rmk] la convergenza uniforme è una condizione necessaria
> Si osserva che la *successione di funzioni* dev'essere *uniformemente* convergente a $f$. Dimostriamo questa necessità con un controesempio.
> 
> Sia $f_n:[0,1]\longrightarrow \mathbb{R}$. Di questa funzione sappiamo, per l'archimedeità dei reali, che tende a $f_n(x) \to 0$. Per lo stesso motivo, *non* è *uniformemente* convergente, dato che l'*estremo superiore* della funzione è raggiunta in $x \to 0 \implies f_n(x) \to n$. 
> 
> Adesso, se considero l'integrale della successione ho
> $$
> \int_0^1 f_n(t) \ \text{d}t = \int_0^{\frac{1}{n} }(n-n^2x) \ \text{d}x = 0.5
> $$
> però allo stesso tempo ho
> $$
> \int_0^1 f(x) \ \text{d}x=0
> $$
> Quindi non è valido *"scambiare l'integrale col limite"*.
