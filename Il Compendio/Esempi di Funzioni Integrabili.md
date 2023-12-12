---
data: 2023-12-05
corso: "[[Analisi Matematica I]]"
argomento: Esempi di Funzioni Integrabili
tipologia: appunti
stato: "0"
---
*Esempi di funzioni integrabili e non integrabili, corredato da calcoli.*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Integrabilità secondo Riemann]]
- [[Tipologie di Funzioni Integrabili]]
- [[Esempi di Induzione]] / [[Assiomi di Peano, il principio di induzione]]
- [[Somma inferiore e superiore per una Funzione]]
- [[Limite di Successione]] / [[Esempi di Limiti di Successione]]
- [[Conseguenze dell'esistenza dell'estremo superiore]]
# 1. Integrabilità di alcune funzioni elementari
## Funzione costante
#Esempio 
> [!ex] Esempio 1.1. (funzione costante)
> Sia $f: [a, b] \longrightarrow \mathbb{R}$ la *funzione costante* $x \mapsto c \in \mathbb{R}$.
> Allora, intuitivamente si può vedere la sua *area* sotto la *"curva"* (o linea retta) è semplicemente *base per altezza*, ovvero $c \cdot (b-a)$ (*figura 1.1.*).
> Però usiamo l'*integrazione di Riemann* ([[Integrabilità secondo Riemann#^64ad3b]]) per calcolare il suo *integrale*, ovvero l'*area*.
> Calcolo dunque la sua *somma inferiore* ([[Somma inferiore e superiore per una Funzione#^1ff0a9]]) per una sua qualsiasi suddivisione:
> $$s(f, \Delta) = \sum_{i=1}^{n}(x_i-x_{i-1}) \cdot \inf f(x)$$
> Però $f(x)$ è limitata *solo* su $c$; infatti $f(x) = c$. Allora ciò segue che
> $$\begin{align}s(f, \Delta) = \sum_{i=1}^{n}(x_i-x_{i-1}) \cdot c &= c \sum_{i=1}^{n}x_i-x_{i-1} \\ &= c \cdot[(x_1-x_0)+(x_2-x_1)+\ldots+(x_n-x_{n-1})] \\ &= c \cdot (x_n - x_0) = \boxed{c \cdot (b-a)}\end{align}$$
> Facendo la stessa procedura, che è letteralmente la stessa, per la *somma superiore* $S(f, \Delta)$ otteniamo lo stesso risultato.
> Dunque,
> $$\boxed{\int_a^b c\  dx = c(b-a)}$$

**FIGURA 1.1.** (*Funzione costante*)
![[Pasted image 20231206152458.png]]

## Funzione identità
#Esempio 
> [!ex] Esempio 1.2. (funzione identità)
> Sia $f: [0,1] \longrightarrow \mathbb{R}$ la *funzione identità* $\operatorname{id}(x) = x$.
> Allora anche qui si può intuire che l'*area sotto la retta* è l'*area di un triangolo*, ovvero *base per altezza diviso due*. Pertanto $A = f(1)(1-0)\cdot\frac{1}{2}=\frac{1}{2}$.
> Ora verifichiamo quest'affermazione secondo l'*integrazione di Riemann*.
> Prendiamo una *suddivisione particolare* $\Delta = \{0, \frac{1}{n}, \frac{2}{n}, \ldots, \frac{n}{n}=1\}$.
> Con tale suddivisione calcoliamo la *somma inferiore* e la *somma superiore*.
> 1. Somma inferiore
>    $$\begin{align}s(f, \Delta) &= \sum_{i=1}^{n}(x_i-x_{i-1}) \inf_{x \in [x_{i-1}, x_i]}f(x) \\ &= \sum_{i=1}^{n}(\frac{1}{n})\cdot(\frac{i-1}{n}) \\ &= \frac{1}{n^2}\sum_{i=1}^{n}(i-1)\end{align}$$
> 2. Somma superiore (passi analoghi)
>    $$\begin{align}S(f, \Delta) &= \frac{1}{n^2}\sum_{i=1}^{n}i\end{align}$$
> Ma noi conosciamo una *proprietà della somma dei primi $n$ numeri naturali*, ovvero
> $$\sum_{x=1}^{n}x = \frac{n(n+1)}{2}$$
> Naturalmente questa è dimostrabile per *induzione* ([[Esempi di Induzione#^d8e983]]).
> Allora prendiamo per buone le seguenti:
> $$s(f, \Delta) = \frac{(n-1)(n)}{2n^2}; S(f,\Delta) = \frac{(n+1)(n)}{2n^2}$$
> Sottraendo la somma superiore per la somma inferiore vediamo che questa risulta in
> $$S-s = \frac{1}{n}$$
> Ma per l'*archimedeità dei reali* ([[Conseguenze dell'esistenza dell'estremo superiore#^d95d40]]) sappiamo che è vera la seguente:
> $$\forall \varepsilon >0, \exists n: 0 < \frac{1}{n} < \varepsilon$$
> Quindi sicuramente la funzione identità è *integrabile secondo Riemann*.
> Ora procediamo a calcolare l'integrale: consideriamo innanzitutto che per definizione l'integrale *deve* stare tra la *somma inferiore* e la *somma superiore* della funzione, ovvero
> $$s(f, \Delta) \leq \int_{[0, 1]} f(x) \leq S(f, \Delta)$$
> Però prendendo i *limiti di successione* ([[Limite di Successione#^ef60f6]]) di $s(f, \Delta)$ e $S(f, \Delta)$ vediamo che entrambe *convergono* a $\frac{1}{2}$; infatti
> $$\lim_n \frac{(n-1)(n)}{2n^2} = \lim_n \frac{1}{2}(1-\frac{1}{n}) = \frac{1}{2}$$
> Allora per il *teorema dei due carabinieri versione successione* ([[Limite di Successione#^72d83a]]), vale che anche *l'integrale* converge a $\frac{1}{2}$; pertanto
> $$\boxed{\int_0^1 x \ dx = \frac{1}{2}}$$

## Funzione potenza quadrata
#Esempio 
> [!ex] Esempio 1.3. (funzione quadrato)
> Sia $f: [0,1] \longrightarrow \mathbb{R}$, $f(x) = x^2$.
> Vogliamo calcolare l'integrale $\int_0^1 f(x) \ dx$.
> Analogamente all'*esempio 1.3.*, prendiamo la suddivisione
> $$\Delta = \{0, \frac{1}{n}, \ldots, \frac{n-1}{n}, \frac{n}{n}=1\}$$
> Ora calcoliamo la *somma inferiore* e *superiore*.
> $$\begin{gather}s(f, \Delta) = \sum_{i=1}^{n}\frac{1}{n}\cdot(\frac{i-1}{n})^2 = \frac{1}{n^3}\cdot \sum_{i=1}^{n}(i-1)^2 \\ S(f, \Delta) = \frac{1}{n^3}\cdot \sum_{i=1}^{n}i^2 \end{gather}$$
> Allora calcolando le loro *differenze* otteniamo il medesimo risultato $\frac{1}{n}$; pertanto $f(x)=x^2$ è *integrabile secondo Riemann*.
> Adesso consideriamo la proprietà della *somma dei quadrati* per cui si ha
> $$\sum_{i=1}^{n}i^2 = \frac{n(n+1)(2n+1)}{6}$$
> Anche questa è *dimostrabile per induzione*.
> Ora vogliamo calcolare il valore dell'integrale; come prima consideriamo che l'integrale è *"compresso"* tra la sua somma inferiore e superiore, ovvero
> $$\frac{1}{n^3}\cdot\frac{(n-1)(n)(2n-1)}{6} \leq \int_0^1 f(x) \ dx \leq \frac{1}{n^3}\cdot \frac{(n)(n+1)(2n+1)}{6}$$
> Però considerando i *limiti di successione* per gli *"estremi"* abbiamo che entrambi *convergono* per il valore $\frac{1}{3}$; pertanto l'integrale è
> $$\boxed{\int_0^1 x^2 \ dx = \frac{1}{3}}$$

## La difficoltà dell'integrazione
#Osservazione 
> [!oss] Osservazione 1.1. (la necessità di una tecnica alternativa dell'integrazione)
> Vediamo che calcolare l'*integrale* di una funzione secondo la *tecnica di Riemann* risulta spesso *"faticoso"* e *"difficile"* (anche se discutibile!): perciò sorge la necessità di trovare un altro modo più *"semplice"* per calcolare gli *integrali*, raggirando ad esempio il calcolo delle *somme inferiore e/o superiore*.
> A proposito di ciò argomenterebbero a favore i noti matematici russi *A. N. Kolmogorov*, *A. D. Aleksandrov* e *M. A. Lavrent'ev*$^{(1)}$: loro affermerebbero che che ci serve un metodo più *"generale"* per calcolare gli integrali, in quanto fino ad ora abbiamo adoperato *"tecniche specialissime"*.

- - -
$^{(1)}$: *"[...] Per di più, anche quando sia possibile eseguire tale somma, ciò non si può fare con un metodo generale, ma con tecniche specialissime, dipendenti dal singolo problema.
Sorge quindi il problema di trovare un metodo generale peri l calcolo dell'integrale definito. Il problema generale del calcolo delle aree e dei volumi, così ricco di conseguenze pratiche, interessò i matematici per lungo tempo"* - tratto da *"Le Matematiche - Analisi, Algebra, Geometria Analitica"* (1974) di A. N. Kolmogorov, A. D. Aleksandrov e M. A. Lavrent'ev
- - -
## Funzione esponenziale
#Esercizio 
> [!es] Esercizio 1.1.
> Per esercizio calcolare l'integrale
> $$\int_0^1 e^x \ dx$$

# 2. Funzioni non integrabili
#Osservazione 
> [!oss] Osservazione 2.1. (esempio di funzione non integrabile)
> Esistono funzioni che *non* siano *integrabili secondo Riemann*?
> La risposta è sì, in quanto se consideriamo la *funzione di Dirichlet* scopriamo che questa non sia derivabile.
> La funzione di Dirichlet è definita nel seguente modo:
> $$f:[0,1] \longrightarrow \mathbb{R}; f(x) = \begin{cases} 1 \text{ se }x \in \mathbb{Q} \\ 0 \text{ se }x \not \in \mathbb{Q} \end{cases}$$
> Allora se prendo la sua *somma superiore* vedo che questa è sempre $1$, in quanto prendendo un qualsiasi intervallo $[x_{i-1}, x_i]$ ci dev'essere *almeno* un numero razionale tra questi ([[Conseguenze dell'esistenza dell'estremo superiore#^e279b1]]). Pertanto il $\sup$ della funzione diventa $1$.
> Analogamente la *somma inferiore* è sempre $0$.
> Pertanto, vedo che
> $$s(f, \Delta) \neq S(f, \Delta) \implies f \not \in \mathcal{R}$$
