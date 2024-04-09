---
data: 2024-04-02
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Forza Elettromagnetica
tipologia: appunti
stato: "1"
capitolo: Dinamica
---
- - -
*Interazione elettrostatica delle cariche, forza di Coulomb. Confronto numerico tra forza di Coulomb e forza gravitazionale. Campo elettrico. Interazione magnetica delle cariche data dal prodotto vettoriale di velocità e campo magnetico. Forza di Lorentz per l'interazione elettromagnetica.*
- - -
# 0. Voci correlate
- [[Forza Gravitazionale]]
# 1. Forza di Coulomb
#Teorema 
> [!thm] forza di Coulomb
> Due *oggetti* con distanza $r$ e aventi cariche $q_1$ e $q_2$ provano una *forza repulsiva o attrattiva* tra $q_1$ e $q_2$, detta come *forza di Coulomb*, e viene calcolata come segue
> $$
> \vec{F}_{12}=-k_e\frac{q_1q_2}{\left|\vec{r}_{12}\right|^2}\cdot \underbracket{ \frac{\vec{r}_{12} }{ {\left|\vec{r}_{12}\right|} } }_{\hat{r} }
> $$
> dove $k_e$ è la costante data da
> $$
> k_e = \frac{1}{4 \pi \varepsilon_0} \simeq 8.99 \cdot 10^9 \ \frac{\text{Nm}^2}{\text{C}^2 }
> $$

#Definizione 
> [!def] campo magnetico
> Si definisce il *campo magnetico* similmente al *campo gravitazionale* ([[Forza Gravitazionale#^6261fe|1]]), ovvero come il *campo vettoriale* dato da
> $$
> \vec{E}_q(\vec{r})=-k_e\frac{q}{\left|\vec{r}\right|^2}\cdot\frac{\vec{r} }{ {\left|\vec{r}\right|} } 
> $$

# 2. Confronto Numerico tra Forza Elettrica e Gravitazionale
#Osservazione 
> [!rmk] confronto numerico tra forza di Coulomb e di Newton
> Notiamo che la *forza gravitazionale di Newton* ([[Forza Gravitazionale#^38fa6b|1]]) e la *forza di Coulomb* condividono la *medesima struttura matematica* per calcolare il *modulo delle forze*; tuttavia si trattano di forze completamente diverse.
> 
> Infatti, in certi contesti la *forza elettrica* è più *forte* della *forza gravitazionale*. Prendiamo le seguenti *particelle elementari*: un *protone* ed un *elettrone*, coi valori
> $$
> \begin{pmatrix}m_p & q_p \\ m_e & q_e \end{pmatrix} \simeq \begin{pmatrix}1.672 \cdot 10^{-27} & 1.602 \cdot 10^{-19} \\ \underbracket{9.109 \cdot 10^{-31}}_{\text{kg} } & \underbracket{-1.602 \cdot 10^{-19}}_{\text C} \end{pmatrix}
> $$
> Allora abbiamo che il *rapporto tra la forza elettrica* $F_e$ e la *forza gravitazionale* $F_g$ è data da
> $$
> \frac{F_e}{F_g}=\frac{k_eq^2_e}{Gm_em_p}\cdot \frac{d^{-2} }{d^{-2} }\simeq 2 \cdot 10^{39}
> $$
> Ovvero che la *forza elettrica* è più forte della *forza gravitazionale* $2\cdot 10^{39}$ volte; in questo caso la forza gravitazionale $F_g$ diventa *trascurabile*.

# 3. Interazione Magnetica
#Osservazione 
> [!rmk] osservazioni storiche del campo magnetico
> Il *campo magnetico* è stato *osservato* da tanto tempo, soprattutto assieme all'*interazione elettrica* della particella; ad esempio si ha il noto caso della *calamita*, col polo *nord* e *sud*.
> 
> Denomineremo il *campo magnetico* come $\vec{B}$.

**FIGURA 3.1.** (*La calamita*)
![[Pasted image 20240402215713.png]]

#Teorema 
> [!thm] forza magnetica
> Supponiamo di avere una *carica* $q$, *in movimento* con una velocità $\vec{v}$ all'interno di un *campo magnetico* $\vec{B}$. 
> Allora la *forza magnetica* è data dal *prodotto vettoriale*
> $$
> \vec{F}=q(\vec{v}\times \vec{B})
> $$
> in particolare si ha che il suo modulo è
> $$
> F=|\vec{v}| |\vec{B}| \sin \theta
> $$
> (*dove $\theta$ è l'angolo creato dai due vettori*)
> 
> Inoltre la direzione del vettore risultante del prodotto scalare $\vec{F}$ è data dalla *regola della mano destra*.

#Proposizione 
> [!prp] regola della mano destra
> Siano $v_1$ e $v_2$ dei *vettori* in $\mathbb{R}^2$. Allora la *direzione* del vettore risultante dato dal prodotto vettoriale $v = v_1 \times v_2$ è *ortogonale* a entrambi i vettori $v_1$ e $v_2$ ed è data con la seguente procedura.
> 1. Estendere e aprire la mano destra
> 2. Estendere l'*indice* (o il *pollice*) come il *primo vettore* $v_1$
> 3. Estendere il *dito medio* (o l'*indice*) come il *secondo vettore* $v_2$
> 4. Il vettore risultante $v$ è il *pollice* (o il *dito medio*)
> 
> Notare che abbiamo *due procedure possibili*; il risultato finale è *indifferente* dalle dita usate, quindi si può usare la maniera più *conveniente*.

# 4. Forza di Lorentz
#Teorema 
> [!thm] forza di Lorentz
> Sia $q$ una *carica puntiforme* con velocità $\vec{v}$, immerso in un *campo magnetico* $\vec{B}$ e *campo elettrico* $\vec{E}$. 
> 
> Allora si dice *la forza di Lorentz* come la *forza elettrica* e la *forza magnetica* esercitata su questa carica ed è data dalla formula seguente.
> $$
> \boxed{\vec{F}= q\left(\vec{E}+\vec{v}\times \vec{B}\right)}
> $$
