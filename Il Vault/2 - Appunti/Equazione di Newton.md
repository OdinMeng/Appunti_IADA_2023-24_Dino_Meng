---
data: 2024-05-19
corso:
  - "[[Analisi Matematica II]]"
argomento: Equazione di Newton
tipologia: appunti
stato: "1"
capitolo: Equazioni Differenziali
---
- - -
*Equazione di Newton: definizione e metodo risolutivo.*
- - -
# 0. Voci correlate
- [[Definizione di Equazione Differenziale Secondo Ordine]]
# 1. Definizione di Equazione di Newton
#Definizione 
> [!def] equazione di Newton, equazione differenziale autonoma e conservativa
> Sia $f: J \subseteq \mathbb{R} \longrightarrow \mathbb{R} \in \mathcal{C}^1$ con $J$ aperto. Allora *l'equazione differenziale*
> $$
> y'' = f(y)
> $$
> si dice *equazione di Newton*. In particolare si dice che è *autonoma* e *conservativa*, dato che non dipendono dai parametri $x, y'$.

#Osservazione 
> [!rmk] proprietà dell'equazione di Newton
> Per i *teoremi* sulle *equazioni differenziali* abbiamo sicuramente l'*esistenza unica* della soluzione $y$. Infatti, $f_y = f_{y'}=0$, che sono continue. 
> 
> Tuttavia per quanto riguarda la *globalità* non si sa nulla.

# 2. Metodo Risolutivo
Per risolvere quest'*ODE* vogliamo trovare un modo per *ridurlo* dal secondo ordine al primo.

#Teorema 
> [!thm] riduzione dell'equazione di Newton
> Sia definita l'*equazione di Newton* con le *condizioni iniziali* $(x_0, y_0, v_0)$.
> $$
> y'' = f(y)
> $$
> Sia detta $F$ una primitiva di $f$; allora l'equazione differenziale può essere *ridotta* in un'*equazione differenziale del primo ordine*, con:
> i. *Caso* $y'(x_0) = v_0 \neq 0$:
> $$
> y''(x) =f(y(x)) \to \begin{cases} v_0 > 0 \implies y'(x)=+\sqrt{2F(y(x))+v_0^2 - 2F(y_0) } \\ v_0 < 0 \implies y'(x)=-\sqrt{2F(y(x))+v_0^2 - 2F(y_0)}\end{cases} 
> $$
> ii. *Caso* $y'(x_0)=v_0=0, f(y_0) \neq 0$:
> $$
> \begin{cases}f(y_0)>0 \implies y'(x)= \operatorname{sgn}{(x-x_0)\sqrt{2 F(y(x))+v_0^2 - 2 F(y_0)}} \\ f(y_0)<0 \implies y'(x)=\underbracket{-\operatorname{sgn}{(x-x_0)} }_{\operatorname{sgn}{(x_0-x)} }\sqrt{2F(y(x))+v_0^2 -2F(y_0)} \end{cases}
> $$
> iii. *Caso* $y'(x_0)=v_0=f(y_0)=0$:
> $$
> y'(x)=0, y(x)\equiv y_0
> $$
> 
> Nota: i casi *i, ii* valgono meglio per intorni di $x_0$.
^924821

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^924821]]
*Nota: qui è più importante impararsi la dimostrazione che le formule! Anzi, si invita SOLAMENTE di impararsi la procedura risolutiva.*
Partiamo dal caso *iii.*. Banalmente in questo caso $y(x):=y_0$ soddisfa tutte le condizioni per la definizione di soluzione, dato che
$$
y'(x)=0  \land y''(x)=0=f(y(x)=y_0)=0 \land f(y(x_0)=y_0)=0 \ | \ \text{OK!}
$$
i. Adesso torniamo ai casi precedenti. La prima idea è quella di *moltiplicare* l'equazione differenziale per $y'(t)$, ottenendo
$$
y''(t)y'(t)=f(y)y'(t)
$$
Cos'è la prima? Esatto, proprio la derivata $\frac{1}{2}y'(t)^2$! (per crederci, derivare); allora l'ODE diventa
$$
\frac{1}{2}\left(y'(t)^2\right)^{'}=f(y(t))y'(t)
$$
Siano definite $G, F$ le primitive di $(y'(t))^2$ e di $f(y)$. Notiamo che in questo caso avrei $(F(y(t)))^{'}=f(y)y'(t)$. Allora l'equazione differenziale diventa
$$
\frac{1}{2}(G(t))^{'}=(F(y(t)))^{'}
$$
Integrando da ambo i lati nell'intervallo $t_0, t$ otteniamo
$$
\int_{t_0}^t \frac{1}{2}(y(s)^2)^{'} \ \text{d}s = \int_{t_0}^{t} (F(y(s)))^{'} \ \text{d}s
$$
Per il *teorema fondamentale del calcolo integrale* ([[Teorema Fondamentale del Calcolo Integrale#^99ef41]]) ho banalmente
$$
\frac{1}{2}(y'(t))^2 \bigg |_{t_0}^t = F(y(t)) \bigg | _{t_0}^{t} \implies \frac{1}{2}(y'(t))^2 + F(y(t))=\frac{1}{2}v_0^2 - F(y_0)
$$
Isolando termini opportuni ottengo l'*equazione differenziale* del primo ordine
$$
[y'(t)]^2 = 2 F(y(t))-2F(y_0)+v_0^2
$$
Adesso per esplicitare il termine $y'(t)$ devo iniziare a ragionare in termini di segni di $v_0$ e $f(y_0)$. Partiamo dal *caso i.*: ovvero $v_0$ non è nulla.
ii. Assumendo $v_0 > 0$, possiamo sicuramente dire che per la *continuità* di $y'$ la soluzione sicuramente esiste, e tale soluzione dev'essere pure continua. Allora si ha che per *un intorno di* $x_0$ la derivata $y'$ rimane positiva, dato che $y'(x_0)>0$. Dunque posso tranquillamente prendere la *soluzione positiva*
$$
y'(x)=\sqrt{2F(y(t))-2F(y_0)+v_0^2}, x \in \forall U(x_0)
$$
Il ragionamento vale *analogamente* per $v_0 < 0$, solo che prendiamo la *soluzione negativa*.
iii. Adesso sia $v_0=0$: devo creare altri *sottocasi*, separandoli per il *segno di* $f(y_0)$.
Assumendo $f(y_0)>0$, abbiamo il segno di $y''(x_0)$ positivo
$$
y''(x_0)=f(y(x_0)) = f(y_0)>0
$$
Dato che $y'(x)=v_0=0$ e $y''(x_0)$ positiva (ovvero abbiamo una specie di *punto di minimo*), abbiamo che vale
$$
\begin{cases}y'(x)< 0, \forall x<x_0 \\ y'(x)>0, \forall x>x_0 \end{cases}
$$
Quindi a *"seconda di dove sta $x$ rispetto a $x_0$"*, dobbiamo scegliere il segno della soluzione. In conclusione abbiamo
$$
y'(x)=\operatorname{sgn}{(x-x_0)}\sqrt{2F(y(t))-2F(y_0)+v_0^2}
$$
Lo stesso ragionamento vale per $f(y_0)<0$, solo che invertiamo i segni. $\blacksquare$