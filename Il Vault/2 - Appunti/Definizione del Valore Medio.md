---
data: 2024-05-02
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Definizione del Valore Medio
tipologia: appunti
stato: "1"
capitolo:
---
- - -
*Definizione di valore medio per v.a. discrete, per densità associate a v.a. discrete. Definizione di valore medio finito e centrato.*
- - -
# 1. Definizione di Valore Medio per v.a. discrete
#Definizione 
> [!def] valore medio per v.a. discreta
> Sia $X: \Omega \longrightarrow \mathbb{R}$ una *variabile aleatoria discreta*, ovvero che assume un numero *al più numerabile*, associata alla densità $q$. Allora ha senso considerare il valore
> $$
> \overline{X\ }= \sum_{j=1}^N \frac{p\{X=X_j\}x_j }{p(\Omega)} = \sum_{j=1}^N q(x_j)x_j = \sum_{x \in \mathbb{R} }q(x)x
> $$
> Abbiamo $p(\Omega)=1$, ovvero la sua misura è $1$. 
> 
> Si indica il *valore medio* di una v.a. discreta con
> $$
> E[X]
> $$
> e sinonimi per questo possono essere la *media*, il *valore atteso* o la *speranza matematica*.

#Osservazione 
> [!rmk] buona posizione della definizione
> La definizione è ben posta. Consideriamo la condizione
> $$
> \sum_{x \in \mathbb{R} }|x|q(x) < +\infty
> $$
> Infatti, la condizione $\sum |x| q_x$ è soddisfatta *sempre* quando abbiamo un numero *finito* di valori.
> Se invece ho una *quantità numerabile* di oggetti, posso spezzare la sommatoria in due, ottenendo
> $$
> \sum_{x <0}(-x)q(x) + \sum_{x \geq 0}x q(x) = \sum_{x \in \mathbb{R}}xq(x)
> $$
> In entrambi abbiamo delle *serie a termini positivi*, quindi evitiamo il caso in cui abbiamo una serie *indeterminata*, dato che abbiamo posto la prima condizione. 
> 
> Allora le opzioni sono due: o la media diverge a $+\infty$ o ho *valore medio finito* ($\sum |x|q(x) < +\infty$). Se invece vale che $E[X]=0$ allora si dice che $X$ è *"centrata"*.

# 2. Definizione di Valor Medio Generalizzato
#Definizione 
> [!def] valor medio per una v.a. qualsiasi
> Sia $X:\Omega \longrightarrow \mathbb{R}^+$ una *variabile aleatoria non-negativa*. Si definisce il *valor medio* di $X$ la quantità
> $$
> E[X]:=\sup\{Y:\Omega \longrightarrow \mathbb{R}| 0 \leq Y \leq X\}
> $$
> ammesso che sia finita. 
> 
> Oppure viene definita come l'*integrale di Lebesgue* definita come
> $$
> \boxed{E[X]:=\int_\Omega X \ \text{d}p}
> $$
> con $p$ la misura su $\Omega$ (ammesso che sia sempre finita!).
> 
> Nel caso in cui abbiamo variabili aleatorie a *segno qualunque*, basta spezzare in $X^+$ e $X^-$ e vedere se entrambe le loro medie $E[X^+], E[X^-]$ sono finite. In tal caso, si definisce
> $$
> E[X]:=E[X^+]-E[X^-]
> $$

^3a0f7f

**FIGURA 2.1.** (*Lebesgue*)
![[Pasted image 20240512092828.png]]