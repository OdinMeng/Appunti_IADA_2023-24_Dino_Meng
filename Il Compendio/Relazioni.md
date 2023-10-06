---
data: 2023-09-28
corso: "[[Analisi Matematica I]]"
argomento: Relazioni
tipologia: appunti
stato: "1"
---
*Definizione di relazioni con esempi; alcuni attributi che possono essere dati, relazioni di equivalenza e classi di equivalenza.*
- - -
# DEF 1. Relazioni
**OSS 3.1.** Si vuole rappresentare $A$ come l'insieme dei numeri divisibili per tre: $$\begin{align}A&=\{n\in\mathbb{N}: \exists k\in\mathbb{N}: n=3k\}\\&=\{n\in\mathbb{N}:\mathcal{P}(n)\}\end{align}$$Notiamo che per definire $A$ viene usato un [predicato](Predicati%20e%20Quantificatori) unario; si individuano *singoli elementi n* che soddisfano $\mathcal{P}(n)$.
Invece per definire *prodotti cartesiani* si può usare i *predicati binari*; qui individuo in $A\times B$ le coppie $(a,b)$ che soddisfano un certo predicato $\mathcal{Q}(a,b)$.
**ESEMPIO 3.1.1.**
Siano gli insiemi $A$ l'insieme dei *ragazzi in questa aula*, $B$ l'insieme delle *ragazze in questa aula*; il predicato $\mathcal{P}(x,y): \text{x è amico di y}$. Ora si vuole rappresentare graficamente il prodotto cartesiano $A \times B$.
![[Pasted image 20231001144841.png]]
Se si individua che $x$ è amico di $y$, allora si segna il punto $(x,y)$ dove si verifica il predicato $\mathcal{P}(x,y)$.
Il predicato si definisce come una **relazione tra due insiemi**; in questo caso possiamo chiamarlo come una relazione *"d'amicizia"*.

**DEF 3.** Una **relazione** tra $A$ e $B$ si definisce come il *predicato $\mathcal{P}(x,y)$ a valori in $A \times B$.*
	**SUBDEF 3.1.** Se $A=B$, allora si dice che la **relazione** è una **relazione su $A$.

**ESEMPIO 3.1.**
Sia $A = \mathbb{N} \diagdown \{0\}$; "$|$" la relazione *"divide"*; diciamo che $n | m$ se $\exists k \in \mathbb{N}: m = nk$
	**SUBESEMPIO 3.1.1.** $3|12$ è vero in quanto $k=4$, $3|5$ invece è falso in quanto $\nexists k$.
**GRAFICO DELLA RELAZIONE DIVIDE.**
![[Pasted image 20231001144852.png]]

**ESEMPIO 3.2.** Consideriamo:
- $A = \mathbb{Z} = \{\ldots, -2, -1, 0, 1, 2, \ldots\}$
	- Breve nota storica: I numeri interi si denotano con $\mathbb{Z}$ dal tedesco *"(der) Zahl"*, ovvero *"Numero"*
- Sia $m=3$
- $x$ è in relazione con $y$ se $\exists k \in \mathbb{Z}: x-y=3k$
	- Questa relazione si definisce come **congruenza modulo n** e viene denotata come $x\equiv_{n}y$ o $x \equiv y \text{ mod }n$  
**GRAFICO DELLA RELAZIONE CONGRUENZA MODULO N(3).**
![[Pasted image 20231001144902.png]]

# DEF 2. Relazioni riflessive, simmetriche e transitive
Sia $A$ un insieme; sia $\rho$ una relazione in $A$; per dire che un elemento $a\in A$ è in relazione con $b\in A$ si scrive $a \rho b$.

**DEF 4.1.** Si dice che la relazione $\rho$ è **riflessiva** se $$\forall x \in A, x\rho x$$
**DEF 4.2.** Si dice che relazione $\rho$ è **simmetrica** se $$\forall x,y \in A, x\rho y \implies y \rho x$$
**DEF 4.3.** Si dice che la relazione $\rho$ è **transitiva** se$$\forall x,y,z \in A, x\rho y \land y\rho z \implies x \rho z$$**ESEMPIO 4.3.1.** La relazione $|$ (divide) è transitiva.
	**DIM.** $$\begin{align}&x|y \land y|z \stackrel{?}\implies x|z \\ & \text{1. }x|y \iff \exists k_1: y = k_1x \\ &\text{2. }y|z \iff \exists k_2:z=k_2y = (k_1k_2)x = k_3x \implies x | z\space\blacksquare\end{align}$$
**ESERCIZIO.** Verificare se $\equiv_n$ è transitiva.
1. Si prendono tre valori $x, y, z \in \mathbb{Z}$ e la relazione $\equiv_n \text{ su } \mathbb{Z}$
2. Dire che $\equiv_n$ è transitiva equivale a dire la seguente:
		1. $$x \equiv_n y \land y\equiv_nz \stackrel{?}\implies x\equiv_nz$$
		2. Per definizione, $$ \begin{align} &x \equiv_n y \iff \exists k_1 \in\mathbb{Z}: x-y=nk_1 \\ &y \equiv_n z \iff \exists k_2 \in \mathbb{Z}: y-z = nk_2 \\ &x \equiv_nz \iff \exists k_3 \in \mathbb{Z}: x-z = nk_3\end{align}$$
		3. Si osserva che $(x-y)+(y-z) = x-z$; pertanto $x-z=nk_1+nk_2=n(k_1+k_2)$ e si pone $k_3 = k_1+k_2$, completando così la dimostrazione. $\blacksquare$

# DEF 3. Relazione antisimmetrica
**DEF 3.** Siano: $A$ un insieme, $\rho$ una relazione; $\rho$ si dice **antisimmetrica** se $$\forall x,y\in A, x \rho y \land y\rho x \implies x=y$$
**ESERCIZIO.** Mostrare che $|$ è antisimmetrica.
1. Si considerano i due valori $x, y \in \mathbb{N}\diagdown\{0\}$ e la relazione $|$ su $\mathbb{N}\diagdown\{0\}$
2. Per definizione, $$\begin{align}x | y \iff \exists k_1 \in \mathbb{N}: y &= k_1x\\y|x \iff \exists k_2 \in \mathbb{N}: x &= k_2y \end{align}$$
3. Osservare che: $$x=y \iff k_1x = k_2y $$è vera se e solo se $k_1 = k_2$
4. Riprendendo il passaggio **2.**, $$\begin{align}x | y \iff \exists k_1 \in \mathbb{N}: y &= k_1x\\y|x \iff \exists k_2 \in \mathbb{N}: x &= k_2y \\ x &= k_1k_2x\\k_1k_2&=1\end{align}$$
5. Osservare che $k_1k_2 = 1$ è vera in $\mathbb{N}$ solo per l'unico valore $k_1=k_2=1$. Riosservando il passaggio tre, notiamo che si è verificato che $k_1=k_2$, dimostrando così che $|$ è antisimmetrica. $\blacksquare$ 

# DEF 4. Relazione d'ordine
**DEF 4.** Se $\rho$ è:
- Riflessiva
- Antisimmetrica
- Transitiva
Allora si dice che $\rho$ è una **relazione d'ordine** (ordinamento)
	**SUBDEF 4.1.** Se $A$ è l'insieme, $\rho$ una relazione d'ordine, allora si definisce $(A, \rho)$ come un **insieme ordinato**
	**ESEMPIO 4.1.1.** $(\mathbb{R}, \geq)$ è un *insieme ordinato*; infatti se disponiamo su una riga tutti i numeri $\mathbb{R}$, si vede immediatamente che tutte e tre le condizioni si verificano. Ad esempio $x \geq x$ è vero in quanto $x=x$; oppure se $x\geq y \land y \geq x$, allora $x=y$.
![[Pasted image 20231001144915.png]]
## DEF 4.1. Relazione d'ordine totale
**DEF 4.1.** Inoltre una *relazione d'ordine* $\rho$ si definisce anche come una *relazione d'ordine* **totale** se $\forall x,y \in A, x \rho y \vee y \rho x$.
# DEF 5. Relazione di equivalenza
**DEF 5.** Se $\rho$ è:
- Riflessiva
- Simmetrica
- Transitiva
Allora $\rho$ viene definita come una **relazione d'equivalenza**.

## DEF 5.1. Classe di equivalenza
**DEF 5.1.** Siano $A$ un insieme (e $a \in A$) e $\rho$ una relazione d'equivalenza, definisco la classe di equivalenza $$[a]_{\rho} :=\{b \in A: a \rho b\}$$Quindi è un insieme che contiene *tutti* gli elementi in reazione di $A$.

**ESEMPIO 5.1.** $$\begin{align} [0]_{\equiv_3} &=\{\ldots,-3,0,3,\ldots\} \\ [1]_{\equiv_3} &=\{\ldots,-2,1,4,\ldots\}\\ [2]_{\equiv_3} &=\{\ldots,-1,2,5,\ldots\} \\  \end{align} $$
Si nota che $\forall k \in \mathbb{Z}, [0k]_{\equiv_3}$ sono le medesime; stesso discorso per $[1]_{\equiv_{3}}$ e per $[2]_{\equiv_{3}}$

### DEF 5.1.1. Insieme Quoziente
L'insieme delle classi di equivalenza su un insieme $A$ si chiama **insieme quoziente rispetto all'equivalenza**; $${A}\diagup{\rho}$$
**ESEMPIO 5.1.1.1.** $$\mathbb{Z}\diagup\equiv_3 \space= \{[0]_{\equiv_{3}},[1]_{\equiv_{3}},[2]_{\equiv_{3}}\}$$
Il concetto dell'**insieme quoziente** è utile in quanto essa può essere usata per certe situazioni nella vita reale.
**ESEMPIO 5.1.1.2.** Si vuole studiare $\equiv_{12}$, $12$ essendo il numero delle lancette dell'orologio. Questo è utile in quanto, se iniziassimo a contare le ore dall'ora $0$ denotandolo come $h$, allora possiamo automaticamente trovare la posizione della lancetta ad una certa ora $h$, facendo semplicemente $[h]_{\equiv_{12}}$. 
> [!warning] Poi sono state spiegate altre robe su questo che non ho capito, boh
