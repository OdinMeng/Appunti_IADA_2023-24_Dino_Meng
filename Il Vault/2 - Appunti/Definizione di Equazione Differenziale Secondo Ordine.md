---
data: 2024-05-19
corso:
  - "[[Analisi Matematica II]]"
argomento: Definizione di Equazione Differenziale Lineare del Secondo Ordine
tipologia: appunti
stato: "1"
capitolo: Equazioni Differenziali
---
- - -
*Definizione di ODE scalare del secondo ordine. Teoremi: Peano-Cauchy-Lipschitz, dell'esistenza globale.*
- - -
# 0. Voci correlate
- [[Definizioni Relative alle Equazioni Differenziali]]
- [[Teorema di esistenza di Peano]]
- [[Teorema di Cauchy-Lipschitz]]
- [[Esistenza locale e globale delle soluzioni ai Problemi di Cauchy]]
# 1. Definizione di ODE del Secondo ordine, scalare
#Definizione 
> [!def] ODE scalare del secondo ordine
> Sia $f: E \subseteq \mathbb{R} \times \mathbb{R}^2 \longrightarrow \mathbb{R}$. Allora l'equazione
> $$
> y''(x)=f(x,y(x), y'(x))
> $$
> si dice *ODE del secondo ordine scalare*. Una funzione $y: I \subseteq \mathbb{R} \longrightarrow \mathbb{R}$ si dice *soluzione* dell'*ODE* se è di classe $\mathcal{C}^2$, se è soddisfatta l'equazione e poi vale che $(x, y(x), y'(x)) \in E, \forall x \in I$.
> 
> Fissata una *condizione iniziale* $(x_0, y_0, y'_0 := v_0) \in E$, mettendolo in *sistema* con l'*ODE* si ha il *problema di Cauchy*
> $$
> (PC):\left\{\begin{align}
> & y''(x)=f(x,y(x), y'(x)) \\
> & y(x_0)=y_0 \land y'(x_0)=y'_0:=v_0
> \end{align}\right.
> $$

**Motivazione:** Studiare la *dinamica dei punti materiali*.

#Esempio 
> [!exm] oscillatore armonico
> Un punto che risente la *forza elastica* $F=ma=m\ddot x = -k x$ a posizione iniziale $x(t=0)=x_0$ e a velocità iniziale $x'(0)=v(0)=v_0$ ha il moto descritto dal seguente problema di Cauchy
> $$
> (PC):\left\{\begin{align}
> & x''(t)=-\frac{k}{m}x(t) \\
> & x(0)=x_0 \land x'(0)=v_0
> \end{align}\right.
> $$

# 2. Teoremi Misti
Posso usare dei *teoremi già noti* nel caso dell'ordine $N=1$ ([[Teorema di esistenza di Peano#^9ac878|1]], [[Teorema di Cauchy-Lipschitz#^a5ca9d|2]], [[Esistenza locale e globale delle soluzioni ai Problemi di Cauchy#^637b48|3]]).

#Teorema 
> [!thm] Peano-Cauchy-Lipschitz e dell'esistenza globale
> Si definisca il *problema di Cauchy* associato all'ODE del secondo ordine come
> $$
> (PC):\left\{\begin{align}
> & y''(x)=f(x,y(x), y'(x)) \\
> & y(x_0)=y_0 \land y'(x_0)=v_0
> \end{align}\right.
> $$
> Allora valgono le seguenti:
> i. *Esistenza*
> $$
> f \in \mathcal{C}^2 \implies \exists h>0, y:(x_0-h, x_0+h)\longrightarrow \mathbb{R} \in \mathcal{C}^2 \ \text{risolve }(PC)
> $$
> ii. *Unicità*
> $$
> f_y, f_{y'} \in \mathcal{C}^0 \implies \exists !y
> $$
> iii. *Esistenza globale*
> $$
> \begin{gather}
> \forall H \Subset I, \exists \alpha, \beta, \gamma \in \mathbb{R}: |f(x,y,y') | \leq \alpha |y| + \beta |y'| + \gamma \\
> \Downarrow \\
> \exists y: I \longrightarrow \mathbb{R} \ \text{risolve }(PC)
> \end{gather}
> $$

