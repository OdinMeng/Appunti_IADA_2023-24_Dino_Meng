---
data: 2023-11-28
corso: "[[Analisi Matematica I]]"
argomento: Funzione Convessa
tipologia: appunti
stato: "1"
---
*Osservazioni geometrici preliminari; definizione di funzione convessa. Significato geometrico della convessità*
- - -
# 0. Osservazione preliminare
#Osservazione
> [!rmk] punti del segmento tra due punti
> Supponiamo di avere il *piano cartesiano* $\pi$ ([[Coppie Ordinate e Prodotto Cartesiano#^61dab9]]) e voglio rappresentare il segmento tra i punti
> $$(x_1, y_1), (x_2, y_2)$$
> Ovvero ho una situazione grafica raffigurata in *figura 0.1.*.
> Allora considero il *vettore geometrico relativo al segmento* 
> $$\vec{v} = (x_2-x_1, y_2-y_1)$$
> Ora voglio trovare un *vettore* che ha la stessa *direzione* e lo stesso *verso* ma la intensità è più *piccola* di $\vec{v}$. Come faccio?
> Ponendo un numero qualsiasi che chiamo $\lambda$ e *"restringendolo"* in $0 \leq \lambda \leq 1$ pongo il seguente vettore
> $$\lambda \cdot \vec{v} = (\lambda(x_2-x_1), \lambda(y_2-y_1)) $$
> Ora per considerare *tutti i punti del segmento del vettore* $\vec{v}$ faccio la somma di uno dei punti considerati all'inizio con il vettore scalato per $\lambda$;
> $$(x_1, y_1)+\lambda\cdot\vec{v} = \ldots = \left((1-\lambda)x_1+\lambda x_2, (1-\lambda)y_1+\lambda y_2\right), \lambda \in [0, 1]$$
> Questo vale lo stesso se scambio $x_1$ con $x_2$ e altrettanto $y_1$ con $y_2$ (ovviamente per rimanere consistenti li si scambia sin dall'inizio!).
^a47002

**FIGURA 0.a.** (*Idea grafica*)
![[Pasted image 20231128210526.png]]

# 1. Definizione di Funzione Convessa
#Definizione 
> [!def] funzione convessa o concava
> Sia $f: I \longrightarrow \mathbb{R}$ ($I$ *intervallo*) ([[Intervalli]])
> La funzione $f$ si dice *convessa* se prendendo qualsiasi due punti $x_1, x_2$ nell'intervallo $I$, uno più grande dell'altro, allora succede il seguente:
> $$\begin{gather}\forall x_1, x_2 \in I, x_1 < x_2, \forall \lambda \in [0,1],\\ \boxed{f(\lambda x_1 + (1-\lambda)x_2) \leq \lambda f(x_1) + (1-\lambda)f(x_2)}\end{gather}$$
> Se invece $-f$ è *convessa*, allora $f$ si dice *concava*.

^f4cbdd

#Osservazione 
> [!rmk] significato geometrico
> Ora vediamo cosa vuol dire la definizione data sopra.
> Seguendo l'*osservazione preliminare* (*oss. 0.a*) svolta prima ([[#^a47002]]), notiamo che il membro destro della disuguaglianza è sostanzialmente un *punto qualsiasi della retta passante per* $(x_1, f(x_1)), (x_2, f(x_2))$, se si considera $y = f(x)$.
> Invece a sinistra notiamo che $\lambda x_1 + (1-\lambda)x_2$ non è altro che una *combinazione lineare* di $x_1, x_2$ ([[Combinazione Lineare#^8113de]]). 
> Inoltre dato che $\lambda \in [0, 1]$, si deduce che questa combinazione lineare vive in
> $$x_1 \leq \lambda x_1 + (1-\lambda)x_2 \leq x_2$$
> Pertanto la disuguaglianza di *definizione* vuol semplicemente dire che $f$ è *convessa* se la *retta passante tra* $(x_1, f(x_1)), (x_2, f(x_2))$ sta *"sempre in alto (o ugualmente alto)"* di qualsiasi punto della funzione tra $x_0 \in [x_1, x_2]$

**FIGURA 1.1.** (*Idea geometrica*)
![[Pasted image 20231128212937.png]]

#Osservazione 
> [!rmk] concavità e convessità simultanea
> Notiamo che una funzione $f$ è sia *concava* che *convessa* se vale che
> $$\begin{gather}\forall x_1, x_2 \in I, x_1 < x_2, \forall \lambda \in [0,1],\\ \begin{cases} f(\lambda x_1 + (1-\lambda)x_2) \leq \lambda f(x_1) + (1-\lambda)f(x_2) \\ f(\lambda x_1 + (1-\lambda)x_2) \geq \lambda f(x_1) + (1-\lambda)f(x_2)\end{cases}\\ \Downarrow \\ f(\lambda x_1 + (1- \lambda)x_2) = \lambda f(x_1) + (1-\lambda)f(x_2)\end{gather}$$
Notiamo che il *"risultato"* di questa implicazione è il fatto che $f$ sia un'*applicazione lineare* in quanto si vede valgono le proprietà di definizione AL (ovvero l'additività e l'omogeneità) ([[Definizione di Applicazione Lineare#^9b39f9]]). Pertanto $f$ può essere solo una *retta*.
*Nota: questa osservazione è sta svolta con i miei occhi, quindi non fa né parte degli appunti né delle dispense.*
# 2. Collegamento con la derivata seconda
Vedere pagina [[Caratterizzazione delle Funzioni Convesse]]