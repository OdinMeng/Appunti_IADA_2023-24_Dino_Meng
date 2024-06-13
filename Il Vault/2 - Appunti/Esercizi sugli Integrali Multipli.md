---
data: 2024-05-25
corso:
  - "[[Analisi Matematica II]]"
argomento: Esercizi sugli Integrali Multipli
tipologia: appunti
stato: "0"
capitolo: Calcolo Integrale in più Variabili
---
- - -
*Esercizi su $\iiiint$, fino a quando si vuole.*
- - -
# Sezione A. Prime tecniche di integrazione
#Esercizio 
> [!exr] 
> Calcolare l'integrale
> $$
> \iint_R ye ^{xy} \ \text{d}x \ \text{d}y
> $$
> su $R = [1,2]^2:= [1,2] \times [1,2]$.

# Sezione B. Integrazione su insiemi arbitrari
#Esercizio 
> [!exr] 
> Calcolare l'integrale
> $$
> \iint_E \frac{x}{x^2+y^2} \text{ d}x \text{ d}y
> $$
> con 
> $$
> E=\left\{(x,y) \in \mathbb{R}^2: 1 \leq x \leq 2 \land \frac{x^2}{2}\leq y \leq x^2\right\}
> $$

#Esercizio 
> [!exr]
> Calcolare l'integrale
> $$
> \iint_E |xy| \text{ d}x\text{ d}y
> $$
> con $E$ come riportata nella figura sottostante:
> ![[Pasted image 20240602204520.png]]

#Esercizio 
> [!exr] 
> Calcolare l'integrale
> $$
> \iiint_E 1 \text{ d}x\text{ d}y \text{ d}z 
> $$
> con $E$ definita come
> $$
> E=\left\{(x,y,z) \in \mathbb{R}^3: x^2+y^2 \leq 1 \land 0 \leq z \leq 1-x\right\}
> $$

#Esercizio 
> [!exr] 
> Calcolare l'integrale
> $$
> \iiint_E 1 \text{ d}x \text{ d}y \text{ d}z
> $$
> con $E$ posta come
> $$
> E=\left\{(x,y,z) \in \mathbb{R}^3: z^2\leq x^2+y^2 \leq 1-z^2\right\}
> $$

#Esercizio 
> [!exr] 
> Calcolare il volume del solido di rotazione definito come
> $$
> E=\left\{(x,y,z) \in \mathbb{R}^3: 1 \leq z \leq 2 \land 0 \leq x^2+y^2 \leq z^2\right\}
> $$

# Sezione C. Misura e integrazione su curve e superfici
#Esercizio 
> [!exr] 
> Calcolare la lunghezza della curva
> $$
> \gamma\left(t \in [0,2\pi[\right)=\begin{pmatrix} R \sin t \\ R \cos t\end{pmatrix}
> $$
> con $R \in \mathbb{R}$ un parametro reale.

#Esercizio 
> [!exr] 
> Calcolare la massa di un filo appoggiamo sul sostegno della curva
> $$
> \gamma(t \in [0, 2\pi])=\begin{pmatrix}2t \cos t \\ 2t \sin t \\ 3t \end{pmatrix}
> $$
> avente densità $\rho(x,y,z)=z$.

#Esercizio 
> [!exr]
> Calcolare la superficie della sfera, data dalla parametrizzazione definita come
> $$
> \sigma((u,v) \in ([0,\pi]\times[-\pi, \pi])) = \begin{pmatrix}R \sin u \cos v \\ R \sin u \sin v \\ R\cos u \end{pmatrix}
> $$
> con $R$ un parametro reale fissato.

#Esercizio 
> [!exr] 
> Calcolare la massa di una lamina, appoggiata sul sostegno della curva
> $$
> \sigma(u,v) = \begin{pmatrix} u \\ v \\ u^2+v^2 \end{pmatrix}
> $$
> sul dominio $K=\{(x,y) \in \mathbb{R}^2 : x^2+y^2 \leq 1\}$ e supponendo la densità $\mu(x,y,z)=z$.

# Sezione D. Tecniche di Integrazione in Più Variabili

#Esercizio 
> [!exr] 
> Calcolare l'integrale
> $$
> \iint_E (x-y)\ln(x+y) \text{ d}x\text{ d}y
> $$
> con $E$ definito come il parallelepipedo racchiuso nelle rette di equazione
> $$
> E: \left \{
> \begin{align}
> & r_1: y=x-1 \\ & r_2 : y=x \\ &r_3 : y=1-x \\ &r_4: y=3-x
> \end{align}
> \right.
> $$

#Esercizio 
> [!exr] 
> Calcolare l'integrale
> $$
> \iint_E x^2+y \text{ d}x\text{ d}y
> $$
> su $E$ definita come la porzione della corona circolare nel semispazio $x\geq 0$ delimitata dalle circonferenze $\Gamma_1, \Gamma_2$ e delimitate dalle bisettrici $r_1, r_2$:
> $$
> E \sim \left \{
> \begin{align}
> & \Gamma_1: x^2+y^2= 1  \\ 
> & \Gamma_2: x^2+y^2=4 \\
> & r_1 : y=x \\ &
> r_2 : y=-x
> \end{align}
> \right.
> $$

#Esercizio 
> [!exr] 
> Calcolare l'integrale gaussiana
> $$
> \int_{\mathbb{R} }e^{-x^2} \text{ d}x
> $$

