---
data: 2024-04-20
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Energia Potenziale
tipologia: appunti
stato: "1"
capitolo: Energia e Quantità di Moto
---
- - -
*Definizione di energia potenziale. Osservazione: l'utilità della definizione di energia potenziale per valutare sistemi. Relazione tra energia potenziale e lavoro, energia potenziale e forza. Esempi di energia potenziale.*
- - -
# 0. Voci correlate
- [[Definizione di Massa e di Forza]]
- [[Definizione di Lavoro]]
- [[Forza Conservative e Dissipative]]
- [[Forza Peso e Forza Normale]]
- [[Forza Elastica]]
- [[Forza Gravitazionale]]
# 1. Definizione di Energia Potenziale
#Definizione 
> [!def] energia potenziale di una forza conservativa
> Per una *forza conservativa* $\vec{F}$ possiamo definire la sua *energia potenziale* il suo integrale indefinito, invertito di segno.
> $$
> \boxed{ U(\vec{r}) := -\int \vec{F} \cdot \text{d}\vec{r} + C }
> $$
> dove $C$ è una costante arbitraria.
> 
> Da questo discende che
> $$
> \boxed{\frac{\text{d}U}{\text{d}t}(\vec{r})=-\vec{F} }
> $$
> ovvero *"la forza è la derivata dell'energia potenziale"* (in realtà questa vale per il caso unidimensionale, per il caso 3D bisognerebbe considerare il *gradiente* $\nabla U$).

#Osservazione 
> [!rmk] la definizione è ben posta
> Verifichiamo che questa definizione sia *matematicamente ben posta*. Dato che la forza è conservativa, possiamo scrivere il suo lavoro come
> $$
> W = \int_i^f \vec{F} \cdot \text{d}\vec{r} = -[U(\vec{r}_f)] -[-U(\vec{r}_i)] = 0
> $$
> ([[Forza Conservative e Dissipative#^afc4ee|1]]) dove la funzione $U: \mathbb{R}^3 \longrightarrow \mathbb{R}$ è *"qualcosa finale"* o *"qualcosa iniziale"*.
> 
> Quindi possiamo scrivere
> $$
> W =\int_i^f \vec{F} \cdot \text{d}\vec{r}= -\Delta U(\vec{r})
> $$
> Che è una riformulazione della definizione dell'energia potenziale. Possiamo aggiungere anche il valore $C$, dal momento che stiamo considerando gli *integrali indefiniti*.

# 2. Osservazioni sull'Energia Potenziale
Adesso poniamo una *serie di osservazioni* utili per l'*energia potenziale*.

#Osservazione 
> [!rmk] il segno negativo
> Come mai poniamo il *segno negativo* per considerare l'energia potenziale? Questo perché vogliamo dare il senso di avere un *"potenziale di compiere lavoro"*, ovvero un *accumulo di energia*.
> 
> Infatti, se *non ci fosse* quel segno negativo, l'*energia potenziale* sarebbe completamente *proporzionale* al lavoro.
> 
> Quindi, per invertire la *monotonia dell'energia potenziale*, ci metto il segno negativo. 

#Osservazione 
> [!rmk] l'utilità dell'energia potenziale
> L'energia potenziale è *uno dei concetti più importanti della fisica*. Infatti, così diventa più facile *descrivere sistemi con energia*: basta prendere *derivate* e *integrali*!
> 
> Per studiare *forze in equilibrio* e *non*, basta prendere la derivata dell'energia potenziale e studiarne i punti stazionali. Per vedere invece il *tipo d'equilibrio*, si passa alla *derivata seconda* e si ha:
> - equilibrio stabile solo se $\ddot{U} > 0$.
> - equilibrio instabile solo se $\ddot{U} < 0$
> - altrimenti non si dice niente
>   
> Per avere l'idea, vedere la *figura 2.1.*.

**FIGURA 2.1.** (*Grafico di energia potenziale*)
![[Pasted image 20240420210409.png]]

# 3. Esempi di Energia Potenziale
Facciamo qualche calcolo di *energia potenziale*, di cui d'ora in poi saranno *note*.

#Proposizione 
> [!prp] energia potenziale di alcune forze conservative
> Sia $P$ la *forza peso*, $F_x$ la *forza elastica*, $F_g$ la *forza gravitazionale*. Allora segue che:
> i. L'energia potenziale della forza peso è
> $$
> U_P(y)=mgy+C
> $$
> ii. L'energia potenziale della forza elastica è
> $$
> U(x)=\frac{1}{2}kx^2+C
> $$
> iii. L'energia potenziale della forza gravitazionale è
> $$
> U_G(r)=-\frac{Gm_1m_2}{r}+C
> $$
> 
> Notare che quando *calcoliamo* $\Delta U$ (che è la parte importante!), la costante $C$ si annulla.
^a90975

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^a90975]]
Basta farsi due calcoli. Infatti
$$
\begin{align}
&P = mg \implies -\int P \cdot \text{d}y = mgy+C \\
&F_x = -kx \implies -\int F_x \cdot \text{d}x = \frac{1}{2}kx^2+C
\end{align}
$$
Per l'ultima i calcoli sarebbero leggermente ostici, ma possiamo considerare la *componente parallela dello spostamento infinitesimale, rispetto allo spostamento totale $r_f-r_i$*. Ho quindi
$$
-\int\vec{F} \cdot \text{d}\vec{r} = -\int F \cdot \text{d}r_{\parallel} = \ldots = -Gm_1m_2\left(\frac{1}{r_f}-\frac{1}{r_i}\right)
$$
che è la tesi. $\blacksquare$

**FIGURA 3.1.** (*Il cono gravitazionale*)
Notiamo che la funzione $U_G(\vec{r})$ con $\vec{r}\in \mathbb{R}^2$ presenta un grafico del tipo nella figura; inoltre si dimostra che le curve di livello sono ellissi.
![[1 l70MH9nTkyC9fU_V8YzuSQ.webp]]
