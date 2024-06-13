---
data: 2024-05-15
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Entropia di Boltzmann
tipologia: appunti
stato: "1"
capitolo: Termodinamica
---
- - -
*Entropia di Boltzmann: definizione, calcolo della variazione d'entropia. Esempio: espansione libera. Note: interpretazione dell'entropia. Corollario: entropia di Clausius per trasformazioni quasi-statiche e reversibili.*
- - -
# 0. Voci correlate
- [[Microstati di un Sistema Termodinamico]]
# 1. Entropia secondo Boltzmann
#Definizione 
> [!def] entropia secondo Boltzmann
> Si definisce l'entropia $S$, di un *sistema termodinamico*, come la seguente quantità
> $$
> \boxed{S=k_B \ln (\Omega)}
> $$

^bad7c5

#Osservazione 
> [!rmk] non ci interessa il valore effettivo
> Nota: per quanto ci riguarda, non ci interessa il *"valore effettivo"* di $S$ di un dato sistema termodinamico. Infatti ho quella quantità $\Omega$ in mezzo che rende tutto difficile; servirà la *meccanica quantistica* per dare una risposta precisa.
> 
> Noi considereremo in particolare la *variazione d'entropia*, definita come
> $$
> \Delta S=k_B \ln \Omega'-k_B \ln\Omega=k_B\ln\frac{\Omega'}{\Omega}
> $$
> In particolare per l'*espansione libera di Joule* si ha
> $$
> \boxed{\Delta S=k_B \ln \frac{V_2}{V_1} }
> $$

#Osservazione 
> [!rmk] interpretazione dell'entropia
> Si interpreta l'*entropia* come una *"misura del disordine"* di un sistema termodinamico. Infatti le condizioni che consentono maggiori *microstati* limitano *maggiormente* il *"ordine"* del sistema.
> 
> Inoltre sia chiaro che l'*entropia* è una variabile di stato a tutti gli effetti! 

# 2. Entropia secondo Clausius
Vogliamo trovare una versione più *"utile"* dell'entropia di Boltzmann, che ci consente di fare più calcoli.

#Corollario 
> [!cor] entropia secondo Clausius
> Si ha che in un *processo quasi-statico e reversibile* la variazione infinitesimale dell'entropia $\text{d}S$ è data da
> $$
> \boxed{\text{d}S = \frac{\delta Q}{T} }
> $$
^ae2ff7

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^ae2ff7]]
Deriviamo questa definizione. In questo caso consideriamo l'*espansione isoterma*, che è una specie di *"espansione libera reversibile"*. Allora per quantità infinitesimali dell'incremento $\text{d}V$ ho
$$
\text{d}S=k_B N \ln \frac{V+\text{d}V}{V}=k_B N \ln \left(1+\frac{\text{d}V}{V}\right)
$$
Adesso considero il *polinomio di Taylor* per l'equazione $\ln(1+x)$: ho $\ln(1+x) \sim x$ per $x \to 0$ (ovvero il rapporto tra l'incremento e volume totale diminuisce). Questo va bene, quindi ho
$$
\text{d}S=k_B N \frac{\text{d}V}{V}=nR\frac{\text{d}V}{V}
$$
Assumendo di avere *gas ideali*, posso imporre $PV=nRT \implies \frac{nR}{V}=\frac{P}{T}$. Ovvero
$$
\text{d}S=\frac{P \text{ d}V}{T}
$$
Considerando che $P \text { d}V$ non è altro che la quantità infinitesimale $-\delta W=\delta Q$, ottengo la tesi finale
$$
\text{d}S=\frac{\delta Q}{T}
$$

Enunciamo il *caso generale* (ovvero dove non ho trasformazioni *reversibili*)

#Corollario 
> [!cor] caso generale
> Si ha che per *processi quasi-statici* vale
> $$
> \boxed{\text{d}S \geq \frac{\delta Q}{T}}
> $$

# 3. Rivisitazione del Primo Principio della Termodinamica
Conoscendo le *formule esatte* per calcolare $\delta Q$ e $\delta W$, possiamo dare una *"definizione rivisitata"* del primo principio della termodinamica (in particolare la forma infinitesimale). 

#Teorema 
> [!thm] primo principio della termodinamica, forma rivisitata-entropica
> Dato un *sistema termodinamico* sottoposto ad una *trasformazione reversibile*, si ha
> $$
> \boxed{\boxed{\text{d}U = T \text{ d}S-P\text{ d}V  } }
> $$

