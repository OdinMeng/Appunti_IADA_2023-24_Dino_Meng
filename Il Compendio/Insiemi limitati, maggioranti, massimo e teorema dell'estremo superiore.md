---
data: 2023-10-09
corso: "[[Analisi Matematica I]]"
argomento: Insiemi limitati, maggioranti, massimo e teorema dell'estremo superiore
tipologia: appunti
stato: "1"
---
- - -
# 1. Insiemi limitati
**DEF 1.1.** Sia $A \subseteq \mathbb{R}$, $A$ si dice un insieme **limitato superiormente** se $$\exists M \in \mathbb{R}: \forall a, \in A; a \leq M$$
Graficamente, un insieme *limitato superiormente* si rappresenta così:
![[Pasted image 20231011161237.png]]
**ESEMPIO 1.1.1.** Considero $A = \{x \in \mathbb{R}: x^2+3x+1=0\}$.
$A$ è *limitato superiormente*, in quanto risolvendo $A$ otteniamo l'insieme $A = \{\frac{-3-\sqrt{5}}{2}, \frac{-3+\sqrt{5}}{2}\}$, e scegliendo $M = 0$ si ha che entrambi elementi di $A$ sono minori di $0$.

**DEF 1.2.** $A \subseteq \mathbb{R}$ si dice un insieme **limitato inferiormente** se $$\exists m \in \mathbb{R}: \forall a \in A; a \geq m$$
Graficamente, 
![[Pasted image 20231011161248.png]]

**DEF 1.3.** $A \subseteq \mathbb{R}$ si dice **limitato** se è sia limitato *superiormente* che *inferiormente*.
**ESEMPIO 1.3.1.** $[a, b]$ è limitato.
Infatti se si scelgono $M = b, n = a$ per definizione risulta vero che questo [intervallo](Intervalli) è *limitato*.

**OSS 1.3.1.** Se $A$ è *limitato* $\iff$ $\exists R > 0$ tale che $$A \subseteq [-R, R]$$
	**DIM.** Da quanto visto in [[Connettivi]], basta dimostrare che entrambe le implicazioni sono vere; ovvero
	1. $$\exists R: A \subseteq [-R, R] \implies A \text{ è limitato}$$
	   che graficamente rappresenta
![[Pasted image 20231011161316.png]]
	   quindi è vera
	1. $$\text{A è limitato} \implies \exists R: A \subseteq [-R, R]$$
	   che graficamente rappresenta
![[Pasted image 20231011161334.png]]
	   quindi anche questa è vera.

**OSS 1.3.2.** Vorrei trovare un modo per definire gli *insiemi limitati* su un piano $\pi$.
E' possibile definirlo tramite il seguente: *"Se riesco a mettere l'insieme $A$ all'interno di una sfera di raggio $R$, allora esso è limitato."*
Graficamente,
![[Pasted image 20231011161349.png]]

**DEF 1.4.** Un insieme $A$ si dice *superiormente illimitato* quando neghiamo che $A$ è superiormente limitato; ovvero $$\neg(\exists M \in \mathbb{R}, \forall a \in A, a \leq M)$$
ovvero $$\forall M \in \mathbb{R}, \exists a \in A: a > M$$
che graficamente vuol dire che ad ogni $M_n$ che fissiamo, esiste *sempre* un valore $a_n$ che è più grande di $M$.
![[Pasted image 20231011161409.png]]

Il discorso è analogo per *insiemi inferiormente illimitati* e *insiemi illimitati*.
# 2. Maggioranti, massimi; minoranti e minimi
**Maggioranti e minoranti** 
**DEF 2.1.** Sia $A \subseteq \mathbb{R}$, $M \in \mathbb{R}$.
Se $\forall a \in A, a \leq M$, (ovvero $A$ è *limitato inferiormente*) il valore $M$ si dice un **maggiorante di $A$**. 
**DEF 2.2.** Analogamente, se $A \subseteq \mathbb{R}$, $m \in \mathbb{R}$, m è **minorante di $A$** quando $\forall a \in A, m \leq a$.

**Massimi e minimi** 
**DEF 2.3.** Siano $A \subseteq \mathbb{R}$, $\mu \in \mathbb{R}$, se:
- $\mu$ è maggiorante di $A$ e
- $\mu \in A$
allora $\mu$ è il **massimo di $A$**.
$$\mu := \begin{cases}\mu \in A \\\forall a \in A, a \leq \mu\end{cases}$$
**DEF 2.4.** Analogamente, se $A \subseteq \mathbb{R}$ e $\nu \in \mathbb{R}$, allora definisco il **minimo di $A$**:
	$$\nu := \text{minimo di A} = \begin{cases}\nu \in A\\\forall a \in A, a \geq \nu\end{cases} $$

**OSS 2.1.** Sia $A$ un insieme *limitato inferiormente*.
Suppongo che esistano due massimi di $A$, $\mu_1, \mu_2$; si avrebbe allora $\mu_1 = \mu_2$, in quanto può esistere *solo* il *massimo* di $A$.
	**DIM.** Per assurdo suppongo che $\mu_1 \neq \mu_2$. Per definizione del *massimo*, $$\begin{cases}\mu_1 \implies \forall a \in A, a \leq \mu_1 \\ \mu_2 \implies \mu_2 \in A\end{cases} \implies \mu_2 \leq \mu_1 \text{ (1)}$$
	e $$\begin{cases}\mu_1 \implies \mu_1 \in A \\ \mu_2 \implies \forall a \in A, a \leq \mu_2\end{cases} \implies \mu_1 \leq \mu_2 \text{ (2)}$$
	Quindi combinando le *(1)* e *(2)*, abbiamo $$(\mu_2 \leq \mu_1) \land (\mu_1 \leq \mu_2) \iff \mu_1 = \mu_2 \ \blacksquare$$
Il discorso è analogo per il *minimo* di $A$.

**ESEMPIO 2.A.** Consideriamo [l'intervallo](Intervalli) $$A = \ ]1, 2[$$ci chiediamo se questo intervallo ha *maggioranti e/o minorante* e se ha *massimo e/o minimo*.
1. $A$ ha sia *maggioranti* che *minoranti*, infatti possiamo porre $M = 2$ e $m = 1$; ma possiamo anche porre $M = 3$ e $m = 0$. 
   Allora *definiamo* l'insieme dei maggioranti di $A$, $$A^{*} := \{\text{maggioranti di }A\} = [2, +\infty[$$
   e l'insieme dei minoranti di $A$, $$A_{*} := \{\text{minoranti di }A\} = \ ]-\infty, 1]$$
2. Però $A$ non ha né *massimi* né *minimi.*
   Infatti devo provare che se $x \in A$, allora $x$ NON può essere il *massimo di $A$*. 
   Tracciando l'intervallo $A$ e segnando un punto $x$ all'interno, riesco a trovare un elemento più grande di $x$? Sì, se considero la media aritmetica tra $x$ e $2$. Infatti $$x < \frac{x+2}{2}<2$$
   Analogo il discorso per i *minimi*
# 3. Estremi superiori e inferiori
l'esempio 2.A. di prima, abbiamo un problema interessante; ovvero "gli insiemi limitati hanno sempre massimo e minimo?".
La risposta è *no*, da quanto visto prima; però è interessante osservare che esiste sempre il *"miglior"* maggiorante e il *"miglior"* minorante. Ora li vediamo.

**DEF 3.1.** Sia $A$ superiormente limitato.
Chiamo **l'estremo superiore di $A$** il *minimo* dell'insieme dei *maggioranti di $A$* ($A^{*}$).

**DEF 3.2.** Sia $A$ inferiormente limitato.
Chiamo **l'estremo inferiore di $A$** il *massimo* dell'insieme dei *minoranti di $A$* ($A_{*}$).
# 4. Teoremi sugli estremi superiori (e inferiori)
**TEOREMA 4.1.** (*Teorema dell'esistenza dell'estremo superiore*)
Sia $A \subseteq \mathbb{R}$, $A \neq \emptyset$, e $A$ *superiormente limitato*, allora $$\exists \xi \in \mathbb{R}: \xi \text{ è estremo superiore di }A$$
	**DIM.** Per ipotesi, abbiamo $A \subseteq \mathbb{R}$ e $A \neq \emptyset$.
	Sia quindi $A^{*} = \{\text{maggioranti di }A\}$; allora $A^{*} \neq \emptyset$ (in quanto $A$ è non vuoto).
	e per definizione del maggiorante di $A$, $$\forall a \in A, \forall b \in A^{*}, a \leq b$$
	Osservo quindi che posso applicare [l'assioma di Dedekind (o di separazione)](Assiomi%20dei%20Numeri%20Reali) per gli insiemi $A$ e $A^{*}$. Pertanto $$\exists \xi:\forall a \in A, \forall b \in A^{*};  a \leq \xi \leq b$$
	In particolare $a \leq \xi$ vuol dire che $\xi$ è *maggiorante di A*;
	e $\xi \leq b$ vuol dire che $\xi$ è il *minimo* dei *maggioranti di A*.
	Quindi, per definizione $\xi$ è l'*estremo superiore di $A$*. $\blacksquare$

**ESERCIZIO 4.1.** Dimostrare che se $A \neq \emptyset$ e $A$ è inferiormente limitato, allora $$\exists \eta \in \mathbb{R}: \eta \text{ è l'estremo inferiore di }A$$
Dato che per ipotesi $A$ è non vuota ed è inferiormente limitata, allora sicuramente $$\forall a \in A, \forall b\in A_{*}, b \leq a$$per la definizione di minorante. Osserviamo che si può applicare l'assioma *S)*; quindi sicuramente $$\exists \eta \in \mathbb{R}: b \leq \eta \leq a$$Ovvero $\eta$ è il massimo di $A_{*}$ ed è un minorante di $A$. Ovvero *l'estremo inferiore di $A$*.

**TEOREMA 4.2.** *(le proprietà dell'estremo superiore $\sup A$)*
Sia $A \subseteq \mathbb{R}$, $A \neq \emptyset$, $\alpha \in \mathbb{R}$.
$$\alpha = \sup(A) \iff \begin{cases}\forall a \in A, a \leq \alpha \text{ (1)}\\ \forall \varepsilon > 0, \exists \bar{a}\in A: \bar{a} > \alpha -\varepsilon \text{ (2)} \end{cases}$$
In parole semplici, la *(1)* vuol dire che $\alpha$ è un maggiorante di $A$; la *(2)* invece vuol dire che per qualsiasi valore $\varepsilon$ positivo, allora $a - \varepsilon$ non è maggiorante di $A$.
	**DIM.** Sia $\alpha = \sup(A)$, cioè se è il *minimo dei maggioranti* di $A$.
	Ma allora innanzitutto $\alpha$ è un *maggiorante di $A$* (1)
	Ma quindi $\alpha$ è il *minimo dei maggioranti di $A$*; quindi se sottraggo ad $A$ qualsiasi valore positivo, non è più un maggiorante di $A$. Pertanto scrivo $$\begin{align}\forall \varepsilon > 0,\  &\neg(\forall a \in A, a \leq a - \varepsilon)\\ &\exists a \in A: a > a - \varepsilon\end{align}$$ovvero la (2). $\blacksquare$
	Volendo si può ragionare anche viceversa, partendo dai presupposti (1) e (2) e verificando che vogliono dire le stesse cose.

**TEOREMA 4.2.1.** *(versione $\inf A$*)
Sia $A \subseteq \mathbb{R}$, $A \neq \emptyset$, $\beta \in \mathbb{R}$.
$$\beta = \inf(A) \iff \begin{cases}\forall a \in A, a \geq \beta \text{ (1)} \\\forall \varepsilon >0, \exists \bar{a} \in A: \bar{a} > a + \varepsilon \text{ (2)} \end{cases}$$
# 5. Esempio generale
**ESEMPIO 5.** Considero $$A = \{\forall n \in \mathbb{N} \diagdown\{0\}, 1-\frac{1}{n} \}$$
Voglio trovare le seguenti: $\sup(A)$, $\inf(A)$, $\max(A)$, $\min(A)$.

1. Il primo passo è quello di fare un disegno che rappresenta per poter "visualizzare" l'insieme $A$.
![[Pasted image 20231011161432.png]]
Quindi vediamo che $$ A = \{0, 1, \frac{1}{2}, \frac{2}{3},\ldots,\frac{n-1}{n}\}$$
2. $A$ è quindi limitato, da quanto si può evincere dal disegno; infatti scegliamo $m=0$, $M=1$. 
3. Siccome $A \neq \emptyset$, per il *teorema 4.1.* (o *esercizio 4.1.* per esattezza), posso trovare $\inf{A}$ e $\min{A}$;  
   $$\min(A) = \inf(A) = 0$$
   In quanto, per il *teorema 4.2.*$$\begin{cases}0\leq1-\frac{1}{n}, \forall n \\ \forall \varepsilon>0, x+\varepsilon\text{ non è minorante di A} \end{cases}$$
4. Possiamo trovare il *maggiorante* $1$. Questo in quanto $$\forall n, n-1 < n \implies \forall n, \frac{n-1}{n}<1 \iff \forall n, 1-\frac{1}{n} < 1$$In particolare si verifica che è l'*estremo superiore*.
   Però se si sceglie $\alpha < 1$, sicuramente (per la [proprietà di Archimede](Conseguenze%20dell'esistenza%20dell'estremo%20superiore)????) si verifica $$\exists n: \alpha < 1-\frac{1}{n} < 1$$ovvero per qualunque $a < 1$ si scelga, esiste un $n$ abbastanza grande da poter superare $\alpha$.
5. Quindi $\sup(A) = 1$ e non esiste $\max(A)$. 

**OSS 5.1.** Se un insieme ha un *minimo* $\min$ (o *massimo $\max$*), allora tale valore è *l'estremo inferiore* $\inf$ (o *estremo superiore* $\sup$). Però il contrario non deve necessariamente valere, come visto sopra.