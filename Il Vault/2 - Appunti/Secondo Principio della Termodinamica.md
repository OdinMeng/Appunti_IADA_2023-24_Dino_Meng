---
data: 2024-05-15
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Secondo Principio della Termodinamica
tipologia: appunti
stato: "1"
capitolo: Termodinamica
---
- - -
*Secondo principio della termodinamica. Interpretazione secondo Boltzmann. Enunciati equivalenti. Corollario: il flusso di calore spontaneo.*
- - -
# 0. Voci correlate
- [[Definizione di Entropia]]
# 1. Secondo Principio di Termodinamica
#Teorema 
> [!thm] secondo principio di termodinamica
> Dato un *sistema chiuso* (isolato) ho la *variazione d'entropia sempre positiva*
> $$
> \boxed{\Delta S \geq 0}
> $$
> Ovvero l'entropia può solo *spontaneamente aumentare* vero il positivo.

#Osservazione 
> [!rmk] interpretazione secondo Boltzmann
> Qui non è richiesta neanche una giustificazione, dal momento che per *Boltzmann* questo è sembrato ovvio. Infatti, perché un sistema non esplorerebbe tutti i microstati a cui ha accesso?
> 
> Come disse con una frase tedesca,
> *"Die Energie der Welt ist constant; die Entropie der Welt strebt einem Maximum zu"*
> Ovvero l'energia dell'universo è costante (*primo principio*), l'entropia dell'universo tende ad un massimo (*secondo principio*)

#Osservazione 
> [!rmk] formulazioni equivalenti
> Vedremo che questo principio comporta delle *formulazioni equivalenti*.
> 
> Ovvero:
> i. *calorimetria, frigoriferi*
> Non posso realizzare un trasferimento di calore da un corpo freddo ad un corpo caldo senza lavoro
> 
> ii. *macchine termiche*
> Non posso completamente convertire il calore in lavoro

# 2. Il flusso di calore spontaneo
Adesso andiamo a rivisitare un problema tipico.

**PROBLEMA.** Dato un sistema isolato con due blocchi in *contatto termico*, ho lo scambio di calore $\delta Q$.

**OSSERVAZIONE.** Ho un *sistema chiuso*, dunque per il *primo principio della termodinamica* ho che lo scambio del calore con l'esterno $\delta Q_T = 0$. Dunque $\delta Q_A = -\delta Q_B$. Allora ho lo scambio di entropia totale
$$
\text{d}S=\text{d}S_A+\text{d}S_B = \frac{\delta Q_A}{T_A}+\frac{\delta Q_B}{T_B}=\delta Q_A \left(\frac{1}{T_A}-\frac{1}{T_B}\right)
$$
Per il secondo principio della termodinamica ho che $\text{d}S \geq 0$. Dunque ho
$$
\delta Q_A \left(\frac{1}{T_A}-\frac{1}{T_B}\right) \geq 0
$$
allora ho due possibilità: se lo *scambio di calore* $\delta Q_A$ è *positiva* (quindi è *assorbita*), ho $T_B > T_A$.
Se invece ho $\delta Q_A < 0$, allora ho $T_A > T_B$.

**CONCLUSIONE.** Il calore è un *tipo di flusso di energia* che dev'essere necessariamente accompagnato da un *flusso di entropia*.
Inoltre l'entropia di un sistema può solo *decrescere* tramite un espulsione di flusso *"verso l'esterno"* del calore. Tutti gli organismi vitali mantengono uno stato di entropia bassa, scaricando entropia nell'ambiente.