---
data: 2023-11-30
corso: "[[Analisi Matematica I]]"
argomento: Formula di Taylor
tipologia: appunti
stato: "1"
---
*Formula di Taylor: osservazione preliminare, lemma di Peano, teorema di Taylor col resto di Peano e dimostrazione. Esempi.*
- - -
# 0. L'idea della formula di Taylor
#Osservazione 
> [!oss] Osservazione 0.a. (idea del concetto) 
> Se $f$ è *derivabile* ([[Derivata e derivabilità#^6e7606]]) in $x_0$, allora esiste la *tangente* al grafico nel punto $x_0$; infatti questa viene descritta come
> $$r: y = f'(x_0)(x-x_0)+f(x_0) $$
> Se ora *"ingrandisco"* questo grafico della funzione vicino al punto $(x_0, f(x_0))$, si troverebbe che stiamo *"linearizzando"* la funzione $f$ come la *tangente* $r$: una curva qualsiasi si *"trasforma"* in una linea, una retta lineare; l'idea viene raffigurata nella *figura 0.a.*
> Ora ci chiediamo il seguente: se $f$ fosse *derivabile* fino al grado $n$, possiamo costruire un *polinomio* che *"trasforma"* $f$ in un polinomio? La risposta è sì, con la *formula di Taylor*.
> - - -
> Si svolgono operazioni simili anche nel *campo della fisica*, ad esempio con lo *studio del movimento* del pendolo: per studiarlo bisognerebbe studiare l'equazione differenziale
> $$\sin x = \ddot x$$
> (dove $\ddot x$ indica la *seconda derivata* della legge oraria $x(t)$; notazione di Newton)
> Però è difficile esprimere la soluzione di quest'equazione differenziale in *termini di funzioni elementari*: pertanto è necessario trovare una buona *"approssimazione"*, in particolare per *"angoli piccoli"* (ovvero vicini a $0$). Trasformando $\sin$ nella retta tangente nel punto $x_0=0$, si avrebbe
> $$\sin x  \sim \cos{x_0}(x-x_0) + \sin x_0 = \cos(0)(x) + \sin(0) = x$$
> Ovvero, ponendo
> $$\sin x = x$$
> Si avrebbe la nuova equazione differenziale
> $$x = \ddot x$$
> che è più *"semplice"* da risolvere.

**FIGURA 0.a.** (*La linearizzazione della funzione*)
![[Pasted image 20231130174308.png]]

# 1. Lemma di Peano e di Lagrange
## Lemma di Peano
#Lemma 
> [!lem] Lemma 1.1. (di Peano)
> Sia $f: I \longrightarrow \mathbb{R}$ e $x_0 \in I$.
> Sia inoltre $f$ *derivabile* ([[Derivata e derivabilità#^12c1df]]) fino all'ordine $n$ nell'intervallo $I$.
> Supponiamo che la *derivata di ogni ordine in* $x_0$ sia nullo;
> $$f(x_0) =0; f'(x_0)=0, \ldots, f^{(n)}(x_0) = 0$$
> Allora si verifica il seguente limite
> $$\lim_{x \to x_0}\frac{f(x)}{(x-x_0)^n}=0$$
^0fe338

#Dimostrazione 
**DIMOSTRAZIONE** del *lemma di Peano* ([[#^0fe338]])
Per verificare il *lemma di Peano* basta calcolare il *limite della tesi*, ovvero
$$\lim_{x \to x_0}\frac{f(x)}{(x-x_0)^n}$$
Allora, dato che sia $f(x)$ che $(x-x_0)^n$ sono *continue*, possiamo semplicemente procedere a sostituire con $x=x_0$. Però questo ci porta ad una *forma indeterminata* del tipo $\frac{0}{0}$.
A questo punto uso il *teorema di de L'Hôpital* ([[Teorema di De l'Hôpital#^67a7cd]]):
$$ \lim_{x \to x_0}\frac{f(x)}{(x-x_0)^n} \stackrel{H}\impliedby \lim_{x \to x_0}\frac{f'(x)}{n(x-x_0)^{n-1}}$$
Quindi calcoliamo il *"nuovo limite"*; però abbiamo di nuovo una situazione $\frac{0}{0}$! Allora applico *de L'Hôpital* una seconda volta! Però anche questa è indeterminata; allora la applico $n-1$ volte, ovvero fino a quando ottengo il limite
$$\lim_{x \to x_0}\frac{f(x)}{(x-x_0)^n} \stackrel{H}\impliedby \ldots \stackrel{H}\impliedby \lim_{x \to x_0}\frac{f^{(n-1)}(x)}{n\cdot \ldots \cdot 2 (x-x_0)^{1}}$$
Adesso considero quest'ultimo limite come
$$\lim_{x \to x_0}\frac{f^{(n-1)}(x)}{n\cdot \ldots \cdot 2 (x-x_0)^{1}} = \lim_{x \to x_0}\frac{1}{n!} \frac{f^{(n-1)}(x)-f^{(n-1)}(x_0)}{x-x_0} = \frac{1}{n}\lim_{x \to x_0}R^{f^{(n-1)}}_{x_0}(x)$$
Notiamo che il *limite* del rapporto incrementale è semplicemente la *derivata* della funzione (per definizione): allora, considerando che $f$ è *derivabile* fino all'$n$-esimo ordine, infine abbiamo
$$\frac{1}{n!}f^{(n)}(x_0) = \boxed{0} \ \blacksquare$$

## Lemma di Lagrange
#Lemma 
> [!lem] Lemma 1.2. (di Lagrange)
> Sia $f: I \longrightarrow \mathbb{R}$, *derivabile* fino all'ordine $n+1$ (ovvero $f \in \mathcal{C}^{n+1}$).
> Sia $x_0 \in I$ e la sua immagine nulla per tutte le sue derivate; ovvero
> $$f(x_0) = f'(x_0) = f''(x_0) = \ldots = f^{(n)}(x_0) = 0$$
> Allora, si verifica il seguente:
> $$\begin{gather}\forall x \in I\{x_0\}, \exists \xi \in (x_0, x) \text{ oppure } (x, x_0): \\ \frac{f(x)}{(x-x_0)^{n+1}} = \frac{f^{(n+1)}(\xi)}{(n+1)!}\end{gather}$$
^39ee3b

#Dimostrazione 
**DIMOSTRAZIONE** del *lemma di Lagrange* ([[#^39ee3b]])
Posso partire *"riscrivendo"* l'equazione
$$\frac{f(x)-f(x_0)}{(x-x_0)^{n+1}-(x_0-x_0)^{n+1}}$$
Questa è lecita in quanto sto semplicemente aggiungendo $0$ ad entrambi i termini: infatti per ipotesi $f(x_0) = 0$ e ovviamente $(x_0-x_0)=0$.
Allora considerando la funzione 
$$g(x) = (x-x_0)^{n+1}$$
Osservandola noto che questa *non* si annulla mai fuori dall'intervallo (escludendo infatti $x_0$), ed è pure *derivabile* fino al grado $n+1$.
Ma allora posso usare il *teorema di Cauchy* ([[Teorema di Cauchy#^0c9255]]) su questa espressione: allora ho
$$\exists \xi_1 \in (x, x_0): \frac{f(x)-f(x_0)}{(x-x_0)^{n+1}-(x_0-x_0)^{n+1}} = \frac{f'(\xi_1)}{g'(\xi_1)} = \frac{f'(\xi_1)}{(n+1)(\xi_1-x_0)^{n}}$$
Ma allora posso ripetere questa procedura con quest'ultima espressione, ripetendo lo stesso *"trucchetto"*: allora alla seconda iterazione ho
$$\frac{f'(\xi_1)}{(n+1)(\xi_1-x_0)^n} = \frac{f''(\xi_2)}{(n+1)(n)(\xi_2-x_0)^{n-1}}, \xi_2 \in (x, \xi_1)$$
Ripetendo questa procedura e fermandomi fino al punto per cui ho applicato Cauchy $n$ volte:
$$\frac{f^{(n)}(\xi_n)}{(n+1)!(\xi_n-x_0)}, x < \xi_n < \xi_{n-1} < \ldots < \xi_1 < x_0$$
Ma mi accorgo che ho un'espressione del tipo
$$\ldots \cdot \frac{f^{(n)}(\xi_n)}{\xi_n-x_0}$$
Quindi posso usare ora il *teorema di Lagrange* ([[Teorema di Lagrange#^ef03c2]]), ottenendo così alla fine
$$\exists \xi_1, \xi_2, \ldots, \xi_{n+1}: \frac{f(x)}{(x-x_0)^{n+1}} = \frac{f^{(n+1)}(\xi_{n+1})}{(n+1)!}$$
Che è la tesi del teorema. $\blacksquare$
# 2. Formula di Taylor col resto di Peano/Lagrange
#Definizione 
> [!def] Definizione 2.1. 
> Per *compattare* la nostra scrittura nei seguenti enunciati, chiamiamo il *polinomio di Taylor* come il *"polinomio principale"* che compariranno nelle tesi dei teoremi. Ovvero
> $$T_n(f, x_0, x) = f(x_0)+f'(x_0)(x-x_0)^1+ \ldots + \frac{f^{(n)}(x_0)}{n!}(x-x_0)^n$$

^556164

## Formula di Taylor col resto di Peano
#Teorema 
> [!thm] Teorema 2.1. (di Taylor col resto di Peano)
> Sia $g: I \longrightarrow \mathbb{R}$, $I$ *intervallo*, $x_0 \in I$.
> Supponiamo $g$ *derivabile* fino all'ordine $n$; ovvero $g \in \mathcal{C}^n$
> Allora, per ogni punto dell'intervallo *escluso* il punto $x_0$, vale il seguente:
> $$\begin{gather}\forall x \in I \diagdown \{x_0\} \\ \boxed{g(x) = g(x_0)+g'(x_0)(x-x_0)^1+ \ldots + \frac{g^{(n)}(x_0)}{n!}(x-x_0)^n + r(x_0,x)} \end{gather}$$
> dove $r_n(x_0, x)$ è il *resto di Peano*; ovvero $r(x_0, x) = g(x) - (\ldots)$ e ha la speciale proprietà per cui
> $$\lim_{x \to x_0}\frac{r_n(x_0, x)}{(x-x_0)^n} = 0$$
> ovvero avvicinandosi al punto $x_0$ il *resto* crolla a $0$.
^947c8a

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema di Taylor col resto di Peano* ([[#^947c8a]])
Voglio dimostrare che il *limite* della tesi effettivamente vale; ovvero
$$\lim_{x \to x_0}\frac{r_n(x_0, x)}{(x-x_0)^n} = 0$$
allora definisco $f$ come il *resto*
$$f(x)=r_n(x_0, x) = g(x) - T_n(g, x_0, x)$$
ovvero
$$f(x)=r_n(x_0, x) = g(x) - (g(x_0)+ g'(x_0)(x-x_0)+\ldots+g^{(n)}(x_0)(x-x_0)^n)$$
Inoltre sappiamo che $f$ è *derivabile* fino all'ordine $n$, dato che si tratta di due *funzioni derivabili fino all'ordine* $n$. Infatti $g$ lo è *per ipotesi* e un polinomio qualsiasi è *derivabile* per qualsiasi ordine.
Allora iniziamo a derivare $f$.
$$\begin{align}f'(x) &= g'(x) -0 - g'(x_0) - 2\frac{g''(x_0)}{2!}(x-x_0) - \ldots - n\frac{g^{(n)}(x_0)}{n!}(x-x_0)^{n-1} \\ f'(x_0) &= g'(x_0) - 0 - g'(x_0)-0-\ldots-0 = 0\end{align}$$
Ora prendiamo la sua *seconda derivata*:
$$\begin{align} f''(x) &= g''(x) - 0 - 0 -g''(x_0) - 0 - \ldots - (n)(n-1) \frac{g^{(n)}(x_0)}{n!}(x-x_0)^{n-2} \\ f''(x_0)&=g''(x_0) - g''(x_0) - 0 - \ldots - 0 = 0\end{align}$$
Mi accorgo che per ogni $n \in \mathbb{N}$ vale che
$$f^{(n)}(x_0) = 0$$
(che è dimostrabile *per induzione* ([[Assiomi di Peano, il principio di induzione#^76b850]]))
Allora per il *lemma di Peano* ([[#^0fe338]]) vale che
$$\lim_{x \to x_0}\frac{f(x)}{(x-x_0)^n} = \boxed{\lim_{x \to x_0}\frac{r_n(x, x_0)}{(x-x_0)^n} = 0} \ \blacksquare$$

## Formula di Taylor col resto di Lagrange
#Teorema 
> [!thm] Teorema 2.2. (di Taylor col resto di Lagrange)
> Sia $f: I \longrightarrow \mathbb{R}$, $I$ intervallo e $x_0 \in I$.
> Sia $f$ *derivabile fino all'ordine* $n+1$.
> Allora vale che
> $$\begin{gather}\forall x \in I\{x_0\}, \exists \xi \in ]x_0, x[ \text{ oppure }]x, x_0[ \text{ t.c.}\\ \boxed{f(x) = T_n(f, x_0, x) + \frac{f^{(n+1)}(\xi)}{(n+1)!}(x-x_0)^{n+1}}\end{gather}$$
> Dove il secondo membro della soma si chiama *resto nella forma di Lagrange*.
^9b9be7

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 2.2.* ([[#^9b9be7]])
Vediamo che $f$ è *derivabile* fino all'ordine $n+1$.
Allora, scrivendo $g$ come la funzione
$$g(x) = f(x)-T_n(f, x_0, x)$$
questa è anche *derivabile* fino all'ordine $n+1$-esimo.
Allora prima di tutto *"calcoliamo"* $g(x_0)$;
$$g(x_0) = f(x_0) - f(x_0) = 0$$
Ora calcoliamo la *derivata* $g'(x)$;
$$g'(x) = f'(x) -[0+f'(x_0)+\frac{f''(x_0)}{2!}2(x-x_0)+\ldots+\frac{f^{(n)}(x_0)}{x}(n)(x-x_0)^{(n-1)}]$$
Allora calcolandola in $x_0$ si ha
$$g'(x_0) = f'(x_0) -0-f'(x_0) - \ldots \cdot 0 - \ldots - \ldots \cdot 0 = 0$$
Infatti per ogni *"termine"* che presenta il *"binomio"* $x-x_0$ vengono annullate.
Facendo il conto si nota che
$$g(x_0) = g'(x_0) = \ldots = g^{(n)}(x_0) = 0$$
Ma allora per il *lemma di Lagrange* ([[#^39ee3b]]),
$$g(x) = \frac{g^{(n+1)}(\xi)}{(n+1)!}(x-x_0)^{n+1}$$
Però osserviamo che la *derivata* $n+1$-esima di $g$ annulla la *"seconda componente"* (ovvero il polinomio di Taylor), in quanto la $n+1$-esima derivata di un polinomio di grado $n$ è sempre nulla.
Pertanto questa è equivalente a
$$g(x) = \frac{f^{(n+1)}(\xi)}{(n+1)!}(x-x_0)^{n+1}$$
Allora si ottiene alla fine
$$\begin{align}g(x) = f(x)-T_n(f, x_0, x) \implies f(x) &= T_n(f, x_0, x) + g(x) \\ &= T_n(f, x_0, x) + \frac{f^{(n+1)}(\xi)}{(n+1)!}(x-x_0)^{n+1}\end{align}$$
che è la tesi. $\blacksquare$
# 3. Esempio dell'esponenziale
Consideriamo un esempio celebre della *formula di Taylor col resto di Peano* di una funzione.

#Esempio 
> [!ex] Esempio 3.1. (funzione esponenziale in termini di Taylor)
> Sia $\exp x = e^x$. Pongo $x_0 = 0$. Voglio trovare la *formula di Taylor* per $\exp$ e $x_0=0$.
> Prima di tutto considero che
> $$(e^x)^{(n)} = e^x, \forall n \in \mathbb{N}$$
> Pertanto
> $$(e^x)^{(n)}(x_0) = 1, \forall n$$
> Allora per *Taylor*, si ha
> $$e^x = 1 + 1(x-0) + \frac{1}{2!}(x-0)^2 + \ldots + \frac{1}{n!}(x-0)^n + r_n$$
> Ponendo il limite $x \to x_0$, si avrebbe
> $$e^{x_0} = 1+x_0 + \frac{1}{2}x_0^2 + \ldots + \frac{1}{n!}(x_0)^n + 0$$

#Osservazione 
> [!oss] Osservazione 3.1. (dimostrare l'identità di Eulero)
> Sia nota la *cosiddetta identità di Eulero*, oppure come è nota per certi matematici, *"la formula matematica più bella"*:
> $$\boxed{e^{i\pi} = -1}$$
> In realtà questa è una generalizzazione di
> $$e^{ix} = \cos x + i \sin x$$
> ovvero la *forma trigonometrica di un numero complesso* $\mathbb{C}$ con modulo $\rho = 1$ ([[Forma Trigonometrica dei Numeri Complessi#^5bb422]]).
> Se vogliamo considerarla da un *punto di vista puramente analitico*, ovvero senza effettuare delle *considerazioni geometriche* dei numeri complessi, possiamo comunque *"dimostrare"* questa forma mediante le formule di Taylor.
> Infatti, considerando:
> $$\begin{gather}e^x = 1 + x + \ldots + \frac{x^n}{n!} \\ \sin x = 1 - \frac{x^3}{3!} + \frac{x^5}{5!} - \frac{x^7}{7!} + \ldots \\ \cos x = x - \frac{x^2}{2!} + \frac{x^4}{4!} - \frac{x^6}{6!} + \ldots \end{gather}$$
> Ora *"calcolo"* $e^{ix}$ mediante *Taylor*;
> $$\begin{align}e^{ix} &= 1 + ix - \frac{x^2}{2!} - \frac{ix^3}{3!} + \frac{x^4}{4!} + \frac{ix^5}{5!} - \frac{x^6}{6!} - \frac{ix^7}{7!} + \ldots \\ &= (1-\frac{x^2}{2!}+\frac{x^4}{4!}-\frac{x^6}{6!}+\ldots)+i(x - \frac{x^3}{3!} + \frac{x^5}{5!}-\frac{x^7}{7!} + \ldots ) \\ &= \boxed{ \cos x + i \sin x}\end{align}$$

# 4. Esempio di applicazione della formula di Taylor col resto di Lagrange

#Esempio 
> [!ex] Esempio 4.1. (calcolare la costante di Eulero)
> Supponiamo di voler calcolare il numero $e$ con un errore *inferiore* a $10^{-3}$.
> Prima di tutto ricapitoliamo *ricordando* cos'è la costante di Eulero: per definizione questa costante è il limite fondamentale
> $$\lim_n (1+\frac{1}{n})^n$$
> Ricordando inoltre dei calcoli effettuati ([[Esempi di Limiti di Successione#^bb767b]]), sappiamo che il numero $e$ è *limitato*:
> $$2 \leq e \leq 3$$
> Ora scrivo la *formula di Taylor col resto di Lagrange* per $e^x$, con $n$ generico (da determinare in seguito) e $x_0 = 0$
> $$e^x = 1+x+\frac{x^2}{2!}+\frac{x^3}{3!}+\ldots+\frac{x^n}{n!}+\frac{e^\xi}{(n+1)!}x^{n+1}, 0 < \xi < 1$$
> Adesso poniamo $x=1$ e prendiamo la *"distanza"* tra $e^1$ e il polinomio di Taylor $T_n(f, 0, 1)$, e come visto prima questa dev'essere *minore o uguale* al resto di Lagrange.
> $$|e-(1+1+\ldots+\frac{1}{n!}|\leq \frac{e^\xi}{(n+1)!}$$
> Ricordiamo che se $\xi$ *"vive"* tra $0,1$, allora $e^\xi$ vive tra $1, e$; pertanto possiamo maggiorare $e^\xi$ con $3$, in quanto $e$ è *limitata* da $3$. Poniamo pertanto
> $$|e-2-\frac{1}{2}-\frac{1}{3!}-\ldots-\frac{1}{n!}| \leq \frac{3}{(n+1)!}$$
> Ora *"proviamo"* ad inserire degli $n$ a partire da $n=4$, per vedere se innanzitutto il resto (ovvero l'*"errore"*) che ci viene fuori è effettivamente minore di $10^{-3}$; in tal caso procediamo a calcolare la somma/sottrazione del polinomio.
> L'idea è quello di *"stimare il resto"*.
> $$\begin{align}&n=4 \implies r_4 = \frac{3}{120} > 10^3 \text{ NO} \\ &n=5 \implies r_5 = \frac{3}{720} = \frac{1}{240} > 10^{-3} \text{ NO}\\ &n =6 \implies r_6 = \frac{3}{5040} < 10^{-3} \text{ OK.}\end{align}$$
> Quindi il *"candidato perfetto"* è $n=6$.
> Procedendo ad inserire $n=6$ nel *polinomio di Taylor* $T_6(e^x, 0, 1)$ abbiamo
> $$2+\frac{1}{2!}+\frac{1}{3!}+\frac{1}{4!}+\frac{1}{5!}+\frac{1}{6!} = 2.718$$
> che è proprio il numero $e$ fino alla $10^{-3}$-esima cifra.
