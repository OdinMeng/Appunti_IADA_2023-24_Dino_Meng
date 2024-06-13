---
data: 2024-05-12
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Statistica delle Variabili Aleatorie Assolutamente Continue
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Assolutamente Continue
---
- - -
*Applicazione delle nozioni statistiche alle variabili aleatorie assolutamente continue: valor medio, varianza. Valor medio della composta. Proprietà del valor medio e della varianza.*
- - -
# 0. Voci correlate
- [[Definizione del Valore Medio]]
- [[Proprietà del Valore Medio]]
- [[Definizione di Varianza e Deviazione Standard]]
- [[Proprietà della Varianza]]
- [[Definizione di Covarianza]]
- [[Variabile Aleatoria Assolutamente Continua]]
# 1. Valor medio delle v.a. assolutamente continue
Adesso iniziamo ad applicare un po' di nozioni apprese sulla *statistica* (ovvero valor medio, varianza, covarianza) alle *variabili aleatorie assolutamente continue*.

#Definizione 
> [!def] valor medio delle v.a. assolutamente continue
> Sia $X$ una v.a. *assolutamente continua* avente densità $f$. Si dice che *ammette valor medio* se vale che
> $$
> \int_\mathbb{R}|x|f(x) \ \text{d}x<+\infty
> $$
> (si pone il valor assoluto $|x|$ per evitare casi indeterminati; voglio casi *divergenti* o *convergenti*). 
> 
> In tal caso si definisce il *valor medio* la quantità
> $$
> E[X]:=\int_\mathbb{R}xf(x) \ \text{d}x
> $$

#Osservazione 
> [!rmk] similitudine al caso discreto
> Notiamo che la definizione *assomiglia tantissimo* al caso discreto. Infatti abbiamo
> $$
> \int_\mathbb{R}x f(x) \ \text{d}x \sim \sum_{x \in \mathbb{R} }xf(x)
> $$
> Questo non è un caso. Vedremo come mai

# 2. Legame tra caso discreto e caso continuo
#Osservazione 
> [!rmk] similitudine al caso discreto
> Come osservato prima, abbiamo che le definizione di *valor medio* sono molto simili. Infatti la definizione generale del valor medio ([[Definizione del Valore Medio#^3a0f7f|1]]) include sia il *caso discreto* che il *caso continuo*. 
> 
> Per convincerci di questo (in particolare l'ultima affermazione) vediamo il seguente esempio: sia $X$ una variabile aleatoria avente $f$ densità, che a sua volta è limitata su $[0,1]$ (nel senso che al di fuori il suo valore è nullo).
> 
> Allora possiamo considerare i suoi *approssimanti dal basso e dall'alto*, definiti come
> $$
> \underline{Y}(\omega):=\left\{\begin{align}
> & \frac{k}{n}, \omega \in \left\{\frac{k}{n}\leq X \leq \frac{k+1}{n}\right\}, k \in\{0,\ldots,n-1\}\\ &0, \ \text{alt.}
> \end{align}\right.
> $$
> e
> $$
> \overline{Y}(\omega):=\left\{\begin{align}
> & \frac{k+1}{n}, \omega \in \left\{\frac{k}{n}\leq X \leq \frac{k+1}{n}\right\}, k \in\{0,\ldots,n-1\}\\ &0, \ \text{alt.}
> \end{align}\right.
> $$
> con le densità
> $$
> \underline{q}(x)=\left\{\begin{align}
> & p\left\{\frac{k}{n}\leq X \leq \frac{k+1}{n}\right\}, x =\frac{k}{n}, k\in\{0,\ldots, n-1\}
> \\ & 0, \text{ alt.}
> \end{align}\right.
> $$
> poi
> $$
> \overline{q}(x)=\left\{\begin{align}
> & p\left\{\frac{k}{n}\leq X \leq \frac{k+1}{n}\right\}, x =\frac{k+1}{n}, k\in\{0,\ldots, n-1\}
> \\ & 0, \text{ alt.}
> \end{align}\right.
> $$
> Abbiamo dunque che
> $$
> \underline{Y}\leq X \leq \overline{Y}
> $$
> 
> Per *come abbiamo costruito* le densità $\underline{q}, \overline{q}$ si ha
> $$
> E[\underline{Y}]\leq E[X] \leq E[\overline{Y} ]
> $$
> che sono equivalenti a
> $$
> \begin{align}
> & E[\underline{Y} ]=\sum x \underline{q}(x)=\sum^{n-1}_{k=0}\frac{k}{n}p\{\ldots\}=\sum_{k=0}^{n-1}\frac{k}{n}\int_{\frac{k}{n} }^{\frac{k+1}{n} }f(x) \ \text{d}x \\
> & E[\underline{Y}] = \ldots = \sum_{k=0}^{n-1}\frac{k+1}{n}\int_{\frac{k}{n} }^{\frac{k+1}{n} }f(x) \ \text{d}x
> \end{align}
> $$
> In entrambi i lati possiamo portare dentro le frazioni $\frac{k}{n}$, $\frac{k+1}{n}$ dentro l'integrale, dandoci
> $$
> E[\underline{Y}]\leq \sum_{k=0}^{n-1}\int_{\frac{k}{n} }^{\frac{k+1}{n} }x f(x) \ \text{d}x \leq \int_{0}^1 x f(x) \ \text{d}x \leq \sum_{k=0}^{n-1}\frac{k+1}n{}\int_{\frac{k}{n} }^{\frac{k+1}{n} }f(x) \ \text{d}x=E[\overline{Y}]
> $$
> Per $n\to+\infty$ questi valori si avvicinano.

# 3. Proprietà del valor medio
Abbiamo che il *valor medio* per le *v.a. assolutamente continue* godono le medesime proprietà nel caso discreto ([[Proprietà del Valore Medio]]).

Siamo interessati in vedere la *composizione* delle *variabili assolutamente continue* e la loro media.

#Teorema 
> [!thm] valor medio della composta
> Sia $X$ una *v.a. assolutamente continua* avente densità $f$ e $\psi:\mathbb{R} \longrightarrow \mathbb{R}$ una *applicazione continua* (o basta che sia misurabile). Sia definita $Y:=\psi \circ X$ la composizione.
> 
> Allora $Y$ ha *valor finito medio* se e solo se
> $$
> \int_\mathbb{R} |\psi(x)|f(x) \ \text{d}x < +\infty
> $$
> in tal caso si ha
> $$
> E[Y]=\int_\mathbb{R}\psi(x)f(x) \ \text{d}x
> $$
^311683

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^311683]]
Omessa. Si tratta di un semplice cambio di variabile: infatti si ha
$$
\int_\Omega \psi(X) \ \text{d}p =\int_\mathbb{R} \psi(x) \ \text{d}p_x=\int_\mathbb{R}\psi(x)f(x) \text{ d}x
$$
La sostituzione in questione è $\text{d}p_x = f(x) \text{d}x$. $\blacksquare$

#Osservazione 
> [!rmk] ipotesi alternative
> Possiamo cambiare le ipotesi per avere che comunque valga il teorema.
> - La condizione su $\psi$ può essere indebolita, basta che sia *continua a tratti* (ovvero tranne su al più un numero finito di punti).
> - Però in tal caso non è assicurato che $Y$ rimanga *assolutamente continua*. Infatti si consideri $\psi(x)=c$ costante.
> $$
> $$

# 4. Definizione di Varianza e Covarianza
#Definizione 
> [!def] varianza per v.a. assolutamente continue
> Sia $X$ una *v.a. assolutamente continua* avente densità $f$.
> 
> Si dice che $X$ ha *momento secondo finito* se la sua composta $X^2$ ha *valor medio finito*, cioè se vale
> $$
> \int_\mathbb{R} x^2 f(x) \ \text{d}x < +\infty
> $$
> In tal caso chiamiamo la *varianza* di $X$ la quantità
> $$
> \operatorname{var}{X}:=E[X^2]-E[X]^2
> $$

#Definizione 
> [!def] covarianza per due v.a. assolutamente continue
> Siano $X,Y$ due *v.a. assolutamente continue aventi momento secondo finito*. Chiamiamo la loro *covarianza* come la quantità
> $$
> \operatorname{cov}{(X,Y)}:=E[XY]-E[X]E[Y]
> $$
> Sono scorrelate se la covarianza è nulla.

Le medesime proprietà per la *varianza, covarianza* nel caso discreto si applicano ugualmente ([[Proprietà della Varianza]], [[Proprietà della Covarianza]]).

