---
data: 2024-04-15
corso:
  - "[[Analisi Matematica II]]"
argomento: Teorema del Valor Medio Generalizzato
tipologia: appunti
stato: "1"
capitolo: Calcolo Differenziale Multivariata
---
- - -
*Teorema del valor medio (o di Lagrange) generalizzato su campi scalari in $\mathbb{R}^N$: enunciato, dimostrazione (idea). Corollario: le funzioni differenziabili sono lipschitziane.*
- - -
# 0. Voci correlate
- [[Teorema di Lagrange]]
- [[Gradiente di Campi Scalari]]
# 1. Teorema di Lagrange Generalizzato
**Generalizzazione.** Adesso, vogliamo generalizzare alcuni risultati del *calcolo differenziale su una variabile*. In questo caso vogliamo estendere il *teorema di Lagrange* ([[Teorema di Lagrange#^ef03c2|1]]) su campi scalari $f:\mathbb{R}^N \longrightarrow \mathbb{R}$. 

#Teorema 
> [!thm] di Lagrange o del valor medio, generalizzato
> Sia $f: A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ con $A$ aperto e $f$ differenziabile su $A$.
> Allora per ogni punto $\underline{x},\underline{y} \in A$ tali che il *segmento* $g$ soddisfa
> $$
> g(t)=\underline{x}+t(\underline{y}-\underline{x}) \in A, \forall t \in [0,1]
> $$
> (in parole vogliamo che questo segmento rettilineo che parte da $\underline{x}$ e finisce in $\underline{y}$ faccia *sempre* parte dell'aperto $A$)
> Allora esiste un numero $\sigma \in (0,1)$ tale che
> $$
> f(\underline{y})-f(\underline{x})=\langle \nabla f(\underline{x}+\sigma(\underline{y}-\underline{x})), \underline{y}-\underline{x}\rangle
> $$
^c43a30

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^c43a30]]
*Nota: questa è un'idea della dimostrazione.*
L'idea è quella di prendere il percorso $g$ e applicarci il teorema del Lagrange su una dimensione ([[Teorema di Lagrange#^ef03c2|1]]). Per fare ciò dobbiamo *"preparare"* questa funzione per soddisfare i criteri del teorema e rendere comodo i calcoli.
Definiamo innanzitutto $h(t)=f(g(t))$, ovvero $h:[0,1] \longrightarrow \mathbb{R}^N$. Abbiamo una situazione del tipo $h: [0,1] \subset \mathbb{R} \to A \subseteq \mathbb{R}^N \to \mathbb{R}$.
Chiaramente si vede che $h$ è una funzione *derivabile*, essendo $f,g$ derivabili ([[Differenziale di Funzioni Composte in più Variabili#^4b8fa5|2]]). Inoltre, sappiamo che vale
$$
h'(t) = \langle \nabla f(g(t)), g'(t) \rangle
$$
Infatti abbiamo $\nabla f(g(t))=df(\underline{x_0})$ e $dg_t=g'(t)$.
Poi, trattando i vettori come delle costanti calcoliamo la derivata di $g$ in $t$ come
$$
g'(t)=(y_1-x_1, \ldots, y_N-x_N) = \underline{y}-\underline{x}
$$
Adesso possiamo finalmente applicare il teorema di Lagrange su $h$ e abbiamo
$$
\exists \xi \in (0,1): \frac{h(1)-h(0)}{1-0}=h'(\xi)
$$
Che diventa
$$
h(1)=f(g(1))=f(\underline{y}); h(0)=f(\underline{x})
$$
e anche
$$
h'(\xi)=\langle \nabla f(g(\xi)), \underline{y}-\underline{x} \rangle = \langle \nabla f(\underline{x}+\xi(\underline{y}-\underline{x})), \underline{y}-\underline{x}\rangle
$$
che è la tesi. $\blacksquare$

# 2. Conseguenza del Teorema di Lagrange
#Osservazione 
> [!rmk] le funzioni differenziabili sono localmente lipschitziane
> Notiamo che con questo teorema possiamo provare che le funzioni differenziabili sono *localmente lipschitziane*, ovvero prendendo due punti $\underline{x}, \underline{y}$ abbiamo che il loro scarto è limitato per un valore limite $L$ moltiplicato per la differenza della loro norma. 
> 
> Abbiamo infatti, per la disuguaglianza di Cauchy-Schwarz ([[Norma Euclidea in RN#^a525b6|1]]),
> $$
> \begin{align}
> \left|f(\underline{x})-f(\underline{y})\right|&=\left|\langle \nabla f(\underline{x}+\xi (\underline{y}-\underline{x})), \underline{y}-\underline{x}\rangle\right| \\ \text{C.S.}\implies ''& \leq\lVert \nabla f(\underline{x}+\xi(\underline{y}-\underline{x}))\rVert - \lVert \underline{x}-\underline{y}\rVert
> \end{align}
> $$
> allora possiamo prendere
> $$
> L=\sup_{\xi \in [0,1]}\nabla f(\underline{x}+\xi(\underline{y}-\underline{x}))
> $$
> come il valore-limite.

#Corollario 
> [!cor] formalizzazione dell'osservazione precedente
> Sia $f$ una funzione differenziabile su $A$ aperto. Allora è localmente lipschitizana sul dominio.

#Corollario 
> [!cor] condizioni necessarie per funzioni costanti
> Se $f:A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ con $A$ aperto e connesso, $f$ differenziabile su $A$ e tale che valga
> $$
> \nabla f(\underline{x})=\underline{0}, \forall \underline{x} \in A
> $$
> allora la funzione $f$ è *costante in* $A$.
^2aaeca

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^2aaeca]]
Si tratta di usare il *teorema del valor medio* ([[#^c43a30|1]]), per cui si ha $f(\underline{x})=f(\underline{y})$. Infatti, il prodotto scalare di un vettore nullo per un qualsiasi altro vettore è sempre nullo. Allora
$$
f(\underline{x})-f(\underline{y})=0 \implies f(\underline{x})=f(\underline{y})
$$
che è la tesi. $\blacksquare$
