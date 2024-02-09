---
data: 2023-11-11
corso: "[[Analisi Matematica I]]"
argomento: Teoremi sulle funzioni continue
tipologia: appunti
stato: "1"
---
*Teoremi sulle funzioni continue: prime proprietà delle funzioni continue; permanenza del segno adattato, operazioni con le funzioni continue, composta di funzioni continue. Teoremi fondamentali delle funzioni continue: teorema degli zeri, dei valori intermedi, di compattezza e di Weierstraß*
- - -
# 1. Prime proprietà delle funzioni continue
Consideriamo delle *proprietà* delle funzioni continue, di cui alcuni discendono direttamente dai teoremi sui limiti ([[Teoremi sui Limiti di Funzione]]).
## Permanenza del segno adattato
#Teorema 
> [!thm] Permanenza del segno versione continua.
> Sia $f: E \longrightarrow \mathbb{R}$, sia $x_0 \in \mathbb{R}$ e $f$ continua in $x_0$.
> Se $f(x_0) > 0$ ($<0$) allora esiste intorno di $x_0$ in cui $f$ ha segno *positivo* (*negativo*)
^3a557a
## Operazioni con funzioni continue
#Teorema 
> [!thm] Operazioni con funzioni continue.
> Siano $f, g$ funzioni *continue* in $x_0 \in \mathbb{R}$.
> Allora 
> $$f \pm g, f\cdot g, \frac{f}{g}$$
> sono *continue* (a patto che nel terzo caso sia $g(x_0) \neq 0$) 
^41a8ec

#Osservazione 
> [!rmk] la funzione razionale è continua
Da questo teorema si può dedurre che tutti i *polinomi* e *funzioni razionali* sono funzioni *continue*: infatti $$ p = a_0 + a_1x + a_2x^2+\ldots + a_nx^n  $$
non è altro che una somma tra funzioni potenza, che sono *continue* ([[Definizione di Continuità#^dfa8a1]]).

## Composta di funzioni continue
#Teorema 
> [!thm] Composta di funzioni continue.
> Siano
> $$\begin{align}&f: E \longrightarrow \mathbb{R}, x_0 \in E \\&g : F \longrightarrow \mathbb{R}, f(x_0) \in F, f(E) \subseteq F \end{align} $$
> Supponendo che $f$ sia *continua* in $x_0$ e $g$ sia *continua* in $f(x_0) = y_0$, allora $g \circ f$ è *continua* in $x_0$.
^c0ce66

**FIGURA 1.3.** (*Idea del teorema*)
![[Pasted image 20231220192803.png]]

**DIMOSTRAZIONE** del *teorema 1.3.* ([[#^c0ce66]])
Per ipotesi $g$ è continua in $f(x_0)$, ovvero
$$
\lim_{y \to f(x_0)}g(y) = g(f(x_0)) \iff \begin{gather}\forall \varepsilon > 0, \exists \delta>0: \forall y \in F, \\|y-f(x_0)|<\delta \implies |g(y)-g(f(x_0))| < \varepsilon \end{gather}
$$

Ma anche $f$ è continua, in $x_0$, ovvero 
$$
\lim_{x \to x_0}f(x)=f(x_0) \iff \begin{gather}\forall \delta > 0, \exists \rho >0: \forall x \in E,\\|x-x_0| < \rho \implies |f(x)-f(x_0)|<\delta \end{gather}
$$
Allora combinandoli ottengo
$$
\begin{gather}\forall \varepsilon>0, \exists \rho>0: \forall x \in E, f(x) \in F\\ |x-x_0|< \rho \implies |\underbrace{f(x)}_{f(x)=y}-f(x_0)| < \delta \implies |g(y)-g(f(x_0))|<\varepsilon\end{gather}
$$
che è esattamente la definizione di 
$$
\lim_{y \to f(x_0)}g(y)=g(f(x_0))
$$
## Caratterizzazione della continuità tramite le successioni
#Teorema 
> [!thm] di caratterizzazione della continuità tramite le funzioni
> Sia $f: E \longrightarrow \mathbb{R}$, $\bar{x} \in E$,
> allora $f$ è continua in $\bar{x}$ se e solo se vale la proprietà $(\ast)$.
> $(\ast)$: per ogni *successione a valori in* $E$, $(x_n)_n$, tale che 
> $$ \lim_n x_n = \bar{x} $$
> si ha 
> $$ \lim_n f(x_n) = f(\bar{x}) $$
^acbf64

#Dimostrazione 
**DIMOSTRAZIONE** (*Teorema 1.4.*)
Questo è un teorema del tipo *"se e solo se"*, quindi procediamo per due sotto dimostrazioni.
"$\Downarrow$": Sia $f$ continua in $\bar{x}$, sia $(x_n)_n$ una successione in $E$ tale che
$$\lim_{n}x_n = \bar{x}$$
Allora ne traiamo le seguenti definizioni:
$$
\text{1. }f \text{ continua in }\bar{x} \iff \begin{gather}\forall \varepsilon >0, \exists \delta >0: \forall x \in E, \\|x-\bar{x}| < \delta \implies |f(x)-f(\bar{x})| < \varepsilon \end{gather} $$
e
$$
\text{2. }\lim_{n}x_n = \bar{x} \iff \begin{gather}\forall \delta>0, \exists \bar{n}: \forall n, \\n > \bar{n} \implies |x_n - \bar{x} | < \delta\end{gather} $$
Osserviamo che abbiamo una situazione del tipo
$$
\varepsilon \rightarrow \delta, \delta \rightarrow \bar{n}
$$
quindi possiamo *"combinarli"* avendo dunque
$$
\forall \varepsilon >0, \exists \bar{n}: \forall n, n>\bar{n} \implies |x_n-\bar{x}| < \delta \implies |f(x_n)-f(\bar{x})|<\varepsilon
$$
che è proprio la definizione di
$$
\lim_n f(x_n) = f(\bar{x})
$$
"$\Uparrow$": Sia $f(x_n)$ convergente a $f(\bar{x})$. Per assurdo suppongo di negare la proprietà iniziale, ovvero che $f$ non è continua in $\bar{x}$. Allora segue che
$$
\neg\left(\begin{gather}\forall \varepsilon >0, \exists \delta >0: \forall x \in E, \\|x-\bar{x}| < \delta \implies |f(x)-f(\bar{x})|<\varepsilon \end{gather}\right)
$$
diventa
$$
\begin{gather}\exists \varepsilon_0 >0: \forall \delta >0, \exists x_\delta \in E: \\|x_\delta-\bar{x}|<\delta \land |f(x_\delta)-f(\bar{x})|\geq \varepsilon_0 \end{gather}
$$
Ora per trovare l'assurdo devo cercare una successione $(x_n)_n$ tale che
$$
\lim_n x_n = \bar{x} \land \lim_nf(x_n)\neq f(\bar{x})
$$
Prendo dunque $\delta = \frac{1}{n}$, allora
$$
\ldots, \exists x_n: |x_n-\bar{x}| < \frac{1}{n} \land |f(x)-f(\bar{x})| \geq \varepsilon >0 
$$
Allora per la prima proposizione ho
$$
0 \leq |x_n-\bar{x}| \leq \frac{1}{n}
$$
Allora per il *teorema dei due carabinieri* ([[Limite di Successione]], **OSS 1.1.**) sappiamo che
$$ 
\lim_n 0 = 0 , \lim_n\frac{1}{n}=0 \implies \lim_{n}x_n-\bar{x}=0 \implies \lim_n x_n = \bar{x}
$$
Ricapitolando ho
$$
\lim_n x_n = \bar{x}, \exists (f(x_n))_n: |f(x_n)-f(\bar{x})|\geq \varepsilon_0 > 0$$
che è assurdo (quindi falso), dato che contraddice la supposizione iniziale. $\blacksquare$

**FIGURA 1.4.** (*l'idea del passaggio* $\Uparrow$)
![[Pasted image 20231220190049.png]]
# 2. Proprietà fondamentali delle funzioni continue
## Teorema degli zeri
#Teorema 
> [!thm] degli zeri
Sia $f: [a, b] \longrightarrow \mathbb{R}$, $f$ *continua* nel suo dominio. Sia $f(a) < 0$, $f(b) > 0$ oppure $f(a)>0 \land f(b)<0$, cioè sono di segni *discordi* (ovvero $f(a)f(b) < 0$).
Allora
$$ \exists \xi \in ]a, b[: f(\xi) =0 $$
In parole deve esiste un valore $\xi$ che *"taglia"* attraverso la linea orizzontale delle ascisse.
^8b33e1

#Esempio 
> [!exm] Esempio 2.1.
Sia $f(x)=x^5+7x+1$. $f(x)$ ha soluzioni? (ovvero se esistono zeri)
Sì, sapendo che $\lim_{x \to -\infty}f(x) = -\infty$ e $\lim_{x \to +\infty}f(x) = +\infty$.

#Dimostrazione 
**DIMOSTRAZIONE.** (*Teorema 2.1.*)
Supponiamo $f(a) < 0$, $f(b) > 0$. 
Se graficamente ho la situazione nella *figura 2.1.*, allora posso intuitivamente disegnare una linea *continua* che *"taglia"* l'asse delle ascisse: tuttavia ciò non costituisce una dimostrazione rigorosa.
Allora chiamo $a = a_0, b=b_0$.
Ora considero il punto medio tra $a, b$ e la chiamo $c_0 = \frac{a_0+b_0}{2}$. 
Adesso ho tre possibilità:
1. $f(c_0) = 0$: non serve più procedere e ho risolto il problema
2. $f(c_0) > 0$: considero la funzione $f$ in $[a_0, c_0]$ e ripeto la stessa procedura, con $a_1 = a_0, b_1 = c_0, c_1 = \ldots$.
3. $f(c_0) < 0$: analogamente guardo la funzione $f$ in $[c_0, b_0]$
Se mi capitano i casi $2, 3$ ripeto: facendo questa procedura ho due possibilità:
1. Eventualmente riuscirò a trovare $\xi$ tale che $f(\xi) = 0$.
2. Altrimenti costruisco una *successione di intervalli chiusi, dimezzati e inscatolati* del tipo $$ (I_n)_n = ([a_n, b_n])_n $$dove $f(a_n) < 0$ e $f(b_n) > 0$. Allora per la *forma forte del teorema di Cantor* ([[Conseguenze dell'esistenza dell'estremo superiore]], **TEOREMA 4.2.**) ho $$\bigcap_n I_n = \{\xi\}, \xi \in [a, b] \implies a \leq \xi \leq b$$Per concludere basta mostrare che $$f(\xi) = 0$$Prima osservo che $$0 \leq |a_n - \xi| \leq |b_n - a_n| = \frac{b_0-a_0}{2^n}$$e poi $$\lim_n 0 = 0;\lim_n\frac{b_0-a_0}{2^n} = 0$$dunque per due carabinieri $$\lim_n a_n = \xi $$
   Analogamente vale lo stesso per $b_n$.
   Adesso uso la nozione di *continuità* ([[Definizione di Continuità]]), usando in particolare il *teorema 1.4.* ([[#^acbf64]]). Allora $$f \text{ continua} \implies \begin{cases}\lim_n f(a_n) = f(\xi) \\ \lim_n f(b_n) = f(\xi)\end{cases}$$Però ricordandoci della *permanenza del segno* (**TEOREMA 1.1.**, [[#^3a557a]]), abbiamo che
   $$ \begin{align}&f(a_n)<0, \forall n \implies \lim_n f(a_n) \leq 0 \implies f(\xi ) \leq 0 \\ & f(b_n) > 0, \forall n \implies \lim_n f(b_n) \geq 0 \implies f(\xi ) \geq 0 \end{align}$$Ma per la proprietà *antiriflessiva* di $\leq, \geq$ ho 
   $$ f(\xi) = 0 \ \blacksquare$$
**FIGURA 2.1.** (*Idea intuitiva iniziale e della dimostrazione*)
![[Pasted image 20231220191525.png]]

#Osservazione 
> [!rmk] algoritmizzazione della dimostrazione del teorema
   Questo teorema è *costruttivo*: la dimostrazione del teorema dei zeri ci fornisce un *modo* di trovare il valore $\xi$. Infatti, mediante gli strumenti dell'*informatica*, si può implementare un algoritmo per poter calcolare e approssimare un zero di una funzione.

**ALGORITMO.** (*Quasi-Python*)
```python
def f(x):
	# Inserisci qui la funzione, ad esempio
	return x**3 - 2

a = ... # Un valore tale che f(a) < 0
b = ... # Un valore tale che f(b) > 0
c = (a+b)/2

while (d(f(c), 0)>= epsilon): 
	# d(a,b) è la funzione distanza, epsilon un valore piccolo a piacere
	if f(c) == 0:
		break
		
	if f(c) > 0: 
		a = a
		b = c
		c = (a+b)/2
	else if f(c) < 0:
		a = c
		b = b
		c = (a+b)/2
```

**ALGORITMO ALTERNATIVO** (*Python, ausilio degli iteratori*)
```python
class Intervallo:
	def __init__(self, a, b, f, epsilon):
		self.a=a
		self.b=b
		self.f=f
		self.epsilon=epsilon

	def __iter__(self):
		return TrovaZeri(self.a, self.b, self.f, self.epsilon)

class TrovaZeri:
	def __init__(self, a, b, f, e):
		self.a = a
		self.b = b
		self.f = f
		self.c = (a+b)/2
		self.e = e

	def __next__(self):
		if self.f(self.c) == 0 or (self.f(self.c)<self.e and self.f(self.c) > -1*self.e):
			raise StopIteration

		if self.f(self.c) > 0:
			self.a = self.a
			self.b = self.c
			self.c = (self.a+self.b)/2
			return self.b

		if self.f(self.c) < 0:
			self.a = self.c
			self.b = self.b
			self.c = (self.a+self.b)/2
			return self.a
```

#Esempio 
> [!exm] Trovare una soluzione di $x^3-2$
> Supponiamo di voler trovare la soluzione per 
> $$f(x)=x^3-2 $$
> in $[0, 3]$.
> Allora secondo la *"ricetta"* prescritta in questo algoritmo opero nel seguente modo:
> 1. $$a_0 = f(0) = -2; b_0 = f(3) = 25; c_0 = f(1.5) = \frac{11}{8}$$
> 2. $$a_1 = -2, b_1 = \frac{11}{8}, c_1 = \frac{3}{4} = \ldots = -\frac{99}{64}$$
> 3. $$a_2 = -\frac{99}{64}, b_2 = \frac{11}{8}, \ldots $$
> e operativamente mi fermo quando il valore desiderato è abbastanza "vicino" a quello cercato.
## Teorema dei valori intermedi
#Corollario 
> [!cor] teorema degli valori intermedi
   Sia $g: [a, b] \longrightarrow \mathbb{R}$. Supponiamo $g(a) = \alpha$, $g(b) = \beta$, con $\alpha < \beta$. Sia $\gamma \in ]\alpha, \beta[$. 
   Allora 
   $$\exists \xi \in \ ]a, b[\ : g(\xi)=\gamma$$
   in parole una *funzione continua su un certo intervallo* se assume due valori negli *estremi* allora questa assume *tutti* i valori *intermedi* in questo intervallo.
   Alternativamente si può riformulare questo teorema come
   $$[g(a), g(b)] = [\alpha, \beta] \subseteq f([a,b])$$
^1c6f7c

**FIGURA 2.2.** (*Idea grafica del teorema*)
![[Pasted image 20231220192029.png]]

#Dimostrazione 
**DIMOSTRAZIONE** (*Corollario 2.2.*)
Consideriamo la *composizione* delle funzioni.
Siano $\gamma \in (\alpha,\gamma) \implies \alpha < \gamma < \beta$,
$$ f(x) = g(x) - \gamma $$
e sfruttando il *teorema sulle operazioni con funzioni continue* ([[#^41a8ec]]), supponendo che $g$ sia continua, sappiamo che $f$ è sicuramente continua.
Inoltre 
$$
\begin{align}
&f(a) = g(a) - \gamma = \alpha-\gamma < 0 \\ & f(b) = g(b) - \gamma = \beta - \gamma > 0
\end{align}
$$
Allora per il *teorema dei zeri* ([[#^8b33e1]]) sappiamo che
$$
\exists \xi \in (a,b): f(\xi) = 0 \implies g(\xi) - \gamma = 0 \implies g(\xi) = \gamma \ \blacksquare
$$

**OSS 2.2.** Notiamo che tutte e *tre* le condizioni sono *importanti*: infatti deve valere che ci sia un intervallo singolo. Infatti supponendo
$$ g: [1,2] \cup [3,4] \longrightarrow \mathbb{R}$$allora possiamo supporre $g$ *continua* ma non ha zeri, in quanto potrebbero esserci dei *"salti"* tra $]2,3[$. Infatti questo è il caso se
$$
g(x) = \begin{cases}-1 \text{ se }x \in [1,2]\\1 \text{ se }x \in [3,4] \end{cases}
$$
Lo stesso discorso vale per la funzione
$$
p_{-1}: \mathbb{R}\diagdown\{0\} \longrightarrow \mathbb{R}, x \mapsto p_{-1}(x)=\frac{1}{x}
$$
Infatti il *"buco"* qui è proprio il numero $0$.

#Osservazione 
> [!rmk] una funzione continua su un intervallo manda sempre in un intervallo
Sia $E \subseteq \mathbb{R}$, con la seguente proprietà: $x_1, x_2 \in E \implies [x_1, x_2] \subseteq E$, chi è $E$?
$E$ è *sempre* un intervallo: per dimostrarlo uso il teorema dell'esistenza di $\sup E, \inf E$ ([[Insiemi limitati, maggioranti, massimo e teorema dell'estremo superiore]]), le sue proprietà e di seguito il *teorema dei zeri*. Da questo discende il seguente corollario:

#Corollario 
> [!cor] Corollario 2.3.
> Sia $I$ intervallo, $f: I \longrightarrow \mathbb{R}$, $f$ *continua*.
> Allora $f(I)$ è intervallo.
## Teorema di compattezza
Ora vediamo di collegare la nozione delle *funzioni continue* con gli *insiemi compatti* ([[Insiemi compatti in R#^0eb138]]). 

#Teorema 
> [!thm] di compattezza
Sia $K \subseteq \mathbb{R}$, $K$ *compatto*; sia $f: K \longrightarrow \mathbb{R}$, $f$ *continua*.
Allora $f(K)$ è *compatto*.

#Dimostrazione 
**DIMOSTRAZIONE** (*Teorema 2.4.*)
Provo che dalle supposizioni iniziali ho $f(K)$ compatto.
Allora prendo $(y_n)_n$ una *successione* a valori in $f(K)$ ([[Successione e Sottosuccessione#^e6d66f]]). Allora devo dimostrare di essere in grado di di *estrarre* una *sotto successione* $(y_{n_k})_k$ tale che
$$
\lim_k y_{n_k}= \bar{y} \in f(K)
$$
Però prima partiamo considerando ciò che *conosciamo*, ovvero $K$ compatto: quindi per ogni *successione* $(x_n)_n$ a valori in $K$, allora possiamo *estrarre* una *sotto successione* $(x_{n_k})_k$ tale che
$$
\lim_k x_{n_k} = \bar{x} \in K
$$
però mi ricordo che $f$ è continua, quindi per la *caratterizzazione della continuità tramite le successioni* ([[#^acbf64]]) ho che anche la sua *immagine* converge. Allora
$$
\lim_k f(x_{n_k}) = f(\bar{x}) \in f(K)
$$
Ricordandoci che $y_{n_k} = f(x_{n_k}), \forall k \in \mathbb{N}$, abbiamo proprio
$$
\lim_k y_{n_k} = \bar{y} \in f(K) \ \blacksquare
$$

#Corollario 
> [!cor] Corollario 2.5.
> Una funzione $f$ *continua* che ha per dominio *insiemi chiusi e limitati*, ovvero per la *caratterizzazione dei compatti* ([[Insiemi compatti in R#^759c9b]]) insiemi *compatti*, allora il suo *insieme immagine* è un *insieme chiuso e limitato*.
## Teorema di Weierstraß
#Teorema
> [!thm] di Weierstraß
> Sia $K$ un insieme *compatto non vuoto* (pertanto *chiuso e limitato*), sia $f: K \longrightarrow \mathbb{R}$ *continua*.
> Allora  $f(E)$ ha $\max$ e $\inf$; ovvero riprendendo le definizioni di *massimo e minimo  assoluto di una funzione* ([[Funzioni]], **DEF 11.1**; **DEF 11.2.**) esistono il massimo e minimo assoluto della funzione.
^918fc1

#Osservazione 
> [!rmk] insiemi compatti hanno sempre minimo e massimo
> Un insieme *chiuso* e *limitato* ha sempre $\min$, $\max$? Sì, in quanto per definizione un insieme limitato deve avere per forza $\inf, \sup \in \mathbb{R}$ e in quanto chiuso questi appartengono anche all'insieme stesso. 
^3a916a

#Dimostrazione 
**DIMOSTRAZIONE** (*Teorema 2.6.*)
In questa dimostrazione usiamo la nozione dei *insiemi compatti* ([[Insiemi compatti in R#^0eb138]]).
Sia $K$ *chiuso* e *limitato*, dunque *compatto*,
poiché $f$ è *continua*, sia $f(K)$ *compatto*,
allora sia $f(K)$ *chiuso* e *limitato*. 
Pertanto per **OSS 2.4.** ([[#^3a916a]]), 
$$
\begin{cases}f(K) \text{ limitato} \implies \exists \sup{(f(K))}, \inf{(f(K))} \in \mathbb{R} \\ f(K) \text{ chiuso} \implies \sup{f(K), \inf f(K) \in f(K)} \\ \end{cases} \implies \begin{cases}\sup f(K) = \max f(K)\\ \inf f(K) = \min f(K)\end{cases}
$$
Concludendo così la dimostrazione. Inoltre è possibile anche dimostrare questo teorema *senza* usare la nozione dei *insiemi compatti* e la sua *caratterizzazione*.

#Dimostrazione 
**DIMOSTRAZIONE ALTERNATIVA** (*Teorema 2.6.*)
In questa dimostrazione alternativa *non* useremo la nozione della compattezza (in particolare senza la sua caratterizzazione con insiemi chiusi e limitati).
Dimostrando che esista $\max$, avrei già analogamente dimostrato l'esistenza di $\min$.
Allora considero $f(K) \subseteq \mathbb{R}$: ho dunque due *possibilità*:
1. $f(K)$ è *superiormente illimitato*
2. $\sup f(K) < +\infty$ (ovvero non è *superiormente illimitato*)
In entrambi i casi esiste in $f(K)$ una *successione* $(y_n)_n$ tale che
$$ 
\lim_n y_n = \begin{cases}+\infty \text{ se caso 1.} \\ \sup f(K) \text{ se caso 2.} \end{cases}
$$
Adesso guardo la successione $(x_n)_n$ in $K$. Sappiamo che $K$ è *compatto*, dunque possiamo trovare una *sotto successione* $(x_{n_k})_k$ tale che
$$
\lim_k x_{n_k} = \bar{x} \in K
$$
Sapendo che $f$ è *continua*, abbiamo che
$$
\lim_k x_{n_k} = \bar{x} \in K \implies \lim_k f(x_{n_k}) = f(\bar{x} ) = \bar{y} =  \begin{cases}+\infty \text{ se caso 1.} \\ \sup f(K) \text{ se caso 2.} \end{cases} 
$$
Ora ci chiediamo se è possibile avere il *primo* caso: la risposta è *no*, in quanto sappiamo che $f(\bar{x}) \in f(K)\subseteq\mathbb{R} \implies f(\bar{x}) \in \mathbb{R}$ (ovvero questo caso è un *assurdo*). Di conseguenza l'unico caso di cui ha senso considerare è il *secondo*, ovvero
$$
\lim_k y_{n_k} = \bar{y} = \sup f(K) \in f(K) \implies \sup f(K) = \max f(K)
$$
ovvero $f(\bar{x})$ è di *massimo*.
