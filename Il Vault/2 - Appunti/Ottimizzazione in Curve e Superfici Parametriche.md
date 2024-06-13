---
data: 2024-05-07
corso:
  - "[[Analisi Matematica II]]"
argomento: Ottimizzazione in Curve Parametriche
tipologia: appunti
stato: "1"
capitolo: Ottimizzazione in più variabili
---
- - -
*Ottimizzazione in curve parametriche.*
- - -
# 0. Voci correlate
- [[Curve e Superfici Parametriche]]
- [[Problemi di Ottimizzazione]]
- [[Vincolo per una Funzione]]
# 1. Teorema per l'Ottimizzazione in Curve Parametriche
Vediamo una prima *condizione necessaria* per *estremi vincolati* su curve $\gamma$.

#Teorema 
> [!thm] condizione necessaria per estremi vincolati, caso curvilineo in forma parametrica
> Sia $f:A \subseteq \mathbb{R}^2 \longrightarrow \mathbb{R} \in \mathcal{C}^1(A)$. Sia $\gamma:I \in \mathcal{B}(\mathbb{R})\longrightarrow A$ una *curva regolare semplice* ([[Superficie Regolare in Forma Parametrica#^3eefbb|1]]) e sia $\underline{x_0} = \gamma(t_0) \in \Gamma$ un *punto regolare*, con $t_0 \in I^\circ$ e sia posto $\Gamma=V$ come vincolo. 
> 
> Allora vale che se $\underline{x_0}$ è un *estremo vincolato* per $f_{|\Gamma}$ allora vale che $\gamma'(t_0)$ e $\nabla f(\underline{x_0})$ sono *ortogonali*, ovvero
> $$
> \boxed{\langle\nabla f(\underline{x_0}), \gamma'(t_0)\rangle=0}
> $$
^292837

**FIGURA 1.1.** (*L'idea è questa*)
![[Pasted image 20240507213641.png]]

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^292837]]
Consideriamo la composta $f(\gamma(t)):I \subseteq \mathbb{R} \to A \to \mathbb{R}$, e la definiamo come $\psi(t)$. Poiché $\underline{x_0}=\gamma(t_0)$ è un *estremo vincolato*, abbiamo che $t_0$ è un *estremo libero* per $\psi$ ([[Differenziale di Funzioni Composte in più Variabili#^4b8fa5|1]]). Dunque per il *teorema di Fermat* ([[Teorema di Fermat#^8ab68b|1]]), abbiamo che $\psi'(t_0)=0$, da cui considerando la composizione di funzioni si ricava la tesi ^71d25d
$$
\psi'(t_0)=\langle \nabla f(\underline{x_0}), \gamma'(t_0)\rangle=0
$$
che prova il teorema. $\blacksquare$

Notiamo che in questo caso abbiamo usato *curve già note* a priori. Nel caso in cui avessimo *curve implicite*, bisognerà passare al *teorema del Dini* per trovare la curva. Intanto generalizziamo questo teorema sulle *superfici*.

# 2. Ottimizzazione sulle Curve Parametriche
#Teorema 
> [!thm] condizione necessaria per estremi vincolata, caso superficie
> Sia $f:A \subseteq \mathbb{R}^3 \longrightarrow \mathbb{R} \in \mathcal{C}^1(A)$. Sia $\sigma: K \subseteq \mathbb{R}^2 \longrightarrow \mathbb{R}^3$ con $K$ la *chiusura di un insieme aperto* (ovvero prendiamo $K=\overline{B^\circ}$) e $\sigma$ una *superficie regolare semplice*.
> 
> Allora se $\underline{x_0}=\sigma(u_0,v_0)=(x(u_0,v_0),y(u_0,v_0),z(u_0,v_0)) \in \Sigma := \sigma(K)$ è un *punto di estremo vincolato* per $f_{|\Sigma}$ e se $\underline{u_0}=(u_0,v_0) \in B$, allora vale che le derivate $\sigma_u$, $\sigma_v$ valutate in $\underline{u_0}$ sono ortogonali al gradiente $\nabla f(\underline{x_0})$. Ovvero
> $$
> \boxed{\langle \nabla f(\underline{x_0}), \sigma_u(\underline{u_0})\rangle = 0= \langle \nabla f(\underline{x_0}), \sigma_v(\underline{u_0})\rangle}
> $$
^6da55b

**FIGURA 1.1.** (*L'idea è questa*)
![[Pasted image 20240507214535.png|650]]

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^6da55b]]
La dimostrazione è completamente analoga a quella precedente ([[#^71d25d]]). Ovvero, considerando la composizione $\psi = f \circ \sigma: K \subseteq \mathbb{R}^2 \longrightarrow \mathbb{R}$ abbiamo che $\psi$ ha un *estremo* in $\underline{u_0}=(u_0,v_0)$ che implica, per il test del gradiente ([[Test del Gradiente#^249814|1]]), $\nabla \psi(\underline{u_0}) = \underline{0}$. Da qui segue l'equazione ([[Differenziale di Funzioni Composte in più Variabili#^4b8fa5|1]])
$$
\nabla \psi (\underline{u_0})=\underline{0} \implies \psi_u(\underline{u_0})=\psi_v(\underline{u_0})=\underline{0} \implies \left\{\begin{align}& \langle \nabla f(\psi(\underline{u_0})), \sigma_u(\underline{u_0}) \rangle = 0 \\ & \langle \nabla f(\psi(\underline{u_0})),\sigma_v(\underline{u_0})\rangle=0\end{align} \right.
$$
Considerando che $\psi(\underline{u_0})$ non è altro che $\underline{x_0}$ stessa, abbiamo la tesi. $\blacksquare$