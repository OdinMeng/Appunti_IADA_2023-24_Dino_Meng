---
data: 2024-05-27
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Conduzione Termica
tipologia: appunti
stato: "1"
capitolo: Termodinamica
---
- - -
*Conduzione termica. Modello tipico: definizione di tasso d'incremento del calore sul tempo, flusso di calore.*
- - -
# 0. Voci correlate
- [[Mezzi di Trasmissione del Calore]]
# 1. Modello Tipico
**MODELLO.** (*Conduzione termica*)
Supponiamo che un *pezzo di materia* (in particolare un blocco con area comune $A$ e "spessore" $\Delta x$), da un lato avente temperatura $T$ e dall'altro il gradiente di temperatura $T+ \Delta T$.
![[Pasted image 20240527220631.png|500]]
i. *Rapporto incrementare del calore sul tempo*
Vogliamo quantificare la quantità del *"rate"* calore/tempo (ovvero, *"quanto calore esce da $A$ all'unità del tempo?"*). Per dare una risposta ci basiamo su un ragionamento qualitativo-intuitivo.
Sicuramente sappiamo che questa quantità è *proporzionale* all'area $A$: infatti, più grande è la superficie, più il calore si distribuisce.
Dopodiché è *inversamente proporzionale* allo spessore $\Delta x$: così il calore ha *"più percorso"* da svolgere con l'aumentare di $\Delta x$.
Infine, è *proporzionale* al gradiente di temperatura $\Delta T$: più è grande lo scarto di temperatura, più velocemente si propaga. Introducendo un *coefficiente di proporzionalità*, ho la formula finale
$$
\boxed{\dot Q = \frac{\text{d}Q}{\text{d}T}=-kA \frac{\partial T}{\partial x} }
$$
Si ha che $k$ si misura in $[\text{W}]/([\text{m} \cdot \text{K}])$ o in $[\text{W}]/([\text{m}] \cdot [\text{°C}])$. 
ii. *Flusso di calore*
Normalizzando la quantità appena data sull'area, ottengo il *flusso di calore*
$$
J = \frac{\dot Q}{A}
$$
In particolare, questo è un vettore
$$
\vec{J} = -k \nabla T
$$
e prendendo la sua componente $x$, otteniamo
$$
J_x = -k \frac{\partial T}{\partial x}
$$
iii. *Resistenza termica*
Definiamo la *resistenza termica* come il *coefficiente* che forma il rapporto
$$
\boxed{R=\frac{\Delta x}{k} }
$$
questo sarà utile per gli esercizi.

# 2. Esempi Specifici
#Esempio 
**ESEMPIO.** (*Vetro a doppia lastra*)
Supponiamo di avere una *finestra* a doppia lastra, di area $A$ e con spessori $d_1$. Vi è uno spazio di $d_2$ tra le lastre. Inoltre sia $k_1$ il coefficiente delle lastre e $k_2$ quello del materiale tra le lastre (tipo aria). Supponendo nota la variazione delle temperatura $\Delta T_{1,2} = T_2-T_1$, calcolare la variazione $\dot Q$.
![[Pasted image 20240527222101.png|500]]
Notiamo prima di tutto che non *conosciamo* la temperatura tra le *lastre* (che chiameremo $T_{A}, T_{B}$) e $\dot Q$. Nessun problema! Supponiamo che il *sistema* sia in equilibrio *termico*, ovvero tutte le variazioni istantanee $\dot Q$ sono le stesse. Allora abbiamo il sistema 
$$
\dot Q = \left \{
\begin{align}
& k_{1}A \frac{\Delta T_{1, A}}{d_1} \\ &
k_2 A \frac{\Delta T_{A,B} }{d_2} \\ &
k_1 A \frac{\Delta T_{B,2} }{d_1}
\end{align}
\right.
$$
Isolando per le $\Delta T$ ottengo il sistema di equazioni
$$
\left \{
\begin{align}
& T_A - T_1 = \frac{\dot Q}{A}\frac{d_1}{k_1}\\
& T_B - T_A = \frac{\dot Q}{A}\frac{d_2}{k_2}\\
& T_2 - T_B = \frac{\dot Q}{A}\frac{d_1}{k_1}
\end{align}
\right.
$$
Sommando tutte le equazioni del sistema, ottengo qualcosa di noto:
$$
T_2-T_1 = \frac{\dot Q}{A}\left(\frac{d_1}{k_1}+\frac{d_2}{k_2}+\frac{d_1}{k_1}\right)
$$
Posso definire la *resistenza termica* come $R = \Delta x / k$, ottenendo
$$
T_2-T_1 = \frac{\dot Q}{A}(R_1+R_2+R_1)
$$
Ovvero abbiamo la risposta finale
$$
\dot Q = \frac{A(T_2-T_1)}{R_1+R_2+R_1}
$$
Generalizzando su resistenze arbitrarie (quindi le lastre possono essere di materiale diversi) ho
$$
\boxed{\dot Q = \frac{A\Delta T}{\sum_i R_i} }
$$

#Osservazione 
> [!rmk] analogia con l'elettrotecnica
> Prendendo il *flusso di calore* $J$ (ovvero dividendo per $A$), otteniamo la formula
> $$
> J = \frac{\Delta T}{R_\Sigma}
> $$
> Questa formula è *molto simile* alla *legge di Ohm* per le resistenze, ovvero
> $$
> I = \frac{V}{R}
> $$
> Dove $V$ è il *potenziale* (o meglio, *differenza di potenziale*), $R$ la resistenza elettrica e $I$ l'intensità.
