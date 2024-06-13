---
data: 2024-05-23
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Frigo e Pompa di Calore
tipologia: appunti
stato: "1"
capitolo: Termodinamica
---
- - -
*Macchine termiche particolari: frigo e pompe di calore. Caratterizzazione. Rendimento per il frigo e per la pompa di calore. Rendimento massimo.*
- - -
# 0. Voci correlate
 - [[Ciclo di Carnot]]
 - [[Introduzione alle Macchine Termiche]]
# 1. Definizione di Frigo e Pompa di Calore
#Definizione 
> [!def] frigo e pompa di calore
> Si definisce un *frigo* o *pompa di calore* come *sistema termodinamica* che ha un *flusso di calore non-spontaneo*, ovvero del tipo $\delta Q < 0$ (corpo freddo a corpo caldo) e con *lavoro agente sul sistema* (ovvero *usa* il lavoro per spostare calore).
> 
> In particolare i *frigoriferi* hanno l'obbiettivo di abbassare $T_m$, le *pompe di calore* di alzare $T_M$.

![[Pasted image 20240523220608.png|500]]

*Di solito* le *pompe di calore* sono più efficienti. Inoltre, per il *secondo principio della termodinamica*, è necessario che $W>0$ per far avvenire il *flusso di calore non-spontaneo*.

# 2. Rendimento dei Frighi o Pompe di Calore
Come per il *rendimento delle macchine termiche*, vogliamo dare una definizione per quantificare il rapporto *"cost/benefit"*.

#Definizione 
> [!def] rendimento per frighi o pompe di calore
> Si definisce il *rendimento per il frigo* come
> $$
> K_F = \frac{Q_\text{in} }{W}
> $$
> Invece per la *pompa di calore* è
> $$
> K_{PC}=\frac{Q_\text{out} }{W} 
> $$
> 
> Un buon valore per $K_{PC}$ è $3$.

#Teorema 
> [!thm] massimo rendimento per frighi o pompe di calore
> Supponendo $T_M$ e $T_m$ i picchi di temperatura massima e minima, si ha che
> $$
> K_F = \frac{T_m}{T_M-T_m}
> $$
> e
> $$
> T_{PC}=\frac{T_M}{T_M-T_m}
> $$
^88f9f9

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^88f9f9]]
Si tratta di usare *cicli di Carnot* ([[Ciclo di Carnot#^8da87a]]). $\blacksquare$

