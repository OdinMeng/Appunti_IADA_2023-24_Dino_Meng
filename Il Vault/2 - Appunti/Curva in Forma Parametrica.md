---
data: 2024-05-05
corso:
  - "[[Analisi Matematica II]]"
argomento: Curva in Forma Parametrica
tipologia: appunti
stato: "1"
capitolo: Curve e Superfici
---
- - -
*Richiamo alla definizione di curva in forma parametrica. Interpretazione cinematica delle curve parametriche. Esempi di curve in forma parametrica.*
- - -
# 0. Voci correlate
- [[Curve e Superfici Parametriche]]
# 1. Definizione di Curva in Forma Parametrica
#Definizione 
> [!def] curva in forma parametrica
> Sia $\gamma: I \in \mathcal{B}(\mathbb{R})\longrightarrow \mathbb{R}^N$ (dove $\mathcal{B}(E)$ è il *boreliano* di $E$, ovvero gli l'insieme degli intervalli nel caso dei numeri reali). 
> 
> La coppia $(\gamma, \gamma(I))$ si dice *curva parametrica* in $\mathbb{R}$, di cui:
> - $\gamma$ si dice *rappresentazione parametrica*
> - $\Gamma := \gamma(I)$ si dice *sostegno della curva*
> 
> Si può vedere la curva parametrica con l'*interpretazione cinematica* ([[Posizione e Spostamento di un Corpo Puntiforme|1]]): la $\gamma$ rappresenta l'informazione sul corpo puntiforme, $\gamma(I)$ la traiettoria del corpo.

#Definizione 
> [!def] notazione
> Indicheremo le curve in $2D$ e $3D$ con le seguenti parametrizzazioni. Siano $x,y,t:\mathbb{R} \longrightarrow \mathbb{R}$, definiamo
> $$
> \begin{gather}
> N=2 \implies \gamma(t)=(x(t), y(t))
> \\
> N=3 \implies \gamma(t)=(x(t),y(t),z(t))
> \end{gather}
> $$

# 2. Esempi di Curva in forma parametrica bidimensionale
#Esempio 
> [!exm] retta
> Ho
> $$
> \gamma(t):=(2t+1, t-1)
> $$
> ovvero $2y-x+3=0$ in forma implicita. Ovvero, abbiamo una retta.

#Esempio 
> [!exm] circonferenza
> Consideriamo
> $$
> \gamma(t):=(\cos t, \sin t)
> $$
> Per $I=[0,2\pi)$ e $I'=[0,3\pi]$ ho sempre lo *stesso sostegno* $\gamma$, ma vedremo che hanno *proprietà diverse*.
> 
> Questa rappresenta una circonferenza. Infatti $x^2+y^2=1$ rappresenta questa curva in forma implicita.

#Esempio 
> [!exm] curva
> Con
> $$
> \gamma(t):=(t^2,t^3)
> $$
> abbiamo per $I=[-1,1]$ un sostegno del tipo nella *figura 2.1.*.

**FIGURA 2.1.**
![[Pasted image 20240505132816.png|200]]

# 3. Esempi di Curva in forma parametrica, tridimensionale
#Esempio 
> [!exm] spirali
> Consideriamo le curve nello spazio
> $$
> \gamma_1(t)=(\cos t, \sin t, t)
> $$
> e
> $$
> \gamma_2(t)=(t\cos t, t\sin t, t)
> $$
> abbiamo *due spirali*, una che *"cresce in maniera costante"*, l'altra che *"diventa sempre più grande"* (vedere *figura 3.1.*)

**FIGURA 3.1.**
![[Pasted image 20240505133236.png]]

Teniamo fissati questi esempi per la *classificazione delle curve*.