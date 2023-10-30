---
data: 2023-10-24
corso: "[[Analisi Matematica I]]"
argomento: Definizione di Limite di funzione
tipologia: appunti
stato: "0"
---
*Idea fondamentale del limite di una funzione; definizione di limite in tutti i casi; dimostrazione dell'esistenza di un limite. Definizione di limite destro e sinistro.*
- - -
# 0. Argomenti propedeutici
Per affrontare uno degli argomenti più importanti dell'***analisi matematica***, ovvero i *limiti*, è necessario conoscere e ricordare alcuni argomenti:
- [[Intorni]] di $x_0 \in \mathbb{\tilde{R}}$
- [[Punti di aderenza e di accumulazione]] per un insieme $E \subseteq \mathbb{R}$
# 1. Idea fondamentale
**IDEA.** Prendiamo la una [funzione](Funzioni) di variabile reale (**DEF 1.1.**) del tipo $$f: E \longrightarrow \mathbb{R}, E \subseteq \mathbb{R}$$e consideriamo un punto $x_0 \in \tilde{\mathbb{R}}$ che è un *punto di accumulazione* per $E$ ([[Punti di aderenza e di accumulazione]], **DEF 2.1.**).
Ora voglio capire come posso *rigorosamente* formulare la seguente frase:
*"Se $x \in E$ si avvicina a $x_0 \in \mathbb{\tilde{R}}$, allora $f(x)$ si avvicina a un valore $L \in \mathbb{\tilde{R}}$."*
Ovvero col seguente grafico abbiamo
[ GRAFICO DA FARE ]

Oppure un caso più particolare, con $$\begin{align}f: & \ \mathbb{R}\diagdown\{0\} \longrightarrow \mathbb{R} \\ & \ x \mapsto x \cdot \sin(\frac{1}{x}) \end{align}$$dove $0$ è un punto di accumulazione per $E$ (il dominio), ma non ne fa parte.
[ GRAFICO DA FARE ]
# 2. Definizione rigorosa
Ora diamo una *formalizzazione rigorosa* del concetto appena formulato sopra.

**DEF 2.1.** *Definizione del LIMITE*
Sia $f$ una *funzione di variabile reale* di forma $$f: E \longrightarrow \mathbb{R}, E \subseteq \mathbb{R}$$Siano $x_0, L \in \mathbb{\tilde{R}}$, $x_0$ un *punto di accumulazione* per $E$. 
Allora definiamo il **limite di una funzione** $$\lim_{x \to x_0}f(x) = L$$se è vera la seguente: $$\begin{gather}&\forall V \text{ intorno di }L, \exists E \text{ intorno di }x_0 \text{ tale che:}\\& \forall x \in E, x \in U \diagdown \{x_0\} \implies f(x) \in V\end{gather}$$
**PROP 2.1.** Questa *definizione* del limite può essere può essere interpretata in più casi.
	**CASO 1.** Siano $x_0, L \in \mathbb{R}$. Quindi dei valori *fissi* sulla *retta reale*. 
	Abbiamo dunque il seguente disegno:
	[ DISEGNO DA FARE ]
	Ora interpretiamo la definizione del *limite* di $f(x)$, $\lim_{x\to x_0}f(x) = L$ in questo caso: $$\begin{gather}&\forall V \text{ intorno di }L, \exists E \text{ intorno di }x_0 \text{ tale che:}\\& \forall x \in E, x \in U \diagdown \{x_0\} \implies f(x) \in V\end{gather}$$
	significa
	$$\begin{gather}&\forall\varepsilon > 0, (L-\varepsilon, L+\varepsilon) \subseteq V, \exists \delta>0: (x_0-\delta, x_0+\delta)\subseteq U \\& \text{tale che }\forall x \in E \\ & 0<|x-x_0| < \delta \implies |f(x)-L| < \varepsilon \end{gather}$$che graficamente corrisponde a 
	[ DISEGNO DA FARE ]
	**OSS 2.1.** Grazie a questa interpretazione è possibile creare un'analogia per il limite; infatti se immaginiamo che l'intorno di $L$ con raggio $\varepsilon$ è il *bersaglio* e se esiste il *limite*, allora deve essere sempre possibile trovare un intorno attorno $x_0$ con raggio $\delta$ tale per cui facendo l'immagine di tutti i punti in questo intorno, *"colpisco"* il *"bersaglio"* (ovvero l'intorno di $L$).
	**OSS 2.2.** Alternativamente è possibile pensare all'esistenza del *limite* come una *"macchina"* che dato un valore $\varepsilon$ ti trova un valore $\delta$. 
Ora passiamo al secondo caso.
	**CASO 2.** Ora interpretiamo $$\lim_{x\to x_0}f(x) = +\infty$$ovvero dove $L \in \mathbb{\tilde{R}}$. Allora interpretando il significato del limite abbiamo: $$\begin{gather}\forall M > 0, (M, +\infty), \exists \delta > 0: (x_0- \delta, x_0+\delta)\subseteq U: \\ \text{tale che }\forall x \in E, \\ 0<|x-x_0|<\delta \implies x > M \end{gather}$$ovvero abbiamo graficamente che per una qualsiasi retta orizzontale $x = M$, troveremo *sempre* un intervallo tale per cui l'immagine dei suoi punti superano sempre questa retta orizzontale.
	[ DISEGNO DA FARE ]
	
Ora al terzo caso.
	**CASO 3.** Ora abbiamo $$\lim_{x \to +\infty} f(x) = L$$
	ovvero dove $x_0 \in \mathbb{\tilde{R}}$. Interpretando la definizione si ha: $$\begin{gather} \forall \varepsilon >0, (L-\varepsilon, L+\varepsilon), \exists N >0 :(N, +\infty):\\\text{tale che }\forall x \in E, \\x > N \implies |f(x)-L| < \varepsilon\end{gather}$$ovvero graficamente ho un grafico di una funzione $f(x)$, dove disegnando un qualsiasi intorno di $L$ riuscirò sempre a trovare un valore $N$ tale per cui tutti i punti dell'insieme immagine dell'intervallo $(N, +\infty)$ stanno *sempre* all'interno dell'intorno di $L$, indipendentemente da quanto stretto è questo intervallo.
	[ GRAFICO ]
	
Infine all'ultimo caso.
	**CASO 4.** Finalmente abbiamo $$\lim_{x \to+\infty}f(x) = +\infty$$quindi *per definizione* ho $$\begin{gather}\forall M; (M, +\infty), \exists N; (N, +\infty): \\ \text{tale che }\forall x\in E, \\x > N \implies f(x) > M \end{gather}$$ovvero ciò vuol dire che fissando un qualunque valore $M$ riuscirò *sempre* a trovare un valore $N$ tale per cui prendendo un qualsiasi punto $x > N$, il valore immagine di questo punto supererà sempre $M$.
	**OSS 2.3.** Nota che questo *NON* deve necessariamente significare che la funzione è *monotona crescente*. Però vale il contrario: infatti $$\forall x_0, x_1 \in E, x_1 > x_0 \implies f(x_1) > f(x_0)$$possiamo fissare $f(x_0) = M$, $x_0 = N$, abbiamo allora $$\forall M, N, \exists x_1 \in E: x_1 > N \implies f(x_1) > M$$questa condizione è sempre vera. In questo caso basta solamente prendere un qualsiasi $x_1 > x_0$. 

## 2.1. Infinitesimo 
**APPROFONDIMENTO PERSONALE a.** Usando la *nostra* definizione del limite e ponendo $L = 0, x = +\infty$, otteniamo un risultato che è consistente con la definizione di *infinitesimo*$^{(1)}$ secondo dei noti matematici russi, tra cui uno è Kolmogorov.
**DEF 2.a.** Si definisce un infinitesimo come una *grandezza variabile* $\alpha_n$, denotata come $$\lim_{x \to +\infty}\alpha_n = 0 \text{ oppure }\alpha_n \to 0$$che possiede la seguente proprietà: $$\forall \varepsilon >0, \exists N>0: \forall x \in E, x>N \implies |\alpha_x|<\varepsilon$$
**OSS 2.a.** Notiamo che la definizione dell'*infinitesimo* diventerà importante per il calcolo degli *integrali*, in particolare la *somma di Riemann*.
- - -
>$^{(1)}$*"[...] La quantità $\alpha_n$ che dipende da $n$, benché apparentemente complicata gode di una notevole proprietà: se $n$ cresce indefinitamente, $\alpha_n$ tende a zero. Tale proprietà si può anche esprimere dicendo che dato un numero positivo $\varepsilon$, piccolo a piacere, è possibile scegliere un interno $N$ talmente grande che per ogni $n$ maggiore di $N$ il numero $\alpha_n$ è minore, in valore assoluto, del lato numero $\varepsilon$."* 
>
Estratto tratto da *Le matematiche: analisi, algebra e geometria analitica* di *A.D. Aleksandrov*, *A. N. Kolmogorov* e *M. A. Lavrent'ev* (1974, ed. Bollati Boringhieri, trad. G. Venturini).
- - -
# 3. Limite destro e sinistro
**PREMESSA.** Sia una funzione $f$ di variabile reale del tipo $$f: E \longrightarrow \mathbb{R}, E \subseteq \mathbb{R}$$$x_0 \in \mathbb{R}$ un punto di accumulazione per $E$, $L \in \mathbb{\tilde{R}}$.
Allora definisco le seguenti:
**DEF 3.1.** Il **limite della funzione $f$ che tende a $x_0$ da destra** come $$\lim_{x \to x_0^+} f(x) = L$$come $$\begin{gather}\forall V \text{ intorno di }L, \exists U \text{ intorno di }x_0: \forall x \in E, \\x \in U \cap (x_0, +\infty) \implies f(x) \in V \end{gather}$$ovvero come il *limite di $f$*, considerando però *solo* i punti che stanno a *destra* di $x_0$.
[ GRAFICO DA FARE ]

**DEF 3.2.** Analogamente **il limite della funzione $f$ che tende a $x_0$ da sinistra** è $$\lim_{x \to x_0^-} f(x) = L$$ovvero $$\begin{gather}\forall V \text{ intorno di }L, \exists U \text{ intorno di }x_0: \forall x \in E, \\x \in U \cap(-\infty, x_0) \implies f(x) \in V \end{gather}$$
**OSS 3.1.** Si può immediatamente verificare che $$\lim_{x \to x_0} f(x) = L \iff \lim_{x \to x_0^+}f(x)=\lim_{x \to x_0^-}f(x) = L$$Infatti l'insieme dei $x$ del limite *destro* e/o *sinistro* su cui verifichiamo che $f(x) \in V$ è un *sottoinsieme* dell'insieme di cui si verifica col limite generale. Pertanto facendo l'unione tra questi due sottoinsiemi abbiamo$$[U \cap (-\infty, x_0)] \cup [U \cap(x_0, +\infty)] = U\diagdown\{x_0\}$$
**DEF 3.1. (DALLA DISPENSA)** Avevamo appena osservato che coi limiti *destri* e/o *sinistri* abbiamo semplicemente fatto una *restrizione* all'insieme $U\diagdown\{x_0\}$ di cui si cerca di verificare che $f(U\diagdown\{x_0\}) \subseteq V$. Dunque definiamo il **limite della funzione ristretta a $B$**, un qualunque sottoinsieme di $E$ per cui $x_0$ è di accumulazione: $$\lim_{x\to x_0}f_{|B}(x) = L$$ovvero $$\begin{gather}\forall V \text{ intorno di }L, \exists U \text{ intorno di }x_0: \forall x \in B, \\x \in U\diagdown\{x_0\} \implies f(x) \in V\end{gather}$$
# 4. Strategia per verificare l'esistenza di limiti
La nostra definizione presuppone che dobbiamo *eseguire* una serie *infinita* di verifiche per dimostrare che un limite esiste; infatti si dovrebbe scegliere tutti gli $\varepsilon > 0$ e trovare un $\delta$ associato.
Vogliamo invece sviluppare una serie di *strategie* per verificare l'esistenza dei limiti, come i *teoremi* e le *proprietà* sui limiti come vedremo in [[Teoremi sui Limiti di Funzione]], oppure *interpretando* la definizione del limite per poter trovare una *"formula"* che associa ad ogni epsilon un delta.

**ESEMPIO 4.1.**
Voglio verificare che $$\lim_{x \to 1} x^2+1=2$$ovvero, interpretando la definizione otteniamo il seguente da verificare: $$\forall \varepsilon > 0, \exists \delta > 0: \forall x \in E, 0<|x-1|<\delta \implies |x^2+1-2| < \varepsilon$$
Allora *"faccio finta*" di conoscere un $\varepsilon$ fissato, sviluppiamo dunque l'equazione a destra: $$\begin{align} |x^2+1-2| &< \varepsilon \\ |x^2-1| &< \varepsilon \\ |(x+1)(x-1)| &< \varepsilon \\ |x+1||x-1| &< \varepsilon \end{align}$$Osservo che se poniamo $x \in [0, 2)$ e quindi $\delta < 1$, allora abbiamo $|x+1| < 3$. Allora da ciò discende che $$|x+1||x-1| < 3 |x-1| < 3\delta$$abbiamo quindi $$0<|x-1| < \delta \implies |x+1||x-1|<3\delta, \forall x \in [0, 2)$$Infatti abbiamo implicitamente scelto $\varepsilon = 3\delta$, verificando così il limite per $\forall x \in [0, 2)$.
Invece se $x \geq 2$, basta scegliere $\delta = 1$ [Non ho ancora capito perchè]

