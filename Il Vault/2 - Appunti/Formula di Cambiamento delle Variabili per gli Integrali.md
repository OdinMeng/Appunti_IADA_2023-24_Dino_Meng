---
data: 2024-06-04
corso:
  - "[[Analisi Matematica II]]"
argomento: Formula di Cambiamento delle Variabili per gli Integrali
tipologia: appunti
stato: "1"
capitolo: Calcolo Integrale in più Variabili
---
- - -
*Formula di cambiamento delle variabili: caso unidimensionale (motivazione). Casi particolari: trasformazioni lineari, trasformazione in coordinare polari e formula generale per trasformazioni regolari.*
- - -
# 0. Voci correlate
- [[Integrazione per Sostituzione]]
- [[Definizione di Applicazione Lineare]]
# 1. Caso Unidimensionale
**MOTIVAZIONE.** Dal *caso unidimensionale* è nota la tecnica di integrazione *per sostituzione* ([[Integrazione per Sostituzione#^4d29d1|1]]): ovvero prendendo una funzione $f:I=[a,b] \longrightarrow \mathbb{R} \in \mathcal{C}^0(I)$ e una *trasformazione* $\varphi: K = [\alpha, \beta] \longrightarrow I \in \mathcal{C}^1$, tale che sia *sia biiettiva* (dunque se e solo se invertibile) e che la sua derivata $\varphi'\neq 0$ sia *a segno costante* su $K$ (ovvero a *monotonia costante*), allora possiamo riscrivere l'integrale $\int_I f$ come
$$
\int_I f = \int_K f \circ \varphi \cdot |\varphi'|
$$

^95e247

(la derivata $|\varphi'|$ è per tenere conto della monotonia; se è positiva o negativa...)
L'idea è quella di estendere la formula [[#^95e247]] su $\mathbb{R}^{N>1}$. Notare che in più dimensioni non avrò più semplici derivate: passerò a matrici (in particolare le jacobiane $J\cdot$) e determinanti.

# 2. Formula di Cambiamento delle Variabili
Prima di enunciare la *formula di cambiamento delle variabili*, facciamo un po' di nomenclatura.

#Definizione 
> [!def] insieme localmente misurabile
> Si dice che un insieme $J \subset X$ è *localmente misurabile in $X$* se vale che
> $$
> \forall E \in \mathcal{M}(X), J \cap E \in \mathcal{M}(X)
> $$

#Definizione 
> [!def] trasformazione regolare di coordinate
> Siano $A, B \in \mathbb{R}^N$ degli *aperti*. Si dice che la funzione $\varphi: A \longrightarrow B \in \mathcal{C}^1$ è *una trasformazione regolare di coordinate* se vale che: 
> i. *Esiste l'inversa, ovvero è biiettiva*: $\exists \varphi^{-1}$
> ii. *Il determinante della sua Jacobiana dato un punto del dominio non è nulla*:
> $$
> \forall \underline{u} \in A, \det J\varphi(\underline{u})\neq 0
> $$

Adesso enunciamo tutto.

#Teorema 
> [!thm] cambio di variabile in $\mathbb{R}^N$
> Siano $A,B \subseteq \mathbb{R}^N$ degli *insiemi aperti e localmente misurabili*. Sia $\varphi: A \longrightarrow B$ una *trasformazione regolare di coordinate*.
> 
> Se una funzione $f: B \supseteq E \subseteq \mathbb{R}^N \longrightarrow \mathbb{R} \in \mathcal{R}(E)$ tale che esista un $K\subseteq A$ *compatto-misurabile* di $\mathbb{R}^3$ per cui si ha $\varphi(K) = E$, e se si ha il *determinante* $\det J\varphi$ limitato su $K$, allora $E$ è *misurabile*, la composizione $(f \circ \varphi) \cdot |\det J \varphi |$ è *Riemann-Integrabile* su $K$ e vale la formula
> $$
> \boxed{\int_E f = \int_K (f \circ \varphi) \cdot |\det J \varphi |  }
> $$

**FIGURA 2.1.** (*Diagrammi*)
![[Pasted image 20240604130048.png]]

# 3. Trasformazioni Affini
**IDEA.** Facciamo un passo indietro, passando al *caso più semplice*. Vogliamo considerare il caso in cui abbiamo una *trasformazione affine* $L \in \mathcal{L}(\mathbb{R}^3; \mathbb{R}^3)$, che può essere rappresentata con una *matrice* ([[L'insieme delle Applicazioni Lineari#^c7a393|1]]), di cui chiameremo $M$, composta dai vettori $\underline{a}, \underline{b},\underline{c} \in \mathbb{R}^3$ che formano una base. In tal caso abbiamo
$$
M=\begin{pmatrix}a_1 &b_1 & c_1 \\ a_2 & b_2 & c_2 \\ a_3 & b_3 & c_3 \end{pmatrix}, \det M \neq 0
$$
Adesso consideriamo il *parallelepipedo* formato come
$$
E=\left\{(u,v,w) \in [0,1]^3 : u\underline{a}+v\underline{b}+w\underline{c} \right\}
$$
Si ha che la sua misura è proprio il *determinante* di $M$:
$$
m_3(E)=|\det M|
$$
Quindi l'idea geometrica è questa: partiamo un parallelepipedo regolare formato dalla base canonica $\mathcal{E}^3$, poi per *distorcerla* con la trasformazione $L$ nel parallelepipedo $E$. 
![[Pasted image 20240604131635.png]]
L'idea pratica è quella di partire da $K$, poi trasformarla in $E$ che è un $n$-rettangolo, poi per usare il *teorema di Fubini*.
In tal caso ho l'integrale
$$
\iiint_E 1 = m_3(E)= \det{M}= \iiint_K \det |J\varphi| = \det M \iiint_K 1
$$
Ovvero ho che i *volumi sono equivalenti*, con un fattore $\det M$ che tiene conto della *"distorsione del dominio"*. Si può generalizzare quanto detto su *campi scalari*.

# 4. Trasformazioni in Coordinate Polari
Vediamo un caso particolare, dove trasformiamo *rettangoli* in *sezioni di corone circolari* (per praticità
 consideriamo il viceversa).
 
#Teorema 
> [!thm] trasformazioni in coordinate polari
> Sia $f(x,y)$ una funzione in due variabili, integrabili. Introducendo le variabili
> $$
> \begin{gather}
> \theta\in [-\pi, \pi]; x= \rho \cos \theta \land y=\rho \sin \theta \\
> \rho =\sqrt{x^2+y^2} \in \mathbb{R}^+
> \end{gather}
> $$
> con gli insiemi di definizione
> $$
> \begin{gather}
> A=\{(\rho,\theta): \rho>0, \theta \in [-\pi, \pi] \} \\
> B= \mathbb{R}^2 \diagdown \underbracket{\{(x,0) | x < 0\}}_{|\theta| \leq \pi}
> \end{gather}
> $$
> Allora introduco la *trasformazione regolare di coordinate* $\varphi: A \longrightarrow B$ definita come $\varphi(\rho, \theta):=(\rho \cos \theta, \rho \sin \theta)$
> da cui ho
> $$
> \int_B f = \int_A (f \circ \varphi) \cdot  \underbracket{\det J\varphi}_{\rho}
> $$

**FIGURA 4.1.** (*L'idea*)
![[Pasted image 20240604133943.png]]
