---
data: 2024-05-05
corso:
  - "[[Analisi Matematica II]]"
argomento: Superficie Regolare in Forma Parametrica
tipologia: appunti
stato: "1"
capitolo: Curve e Superfici
---
- - -
*Approfondimenti sulle superfici. Definizione di superficie regolare semplice in forma parametrica.*
- - -
# 0. Voci correlate
- [[Curve e Superfici Parametriche]]
# 1. Definizione di Superficie Regolare e Semplice in f.p.

#Definizione 
> [!def] superficie regolare e semplice in forma parametrica
> Sia $A\subseteq \mathbb{R}^2$ aperto e connesso. Sia $\sigma$ la parametrizzazione su $A$, definita come tale
> $$
> \sigma:K=\overline{A\ }\subseteq \mathbb{R}^2 \longrightarrow \mathbb{R}^3
> $$
> ovvero $\sigma(u,v)=(x(u,v), y(u,v), z(u,v))$ con $x,y,z: \mathbb{R}^2 \longrightarrow \mathbb{R}$.
> 
> Si dice che:
> i. $\sigma$ è *semplice* se è *continua* nell'interno di $K$ ($\sigma \in \mathcal{C}^1(K^\circ)$), e le sue derivate parziali $\sigma_u$, $\sigma_v$ sono estendibili con continuità fino al bordo (la frontiera) di $K$.
> ii. $\sigma$ è *regolare* se vale che $\sigma_u$ e $\sigma_v$ sono *sempre linearmente indipendenti* in $K^\circ$, ovvero che vale
> $$
> \forall(u,v)\in K^\circ, \sigma_u(u,v) \times \sigma_v(u,v) \neq \underline{0}
> $$
> iii. terza condizione
> $$
> \underline{u_1},\underline{u_2} \in K^\circ \land \underline{u_1}\neq \underline{u_2} \implies \sigma(\underline{u_1})\neq\sigma(\underline{u_2})
> $$
> Se valgono tutte e tre le condizioni, allora la coppia $(\sigma, \sigma(K))$ si dice *"superficie regolare semplice in forma parametrica"* di cui $\sigma$ è la *rappresentazione parametrica* e $\Sigma:=\sigma(K)$ il *sostegno*.

^3eefbb

#Esempio 
> [!exm] la sfera
> La funzione
> $$
> \sigma(\theta,\varphi)=(R\sin\theta\cos\varphi, R\sin\theta\sin\varphi, R\cos\theta)
> $$
> con $K=[0,\pi] \times [0,2\pi]$ si ha una *sfera*. Si verifica che è *regolare* e *semplice*.

# 2. Definizioni relative alle Superfici Regolari
Introduciamo un paio di nozioni *relative* alle superfici regolari, utili per l'ottimizzazione vincolata.

#Definizione 
> [!def] linee coordinate
> Sia $\Sigma = (\sigma, \sigma(K))$ una *superficie regolare semplice in forma parametrica* e $(u_0, v_0) =\underline{u_0} \in K$ fissato. 
> 
> Abbiamo che possiamo definire le *curve regolari in forma semplice* come
> $$
> \begin{gather}
> \sigma(\cdot, v_0):(u_0-\delta, u_0+\delta)\longrightarrow \mathbb{R}^3 \\
> \sigma(u_0, \cdot):(v_0-\delta,v_0+\delta)\longrightarrow \mathbb{R}^3
> \end{gather}
> $$
> si dicono le *linee coordinate* su $\Sigma$.

Graficamente prendiamo $K$ piatto su $\mathbb{R}^2$, e tracciamo le assi $u,v$ aventi origine in $\underline{u_0}$. Dopodiché, portandoli sulla curva $\Sigma$ abbiamo che queste linee sono un po' *"deformate"*.

**FIGURA 2.1.** (*Linee coordinate*)
![[Pasted image 20240505214106.png]]

Adesso introduciamo le *ultime nozioni* sulle *superfici regolari*.

#Definizione 
> [!def] vettori tangenti, piano tangente e normale al piano
> Sia $\Sigma = (\sigma, \sigma(K))$ una *curva regolare semplice in f.p.*.
> 
> I *vettori tangenti alle linee coordinate* in $\underline{x_0}$ sono le derivate parziali $\sigma_u(\underline{x_0})$ e $\sigma_v(\underline{x_0})$.
> 
> Per definizione questi sono *linearmente indipendenti*, dunque individuano il *piano tangente* a $\Sigma$ e lo si rappresenta in forma parametrica come lo *span* dei due vettori ([[Combinazione Lineare#^1fd7fd|1]]):
> $$
> \begin{align}
> &\underline{x} \in \operatorname{span}(\sigma_u(\underline{u_0}), \sigma_v(\underline{u_0}))
> \\ \implies& \underline{x}=\underline{x_0}+s\sigma_u(\underline{u_0})+t\sigma_v(\underline{u_0}) \text{ (forma parametrica)} \\ \implies & \langle \sigma_u(\underline{u_0})\times\sigma_v(\underline{u_0}),\underline{x}-\underline{x_0}\rangle = 0 \ \text{ (forma implicita)}
> \end{align}
> $$
> 
> Infine si definisce il *versore normale a $\Sigma$ in $\underline{x_0}$* come il vettore normalizzato
> $$
> \mu(\underline{u_0}):=\frac{\sigma_u(\underline{u_0})\times \sigma_v(\underline{u_0})}{\lVert \sigma_u(\underline{u_0})\times \sigma_v(\underline{u_0})\lVert}
> $$

^8e6653

**FIGURA 2.2.** (*Linee coordinate e la normale alla superficie*)
![[Pasted image 20240505215130.png]]

