---
data: 2024-03-09
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Posizione e Spostamento di un Corpo Puntiforme
tipologia: appunti
stato: "1"
capitolo: Cinematica
---
- - -
*Prime grandezze per un corpo puntiforme: posizione e spostamento.*
- - -
# 1. Definizione di Posizione e Spostamento
#Definizione 
> [!def] posizione
> Si associa ad un *corpo puntiforme* la *posizione*, un *"vettore"* che indica, appunto, la sua posizione nello spazio. Viene indicata come $\vec{r}$. 
> Notare che questo in realtà si *"comporta quasi come un punto"*, dato che il suo modulo $|\vec{r}|$ ha significato diverso a seconda del *sistema di riferimento* (o dall'*origine*).

#Definizione 
> [!def] spostamento
> Supponiamo di avere *due posizioni* $\vec{r_1}, \vec{r_2}$ per un corpo. Allora lo *spostamento* di un corpo è la differenza tra queste ultime posizioni, ovvero
> $$
> \Delta \vec{r}:=\vec{r}_2-\vec{r}_1 = \Delta x \cdot \hat i + \Delta y \cdot \hat{j} + \Delta z \cdot \hat{k}
> $$
> Il suo modulo è
> $$
> \left|\Delta \vec{r}\right| = \sqrt{(x_2-x_1)^2+(y_2-y_1)^2+(z_2-z_1)^2}
> $$

**FIGURA 1.1.** (*Idea grafica di posizione e spostamento*)
![[Pasted image 20240309161657.png]]

# 2. Posizione in funzione del tempo (Legge Oraria)
#Osservazione 
> [!rmk] descrivere analiticamente la posizione di un corpo
> Supponiamo di avere una situazione come nella *figura 2.1.*: un corpo parte da un punto $\vec{r}_i$ iniziale, e arriva al punto $\vec{r}_f$ finale. 
> Supponendo che i due punti siano diversi, vogliamo trovare un modo per *descrivere* questo moto, soprattutto in funzione del *tempo*.
> 
> Definiremo dunque una *legge oraria* come una funzione $\vec{r}(t)$ che associa all'*istante del tempo* alla *posizione del corpo in quell'istante del tempo*. La parte difficile è proprio di trovare tale funzione che descriva *fedelmente* il movimento di un corpo di una data situazione.

**FIGURA 2.1.** (*Situazione del problema*)
![[Pasted image 20240309162743.png]]

#Definizione 
> [!def] legge oraria
> Sia $\vec{r}: [t_0, t_1] \longrightarrow \mathbb{R}^3$, dove $[t_0, t_1]$ è l'*intervallo del tempo misurato* e $\mathbb{R}^3$ lo spazio in cui ci muoviamo (può essere anche $\mathbb{R}^2$). Sia $\vec{r}_i$ la posizione iniziale del corpo e $\vec{r}_f$ la posizione finale. Se valgono che
> $$
> \begin{cases}
> \vec{r}(t_0)= \vec{r}_i \\ \vec{r}(t_1)=\vec{r}_f
> \end{cases}
> $$
> allora $\vec{r}(t)$ si dice *legge oraria*.
> Genericamente la funzione viene definita come
> $$
> \vec{r}(t):=x(t) \cdot \hat{i}+y(t)\cdot \hat{j}+ z(t) \cdot \hat{k}
> $$
> con $x(t), y(t), z(t)$ delle *leggi orarie* su $\mathbb{R}^1$.

#Esempio 
> [!exm] esempio su 2D
> Supponiamo di avere
> $$
> \vec{r}(t)=[2 \ \text{m} + 2  \text{ m/s} \cdot t ] \cdot \hat{i} + [0 \text{ m}+4 \text{ m/s} \cdot t] \cdot \hat j
> $$
> Allora, per avere una *rappresentazione grafica* di $\vec{r}$ si deve prima disegnare i grafici di $x(t)$ e $y(t)$ (*figura 2.2.*), poi per creare un *"nuovo grafico"* dove come assi abbiamo $x(t)$ in funzione di $y(t)$ (*figura 2.3.*).
>  
> Si osserva che con la *rappresentazione finale* di $\vec{r}(t)$ non si ha nessuna indicazione *chiara del tempo*: infatti occasionalmente si può trovare una *curva*, che potrebbe sembrare una *non-funzione* (dal momento che associa ad un elemento di $x(t)$ elementi diversi di $y(t)$), ma in realtà stiamo solo trascurando il tempo. Sfruttando l'asse libero $z(t)$ e usandolo come *"indicatore del tempo"*, si vede che quella diventa una funzione. Analogia del cubo.

**FIGURA 2.2.** (*Leggi orarie su parti separate*)
![[Pasted image 20240309163240.png]]

**FIGURA 2.3.** (*Legge oraria generale*)
![[Pasted image 20240309163252.png]]