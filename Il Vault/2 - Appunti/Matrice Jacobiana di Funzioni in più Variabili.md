---
data: 2024-04-15
corso:
  - "[[Analisi Matematica II]]"
argomento: Matrice Jacobiana di Funzioni in più Variabili
tipologia: appunti
stato: "1"
capitolo: Calcolo Differenziale Multivariata
---
- - -
*La matrice Jacobiana: generalizzazione del gradiente dei campi scalari su funzioni in più variabili. Corollario preliminare: rappresentazione delle differenziali con matrice Jacobiana con basi standard.*
- - -
# 0. Voci correlate
- [[Gradiente di Campi Scalari]]
- [[Matrice]]
- [[Differenziale di Funzioni in più Variabili]]
# 1. Corollario Preliminare
#Corollario 
> [!cor] corollario preliminare per la matrice Jacobiana
> Sia $f:A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}^M$. Se $f$ è *differenziale* in $\underline{x_0}$, allora esistono le derivate parziali
> $$
> \frac{\partial f_i}{\partial x_j}(\underline{x_0}), \forall i, j  \in \{\{1, \ldots, M\}\times\{1, \ldots, N\}\}
> $$

# 2. Definizione di Matrice Jacobiana
**Generalizzazione.** Come fatto prima, vogliamo generalizzare la nozione di *gradiente* ([[Gradiente di Campi Scalari#^20eaf1|1]]) su *funzioni in più variabili*, usando in particolare le *matrici* ([[Differenziale di Funzioni in più Variabili#^048e55|2]]).

#Definizione 
> [!def] matrice Jacobiana di una funzione
> Sia $f:A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}^M$ differenziabile su $\underline{x_0} \in A$. Allora si definisce la sua *matrice Jacobiana* come la matrice formata dalle *derivate parziali* del campo scalare $f_i$ sul versore $x_j$. In particolare, definiamo le entrate individuali come
> $$
> (Jf(\underline{x_0}))_{ij}:=\frac{\partial f_i}{\partial x_j}(\underline{x_0})
> $$
> In forma estesa, la matrice Jacobiana è definita come
> $$
> Jf(\underline{x_0}):=\begin{pmatrix}
>  \frac{\partial f_1}{\partial x_1}(\underline{x_0}) & \ldots & \frac{\partial f_1}{\partial x_N}(\underline{x_0}) \\ \vdots & & \vdots \\ \frac{\partial f_M}{\partial x_1}(\underline{x_0}) & \ldots & \frac{\partial f_M}{\partial x_N}(\underline{x_0})
>  \end{pmatrix} \in M_{M,N}(\mathbb{R})
> $$

^cb48a4

#Proposizione 
> [!prp] formula della matrice jacobiana
> Vale che $df = Jf$.
