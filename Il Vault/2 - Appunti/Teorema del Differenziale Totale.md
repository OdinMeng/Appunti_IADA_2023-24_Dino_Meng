---
data: 2024-04-15
corso:
  - "[[Analisi Matematica II]]"
argomento: Teorema del Differenziale Totale
tipologia: appunti
stato: "1"
capitolo: Calcolo Differenziale Multivariata
---
- - -
*Teorema del differenziale totale: enunciato e idea della dimostrazione. Osservazione: abbiamo solo condizioni sufficienti (osservazione preliminare per definire le funzioni di classi C).*
- - -
# 0. Voci correlate
- [[Definizione di Continuità di Funzione in più variabili]]
- [[Differenziale di Campi Scalari]]
# 1. Teorema del Differenziale Totale
**Scopo.** Col seguente teorema vogliamo dare delle *condizioni sufficienti* per la *differenziabilità* di una funzione in più variabili (in particolare *campi scalari*).

#Teorema 
> [!thm] del differenziale totale
> Sia $f:A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$, con $A$ aperto.
> Se $f$ ha le *derivate parziali* in $A$ *continue* in un punto $\underline{x_0} \in A$, allora $f$ è *differenziabile* in $\underline{x_0}$.
^2b4861

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^2b4861]]
*Nota: questa è solo un'idea della dimostrazione*
Dimostriamo il teorema per $N=2$. Ho quindi una funzione del tipo $f(x,y)$.
Allora considero lo scarto $f(x,y)-f(x_0, y_0)$ che diventa $f(x_0+h, y_0+k)-f(x_0,y_0)$ considerando delle ampiezze $h,k$ opportune. Adesso aggiungo e sottraggo per $f(x_0, y_0+k)$ facendo diventare l'espressione in
$$
\underbracket{f(x_0+h,y_0+k)-f(x_0,y_0+k)}_A+\underbracket{f(x_0,y_0+k)-f(x_0,y_0)}_B
$$
Nel blocchi $A, B$ ho *l'incremento in una singola variabile*. Allora posso usare il *teorema di Lagrange* ([[Teorema di Lagrange#^ef03c2]]) per dire che esistono $\pi, \tau \in (0,1)$ tali che otteniamo l'espressione
$$
\frac{\partial f}{\partial x}(x_0+\pi h, y_0+k)h + \frac{\partial f}{\partial y}(x_0, y_0+ \tau k)k
$$
che prova la tesi, dato che abbiamo fatto comparire delle derivate parziali e abbiamo il limite del differenziale che tende al zero. $\blacksquare$

# 2. Osservazione
#Osservazione 
> [!rmk] il teorema del differenziale totale ci dà solo una condizione sufficiente
> Notiamo che questo teorema ci fornisce *solamente* una condizione sufficiente. Infatti esistono delle *funzioni* che sono *differenziabili* in un certo punto, ma le sue *derivate parziali* non sono continue.
> 
> Per convincerci di questo prendiamo la seguente funzione in una variabile:
> $$
> f(x)=\left\{\begin{align}&x^2 \sin\left(\frac{1}{x}\right), x \neq 0 \\ &0, x=0 \end{align}\right.
> $$
> Trovo che esiste $f'(0)$ ma non è continua.

