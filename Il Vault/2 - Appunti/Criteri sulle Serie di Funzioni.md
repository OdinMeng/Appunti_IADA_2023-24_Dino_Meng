---
data: 2024-03-20
corso:
  - "[[Analisi Matematica II]]"
argomento: Criteri sulle Serie di Funzioni
tipologia: appunti
stato: "1"
capitolo: Successioni e Serie di Funzioni
---
- - -
*Ulteriore trasposizione teorica dalle serie numeriche alle serie di funzioni. Novità: l'M-test di Weierstraß.*
- - -
# 0. Voci Correlate
- [[Definizioni Relative alle Serie di Funzioni]]
- [[Teoremi Generali sulle Serie]]
# 1. Condizione Necessaria per la Convergenza di una Serie
#Teorema 
> [!thm] condizione necessaria per la convergenza di una serie di funzioni
> Sia $\sum_n f_n(x)$ una *serie di funzioni*. Sia questa *serie convergente uniformemente con somma* $s(x)$, allora il limite della successione delle *funzioni generali* $(f_n)_n$ è *convergente uniformemente* verso $O(x)=0$. 
^53090b

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^53090b]]
Dimostrazione completamente analoga alla dimostrazione della *condizione necessaria per la convergenza di una serie numerica* ([[Teoremi Generali sulle Serie#^79c14a]]). Infatti, basta considerare
$$
f_n(x)=s_n(x)-s_{n-1}(x) \implies \lim_n f_n(x)=0
$$
che è la tesi. $\blacksquare$

# 2. Criterio di Cauchy per la convergenza uniforme
#Teorema 
> [!thm] criterio di Cauchy per la convergenza uniforme di una serie di funzioni
> Sia $\sum_n f_n(x)$ una *serie di funzioni*.
> Sono equivalenti:
> $\ast)$ $\sum_n f_n(x)$ converge uniformemente su $E$ con somma $s(x)$
> *se e solo se*
> $\ast \ast )$
> $$
> \begin{gather}\forall \varepsilon>0, \exists \bar{n}: \forall n \in \mathbb{N}, \forall p > 0, \forall x \in E, \\n \geq \bar{n} \implies \left|f_n(x)+f_{n+1}(x)+\ldots+f_{n+p}(x) \right|\leq \varepsilon \end{gather}
> $$
^c8de7e

#Dimostrazione 
Omessa, dato che è completamente analoga alla sua controparte numerica ([[Teoremi Generali sulle Serie#^3f8079]]). $\blacksquare$

#Osservazione 
> [!rmk] l'utilità di questo teorema
> Questo teorema ci è utile in quanto se siamo in *grado* di maggiorare ogni *termine generale* con un *termine numerico* di cui ha una serie che *converge*, allora possiamo utilizzare il *teorema del confronto* per dire che la serie è *convergente*. Infatti, vedremo un teorema che sfrutta questa osservazione.

# 3. M-Test di Weierstraß
#Teorema 
> [!thm] M&M'S-test di Weierstraß
> Sia $\sum_n f_n(x)$ una *serie di funzioni*. Se esiste una *successione numerica* $(M_n)_n$, ovvero col termine generale $M_n \in \mathbb{R}$, tale che valga
> $$
> \left|f_n(x)\right| \leq M_n, \forall x \in E
> $$
> allora vale l'implicazione
> $$
> \sum^{+\infty}_{n \in \mathbb{N} }M_n < +\infty \implies \sum^{+\infty}_{n \in \mathbb{N}}f_n(x) < \stackrel{\text{unif.} }{+\infty}
> $$
> (ovvero se la serie di $(M_n)_n$ è *convergente* allora la serie di $(f_n)_n$ è *uniformemente convergente*)
^29de60

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^29de60]]
Supponiamo un punto fissato $x \in E$. Allora si ha per la disuguaglianza triangolare
$$
| f_ n(x)+f_{n+1}(x)+\ldots+f_{n+p}(x)| \leq \left||f_n(x)|+|f_{n+1}(x)|+\ldots+|f_{n+p}(x)|\right|
$$
per le ipotesi iniziali sappiamo che i termini generali $f_n(x)$ sono maggiorate dai termini generali $M_n$, dunque
$$
|f_n(x)+f_{n+1}(x)+\ldots+f_{n+p}(x)|\leq |M_n+M_{n+1}+\ldots+M_{n+p}|
$$
allora per il *criterio di Cauchy* ([[Criteri sulle Serie di Funzioni#^c8de7e]]) se $\sum_n f_n(x)$ è *uniformemente convergente* se e solo se $\sum_n M_n$ è *convergente*. $\blacksquare$

#Osservazione 
> [!rmk] questo teorema ci dice qualcosa di più
> Inoltre si nota che questo teorema ci dice che anche la *serie dei valori assoluti delle funzioni* $\sum_n |f_n(x)|$ è *uniformemente convergente*.

# 4. Criterio di Leibniz per le Serie di Funzioni
#Teorema 
> [!thm] criterio di Leibniz per la convergenza uniforme
> Sia $(f_n)_n$ una *serie di funzioni*, tali che $\forall n \in \mathbb{N}, \forall x \in E$ valgano le seguenti:
> - $f_n(x)>0$ (*la positività della funzione*)
> - $f_{n+1}(x) \leq f_n(x)$ (*la monotonia della funzione*)
> - $f_n(x)$ converge uniformemente verso $0$
> Allora la serie
> $$
> \sum_{n \in \mathbb{N} }^{+\infty} (-1)^n f_n(x)
> $$
> *converge uniformemente* con una stima dell'errore data da
> $$
> \left|s(x)-s_n(x)\right| \leq f_{n+1}(x)
> $$
^f6de73

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^f6de73]]
Questo teorema è la controparte numerica del *criterio di Leibniz per le serie numeriche a segno alternato* ([[Assoluta e Semplice Convergenza di una Serie#^945fc0]]). $\blacksquare$
