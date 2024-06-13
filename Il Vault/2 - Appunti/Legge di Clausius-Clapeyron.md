---
data: 2024-05-27
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Legge di Clausius-Clapeyron
tipologia: appunti
stato: "1"
capitolo: Fasi di Materia
---
- - -
*Formula per calcolare la pendenza della pressione al variare della temperatura per una materia in uno stato di coesistenza.*
- - -
# 0. Voci correlate
- [[Fasi della Materia]]
- [[Diagramma di Fase]]
# 1. Legge di Clausius Clapeyron
#Teorema 
> [!thm] legge di Clausius-Clapeyron
> Supponiamo che una *sostanza* si trovi lungo la *retta di equilibrio*, di *coesistenza*, per due fasi della materia (*figura 1.1.*). Allora si ha che la sua variazione (pendenza) $\text{d}P/\text{d}T$ è uguale a
> $$
> \frac{\text{d}P}{\text{d}T}=\frac{\Delta S}{\Delta V}=\frac{Q_\text{latente} }{T \Delta V}
> $$
^857b79

**FIGURA 1.1.** (*Situazione*)
![[Pasted image 20240527212824.png]]

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^857b79]]
Concentriamoci sul *piano PV* del diagramma di fase. Ovvero mi trovo in un *ciclo termodinamico*, intrappolato tra *due curve isoterme*, un'*espansione* e *compressione* *isobara*, con un'alzamento infinitesimo della temperatura $\text{d}T$.
![[Pasted image 20240527212848.png]]
Dunque per il *primo principio della termodinamica* ho
$$
\text{d}U=T \text{ d}S - P \text{ d}V
$$
Dato che sono in un ciclo termodinamico, l'integrale curvilineo $\oint \text{d}U = 0$ è nullo. Allora segue l'uguaglianza
$$
Q=\oint T \text{ d}S = \oint P \text{ d}V=W
$$
Dato che ho solo *due trasformazioni isoterme e isobare*, il calcolo del calore $Q$ e $W$ diventano facili da svolgere. Segue l'uguaglianza
$$
\begin{align}
T \Delta S - (T+\text{d}T)\Delta S &= P \Delta V
-(P+\text{d}P) \Delta V \\ \text{d}T \Delta S &= \text{d}P \Delta V \\
&\frac{\text{d}P}{\text{d}T}=\frac{\Delta S}{\Delta V} \ \blacksquare
\end{align}
$$
