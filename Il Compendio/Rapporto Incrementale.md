---
data: 2023-11-20
corso: "[[Analisi Matematica I]]"
argomento: Rapporto Incrementale
tipologia: appunti
stato: "1"
---
*Definizione di rapporto incrementale di una funzione in un punto.*
- - -
# 1. Definizione di rapporto incrementale
#Definizione 
> [!def] Definizione 1.1. (rapporto incrementale di una funzione relativo un punto del dominio) 
> Sia $f: I \longrightarrow \mathbb{R}$, $I$ un *intervallo* ([[Intervalli]]).
> Sia $x_0$ un punto del dominio $I$.
> Allora chiamo il *rapporto incrementale* $R_{x_0}^{f}(x)$ della funzione $f$ relativamente al punto $x_0$ come
> $$R_{x_0}^{f}(x)=\frac{f(x)-f(x_0)}{x-x_0} $$
^ccc58b

#Proposizione 
> [!prop] Proposizione 1.1. (rapporto incrementale come funzione)
> Allora si può pensare al *rapporto incrementale* $R_{x_0}^{f}(x)$ come una funzione che lega ad un qualsiasi punto $x$ in $I$, escluso $x_0$ in quanto si avrebbe la forma indeterminata $\frac{0}{0}$, un altro punto della retta reale.
> $$R_{x_0}^{f}: I \diagdown{x_0} \longrightarrow \mathbb{R} $$

#Osservazione 
> [!oss] Osservazione 1.1. (interpretazione geometrica della derivata)
Osserviamo che questa definizione ha anche un *significato geometrico*: infatti $R_{x_0}^{f}$ è anche la *pendenza* (coefficiente angolare) della *retta secante* dei punti $(x_0, f(x_0)$ e $(x, f(x))$. 
^c7cbf0

**FIGURA 1.1.** (*Significato geometrico*)
![[Pasted image 20231122155846.png]]
