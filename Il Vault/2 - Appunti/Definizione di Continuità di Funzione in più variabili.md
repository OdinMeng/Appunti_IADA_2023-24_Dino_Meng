---
data: 2024-03-28
corso:
  - "[[Analisi Matematica II]]"
argomento: Continuità di Funzione in più variabili
tipologia: appunti
stato: "1"
capitolo: Struttura di R^N
---
- - -
*Definizione di continuità per funzioni in più variabili.*
- - -
# 0. Voci correlate
- [[Definizione di Continuità]]
- [[Limite di Funzione in più variabili]]
# 1. Definizione di continuità
#Definizione 
> [!def] continuità in più variabili
> Sia $f:E\subseteq \mathbb{R}^N \longrightarrow \mathbb{R}^M$ con $\underline{x_0} \in E$. 
> Si dice che *"$f$ è continua in $\underline{x_0}$"* se *esiste il limite*
> $$
> \lim_{\underline{x} \to \underline{x_0} }f(\underline{x})=f(\underline{x_0})
> $$
> ovvero se vale
> $$
> \begin{gather} \forall \varepsilon>0, \exists \delta>0: \forall x \in E, \\ 0 \leq d(\underline{x}, \underline{x_0}) < \delta \implies d(f(\underline{x}),f(\underline{x_0}))<\varepsilon
> \end{gather}
> $$

# 2. Condizione equivalente
#Teorema 
> [!thm] condizione equivalente per la continuità di funzioni
> Sia $f:E\subseteq \mathbb{R}^N \longrightarrow \mathbb{R}^M$ con $\underline{x_0} \in E$. Sono equivalenti:
> $$f \ \text{continua in }\underline{x_0} \iff \forall i \in \{1, \ldots, M\} \lim_{\underline{x} \to \underline{x_0} }f_i(\underline{x})=f_i(\underline{x_0}) $$

# 3. Osservazione
#Osservazione 
> [!rmk] la definizione di continuità per una funzione multivariabile varia a seconda del dominio
> Osserviamo che la *definizione di continuità* per un punto $\underline{x_0}$ per una funzione $f:E \subseteq \mathbb{R}^N\longrightarrow \mathbb{R}^M$ varia a seconda del dominio $E$ scelto.
> 
> Usiamo il seguente esempio.
> Sia
> $$
> f(x,y)=\left\{\begin{align}&\frac{y^2}{x}, x \neq 0 \\ &0, x=0\end{align}\right.
> $$
> Vogliamo stabilire la continuità di $f$ in $(0,0)$ su $E=\mathbb{R}^2$. Chiaramente, questa *non* è continua, dato che
> $$
> x=y^2 \implies \lim_{(x,y)\to(0,0)}f(x,y)=\lim_{x \to 0}\frac{x}{x}=1 \neq 0
> $$
> Adesso prendiamo il dominio $E$ come
> $$
> E = \left\{(x,y) \in \mathbb{R}^2 : |y| \leq x < 1\right\}
> $$
> Il ragionamento fatto per $E=\mathbb{R}^2$ non vale più, dato che la *"traiettoria esce dal dominio"*. Infatti, qui la funzione è continua dato che
> $$
> \left|\frac{y^2}{x}\right| \leq \frac{\left| y^2\right|}{x} \leq \frac{x^2}{x}
> $$
> e quindi ho
> $$
> \lim_{x \to 0}\frac{x^2}{x}=0
> $$

