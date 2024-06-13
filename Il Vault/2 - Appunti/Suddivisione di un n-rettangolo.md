---
data: 2024-05-25
corso:
  - "[[Analisi Matematica II]]"
argomento: Suddivisione di un n-rettangolo
tipologia: appunti
stato: "1"
capitolo: Calcolo Integrale in più Variabili
---
- - -
*Suddivisione di $n$-rettangoli: definizione di scomposizione di un $n$-rettangolo, somma inferiore e superiore di un campo scalare dato un $n$-rettangolo, proprietà della somma superiore e somma inferiore.*
- - -
# 0. Voci correlate
- [[Suddivisione di un Intervallo]]
- [[Somma inferiore e superiore per una Funzione]]
# 1. Scomposizione di $n$-rettangoli
Introduciamo il *concetto di scomposizione* su $n$-rettangoli, come fatto per il caso unidimensionale ([[Suddivisione di un Intervallo#^318045]]).

#Definizione 
> [!def] suddivisione di un $n$-rettangolo
> Sia $R$ un $n$-rettangolo del tipo $R=[a_1,b_1]\times \ldots \times [a_n, b_n]$. Fissati $n(k+1)$ punti tali che
> $$
> \left \{
> \begin{align}
 >& a_1=x_0 < x_1 < \ldots < x_k =b_1 \\ &a_2 = y_0 < y_1 < \ldots < y_k = b_2 \\
 >& \vdots \\
 >&  a_n = z_0 < z_1 < \ldots < z_k = b_n
> \end{align}
> \right.
> $$
> Definiamo l'$n$-rettangolo $R_{ij\ldots k}$ come
> $$
> R_{ij\ldots k}=[x_{i-1}, x_i] \times [y_{j-1}, y_j] \times \ldots \times [z_{k-1}, z_k]
> $$
> una *suddivisione* dell'$n$-rettangolo $R$. Naturalmente si ha $R_{ij\ldots k} \supseteq R$. Indichiamo la *collezione* di questi $n$-rettangoli formati come $\delta$: rigorosamente è
> $$
> \delta = \{ (i,j,\ldots,k )\in \{1, \ldots, k\} ^n  : R_{ij\ldots k}\}
> $$
> 
> *Nota: non è necessario che i valori $k$ che suddividono le singole componenti siano uguali, ma lo facciamo per semplicità*

**FIGURA 1.1.** (*Esempio: caso bidimensionale*)
![[Pasted image 20240525195729.png]]

#Definizione 
> [!def] l'insieme delle suddivisioni
> Dato un $N$-rettangolo $R$, l'insieme di *tutte le sue decomposizioni* possibili si indica con
> $$
> \Delta (R)=\{\delta: \delta \text{ scompone }R\}
> $$

# 2. Somma Inferiore e Superiore relativa ad una Scomposizione
Adesso iniziamo a giostrare con queste scomposizioni $\Delta(R)$, come fatto nel caso unidimensionale ([[Somma inferiore e superiore per una Funzione#^1ff0a9]]).

#Definizione 
> [!def] somma inferiore o superiore per una funzione relativa ad una sua scomposizione
> Sia $f:R \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ una *funzione limitata* con $R$ un $N$-rettangolo. Ovvero abbiamo
> $$
> \\ -\infty <\inf_R f \leq \sup_R f < +\infty
> $$
> Data $\delta \in \Delta(R)$ (ovvero una scomposizione di $R$), si definisce la *somma inferiore (e superiore) di $f$ relativa a $\delta$* con parametri $n_1, \ldots, n_N$ (ovvero il numero di rettangolini con cui lo stiamo suddividendo) come 
> $$
> \begin{gather}
> s(\delta, f):= \sum_{i_1 = 1}^{n_1} \ldots \sum_{i_N=1}^{n_N}\inf_{R_{i_1\ldots i_N} }f \cdot m_N(R_{i_1,\ldots, i_N} ) \\
> S(\delta, f):= \sum_{i_1 = 1}^{n_1} \ldots \sum_{i_N=1}^{n_N}\sup_{R_{i_1\ldots i_N} }f \cdot m_N(R_{i_1,\ldots, i_N} ) 
> \end{gather}
> $$

Adesso vediamo le sue proprietà.

#Proposizione 
> [!prp] proprietà delle somme inferiori e superiori
> Si ha che per una $f: R \to \mathbb R^N$ su cui si può definire una suddivisione $s(\cdot, f)$ e $S(\cdot, f)$ vale la seguente disuguaglianza:
> $$
> \forall \delta, \delta' \in \Delta(R)
> $$
> Inoltre ponendo $\sigma$ come l'insieme delle *somme inferiori* e $\Sigma$ delle *somme superiori*
> $$
> \sigma = \{s(\delta, f)\}_\delta , \Sigma = \{S(\delta, f)\}_\delta
> $$
> si ha la che $\sigma, \Sigma$ sono separate in $\mathbb R$, ovvero
> $$
> \sup \sigma \leq \inf \Sigma
> $$

Osservando l'ultima proprietà, siamo pronti per definire l'*integrale di Riemann* per $\mathbb{R}^N$.