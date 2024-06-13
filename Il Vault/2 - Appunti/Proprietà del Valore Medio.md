---
data: 2024-05-02
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Proprietà del Valore Medio
tipologia: appunti
stato: "0"
capitolo:
---
- - -
*Proprietà (teoremi) sul valore medio. Valore medio delle densità composte, linearità del valore medio, monotonia del valore medio con corollario, confronto tra valori medi, prodotto tra valori medi di variabili aleatori indipendenti.*
- - -
# 0. Voci correlate
- [[Definizione del Valore Medio]]
# 1. Composizione del Valor Medio
#Teorema 
> [!thm] composizione del valor medio
> Sia $X=(X_1,\ldots,X_N)$ un *vettore aleatorio discreto* avente densità congiunta $q:\mathbb{R}^N \longrightarrow \mathbb{R}$. Sia $g:\mathbb{R}^N \longrightarrow \mathbb{R} \in \mathcal{C}^0$. 
> Poniamo la variabile aleatoria $Y$ definita come la composizione $Y:=g \circ X$. Allora $Y$ ha *valore medio finito* (ovvero è definibile) se e solo se
> $$
> \sum_{x \in \mathbb{R}^N} |g(x)|q(x) < +\infty
> $$
> Se ha valore medio finito, allora vale che
> $$
> E[Y]=\sum_{x \in \mathbb{R}^N}g(x)q(x)
> $$

^5ebd9e

In altre parole, al posto di dover la densità associata a $Y$, che potrebbe risultare ostica (o addirittura impossibile!) da trovare, dobbiamo solo calcolare il valore medio *mediante* la $g$ e la $q$, due funzioni già note.

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^5ebd9e]]
Omessa. $\blacksquare$

Una conseguenza diretta di questo teorema è il seguente.

#Proposizione 
> [!prp] calcolo di valori medi su spazi campionari
> Sia $(\Omega, p, \mathcal A)$ uno *spazio di probabilità discreto* e $X$ una variabile aleatoria (in realtà funzione qualsiasi ma vabbè) su di esso avente media finita. Allora possiamo calcolare la sua media mediante lo spazio di probabilità
> $$
> E[X] = \sum_{\omega \in \Omega}X(\omega)p(\{\omega\})
> $$
^1fe452

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^1fe452]]
Basta considerare che abbiamo spazi probabilistici discreti: dunque $\{X = x\}$ formano partizioni di $\Omega$. $\blacksquare$

# 2. Linearità del Valore Medio
Adesso vediamo una proprietà particolare del valore medio, che ce lo fa pensare come una specie di "operatore lineare".

#Proposizione 
> [!prp] il valore medio è lineare
> Siano $X_1, X_2$ due v.a. discrete aventi valore medio finito. Allora valgono le seguenti proprietà:
> i. *omogeneità*
> $$
> \forall c \in \mathbb{R}, E[cX_1]=cE[X_1]
> $$
> ii. *additività*
> $$
> E[X_1+X_2]=E[X_1]+E[X_2]
> $$
^82d56e

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^82d56e]]
Bisogna considerare le composizioni $Y := c \cdot (X_1)$, $Z := (X_1)+(X_2)$ e applicare il teorema sulla composizione del valor medio. $\blacksquare$

# 3. Monotonia e Maggiorazione del Valor Medio
Vediamo le seguenti proprietà, che ci faranno pensare il valor medio come una *"specie di integrale"*, versione probabilistica.

#Proposizione 
> [!prp] monotonia del valor medio
> Siano $X_1, X_2$ due v.a. discrete aventi valore medio finito. Allora vale la seguente implicazione
> $$
> X_1 \leq X_2 \implies E[X_1]\leq E[X_2]
> $$
^0b9728

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^0b9728]]
Basta porre $Y=X_2-X_1$ (da cui si ha $Y \geq 0$), che per linearità ha valore medio finito. Quindi si ha
$$
E[X_2] -E[X_1] =:E[Y]=\sum_{y \geq 0}y p\{Y=y\}\geq 0
$$
che dimostra l'implicazione. $\blacksquare$

#Corollario 
> [!cor] minorazione del valor medio assoluto
> Sia $X$ una v.a. discreta avente valore medio finito. Allora anche $|X|$ ha valore medio finito e vale che
> $$
> \left|E[X]\right| \leq E[|X|]
> $$
^c19c7b

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^c19c7b]]
Basta applicare la composizione su $g:=|\cdot|$. $\blacksquare$

#Osservazione 
> [!rmk] similitudine con gli integrali
> Osserviamo che queste proprietà sono più o meno simili a quelle per *gli integrali di Riemann* ([[Proprietà delle Funzioni Integrabili Secondo Riemann|pagina]]). Infatti, abbiamo che formano uno *spazio vettoriale* (ovvero è l'integral-funktion è lineare), godono della monotonia, hanno minorazioni del valor assoluto.
>
> Possiamo pensare dunque al *valor medio* come una specie di *"controparte"* per l'integrale. Ad esempio
> $$
> \left|\int_I f\right| \leq \int_I |f| \sim |E[X]| \leq E[|X|]
> $$

# 4. Il confronto di valori medi
#Lemma 
> [!lem] confronto di valori medi
> Se $X, Y$ sono due *v.a. discrete* tali che
> $$
> 0 \leq X \leq Y
> $$
> Allora vale la seguente implicazione: 
> $$
> E[Y] \leq +\infty \implies E[X] \leq +\infty
> $$
^6f2599

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^6f2599]]
Si tratta di prendere la successione delle somme parziali delle variabili aleatorie $X_n$ definite come
$$
X_n(\omega)=\left\{\begin{align}&X(\omega), X(\omega) \in \{x_1,\ldots,x_n\} \\ &0, \text{altrimenti}\end{align}\right.
$$
Per ipotesi iniziali abbiamo $X_n \leq Y$. Allora
$$
E[X_n] \leq E[Y]
$$
quindi la serie
$$
E[X_n]:=\sum_n xp\{X=x\}
$$
converge. $\blacksquare$

# 5. Il prodotto tra valori medi di v.a. indipendenti
Adesso vediamo come si comporta il valor medio rispetto al prodotto.

#Proposizione 
> [!prp] prodotto tra valori medi di v.a. indipendenti
> Siano $X_1,\ldots,X_n$ delle *variabili aleatorie discrete* su di esso aventi *valore medio finito*. 
> Allora, se $X_1, \ldots,X_n$ sono *indipendenti*, allora vale che il prodotto $Y:=\prod_n X_n$ ha valor medio finito e vale
> $$
> \boxed{E[Y]=\prod_{j=1}^n E[X_j]}
> $$
^26b472

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^26b472]]
Basta applicare il teorema sulla composizione sulla composta $Y$. Sotto le ipotesi di indipendenza abbiamo 
$$
\sum_{x \in \mathbb{R}^N}|g(x)|q(x) = \sum_{x \in \mathbb{R}^N}\prod_{j=1}^N|x_j|q_jx_j
$$
Posso *"far commutare il prodotto con la somma"*: infatti espandendo l'espressione abbiamo
$$
\sum_{x_1 \in \mathbb{R} }\ldots \sum_{x_N \in \mathbb{R} }\prod^N_{j=1}|x_j|q_jx_j
$$
quindi effettuando lo scambio abbiamo, fissando un $x_j$
$$
\sum_{x \in \mathbb{R}^N}\prod_{j=1}^N|x_j|q_jx_j=\prod^N_{j=1}\sum_{x_j \in \mathbb{R} }\underbracket{|x_j|q_jx_j}_{\sim E[X_j]}<+\infty
$$
che prova la tesi del primo punto. Ripetendo gli stessi passaggi senza il valor assoluto, abbiamo la tesi finale. $\blacksquare$
