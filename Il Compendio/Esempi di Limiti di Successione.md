---
data: 2023-11-03
corso: "[[Analisi Matematica I]]"
argomento: Esempi di Limiti di Successione
tipologia: appunti
stato: "0"
---
*Alcuni esempi di limiti di successione, in particolare quelle notevoli*
- - -
# 0. Prerequisiti
Ovviamente questo capitolo serve la conoscenza di [[Limite di Successione]]. 
Inoltre è opportuno tenere a mente alcuni risultati di [[Assiomi di Peano, il principio di induzione]], in particolare [[Esempi di Induzione]]
# 1. Limiti notevoli (per successioni)
## Esponenziale a alla n
**ESEMPIO 1.1.** Sia $a > 1$; considero il limite della successione $$\lim_n a^n; \text{ovvero }a_n = a^n$$
Procediamo prima per *casistica*:
Se $a=2$, il limite *diverge* per $+\infty$: $$\lim_n 2^n = +\infty$$Infatti se ci ricordiamo che $2^n \geq n, \forall n \in \mathbb{N}$, allora ho $$\lim_n 2^n \geq \lim_n n = +\infty$$Allora per il *teorema del confronto* ([[Teoremi sui Limiti di Funzione]]), ho $$\lim_n 2^n = +\infty$$
Stesso discorso per $a=1,0001$.
Allora *generalizzo* scrivendo $$\lim_n a^n = +\infty, \forall a>0$$
Usando la *disuguaglianza di Bernoulli* ([[Esempi di Induzione]], **ESEMPIO 1.3.**) che enuncia il seguente: $$(1+\rho)^n\geq 1+\rho n$$Allora ponendo $a= 1+\rho$, ho $$\lim_{n}a^n \geq \lim_{n}(1+\rho n)$$E calcolando la seconda, ottengo $$\lim_n(1+\rho n) = 1+\rho\lim_{n}n = +\infty$$
Pertanto, per il *teorema del confronto* $$\lim_{n} a^n = +\infty$$
## Esponenziale a alla n diviso per n
**ESEMPIO 1.2.** Considero un caso analogo di quello precedente. $$\lim_n\frac{a^n}{n}$$Qui basta usare la *disuguaglianza di Bernoulli incrementata* ([[Esempi di Induzione]], **ESEMPIO 1.4.**): ovvero $$(1+\rho)^n \geq 1+ \rho n+ \frac{n(n-1)}{2}\rho^2$$e dividendo da ambo le parti per $n$, ottengo $$\frac{(1+\rho)^n}{n}\geq \frac{1}{n}+\rho+\frac{n-1}{2}\rho^2$$e considerando che la seconda espressione tende a $+\infty$, visto che $$\frac{1}{n} \to 0; \rho \to n; \frac{n-1}{2}\rho^2 \to +\infty$$allora ho $$\lim_n \frac{a^n}{n} = +\infty$$
## Radice n di a
**ESEMPIO 1.3.** Ora considero una nuova funzione: $$\lim_n \sqrt[n]{a}, \forall a >1$$
Qui basta osservare il grafico della funzione *radice* ([[Funzioni di potenza, radice e valore assoluto]]), che è la *funzione potenza* *"capovolta"*. 
![[Pasted image 20231103165110.png]]
Possiamo quindi congetturare che $l = 1$ (ovvero che la successione è *convergente* a $1$).
Quindi lo dimostriamo:
Supponendo $\varepsilon >0$ e considerando $(1+\varepsilon)^n$, sappiamo che $$\lim_n(1+\varepsilon)^n = +\infty$$Allora se $a>1$ avrò che $$\exists \bar{n}: n>\bar{n} \implies (1+\varepsilon)^n > a \iff (1+\varepsilon) > \sqrt[n]{a}$$Ora rileggiamo l'*espressione iniziale* $\lim_n \sqrt[n]{a}$, $$\begin{gather}\forall \varepsilon >0, \exists \bar{n} > 0: \forall n, \\ n> \bar{n} \implies 1<\sqrt[n]{a} <1+\varepsilon \\ \implies 1-\varepsilon < \sqrt[n]{a} < 1+\varepsilon \\ \implies |\sqrt[n]{a}-1|<\varepsilon\end{gather} \ \blacksquare$$
Con un conto analogo posso dimostrare che $$\lim_n \sqrt[n]{n} = 1$$(*Per esercizio*)

## Limite fondamentale $(1+\frac{1}{n})^n$
**ESEMPIO 1.4.** Consideriamo uno dei *limiti* più importanti dell'*analisi matematica*; $$\lim_n(1+\frac{1}{n})^n$$Non è immediato capire se questo limite *converge* o *diverge*, in quanto:
- Da un lato sappiamo che $\forall \varepsilon >0, (1+\varepsilon)^n \to +\infty$.
- Dall'altro sappiamo che $(1)^n \to 1$.
*Conclusione.* Questo limite *esiste* e *converge* ad un numero reale che chiameremo $e$, e si trova tra $2$ e $3$; $$2 < e < 3$$
**DIMOSTRAZIONE.** Uso il teorema sulle *successioni monotone e limitate* per dimostrare che innanzitutto il limite *converge*: si tratta di provare che $(1+\frac{1}{n})^n$ è sia monotona che limitata.
1. Suppongo che $$\forall n, 2\leq(1+\frac{1}{n})^n \leq 3$$
   Ora uso il *teorema del binomio* ([[Coefficiente Binomiale]], **TEOREMA 1.**) per sviluppare $(1+\frac{1}{n})^n$. $$\begin{align}(1+\frac{1}{n})^n &= \sum_{j=0}^n \binom{n}{j}1^{n-j}(\frac{1}{n})^j \\ &= \binom{n}{0}\frac{1}{n^0}+\binom{n}1{}\frac{1}{n^1}+\binom{n}{2}\frac{1}{n^2}+\ldots+\binom{n}{n}\frac{1}{n^n} \\ &= 1+n\frac{1}{n}+\frac{n(n-1)}{2!}\frac{1}{n^2}+\ldots+\frac{n(n-1)\ldots(n-(n-1))}{n!}\frac{1}{n^n}\\ &= 2+\frac{1}{2!}\frac{n-1}{n}+\frac{1}{3!}\frac{n-1}{n}\frac{n-2}{n}+\ldots+\frac{1}{n!}\frac{n-1}{n}\ldots\frac{n-(n-1)}{n}\end{align}$$Ora considerando l'ultima espressione, abbiamo che ogni *"secondo membro"* (ovvero dove stanno tutti i quozienti divisi per $n$) è minore o uguale a $1$; infatti $$\forall j\geq0, \frac{n-j}{n}\leq 1$$allora posso *"maggiorare"* questa con la somma dei *"primi membri"* (ovvero dove stanno tutti i fattoriali) $$(1+\frac{1}{n})^n \leq 1+1+\frac{1}{2!} + \frac{1}{3!}+\ldots +\frac{1}{n!}$$Ora se ricordo che $n! \geq 2^{n-1}$, posso *"minorare"* quest'ultima con $$(1+\frac{1}{n})^n \leq1+\frac{1}{2^0}+\frac{1}{2^1}+\frac{1}{2^2}+\ldots+\frac{1}{2^{n-1}}$$Ora se prendo in considerazione tutti i valori da $\frac{1}{2^0}$ in poi, mi accorgo che ho una serie geometrica, che converge esattamente a questo valore ([[Esempi di Induzione]], **ESEMPIO 1.5.**): $$\frac{1-q^n}{1-q} \implies \sum_{i=0}^n(\frac{1}{2})^n = 2$$Quindi alla fine ottengo $$2\leq(1+\frac{1}{n})^n\leq1+2, \forall n$$Inoltre abbiamo aggiunto che il valore è maggiore di $2$ in quanto ho comunque il numero $2$ aggiunto a dei numeri piccoli (vedere lo sviluppo binomiale all'inizio).
2. Ora voglio dimostrare che $$\forall n, (1+\frac{1}{n})^n \leq (1+\frac{1}{n+1})^{n+1}$$
   Uso lo stesso sviluppo binomiale di *1.*; $$\text{i. }(1+\frac{1}{n})^n = 2+\frac{1}{2!}(1-\frac{1}{n})+\ldots+\frac{1}{n!}(1-\frac{1}{n})\ldots(1-\frac{n-1}{n})$$e $$\text{ii. }(1+\frac{1}{n+1})^{n+1} = 2+\frac{1}{2!}(1-\frac{1}{n+1})+\ldots+\frac{1}{n!}(1-\frac{1}{n+1})\ldots(1-\frac{n}{n+1})$$e confrontando *ogni* termine della secondo sviluppo, scopriamo che ogni termine della *ii.* è maggiore o uguale ad ogni termine della *i.*. Pertanto è vera la tesi, ovvero che $(1+\frac{1}{n})^n$ è monotona crescente. $\blacksquare$
Infine indico il valore per cui il limite converge con $$\lim_n(1+\frac{1}{n})^n = e$$e si chiama **costante di Eulero**, oppure **costante di Nepero**.