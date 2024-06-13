---
data: 2024-05-05
corso:
  - "[[Analisi Matematica II]]"
argomento: Classificazione delle Curve in Forma Parametrica
tipologia: appunti
stato: "1"
capitolo: Curve e Superfici
---
- - -
*Prima classificazione delle curve in f.p.. Curva chiusa e semplice.*
- - -
# 0. Voci correlate
- [[Curva in Forma Parametrica]]
# 1. Curve chiuse e semplici
Diamo una prima classificazione di curve in f.p..

#Definizione 
> [!def] curva chiusa e semplice
> Sia $\gamma:I \in \mathcal{B}(\mathbb{R}) \longrightarrow \mathbb{R}^N$ una curva. Sia $a = \min I$, $b=\max I$ ($a$ è il *"punto di partenza"*, $b$ il *"punto finale"*)
> 
> Si dice che $\gamma$ è *chiusa* se vale che
> $$
> \gamma(a)=\gamma(b)
> $$
> Si dice che è *semplice* se vale che
> $$
> t_1\neq t_2 \land t_1,t_2 \in I^\circ \implies \forall(t_1,t_2) \in \mathbb{R}^2, \gamma(t_1)\neq\gamma(t_2)
> $$
> ovvero abbiamo una specie di *"iniettività"* per i punti interni.

^52b68b

# 2. Esempi di Classificazione
#Esempio 
> [!exm] la circonferenza non è regolare su certi intervalli
> Riprendiamo la circonferenza definita come
> $$
> \gamma = (\cos t, \sin t)
> $$
> Se si ha $I=[0, 2\pi)$ allora la curva è *chiusa* e *semplice*. Infatti
> $$
> \gamma(0)=0, \gamma(2\pi)=0
> $$
> Tuttavia se si sceglie $I' = [0, 3\pi]$ allora la curva non è ne *chiusa* ne *semplice*. Infatti
> $$
> \gamma(0)\neq\gamma(3\pi), \gamma(0.1)=\gamma(2\pi+0.1)
> $$

Questo discorso ci interessa relativamente, la classificazione più interessante è quella delle *curve regolari* ([[Curve Regolari|1]]).
