---
data: 2024-05-07
corso:
  - "[[Analisi Matematica II]]"
argomento: Metodo dei Moltiplicatori di Lagrange
tipologia: appunti
stato: "1"
capitolo: Ottimizzazione in più variabili
---
- - -
*Metodo dei moltiplicatori del Lagrange. Teorema: enunciato e dimostrazione. Applicazione pratica del teorema.*
- - -
# 0. Voci correlate
- [[Ottimizzazione in Curve e Superfici Parametriche]]
- [[Teorema del Dini]]
- [[Curva in Forma Implicita]]
# 1. Risultato Teorico
Prima di parlare del *metodo dei moltiplicatori di Lagrange*, utilizzato per *ottimizzare* funzioni vincolate su *curve implicite*, enunciamo il risultato teorico.

#Teorema 
> [!thm] dei moltiplicatori di Lagrange
> Sia $f:A \subseteq \mathbb{R}^2 \longrightarrow \mathbb{R} \in \mathcal{C}^1(A)$ con $A$ un aperto. Sia $\varphi$ una funzione definita similmente, che rappresenta un suo *vincolo curvilineo*; infatti sia definita la curva $\Gamma$ come la sua curva di livello $L_0(\gamma)$ (ovvero $\Gamma:=L_0(\gamma)$).
> 
> Se vale che $\underline{x_0}=(x_0,y_0) \in \Gamma$ è un *punto regolare* per $\Gamma$ (ovvero $\nabla \varphi(\underline{x_0})\neq 0$) e $\underline{x_0}$ è un *punto di estremo vincolato* per $f_{|\Gamma}$, allora
> $$
> \boxed{\exists \lambda \in \mathbb{R}: \nabla f(\underline{x_0})=\lambda \nabla \varphi(\underline{x_0})}
> $$
> Ovvero il *"gradiente $\nabla f(\underline{x_0})$ è parallelo al gradiente della restrizione $\nabla \varphi (\underline{x_0})$"*.

^14e3b2

**FIGURA 1.1.** (*L'idea è questa*)
![[Pasted image 20240507221320.png]]

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^14e3b2]]
Partiamo subito dal *teorema del Dini* ([[Teorema del Dini#^c915ce|1]]), che ci dà una curva $\gamma$ tale che il suo sostegno $\gamma(I)$ sia espressione di $\Gamma$ per un certo intorno $W$ di $\underline{x_0}$. Ovvero,
$$
\nabla \varphi(\underline{x_0})\neq \underline{0} \implies \exists W(\underline{x_0}):\Gamma \cap W = \gamma(I)
$$
In particolare sappiamo che questa è una *curva cartesiana*, ovvero una curva del tipo $\gamma(t_0) = \underline{x_0}$ e $\gamma(t)=(t, g(t))$ (scegliamo il caso in cui esista la $g$, l'altro caso si dimostra identicamente). Dato che ho una *curva parametrica*, ho che $\underline{x_0}=\gamma(t_0)$ è un *estremo* per $f_{|\Gamma}$, il che ci dà ([[Ottimizzazione in Curve e Superfici Parametriche#^292837|2]])
$$
(\ast) \ \langle \nabla f(\underline{x_0}), \gamma'(t_0)\rangle = 0
$$
Mi ricordo delle *ipotesi necessarie* per il *teorema del Dini*, ovvero che $\nabla \varphi(\underline{x_0}) \neq \underline{0}$ e $\gamma'(t_0)\neq\underline{0}$. Dopodiché considero un altro risultato dello stesso teorema, che ci dà il risultato ([[Curve Regolari in Forma Implicita#^3b8ab9|3]]) 
$$
(\ast \ast) \ \nabla\varphi(\underline{x_0})\neq \underline{0}, \gamma'(t_0)\neq\underline{0}, \langle \nabla \varphi(\underline{x_0}), \gamma'(t_0)\rangle=0
$$
Combinando le $(\ast)$ e $(\ast \ast)$, scopro che $\nabla \varphi(\underline{x_0})$ è ortogonale a $\gamma'(t_0)$ come lo è pure $\nabla f (\underline{x_0})$. In definita abbiamo il risultato finale
$$
\nabla f(\underline{x_0})=\lambda \nabla \varphi (\underline{x_0})
$$
che prova la tesi. $\blacksquare$

# 2. Punto di vista pratico
#Osservazione 
> [!rmk] punto di vista pratico
> Da un punto di vista pratico, possiamo applicare questo teorema per risolvere problemi di *minimizzazione vincolata* su *curve regolari in forma implicita* $\varphi$ (ovvero che soddisfano sempre il *teorema del Dini*).
> 
> Nel caso sfortunato in cui avessimo *curve non regolari*, basta separarli in *due casi*: una in cui possiamo usare ancora i *moltiplicatori di Lagrange* (ovvero il gradiente non è nullo) e l'altra in cui i punti vengono studiati separatamente (dove il gradiente è nullo).
> 
> In definita, qualora fossimo nel primo caso, possiamo introdurre la funzione $\mathcal{L}(x,y,\lambda)$ (detta *"lagrangiana"*) definita come
> $$
> \mathcal{L}(x,y,\lambda):=f(x,y)-\lambda \varphi(x,y)
> $$
> dopodiché per risolvere il problema di minimizzazione basta risolvere il sistema
> $$
> \nabla \mathcal{L}=\underline{0} :
> \left\{
> \begin{align}
> & \mathcal{L}_x = f_x-\lambda \varphi_x = 0 \\ & \mathcal{L}_y =f_y-\lambda \varphi_y = 0 \\ & \mathcal{L}_\lambda = \varphi=0
> \end{align}
> \right.
> $$
> Le prime due equazioni coincidono col *teorema dei moltiplicatori di Lagrange*, l'ultima è invece la *condizione di vincolo*.
> 
> Questo è equivalente alla scrittura
> $$
> \nabla f(x,y)=\lambda \nabla \varphi(x,y) \land \varphi(x,y)=0
> $$

# 3. Generalizzazione
Si può generalizzare il risultato appena visto. Lo facciamo in particolare per $N=3$ e caso superficiale (con superfici).

#Teorema 
> [!thm] dei moltiplicatori di Lagrange
> Sia $f:A \subseteq \mathbb{R}^3 \longrightarrow \mathbb{R} \in \mathcal{C}^1(A)$ con $A$ un aperto. Sia $\varphi$ una funzione definita similmente, che rappresenta un suo *vincolo curvilineo*; infatti sia definita la curva $\Sigma$ come la sua curva di livello $L_0(\gamma)$ (ovvero $\Sigma:=L_0(\gamma)$).
> 
> Se vale che $\underline{x_0}=(x_0,y_0,z_0) \in \Sigma$ è un *punto regolare* per $\Sigma$ (ovvero $\nabla \varphi(\underline{x_0})\neq 0$) e $\underline{x_0}$ è un *punto di estremo vincolato* per $f_{|\Sigma}$, allora
> $$
> \boxed{\exists \lambda \in \mathbb{R}: \nabla f(\underline{x_0})=\lambda \nabla \varphi(\underline{x_0})}
> $$
> Ovvero il *"gradiente $\nabla f(\underline{x_0})$ è parallelo al gradiente della restrizione $\nabla \varphi (\underline{x_0})$"*.

Le applicazioni pratiche sono identiche, con la lagrangiana definita come 
$$
\mathcal{L}(x,y,z,\lambda):=f(x,y,z)-\lambda(\varphi(x,y,z))
$$
e la risoluzione si applica analogamente, ponendo $\nabla \mathcal{L}=\underline{0}$.