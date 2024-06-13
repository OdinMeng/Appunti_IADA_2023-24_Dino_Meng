---
data: 2024-04-15
corso:
  - "[[Analisi Matematica II]]"
argomento: Derivate di Ordine Superiore su Campi Scalari
tipologia: appunti
stato: "1"
capitolo: Calcolo Differenziale Multivariata
---
- - -
*Estensione di concetto di derivata su campi scalari di ordine superiore: definizione di derivata seconda di una funzione in un punto nelle direzioni orientate. Definizione di derivata parziale secondo (o n-esimo) di una funzione rispetto a $x_i$, $x_j$. Modello di derivata parziale di secondo ordine.*
- - -
# 0. Voci correlate
- [[Derivata Direzionale]]
- [[Derivata Parziale]]
# 1. Derivata Direzionale e Derivata Parziale Seconda
**Preambolo.** Vogliamo espandere le nozioni di *derivata direzionale* e *derivata parziale* di campi scalari $f$ su più ordini; a parole, vogliamo essere in grado di definire la *"derivata seconda, terza, quarta, eccetera..."*.

#Definizione 
> [!def] derivata seconda di una funzione in un punto lungo le due direzioni
> Sia $f:A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$, con $A$ aperto. 
> Sia $\underline{u} \in \mathbb{R}^N$ un versore (ovvero che abbia modulo $1$) tale che esista la derivata direzionale $\frac{\partial f}{\partial \underline{u} }(\underline{x})$, per ogni punto di $A$: resta quindi definita la funzione $g=\frac{\partial f}{\partial \underline{u} }$ in $A$.
> Sia $\underline{x_0} \in A$, sia $\underline{v} \in \mathbb{R}^N$ un altro versore.
> 
> Se esiste la derivata direzionale
> $$
> \frac{\partial g}{\partial \underline{v}}=\frac{\partial}{\partial \underline{v}}\left(\frac{\partial f}{\partial \underline{u} }\right)(\underline{x_0})
> $$
> allora quest'ultima si dice *"derivata seconda di $f$ in $\underline{x_0}$ nelle direzioni orientate $\underline{v}, \underline{u}$"* e lo si indica con
> $$
> \boxed{\frac{\partial^2 f}{\partial \underline{v} \partial \underline{u} }(\underline{x_0})}
> $$

#Definizione 
> [!def] derivata parziale seconda di una funzione in un punto rispetto a due variabili
> Sia $f: A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ con $A$ aperto e tale che esista la derivata parziale $\frac{\partial f}{\partial x_i}$ per un qualsiasi punto in $A$. Sia $\underline{x_0} \in A$ fissato.
> 
> Se esiste la derivata parziale
> $$
> \frac{\partial}{\partial x_j}\left(\frac{\partial f}{\partial x_i}\right)(\underline{x_0})
> $$
> allora quest'ultima si dice *"derivata parziale seconda di $f$ in $\underline{x_0}$ rispetto a $x_i, x_j$"* e lo si indica con
> $$
> \boxed{\frac{\partial^2 f}{\partial x_i \partial x_j}(\underline{x_0}) \iff f_{x_i x_j}(\underline{x_0})}
> $$

# 2. Estensione generalizzata
#Osservazione 
> [!rmk] estensione generalizzata dei concetti
> Analogamente (per induzione se vogliamo essere eleganti) possiamo estendere queste definizioni su $n \in \mathbb{N}$ per definire
> $$
> \frac{\partial^n f}{\partial \underline{v_n}\partial \underline{v_{n-1}}\ldots\partial \underline{v_1} }, \frac{\partial^n f}{\partial x_n\ldots\partial x_1}\iff f_{x_1\ldots x_n}
> $$

# 3. Esempio di Modello con Derivate Parziali
**Esempio pratico.** Adesso presentiamo un *esempio pratico* che presentano delle *derivate parziali di secondo ordine*.

#Esempio 
> [!exm] l'equazione della corda elastica oscillante
> Prendiamo una corda elastica, che oscilla. Prima di tutto notiamo che all'istante $t=0$ ho la configurazione $y=f(x)$. Dopodiché, ho che negli successivi istanti la configurazione è descritta dal sistema $\mathcal{E}_0$, che è la seguente:
> $$
> (\mathcal{E}_0):\left\{\begin{align}& u(x,0)=f(x)\\&u_t(x,0)=0\\&u_{tt}(x,t)-c^2u_{xx}(x,t)=0\end{align} \right.
> $$
> Dove $y=u(x,t)$ è lo *spostamento del punto di ascissa $x$ al tempo $t$*. Se $f \in \mathcal{C}^2$ allora una soluzione per $(\mathcal{E}_0)$ può essere
> $$
> u(x,t)=\frac{1}{2}\left(f(x+ct)+f(x-ct)\right)
> $$
