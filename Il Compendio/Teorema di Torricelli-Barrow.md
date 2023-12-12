---
data: 2023-12-11
corso: "[[Analisi Matematica I]]"
argomento: Teorema di Torricelli-Barrow
tipologia: appunti
stato: "1"
capitolo:
---
- - -
*Teorema di Torricelli-Barrow: enunciato, dimostrazione alternativa e conseguenza principale.*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Integrabilità secondo Riemann]]
- [[Primitiva di una Funzione]]
- [[Teorema Fondamentale del Calcolo Integrale]]
- [[Teoremi sulle funzioni continue]] (Weierstraß e dei valori medi)
- [[Primitiva di una Funzione]]
- [[Suddivisione di un Intervallo]]
- [[Teorema della Media Integrale]]
# 1. Enunciato del teorema di Torricelli-Barrow
#Teorema 
> [!thm] Teorema 1.1. (di Torricelli-Barrow)
> Sia $f: [a,b] \longrightarrow \mathbb{R}$ *continua* nel dominio ([[Definizione di continuità#^ddf65d]]).
> Allora $f$ è *integrabile* ([[Tipologie di Funzioni Integrabili#^dd4f09]]).
> Ha senso dunque considerare la sua *funzione integrale* ([[Funzione Integrale#^e5e02b]]), 
> $$F(x) = \int_a^x f(t) dt$$
> Allora $F$ è *derivabile nel dominio* e vale che
> $$\boxed{\forall x \in [a,b], F'(x)=f(x)}$$

^ebd157

#Dimostrazione 
Naturalmente questo teorema non è altro che il *figlio* del *teorema fondamentale del calcolo integrale* ([[Teorema Fondamentale del Calcolo Integrale#^99ef41]]), solo che al posto di concentrarci su un *singolo punto* la generalizziamo su *tutto il dominio* $[a,b]$.
Alternativamente è possibile dare la seguente dimostrazione *"bypassando"* il *teorema fondamentale del calcolo integrale*.
Innanzitutto tengo conto del *teorema della media integrale* ([[Teorema della Media Integrale#^c2f053]]).
Sia $f$ *continua* su $[a,b]$ e considero il *rapporto incrementale* $R^F_\bar x(x)$.
$$\begin{align}R^F_\bar x(x) &= \frac{F(x)-F(\bar x)}{x-\bar x} \\ &= \int_a^x f(t) dt - \int_a^\bar x f(t) dt \cdot \frac{1}{x-\bar x} \\ &= \frac{1}{x-\bar x}\int_\bar x^x f(t) dt\end{align}$$
Possiamo illustrare in una maniera grafica il fatto che
$$\underset{[a, x]} \int f - \underset{[a, \bar x]} \int f =  \underset{[\bar x, x]}\int f$$
(*figura 1.1.*)
Ma allora possiamo considerare il *teorema delle media integrale* per cui ho un dato $\xi \in (\bar x, x)$ vale che
$$f(\xi) = \frac{1}{x - \bar x}\int_\bar{x}^x f(t) dt$$
Pertanto passando al *limite* $x \to \bar x$ ho
$$\lim_{x \to \bar x}R^F_\bar{x}(x) = \lim_{x \to \bar x}f(\xi) \underbrace{\implies}_{\bar x < \xi < x} \lim_{\xi \to \bar x}f(\xi) = f(\bar x) \ \blacksquare$$

**FIGURA 1.1.**
![[Pasted image 20231212161929.png]]
# 2. Conseguenze del teorema di Torricelli-Barrow
#Corollario 
> [!cor] Corollario 2.1. (l'integrale è la differenza tra le primitive calcolate negli estremi)
> Sia $G$ una *primitiva* di $f$, che è *continua* in $[a,b]$, allora si ha
> $$\boxed{\int_a^b f(t) dt = G(b)-G(a)}$$
^981032

#Dimostrazione 
**DIMOSTRAZIONE** del *corollario 2.1.* ([[#^981032]])
Dal teorema di *Torricelli-Barrow* ([[#^ebd157]]) so che la *funzione integrale*
$$F(x) = \int_a^x f(t) dt$$
è una *primitiva* di $F$.
Allora, essendo $G$ una *primitiva qualsiasi*, so che la *differenza puntuale* tra $F, G$ è *necessariamente una costante*, dato che $G$ è di forma $F+c$. Ovvero
$$F-G = c \in \mathbb{R}$$
Poi so che $F(a) = 0$, dato che $\int_a^a f(t) dt = 0$: quindi
$$F(a)-G(a) = c \implies 0 - G(a) =c \implies c = -G(a)$$
Infine scrivo
$$\int_a^b f(t) dt = F(b) = G(b)+c =G(b)-G(a) \ \blacksquare$$

#Osservazione 
> [!oss] Osservazione 2.1. (lo spostamento del problema del calcolo integrale)
> Questo corollario è importante, dato che da questo momento il problema del *calcolo integrale* diventa quello di *trovare le primitive* di una funzione.