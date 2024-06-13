---
data: 2024-05-09
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Indipendenza tra Variabili Aleatorie
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Discrete
---
- - -
*Definizione di indipendenza tra variabili aleatorie, composizione di variabili aleatorie indipendenti.*
- - -
# 0. Voci correlate
- [[Eventi Indipendenti]]
- [[Introduzione ai Vettori Aleatori]]
# 1. Definizione di Variabili Aleatorie Indipendenti
**IDEA.** Da un lato ho la nozione di *indipendenza tra eventi* ([[Eventi Indipendenti#^264eb5|1]]), e dall'altro ho *eventi generati* da variabili aleatorie, denotate da una notazione del tipo $\{X \in E\}$. Allora posso unire le nozioni per *definire* l'idea di *variabili aleatorie indipendenti*.

#Definizione 
> [!def] variabili aleatorie indipendenti
> Siano $X_1, \ldots, X_N$ delle *variabili aleatorie* su uno spazio di probabilità $(\Omega, \mathcal{A}, p)$. Questi si dicono *indipendenti* se per ogni scelta degli insiemi *"target"* $E_1, \ldots, E_N \in \mathcal{B}(\mathbb{R})$ si ha la condizione
> $$
> p\{X_1 \in E_1, \ldots , X_N \in E_N\} = \prod^{n}_{k=1}p\{X_k \in E_k\}
> $$
> ovvero *"posso scrivere che la probabilità di avere tutti gli eventi nei loro target equivale al prodotto delle loro probabilità"*.
> 
> Usando la nozione di *vettori aleatori*, possiamo pensare all'indipendenza come quella proprietà per cui abbiamo che *gli output marginali* confluiscono in modo indipendente su quello *globale*.

#Osservazione 
> [!rmk] non è necessario verificare l'altra condizione
> Notiamo che per *eventi* dovevamo anche verificare che *tutti gli eventi* siano indipendenti *due a due*, *tre a tre*, *quattro a quattro*, ed eccetera...
> Come mai non lo facciamo qui? Questo perché avendo verificata la condizione
> $$
> p\{X_1 \in E_1, \ldots , X_N \in E_N\} = \prod^{N-1}_{k=1}p\{X_k \in E_k\}
> $$
> abbiamo già gratis
> $$
> p\{X_1 \in E_1, \ldots , X_{N-1} \in E_{N-1}\} = \prod^{N-1}_{k=1}p\{X_k \in E_k\}
> $$
> Questo ci è garantito scegliendo $E_N = \mathbb{R}$ (ovvero l'ultima variabile aleatoria si comporta come vuole): in questo modo si avrebbe $\{X_N \in \mathbb{R} \} = \Omega \implies p(\{X_N \in \mathbb{R}\}) = 1$, che è l'elemento neutro del prodotto. Per induzione si ha che vale su tutte le scelte di eventi.

# 2. Composizione su Variabili Aleatori Indipendenti
Abbiamo che le *variabili aleatorie* si comportano bene su due aspetti: uno dal punto di vista *vettoriale* (lo vedremo con nozione di *densità marginale e congiunta* ([[Densità Congiunta e Marginale#^05d119|1]], [[Densità Congiunta e Marginale#^6bca48|2]])) e l'altro dal punto di vista delle *composizioni* (ovvero rielaborazione dei dati). Prima di enunciare la proposizione, facciamo una breve considerazione sulle *composizioni di variabili aleatorie*.

**COMPOSIZIONE DI VARIABILI ALEATORIE.** Non sempre abbiamo sempre che la *composizione su una variabile aleatoria* rimanga variabile aleatoria. Abbiamo due scelte: o sia la *variabile aleatoria* discreta (così tanto possiamo prendere la sigma algebra come tutti i sotto insiemi), o sia la *funzione di composizione* abbastanza *"regolare"*.

#Definizione 
> [!def] funzione misurabile
> Sia $f: \mathbb{R} \longrightarrow \mathbb{R}$ invertibile. Sia $X$ una variabile aleatoria sullo spazio di probabilità $(\Omega, \mathcal A, p)$. 
> Se prendendo la *funzione inversa* di un qualsiasi boreliano su $\mathbb{R}$ si ottiene ancora un boreliano. 
> $$
> f^{-1}(B) \in \mathcal{B}(\mathbb{R}), \forall B \in \mathcal{B}(\mathbb{R})
> $$
> Allora $f$ si dice *misurabile*.

Notiamo che una classe notevole di funzioni misurabili sono le continue $\mathcal{C}^0$.

#Proposizione 
> [!prp] composizione su v.a.i.
> Siano $X_1, X_2$ due *variabili aleatorie indipendenti* e $f_1,f_2:\mathbb{R}\longrightarrow\mathbb{R}$ delle funzioni *misurabili*.
> 
> Allora le *variabili aleatorie composte* $Y_1:=f_1 \circ X_1$ e $Y_2 := f_2 \circ X_2$ sono *indipendenti*.
^100fa3

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^100fa3]]
Supponiamo $E_1, E_2 \in \mathcal{B}(\mathbb{R})$ gli eventi target su $Y$. Allora possiamo scrivere
$$
\{Y_1 \in E_1, Y_2 \in E_2\} = \{f_1 \circ X_1 \in E_1, f_2 \circ X_2 \in E_2\}
$$
Possiamo applicare l'inversa su $f \circ X$, ottenendo l'evento 
$$
\{X_1 \in f_1^{-1}(E_1), X_2 \in f_2^{-1}(E_2)\}
$$Adesso per indipendenza delle $X$, abbiamo
$$
p(\{X_1 \in f_1^{-1}(E_1), X_2 \in f_2^{-1}(E_2)\})=p(X_1 \in f_1^{-1}(E_1))\cdot p(X_2 \in f_2^{-1}(E_2))
$$
e *"annullando l'inversione"* delle $f_1, f_2$ riotteniamo
$$
p(\{Y_1 \in E_1\})\cdot p(\{Y_2 \in E_2\})
$$
da cui si ha la tesi
$$
\boxed{p(\{Y_1 \in E_1, Y_2 \in E_2\})=p(\{Y_1 \in E_1\})\cdot p(\{Y_2 \in E_2\})}
$$
che dimostra la proposizione. $\blacksquare$

Potremo generalizzare questo risultato per *vettori aleatori* ([[Introduzione ai Vettori Aleatori#^8f9fad|1]]).

#Corollario 
> [!cor] 
> Siano $X_1,\ldots, X_N$ delle variabili aleatorie. Ponendo
> $f(x_1,\ldots,x_k) = \sum_{1\leq j \leq k}x_j$ e $g(x_{k+1},\ldots,x_N) = \sum_{k+1 \leq j \leq N}x_j$ con $k < N$ allora otteniamo che le variabili aleatorie
> $$
> Y_1 =f\circ(X_1,\ldots,X_k); Y_2 = g\circ(X_{k+1},\ldots,X_N)
> $$
> sono *variabili aleatorie indipendenti*.

