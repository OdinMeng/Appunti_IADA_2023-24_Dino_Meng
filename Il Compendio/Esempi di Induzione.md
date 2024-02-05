---
data: 2023-10-04
corso: "[[Analisi Matematica I]]"
argomento: Esempi di Induzione
tipologia: appunti
stato: "1"
---
*Esempi sulle prove per induzione. Articolo creato ad-hoc per la quantità presente degli esempi, rendendo il file originario troppo pesante.*
- - -
# 1. Esempi di dimostrazione per induzione
## ESEMPIO 1.1. Aneddoto di Gauss.
Si racconta che quando il matematico *C. F. Gauss* frequentava le scuole elementari, il suo professore di matematica aveva dato un esercizio da fare in quanto punizione: ovvero quello di sommare tutti i numeri da $0$ a $100$; quindi tutti i numeri $0+1+2+\ldots+100$.
Alla sorpresa del professore e dei suoi compagni, Gauss riuscì, non solo a risolvere il problema quasi immediatamente consegnando la sua lavagna sulla cattedra, ma anche essere l'unico alunno ad aver dato la risposta corretta: $5050$.
Grazie alla sua intuizione, Gauss riuscì a ingegnare un metodo per calcolare quel numero con una velocità strabiliante: ovvero quella di determinare la somma da $0$ a $100$ come $A$, che è uguale alla somma da $100$ a $1$ (proprietà commutativa); Quindi sommando $A$ con sé stesso ma disposti in una maniera diversa (ovvero la prima con un criterio crescente, la seconda decrescente), ottiene $2A = 100(101) \iff A = \frac{100(101)}{2}$ ^d8e983

Generalizzando da questo aneddoto abbiamo la seguente proprietà:$$\mathcal{P}(n) = 0+1+2+\ldots+n = \frac{n(n+1)}{2}$$Ora vogliamo dimostrarla rigorosamente *per induzione*.
	**DIM.** 
		1. Caso base: verificare $\mathcal{P}(0)$; $$\mathcal{P}(0) : 0=\frac{0(1)}{2} = 0 \text{ OK}$$
		2. Ipotesi induttiva; supponendo che $\forall n, \mathcal{P}(n)$ è vera, allora anche $\mathcal{P}(n+1)$ è vera. $$\mathcal{P}(n): 0+1+\ldots+n = \frac{n(n+1)}{2}$$Avvolte è utile anche già "*prevedere*" dove vogliamo arrivare a partire da $\mathcal{P}(n)$, ovvero $\mathcal{P}(n+1)$. In questo caso si potrebbe anche utilizzare l'ipotesi induttiva, ovvero$$\begin{align}\mathcal{P}(n+1): 0+1+\ldots+n+(n+1)&= \frac{(n+1)(n+2)}{2}\\\mathcal{P}(n)+(n+1) &= \frac{(n+1)(n+2)}{2} \\ \frac{n(n+1)}{2}+(n+1) &= \ldots \\ (n+1)(\frac{n}{2}+1)&= \ldots \\ (n+1)(\frac{n+2}{2}) &= \ldots \\ \frac{(n+1)(n+2)}{2} &= \frac{(n+1)(n+2)}{2} \text{ OK}\end{align}$$
		3. Pertanto si verifica che i numeri che rendono $\mathcal{P}(n)$ vera sono tutti i numeri naturali $\mathbb{N}$ a partire da $0$.

## ESEMPIO 1.2.  Somma dei quadrati
Provare che per ogni $n \in \mathbb{N}$ vale $$P(n): 0+1+4+\ldots+n^2 = \frac{(n)(n+1)(2n+1)}{6}$$Anche qui possiamo usare l'induzione, dato che anche qui si tratta di una *proprietà* sui numeri naturali $\mathbb{N}$.
1. Caso base: $$\begin{align}P(0):& \ 0 \stackrel{?}{=}\frac{0(0+1)(2(0)+1)}{0} \\ &\ 0= 0 \text{ OK} \end{align}$$
2. Ipotesi induttiva: $$\begin{align}&P(n): 0+1+4+\ldots+n^2 = \frac{n(n+1)(2n+1)}{6} \\ &P(n+1): 0+1+4+\ldots+n^2+(n+1)^2 = \frac{(n+1)(n+2)(2(n+1)+1)}{6}\end{align}$$
3. Sviluppando $P(n+1)$, $$\begin{align}P(n+1): 0+1+4+\ldots+n^2+(n+1)^2 &= \frac{(n+1)(n+2)(2(n+1)+1)}{6} \\ P(n) + (n+1)^2 &= \ldots \\ \frac{n(n+1)(2n+1)}{6}+(n+1)^2 &= \ldots\\ (n+1)(\frac{n(2n+1)}{6}+(n+1))&= \ldots \\ \frac{(n+1)(n)(2n+1)+6(n+1)^2}{6}&= \frac{(n+1)(n+2)(2n+3)}{6} \\ \frac{(n+1)((n)(2n+1)+6n+6)}{6}&= \frac{(n+1)(n^2+7n+6)}{6} \\ (n+1)(2n^2+n+6n+6)&=(n+1)(n^2+n+6n+6) \\&\text{OK } \blacksquare\end{align}$$
## ESEMPIO 1.3. Disuguaglianza di Bernoulli.
Sia $a > -1$, $a \in \mathbb{R}$. Allora $\forall n \in \mathbb{N}$ vale la seguente: $$(1+a)^n \geq 1+na$$**DIM.** Sia $P(n): (1+a)^n \geq 1+na$. ^66c5ee
1. Verificare $P(0)$; $$P(0): (1+a)^1 \geq 1 \iff1 \geq 1 \text{ OK }\blacksquare$$
2. Supponendo che $P(n)$ sia vera, verificare $P(n) \implies P(n+1)$. $$\begin{align}P(n): & \ (1+a)^n \geq 1+na \\ &\ (1+a)^n(1+a) \geq (1+na)(1+a) \\ &\ (1+a)^{n+1} \geq 1+(n+1)a+na^2\end{align}$$Sapendo che $1+(n+1)a$ è sicuramente maggiore o uguale a $P(n+1)$ ovvero $1+(n+1)a$, in quanto $na^2$ è necessariamente positivo, allora consegue che $$P(n+1):(1+a)^{n+1} \geq 1+(n+1)a $$è vera, verificando $P(n) \implies P(n+1)$. $\blacksquare$
## ESEMPIO-ESERCIZIO 1.4. Disuguaglianza di Bernoulli incrementata.
**PROVARE CHE VALE LA PROPRIETA' $P(n): (1+a)^n \geq 1 + na + \frac{n(n-1)}{2}a^2$**, **OVE $a>0$ e $\forall n \geq 1$. ^815bb7
1. Provare $P(1)$; $$P(0) : 1+a \geq 1+a+0 \text{ OK}$$
2. Supponendo che $P(n)$ sia vera, provare che $P(n) \implies P(n+1)$ $$P(n) : (1+a)^n \geq 1+na
+\frac{n(n-1)}{2}a^2$$ed è utile "prevedere" $P(n+1)$, quindi $$P(n+1): (1+a)^{n+1} \geq 1 + (n+1)a + \frac{(n+1)(n)}{2}a^2$$
3. Ora prendiamo $P(n)$ e moltiplichiamo per $(1+a)$ da ambo le parti (che è possibile in quanto la relazione d'ordine $\geq$ è compatibile con $(1+a)$) $$\begin{align}P(n):&\ (1+a)^n(1+a) \geq(1+na+\frac{n(n-1)}{2}a^2)(1+a)\\ &\ (1+a)^{n+1} \geq (1+na+\frac{n(n-1)}{2}a^2)+(a+na^2+\frac{n(n+1)}{2}a^3) \\ &\ (1+a)^{n+1}\geq 1+(n+1)a+(\frac{n(n-1)}{2}+n)a^2+\ldots a^3\end{align}$$

4. Ora vogliamo dimostrare che il membro destro della disuguaglianza è necessariamente maggiore di $1 + (n+1)a + \frac{(n+1)(n)}{2}a^2$, rendendo per la *proprietà transitiva* $(1+a)^{n+1}$ anch'esso maggiore di $1 + (n+1)a + \frac{(n+1)(n)}{2}a^2$, verificando così l'implicazione. $$ \begin{align}1+(n+1)a+(\frac{n(n-1)}{2}+n)a^2+\ldots a^3 &\geq 1 + (n+1)a + \frac{(n+1)(n)}{2}a^2 \\ (\frac{n(n-1)+2n)}{2})a^2+\ldots a^3 &\geq\frac{(n+1)(n)}{2}a^2 \end{align}$$
   Dato che $\ldots a^3$ (parte omessa in quanto non è rilevante, dato che $n$ è sempre un numero positivo) è anch'essa sempre positiva in quanto $a > 0$, ora basta dimostrare che $$\begin{align}n(n-1)+2n &\geq (n+1)(n)\\n(n-1+2) &\geq(n+1)(n)\\n(n+1)&\geq n(n+1) \text{ OK } \blacksquare\end{align}$$
   5. Verificando così $P(n) \implies P(n+1)$, dato che da $P(n)$ si verifica $P(n+1)$. 
## ESEMPIO 1.5. Ridotta della serie geometrica.
Sia $a \neq 1$; allora con $\forall n \in \mathbb{N}$ si ha $$P(n): a^0+a^1+\ldots+a^n = \frac{a^{n+1}-1}{a-1}$$
**DIM.** ^7a9cd3
1. Dato che $n \in \mathbb{N}$, si può usare l'induzione; allora partiamo verificando $P(0)$;$$\begin{align}P(0): &\ a^0 = \frac{a^1-1}{a-1} \iff 1 = 1 \text{ OK} \end{align}$$
2. Ora supponendo $P(n)$, verifichiamo $P(n) \implies P(n+1)$. $$\begin{align}P(n):&\ a^0+a^1+\ldots+a^n = \frac{a^{n+1}-1}{a-1} \\&\ a^0+a^1+\ldots+a^n+a^{n+1} = \frac{a^{n+1}-1}{a-1}+a^{n+1}\\ P(n+1): &\ a^0+a^1+\ldots+a^{n+1} = \frac{a^{n+1}-1+a^{n+1}(a-1)}{a-1} \\ &\ \ldots = \frac{a^{n+1}-1+a^{(n+1)+1}-a^{n+1}}{a-1} \\ P(n+1):&\  \ldots= \frac{a^{(n+1)+1}-1}{a-1}\end{align}$$Da qui si vede che $P(n) \implies P(n+1)$ è vera.

## ESEMPIO 1.6.
**PROVARE CHE PER OGNI $n \geq 1$ VALE CHE IL NUMERO $n^3+5n$ E' DIVISIBILE PER 6.**
1. Provare $P(1)$; $$P(1): \exists k \in\mathbb{Z}\ | \ 1^3+5 = 6k\iff 6 = 6k; k=1 \text{ OK}$$
2. Provare che, supponendo $P(n)$, allora $P(n+1)$; $$\begin{align}P(n):&\  \exists k_1 | \ n^3+5n=6k_1 \\ P(n+1):&\ \exists k_2 | \ (n+1)^3+5(n+1) = 6k_2\\ &\ \ldots|\ n^3+3n^2+3n+1+5n+5 = 6k_2\\ &\ \ldots | \ (n^3+5n)+(3n^2+3n+6) = 6k_2 \\ &\ \ldots | \ 6k_1 + 3(n^2+n+2)= 6k_2 \\ &\ \ldots | \ 3(n^2+n+2) = 6(k_1-k_2) \\ &\ \ldots | \ n^2+n+2 = 2(k_1-k_2) \\ &\ \ldots | \ (n)(n+1) = 2(k_1-k_2-1)  \end{align}$$
3. Vediamo che il problema si riduce a dimostrare che $(n+1)(n)$ è *pari* (ovvero divisibile per $2$), il che è facile da dimostrare se consideriamo due casi per $(n+1)(n)$:
	1. Se $n$ è pari, ovvero della forma $2m$, allora $$(n+1)(n) \iff (2m+1)(2m) \iff 4m^2+2m \iff 2(2m^2+m)$$è pari in quanto l'espressione finale è comunque moltiplicata per due.
	2. Se $n$ è dispari, ovvero della forma $2m+1$, allora $$(n+1)(n) \iff (2m+2)(2m+1) = 2(m+1)(2m+1)$$anche qui è pari per lo stesso ragionamento di prima. $\blacksquare$
## ESEMPIO 1.7.
**PROVARE CHE PER OGNI $n \geq 1$ VALE CHE $n! \geq 2^{n-1}$**
1. Provare $P(1)$; $$\begin{align}P(1): 1! \geq 2^0 \iff 1 \geq 1 \text{ OK}\end{align}$$
2. Supponendo $P(n)$, provare $P(n) \implies P(n+1)$: $$\begin{align}P(n) : &\ n! \geq 2^{n-1} \\ &\ n!(n+1) \geq 2^{n-1}(n+1) \\ &\ (n+1)! \geq 2^{n-1}(n+1)\end{align}$$
3. Dato che $n \geq 1$, ne consegue che $n+1 \geq 2$; quindi possiamo scrivere $$2^{n-1}(n+1) \geq 2(2^{n-1}) = 2^n$$
4. Quindi per la proprietà transitiva della relazione $\geq$, si verifica che $$P(n+1): (n+1)! \geq 2^n$$
   Verificando così $P(n) \implies P(n+1) \blacksquare$.

## PROBLEMA 1.1.
**PROBLEMA.** *Disegniamo nel piano una retta e notiamo subito che questa retta suddivide il piano in 2 "regioni"; ora disegniamo 2 rette e vediamo che ora abbiamo 4 regioni; ora 3 rette e notiamo che possiamo avere al massimo 7 regioni.*
Se si desidera, si può visualizzare il problema con il grafico sottostante. Ora ci poniamo i seguenti problemi.
[GRAFICO DA FARE]
### TRACCIA 1.  (DA COMPLETARE)
Trovare una formula (o funzione, successione) che individui il numero delle regioni per $n$ rette.

**SOLUZIONE 1.** L'idea è la seguente.
Individuiamo una *retta* orizzontale,

Ora, avendo definito la *successione* della funzione delle regioni in $n$ $f_n$, possiamo usare un metodo simile a quello chiamato *"Ansatz"*, usato per risolvere le equazioni differenziali; ovvero congetturando una *soluzione generale*, poi per inserirla nella definizione di $f_n$, allora otteniamo la soluzione specifica $f(n)$.
Congetturiamo che $$f(n) = an^2+b^n+c$$
[ Questa parte è molto complicata da fare, quindi lo farò un weekend in chill; tanto in teoria non è proprio 100% del programma, eh ]
### TRACCIA 2.
Provare che le regioni individuate con $n$ rette sono al massimo $\frac{n^2+n}{2}+1$.

**OSS 1.1.1.** Si nota, a posteriori (o anche dimostrata sopra), che indicando $f_n$ il numero di regioni con $n$ rette, si ha $$f_{n+1} = f_n+(n+1)$$dove $f_1 = 2$.

**SOLUZIONE.** Si può dimostrare la formula $f(n) = \frac{n^2+n}{2}+1$ con il principio di induzione e anche grazie al suggerimento indicato sopra.
1. Provare $f(1)$; $$f(1): f_1 = \frac{1+1}{2}+1 \iff 2 = 2 \text{ OK}$$
2. Supponendo $f(n)$, provare $f(n+1)$; $$\begin{align}f(n):&\ f_n = \frac{n^2+n}{2}+1 \\ &\ f_n + (n+1) = \frac{n^2+n}{2} + 1+(n+1) \\ &\ f_{n+1} = \frac{n^2+n+2n+2}{2} +1  \\ &\ \ldots = \frac{n^2+n+2n+2}{2} +1 \\ &\ \ldots = \frac{n^2+3n+2}{2}+1 \\\ &\ \ldots = \frac{(n+1)^2+(n+1)}{2} +1 \end{align}$$
3. Quindi da $f(n)$ si ottiene $f(n+1)$, terminando così la dimostrazione. $\blacksquare$

# PROBLEMA 1.2.
(*Tratto dalla traccia di esame di Analisi Matematica I, data 01.02.2019, fila D*)
Sia $f(x) = \log(1-2x)$. Dimostrare *per induzione* che per $n \geq 1$, si ha 
$$
f^{(n)}(x)= -2^n(n-1)!(1-2x)^{-n}
$$
