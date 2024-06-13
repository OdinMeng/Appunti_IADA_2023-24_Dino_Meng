---
data: 2023-12-08
corso: "[[Analisi Matematica I]]"
argomento: Definizione di Funzione Integrale
tipologia: appunti
stato: "1"
---
*Funzione Integrale: definizione di Funzione Integrale (Integralfunktion); prime proprietà della funzione integrale (lipschitziana e continua).*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Funzioni]]
- [[Integrabilità secondo Riemann]]
- [[Teorema Fondamentale del Calcolo Integrale]]
- [[Esempi di Calcolo delle Primitive]]
- [[Primitive delle Funzioni Elementari]]
- [[Integrazione per Parti]]
- [[Integrazione per Sostituzione]]
# 1. Definizione di Integralfunktion (Funzione Integrale)

^4a5cb4

#Definizione 
> [!def] la funzione integrale / die Integralfunktion 
> Sia $f: [a,b] \longrightarrow \mathbb{R}$ una funzione *integrabile secondo Riemann sull'intervallo* $[a, b]$ ([[Integrabilità secondo Riemann#^5455b8]]).
> Allora definisco la *funzione integrale di $f$* su $[a,b]$ (oppure in tedesco *die Integralfunktion*) come il seguente:
> $$\boxed{F: [a,b] \longrightarrow \mathbb{R}\ ; \  F(x)=\int_a^x f(t) \ dt}$$
> Geometricamente questo corrisponde a *prendere la singola area partizionata tra il punto $a,x$* ([[Proprietà delle Funzioni Integrabili Secondo Riemann#^157e15]]) (*figura 1.1.*).

^e5e02b

**FIGURA 1.1.** (*Idea grafica dell'Integralfunktion*)
![[Pasted image 20231208185609.png]]

# 2. Proprietà dell'Integralfunktion
## Integralfunktion Lipschitziana
#Definizione 
> [!def] funzione lipschitziana
> Sia una $g: [a,b] \longrightarrow \mathbb{R}$ una *funzione*, se vale la seguente condizione, ovvero
> $$\begin{gather}\exists M>0: \forall x_1, x_2 \in [a,b], \\ |g(x_1)-g(x_2)|\leq M|x_1-x_2| \end{gather}$$
> allora $g$ si dice *lipschitziana* (o in tedesco *lipschitzstetig*).

^404ea5

#Proposizione 
> [!prp] funzione lipschitziana è continua
> In particolare, una funzione *lipschitziana* è anche *continua*: dalla condizione di *Lipschitz* deve discendere
> $$\lim_{x_1 \to x_2}g(x_1)=g(x_2)$$
^2635f6

#Dimostrazione 
**DIMOSTRAZIONE** della *proposizione 2.1.* ([[#^2635f6]])
Dimostrazione lasciata al lettore per esercizio ([[Esercizi sulle funzioni#^488ad5]]) $\blacksquare$
*Consiglio: usare la definizione "alla Cauchy" della continuità.*

#Teorema 
> [!thm] die Integralfunktion ist lipschitzstetig
> Sia $f$ una *funzione integrabile secondo Riemann sull'intervallo $[a,b]$* ([[Integrabilità secondo Riemann]]) (ovvero $f \in \mathcal{R}([a,b])$).
> Sia $F$ l'*Integralfunktion* di $f$, ovvero $F: [a,b] \longrightarrow \mathbb{R}$.
> $$F(x) = \int_a^x f(x) \ dx$$
> Allora la *funzione integrale* $F$ è *lipschitziana* ([[#^2635f6]])
> $$\begin{gather}\exists M >0: \forall x_1, x_2 \in [a,b] \\ |F(x_1)-F(x_2)| \leq M|x_1-x_2|\end{gather}$$
^7e839c

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 2.1.* ([[#^7e839c]])
Sia $f$ *integrabile secondo Riemann*. Allora $f$ è *limitata*, ovvero:
$$\exists M>0: \forall x \in [a,b], |f(x)| < M$$
dove, per due qualsiasi punti $x_1, x_2$ nell'intervallo di definizione abbiamo
$$\begin{align}F(x_1)-F(x_2) &= \int_a^{x_1}f(t) \ dt \ - \int_a^{x_2}f(t) \ dt \\ &= \int_{a}^{x_1} f(t) \ dt  \ + \int_{x_2}^a f(t) \ dt \\ &= \int_{x_2}^a f(t) \ dt \ + \int_{a}^{x_1}f(t) \ dt \\ &= \int _{x_2}^{x_1}f(t) \ dt \end{align}$$
Allora
$$|F(x_1)-F(x_2)| = \left|\int_{x_2}^{x_1} f(t) \ dt \ \right| \leq \int_{x_2}^{x_1} \left | f(t) \right | \ dt$$
Posso piazzare il *valore assoluto* dell'integrale in quanto non è *garantito* che $x_1 < x_2$; infatti potremmo avere delle *"aree negative"* ([[Proprietà delle Funzioni Integrabili Secondo Riemann#^cd03da]]).
Ma allora posso *"rimpiazzare"* $|f(t)|$ col valore per cui è limitato, ovvero $M$.
$$|f(t)| \leq M \implies |F(x_1)-F(x_2) | \leq \left|\int_{x_2}^{x_1}M \ dt \right| = M|x_1-x_2|$$
Ovvero, in definitiva,
$$\boxed{|F(x_1)-F(x_2) | \leq M|x_1-x_2|} \  \blacksquare$$
## Integralfunktion Continua
#Corollario 
> [!cor] die Integralfunktion ist kontinuierlich
> Sia $f$ una *funzione integrabile secondo Riemann sull'intervallo $[a,b]$* ([[Integrabilità secondo Riemann]]) (ovvero $f \in \mathcal{R}([a,b])$).
> Sia $F$ l'*Integralfunktion* di $f$, ovvero $F: [a,b] \longrightarrow \mathbb{R}$.
> $$F(x) = \int_a^x f(x) \ dx$$
> Allora la *funzione integrale* $F$ è *continua*, in quanto lipschitziana.
^abcab0

#Dimostrazione 
**DIMOSTRAZIONE** del *corollario 2.1.* ([[#^abcab0]])
Questo teorema segue direttamente dal *teorema 2.1.* ([[#^7e839c]]) e dalla *proposizione 2.1.* ([[#^2635f6]]). Infatti la dimostrazione è già stata *"inclusa"* nell'enunciato. $\blacksquare$