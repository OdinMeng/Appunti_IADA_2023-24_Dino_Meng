---
data: 2023-11-20
corso: "[[Analisi Matematica I]]"
argomento: Proprietà delle derivate
tipologia: appunti
stato: "1"
---
*Proprietà fondamentali delle derivate: Continuità delle funzioni derivabili, derivata di operazione tra funzioni, derivata di funzione composta, derivata della funzione inversa.*
- - -
# 1. Proprietà fondamentali
## Continuità della funzione derivabile
#Teorema 
> [!thm] Teorema 1.1. (continuità delle funzioni derivabili)
> Sia $f: I \longrightarrow \mathbb{R}$, $I$ intervallo, $x_0 \in I$. 
> Sia $f$ *derivabile* in $x_0$ ([[Derivata e derivabilità#^6e7606]]).
> Allora $f$ è *continua* in $x_0$ ([[Definizione di continuità#^ddf65d]]). 
> $$\boxed{f \text{ derivabile} \implies f \text{ continua}} $$
^dac6dc

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 1.1.* ([[#^dac6dc]])
Intanto sappiamo che $I$ è un intervallo, quindi *tutti* i suoi punti all'interno ne sono *punti di accumulazione*: pertanto possiamo prendere $\lim x \to x_0$ per un qualsiasi $x_0 \in I$.
Ora dimostriamo che $f$ è *continua* usando il fatto che $f$ è *derivabile*:
$$\begin{align}f \text{ continua} &\iff \lim_{x \to x_0} f(x) = f(x_0) \\ &\iff \lim_{x \to x_0} f(x)-f(x_0)=0 \\ &\iff \lim_{x \to x_0}\underbrace{\frac{f(x)-f(x_0)}{x-x_0}}_{=f'(x) \in \mathbb{R}}\underbrace{(x-x_0)}_{x-x_0\to 0}\stackrel{?}= 0 \\ &\iff f'(x)0 \to 0=0 \ \blacksquare \end{align} $$

#Proposizione 
> [!prop] Proposizione 1.1. (la non derivabilità delle funzioni continue)
> Vale il viceversa del *teorema 1.1.* ([[#^dac6dc]])? La risposta è *no*, in quanto esistono controesempi di funzioni *continue* ma non derivabili (dunque negando l'implicazione $p \implies q$)
^e5ee1a

#Dimostrazione 
**DIMOSTRAZIONE** della *proposizione 1.1.* ([[#^e5ee1a]])
Per l'esempio di una funzione continua non derivabile rivolgersi a [[Esempi di derivate]].
## Derivata di operazioni tra funzioni
#Teorema 
> [!thm] Teorema 1.2. (derivata di operazioni tra funzioni)
> Siano $f, g: I \longrightarrow \mathbb{R}$ delle funzioni.
> Sia $x_0 \in I$.
> Allora $f \pm g$, $f \cdot g$, $\frac{f}{g}$ sono *derivabili*. 
> In particolare valgono le seguenti:
> $$ \begin{align} &i. (f\pm g)' = f'\pm g' \\ &ii. (fg)' = f'g + fg' \text{ (regola di Leibniz)} \\ &iii. \frac{f}{g} = \frac{f'g-fg'}{g^2} \end{align}$$
^fd716f

#Dimostrazione 
**DIMOSTRAZIONE** dei punti *i.*, *ii.*, *iii.* del *teorema 1.2.* ([[#^fd716f]])
i. Sia $R^{f+g}_{x_0}(x)$ il seguente:
$$\begin{align}R^{f+g}_{x_0}(x) &= \frac{f(x)+g(x)-f(x_0)-g(x_0)}{x-x_0} \\&= \frac{f(x)-f(x_0)}{x-x_0}+\frac{g(x)-g(x_0)}{x-x_0} \\ &= R^{f}_{x_0}(x) + R^g_{x_0}(x) \\ & \implies f'(x) + g'(x)\end{align}$$
Questo vale analogamente per la sottrazione.
ii. Sia $R^{fg}_{x_0}(x)$ il seguente:
$$\begin{align}R^{fg}_{x_0}(x) &= \frac{f(x)g(x)-f(x_0)g(x_0)}{x-x_0} \\ &= \frac{f(x)g(x)-f(x)g(x_0)+f(x)g(x_0)-f(x_0)g(x_0)}{x-x_0} \\ &= \frac{f(x)(g(x)-g(x_0))}{x-x_0} + \frac{g(x_0)(f(x)-f(x_0))}{x-x_0} \\ &= f(x)\frac{g(x)-g(x_0)}{x-x_0}+g(x_0)\frac{f(x)-f(x_0)}{x-x_0} \\ f\text{ continua} & \implies f(x_0)g'(x_0)+g(x_0)f'(x_0) \\ x \to x_0&\implies f(x)g'(x)+g(x)f'(x)\end{align} $$

iii. Sia $R^{\frac{f}{g}}_{x_0}$ il seguente:
$$\begin{align} R^{\frac{f}{g}}_{x_0}(x) &=  \frac{\frac{f(x)}{g(x)}-\frac{f(x_0)}{g(x_0)}}{x-x_0} \\ &= \frac{f(x)g(x_0)-f(x_0)g(x)}{g(x)g(x_0)} \cdot \frac{1}{x-x_0} \\ &= \frac{f(x)g(x_0)-f(g)g(x)+f(x)g(x)-f(x_0)g(x)}{x-x_0} \cdot \frac{1}{g(x)g(x_0)} \\ &= (-f(x)\frac{g(x)-g(x_0)}{x-x_0}+g(x)\frac{f(x)-f(x_0)}{x-x_0})\cdot \ldots \\ &= (g(x)f'(x_0)-f(x)g'(x_0) ) \cdot \frac{1}{g(x)g(x_0)} \\ f \text{ continua} &\implies \frac{f'(x)g(x)-f(x)g'(x)}{(g(x))^2} \ \blacksquare \end{align}$$
(*svolto la dimostrazione del punto iii. da me stesso per esercizio*)
# 2. Derivate di funzioni particolari
## Derivata della funzione composta
#Teorema 
> [!thm] Teorema 2.1. (derivata di funzione composta)
> Siano $f: I \longrightarrow J$, $g: J \longrightarrow \mathbb{R}$; $x_0 \in I$, $f(x_0)=y_0 \in J$.
> Sia $f$ derivabile in $x_0$, $g$ derivabile in $f(x_0)$.
> Allora $g \circ f$ è *derivabile* in $x_0$ e vale che
> $$\boxed{(g \circ f)'(x_0) = g'(f(x_0))\cdot f'(x_0)} $$
^250330

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 2.1.* ([[#^250330]])
*Nota: la prima parte della dimostrazione sarà l'idea della dimostrazione per cui vogliamo "orientare" la dimostrazione; la seconda parte sarà la dimostrazione vera e propria, anche se leggermente artificiale e forzata.*
L'idea della dimostrazione consiste nella seguente:
$$\begin{align} R^{g \circ f}_{x_0} (x) &= \frac{g(f(x))-g(f(x_0))}{x-x_0} \\ &= \frac{g(f(x))-g(f(x_0))}{f(x)-f(x_0)}\cdot \frac{f(x)-f(x_0)}{x-x_0} \\ &= g'(f(x))\cdot f'(x_0) \\ &\implies g'(f(x)) \cdot f'(x) \end{align}$$
Tuttavia c'è un problema: in uno dei passaggi moltiplico la frazione per $\frac{f(x)-f(x_0)}{f(x)-f(x_0)}$, che è equivalente a 1. Tuttavia se ci troviamo nel caso in cui $f(x)=f(x_0)$, avremmo un problema in quanto la frazione precedentemente definita non sarebbe più definita.
Allora per evitare questo problema creiamo, in una maniera *"artificiale"*, una funzione continua che ci permette di evitare questo problema.
Sia
$$H(y) = \begin{cases}\frac{g(y)-g(f(x_0))}{y-f(x_0)} \text{ se }y \neq f(x_0) \\ g'(f(x_0))  \text{ se }y = f(x_0) \end{cases} $$
Trovo che $H$ è continua in $f(x_0)$, in quanto per ipotesi $g$ è *derivabile* in $f(x_0)$. 
Inoltre posso verificare che vale la seguente relazione:
$$R^{g \circ f}_{x_0}(x) = H(f(x)) \cdot R^f_{x_0}(x) $$
In particolare per $f(x) = f(x_0)$ abbiamo
$$\begin{align}R^{g \circ f}_{x_0}(x) &= H(f(x_0)) \cdot R^f_{x_0}(x) \\ &\iff \\ \frac{g(f(x_0))-g(f(x_0))}{x-x_0} &= g'(f(x_0))\frac{f(x_0)-f(x_0)}{x-x_0} \\ 0&=0  \end{align}$$
A questo punto prendendo i rispettivi limiti, ottengo
$$(g \circ f)' = \lim_{x \to x_0}H(f(x)) \cdot R^f_{x_0}(x) = g'(f(x_0)) \cdot f'(x_0)  = g'(f(x)) \cdot f'(x) \ \blacksquare$$
## Derivata della funzione inversa
#Teorema
> [!thm] Teorema 2.2. (derivata della funzione inversa)
> Sia $f: I \longrightarrow J$ una funzione *biiettiva* ([[Funzioni#^d193b2]]), dunque *invertibile* ([[Funzioni#^7b369f]]); sia $f$ *derivabile* in $x_0$ con $f'(x) \neq 0$.
> Allora $f^{-1}(x)$ è *derivabile* in $x_0$ e si ha
> $$(f^{-1})'(f(x)) = \frac{1}{f'(x)} $$
^97198c

#Osservazione 
> [!oss] Osservazione 2.2. (interpretazione geometrica del teorema 2.2.)
Anche questo teorema ha un suo significato geometrico: infatti se prendo la funzione originale, la inverto prendendo la sua simmetrica e scambiando le assi, allora prendendo lo stesso punto mi accorgo che la sua *tangente* esiste ed è proprio la *inversa* di quella originale.

**FIGURA 2.2.** (*Interpretazione geometrica della derivata della funzione inversa*)
![[Pasted image 20231122203757.png]]


**DIMOSTRAZIONE** del *teorema 2.2.* ([[#^97198c]])
Si tratta semplicemente (con dei trucchetti) di calcolare il rapporto incrementale $R^{f^{-1}}_{f(x_0)}(y)$.
$$\begin{align}R^{f^{-1}}_{f(x_0)}(y) &= \frac{f^{-1}(y)-f^{-1}(f(x_0))}{y-f(x_0)} \\ &= \frac{f^{-1}(y)-x_0}{y-f(x_0)} \\ &\implies \lim_{y \to f(x_0)}\frac{f^{-1}(y)-x_0}{y-f(x_0)}\\ \begin{cases} x=f^{-1}(y) \\ y= f(x)\\ x \to x_0\end{cases}&\implies \lim_{x \to x_0} \frac{x-x_0}{f(x)-f(x_0)} \\ &= \frac{1}{R^{f}_{x_0}(x)} \ \blacksquare\end{align}$$
