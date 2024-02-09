---
data: 2023-11-20
corso: "[[Analisi Matematica I]]"
argomento: Esempi di derivate
tipologia: appunti
stato: "1"
---
*Esempi di funzioni derivabili e il calcolo delle loro derivate: tutte (più o meno) le funzioni elementari. Esempi di funzioni non derivabili.*
- - -
# 1. Derivate delle funzioni elementari
## Funzione costante
#Esempio 
> [!exm] funzione costante
> Sia $f: I \longrightarrow \mathbb{R}$ la *funzione costante*, ovvero del tipo
> $$f(x) = c \in \mathbb{R}$$
> Allora calcolando il *rapporto incrementale* ([[Rapporto Incrementale#^ccc58b]]) $R^f_{x_0}(x)$, otteniamo
> $$R^f_{x_0}(x) = \frac{c-c}{x-x_0} = \frac{0}{x-x_0} = 0$$
> Pertanto 
> $$\boxed{(c)'=0, \forall x \in I}$$

## Funzione identità
#Esempio 
> [!exm] funzione identità
> Sia $f: I \longrightarrow \mathbb{R}$ la *funzione identità*, ovvero del tipo
> $$f(x) =x$$
> Allora calcolando il suo *rapporto incrementale* si otterrebbe
> $$R^f_{x_0}(x)=\frac{x-x_0}{x-x_0}=1$$
> Pertanto
> $$\boxed{(x)' = 1, \forall x \in I}$$

## Funzione potenza (in N)
#Esempio 
> [!exm] funzione potenza naturale
> Sia $f: I \longrightarrow \mathbb{R}$ la *funzione potenza* ([[Funzioni di potenza, radice e valore assoluto#^2b25ba]]), ovvero del tipo
> $$x^n, n \in \mathbb{N}$$
> Allora calcolando il *rapporto incrementale* si ottiene
> $$R^f_{x_0}(x) = \frac{x^n-x_0^n}{x-x_0}$$
> Ricordandoci che abbiamo una *differenza di potenze $n$-esime* e quindi vale la seguente relazione:
> $$(A^n-B^n) = (A-B)(A^{n-1}+A^{n-2}B^1 + \ldots + A^1B^{n-2}+B^{n-1})$$
> Allora si avrebbe
> $$\begin{align}R^f_{x_0}(x) &= \frac{(x-x_0)(x^{n-1}+x^{n-2}x_0^1 + \ldots + x^1x_0^{n-2}+x_0^{n-1})}{x-x_0} \\ &= x^{n-1}+x^{n-2}x_0 + \ldots + x\cdot x_0^{n-2}+x_0^{n-1}\end{align}$$
> Passando il limite per $x \to x_0$ si avrebbe il limite di un *polinomio*, quindi
> $$\lim_{x \to x_0}R^f_{x_0}(x) =  x_0^{n-1} + \ldots + x_0^{n-1} = n(x^{n-1})$$
> Pertanto
> $$\boxed{(x^n)' = nx^{n-1}, \forall n \in \mathbb{N}, x \in I}$$
> **ATTENZIONE!** Con questa *"dimostrazione"* abbiamo dimostrato che questa vale *solo* in $\mathbb{N}$; per dimostrare che vale anche in $\mathbb{R}$, che verrà fatta successivamente, bisogna usare un altro trucchetto. Però per ora diamo questa buona anche per $n$ reale.

## Funzione esponenziale
#Esempio 
> [!exm] funzione exp
> Sia $f: \mathbb{R} \longrightarrow (0, +\infty)$ la *funzione esponenziale* a base $e$ ([[Funzione esponenziale e Logaritmica#^8c9812]]), ovvero del tipo
> $$f(x) = e^x$$
> Allora calcolando il suo rapporto incrementale si avrebbe
> $$\begin{align}R^f_{x_0} &= \frac{e^x-e^{x_0}}{x-x_0} \\ &= \frac{e^{x_0}(e^{x-x_0}-1)}{x-x_0} \end{align}$$
> Ora, passando al limite per $x \to x_0$, si ha
> $$\lim_{x \to x_0}R^f_{x_0}(x) = e^{x_0}\lim_{x \to x_0}\frac{e^{x-x_0}-1}{x-x_0} = \lim_{y \to 0}\frac{e^y-1}{y}=e^{x_0} \cdot 1 = e^{x_0}$$
> Pertanto
> $$\boxed{(e^x)' = e^x}$$

#Osservazione 
> [!rmk] la peculiarità di exp
> Da qui notiamo che se $f(x) = e^x$ allora vale che
> $$f'(x) = f(x)$$
> ed è l'*unica* funzione per cui vale questa.
> Infatti *"l'esponenziale risolve l'equazione differenziale"*
> $$f = f' $$
## Funzione logaritmica
#Esempio 
> [!exm] funzione log
> Sia $f: (0, +\infty) \longrightarrow \mathbb{R}$ la *funzione logaritmica* a base $e$ ([[Funzione esponenziale e Logaritmica#^16fe54]]), ovvero del tipo
> $$f(x) = \ln x$$
> Allora prendendo il suo rapporto incrementale si ottiene
> $$\begin{align}R^f_{x_0}(x) &= \frac{\ln x-\ln x_0}{x-x_0} \\ &= \frac{\ln(\frac{x}{x_0})}{x-x_0} \\ &= \frac{\ln(\frac{x-x_0+x_0}{x_0})}{x-x_0} \\ &= \frac{\ln(1+\frac{x-x_0}{x_0})}{x-x_0} \\ &= \frac{\ln(1+\frac{x-x_0}{x_0})}{\frac{x-x_0}{x_0}} \cdot \frac{1}{x_0} \end{align}$$
> Notiamo che, passando al limite $x \to x_0$ si ha uno dei *limiti fondamentali* ([[Esempi di Limiti di Funzione#^35600e]]), ovvero
> $$\lim_{y \to 0}\frac{\ln(1+y)}{y}=1$$
> Allora si ha
> $$\lim_{x \to x_0}R^f_{x_0}(x) = 1 \cdot \frac{1}{x_0} = \frac{1}{x_0}$$
> Pertanto
> $$\boxed{(\ln x)' = \frac{1}{x}}$$

#Osservazione 
> [!rmk] dimostrazione alternativa di exp'(x), approfondimento personale
> *Approfondimento personale tratto da: Le Matematiche di A. D. Aleksandrov, A. N. Kolmogorov, M. A. Lavrent'ev (1974)*
> - - -
> Notiamo che è possibile *"dimostrare"* la derivata $(e^x)' = e^x$, usando il *teorema sulla derivata della funzione inversa* ([[Proprietà delle derivate#^97198c]]) e conoscendo la derivata del logaritmo naturale.
> Infatti, supponiamo di avere la funzione $y= e^x$ e la sua inversa $x = \ln y$.
> Ora, usando il teorema sulla derivata della funzione inversa, si ha
> $$(a^x)_x' = \frac{1}{\log_a(y)'_y} = \frac{1}{\frac{1}{y}} = y = e^x$$
> - - -
> riferimento bibliografico: pagina 123

#Osservazione 
> [!rmk] dimostrazione della derivata della funzione potenza in R
> Finalmente abbiamo abbastanza strumenti per poter calcolare la derivata di
> $$x^\gamma, \gamma \in \mathbb{R}$$
> Prima di tutto consideriamo questa *potenza* in termini di *esponenziali* e *logaritmi*;
> $$x^\gamma = e^{\gamma \ln x}$$
> Quindi le derivate di entrambe sono le stesse; deriviamo dunque la funzione del membro destro.
> $$(e^{\gamma \ln x})' = \frac{\gamma}{x}e^{\gamma \ln x} = \gamma\frac{x^\gamma}{x} = \gamma x^{\gamma -1}$$
> Pertanto
> $$(e^{\gamma \ln x})' = \boxed{(x^\gamma)' = \gamma x^{\gamma-1}}$$
## Funzioni trigonometriche seno, coseno e tangente
#Esempio 
> [!exm] funzione seno
> Sia $f(x) = \sin(x)$ la *funzione seno* ([[Funzioni trigonometriche#^dd4b35]]) e vogliamo calcolare la sua *derivata*. Ricordandoci le *formule di prostaferesi* ([[Funzioni trigonometriche#^5d221c]]), svolgiamo i calcoli.
> $$\begin{align}R^f_{x_0}(x) &= \frac{\sin x - \sin x_0}{x-x_0} \\ &= \frac{2\sin(\frac{x-x_0}{2})\cos(\frac{x-x_0}{2})}{x-x_0} \\ &= \frac{\sin(\frac{x-x_0}{2})}{\frac{x-x_0}{2}} \cdot \cos(\frac{x+x_0}{2})\end{align}$$
> Passando al *limite* di $x \to x_0$, ricordiamoci dei *limiti notevoli* (in particolare quella di $\frac{\sin(f(x))}{f(x)}$, abbiamo
> $$\lim_{x \to x_0}R^f_{x_0}(x) = 1 \cdot \cos x_0 $$
> Pertanto
> $$\boxed{(\sin x)' = \cos x}$$ 

#Esempio 
> [!exm] funzione coseno
> Analogamente al ragionamento svolto sopra, avendo $f(x) = \cos x$ si avrebbe
> $$\boxed{(\cos x)' = -\sin x}$$

#Esempio 
> [!exm] funzione tangente
> Applicando la *proprietà sulla derivata di quozienti* si potrebbe derivare $\tan x$ (ove derivabile) e ottenere
> $$\boxed{(\tan x)'} = \frac{(\cos x)^2 + (\sin x)^2}{(\cos x)^2} = \boxed{\frac{1}{(\cos x)^2} = 1+(\tan x)^2}$$
## Funzioni trigonometriche arcoseno, arcocoseno, arcotangente
#Esempio 
> [!exm] funzione arcoseno
> Voglio calcolare la derivata di $\arcsin x$.
> Allora, usando la *proprietà sulla derivata delle inverse* ho
> $$(\arcsin)'(\sin x) = \frac{1}{\cos x}$$
> Ora, sostituendo $y = \sin x \iff x = \arcsin y$, ho
> $$(\arcsin')(y) = \frac{1}{\cos(\arcsin y)}$$
> Ma considerando gli *intervalli di definizione* della funzione $\arcsin$, ovvero $[-\frac{\pi}{2}, \frac{\pi}{2}]$, notiamo che la funzione $\cos$ è *sempre positiva*. Pertanto, facendo valere la relazione fondamentale $\cos^2 + \sin^2 = 1$, ho
> $$(\cos u)^2 + (\sin u)^2 = 1 \implies \cos = \sqrt{1-(\sin u)^2}$$
> Quindi sostituendo $u$ con $\arcsin y$, alla fine ho
> $$(\arcsin')(y) = \frac{1}{\cos(\arcsin y)} = \frac{1}{\sqrt{1-(\sin(\arcsin(y)))^2}} = \frac{1}{\sqrt{1-y^2}}$$
> Pertanto infine abbiamo
> $$\boxed{(\arcsin x)' = \frac{1}{\sqrt{1-x^2}}}$$

#Esempio 
> [!exm] funzione arcocoseno
> Analogamente si dimostra che la derivata della funzione *arcocoseno* è
> $$- (\arcsin x)'=\boxed{(\arccos x)' = -\frac{1}{\sqrt{1-x^2}}}$$

#Esempio 
> [!exm] funzione arcotangente
> Ora vogliamo calcolare la derivata di $\arctan x$ (funzione *arcotangente*).
> $$(\arctan(x))'(\tan x) = \frac{1}{(\tan x)'} = \frac{1}{1+(\tan x)^2}$$
> Pertanto
> $$\boxed{(\arctan x)' = \frac{1}{1+x^2}}$$
# 2. Funzioni non derivabili
## Valore assoluto
#Esempio 
> [!exm] funzione valore assoluto
> Vediamo un esempio basilare del fatto che *non è vera* l'implicazione
> $$f \text{ continua} \implies f \text{ derivabile}$$
> Infatti consideriamo $f(x) = |x|$.
> Notiamo che questa funzione è *continua* in $x_0$; in particolare per $0$, dato che $f(0)=0$.
> Tuttavia la storia è diversa per il *limite* del *rapporto incrementale*: considerando prima $R^f_{x_0}(x)$, abbiamo
> $$R^f_{x_0}(x) = \frac{|x|-|x_0|}{x-x_0} = \frac{|x|}{x} = \begin{cases}1 \text{ se }x>0 \\ -1 \text{ se }x<0 \end{cases}$$
> A occhio si vede immediatamente che il *limite* di questa funzione non esiste più per $x \to 0$; infatti prendendo il limite *destro* e *sinistro*, abbiamo
> $$\begin{cases}\lim_{x \to x_0^-}R^f_{x_0}(x) = -1 \\ \lim_{x \to x_0^+}R^f_{x_0}(x) = 1 \end{cases} \implies \not \exists \lim_{x\to x_0}R^f_{x_0}(x)$$
> Pertanto $f'(0)$ *non è definita*.

#Osservazione 
> [!rmk] però la funzione è derivabile altrove
> Però usando al *definizione locale* di derivabilità notiamo che $f(x)$ è comunque *derivabile* per $\mathbb{R} \diagdown \{0\}$.
> Infatti $f'(x) = 1$ se $x >0$, $f'(x) = -1$ se invece $x <0$.
> 
## Funzione di Weierstraß
#Esempio 
> [!exm] funzione di Weierstraß
> Abbiamo trovato una funzione continua ma *non derivabile* per un punto. Ma allora esistono comunque funzioni *continue* ma *non derivabili* dappertutto? Ovvero *derivabili* da nessuna parte.
> Questo problema è stato risolto dal celebre matematico K. Weierstraß nel 1872 riuscendo a definire una funzione *continua* ma *derivabile da nessuna parte*.
> 
> L'idea di questa funzione consiste nella seguente: immaginiamo, sul piano cartesiano, di avere un'elastico immaginario fissato da *due punti*. Ora, suddividiamo l'area formata da due punti in *tre sotto-aree quadrate*.
> 
> Ora, prendendo il punto *sinistro alto* e *destro basso* del quadrato centrale, fissiamo altri *due punti* e ricreiamo l'elastico.
> Poi ricorsivamente ripeto questa procedura per le sotto aree dove passa il nuovo elastico, dandoci così un elastico *"spigoloso dappertutto"* (quindi derivabile da nessuna parte).
> L'idea grafica viene raffigurata nella *figura 2.2.*.

**FIGURA 2.2.** (*Funzione di Weierstraß*)
![[Pasted image 20231129171300.png]]

## Frattali
> [!rmk] frattale
> Notiamo che con la generazione della funzione di Weierstraß, come risultato otteniamo un *frattale*, che è una forma geometrica speciale: infatti il frattale acquisisce rilevanza particolare nell'arte contemporanea, come ad esempio con la "body art" di J. Pollock
> 
> La proprietà *"speciale"* dei frattali è quella dell'*"auto similarità"*, ovvero che *"zoomando"* all'interno di questi frattali vediamo certi schemi geometrici ripetere. 
> 
> Come esempi di frattali abbiamo la *curva di Koch* (*figura 2.2.b.*) e l'*insieme di Mandelbrot* ([[Forma Trigonometrica dei Numeri Complessi#^1a7f5c]]).

**FIGURA 2.2.b.** (*Curva di Koch*)
![[Pasted image 20231129172141.png]]
