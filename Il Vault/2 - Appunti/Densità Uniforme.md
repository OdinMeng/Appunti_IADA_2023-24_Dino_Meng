---
data: 2024-05-12
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Densità Uniforme
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Assolutamente Continue
---
- - -
*Definizione di densità uniforme.*
- - -
# 0. Voci correlate
- [[Variabile Aleatoria Assolutamente Continua]]
# 1. Definizione di Densità Uniforme
#Definizione 
> [!def] densità uniforme
> Diciamo che una *variabile aleatoria* $X$ ha *densità uniforme* nell'intervallo $[a,b]$ compatto se la sua *densità* è la funzione
> $$
> f(x)=\frac{1}{b-a}\chi_{[a,b]}(x)
> $$
> Ovvero letteralmente una linea retta su $[a,b]$ di altezza $\frac{1}{b-a}$. Indichiamo questa densità col simbolo
> $$
> U([a,b])
> $$

**FIGURA 1.1.** (*Densità uniforme*)
![[Pasted image 20240512130954.png|500]]

#Teorema 
> [!thm] funzione di ripartizione, media e varianza di una densità uniforme
> Abbiamo la funzione di ripartizione, la media, e la varianza per una densità uniforme $U[a,b]$ sono le seguenti.
> 
> i. *Funzione di ripartizione*
> $$
> F(t)=\left\{\begin{align}& 0, t \leq a \\ &\frac{t-a}{b-a}, t \in [a,b] \\ &1, t \geq b\end{align}\right.
> $$
> ii. *Media e varianza*
> $$
> \begin{gather}E[X]=\int_a^b \frac{x}{b-a}\text{ d}x = \frac{b+a}{2}
> \\ \operatorname{var}X = E[X^2]-E[X]^2 = \frac{(b-a)^2}{12}
> \end{gather}
> $$
^33cd0a

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^33cd0a]]
Omessa, poiché sono solo calcoli. Per la prima teniamo conto che
$$
p\{X \in (t_1,t_2)\}=\int_{t_1}^{t_2}f(x) \ \text{d}x = \frac{|[a,b] \cap [t_1,t_2]|}{b-a}
$$
e poi basta fare i calcoli in una maniera logica. $\blacksquare$

