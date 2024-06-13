---
data: 2024-05-23
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Ciclo di Carnot
tipologia: appunti
stato: "0"
capitolo: Termodinamica
---
- - -
*Ciclio di Carnot (approccio moderno): obbiettivo di minimizzazione, primi approcci e soluzione finale. Approccio classico: calcolo delle curve e del lavoro. Teorema del ciclo di Carnot: formula per il rendimento. Caratteristiche del ciclo di Carnot: la più efficiente e la reversibilità.*
- - -
# 0. Voci correlate
- [[Introduzione alle Macchine Termiche]]
- [[Trasformazione Adiabatica]]
- [[Trasformazione Isoterma]]
# 1. Problema Preliminare
Impostiamo il seguente problema.

**PROBLEMA.** (*Ottimizzazione delle macchine termiche*)
Conosciamo che ad una macchina termica è associato il *rendimento* $\eta$ ([[Introduzione alle Macchine Termiche#^dbc885]]). Il nostro obbiettivo è quello di trovare modi per *ottimizzare* questo valore, portandolo a $\eta = 1$.
1. *Primo approccio*
Un primo approccio è quello di *cambiare* i valori $Q_\text{in}$ e $Q_\text{out}$, dato che ho la formula
$$
\eta = 1-\frac{Q_\text{out} }{Q_\text{in} }
$$
Allora posso portare $Q_\text{out} \to 0$ e/o $Q_\text{in} \to +\infty$, massimizzando così $\eta$. Prendendo il *grafico TS*, il modo per farlo è quello di *cambiare i valori di temperatura massima e minima*, a $\max T = +\infty$ e $\min T = 0 \ \text{K}$. Ovvero ho il grafico
![[Pasted image 20240523202306.png|500]]
Risolvendo così il problema. Ma così è realizzabile? Non penso.
2. *Secondo approccio*
Il primo approccio non è realizzabile dal punto di vista pratico, dato che ciò richiederebbe di raggiungere il *zero assoluto* o l'*infinito*. Facciamo dunque considerazioni più pratiche, fissando la *temperatura massima* $T_M$ e la *temperatura minima* $T_m$, associate ai scambi di calore $Q_\text{in}$ e $Q_\text{out}$.  Supponiamo inoltre una *variazione d'entropia* $\Delta S$ fissata.
In questo caso posso tracciare un *rettangolo* limitato in $\Delta T$ e $\Delta S$. Qual è la forma che posso disegnare in questo rettangolo, che abbia la massima area? Certo, il rettangolo stesso!
![[Pasted image 20240523205015.png|500]]
Allora ho sul *grafico TS* un rettangolo, che corrisponde in *grafico PV* il seguente grafico
![[Pasted image 20240523205154.png|500]]
che è formato da *due trasformazioni adiabatiche* e *due trasformazioni isoterme*.

# 2. Definizione di Ciclo di Carnot
Chiameremo il *ciclo appena costruito* come il *ciclo di Carnot*.
#Definizione 
> [!def] ciclo di Carnot
> Si definisce il *ciclo di Carnot* come il ciclo ciclo composto da *quattro trasformazioni*:
> i. $A \to B \sim (P_0, V_0) \mapsto (P_1, V_1)$: trasformazione *isoterma*
> ii. $B \to C \sim (P_1, V_1) \mapsto (P_2, V_2)$: trasformazione *adiabatica*
> iii. $C \to D \sim (P_2, V_2) \mapsto (P_3, V_3)$: trasformazione *isoterma*
> iv. $D \to A \sim (P_3, V_3) \mapsto (P_0, V_0)$: trasformazione *adiabatica*
^7352af

# 3. Approccio Classico al Ciclo di Carnot
L'approccio per costruire il *ciclo di Carnot* è considerato quello moderno. Per invece quello tradizionale (ovvero quello fatto da Carnot), bisogna fare dei calcoli *a mano*, senza considerare il diagramma TS. In particolare *dimostreremo* che questo ciclo è l'*ottimale*.

**DIMOSTRAZIONE.** 
Consideriamo la *definizione del ciclo di Carnot* ([[#^7352af]]). Per ogni trasformazione calcoliamo la sua *variazione di energia*, *scambio di calore* e *lavoro compiuto* associato.
i. $A \to B$: dato che abbiamo a che fare con una *trasformazione isoterma*, abbiamo $\Delta U=0$ ([[Trasformazione Isoterma#^3f2bdb]]). Inoltre si ha noto che $Q = \Delta S \cdot T_M$ ([[Definizione di Entropia#^ae2ff7]]) e poi $W=-Q = - \Delta S \cdot T_M$ ([[Trasformazione Isoterma#^ea6998]]). Riassumendo, si ha
$$
A \to B : \Delta U = 0, Q=\Delta S \cdot T_M , W=-\Delta S \cdot T_M
$$
*Nota: qui per il lavoro usiamo la convenzione per cui $W$ è il lavoro esercitato sul gas*
ii. $B \to C$: qui invece si ha una *trasformazione adiabatica*. Allora $Q=0$, da cui segue $\Delta U=-C_V \Delta T=W$. Riassumendo
$$
B \to C: \Delta U = -C_V \cdot \Delta T, Q=0, W=-C_V \cdot \Delta T
$$
iii. & iv. $(C \to D, D \to A)$: i calcoli sono completamente analoghi, solo al *"contrario"* e considerando $T_m$ invece di $T_M$.
Riassumendo tutto abbiamo la tabella
$$
\boxed{
\begin{matrix}
(\cdot) \to (\cdot ) & \Delta U & Q & W \\ A \to B & 0 & \Delta S \cdot T_M & - \Delta S \cdot T_M \\ 
B \to C & C_V \cdot (-\Delta T) & 0 & C_V \cdot (-\Delta T) \\
C \to D & 0 & - \Delta S \cdot T_m & \Delta S \cdot T_m \\ 
D \to A & C_V \cdot \Delta T & 0 & C_V \cdot \Delta T
\end{matrix}
}
$$

^b687d3

Adesso sommando la colonna del *calore* ho $Q=0$ e $W = -\Delta S \Delta T$, ovvero $W=\Delta S \Delta T$ se consideriamo il *lavoro compiuto dal gas sull'ambiente*. In questo caso ho il *lavoro massimale* con nessun lavoro sprecato. $\blacksquare$

![[Pasted image 20240523210852.png]]


# 4. Proprietà del Ciclo di Carnot
Vediamo delle proprietà di questo ciclo

#Teorema 
> [!thm] del Carnot
> Si ha che, dato un *ciclo termodinamico del tipo Carnot* $\mathcal C$, ha il *rendimento* calcolato come
> $$
> \boxed{\eta_\mathcal C = 1-\frac{T_m}{T_M} } \ll 1
> $$
> Inoltre *non* esiste nessun *ciclo termodinamico* che sia *più efficiente del ciclo di Carnot*. Ovvero,
> $$
> \forall \Sigma : \text{ciclo termodinamico}, \boxed{\eta_\Sigma < \eta_\mathcal{C} \ll 1}
> $$
> Inoltre, il *ciclo di Carnot* è solamente una macchina idealizzata che non può essere realizzata.
^8da87a

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^8da87a]]
Giustifichiamo il primo enunciato (il secondo viene dal fatto che questo ciclo *massimizza* il lavoro). Si tratta di *considerare i calcoli appena fatto* con l'approccio classico ([[#^b687d3]]). Prendiamo la definizione di efficienza,
$$
\eta = 1-\frac{Q_\text{in} }{Q_\text{out} }
$$
Adesso, sapendo che $Q_\text{in}=Q_{AB}=\Delta S \cdot T_M$ e analogamente $Q_\text{out}=Q_{CD}=\Delta S \cdot T_m$ (consideriamo *solo* l'aspetto scalare! ovvero non consideriamo se è *entrante* o meno). Allora
$$
\eta = 1-\underbracket{\frac{Q_\text{in} }{Q_\text{out} } }_{\frac{T_m\Delta S}{T_M\Delta S}} = 1-\frac{T_m}{T_M}
$$
che è la tesi. Per quanto riguarda la minorazione significativa $\ll 1$, calcolare $\eta$ con ciò che possono considerati *"valori estremi"* $T_m = -50 \text{°C}$ e $T_M = 350 \text{°C}$. $\blacksquare$

#Osservazione 
> [!rmk] il ciclo di Carnot è l'unica macchina reversibile
> Osserviamo che *una macchina termica è reversibile* se e solo se *è un ciclo di Carnot*.
> 
> Consideriamo un *ciclo termodinamico* qualsiasi, che *non sia di Carnot* (*figura 4.1.*)
> i. Reversibile per il *gas*? Sì, può essere percorso al contrario.
> ii. Reversibile per il *gas e ambiente*? No, perché con una variazione infinitesimale $\text{d}T$ ho un *flusso spontaneo di calore* $\delta Q$ che *non è reversibile*. Diventa reversibile *solo se* gli scambi sono a *temperatura costante*, dato che avrei $\Delta S= 0$. Infatti, 
> $$
> \Delta S = \int \frac{\delta Q}{T}-\frac{Q}{T_0}>0
> $$
> 
> Conseguenza: la macchina di Carnot è completamente reversibile, dunque irrealizzabile.

#Osservazione 
**OSSERVAZIONE.** (*Rappresenta grafica del ciclo di Carnot e non*)
Possiamo *rappresentare* il ciclo di Carnot col *diagramma del flusso*. In particolare abbiamo che $\Delta S$ *rimane costante* col ciclo di Carnot. Invece nelle *macchine reali* abbiamo che il flusso di entropia $\Delta S$ aumenta, e il *lavoro* $W$ interviene per *gestire* questo aumento.
![[Pasted image 20240523214103.png]]
