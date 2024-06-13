---
data: 2024-05-10
corso:
  - "[[Analisi Matematica II]]"
argomento: Dipendenza continua dai dati iniziali
tipologia: appunti
stato: "1"
capitolo: Equazioni Differenziali
---
- - -
*Dipendenza continua dai dati iniziale dei problemi ben posti di Cauchy.*
- - -
# 0. Voci correlate
- [[Teorema di Cauchy-Lipschitz]]
- [[Definizioni Relative alle Equazioni Differenziali]]
# 1. Dipendenza continua dai dati iniziali
Enunciamo una proprietà dei *problemi di Cauchy ben posti*, ovvero la *dipendenza continua* dai *dati iniziali*, che ci permette di *approssimare* le *soluzioni di Cauchy* su intorni dei dati iniziali.

#Teorema 
> [!thm] dipendenza continua dai dati iniziali di problemi di Cauchy posti bene
> Sia $(PC)$ un *problema di Cauchy* ben posto, definito come
> $$
> (PC):\left\{\begin{align}
> & y'(x)=f(x,y(x)) \\
> & y(x_0)=y_0
> \end{align}\right.
> $$
> Allora dato il problema di *Cauchy traslato* $(\overline{PC})$ definita come
> $$
> (\overline{PC}):\left\{\begin{align}
> & z'(x)=f(x,z(x)) \\
> & z(x_0)=z_0
> \end{align}\right.
> $$
> Vale la seguente:
> $$
> \begin{gather}
> \forall \varepsilon>0, \exists \delta>0: \forall z_0 \in \mathbb{R}, z \ \text{risolve }(\overline{PC}), \\|y_0-z_0| < \delta \implies |y(x)-z(x)|< \varepsilon, \forall x \in B(x_0, h) 
> \end{gather}
> $$

**IDEA.** L'idea di questo teorema è di dire che su intorni di $x_0$ con ampiezza $h$ (ovvero il raggio di definizione di $y, z$) abbiamo che le soluzioni $y, z$ non si discostano *troppo*; ovvero ho una specie di *"stabilità"*, se interpreto le soluzioni come *traiettorie* al variare in tempo (ovvero $\gamma_1(t):=(t, y(t))$ e $\gamma_2(t):=(t, z(t))$) (*figura 1.1.*)

**FIGURA 1.1.**
![[Pasted image 20240510215444.png|300]]
