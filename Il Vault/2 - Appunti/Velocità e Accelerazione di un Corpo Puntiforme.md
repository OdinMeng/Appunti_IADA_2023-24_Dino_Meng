---
data: 2024-03-09
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Velocità e Accelerazione di un Corpo Puntiforme
tipologia: appunti
stato: "1"
capitolo: Cinematica
---
- - -
*Definizione di velocità e accelerazione di un corpo puntiforme. Esempio del calcolo dell'accelerazione di un corpo (moto armonico).*
- - -
# 1. Velocità media e velocità istantanea di un corpo
#Definizione 
> [!def] velocità media
> Siano $t_2, t_1$ due *istanti del tempo* e $x_2, x_1$ posizioni del corpo associati alle istanti del tempo nella maniera seguente:
> $$
> x_1 \leftrightarrow t_1 ; x_2 \leftrightarrow t_2
> $$
> Allora definiamo la *velocità media* del corpo come
> $$
> \langle v_x \rangle = \frac{x_2-x_1}{t_2-t_1} = \frac{\Delta x}{\Delta t}
> $$

#Definizione 
> [!def] velocità istantanea
> Si definisce invece la *velocità istantanea* per un corpo quando portiamo il limite $\Delta t$ a zero. Ovvero, la derivata
> $$
> v_x = \lim_{\Delta t \to 0}\frac{\Delta x}{\Delta t} = \frac{\text{d}x}{\text{d}t}
> $$
> In particolare è la *derivata* della *legge oraria del corpo* sul *tempo*.
> $$
> \vec{v} = \frac{\text{d} }{\text{d}t}\left[\vec{r}(t)\right]:= \frac{\text{d}x }{\text{d}t }\cdot \hat{i} + \frac{\text{d}y }{\text{d}t }\cdot \hat{j} + \frac{\text{d}z }{\text{d}t }\cdot \hat{k}
> $$

# 2. Accelerazione
#Definizione 
> [!def] accelerazione
> In una maniera del tutto analoga, definiamo l'*accelerazione media* come la *derivata della velocità*:
> $$
> \vec{a}(t) = \frac{\text{d}\vec{v}}{\text{d}t} = \frac{\text{d}^2}{\text{d}t^2}\left[\vec{r}(t)\right]
> $$

# 3. Esempio generale
#Esempio 
> [!exm] l'accelerazione del moto armonico
> Supponiamo che un *corpo* si muova secondo la seguente legge oraria:
> $$
> x(t)=A \cos(\omega \cdot t)
> $$
> Prima di tutto vogliamo capire quali sono le *grandezze* associate alle misure $A, \omega$. Per questo usiamo l'*analisi dimensionale* ([[Grandezze e Misure Fisiche#^e43c58]]).
> $$
> \begin{align}x(t)&=A \cos(\omega t) \\ [x(t)] &= [A] \underbracket{[\cos(\omega t)]}_{\text{adimensionale}} \\ L &= L\end{align}
> $$
> Inoltre si osserva che
> $$
> [\omega] = T^{-1}
> $$
> dal momento che l'*argomento della funzione* $\cos$ dev'essere adimensionale. Infatti questa grandezza è una frequenza e si misura in hertz.
> 
> Adesso calcoliamo $v_x(t)$ e $a_x(t)$.
> $$
> \begin{gather}
> v_x(t)=-L\omega \sin(\omega t) \\
> a_x(t)= - L\omega^2 \cos(\omega t)
> \end{gather}
> $$
> 
> Come ultima osservazione possiamo dedurre la relazione
> $$
> a_x(t) = - \omega \cdot x(t)
> $$
> che è proprio un'*equazione differenziale* del tipo
> $$
> f''(x)+\omega f(x)=0
> $$
> risolvibile con l'approccio *"Ansatz"*.
