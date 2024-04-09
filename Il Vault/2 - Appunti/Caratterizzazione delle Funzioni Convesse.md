---
data: 2023-11-28
corso: "[[Analisi Matematica I]]"
argomento: Caratterizzazione delle Funzioni Convesse
tipologia: appunti
stato: "1"
---
*Teoremi di caratterizzazione per funzioni convesse; una mediante rette, l'altra mediante la derivata seconda*
- - -
# 1. Primo teorema di caratterizzazione mediante le rette
#Teorema 
> [!thm] di caratterizzazione mediante le rette
> Sia $f: I \longrightarrow \mathbb{R}$, $I$ *intervallo*.
> Allora sono equivalenti i seguenti:
> $$\begin{gather}1). \ f \text{ convessa} \\ \Updownarrow \\ 2). \ \forall x_1, x_2, x_3 \in I, x_1<x_2<x_3 \\ \frac{f(x_2)-f(x_1)}{x_2-x_1} \leq \frac{f(x_3)-f(x_1)}{x_3-x_1} \leq \frac{f(x_3)-f(x_2)}{x_3-x_2} \\ \Updownarrow \\ 3). \ \forall x_1, x_2, x_3 \in I, x_1<x_2<x_3 \\ \frac{f(x_2)-f(x_1)}{x_2-x_1} \leq \frac{f(x_3)-f(x_2)}{x_3-x_2}\end{gather} $$
^742cae

#Osservazione 
> [!rmk] interpretazione grafica
> Il significato geometrico di questo teorema vuol semplicemente dire che, quando prendiamo tre punti di una funzione concava e prendiamo le loro *rette secanti passanti tra di loro*, abbiamo sempre una retta con la *"pendenza più grande"*, con la *"pendenza intermedia"* e con la *"pendenza più piccola"*. 
> Nel caso della *2)* prendiamo *tre* pendenze, invece nel caso della tre *"dimentichiamo"* una di queste pendenze per prendere in considerazione solo due.

**FIGURA 1.1.** (*Significato geometrico*)
![[Pasted image 20231128214919.png]]

#Osservazione 
> [!rmk] sulle implicazioni
> Al fine della dimostrazione osserviamo che
> $$1 \iff 2 \iff 3$$
> è equivalente a dire che
> $$1 \implies 2 \implies 3 \implies 1$$
> in quanto così si *"completa il giro delle implicazioni"*.
^b50a27

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 1.1.* ([[#^742cae]])
Da quanto visto nell'*osservazione 1.2.* ([[#^b50a27]]) dobbiamo semplicemente dimostrare *tre* implicazioni; $1 \implies 2$, $2 \implies 3$ e infine $3 \implies 1$.
$1 \implies 2$. Prendendo i punti $x_1 < x_2 < x_3$ e un qualsiasi *"scalare"* $\lambda \in [0, 1]$, notiamo che $x_2$ sta tra $x_1, x_2$; quindi $x_2$ può essere scritta in *termini di combinazione lineare di* $x_1, x_3$ ([[Combinazione Lineare#^8113de]]). Ovvero
$$ x_2 = \lambda x_1 + (1-\lambda) x_3$$
Ora, risolvendo l'equazione in $\lambda$, ottengo
$$\lambda = \frac{x_3-x_2}{x_3-x_1}  \iff 1 -\lambda = \frac{x_2-x_1}{x_3-x_1}$$
(*i calcoli sono lasciati da svolgere per esercizio*)
Ora applico la *condizione di convessità* ([[Funzione Convessa#^f4cbdd]]) a $x_1, x_3$ con $\lambda$ appena calcolato.
$$\begin{align}f(\lambda x_1 + (1-\lambda)x_3) &\leq \lambda f(x_1)+(1-\lambda)f(x_3) \\ f(x_2) &\leq\frac{x_3-x_2}{x_3-x_1}f(x_1)+\frac{x_2-x_1}{x_3-x_1}f(x_3) \\ (\ast)& \implies\boxed{(x_3-x_1)f(x_2) \leq (x_3-x_2)f(x_1)+(x_2-x_1)f(x_3)}\end{align}$$
(*anche qui i conti sono lasciati da svolgere per esercizio*)
Teniamo la parte segnata come $(\ast)$ fissata.
Per dimostrare il *primo pezzo* della tesi di *2)* usiamo $(\ast)$ sommando ambo i lati con $(x_3-x_1)f(x_1)$;
$$\begin{align}(\ast)\ (x_3-x_1)f(x_2) &\leq (x_3-x_2)f(x_1)+(x_2-x_1)f(x_3) \\ (x_3-x_1)f(x_2)-(x_3-x_1)f(x_1) & \leq (x_3-x_2)f(x_1)+(x_3-x_1)f(x_1)+(x_2-x_1)f(x_3) \\ (x_3-x_1)(f(x_2)-f(x_1)) & \leq (-x_2+x_1)f(x_1)+(x_2-x_1)f(x_3) \\ &\leq (f(x_3)-f(x_1))(x_2-x_1) \\ \implies & \boxed{\frac{f(x_2)-f(x_1)}{x_2-x_1}\leq \frac{f(x_3)-f(x_1)}{x_3-x_1}}\end{align} $$
Analogamente si dimostra il *secondo pezzo* della tesi di *2)*. (da svolgere al lettore per esercizio)
Infine ho completato la dimostrazione di $1 \implies 2$.
$2 \implies 3$. Questa è banale da dimostrare ed è immediata da dimostrare.
$3 \implies 1$. Per ipotesi ho il seguente:
$$\frac{f(x_2)-f(x_1)}{x_2-x_1} \leq \frac{f(x_3)-f(x_2)}{x_3-x_2} $$
Allora scrivo la *combinazione lineare* $x_1 < \lambda x_1 + (1-\lambda)x_2 < x_2$ (ovvero $x_1 = x_1; x_2 = \lambda x_1 + (1-\lambda)x_2; x_3 = x_2$) per $\lambda \in [0, 1]$; ora riapplico il *punto 3)*, ottenendo così la tesi di *1)*. $\blacksquare$

# 2. Secondo teorema di caratterizzazione mediante la derivata seconda

#Teorema 
> [!thm] di caratterizzazione mediante la derivata seconda
> Sia $f: I \longrightarrow \mathbb{R}$, $f$ *derivabile* ([[Derivata e derivabilità#^12c1df]]).
> Allora
> $$\boxed{f \text{ convessa}\iff f' \text{ crescente} \iff \forall x_0 \in I, f(x_0)+f'(x_0)(x-x_0) \leq f(x)}$$
^318646

#Corollario 
> [!cor] di caratterizzazione mediante il segno della derivata seconda 
> Sia $f: I \longrightarrow \mathbb{R}$, $f \in C^2$ ([[Derivata Successiva e Classe C#^dbae48]]); ovvero $f$ derivabile fino al *secondo ordine* $f''$.
> Allora
> $$\boxed{f \text{ convessa}\iff f' \text{ crescente}\iff f''(x) > 0, \forall x \in I} $$

**DIMOSTRAZIONE** del *teorema 2.1.* ([[#^318646]])
Questo è un teorema *"se e solo se"* (per le prime due condizioni), quindi si mira a mostrare *entrambi* i versi della doppia implicazione.
"$\impliedby$". Sia $f'$ *crescente*. 
Allora prendo $x_1, x_2, x_3 \in I: x_1 < x_2 < x_3$.
Uso il *teorema di Lagrange* ([[Teorema di Lagrange#^ef03c2]]) sull'intervallo $[x_1, x_2]$ e $[x_2, x_3]$; allora esistono $\xi_1, \xi_2$ tali che
$$\begin{cases}\exists \xi_1 \in (x_1, x_2): \frac{f(x_2)-f(x_1)}{x_2-x_1} =f'(\xi_1)\\ \exists \xi_2 \in (x_2, x_3): \frac{f(x_3)-f(x_2)}{x_3-x_2}=f'(\xi_2)\end{cases}$$
Però le condizioni di $\xi_{1,2}$ prescrivono che dev'essere vera
$$x_1 < \xi_1 < x_2 < \xi_2 < x_3 \implies \xi_1 < \xi_2 $$
Allora dato che $f'$ è *crescente*, si ha
$$\xi_1 < \xi_2 \implies f'(\xi_1) < f'(x_2) $$
Pertanto
$$\frac{f(x_2)-f(x_1)}{x_2-x_1}\leq \frac{f(x_3)-f(x_2)}{x_3-x_2}, \forall x_1<x_2<x_3 \in I $$
che è esattamente la *condizione di convessità*.
"$\implies$". Sia $f$ *convessa*.
Prendendo un *qualsiasi* punto $x_\xi$ tra $x_1, x_2$ notiamo che per la *condizione di convessità* la *pendenza* tra $x_\xi, x_2$ sarà *sempre* più piccola della pendenza di $x_2$.
Allora graficamente (*figura 2.1.*) si evince che
$$x_1<x_2 \implies f'(x_1)\leq f'(x_2) $$
Analogamente si dimostra che
$$x_2 < x_3 \implies f'(x_2) \leq f(x_3) \ \blacksquare$$
Invece la terza implicazione, ovvero che per ogni *tangente* del punto $x_0$ sta sempre sotto il grafico, deriva dalla *condizione sulle pendenze* ([[#^742cae]]) e dal *teorema di Lagrange* ([[Teorema di Lagrange#^ef03c2]]).

**FIGURA 2.1.** (*Idea grafica della dimostrazione dell'implicazione $\implies$*)
![[Pasted image 20231128230803.png]]

#Osservazione 
> [!rmk] interpretazione grafica alternativa, approfondimento personale
> *Approfondimento personale tratto da: Le Matematiche di A. D. Aleksandrov, A. N. Kolmogorov, M. A. Lavrent'ev (1974)*
> - - -
> Volendo si può dare una interpretazione grafica al fatto che la *il segno della derivata prima* attribuisce la *concavità* o la *convessità* di una funzione; però prima consideriamo il fatto che *il segno della derivata prima* determina la *crescenza* o la *decrescenza* della funzione.
> 
> Per esempio prendiamo una funzione con derivata *sempre* positiva: pertanto è crescente e può avere due possibili curve (escludendo la rettilinea) raffigurate in *figura 2.2.*. 
> Se vogliamo capire come si comporta la curva, basta pensare che la *derivata* della *derivata* non è altro che il *"verso"* per cui cresce (o scende) la derivata stessa!
> 
> A sinistra del disegno, muovendoci lungo la curva vediamo che la *derivata* della funzione continua a man mano incrementare; si muove quindi verso l'*alto*. Pertanto si dice che la funzione è *"convessa verso il basso"* o *"concava verso l'alto"*.
> A destra, invece, si avrebbe che la *derivata* continua a decrescere fino a (quasi) appiattirsi completamente; si muove quindi verso il *"basso"*, suggerendoci così la nozione di *"convessa verso l'alto"* o *"concava verso il basso"*.
> Analogamente questo ragionamento vale lo stesso per le funzioni decrescenti con derivata di segno negativo.
> 
> Pertanto, il segno della derivata seconda *determina* il modo in cui si sviluppa la curva della funzione.
> - - -
> *'La derivata seconda ha anche un semplice significato geometrico. 
> [...], così dal segno si può giudicare da quale parte si incurva il grafico della funzione.
> Supponiamo, per esempio, che in un dato intervallo la derivata seconda sia ovunque positiva; [...]. Pertanto, muovendoci lungo la curva questa si incurva costantemente dalla stessa parte, precisamente verso l'alto, ed è pertanto, come si dice, "convessa verso il basso". Viceversa, in una parte della curva dove la derivata seconda sia negativa ([...]) il grafico della funzione è "convesso verso l'alto" '* - riferimento bibliografico all'inizio, pp. 134-136

**FIGURA 2.1.** (*Interpretazione grafica alternativa*)
![[Pasted image 20231128233239.png]]

## Punto di flesso
#Definizione 
> [!def] punto di flesso
> Sia $f: I \longrightarrow \mathbb{R}$.
> Sia $x_0 \in I$; supponiamo che $f$ sia *continua* in $x_0$.
> Allora $x_0$ si dice *punto di flesso* se si verificano entrambe le condizioni:
> $$\begin{cases}x_0 \in I \cap (-\infty, x_0), f\text{ è convessa (concava)} \\ x_0 \in I \cap (x_0, +\infty), f \text{ è concava (convessa)}\end{cases}$$

#Osservazione 
> [!rmk] Osservazione 2.1.
> Se $f: I \longrightarrow \mathbb{R}$, $f$ derivabile fino al *secondo ordine*, e supponendo che *prima di* $x_0$ si ha $f''(x_0) \leq 0$ e *dopo di* $x_0$ si ha $f''(x_0) \geq 0$, allora $x_0$ è di *flesso*. Vale lo stesso se si ha il viceversa.