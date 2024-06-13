---
data: 2024-04-10
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Densità associate a Variabili Aleatorie Discrete
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Discrete
---
- - -
*Definizione di densità associata a v.a. discrete. Proprietà della densità: valori necessari. Osservazione: tramite densità posisamo calcolare le probabilità. Proposizione: condizione necessaria per la densità.*
- - -
# 0. Voci correlate
- [[Spazio di Probabilità Discreto]]
- [[Variabile Aleatoria Discreta]]
# 1. Definizione di Densità
#Definizione 
> [!def] densità associata ad una variabile aleatoria discreta
> Sia $(\Omega, \mathcal A, p)$ uno *spazio probabilistico discreto*, sia $X: \Omega \longrightarrow \mathbb{R}$ una *variabile aleatoria discreta-reale* ([[Variabile Aleatoria Discreta#^fa74dd|1]]) e sia una funzione $q$ del tipo
> $$
> q:\mathbb R \longrightarrow [0,1]
> $$
> Chiamiamo $q$ come *densità associata a* $X$ se quest'applicazione viene definita come
> $$
> q(x):=p(\{X = x\}) = p(\{\omega \in \Omega: X(\omega)=x\})
> $$

# 2. Proprietà delle Densità
#Proposizione 
> [!prp] proprietà della densità
> Sia $q$ una *densità* su $X$, che assume i valori $X(\Omega)=\{x_1,\ldots,x_n,\ldots\}$. Allora valgono che:
> i. la densità assume sempre valore *nullo* per valori diversi da $x \in X(\Omega)$
> $$
> q(x)=0, \forall x \not \in X(\Omega)
> $$
> ii. la sommatoria di tutte le densità è *unitaria*
> $$
> \sum_{x \in \mathbb{R} \cap X(\Omega)}q(x)=1
> $$ 
^88759e

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^88759e]]
i. Banale, basta usare le definizioni.
ii. Dato che $X$ assume una quantità *al più numerabile* di valori, possiamo passare dalla sommatoria all'*unione* infinita di elementi dello spazio campionario.
$$
\sum_{x \in \mathbb R}q(x)=\sum_n q(x_n)=\sum_n p(\{X = x_n\}) = p\left(\bigcup_n\{X=x_n\}\right)
$$
Adesso, tenendo conto che gli elementi $\{X=x_n\}$ *formano una partizione* di $\Omega$ (per convincerci di questo possiamo rappresentare $\Omega$ come uno spazio diviso in pezzi finiti, che poi devono essere biunivocamente associati a elementi $x_n$), abbiamo che
$$
p\left(\bigcup_n\{X=x_n\}\right) = p(\Omega)=1
$$
che è la tesi. $\blacksquare$

**FIGURA 2.1.** (*Ultimo passaggio*)
![[Pasted image 20240410094028.png]]

#Osservazione 
> [!rmk] nesso densità-probabilità
> Notiamo che tramite la densità $q$ possiamo *calcolarci* la $p_x$ di un qualsiasi valore, senza dover necessariamente passare a *spazi di probabilità* o conoscere la *variabile aleatoria* stessa. Infatti abbiamo che, dato un qualsiasi intervallo $B \in \mathcal{B}$,
> $$
> p_x(B):=p\{X \in B\}=\sum_{x \in B}p(\{X = x\})=\sum_{x \in B}q(x)
> $$

# 3. Condizione Necessaria delle Densità
#Proposizione 
> [!prp] condizione necessaria per le densità
> Sia $q: \mathbb{R} \longrightarrow [0,1]$ una funzione che gode delle seguente proprietà:
> i. $q(x)=0$ tranne per una quantità di $x_n$ *al più numerabile*.
> ii. $\sum_{x} q(x)=1$ (*nota: si tratta di una somma finita*)
> 
> Allora esiste uno *spazio di probabilità* $(\Omega, \mathcal{A}, p)$ e una *variabile aleatoria discreta* $X: \Omega \longrightarrow \mathbb{R}$ avente $q$ come *densità*.
> 
> In pratica, avendo una funzione $q$ che soddisfa le proprietà della ipotesi, possiamo *sempre* trattarla come una *densità* per una variabile aleatoria discreta per uno spazio di probabilità.
^45c932

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^45c932]]
Si tratta di trovare le strutture $\Omega$, $\mathcal{A}$ e $p$ per definire tale spazio di probabilità.
Sia $\Omega:=\{x \in \mathbb{R}: q(x) \neq 0\}$ (ovvero stiamo considerando i valori $x$ per cui ho $q$ non nullo). Ovviamente $\Omega$ è *al più numerabile*, per il primo punto. Quindi su $\Omega$ consideriamo la sigma-algebra $\mathcal{A}$ come la *famiglia di tutti i suoi sottoinsiemi*.  Adesso consideriamo la probabilità $p:\mathcal A \longrightarrow [0,1]$ definita come
$$
p(\{x\})=q(x), \forall x \in \Omega \implies p(A)=\sum_{x \in A}p(x), \forall A \in \mathcal A
$$
Per il secondo punto abbiamo che $p$ è effettivamente una *probabilità*. Infatti, $p(\emptyset)=0$ e $p(\Omega)=1$.
Infine troviamo la *variabile aleatoria* $X: \Omega \longrightarrow \mathbb{R}$ ponendo
$$
X(\omega)=\omega, \forall \omega \in \Omega
$$
Dato che abbiamo uno *spazio di probabilità discreto*, segue che $X$ dev'essere necessariamente una *variabile aleatoria* ([[Definizione di Variabile Aleatoria#^87f981]]).
Dopodiché per costruzione abbiamo
$$
p(\{X = x\})=p(\{x\})=q(x)
$$
che prova $q$ essere una *densità* su $X$. $\blacksquare$
