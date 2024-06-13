---
data: 2024-05-05
corso:
  - "[[Analisi Matematica II]]"
argomento: Curve Regolari
tipologia: appunti
stato: "1"
capitolo: Curve e Superfici
---
- - -
*Definizione di curva regolare. Rappresentazione delle curve regolari: forma parametrica, forma cartesiana e forma polare. Definizioni relative alle curve in forma parametrica: vettore tangente e versore tangente.*
- - -
# 0. Voci correlate
- [[Curve e Superfici Parametriche]]
- [[Campi Scalari di Classe C]]
- [[Definizione di Continuità di Funzione in più variabili]]
# 1. Curva Regolare, Vettore e Versore Tangente
Vediamo le *curve "meno schifose"*, che ammettono elementi come *versori-tangenti*.

#Definizione 
> [!def] curva regolare
> Una curva in *forma parametrica* $\gamma: I\in\mathcal{B}(\mathbb{R})\longrightarrow \mathbb{R}^N$ si dice *regolare* se soddisfa i seguenti criteri.
> - *Differenziabilità e continuità della curva*
> $$
> \gamma \in \mathcal{C}^1(I) \iff \exists \gamma'(t) \land \gamma'(t)\in \mathcal{C}^0 
 > $$
 > - *Il vettore tangente non si annulla mai*
 > $$
 > \gamma'(t)\neq (0,0), \forall t \in I^\circ
 > $$
 > In tal caso, $\gamma'(t)$ si dice *vettore tangente* e normalizzandolo otteniamo il *versore tangente* $\tau(t)$, ovvero
 > $$
 > \tau_\gamma(t):=\frac{\gamma'(t)}{\lVert\gamma'(t) \rVert}
 > $$
 
# 2. Curva Regolare in Forma Cartesiana
Avendo una *curva regolare*, è possibile avere che questa curva sia ancora *"più bella"*. Chiameremo queste curve come *"curve regolari in forma cartesiana"*. La definiamo *per costruzione*, partendo da una banale e semplice funzione su un intervallo.

#Definizione 
> [!def] curva regolare in forma cartesiana, 2D
> Sia $f:I \in \mathcal{B}(\mathbb{R}) \longrightarrow \mathbb{R} \in \mathcal{C}^1(I)$. 
> 
> La *curva in forma parametrica* definita come
> $$
> \gamma(t):=(t, f(t))
> $$
> si dice *"curva regolare in forma cartesiana"*.

#Osservazione 
> [!rmk] proprietà della curva regolare
> Si deduce immediatamente che le *curve regolari in forma cartesiana* sono sia *semplici* che *regolari*. 
> 
> Il fatto che la componente $x$ sia formata da $t$ garantisce la sia la *semplicità* che *regolarità*. Infatti
> $$
> t_1\neq t_2 \implies \gamma(t_1)=(t_1,f(t_1))\neq (t_2,f(t_2))=\gamma(t_2)
> $$
> e
> $$
> \gamma'(t)=(1, f'(t)) \neq (0, 0)
> $$

# 3. Curva Regolare in Forma Polare
Adesso vediamo un altro caso particolare di *curva regolare*, che può diventare interessante a seconda del caso.

#Definizione 
> [!def] curva regolare in forma polare
> Sia $\rho: I \in \mathcal{B}(\mathbb{R})\longrightarrow \mathbb{R} \in \mathcal{C}^1(I)$ tale che $\rho(\theta) \geq 0$ e vale che
> $$
> \forall \theta \in I^\circ, (\rho(\theta))^2+(\rho'(\theta))^2 >0
> $$
> Si dice *"curva regolare in forma polare"* la curva su $I$ in forma parametrica definita come
> $$
> \gamma(\theta):=(\rho(\theta)\cos\theta, \rho(\theta)\sin(\theta))
> $$

#Osservazione 
> [!rmk] la regolarità della curva
> La regolarità della curva deriva dal fatto che il *modulo della sua derivata sia positiva*. Infatti
> $$
> \lVert \gamma'(\theta)\rVert =\sqrt{\rho(\theta)^2+\rho'(\theta)^2}
> $$
> Imponendo la condizione iniziale, abbiamo
> $$
> \lVert \gamma'(\theta)\rVert >0 \implies \gamma'(\theta)\neq (0,0)
> $$

#Esempio 
> [!exm] cardiodide
> La curva
> $$
> \gamma'(\theta):=((1+\cos\theta)\cos\theta, (1+\cos\theta)\sin\theta)
> $$
> con $I=[-\pi, \pi]$ forma un *cardioide*.

**FIGURA 3.1.** (*Il cardioide*)
![[Pasted image 20240505141714.png]]
