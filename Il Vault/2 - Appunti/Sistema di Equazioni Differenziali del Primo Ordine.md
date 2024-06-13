---
data: 2024-05-16
corso:
  - "[[Analisi Matematica II]]"
argomento: Sistemi di Equazioni Differenziali del Primo Ordine
tipologia: appunti
stato: "1"
capitolo: Equazioni Differenziali
---
- - -
*Generalizzazione delle equazioni differenziali su vettori di soluzioni. Definizione di sistema di equazione differenziale di dimensione $N$ del primo ordine. Adattazioni del teorema di Peano-Cauchy-Lipschitz.*
- - -
# 0. Voci correlate
- [[Definizioni Relative alle Equazioni Differenziali]]
# 1. Definizione di Sistema di EDO del Primo Ordine
Generalizziamo quanto detto sulle *ODE*, passando da *soluzioni scalari* (ovvero funzioni $R \to R$) a *funzioni vettoriali* (in un certo senso curve).

#Definizione 
> [!def] sistema di equazioni differenziali del primo ordine
> Sia $N \in \mathbb{N}$ fissato, poi $F:E \subseteq \mathbb{R} \times \mathbb{R}^N \longrightarrow \mathbb{R}^N$, $(x_0, Y^0) \in E$ con $Y^0:=(y_1^0, \ldots, y_N^0)$. Considero $F$ come un campo del tipo $F(x, Y)$ dove $Y(x)=(y_1(x), \ldots, y_N(x))$. 
> 
> Allora definisco
> $$
> (PC_\Sigma):\left\{\begin{align}
> & Y'(x)=F(x,Y) \\
> & Y(x_0)=Y^0
> \end{align}\right.
> $$
> come un *problema di Cauchy*, avente *equazione sistema di equazioni differenziali del primo ordine di grado* $N$. Leggo $(PC_\Sigma)$ come
> $$
> (PC_\Sigma):\left\{
> \begin{align}
> &y_1'(x)=f_1(x, y_1, \ldots, y_N) \\ & \vdots \\ & y'_N (x)=f_N(x, y_1, \ldots, y_N) \\
> & y_1(x_0)=y_1^0 \land \ldots \land y_N(x_0)=y_N^0
> \end{align}
> \right.
> $$
> Come per il *caso scalare*, definisco $Y$ la soluzione del $(PC_\Sigma)$ come una funzione $Y:I \subseteq \mathbb{R} \longrightarrow \mathbb{R}^N$ (ovvero una specie di curva), tale che:
> i. $Y$ sia derivabile in $I$
> ii. Per ogni $x \in I$, si ha $(x, Y(x)) \in E$ (ovvero ha senso)
> iii. $Y'(x)=F(x, Y(x))$ (soddisfa l'ODE)
> iv. $Y(x_0)=Y^0$ (soddisfa la condizione iniziale)

^e8b52e

# 2. Adattazione dei teoremi
I teoremi sul *caso scalare* valgono ugualmente. Come il *teorema di Cauchy-Lipschitz* ([[Teorema di Cauchy-Lipschitz#^a5ca9d]]). 

#Teorema 
> [!thm] di esistenza unica locale, o di Peano-Cauchy-Lipschitz generalizzato
> Sia $(PC_\Sigma)$ il *sistema di equazioni differenziali* definito come
> $$
> (PC_\Sigma):\left\{\begin{align}
> & Y'(x)=F(x,Y) \\
> & Y(x_0)=Y^0
> \end{align}\right.
> $$
> Se $F$ è *continua* sull'aperto $A \subseteq \mathbb{R}^{1+N}$, allora esiste un'ampiezza $h>0$ tale che sia definita $Y: (x_0-h, x_0+h) \longrightarrow \mathbb{R}^N \in \mathcal{C}^1$ che risolva $(PC_\Sigma)$. 
> 
> Se inoltre vale che *tutti gli elementi* della Jacobiana $J(F)$ ([[Matrice Jacobiana di Funzioni in più Variabili#^cb48a4|1]]) sono *continue* (ovvero tutte le derivate di ogni funzione marginale).
> $$
> \forall i, j \in \{1,\ldots,N\}^2 , \frac{\partial f_i}{\partial x_j} \in \mathcal{C}^0
> $$
> allora tale soluzione $Y$ è *unica*.

#Teorema 
> [!thm] dell'esistenza globale
> Sia $(PC_\Sigma)$ il *sistema di equazioni differenziali* definito come
> $$
> (PC_\Sigma):\left\{\begin{align}
> & Y'(x)=F(x,Y) \\
> & Y(x_0)=Y^0
> \end{align}\right.
> $$
> Se $F$ è continua e definita su un intervallo $I \times \mathbb{R}^N$ è *sublineare*, ovvero
> $$
> \begin{gather}
> \forall H \Subset I, \exists \alpha(H), \beta(H) \in \mathbb{R}: \forall x \in H, \\
> \lVert F(x, Y) \rVert \leq \alpha \lVert y \rVert + \beta
> \end{gather}
> $$
> Allora la soluzione $Y$ (che esiste per Peano) è definita su tutto $I$.
