---
data: 2023-10-24
corso: "[[Analisi Matematica I]]"
argomento: Definizione di Limite di funzione
tipologia: appunti
stato: "1"
---
*Idea fondamentale del limite di una funzione; definizione di limite in tutti i casi; dimostrazione dell'esistenza di un limite. Definizione di limite destro e sinistro.*
- - -
# 0. Argomenti propedeutici e/o voci correlate
Per affrontare uno degli argomenti più importanti dell'*analisi matematica*, ovvero i *limiti*, è necessario conoscere e ricordare alcuni argomenti:
- [[Intorni]] di $x_0 \in \mathbb{\tilde{R}}$
- [[Punti di aderenza e di accumulazione]] per un insieme $E \subseteq \mathbb{R}$
Voci correlate:
- [[Studio di Funzione]]
- [[Derivata e derivabilità]]
# 1. Idea fondamentale
#Osservazione 
> [!rmk] idea fondamentale del limite
   Prendiamo la una [funzione](Funzioni) di variabile reale (**DEF 1.1.**) del tipo $$f: E \longrightarrow \mathbb{R}, E \subseteq \mathbb{R}$$e consideriamo un punto $x_0 \in \tilde{\mathbb{R}}$ che è un *punto di accumulazione* per $E$ ([[Punti di aderenza e di accumulazione]], **DEF 2.1.**).
   Ora voglio capire come posso *rigorosamente* formulare la seguente frase:
   *"Se $x \in E$ si avvicina a $x_0 \in \mathbb{\tilde{R}}$, allora $f(x)$ si avvicina a un valore $L \in \mathbb{\tilde{R}}$."*
   Ovvero col seguente grafico abbiamo la *figura 1.1.*
   Oppure un caso più particolare, con $$\begin{align}f: & \ \mathbb{R}\diagdown\{0\} \longrightarrow \mathbb{R} \\ & \ x \mapsto x \cdot \sin(\frac{1}{x}) \end{align}$$dove $0$ è un punto di accumulazione per $E$ (il dominio), ma non ne fa parte.

**FIGURA 1.1.** (*Idea di base*)
![[Pasted image 20231103221257.png]]

**FIGURA 1.2.** (*Esempio particolare $x\sin \frac{1}{x}$*)
![[Pasted image 20231103221310.png]]
# 2. Formulazione rigorosa del concetto del limite di funzione
Ora diamo una *formalizzazione rigorosa* del concetto appena formulato sopra.

#Definizione 
> [!def] formulazione generale e rigorosa del limite di una funzione che tende ad un punto di accumulazione
   Sia $f$ una *funzione di variabile reale* di forma $$f: E \longrightarrow \mathbb{R}, E \subseteq \mathbb{R}$$Siano $x_0, L \in \mathbb{\tilde{R}}$, $x_0$ un *punto di accumulazione* per $E$. 
   Allora denotiamo il *limite di funzione* per un *punto di accumulazione* come
   $$\lim_{x \to x_0}f(x) = L$$
   e la definiamo se è vera la seguente: 
   $$\begin{gather}&\forall V \text{ intorno di }L, \exists E \text{ intorno di }x_0 \text{ tale che:}\\& \forall x \in E, x \in U \diagdown \{x_0\} \implies f(x) \in V\end{gather}$$

^c5e4ec

#Osservazione 
> [!rmk] la formulazione generale del limite comprende tutti i casi
   Questa *definizione* del limite può essere può essere interpretata in più casi.	

#Definizione 
> [!def] formulazione di Cauchy del limite di una funzione
   Siano $x_0, L \in \mathbb{R}$. Quindi dei valori *fissi* sulla *retta reale*. 
   Ora *"interpretiamo"* la definizione del *limite* di $f(x)$, $\lim_{x\to x_0}f(x) = L$ in questo caso: $$\begin{gather}&\forall V \text{ intorno di }L, \exists E \text{ intorno di }x_0 \text{ tale che:}\\& \forall x \in E, x \in U \diagdown \{x_0\} \implies f(x) \in V\end{gather}$$
   significa
   $$\begin{gather}&\forall\varepsilon > 0, (L-\varepsilon, L+\varepsilon) \subseteq V, \exists \delta>0: (x_0-\delta, x_0+\delta)\subseteq U \\& \text{tale che }\forall x \in E \\ & 0<|x-x_0| < \delta \implies |f(x)-L| < \varepsilon \end{gather}$$
   e questo graficamente corrisponde alla *figura 2.2.*
   In sintesi;
   $$\boxed{\lim_{x \to x_0}f(x) = L \iff \begin{gather}\forall \varepsilon>0, \exists \delta>0: \forall x \in E, \\ |x-x_0|<\delta \implies |f(x)-L| < \varepsilon\end{gather}}$$

**FIGURA 2.2.** (*Formulazione epsilon-delta del limite*)
![[Pasted image 20231103221329.png]]

#Osservazione 
> [!rmk] analogia "ludica" del limite
   Grazie a questa interpretazione è possibile creare un'analogia per il limite; infatti se immaginiamo l'intorno di $L$ con raggio $\varepsilon$ come un *"bersaglio"* e vale la condizione del *limite*, allora deve essere sempre possibile trovare un intorno attorno $x_0$ con raggio $\delta$ tale per cui facendo l'immagine di tutti i punti in questo intorno, *"colpisco"* il *"bersaglio"* (ovvero l'intorno di $L$).

#Osservazione 
> [!rmk] analogia "meccanica" del limite
   Alternativamente è possibile pensare all'esistenza del *limite* come una *"macchina"* che dato un valore $\varepsilon$ ti trova un valore $\delta$; dato un $\varepsilon$ qualsiasi, questa macchina ti darà sempre un $\delta$.

#Definizione 
> [!def] limite infinito di una funzione
   Ora interpretiamo $$\lim_{x\to x_0}f(x) = +\infty$$ovvero dove $L \in \mathbb{\tilde{R}}$. Allora interpretando il significato del limite abbiamo: $$\begin{gather}\forall M > 0, (M, +\infty), \exists \delta > 0: (x_0- \delta, x_0+\delta)\subseteq U: \\ \text{tale che }\forall x \in E, \\ 0<|x-x_0|<\delta \implies f(x) > M \end{gather}$$ovvero abbiamo graficamente che per una qualsiasi retta orizzontale $x = M$, troveremo *sempre* un intervallo tale per cui l'immagine dei suoi punti superano sempre questa retta orizzontale.
   Analogamente vale lo stesso per
   $$\lim_{x \to x_0} = -\infty$$

**FIGURA 2.3.** (*Idea del limite infinito di una funzione*)
![[Pasted image 20231103221345.png]]

#Definizione 
> [!def] limite di una funzione all'infinito
   Ora abbiamo 
   $$\lim_{x \to +\infty} f(x) = L$$
   ovvero dove $x_0 \in \mathbb{\tilde{R}}$. Interpretando la definizione si ha: $$\begin{gather} \forall \varepsilon >0, (L-\varepsilon, L+\varepsilon), \exists N >0 :(N, +\infty):\\\text{tale che }\forall x \in E, \\x > N \implies |f(x)-L| < \varepsilon\end{gather}$$
   graficamente ho un grafico di una funzione $f(x)$, dove disegnando un qualsiasi intorno di $L$ riuscirò sempre a trovare un valore $N$ tale per cui tutti i punti dell'insieme immagine dell'intervallo $(N, +\infty)$ stanno *sempre* all'interno dell'intorno di $L$, indipendentemente da quanto stretto è questo intervallo (*figura 2.4.*)

**FIGURA 2.4.** (*Idea grafica del limite all'infinito*)
![[Pasted image 20231103221400.png]]

#Definizione 
> [!def] limite infinito di una funzione all'infinito
   Finalmente consideriamo il caso 
   $$\lim_{x \to+\infty}f(x) = +\infty$$
   *Per definizione* ho 
   $$\begin{gather}\forall M; (M, +\infty), \exists N; (N, +\infty): \\ \text{tale che }\forall x\in E, \\x > N \implies f(x) > M \end{gather}$$
   questo vuol dire che fissando un qualunque valore $M$, riuscirò *sempre* a trovare un valore $N$ tale per cui prendendo un qualsiasi punto $x > N$, il valore immagine di questo punto supererà sempre $M$ (*figura 2.5.*).
^0f845a

**FIGURA 2.5.** (*Idea grafica del limite infinito all'infinito*)
![[Pasted image 20231103221438.png]]
## 2.1. Infinitesimo 
**APPROFONDIMENTO PERSONALE a.** Usando la formulazione rigorosa del limite ([[#^c5e4ec]]) e ponendo $L = 0, x = +\infty$, otteniamo un risultato che è consistente con la definizione di *infinitesimo*$^{(1)}$ secondo dei noti matematici russi, tra cui uno è Kolmogorov.

#Definizione 
> [!def] l'infinitesimo
**DEF 2.a.** Si definisce un infinitesimo come una *grandezza variabile* $\alpha_n$, denotata come $$\lim_{x \to +\infty}\alpha_n = 0 \text{ oppure }\alpha_n \to 0$$che possiede la seguente proprietà: $$\forall \varepsilon >0, \exists N>0: \forall x \in E, x>N \implies |\alpha_x|<\varepsilon$$

#Osservazione 
> [!rmk] infinitesimo e integrale
**OSS 2.a.** Notiamo che la definizione dell'*infinitesimo* diventerà importante per il calcolo degli *integrali*, in particolare per la *somma di Riemann* ([[Integrabilità secondo Riemann#^64ad3b]]).

- - -
$^{(1)}$*"[...] La quantità $\alpha_n$ che dipende da $n$, benché apparentemente complicata gode di una notevole proprietà: se $n$ cresce indefinitamente, $\alpha_n$ tende a zero. Tale proprietà si può anche esprimere dicendo che dato un numero positivo $\varepsilon$, piccolo a piacere, è possibile scegliere un interno $N$ talmente grande che per ogni $n$ maggiore di $N$ il numero $\alpha_n$ è minore, in valore assoluto, del lato numero $\varepsilon$."* 

Estratto tratto da *Le matematiche: analisi, algebra e geometria analitica* di *A.D. Aleksandrov*, *A. N. Kolmogorov* e *M. A. Lavrent'ev* (1974, ed. Bollati Boringhieri, trad. G. Venturini).
- - -
# 3. Limite destro e sinistro
**PREMESSA.** Sia una funzione $f$ di variabile reale del tipo $$f: E \longrightarrow \mathbb{R}, E \subseteq \mathbb{R}$$$x_0 \in \mathbb{R}$ un punto di accumulazione per $E$, $L \in \mathbb{\tilde{R}}$.

#Definizione 
> [!def] limite destro di una funzione
   Si denota Il *limite della funzione $f$ che tende a $x_0$ da destra* come 
   $$\lim_{x \to x_0^+} f(x) = L$$
   In termini rigorosi lo si definisce come
   $$\begin{gather}\forall V \text{ intorno di }L, \exists U \text{ intorno di }x_0: \forall x \in E, \\x \in U \cap (x_0, +\infty) \implies f(x) \in V \end{gather}$$
   Ovvero come il *limite di $f$*, considerando però *solo* i punti che stanno a *destra* di $x_0$.
^406c13

#Definizione 
> [!def] limite sinistro di una funzione
   Analogamente *il limite della funzione $f$ che tende a $x_0$ da sinistra* è 
   $$\lim_{x \to x_0^-} f(x) = L$$ovvero $$\begin{gather}\forall V \text{ intorno di }L, \exists U \text{ intorno di }x_0: \forall x \in E, \\x \in U \cap(-\infty, x_0) \implies f(x) \in V \end{gather}$$

**FIGURA 3.1.** (*Limite destro e sinistro di una funzione*)
![[Pasted image 20231103221500.png]]

#Osservazione 
> [!rmk] condizione necessaria e sufficiente dell'esistenza di limite
   Si può immediatamente verificare che $$\lim_{x \to x_0} f(x) = L \iff \lim_{x \to x_0^+}f(x)=\lim_{x \to x_0^-}f(x) = L$$Infatti l'insieme dei $x$ del limite *destro* e/o *sinistro* su cui verifichiamo che $f(x) \in V$ è un *sottoinsieme* dell'insieme di cui si verifica col limite generale. Pertanto facendo l'unione tra questi due sottoinsiemi abbiamo$$[U \cap (-\infty, x_0)] \cup [U \cap(x_0, +\infty)] = U\diagdown\{x_0\}$$

#Definizione 
> [!def] restrizione del limite
> *Nota: definizione ricavata direttamente dalla dispensa di D. D. S.*
   Avevamo appena osservato che coi limiti *destri* e/o *sinistri* abbiamo semplicemente fatto una *restrizione* all'insieme $U\diagdown\{x_0\}$ di cui si cerca di verificare che $f(U\diagdown\{x_0\}) \subseteq V$. 
   Dunque definiamo il *limite della funzione ristretta a $B$*, un qualunque sottoinsieme di $E$ per cui $x_0$ è di accumulazione: $$\lim_{x\to x_0}f_{|B}(x) = L$$
   ovvero 
   $$\begin{gather}\forall V \text{ intorno di }L, \exists U \text{ intorno di }x_0: \forall x \in B, \\x \in U\diagdown\{x_0\} \implies f(x) \in V\end{gather}$$
# 4. Strategia per verificare l'esistenza di limiti
La nostra definizione presuppone che dobbiamo *eseguire* una serie *infinita* di verifiche per dimostrare che un limite esiste; infatti si dovrebbe scegliere tutti gli $\varepsilon > 0$ e trovare un $\delta$ associato.
Vogliamo invece sviluppare una serie di *strategie* per verificare l'esistenza dei limiti, come i *teoremi* e le *proprietà* sui limiti come vedremo in [[Teoremi sui Limiti di Funzione]], oppure *interpretando* la definizione del limite per poter trovare una *"formula"* che associa ad ogni epsilon un delta.

#Esempio 
> [!exm] dimostrazione "analitica" di un limite
Voglio verificare che $$\lim_{x \to 1} x^2+1=2$$ovvero, interpretando la definizione otteniamo il seguente da verificare: $$\forall \varepsilon > 0, \exists \delta > 0: \forall x \in E, 0<|x-1|<\delta \implies |x^2+1-2| < \varepsilon$$
Allora *"faccio finta*" di conoscere un $\varepsilon$ fissato, sviluppiamo dunque la disuguaglianza a destra: $$\begin{align} |x^2+1-2| &< \varepsilon \\ |x^2-1| &< \varepsilon \\ |(x+1)(x-1)| &< \varepsilon \\ |x+1||x-1| &< \varepsilon \end{align}$$Osservo che se poniamo $x \in [0, 2)$ e quindi $\delta < 1$, allora abbiamo $|x+1| < 3$. Allora da ciò discende sicuramente la disuguaglianza
$$|x+1||x-1| < 3 |x-1| < 3\delta, x\in [0, 2)$$abbiamo quindi 
$$0<|x-1| < \delta \implies |x+1||x-1|<3\delta, \forall x \in [0, 2)$$
Infatti abbiamo implicitamente scelto $\varepsilon = 3\delta$, verificando così il limite per $\forall x \in [0, 2)$.
Invece se $x \geq 2$, basta scegliere $\delta = 1$.
*"Completando"* la dimostrazione ho:
$$|x-1|<\frac{\varepsilon}{3} \implies 3|x-1|<\varepsilon \implies |x+1||x-1|<\varepsilon, \forall x \in[0, 2)$$
