---
data: 2024-03-23
corso:
  - "[[Analisi Matematica II]]"
argomento: Esempi di Serie di Taylor-MacLaurin
tipologia: appunti
stato: "1"
capitolo: Successioni e Serie di Funzioni
---
- - -
*Esempi di sviluppi di funzioni in Serie di Taylor. Funzione esponenziale $\exp$, trigonometriche $\sin$, $\cos$, $\sinh$, $\cosh$.*
- - -
# 0. Voci correlate
- [[Definizione di Serie di Taylor]]
- [[Sviluppabilità di una Funzione in Serie di Taylor]]
# 1. Funzione esponenziale
#Teorema 
> [!thm] sviluppo di Taylor-MacLaurin per la funzione esponenziale
> Sia $f: (-h, h)\longrightarrow \mathbb{R}$ con $f(x)=e^x$. Risulta che $f$ è *sviluppabile in serie di Taylor-MacLaurin* con $h>0$ qualsiasi e si ha
> $$
> e^x = \sum^{+\infty}_{n=0}\frac{x^n}{n!}
> $$
^897ce3

**DIMOSTRAZIONE** del [[#^897ce3]]
Verifichiamo che $e^x$ è *sviluppabile in serie di Taylor*; basta prendere $K=e^h$ ed effettuare la seguente maggiorazione
$$
\left|f^{(n)}(x)\right| = |e^x| \leq K
$$
quindi per il *teorema di convergenza* ([[Sviluppabilità di una Funzione in Serie di Taylor#^58d462]]) $e^x$ è *sviluppabile in serie di Taylor* per un $h$ qualsiasi. 
Poiché $f^{(n)}(0)$ rimane uguale a $e^0=1$, ho
$$
e^x = \sum^{+\infty}_{n=0}\frac{f^{(n)}(0)}{n!}x^n = \sum^{+\infty}_{n=0}\frac{1}{n!}x^n
$$
che è la tesi. $\blacksquare$

# 2. Funzioni Trigonometriche
#Teorema 
> [!thm] sviluppo di Taylor-MacLaurin per le funzioni trigonometriche
> Siano $f(x)=\sin x$ e $g(x)=\cos x$. Allora risulta che entrambi sono *sviluppabili in serie di Taylor* con $x_0=0$ e con $h>0$ qualsiasi. Risulta che
> $$
> \sin x = \sum^{+\infty}_{n=0}\frac{(-1)^n}{(2n+1)!}x^{2n+1}
> $$
> e
> $$
> \cos x = \sum^{+\infty}_{n=0}\frac{(-1)^n}{(2n)!}x^{2n}
> $$
^e39cc6

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^e39cc6]]
Si dimostra solo per $\sin x$. Si nota preliminarmente che le derivate oscillano per un numero finito per valore, in particolare
$$
\forall n \in \mathbb N,  \begin{cases}f^{(4n+1)}(x)=\cos x  \to \cos 0 = 1\\ f^{(4n+2)}(x)=-\sin x \to - \sin 0 = 0 \\ f^{(4n+3)}(x)=-\cos x \to -\cos 0 = -1\\ f^{(4n+0)}(x)=\sin x \to \sin 0 = 0\end{cases}
$$
Allora notiamo che sono sempre limitate per $K=1$ (provando la sviluppabilità in serie di Taylor) e in particolare si ha che i termini della serie si annullano per numeri dispari. Quindi si ha
$$
\sin x = \sum^{+\infty}_{n=0} \frac{(-1)^{2n+1}}{(2n+1)!}x^{2n+1}
$$
il ragionamento è analogo per $\cos x$. $\blacksquare$

#Teorema 
> [!thm] sviluppo di Taylor-MacLaurin per le funzioni trigonometriche iperboliche
> Siano $\sinh x$ e $\cosh x$ le *funzioni trigonometriche iperboliche*. Si ha che sono *sviluppabili in serie di Taylor* in $x_0$ con $h>0$ qualsiasi e risultano le somme
> $$
> \sinh x = \sum^{+\infty}_{n=0}\frac{1}{(2n+1)!}x^{2n+1}
> $$
> e 
> $$
> \cosh x = \sum^{+\infty}_{n=0}\frac{1}{(2n)!}x^{2n}
> $$
^f596ac

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^f596ac]]
Basta tenere conto che le funzioni trigonometriche iperboliche $\sinh$ e $\cosh$ vengono definite come
$$
\sinh x = \frac{e^x-e^{-x} }{2}
$$
e
$$
\cosh x = \frac{e^x + e^{-x} }{2}
$$
e usando lo *sviluppo di serie in Taylor* per la funzione $\exp$ otteniamo la tesi. $\blacksquare$
