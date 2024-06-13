---
data: 2024-05-12
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Trasformazione delle Variabili Aleatorie Assolutamente Continue
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Assolutamente Continue
---
- - -
*Tecnica pratica per valutare le trasformazioni delle v.a. assolutamente continue.*
- - -
# 0. Voci correlate
- [[Variabile Aleatoria Assolutamente Continua]]
# 1. Tecnica
#Proposizione 
**TECNICA.** (*Valutazione della trasformazione delle v.a. assolutamente continue*)
Abbiamo appena visto un teorema per cui se $\psi: \mathbb{R} \longrightarrow \mathbb{R}$ è una *trasformazione regolare*, allora $Y=\psi \circ X$ rimane una *v.a. assolutamente continua* ([[Variabile Aleatoria Assolutamente Continua#^304386]]). Vediamo il caso *non-regolare*.
1. Prima di tutto poniamo $A_t = \{x \in \mathbb{R}: \psi(x) \leq t\}$: da questo si ha che la funzione di ripartizione è
$$
G(t):=p\{Y \leq t\} = p\{X \in A_t\}=\int_{A_t}f(x) \ \text{d}x
$$
La chiave sta nel *"sperare"* che l'insieme $A_t$ non sia *troppo irregolare*. 
1. Supponendo che $Y$ rimanga *assolutamente continua*, avremmo per il *teorema fondamentale del calcolo* che la derivata $G'$ è la densità $g$. Però spesso abbiamo che le densità *non* sono continue! Allora in tal caso si deriva $G$ *solo* dove è possibile. Il caso fortunato sarebbe quello in qui abbiamo la *derivabilità a tratti* (ovvero derivabile ad eccezione dei punti $x_1, \ldots, x_n$). Definiamo dunque
$$
g(x)=\left\{\begin{align}
& G'(x), \exists G' \\ &0, \text{ alt.}
\end{align}\right.
$$
3. Andrebbe verificata che risulti effettivamente
$$
G(t)=\int_{-\infty}^t g(y) \ \text{d}y
$$
ma di solito ci *"fidiamo"*.

# 2. Esempio e Controesempio
Prendiamo degli esempi in cui questa tecnica *funziona*, e un'altra in cui *non funziona*. Partiamo da quella che funziona.

#Esempio 
> [!exm] il quadrato di una guassiana standard
> Sia $X \sim \mathcal{N}(0,1)$. Vogliamo calcolare $Y=X^2$.
> 
> Come prima cosa, essendo $Y \geq 0$, abbiamo che $p\{Y \leq t\}=0$ per $t<0$.
> Invece per $t \geq 0$ abbiamo $A_t = [-\sqrt{t}, \sqrt{t}]$. Calcoliamo dunque
> $$
> p\{X \in A_t\}=\frac{1}{\sqrt{2\pi} }\int_{-\sqrt{t} }^{\sqrt t}e^{-\frac{x^2}{2 } }\ \text{d}x = \frac{2}{\sqrt{2\pi} }\int_0^{\sqrt t}e^{-\frac{x^2}{2 } }\text{d}x
> $$
> Di conseguenza si definisce la funzione di partizione
> $$
> G(t)=\frac{2}{\sqrt{2\pi} }\int_0^{\sqrt{t} }e^{-\frac{x^2}{2} }\text{d}x\cdot \chi_{\mathbb{R^+} }(t)
> $$
> Ne segue che derivandola abbiamo
> $$
> G'(t)=g(t)=\frac{1}{\sqrt{2\pi t\ } }e^{-\frac{t}{2} }\chi_{\mathbb{R}^+ }(t)
> $$
> Da notare che purtroppo $g(0)$ non è definito. Fa niente! Poniamo $g(0)=0$ (o una qualsiasi costante arbitraria).
> 
> Notiamo che questa è proprio la densità gamma $\Gamma(0.5, 0.5)$ ([[Densità Gamma#^1d1dae|1]]).

^80e8ba

#Esempio 
> [!exm] la scala del diavolo
> Definiamo una funzione *ricorsivamente*. 
> 
> Ovvero per $N=1$ splittiamo *tre intervalli di definizione*, poi assegniamo $0, \frac{1}{2}, 1$ la funzione di ogni intervallo.
> Dopodiché per $N=2$ facciamo la stessa identica cosa per ogni intervallo splittato, cambiamo gli estremi (ad esempio nel primo intervallino abbiamo $0, \frac{1}{4}, \frac{1}{2}$).
> Iteriamo all'infinito.
> 
> Per $N \to +\infty$ questa *costruisce* una funzione *continua e derivabile* dappertutto. Per costruzione, abbiamo una *"infinità di scalini"* costanti, quindi la derivata è nulla ovunque.
> 
> Adesso ricaviamo la *funzione di partizione* dalla derivata (che dovrebbe rappresentare la densità):
> $$
> \int 0 = C \in \mathbb{R}
> $$
> accipicchia? Ma cos'è successo? Non ho più degli scalini, bensì una sola costante.
> 
> Questo è dovuto principalmente all'*effetto di diffusione*, ovvero i *salti* spariscono ma *esistono ancora*. Questa è la *contraria* della *concentrazione*, dove abbiamo $\sigma \to 0$).

**FIGURA 2.1.** (*La scala del diavolo*)
![[scala del diavolo.png]]