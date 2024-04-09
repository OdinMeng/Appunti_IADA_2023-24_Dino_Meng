---
data: 2024-03-29
corso:
  - "[[Analisi Matematica II]]"
argomento: Derivata Direzionale
tipologia: appunti
stato: "1"
capitolo: Calcolo Differenziale Multivariata
---
- - -
*Definizione di derivata direzionale per campi scalari. Interpretazione geometrica. Esempi di derivate direzionali.*
- - -
# 0. Voci correlate
- [[Campo Scalare e Insieme di Livello]]
- [[Norma Euclidea in RN]]
- [[Derivata e derivabilità]]
# 1. Definizione di Derivata Direzionale
#Definizione 
> [!def] derivata direzionale di una funzione in un punto lungo un versore
> Sia $f:A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ con $A$ aperto. Sia $\underline{x_0} \in A$, sia $\underline{v} \in \mathbb{R}^N$ un versore (ovvero un vettore tale che la sua norma sia $1$).
> 
> Allora si dice che la funzione $f$ è *"derivabile in $\underline{x_0}$ lungo la direzione orientata $\underline{v}$"* se esiste finito il limite
> $$
> \lim_{t \to 0}\frac{f(\underline{x_0}+t\underline{v})-f(\underline{x_0})}{t}
> $$
> Se esiste finito tale limite, il *valore limite* si dice la *"derivata direzionale di $f$ in $\underline{x_0}$ lungo $\underline{v}$"* e la si denota come
> $$
> \frac{\partial f}{\partial \underline{v} }(\underline{x_0})
> $$

#Osservazione 
> [!rmk] interpretazione geometrica
> Similmente alle *derivate per le funzioni per una variabile reale*, stiamo prendendo il *"rapporto incrementale"* di $f$ e la stiamo dividendo per l'intervallo $t$ che diventa piccolo a piacere, ottenendo così la *pendenza* della retta ([[Derivata e derivabilità#^ec396f|1]]); in questo caso stiamo *"bloccando"* la direzione per il rapporto incrementale tende al valore $f(\underline{x_0}+t\underline{v}) \to f(\underline{x_0})$, prendendo la direzione del versore $\underline{v}$ (*figura 1.1.*).

**FIGURA 2.1.** (*Interpretazione geometrica della derivata direzionale*)
![[Pasted image 20240329201905.png]]

# 2. Esempi della Derivata Direzionale
#Esempio 
> [!exm] 
> Sia $f(x,y)=x+y^2$, sia $\underline{x_0}=(1,2)$ e sia
> $$
> \underline{v}=\left(\frac{\sqrt 2}{2}, \frac{\sqrt 2}{2}\right)
> $$
> Vogliamo calcolare la derivata direzionale
> $$
> \frac{\partial f}{\partial \underline{v} } (\underline{x_0})
> $$
> 
> i. Per calcolare questa derivata, bisogna valutare il valore $\underline{x_0}+t\underline{v}$, al variare di $t \in \mathbb{R}$.
> $$
> \underline{x_0}+t\underline{v} = \left(1+t\frac{\sqrt 2}{2}, 2+t \frac{\sqrt 2}{2}\right)
> $$
> ii. Adesso valutiamo il rapporto incrementale
> $$
> \begin{align}
> &\lim_{t \to 0}\frac{f(\underline{x_0}+t\underline{v})-f(\underline{x_0})}{t} \\ =&\lim_{t \to 0}\frac{1+t\frac{\sqrt 2}{2} + 4+2(2)t\frac{\sqrt 2}{2}+t^2 \frac{2}{4}-1-4 }{t} \\ =&\lim_{t \to 0} \frac{1}{t}+\frac{\sqrt{2} }{2}+\frac{4}{t}+2\sqrt{2}+\frac{1}{2}t-\frac{1}{t}-\frac{4}{t} \\ &= \frac{\sqrt{2} }{2}+2\sqrt{2}
> \end{align}
> $$
> allora ho la risposta
> $$
> \frac{\partial f}{\partial \underline{v} }(\underline{x_0})=\frac{\sqrt 2}{2}+2\sqrt 2
> $$
