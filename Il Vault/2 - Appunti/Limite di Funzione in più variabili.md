---
data: 2024-03-28
corso:
  - "[[Analisi Matematica II]]"
argomento: Limite di Funzione in più variabili
tipologia: appunti
stato: "1"
capitolo: Struttura di R^N
---
- - -
*Definizione di limite finito per funzioni in più variabile. Definizione di limite infinito per campi scalari. Condizione necessaria e sufficiente per l'esistenza di un limite in più variabili.*
- - -
# 0. Voci correlate
- [[Definizione di RN]]
- [[Topologia in RN]]
- [[Definizione di Spazio Metrico]]
- [[Definizione di Funzione in più variabili]]
- [[Definizione di Limite di funzione]]
# 1. Definizione di limite finito per funzioni in più variabili
#Definizione 
> [!def] limite finito per funzioni in più variabili
> Sia $f: E \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}^M$, sia $\underline{x_0} \in \mathbb{R}^N$ e $\underline{x_0} \in \mathcal{D}E$. 
> Si dice che *esiste finito il limite*
> $$
> \lim_{\underline{x} \to \underline{x_0}} f(\underline{x}) = \underline{l} \in \mathbb{R}^M
> $$
> se vale la condizione
> $$
> \begin{gather} 
> \forall \varepsilon>0, \exists \delta>0: \forall \underline{x} \in E, \\ 0<d(\underline{x},\underline{x_0} ) < \delta \implies d(f(\underline{x}), \underline{l} )<\varepsilon
> \end{gather}
> $$
> dove $d$ è la *distanza euclidea* su $\mathbb{R}^N$ e $\mathbb{R}^M$ ([[Definizione di Spazio Metrico#^59944b|1]]).

# 2. Definizione di limite infinito per campi scalari
#Definizione 
> [!def] limite infinito per campi scalari
> Sia $f$ un campo scalare, ovvero del tipo $f:E \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$. Sia $\underline{x_0} \in \mathcal{D}E$. 
> Si dice che *il limite esiste infinito*
> $$
> \lim_{\underline x \to \underline{x_0} } f(\underline{x} )=+\infty \ \text{o } -\infty
> $$
> se vale la condizione
> $$
> \begin{gather} 
> \forall k>0, \exists \delta>0: \forall x \in E, \\ 0<d(\underline{x}, \underline{x_0} ) < \delta \implies f(x)>k \ \text{o } f(x)<-k
> \end{gather}
> $$

# 3. Condizione necessaria e sufficiente
#Osservazione 
> [!rmk] preambolo
> Possiamo legare questo concetto di limite in ciascuna delle sue componenti $f_i$.

#Teorema 
> [!thm] condizione necessaria e sufficiente per l'esistenza di un limite in più variabili
> Si ha che 
> $$
> \lim_{\underline{x} \to \underline{x_0} }f(\underline{x})=\underline{l}
> $$
> *esiste finito* se e solo se *esiste finito ciascuno dei limiti*
> $$
> \forall i \in \{1, \ldots, M\}, \lim_{\underline{x} \to \underline{x_0}}f_i(\underline{x})=l_i
> $$

# 4. Condizione sufficiente per la non-esistenza di un limite
#Osservazione 
> [!rmk] una condizione per la non esistenza dei limiti
> Possiamo vedere la *condizione per la definizione di limite* in un altro modo; prendiamo una condizione che conferma la *non-esistenza* di un limite in più variabili.
> 
> Il fatto che esiste il limite
> $$
> \lim_{(x,y) \to (x_0,y_0)}f(x,y)=L
> $$
> vuol dire che, a prescindere dal tipo di *"avvicinamento"* al punto $(x_0,y_0)$, risulta nella convergenza di $f(x,y)$ allo stesso valore $L$.
> 
> Allora, se fossimo in grado di prendere *"due avvicinamenti diversi"* (ovvero delle funzioni che legano $x,y$ tali che entrambi vadano al punto di limite) con corrispondenti *valori limite diversi*, si potrebbe provare la non-esistenza di un limite. Infatti si violerebbe l'*unicità del limite*.
> 
> Di solito, una prima scelta di *"traiettorie"* è il fascio delle rette $y=mx$.

**FIGURA 4.1.** (*Le traiettorie di avvicinamento*)
![[Pasted image 20240328140431.png]]

#Teorema 
> [!thm] condizione sufficiente per la non-esistenza di un limite, caso bidimensionale
> Sia $f: \mathbb{R}^2 \longrightarrow \mathbb{R}^M$.
> Se esistono *almeno due funzioni* $\varphi(x)$ e $\psi(x)$ tali che
> $$
> \lim_{x \to x_0}f(x, \varphi(x))\neq\lim_{x \to x_0} f(x, \psi(x))
> $$
> allora il *limite* 
> $$
> \lim_{\underline{x} \to \underline{x_0}}f(\underline{x})
> $$
> non esiste.

