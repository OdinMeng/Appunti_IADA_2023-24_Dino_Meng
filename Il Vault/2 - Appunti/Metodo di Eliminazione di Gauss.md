---
data: 2023-09-26
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Metodo di Eliminazione di Gauss
tipologia: appunti
stato: "1"
---
*Un metodo per risolvere un sistema: il metodo di Gauss.*
- - -
# Preliminari
Consideriamo il seguente [sistema di equazioni lineari](Equazioni%20e%20Proprietà%20Lineari.md). $$\begin{cases}3x+y-2z=0\\-2x-2y+2z=0\\2x-0y-z=0 \end{cases} $$
Per calcolare le soluzioni di questo sistema, useremo una tecnica chiamata *l'eliminazione di Gauss*, che si fonda su dei principi per manipolare un sistema di equazioni in un altro sistema di equazioni *equivalente* (ovvero che ha le stesse soluzioni).

# Metodo di Gauss
Il metodo si consta principalmente di manipolare il sistema al fine di trovare uno equivalente più semplice da risolvere, ovvero nella forma in cui compaiono: 
$$ \begin{cases}\text{dove compaiono tutte le 3 variabili} \\ \text{'' '' '' '' '' 2 variabili} \\ \text{'' '' '' '' '' una variabile}\end{cases}$$ 
**ESEMPIO.** 
1. Partiamo notando che $$-2x-2y+2z=0 \rightarrow^{*-0.5}x+y-z=0$$
2. Scambiando la seconda equazione con la prima, il sistema diviene$$\begin{cases}x+y-z=0\\3x+y-2z=0\\2x-0y-z=0 \end{cases} $$
3. Manipolo la seconda equazione per "eliminare la $x$", sottraendo 3 volte la prima equazione. $$ \begin{align}(3x+y-2z) - 3(x+y-z) &= 0\\ -2y+z&=0\end{align}$$
4. Stesso procedimento per la terza equazione. $$  \begin{align}(2x+0y-z) - 2(x+y-z) &= 0\\ -2y+z&=0\end{align} $$ Tuttavia essa è uguale al passo 3., dunque ridondante e non verrà considerata.
5. In definitiva il sistema è equivalente al seguente. $$\begin{cases}x+y-z=0\\-2y+z=0 \end{cases} $$
6. Assumendo che $z = \alpha \in \mathbb{R}$, allora $y=\frac{1}{2}\alpha$ e $x=y=\frac{1}{2}\alpha$.
7. Pertanto le soluzioni sono della forma $$(0.5\alpha, 0.5\alpha, \alpha) = \alpha(1,1,2) $$
# Formalizzazione in matrici
Se ora, a partire dal sistema iniziale, si vuole avere una scrittura più compatta, allora si può estrarre i coefficienti e porli in una tabella. In tal caso otterremo il seguente. $$\begin{pmatrix}3 &1&2 \\-2 & -2 & 2 \\ 2 & 0 & 1\end{pmatrix}$$Questa viene definita come una *matrice*, su cui ci si può eseguire una serie finita di operazioni per ottenere la soluzione; infatti, si dice che il procedimento è *algoritmico*.
In questo caso si può ripercorrere i passaggi appena svolti nel seguente modo: 
![[gauss matrice.png]]**OSS.** Nel passaggio quinto (5.) si nota che la matrice è disposta a scalini; in questo caso si parla della *gradinizzazione* di una matrice.