---
data: 2023-10-26
corso: "[[Analisi Matematica I]]"
argomento: Esempi di Limiti di Funzione
tipologia: appunti
stato: "1"
---
*Esempi di limiti: funzione costante, funzione identità, polinomi, funzioni razionali, funzioni trigonometriche, …*
- - -
# 0. Preambolo
Abbiamo appena visto che cos'è *generalmente* un limite mediante la sua definizione, poi abbiamo anche sviluppato delle strategie per calcolare o verificare l'esistenza dei limiti velocemente.
Quindi è ovvio che questo capitolo richiede la conoscenza (anche parziale) dei seguenti precedenti capitoli:
- [[Definizione di Limite di funzione]]
- [[Teoremi sui Limiti di Funzione]] (Almeno fino alla **sez. 7**)
Infatti, mediante i nostri strumenti appena sviluppati, andremo a calcolare dei limiti notevoli.
# 1. Funzione costante e identità
**ESEMPIO 1.1.** *Funzione costante*
Sia $f$ la funzione costante $f(x) = c, c \in \mathbb{R}$ 
Allora il suo limite è$$\lim_{x \to x_0}f(x) = \lim_{x \to x_0}c = c$$ed è facile dimostrarla; infatti riscrivendo la definizione il limite risulta *sempre* verificato.

**ESEMPIO 1.2.** *Funzione identità*
Sia $f$ la funzione identità $\text{id}_x = f(x) = x$, definita $\forall x \in E$.
Allora il suo limite è $$\lim_{x \to x_0}f(x) = \lim_{x \to x_0}x = x_0$$che risulta sempre vera ponendo $\delta = \varepsilon$.

**OSS 1.1.** Notiamo che per la funzione identità il limite può valere anche per $x_0 \in \mathbb{\tilde{R}}$ (i numeri reali estesi); infatti abbiamo $$\lim_{x \to \pm\infty}x = \pm\infty$$ed è sempre vera in quanto possiamo porre $N=M$ o $n = m$.

**OSS 1.2.** Possiamo sfruttare altri teoremi per ricavare $$\lim_{x \to x_0}x^n = \lim_{x \to x_0}(x\cdot x \cdot \ldots \cdot x) = \lim_{x \to x_0}x \cdot\ldots\cdot\lim_{x \to x_0}x = x_0^n$$e secondo il nostro ragionamento questa vale per $\forall n \in \mathbb{N} >0$.
# 2. Funzioni quozienti
**ESEMPIO 2.1.** *Funzione quoziente che tende all'infinito*
Dai risultati di [[Teoremi sui Limiti di Funzione]], soprattutto con **TEOREMA 6.1.** conosciamo il limite di $\frac{1}{x}$ per $x$ che tende all'infinito. Infatti $$\lim_{x \to \infty}\frac{1}{x} = 0$$è un *infinitesimo*.

**ESEMPIO 2.2.** *Funzione quoziente che tende a zero*
Ora consideriamo la medesima funzione, studiando però il comportamento di $x$ che tende a $0$. Innanzitutto $$\lim_{x \to 0^+}\frac{1}{x}=+\infty$$e $$\lim_{x \to 0^-}\frac{1}{x}=-\infty$$Infatti abbiamo il grafico della funzione $\frac{1}{x}$.
![[Pasted image 20231103223754.png]]
Concludiamo che *non* esiste il limite $$\nexists\lim_{x \to 0}\frac{1}{x}$$in quanto il limite *destro* e *sinistro* sono diversi.

**ESEMPIO 2.3.** *Funzione quoziente alla $n$*
Allora sfruttando altri [[Teoremi sui Limiti di Funzione]], dall'esempio precedente possiamo ricavare $$\lim_{x \to \infty}\frac{1}{x^n}=0, \forall n \in \mathbb{N},> 0$$
# 3. Funzione radice
**ESEMPIO 3.1.** *Funzione radice quadrata*
Sia $f(x) = \sqrt{x}$ e abbiamo $$\lim_{x \to 0^+}\sqrt{x} = 0$$Infatti nella definizione del limite basta prendere $\delta = \varepsilon^2$.
Ora vediamo cosa succede se $0<x_0, x_0 \in \mathbb{R}$.
$$\lim_{x \to x_0}\sqrt{x} = \sqrt{x_0}$$Per dimostrarlo possiamo fare il seguente.
$$\begin{gather}\forall \varepsilon > 0, \exists \delta > 0: \forall x, \\0 < |x-x_0 | < \delta \implies |\sqrt{x}- \sqrt{x_0} | < \varepsilon \\ \text{manipolo la seconda:} \\ |\sqrt{x} - \sqrt{x_0} | \implies |\sqrt{x}-\sqrt{x_0} \frac{\sqrt{x}+\sqrt{x_0}}{\sqrt{x}+\sqrt{x_0}} |  \\  |\sqrt{x}-\sqrt{x_0} \frac{\sqrt{x}+\sqrt{x_0}}{\sqrt{x}+\sqrt{x_0}}| \implies  \frac{|x-x_0|}{\sqrt{x}+\sqrt{x_0}} \leq \frac{|x-x_0|}{\sqrt{x_0}} \\ \text{allora}\\ |\sqrt{x}-\sqrt{x_0}| \leq \frac{|x-x_0|}{\sqrt{x_0}} < \varepsilon \implies |x-x_0| < \varepsilon\sqrt{x_0}\end{gather}$$Quindi basta scegliere $\delta = \varepsilon \sqrt{x_0}$.
Ora vediamo che $$\lim_{x \to +\infty}\sqrt{x} = +\infty$$basta infatti scegliere $N = M^2$.
Analogamente tutto questo vale per $\sqrt[n]{x}$. 
# 4. Funzioni polinomi e razionali
**ESEMPIO 4.1.** *Polinomio con limite costante*
Sia $f(x)$ un *polinomio di grado* $n$, ovvero del tipo $$f(x) = a_0+a_1x^1+a_2x^2+\ldots+a_nx^n$$Allora sfruttando le *operazioni con i limiti* ([[Teoremi sui Limiti di Funzione]], **TEOREMA 5.1.**), possiamo ricavare il suo limite quando questa funzione tende a $x_0 \in \mathbb{R}$. $$\begin{align}\lim_{x \to x_0}f(x) &= \lim_{x \to x_0}(a_0+a_1x+\ldots+a_nx^n) \\ &= \lim_{x \to x_0}a_0 + \lim_{x \to x_0}a_1x+\ldots + \lim_{x \to x_0}(a_nx^n) \\ &= a_0 +  a_1x_0+\ldots + a_nx_0^n\end{align}$$
**ESEMPIO 4.2.** *Polinomio con limite infinito*
Nel caso in cui $x_0 = +\infty \in \mathbb{\tilde{R}}$, allora abbiamo $$\begin{align}\lim_{x \to +\infty}f(x) &= \lim_{x \to +\infty}(a_0+a_1x+\ldots+a_nx^n) \end{align}$$e possiamo raccogliere ogni termine con $x^n$, ottenendo dunque $$\begin{align}\lim_{x \to +\infty}(a_0+a_1x+\ldots+a_nx^n) &= \lim_{x \to +\infty}(x^n(a_n+a_{n-1}\frac{1}{x}+ \ldots + a_0\frac{1}{x^n}))\\ &= \lim_{x\to +\infty}x^n \cdot(\lim_{x \to +\infty}(a_n) +\lim_{x\to+\infty}a_{n-1}\frac{1}{x}+\ldots) \\ &= \lim_{x \to +\infty}x^n \cdot (a_n+0+0+\ldots+0) \\ &= a_n\lim_{x \to +\infty}x^n \end{align}$$Allora in questo caso dobbiamo vedere quale valore assume il *coefficiente* dell'ultimo *termine* $x^n$. Procediamo dunque per casistica: $$a_n\lim_{x \to +\infty}x^n = \begin{cases} +\infty \text{ se }a_n >0\\ -\infty \text{ se } a_n<0 \\ \text{forma indeterminata, altrimenti}   \end{cases}$$abbiamo ricavato questo dai risultati dei [[Teoremi sui Limiti di Funzione]] (**TEOREMA 7.1.**).

Analogamente c'è un discorso verosimile per il limite quando la funzione tende a $-\infty$, però al contrario. Ovvero $$a_n\lim_{x \to -\infty}x^n = \begin{cases} -\infty \text{ se }a_n >0\\ +\infty \text{ se } a_n<0 \\ \text{forma indeterminata, altrimenti}   \end{cases}$$
**ESEMPIO 4.3.** *Funzione razionale di grado $n,m$ con limite finito*
Sia la *funzione razionale* un quoziente tra due *polinomi* di grado $n, m$ ovvero del tipo $$\forall n , m \in \mathbb{N}, f(x) = \frac{a_0+a_1x+\ldots+a_nx^n}{b_0+b_1x+\ldots+b_mx^m} $$Allora sfruttando i [[Teoremi sui Limiti di Funzione]] possiamo avere $$\lim_{x \to x_0}f(x) = \frac{a_0+a_1x_0+ \ldots +a_nx_0^n}{b_0+b_1x_0+\ldots+b_mx_0^m}$$e bisogna avere che $$b_0 + b_1x_0 + \ldots b_nx_0^m \neq 0$$Se invece la sopra non viene verificata (ovvero il polinomio al denominatore è $0$) bisogna vedere se è vera che $$a_0+a_1x_0+\ldots+a_nx^n_0 \stackrel{?}= 0$$
1. Se è *vera* (ovvero che vale $0$), allora dobbiamo usare il *teorema di Ruffini* per cui sappiamo che un polinomio si annulla in $x_0$ *se e solo se* $(x-x_0)$ è un fattore. Dunque a quel punto si può semplificare la frazione e vedere il risultato; può verificare che rimane il numeratore (e quindi il limite tende a $0$) oppure che rimane il denominatore (e quindi il limite tende a $\pm \infty$).
2. Se è invece *falsa* (ovvero che *non* vale $0$), allora il limite può essere $+\infty$ o $-\infty$, oppure può non esistere se il limite *destro* è diverso dal limite *sinistro*. C'è infatti un problema del segno: bisogna vedere il segno del numeratore.

**ESEMPIO 4.4.** *Funzione razionale di grado $n,m$ che tende all'infinito*
Vogliamo valutare $$\lim_{x \to \infty}\frac{a_0+a_1x+\ldots+a_nx^n}{b_0+b_1x+\ldots+b_mx^m}$$
Allora con un ragionamento simile all'esempio **ESEMPIO 4.2.** possiamo raccogliere in entrambi i polinomi per $x^n$ o $x^m$ e avere $$\begin{align}\lim_{x \to \infty}\frac{a_0+a_1x+\ldots+a_nx^n}{b_0+b_1x+\ldots+b_mx^m} &= \lim_{x \to \infty}\frac{x^n(a_n+a_{n-1}\frac{1}{x}+\ldots+a_0\frac{1}{x^n})}{x^m(b_m+b_{m-1}\frac{1}{x}+\ldots+b_0\frac{1}{x^m})} \\ &= \lim_{x\to\infty}x^{n-m}\cdot\lim_{x \to \infty}\frac{a_n}{b_m}+0+\ldots+0 \\ &= \frac{a_n}{b_m}\lim_{x \to \infty}x^{n-m}\end{align}$$Raggiunto qui dobbiamo procedere per casistica per $x^{n-m}$:
1. Se $n-m = 0$ (ovvero i polinomi sono dello stesso grado) allora il limite tende a $\frac{a_n}{b_m}$
2. Se $n - m > 0$ allora il limite tende a $\pm \infty$, il segno del limite varia a seconda del segno della costante $\frac{a_{n}}{b_m}$
3. Se $n-m<0$ allora il limite tende a $0$.
# 5. Funzioni trigonometriche
Questa sezione ovviamente richiede la conoscenza di [[Funzioni trigonometriche]]
**ESEMPIO 5.1.** *Funzione seno*
Ricordiamoci delle *funzioni di prostaferesi* ([[Funzioni trigonometriche]], **SEZIONE 2.4.**).
Voglio dimostrare che $$\lim_{x \to x_0}\sin x = \sin x_0$$Allora parto dalla distanza euclidea $$|f(x)-L| \implies | \sin x - \sin x_0 |$$e conoscendo le *formule di prostaferesi* ottengo $$\begin{align}2|\sin(\frac{x-x_0}{2})\cos(\frac{x+x_0}{2})| = 2 |\sin\frac{x-x_0}{2}||\cos\frac{x-x_0}{2}| \end{align}$$e sapendo che $\cos \alpha \leq 1, \forall \alpha$ possiamo *"maggiorare"* questa espressione con $$2|\cos\frac{x-x_0}{2}|\cdot1$$allora $$\begin{align}|\sin x- \sin x_0 | &= 2 |\sin\frac{x-x_0}{2}||\cos\frac{x-x_0}{2}| \\ &\leq 2|\sin\frac{x-x_0}{2}| \end{align}$$Ora ci ricordiamo che $|\sin\alpha| \leq |\alpha|$ (infatti basta pensare che $\alpha$ è la lunghezza della retta e $\sin\alpha$ è invece la coordinata $y$ del punto su cui cadiamo quando facciamo il processo di *"avvolgimento"* di questa retta; oppure basta disegnare i grafici di queste due funzioni), 
![[Pasted image 20231103223810.png]]
Dunque otteniamo $$|\sin x - \sin x_0| \leq 2 | \sin\frac{x-x_0}{2}| \leq 2|\frac{x-x_0}{2}| = |x-x_0|$$ovvero $$|\sin x - \sin x_0| \leq |x - x_0|$$allora nella *definizione del limite* ([[Definizione di Limite di funzione]]) basta scegliere $\delta = \varepsilon$ in quanto abbiamo appena verificato che sicuramente quest'ultima espressione è sicuramente vera.

**ESEMPIO 5.2.** *Funzione coseno*
Esercizio lasciato a me stesso.

**ESEMPIO 5.3.** *Funzione tangente*
Invece per la *funzione tangente* $\tan$ si ha che: $$\lim_{x \to x_0}\tan x = \begin{cases}\tan x_0 \text{ se }x_0 \neq \frac{\pi}{2}+k\pi, \forall k \in \mathbb{Z} \\ \text{non def., altrimenti} \end{cases}$$il limite di $\tan$ per $x \to \alpha, \forall \alpha \in [\frac{\pi}{2}]_{\equiv\pi}$ *non* è definita in quanto il limite destro e sinistro di questa non sono uguali; infatti $$\lim_{x \to \alpha^-}\tan x = +\infty\text{ e }\lim_{x \to \alpha^+}\tan x = -\infty$$e questi valgono per la *permanenza del segno*; infatti se da *sinistra* $\lim_{x \to \alpha^-}\frac{1}{\cos x} = +\infty$ allora sicuramente vale ciò che abbiamo detto prima. Analogo per l'altro limite.
Quindi $$\lim_{x \to \alpha^+} \tan x \neq \lim_{x \to \alpha^-}\tan x$$

**ESEMPIO 5.4.** *Funzione arcotangente*
Riprendiamo invece la *funzione arcotangente* $\arctan{x}$.
Osserviamo dal grafico di tale funzione
![[Pasted image 20231103214329.png]]
che valgono le seguenti: $$\begin{gather}\lim_{x \to -\infty}\arctan x = -\frac{\pi}{2}\\ \lim_{x \to +\infty}\arctan x = \frac{\pi}{2}\\ \lim_{x \to x_0}\arctan x = \arctan x_0\end{gather}$$
**ESEMPIO 5.5.** *Funzione arcoseno e arcocoseno*
Riprendiamo ora le funzioni $\arcsin$ e $\arccos$.
Dai grafici
![[Pasted image 20231017172546.png]]
osserviamo che $$\lim_{x \to -1^+}\arcsin x = -\frac{\pi}{2}; \lim_{x \to -1 ^+}\arccos x = \pi$$e $$\lim_{x \to 1^-}\arcsin x = \frac{\pi}{2}; \lim_{x \to 1^-}\arccos x = \pi$$
# 6. Limiti fondamentali
Ora illustriamo ciò che chiameremo come i *limiti fondamentali*. 

Prima di considerare il primo esempio facciamo le seguenti osservazioni.
**OSS 6.1.** Voglio calcolare l'area del *settore circolare* con raggio $r$ e angolo $\alpha$ e la lunghezza dell'arco $l = r\alpha$. 
![[Pasted image 20231103223827.png]]
*Idea.* Che vuol dire calcolare l'area di una figura? Questo significa prendere una "misura" standard per misurare l'area, poi per contare. Infatti ad esempio, per calcolare l'area di un *triangolo* partiamo dall'area di due *rettangoli* "distorti" che formano un triangolo.
Analogamente facciamo la stessa cosa col settore circolare: la dividiamo in *"triangolini"* piccolissimi, poi li *"apro"* disponendoli fila per fila.
Ora arriviamo al punto cruciale: *"faccio finta"* (oppure approssimo) la lunghezza dell'*arco* con quello della *coda*. Graficamente il ragionamento consiste in questo:
![[Pasted image 20231103223910.png]]
Dove la *"base"* di questi triangoli è $\alpha r$ in quanto questa è proprio la *"base"* della figura originaria e l'*"altezza"* è il raggio $r$.
Quindi possiamo unire tutti questi triangoli in uno singolo triangolo con le stesse misure e avere dunque un singolo triangolo con base $\alpha r$ e altezza $r$. Usiamo dunque la formula per calcolare l'area di questo triangolo. $$A = \frac{\alpha r^2}{2}$$

**OSS 6.2.** Ora, riprendendo il cerchio unitario $\Gamma$, traccio *tre figure geometriche* di cui due sono triangoli ed uno è il settore circolare. Segniamo i tre triangoli $A_{1,2,3}$.
![[Pasted image 20231103223928.png]]
Chiaramente si vede che $$A_1 \leq A_2 \leq A_3$$
L'area del triangolo delineato dalla *coda* è $$A_1 = \frac{\sin\alpha}{2}$$Invece l'area del *settore* è $$A_2 = \frac{a}{2}$$Ora l'area del triangolo ottenuto *"estendendo"* la retta orizzontale in $x=1$ e la *"diagonale"* che taglia il cerchio è $$A_3 = \frac{\tan\alpha}{2}$$ed è ottenuta facendo le proporzioni tra il triangolo $A_1$ e questo triangolo dove la base è $1$(ed è possibile farlo in quanto i due triangoli in merito sono simili). Infatti $$\frac{\cos\alpha}{\sin\alpha}=\frac{1}{x}\implies x = \frac{\sin\alpha}{\cos\alpha}=\tan\alpha$$Allora possiamo concludere che in questa figura sussiste la seguente relazione per $\alpha \in ]0, \frac{\pi}{2}[$: $$\frac{\sin\alpha}{2}\leq \frac{\alpha}{2}\leq \frac{\tan\alpha}{2}$$

**ESEMPIO 6.1.** *Quoziente tra seno e l'identità*
Voglio calcolare $$\lim_{x \to 0 }\frac{\sin x}{x}$$e usando alcuni dei [[Teoremi sui Limiti di Funzione]] per trattare i limiti separatamente e sostituire i rispettivi $x$ con $0$, otteniamo la frazione $\frac{0}{0}$, ovvero una *forma indeterminata*. Dobbiamo allora trovare un modo alternativo di calcolare questo limite; questo è possibile grazie alle osservazioni precedenti già fatte, in particolare l'**OSS 5.2.**.
Infatti possiamo manipolare l'espressione finale per ottenere il seguente: $$\begin{gather} \frac{\sin\alpha}{2}\leq \frac{\alpha}{2}\leq \frac{\tan\alpha} {2} \\ \sin\alpha  \leq \alpha \leq \tan\alpha \\ 1 \leq \frac{\alpha}{\sin\alpha} \leq \frac{\tan\alpha}{\sin\alpha}=\cos\alpha \\ \cos\alpha \leq \frac{\sin\alpha}{\alpha}\leq 1\end{gather}$$Per il teorema dei *due carabinieri* ([[Teoremi sui Limiti di Funzione]], **TEOREMA 4.1.**), abbiamo i seguenti: $$\begin{align}&\lim_{x \to 0^+}\cos\alpha \leq \lim_{x \to 0^+}\frac{\sin\alpha}{\alpha}\leq \lim_{x \to 0^+}1 \\ \implies & 1 \leq \lim_{x \to 0^+}\frac{\sin\alpha}{\alpha}\leq 1 \\ \implies & \lim_{x \to 0^+}\frac{\sin\alpha}{\alpha}=1  \end{align}$$Però ricordiamoci che $\frac{\sin x}{x}$ è una funzione *pari* ([[Funzioni]], **DEF 9.**), in quanto abbiamo due funzioni dispari; quindi questo limite può valere anche per il *limite destro* $0^-$. Concludiamo dunque $$\lim_{x \to 0}\frac{\sin x}{x}=1$$
**ESEMPIO 6.2.** *Secondo limite fondamentale* $\frac{1-\cos x}{x^2}$
Ci sarà utile anche ricordare il limite $$\lim_{x \to 0}\frac{1-\cos x}{x^2}$$
Per calcolarlo dobbiamo avvalerci di un *trucco*, ovvero quello di moltiplicare per un'espressione equivalente a $\frac{1}{1}$. In questo caso prendiamo $$\frac{1+\cos x}{1 + \cos x}$$Dunque il nostro limite diventa $$\begin{align}\lim_{x \to 0}\frac{1-\cos x}{x^2} &= \lim_{x \to 0}\frac{1-\cos x}{x^2}\frac{1+ \cos x}{1 + \cos x} \\ &= \lim_{x \to 0}\frac{1 - \cos^2{x}}{x^2(1+\cos x)} \\ \cos^2x + \sin ^2 x = 1 \implies &= \lim_{x \to 0}\frac{\sin^2 x }{x^2}\cdot \frac{1}{1+\cos x} \\ &= \lim_{x \to 0} (\frac{\sin x }{x})^2 \cdot \lim_{x \to 0 }\frac{1}{1+\cos x} \\ &= 1^2 \cdot \frac{1}{1+1} = \frac{1}{2} \end{align}$$Concludiamo allora $$\lim_{x \to 0}\frac{1-\cos x}{x^2} = \frac{1}{2}$$