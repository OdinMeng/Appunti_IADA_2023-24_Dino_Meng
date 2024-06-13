---
data: 2024-05-05
corso:
  - "[[Analisi Matematica II]]"
argomento: Curva in Forma Implicita
tipologia: appunti
stato: "1"
capitolo: Curve e Superfici
---
- - -
*Definizione di curva in forma implicita. Punti singolari e regolari per curve implicite. Esempi.*
- - -
# 0. Voci correlate
- [[Campo Scalare e Insieme di Livello]]
- [[Curve e Superfici Parametriche]]
# 1. Curva in Forma Implicita
Abbiamo appena visto le *curve in forma parametrica*, che spesso ci danno *molte informazioni*. Tuttavia, questo è solo uno dei *casi fortunati*; molto spesso ci capita di avere *curve* definite mediante equazioni, che sono *difficili* da trattare.

#Definizione 
> [!def] curva in forma implicita
> Sia $\varphi: A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ una *funzione in più variabili* (campo scalare), con $A$ aperto.
> 
> Si definisce una *curva in forma implicita* come il *l'insieme di livello* ([[Campo Scalare e Insieme di Livello#^0aa8df|1]]) $L_0(\varphi)$.
> Si definisce $\varphi(x_1,\ldots,x_N)=0$ come la sua *"equazione di rappresentazione"*.

Ci interessa trovare un *legame* tra le *curve in forma implicita* e le *curve cartesiane* (ovvero in *forma parametrica*): il teorema del Dini ci darà una risposta a questo legame.

# 2. Punti regolari e singolari per Curve Implicite
Prima di enunciare il teorema del Dini, diamo un po' di nomenclatura per enunciare tale teorema.

#Definizione 
> [!def] punto regolare e singolare per curva implicita
> Sia $L_0(\varphi)$ una *curva implicita* con $\varphi: A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R} \in \mathcal{C}^1(A)$ e $\underline{x_0} \in L_0(\varphi)$ punto della *curva implicita*.
> 
> Si dice che:
> - $\underline{x_0}$ è un *punto regolare* di $L_0(\varphi)$ se vale che $\nabla f(\underline{x_0}) \neq \underline{0}$
> - $\underline{x_0}$ è un *punto singolare* di $L_0(\varphi)$ se vale che $\nabla f(\underline{x_0}) = \underline{0}$
> $$
> $$

# 3. Esempi di Curve Implicite
#Esempio 
> [!exm] curva
> Si ha che
> $$
> \varphi(x,y)=x^2+y^2-1
> $$
> rappresenta la *curva implicita* definita come
> $$
> L_0(\varphi)=\{(x,y) \in \mathbb{R}^2:x^2+y^2=1\}
> $$
> Intuitivamente ho la curva
> $$
> \gamma(t)=(\cos t, \sin t)
> $$
> 
> Notiamo che $L_0(\varphi)$ non presenta *punti singolari*. Infatti $\nabla f$ si annulla solamente per $(x,y)=(0,0)$ che non fa parte di $L_0(\varphi)$.

#Esempio 
> [!exm] due rette
> Si ha che
> $$
> \varphi(x,y)=x^2-y^2
> $$
> Rappresenta *due rette* passante per l'origine, in verso opposto. Infatti abbiamo che
> $l_1: y=x$ e $l_2: y=-x$ risolvono $L_0(\varphi)$.
> 
> Qui abbiamo un punto singolare in $(0,0)$. Infatti $(0,0) \in L_0(\varphi)$ e $\nabla \varphi(0,0)=(0,0)$.
