---
data: 2024-04-20
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Conservazione dell'Energia
tipologia: appunti
stato: "0"
capitolo:
---
- - -
*Conservazione dell'energia: legge. Osservazione: caso meccanica. Esempi: la palla che cade sulla molla e la velocità di fuga.*
- - -
# 0. Voci correlate
- [[Energia Cinetica]]
- [[Energia Potenziale]]
-  [[Sistema e Ambiente]]
# 1. Legge di Conservazione dell'Energia
Enunciamo una *legge (quasi) fondamentale* della fisica.

#Teorema 
> [!thm] la conservazione dell'energia
> Supponiamo di avere il sistema $\Sigma$ e ambiente $\Sigma^C$. Immaginando dei *flussi (ovvero trasferimenti) di energia* esterni ed interni $\Phi$ (*figura 1.1.*), posso scrivere la *variazione dell'energia del sistema* come la somma dei flussi:
> $$
> \boxed{\Delta E_\Sigma = \sum_{i \in \Sigma}\Phi_i}
> $$

**FIGURA 1.1.**
![[Pasted image 20240420215612.png]]

#Corollario 
> [!cor] casi particolare della conservazione dell'energia
> i. Si ha che *di solito* si pone la *conservazione dell'energia* nel seguente modo:
> $$
> \boxed{ \Delta E_\Sigma = \textcolor{GREEN}{\underbracket{K+U} _{{\text{energia meccanica} } } }+\textcolor{RED}{\underbracket{\mathcal{U} }_{\text{energia interna} } } }
> $$
> L'*energia interna* $U$ ci interesserà per la *termodinamica*, in particolare quando inizieremo a considerare le *forze dissipative*, col *calore*.
> 
> ii. Altrimenti si considera la *conservazione della sola energia meccanica*, ignorando l'energia interna $\mathcal{U}$. 
> $$
> \boxed{\Delta E_\Sigma = \Delta K +\Delta U = W}
> $$

# 2. Esempi di Conservazione dell'Energia
Data l'*importanza di questa legge*, vediamo dei casi particolari in cui si applica questa legge.

#Esempio 
> [!exm] la pallina che cade sulla molla
> Immaginiamo di avere una *pallina* che cade su una molla.
> Possiamo immaginare le *quattro fasi* di questo moto:
> 1. La pallina ha *solo* energia potenziale
> 2. La pallina acquisisce *energia cinetica* e manca solo *poca energia potenziale*, per poter *"sprofondarsi sulla molla"*.
> 3. Stessa cosa di prima, ma c'è anche il *potenziale elastico*
> 4. Abbiamo raggiunto il *punto di compressione massimo*, quindi abbiamo *massimo potenziale elastico*
> 
> Adesso per scoprire il *punto massimo di compressione*, basta usare la *conservazione di energia meccanica* (dato che non abbiamo attriti) per imporre
> $$
> \Delta E= 0 \implies mgh=\frac{1}{2}kx_\ast^2
> $$
> Da cui discende il risultato
> $$
> \boxed{x_\ast = \sqrt{2\frac{mgh}{k} } }
> $$

**FIGURA 2.1.** (*La pallina*)
![[Pasted image 20240420221334.png]]

#Esempio 
> [!exm] la velocità di fuga
> Supponiamo di lanciare un'oggetto alla velocità iniziale di $v$. Determinare questa velocità affinché l'oggetto non venga più attratto dalla forza della terra: ovvero l'altezza finale tende a $+\infty$.
> 
> Per poter usare la *conservazione dell'energia* supponiamo di trascurare *forze esterne* ed eventuali *dissipazioni*. Abbiamo dunque
> $$
> \Delta E \implies E= K+U \in \mathbb{R}
> $$
> questa vale in tutti gli istanti. Abbiamo dunque
> $$
> \left\{
> \begin{align}
> &E_i = K_i+U_i =\frac{1}{2}mv^2-\frac{Gm_Tm}{r_T}
> \\ & E_f = K_f + U_f = -\frac{Gm_T m}{r_T + h}
> \end{align}
> \right.
> $$
> adesso pongo $E_i = E_f$, da cui risulta
> $$
> v=\sqrt{\frac{2G m_T}{r_T + \frac{r_T^2}{h} } }
> $$
> Studiando il limite asintotico di $v$ in funzione di $h \to +\infty$ abbiamo
> $$
> \lim_{h \to +\infty}v = \sqrt{\frac{2G m_T}{r_T} }=\sqrt{2g r_T} \approx 40 \cdot 10^3 \text{ km/h}
> $$
> che è il risultato voluto.

**FIGURA 2.2.** (*La velocità di fuga*)
![[Pasted image 20240420223539.png]]
