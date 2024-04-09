---
data: 2024-03-30
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Definizione di Variabile Aleatoria
tipologia: appunti
stato: "1"
capitolo:
---
- - -
*Definizione generale di variabile aleatoria. Lemma di caratterizzazione delle variabili aleatorie. Notazione per gli eventi generati dalle variabile aleatorie.*
- - -
# 0. Voci correlate
- [[Spazio di Probabilità Discreto]]
- [[Strutture Matematiche della Probabilità]]
# 1. Definizione di Variabile Aleatorie
#Definizione 
> [!def] variabile aleatoria
> Sia $(\Omega, \mathcal{A}, p)$ uno *spazio di probabilità*. Definiamo *variabile aleatoria* (abbreviato come *v.a.*) un'applicazione $X:\Omega \longrightarrow E$ tale che per ogni $B \in \mathcal{B} \subseteq E$ (dove $\mathcal B$ è un *"insieme decente"*) vale l'applicazione inversa
> $$
> X^{-1}(B)=\{\omega \in \Omega: X(\omega) \in B\}\in \mathcal{A}
> $$
> In parole, una *variabile aleatoria* ci permette di prendere un *"sottoinsieme decente"* di $E$ e riportarlo su $\Omega$ dentro la famiglia $\mathcal{A}$, potendo così misurare la sua probabilità con $p$.
> 
> In particolare, se $E=\mathbb{R}$ allora si dice che $X$ è una *"variabile aleatoria reale"* si sceglie $\mathcal{B}$ come la *sigma-algebra di Borel* in $\mathbb{R}$ ([[Strutture Matematiche della Probabilità#^02b5da|1]]).
^add567

#Osservazione 
> [!rmk] ogni funzione di una variabile aleatoria per uno spazio discreto è v.a.
> Osserviamo che quando $(\Omega, \mathcal A, p)$ è uno *spazio di probabilità discreto* con $\mathcal{A}$ la *famiglia di tutti i sottoinsiemi* di $\Omega$, abbiamo che $X: \Omega \longrightarrow \mathbb{R}$ è *sempre* una *variabile aleatoria*, dato che $\mathcal{A}$ comprende *tutti* i sottoinsiemi del tipo $\{X \in B\}, \forall B \in \mathcal{B}$.

# 2. Lemma di Caratterizzazione per v.a. reali
#Lemma 
> [!lem] di caratterizzazione delle v.a. reali
> Una funzione $X: \Omega \longrightarrow \mathbb{R}$ è una *variabile aleatorie reale* se e solo se una delle seguenti condizioni è soddisfatta:
> $$
> \left\{\begin{align}&X^{-1}((a,b)) =\{\omega \in \Omega: X (\omega) \in (a,b)\}, \forall a,b \in \mathbb{R}\\ &X^{-1}([a,b])=\{\omega \in \Omega: X(\omega) \in [a,b]\}, \forall a,b \in \mathbb{R} \\ &X^{-1}((-\infty, a))=\{\omega \in \Omega: X(\omega) \in (-\infty, a)\}, \forall a \in \mathbb{R} \\ & X^{-1}((-\infty, a]) = \{\omega \in \Omega: X(\omega) \in (-\infty, a]\}, \forall a \in \mathbb{R}\end{align}\right.
> $$
^034fe2

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^034fe2]]
*N.B. Questa è un'idea della dimostrazione*
Per dimostrare che tutte le quattro condizioni sono *equivalenti*, basta considerare che tutti gli intervalli elencati sopra sono degli *"insiemi approssimabili"* con degli intervalli del tipo $(m,n)$; dopodiché si vede che l'*unione* o *l'intersezione* o il *passaggio al complementari* commutano con $X^{-1}$; ad esempio si ha
$$
X^{-1}((-\infty, a))=X^{-1}\left(\bigcup^{\infty}_{k=1}(a-k, a)\right)=\bigcup^{\infty}_{k=1}X^{-1}(a-k,a)
$$
che prova il primo punto implica il terzo punto. $\blacksquare$

# 3. Eventi generati dalle V.A.
#Definizione 
> [!def] eventi generati da una v.a.
> Per tradizione, usiamo la seguente notazione per indicare *uno o più elementi* $\omega \in \Omega$ che soddisfano la condizione della definizione di una variabile aleatoria ([[#^add567|1]]).
> $$
> \begin{gather}
> \{X \in B\} \iff \{\omega \in \Omega: X(\omega) \in B\} \\
> \{a<X<b\} \iff \{\omega \in \Omega: X(\omega) \in (a,b)\}\\
> \{x <a\} \iff \{\omega \in \Omega: X(\omega) \in (-\infty, a)\} \\
> \{X=a\} \iff \{\omega \in \Omega: x(\omega) = a\}
> \end{gather}
> $$
> gli eventi $X \in B$ o $a<X<b$, eccetera... si dicono *"eventi generati da $X$"*.
