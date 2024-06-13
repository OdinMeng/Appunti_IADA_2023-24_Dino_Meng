---
data: 2024-06-03
corso:
  - "[[Analisi Matematica II]]"
argomento: Misura e Integrazione su Curve
tipologia: appunti
stato: "1"
capitolo: Calcolo Integrale in più Variabili
---
- - -
*Misura e integrazione su curve regolari: definizione della lunghezza per una poligonale, definizione di lunghezza. Teorema di caratterizzazione per la lunghezza delle curve. Integrale di linea su campi scalari.*
- - -
# 0. Voci correlate
- [[Curve Regolari]]
# 1. La Poligonale di una Curva
**MOTIVAZIONE.** Voglio esprimere la *lunghezza* di *segmenti parametrizzati* (ovvero curve). Siano $\underline{x}, \underline{y} \in \mathbb{R}^2$ dei vettori distinti: consideriamo la secante dei due punti (ovvero il segmento con estremi $\underline{x},\underline{y}$). Una sua possibile rappresentazione parametrica è $\gamma(t)=(\underline{x}+t(\underline{y}-\underline{x}))$, con $t \in [0,1]$: naturalmente ho che la sua lunghezza è la misura $\lVert \underline{x}-\underline{y} \rVert$. Posso *"formalizzare"* questo scrivendo $l(\gamma)=\int_{[0,1]}\lVert \underline{x}-\underline{y} \rVert \text{ d}t$: vediamo un modo per generalizzare questo concetto. Partiamo considerando delle *"approssimazioni segmentate"* di una curva.

#Definizione 
> [!def] la poligonale di una curva
> Sia $\gamma: I = [a,b] \longrightarrow \mathbb{R}^N$ una *curva regolare in forma parametrica*. Consideriamo una *partizione* $\delta$ di $I$ data dai punti $a=t_0 < t_1 < \ldots < t_n =b$. 
> 
> Definisco la *poligonale* $\pi(\delta_I)$ come la *curva* individuata dai punti della *composizione*
> $$
> \pi(\delta_I):=(\gamma(t_0),\ldots,\gamma(t_n))
> $$
> Abbiamo banalmente che la sua *lunghezza* è la sommatoria
> $$
> l(\pi(\delta_I)) = \sum^n_{i=1}\lVert \gamma(t_i-1)-\gamma (t_i) \rVert
> $$
> Inoltre denotiamo l'insieme delle composizioni $\delta_I$ con $\delta_I \in \Delta$.

**FIGURA 1.1.** (*L'idea della poligonale*)
![[Pasted image 20240603211136.png]]

# 2. Misura di una Curva
Come fatto con gli *integrali unidimensionali*, possiamo passare all'*estremo superiore* per ottenere la lunghezza (ovvero la *"miglior approssimazione"* per una curva rappresenta la lunghezza della curva stessa).

#Definizione 
> [!def] lunghezza di una curva
> Sia $\gamma: I = [a,b] \longrightarrow \mathbb{R}^N$ una *curva regolare in forma parametrica*. Si definisce la sua *lunghezza* come
> $$
> l(\gamma):=\sup_{\delta \in \Delta}l(\pi(\delta))
> $$

Ciò serve così possiamo enunciare un *teorema di caratterizzazione*, per misurare la lunghezza delle curve. La dimostrazione sarà omessa.

#Teorema 
> [!thm] di caratterizzazione delle curve
> Sia $\gamma: I = [a,b] \longrightarrow \mathbb{R}^N$ una *curva regolare in forma parametrica*. Si ha che la sua lunghezza $l(\gamma)$ è calcolabile con l'integrale
> $$
> \boxed{l(\gamma)= \int_I \lVert \gamma' \rVert = \int_a^b \lVert \gamma'(t) \rVert \text{ d}t}
> $$

# 3. Integrale di Linea
Generalizziamo quanto detto sulla *lunghezza delle curve*: immaginiamo che vengano pure *"distorte"* da un campo scalare in più variabili.

#Definizione 
> [!def] integrale di linea di una funzione su una curva
> Sia $\gamma: [a,b] \longrightarrow \mathbb{R}^N$ una *curva regolare in forma parametrica* e $f:E \subseteq \mathbb{R}^N \longrightarrow \mathbb{R} \in \mathcal{C}^0(E)$ un *campo scalare*, tali che $\gamma([a,b])\subseteq E$ (naturalmente il sostegno della curva deve stare nel dominio, altrimenti è tutta fuffa).
> 
> Allora si definisce l'*integrale di linea di $f$ su $\gamma$* come l'integrale
> $$
> \int_\gamma f \text{ d}s
> $$
> che è equivalente a
> $$
> \boxed{\int_\gamma f \text{ d}s= \int_a^b f(\gamma(t))\cdot \lVert \gamma'(t) \rVert \text{ d}t} 
> $$
> Ovvero prendiamo la misura della *curva* e la moltiplichiamo per la sua *"distorsione"*.

**FIGURA 3.1.** (*Integrale curvilineo*)
![[Pasted image 20240603221048.png]]

#Osservazione 
> [!rmk] casi particolari
> Per $f(\cdot)\equiv 1$ ho semplicemente la *lunghezza di una curva*; invece per $\gamma(t)\equiv1$ ho l'*integrale di un solido*.
