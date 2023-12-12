---
data: 2023-11-16
corso: "[[Analisi Matematica I]]"
argomento: Continuità Uniforme
tipologia: appunti
stato: "0"
---
*Osservazioni preliminari, definizione di continuità uniforme, esempi. Teorema di Heine.*
- - -
# 0. Osservazione preliminare
La seguente osservazione si baserà sul concetto della *continuità* ([[Definizione di continuità]]).
**OSS 0.a.** Supponiamo di avere una funzione $f: E \longrightarrow \mathbb{R}$, $x_0 \in E$. 
Per definizione sappiamo *"tradurre"* il concetto della *continuità* di una funzione per un punto $x_0$ *"alla Cauchy"*, ovvero:
$$f \text{ continua in } x_0 \iff \begin{gather}\forall \varepsilon >0, \exists\delta >0: \forall x \in E, \\|x-x_0| < \delta \implies |f(x)-f(x_0)|< \varepsilon \end{gather}$$
Quindi abbiamo sostanzialmente una *"macchina"* limite per cui dato un $\varepsilon$ fissato ottengo un $\delta$ (ulteriori chiarimenti sull'analogia della macchina in [[Definizione di Limite di funzione#^0f845a]]).
Ora se cambio il punto $x_0$ e prendo $x_1$ tale che $f$ sia continua, allora ho
$$f \text{ continua in } x_1 \iff \begin{gather}\forall \varepsilon >0, \exists\delta' >0: \forall x \in E, \\|x-x_1| < \delta' \implies |f(x)-f(x_1)|< \varepsilon \end{gather}$$
Se tengo fisso lo stesso $\varepsilon$ sia per $x_0$ che per $x_1$, allora i valori $\delta, \delta'$ potrebbero essere diversi.
Infatti se trovo un $\delta$ che va bene per *tutti* i punti del dominio, allora non solo $f$ è continua ma ha anche una proprietà in più, che definiremo a seguire.

# 1. Definizione di continuità uniforme
#Definizione 
> [!def] Definizione 1.1. (funzione uniformemente continua)
> Data una funzione $f : E \longrightarrow \mathbb{R}$, diciamo che $f$ è *uniformemente continua* se vale la seguente proprietà.
> $$\begin{gather} \forall \varepsilon >0, \exists \delta>0: \forall x_1,x_2 \in E, \\ |x_1-x_2| < \delta \implies |f(x_1)-f(x_2)|<\varepsilon \end{gather}$$

**OSS 1.1.** Notiamo quindi che se una funzione è *uniformemente continua* è anche (ovviamente) *continua*. Attenzione però che non vale necessariamente il *viceversa*.

#Esempio 
> [!ex] Esempio 1.1.
> Sia $f(x) = 1$ con $E = [0,1]$;
> sia $g(x) = x$ con $E = [0,1]$;
> sia $h(x) = \frac{1}{x}$ con $E = \ ]0, +\infty[$.
> Le funzioni $f, g, h$ sono tutte *continue*; tuttavia solo $f, g$ sono anche *uniformemente continue*.
> Infatti $h$ non è *uniformemente continua*: infatti supponendo per assurdo che $h$ sia *uniformemente continua* e fissando $\varepsilon =1$, si avrebbe
> $$\begin{gather}\forall \varepsilon >0, \exists \delta > 0: \forall x_1, x_2 \in E: \\ |x_1-x_2| < \delta \implies \left| \frac{1}{x_1}-\frac{1}{x_2}\right| < 1\end{gather}$$ 
> Ora considero la *successioni a valori in* $E$ $$(x_{1,n})_n = \frac{1}{n} , (x_{2,n})_n=\frac{1}{n+1}$$ 
> avremmo quindi
> $$|x_{1,n}-x_{2,n}| = |\frac{1}{n}-\frac{1}{n+1}| = |\frac{1}{n(n+1)}|$$
> ma dato che $f$ è continua possiamo considerare
> $$|f(x_{1,n})-f(x_{2,n})| = 1 \iff \left|f\left(\frac{1}{n}\right)-f\left(\frac{1}{n+1}\right)\right| = 1$$
> Però
> $$\lim_n \frac{1}{n(n+1)} = 0$$
> Quindi da un lato abbiamo i due numeri che man mano si avvicinano, però la loro distanza delle immagini rimane *sempre* costante.

# 2. Teorema di Heine (dell'uniforme continuità)
#Teorema 
> [!thm] Teorema 2.1. (di Heine)
> Sia $f: [a, b] \longrightarrow \mathbb{R}$ *continua* (e ovviamente $[a,b]$ è *compatta* ([[Insiemi compatti in R#^0eb138]])).
> Allora $f$ è *uniformemente continua*.

^d030d1

**OSS 2.1.** Quindi in generale si può dire che una funzione $f$ è uniformemente continua *se e solo* se continua, se vale la ipotesi iniziale del teorema.

#Dimostrazione 
**DIMOSTRAZIONE** (*Teorema 2.1.*)
*Omessa, facoltativa sulla dispensa di D.D.S.*
