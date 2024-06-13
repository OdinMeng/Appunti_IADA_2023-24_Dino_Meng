---
data: 2024-05-20
corso:
  - "[[Analisi Matematica II]]"
argomento: Equazioni Differenziali Lineari del Secondo Ordine
tipologia: appunti
stato: "1"
capitolo: Equazioni Differenziali
---
- - -
*Equazioni differenziali lineari del secondo ordine: definizione, l'esistenza unica della soluzione. Struttura: teorema di struttura delle equazioni differenziali lineari del secondo ordine. Descrizione del kernel. Teorema: costruzione di base per il kernel, di una soluzione particolare della completa (metodo della somiglianza o il metodo del nucleo risolvente).*
- - -
# 0. Voci correlate
- [[Definizione di Equazione Differenziale Secondo Ordine]]
- [[Equazioni Differenziali Lineari del primo ordine]]
# 1. Definizione di ODE lineare del secondo ordine
#Definizione 
> [!def] ODE lineare del secondo ordine a coefficienti costanti
> Siano $a, b \in \mathbb{R}$, $c: I \subseteq \mathbb{R} \longrightarrow \mathbb{R} \in \mathcal{C}^0(I)$, con $I$ aperta. L'equazione differenziale della forma
> $$
> f(x, y, y') : y''(x)+ay'(x)+by(x)=c(x)
> $$
> si dice *"equazione differenziale ordinaria lineare del secondo ordine scalare con coefficienti costanti completa"*.
> 
> Se si ha $c(x)\equiv 0$, allora in tal caso si dice che è *"omogenea"*

#Esempio 
> [!exm] le vibrazioni meccaniche
> Un esempio fisico è un *oggetto* sottoposto ad una forza variabile $F(t)$, forza di attrito viscoso $F_a = -\xi v$. Allora si ha l'equazione differenziale
> $$
> m x''(t) = -\xi x'(t)-k x(t) + F(t)
> $$

Vediamo una proprietà immediata delle *ODE lineari del secondo ordine complete, a coefficienti costanti*.

#Teorema 
> [!thm] proprietà delle ODE lineari del secondo ordine a coefficienti costanti
> Si ha che il *problema di Cauchy* $(PC)$, composto da un'*ODE lineare del secondo ordine* e dalla condizione iniziale $(x_0 \in I, y_0\in \mathbb{R} , v_0 \in \mathbb{R})$
> $$
> (PC):\left\{\begin{align}
> & y''(x)+ay'(x)+by(x)=c(x) \\
> & y(x_0)=y_0 \land y'(x_0)=v_0
> \end{align}\right.
> $$
> Allora $\exists! y: I \longrightarrow \mathbb{R}$ che risolve $(PC)$.
^197232

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^197232]]
Si tratta di usare i teoremi già noti ([[Teorema di Cauchy-Lipschitz#^a5ca9d]], [[Esistenza locale e globale delle soluzioni ai Problemi di Cauchy#^637b48]]).
i. $\exists!$: Si ha il campo 
$$
f(x,y,v)=-av+by+c(x)
$$
Questa dev'essere continua (dato che lo è $c$). Inoltre si ha le derivate $f_y = -b$ e $f_v = -a$, che per forza sono continue. Dunque si ha l'*esistenza unica* della soluzione
ii. $y(I)$: $f$ è chiaramente sublineare (poiché c'è un motivo che si chiamano *equazioni differenziali lineari*....), dato che
$$
\forall K \Subset I, |f(x, y, v)| \leq\alpha |x| + \beta |y| + \gamma \impliedby \left \{
\begin{align}
& \alpha = |a| \\ &\beta = |b| \\ & \gamma = \max_{x \in K}|c(x)| 
\end{align}
\right.

$$
$\blacksquare$

# 2. Struttura delle ODE lineari del secondo ordine
Vediamo la struttura di queste equazioni differenziali, poi per determinare tali *soluzioni*. Simile come fatto col caso *ordine* $N=1$ ([[Equazioni Differenziali Lineari del primo ordine]])

#Definizione 
> [!def] applicazione lineare
> D'ora in poi chiamiamo $L: \mathcal{C}^2 \longrightarrow \mathcal{C^0}$ come la funzione funzionale $L(y):=y''+ay'+by$.

#Definizione 
> [!def] spazio di soluzioni
> Siano definite gli *spazi di soluzioni* come
> $$
> S_{c(\cdot)} := L^{-1}(\{c(\cdot) \})=\{y \in \mathcal{C}^2 : y''+ay'+by=c\}
> $$
> e
> $$
> S_0 := \ker L = L^{-1}(\{0\})
> $$

#Teorema 
> [!thm] di struttura
> Si ha che lo spazio $S_c$ rispetta la struttura
> $$
> S_c = \tilde s + \ker L
> $$
> dove $\tilde{s} \in S$ è un *elemento particolare*, $\ker L$ la struttura generale del nucleo.
> 
> Ovvero questo teorema si traduce come
> $$
> s \in S_c \iff s(t)=\tilde y(t)+z(t)
> $$
> con $\tilde{y}$ una soluzione particolare della completa, e $z$ una soluzione generale per il nucleo.

#Teorema 
> [!thm] descrizione del nucleo
> Si ha che $\ker L$ è uno *spazio vettoriale* e che la sua dimensione è $2$
> $$
> \dim \ker L = 2
> $$
^864fab

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^864fab]]
Prima del tutto prendiamo la base canonica per $\mathbb{R}^2$, che è
$$
\mathcal{E}=\{(1,0), (0,1)\}
$$
Siano adesso $y_1, y_2$ delle *soluzioni* al nucleo (ovvero $y_1, y_2 \in \ker L$). Adesso siano definiti dei *problemi di Cauchy* con le *condizioni iniziali* degli *elementi* di $\mathcal{E}$. Ovvero $(y_1(t_0). y_1'(t_0)) = (1,0)$ e $(y_2(t_0), y'_2(t_0))=(0,1)$. Ovvero
$$
(PC_1):\left\{\begin{align}
& ay''(x)+by'(x)+c(x)=0 \\
& y(x_0)=1 \land y'(x_0)=0
\end{align}\right.
$$
e ($PC_2)$ si definisce nella maniera identica, solo che abbiamo $y(x_0)= 0 \land y'(x_0)=1$.
Supponiamo che $y_1, y_2$ creino una *base* per $\ker L$. Per dimostrarlo, dobbiamo dimostrare che essi sono *linearmente indipendenti* e siano un *sistema di generatori* per $\ker L$.
i. *Indipendenza lineare*
Considero un'elemento della combinazione lineare $\operatorname{span}{(y_1, y_2)}$, ovvero
$$
C(x)=c_1 y_1(x)+c_2 y_2(x)
$$
Si tratta di dimostrare che $C(x)=0, \forall x \in \mathbb R \iff c_1=c_2=0$. Per farlo, pongo $C(0)=0$ ottenendo
$$
c_1 \underbracket{y_1(x_0)}_{1}+\underbracket{c_2 y_2(x_0)}_{0}=0 \implies c_1 \cdot 1 +0 = 0 \implies c_1=0
$$
Adesso per trovare $c_2$ derivo $C$ e lo pongo a $0$:
$$
C'(x_0)=c_1 \underbracket{y_1'(x_0)}_{0}+c_2 \underbracket{y'_2(x_0)}_{1}=0 \implies  c_2 = 0
$$
Dimostrando così $c_1=c_2=0 \impliedby C(x)=0$. L'altro verso dell'implicazione viene banalmente verificata mediante calcoli.
ii. *Sistema di generatori*
Si tratta di dimostrare che ogni *elemento del nucleo* fa parte dello span $\operatorname{span}{(y_1,y_2)}$ Sia fissata $s(x) \in \ker L$, devo dimostrare che $\exists \alpha, \beta \in \mathbb R: s(x)=\alpha y_1(x)+\beta y_2(x)$. Partiamo da ciò che conosciamo: ovvero $s$ risolve il problema
$$
(PC):\left\{\begin{align}
& s''(x)+a s'(x)+ b s(x)=0 \\
& s(x_0)=s_0, s'(x_0)=v_0
\end{align}\right.
$$
Scegliendo $\alpha = s_0$ e $\beta = v_0$ si ha banalmente la tesi. $\blacksquare$

# 3. Costruzione delle Soluzioni
Ora iniziamo a trovare delle *soluzioni* per un'equazione differenziale lineare del secondo ordine, sfruttando la *struttura* di $S_c$. Partiamo dall'*omogenea*.

## 3.1. Soluzioni dell'Omogenea
#Teorema 
> [!thm] costruzione della base delle omogenee
> Sia definita l'equazione differenziale omogenea
> $$
> \boxed{y''(x)+a y'(x)+by(x)=0}
> $$
> Sia definita l'equazione caratteristica associata
> $$
> \lambda ^2 + a \lambda + b=0
> $$
> Allora abbiamo che le soluzioni per l'equazione differenziale sono definite mediante le seguente casistiche.
> i. $a^2 > 4b$ (*il discriminante è positivo*)
> Si ha che esistono delle *soluzioni reali* $\lambda_1, \lambda_2 \in \mathbb{R}$ con $\lambda_1 \neq \lambda_2$, e la base alla soluzione dell'omogenea è formata da
> $$
> y(x) \in S_0 =\operatorname{span}{\left(e^{\lambda_1 x}, e^{\lambda_2 x}\right)}
> $$
> ii. $a^2 < 4b$ (*il discriminante è negativo*)
> Si ha che esistono delle *soluzioni complesse* $\lambda_1, \lambda_2 \in \mathbb{C}$ con $\lambda_1 \sim a_1+ib_1$ e $\lambda_2 \sim a_2+ib_2$ con $a_1, a_2 \in \mathbb{R}$ e $b_1, b_2 \in \mathbb{R}\diagdown \{0\}$. Allora la base dell'omogenea è formata da
> $$
> y(x) \in S_0 = \operatorname{span}{\left(e^{a_1 x}\cos (b_1 x), e^{a_2 x}\cos (b_2 x)\right)}
> $$
> iii. $a^2 = 4b$ (*il discriminante è nullo*)
> Si ha che ho l'unica soluzione all'associata $\lambda_0 = \frac{a}{2} \in \mathbb R$ e che la base di $S_0$ è formata da
> $$
> y(x) \in S_0 = \operatorname{span}{\left(e^{\lambda_0 x}, xe^{\lambda_0 x}\right)}
> $$
^c4583d

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^c4583d]]
Partiamo considerando delle funzioni del tipo $z(x)=e^{\lambda x}$, con $\lambda \in \mathbb C$. Sostituendolo nell'*equazione differenziale* otteniamo l'equazione
$$
e^{\lambda x}(\lambda^2 +a\lambda +b)=0
$$
Dato che $\exp$ è una funzione *sempre positiva*, l'unica che può risolvere l'equazione è quella algebrica.
$$
\lambda^2+ a\lambda +b
$$
Poi si dimostra che in *ciascuno dei casi* le funzioni generati risolvono l'*equazione differenziale*; quindi si tratta di dimostrare che sono *linearmente indipendenti* (non serve verificare che sono un *sistema di generatori*, dal momento che abbiamo $\dim \ker L = 2$).
Per esempio dimostriamo il caso *i.*: sia definita $y(x)=\alpha e^{\lambda_1 x}+\beta e^{\lambda_2 x}$. Adesso vogliamo dimostrare che questa si annulla se e solo se $\alpha=\beta=0$ (definizione di indipendenza lineare). Vogliamo sfruttare il fatto che $\lambda_1 \neq \lambda_2$, da cui si ha $\lambda_1 - \lambda_2 \neq 0$. Per farlo, raccogliamo i termini ottenendo
$$
\alpha e^{\lambda_1 x}+\beta e^{\lambda_2 x}=\underbracket{e^{\lambda_1 x} }_{\neq 0}\left(\alpha + \beta e^{(\lambda_2-\lambda _1) x}\right) = 0
$$
da cui si ha
$$
\alpha + \beta e^{(\lambda_2 -\lambda_1)x}=0
$$
Adesso deriviamo quest'espressione, ottenendo
$$
\underbracket{(\lambda_2-\lambda_1)}_{\neq 0}\beta \underbracket{e^{(\lambda_2 -\lambda_1)x} }_{\neq 0}=0
$$
L'unico termine che può cancellare è $\beta$, ottenendo $\beta=0$.
In una maniera analoga si dimostra che $\alpha=0$; infatti sostituendo $\beta=0$ si ottiene
$$
\alpha \underbracket{e^{\lambda_1 x} }_{\neq 0}=0
$$
da cui ho la tesi. Poi banalmente si dimostra che risolve l'ode calcolando $L(y(x))$. $\blacksquare$

 ## 3.2. Soluzione della Completa
Adesso vediamo dei *metodi* per determinare *una* soluzione della completa, potendo dare così una soluzione ad un'*equazione differenziale lineare del secondo ordine*.

#Teorema 
> [!thm] metodo di somiglianza
> Se l'*equazione differenziale*
> $$
> y''+ay'+b=c(x) \ \ (\ast)
> $$
> presenta $c(x)$ con una forma del tipo
> $$
> c(x) \sim P_n(x)e^{\alpha x}\sin (\beta x)
> $$
> oppure
> $$
> c(x) \sim P_n(x)e^{\alpha x}\cos (\beta x)
> $$
> (dove $P_n$ è un polinomio del grado $n$-esimo) allora, definendo $\xi = \alpha + i \beta$, si ha che una *soluzione della completa* è determinata dalle seguenti casistiche:
> i. $\xi$ non l'equazione associata: allora si cercano soluzioni del tipo
> $$
> \xi^2 + a \xi + b\neq 0 \implies y(x)=e^{\alpha x}(Q_1(x)\cos (\beta x)+ Q_2(x) \sin (\beta x))
> $$
> con $Q_1, Q_2$ dei polinomi da determinarsi sostituendo $y$ nella $(\ast)$.
> ii. $\xi$ risolve l'equazione associata ed è di molteplicità $1$ (ovvero è una delle due soluzioni)
> $$
> \xi^2 + a\xi + b = 0 \implies y(x)= x e^{\alpha x}(Q_1(x)\cos (\beta x)+Q_2(x)\sin (\beta x))
> $$
> iii. $\xi$ è risolve l'equazione associata ed è di molteplicità $2$ (ovvero è l'unica soluzione)
> $$
> \xi^2 + a\xi + b = 0 \implies y(x)=x^2 Q(x)e^{\alpha x}
> $$
^39bc83

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^39bc83]]
Soluzione algoritmica, si tratta di sostituire $y$ nella $(\ast)$ per determinare la soluzione completa. $\blacksquare$

#Teorema 
> [!thm] metodo del nucleo risolvente
> Siano $\{z_1, z_2\}$ elementi che costituiscono una base per $\ker L = S_0$. Allora una *soluzione particolare della completa* è data da
> $$
> y(x)=\int_{x_0}^x K(x,t)c(t) \ \text{d}t
> $$
> con $x \in I, x_0 \in I, x, t \in \mathbb{R}$ dei valori. In particolare o $K(x,t)$ la *"funzione di Green"*, definita come
> $$
> K(x,t)=\frac{\det \begin{pmatrix}z_1(0) & z_2(0) \\ z_1 (x-t) & z_2(x-t) \end{pmatrix} }{\det \begin{pmatrix} z_1 (0) & z_2(0) \\ z_1'(0) & z_2'(0) \end{pmatrix} }
> $$
^96c390

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^96c390]]
Partiamo da una considerazione preliminare: supponiamo di avere un integral-funzione del tipo
$$
F(x)=\int_{x_0}^x G(x, t)\ \text{d}t
$$
Come faccio a derivarlo rispetto a $x$? Per rendere il calcolo semplice e fattibile, introduco la funzione ausiliaria $\varphi(y,z)=\int_{x_0}^y G(z,t) \text{ d}t$. A questo punto introduco la funzione ausiliaria *"identità"* definita come $\psi(x)=(x,x)$. A questo punto prendo la composizione $F = \phi \circ \psi$. Infatti ho una situazione del tipo 
$$
x \stackrel{\psi}\longrightarrow (x,x) \stackrel{\phi}\longrightarrow \int_{x_0}^x G(x, t) \ \text{d}t
$$
Adesso per derivarlo *basta usare le regole già note* per la composizione di funzioni ([[Differenziale di Funzioni Composte in più Variabili#^4b8fa5]]); ovvero faccio il prodotto tra $\nabla \phi$ e la jacobiana $J \psi$, dandoci
$$
F'(x)=\nabla \varphi \cdot J \psi = \begin{pmatrix} G(x,x) \\ \int_{x_0}^x \frac{\partial G}{\partial x}(x,t)\ \text{d}t \end{pmatrix} \cdot \begin{pmatrix}1 & 1 \end{pmatrix} = G(x,x) + \int_{x_0}^x \frac{\partial G}{\partial x}(x,t) \ \text{d}t
$$
Adesso si tratta di fare solo dei conti. Siano $z_1, z_2$ gli elementi della base per $S_0$ tali che
$$
\begin{pmatrix}z_1 (0) & z_1'(0) \\ z_2(0) & z_2'(0) \end{pmatrix} = \begin{pmatrix}1 & 0 \\ 0 & 1 \end{pmatrix} = \mathbb{1}_2
$$
(in realtà non sarebbe proprio necessaria, ma facciamo così per semplificarci la vita): così ho
$$
K(x,t)=\frac{z_1(0)z_2(x-t)-z_2(0)z_1(x-t)}{z_1(0)z_2'(0)-z_2(0)z_1'(0)}=z_2(x-t)
$$
Adesso prendo $y(x)$ definita come nella tesi, ovvero
$$
\boxed{y(x)=\int_{x_0}^x z_2 (x-t)c(t) \ \text{d}t}
$$
Adesso ci applico la *regola di derivazione appena enunciata*, dandoci
$$
y'(x)=\underbracket{z_2(\underbracket{x-x}_{0} )}_{0}c(x)+\int_{x_0}^x z_2'(x-t) c(t) \ \text{d}t
$$
Derivandolo di nuovo, ottengo
$$
y''(x)=\underbracket{z_2'(x-x)}_{1}c(x)+\int_{x_0}^x z_2''(x-t)c(t) \ \text{d}t
$$
Adesso si tratta di sostituire tutto nell'*equazione differenziale* da risolvere, dandoci
$$
\begin{align}
&y''(x)+ay'(x)+by(x)= \\ &=c(x)+\int_{x_0}^x z_2''(x-t)c(t) \ \text{d}t + a \int_{x_0}^x z_2'(x-t)c(t) \text{ d}t+b \int_{x_0}^x z_2(x-t)c(t) \text{d}t \\  
&=c(x)+\int_{x_0}^x\underbracket{\left[z''(x-t) + az_2'(x-t)+bz_2(x-t)\right]}_{\in S_0} c(t) \text{ c}t \\ &= c(x)+0=c(x)
\end{align}
$$
che soddisfa l'identità $y''(x)+ay'(x)+by(x)=c(x)$, provando il teorema. $\blacksquare$
