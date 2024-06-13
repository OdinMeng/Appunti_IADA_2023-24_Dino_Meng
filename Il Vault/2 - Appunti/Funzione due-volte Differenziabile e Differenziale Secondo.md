---
data: 2024-04-15
corso:
  - "[[Analisi Matematica II]]"
argomento: Funzione due-volte Differenziabile e Differenziale Secondo
tipologia: appunti
stato: "1"
capitolo: Calcolo Differenziale Multivariata
---
- - -
*Definizione di funzione due-volte differenziabile in un punto, definizione di matrice Hessiana di una funzione in un punto. Definizione di differenziale secondo.*
- - -
# 0. Voci correlate
- [[Forme Lineari e Quadratiche]]
- [[Differenziale di Funzioni in più Variabili]]
- [[Differenziabilità di Ordine Superiore su Campi Scalari]]
# 1. Definizioni
#Definizione 
> [!def] funzione due-volte differenziale, matrice Hessiana
> Sia $f: A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ con $A$ aperto e con $f$ differenziabile su $A$. Sia $\underline{x_0} \in A$ un punto fissato. Pongo $g(\underline{x}):=\nabla f(\underline{x})$, ovvero $g:\mathbb{R}^N \longrightarrow \mathbb{R}^N$.
> 
> Se $g$ è *differenziabile* in $\underline{x_0} \in A$, si dice che $f$ è *"due volte differenziabile in $\underline{x_0}$"* e la matrice Jacobiana di $g=\nabla f$ si dice la *"matrice Hessiana di $f$ in $\underline{x_0}$"* e la indichiamo con
> $$
> Hf(\underline{x_0}):=Jg(\underline{x_0})=J\nabla f(\underline{x_0})
> $$
> che in forma estesa si scrive come
> $$
> \begin{pmatrix} 
> \frac{\partial^2 f}{\partial x_1 \partial x_1}(\underline{x_0}) & \ldots & \frac{\partial^2 f}{\partial x_N \partial x_1}(\underline{x_0}) \\
> \vdots & & \vdots \\ \frac{\partial ^2 f}{\partial x_1 \partial x_N}(\underline{x_0}) & \ldots & \frac{\partial^2 f}{\partial x_N \partial x_N}(\underline{x_0})
> \end{pmatrix}
> $$

 #Definizione 
 > [!def] differenziale secondo di una funzione in un punto
 > Sia $f$ una funzione *due-volte differenziabile* con $Hf(\underline{x_0})$ la sua matrice Hessiana.
 > La *forma quadratica* ([[Forme Lineari e Quadratiche#^a75fd5|1]]) della matrice $Hf(\underline{x_0})$ definita come
 > $$
 > Q(\underline{h})=\langle Hf(\underline{x_0})\underline{h}, \underline{h} \rangle
 > $$
 > si dice il *"differenziale secondo di $f$ in $\underline{x_0}$"* e lo si denota come
 > $$
 > (\text{d}^2 f)(\underline{x_0})
 > $$

# 2. Proprietà delle funzioni 2-volte differenziabili
#Teorema 
> [!thm] di Young
> Sia $f: A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ con $A$ aperto e con $f$ 2-volte differenziabile in $\underline{x_0}$. 
> 
> Allora la *matrice Hessiana* $Hf(\underline{x_0})$ è *simmetrica*, ovvero le *derivate miste* non *dipendono dall'ordine di derivazione*. Ovvero, vale che
> $$
> \frac{\partial^2 f}{\partial x_i\partial x_j}(\underline{x_0})=\frac{\partial^2 f}{\partial x_j \partial x_i}(\underline{x_0}), \forall i,j \in \{1, \ldots, N\}^2
> $$

#Teorema 
> [!thm] condizione sufficiente per 2-volte differenziabilità
> Sia $f: A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ con $A$ aperto. Vale la seguente implicazione:
> $$
> f \in \mathcal{C}^2(A) \implies f \text{ due volte differenziabile in }A
> $$
^2456fb

**DIMOSTRAZIONE** del [[#^2456fb]]
Questa non è altro che la versione $N=2$ del *teorema del differenziale totale* ([[Teorema del Differenziale Totale#^2b4861|1]]) sulla funzione $g$ definita come $g:=\nabla f$. $\blacksquare$