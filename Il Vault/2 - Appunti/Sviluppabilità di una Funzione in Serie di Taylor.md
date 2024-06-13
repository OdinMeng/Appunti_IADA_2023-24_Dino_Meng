---
data: 2024-03-22
corso:
  - "[[Analisi Matematica II]]"
argomento: Sviluppabilità di una Funzione in Serie di Taylor
tipologia: appunti
stato: "1"
capitolo: Successioni e Serie di Funzioni
---
- - -
*Definizione di serie sviluppabile in serie di Taylor centrata in $x_0$. Teorema di convergenza della serie di Taylor. Definizione di funzione analitica su un intervallo.*
- - -
# 0. Voci Correlate
- [[Definizione di Serie di Taylor]]
- [[Definizione di Serie di Potenze]]
- [[Formula di Taylor]]
# 1. Definizione di Sviluppabilità in Taylor
#Definizione 
> [!def] funzione sviluppabile in serie di Taylor centrata in un punto
> Una funzione $f \in \mathcal{C}^{\infty}$ si dice *"sviluppabile in serie di Taylor centrata in $x_0$"* se esiste un'*ampiezza* (numero) $h>0$ tale che $\forall x \in (x_0-h, x_0+h)$, valga
> $$
> f(x)=\sum^{+\infty}_{n=0}\frac{f^{(n)}(x_0)}{n!}(x-x_0)^n
> $$

# # 2. Definizione di Funzione Analitica
#Osservazione 
> [!rmk] ci sono funzioni non sviluppabili in Taylor
> Si chiede se *vale sempre* la seguente implicazione:
> $$
> f \in \mathcal{C}^{\infty} \implies f \text{ sviluppabile in Taylor}
> $$
> la risposta è *no*. Infatti, vediamo il seguente controesempio.
> 
> Definiamo la funzione
> $$
> f(x)=\begin{cases}e^{-\frac{1}{x^2} }, x \neq 0 \\ 0, x=0\end{cases}
> $$
> Notiamo che $f$ è *sempre continua e derivabile*. Infatti,
> $$
> f^{(k)}(x)=\begin{cases}R_n(x)e^{-\frac{1}{x^2} }, x \neq 0 \\ 0, x = 0\end{cases}
> $$
> dove $R_n$ è una qualsiasi *funzione razionale*, ottenuta applicando la *regola della catena per le derivate*.
> Adesso prendiamo la sua *serie di Taylor* centrata in $x_0=0$. (in particolare si ha una serie di *Taylor-MacLaurin*); si ha dunque
> $$
> \sum^{+\infty}_{n=0}\frac{f^{(n)}(x_0)}{n!}x^n = 0+\ldots+0=0
> $$
> Ma allora per un qualsiasi $h>0$, si avrà sempre che la serie di Taylor è la funzione nulla $f(x)=0$, che *non* è la funzione originaria (graficamente si ha la *figura 2.1.*).
> 
> Conclusione: solo una parte ristretta di funzioni $\mathcal{C}^{\infty}$ sono sviluppabili in Taylor; chiameremo queste funzioni *"analitiche"*.

**FIGURA 2.1.** (*Funzione non sviluppabile in Taylor*)
![[Pasted image 20240322223118.png|Funzione non sviluppabile in Taylor]]

#Definizione 
> [!def] funzione analitica su un intervallo
> Si dice che $f:(a,b)\longrightarrow \mathbb{R}$ è *analitica* se vale che per $\forall x_0 \in (a,b)$, $f$ è *sviluppabile in serie di Taylor centrato in* $x_0$.
> Vengono indicate come
> $$
> \mathcal{H}(]a,b[)
> $$

#Osservazione 
> [!rmk] conclusione dell'osservazione precedente
> Concludiamo l'osservazione precedente col seguente formalismo.
> $$
> \boxed{\mathcal{H}(]a,b[)\subset\mathcal{C}^{\infty}(]a,b[)}
> $$

# 3. Teorema di Convergenza della Serie di Taylor
#Osservazione 
> [!rmk] preambolo
> Adesso vediamo una *condizione sufficiente* per la *sviluppabilità in Serie di Taylor* di una funzione.

#Teorema 
> [!thm] di convergenza della serie di Taylor
> Sia $f:(x_0-h, x_0+h)\longrightarrow \mathbb{R}$, con $f \in \mathcal{C}^{\infty}$, e supponiamo che esista un $M>0$ tale che $\forall n$ valga
> $$
> \left|f^{(n)}(x)\right| \leq M \cdot \frac{n!}{h^n}
> $$
> allora si ha la *sviluppabilità in serie di Taylor* di $f$ in $x_0$. Ovvero,
> $$
> f(x)=\sum^{+\infty}_{n=0}\frac{f^{(n)}(x_0)}{n!}(x-x_0)^n
> $$
^58d462

#Corollario 
> [!cor] ulteriori condizioni per la convergenza uniforme
> Per avere anche la *convergenza uniforme*, bisogna prendere un $0<r<h$ e un compatto $[x_0-r, x_0+r]$.
^3a0739

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^58d462]]
Innanzitutto osserviamo che per l'ipotesi iniziale abbiamo, per un qualsiasi $x$ nel dominio
$$
\left|f^{(n+1)}(x)\right| \leq M \cdot \frac{(n+1)!}{h^{n+1}}
$$
Ora scriviamo lo scarto tra la somma e il resto $n+1$-esimo della serie; si ha che $\forall n \in \mathbb{N}$,
$$
|f(x)-s_{n+1}(x)|=|f(x)-p_{n,x_0}(x)|
$$
dove $p_{n,x_0}(x)$ è il *polinomio di Taylor* di ordine $n$-esimo centrato in $x_0$ ([[Formula di Taylor#^556164]]). Per la *formula di Taylor col resto di Lagrange* ([[Formula di Taylor#^9b9be7]]), esiste un $\xi \in (x_0,x)$ (oppure $(x, x_0)$) tale che
$$
\begin{align}
|f(x)-p_{n,x_0}(x)|&=\left|\frac{f^{(n+1)}(\xi)}{(n+1)!}(x-x_0)^{n+1}\right| \\ &\leq M \frac{(n+1)!}{h^{n+1} }\cdot \frac{|x-x_0|^{n+1}}{(n+1)!} = M \left(\frac{|x-x_0|}{h}\right)^{n+1}
\end{align}
$$
Adesso osserviamo che il termine
$$
q(x)=\frac{|x-x_0|}{h} \in (0, 1)
$$
(ovvero è limitata in $(0;1)$); di conseguenza si ha il limite
$$
\lim_n |f(x)-p_{n,x_0}(x)| \leq \lim_n M  \cdot q(x)^n = 0
$$
di conseguenza, vale che anche il limite dell'errore è nullo. Ovvero,
$$
\lim_n |f(x)-s_{n+1}(x)| = 0
$$
il ché dimostra che la serie è sviluppabile su Taylor, dal momento che l'errore diventa arbitrariamente piccolo. $\blacksquare$

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^3a0739]]
In questo caso basta osservare che
$$
x \in [x_0-r, x_0+r] \supset (x_0-h, x_0+h)
$$
quindi qualsiasi punto $x$ prendo, la sua distanza da $r$ sarà sempre più piccola della sua distanza da $h$. Ovvero, $|x-x_0|<h<r$
Ma allora se prendo l'estremo superiore dello scarto ho
$$
\sup_{x} \left|f(x)-s_{n+1}(x) \right| \leq M \left(\frac{r}{h}\right)^{n+1}
$$
ricordandoci che l'ultimo termine è limitato da
$$
0<\frac{r}{h}<1
$$
ho il limite dell'estremo superiore
$$
\lim_n \left(\sup_{0<|x-x_0|<r} \left|f(x)-s_{n+1}(x)\right|\right) =0 
$$
il ché prova la convergenza uniforme ([[Convergenza Puntuale e Uniforme per Successioni di Funzioni#^223541]]). $\blacksquare$

#Osservazione 
> [!rmk] condizione più generale ma restrittiva
> Osservare che, sebbene ho una condizione *molto "particolare"*, abbiamo comunque una condizione poco restrittiva. Infatti, ho il limite
> $$
> \lim_n \frac{n!}{h^n} = +\infty
> $$
> Quindi per controllare la *sviluppabilità di una serie in Taylor*, bisogna che una funzione non *"esploda in una maniera più incontrollata del limite limitante"*.
> 
> Infatti, spesso si verifica che esiste un $K>0$ tale che
> $$
> \forall n \in \mathbb{N}, \forall x \in (x_0-h, x_0+h), \left|f^{(n)}(x)\right| \leq K
> $$
> che è *sufficiente* per la *sviluppabilità di una serie in Taylor*; se il limite è finito, allora a maggior ragione è meno di infinito.

