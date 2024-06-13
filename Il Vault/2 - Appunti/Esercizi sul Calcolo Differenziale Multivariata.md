---
data: 2024-03-29
corso:
  - "[[Analisi Matematica II]]"
argomento: Esercizi sul Calcolo Differenziale Multivariata
tipologia: appunti
stato: "0"
capitolo: Calcolo Differenziale Multivariata
---
- - -
*Esercizi sul calcolo differenziale in $\mathbb{R}^N$.*
- - -
# 1. Differenziabilità e Derivate
#Esercizio 
> [!exr] 
> Sia $f$ un campo scalare definita come
> $$
> f(x,y)=\left\{\begin{align}&\frac{xy}{x^2+y^2}, (x,y) \neq (0,0) \\ &0, (x,y)=(0,0)\end{align}\right.
> $$
> Dimostrare che $f$ ammette tutte le derivate parziali nell'origine, ma non è differenziabile nell'origine.

#Esercizio 
> [!exr] 
> Sia $f$ un campo scalare definito come
> $$
> f(x,y)=\left\{\begin{align}&\frac{x^2y}{x^2+y^2}, (x,y)\neq(0,0) \\ &0, (x,y)=(0,0) \end{align}\right.
> $$
> Dire se è differenziabile in $(0,0)$. Dire se vale la formula del gradiente, con $\underline{v}=\left(\sqrt{2}^{-1}, \sqrt{2}^{-1}\right)$.

#Esercizio 
> [!exr] 
> Sia $f$ un campo scalare definito come
> $$
> f(x,y)=\left\{\begin{align}&\frac{x^2y}{x^2+y^2}, (x,y)\neq (0,0) \\ &0, (x,y)=(0,0)\end{align}\right.
> $$
> Provare che la funzione è differenziabile in $(0,0)$.

# 2. Differenziazione
#Esercizio 
> [!exr] 
> Scrivere l'equazione del piano tangente nel punto $(1,1)$ della funzione
> $$
> f(x,y)=2x^3y-y^2+3xy
> $$

#Esercizio 
> [!exr] l'equazione del trasporto
> Verificare che la funzione
> $$
> u(x,t)=f(x-ct)
> $$
> dove $f$ è una *funzione in una variabile*, soddisfa il sistema (detta come *"l'equazione del trasporto"*)
> $$
> \left\{\begin{align}& \frac{\partial u}{\partial t}(x,t)+c\frac{\partial u}{\partial x}(x,t)=0 \\ &u(x,0)=f(x) \end{align}\right.
> $$
> dove la prima è la *"concentrazione di fluido"* e la seconda è la *"condizione inerziale"*.

#Esercizio 
> [!exr] 
> Sia $f(x,y)=x^3y+\sin(3x^2y^4)$. Calcolare le tutte le derivate al secondo ordine (ovvero $f_{xx}, f_{yy}, f_{xy}, f_{yx}$). Cosa noti?
^c15d7b

#Esercizio 
> [!exr] 
> Sia $f$ il campo scalare definito come
> $$
> f(x,y)=\left\{\begin{align}&xy \frac{x^2-y^2}{x^2+y^2}, (x,y)\neq (0,0) \\ &0, (x,y)=(0,0)\end{align}\right.
> $$
> Dimostrare che $f_{xy}=-1$ e $f_{yx}=1$.

#Esercizio 
> [!exr] 
> Scrivere la formula di Taylor del secondo ordine per $f(x,y)=xe^{y}$ centrato in $\underline{x_0}=(1,1)$.
