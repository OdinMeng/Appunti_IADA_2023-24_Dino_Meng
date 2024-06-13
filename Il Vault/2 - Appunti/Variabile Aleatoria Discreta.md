---
data: 2024-04-10
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Variabile Aleatoria Discreta
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Discrete
---
- - -
*Variabili aleatorie discrete: definizione e lemma di caratterizzazione per le v.a. discrete.*
- - -
# 0. Voci correlate
- [[Definizione di Variabile Aleatoria]]
- [[Spazio di Probabilità Discreto]]
# 1. Definizione di Variabile Aleatoria Discreta
#Definizione 
> [!def] variabile aleatoria discreta
> Sia $(\Omega, \mathcal{A}, p)$ uno *spazio di probabilità*. Si dice *"variabile aleatoria discreta"* una *variabile aleatoria* ([[Definizione di Variabile Aleatoria#^add567|1]]) che assume al più *una quantità numerabile* di valori, ovvero
> $$
> X(\Omega)=\{x_1, \ldots, x_n, \ldots\}
> $$
> In particolare prendiamo il caso in cui i valori assunti sono *numeri reali*, ovvero abbiamo un'applicazione del tipo
> $$
> X: \Omega \longrightarrow \mathbb{R}
> $$

^fa74dd

# 2. Lemma di Caratterizzazione
#Lemma 
> [!lem] lemma di caratterizzazione delle v.a. discrete
> Siano dati uno spazio di probabilità $(\Omega, \mathcal A, p)$ e un'applicazione $X: \Omega \longrightarrow \mathbb{R}$ che assume un numero di valori al più numerabile.
> 
> $X$ è una *variabile aleatoria discreta* se e solo se vale $\{X \in x\} \in \mathcal A, \forall x \in \mathbb{R}$. 
> (ovvero *"tutti gli eventi generati da questa variabile aleatoria fanno parte della sigma-algebra"*).
^05da6b

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^05da6b]]
"$\implies$": Sia $X$ una *variabile aleatoria discreta* e $x$ un qualsiasi numero della retta reale; allora vale che $\{x\} \in \mathcal{B}$ dato che un singolo punto della retta reale può essere considerata come un *"intervallo degenere"* (infatti $\{x\} = (-\infty, x] \cap [x, +\infty)$). Allora per definizione vale che $\{X = x\} \in \mathcal A$.
"$\impliedby$": Dato $B \in \mathcal{B}$ qualsiasi, posso scomporre questo *"intervallino"* in una *quantità finita (o al più numerabile) di pezzi*. Possiamo quindi scrivere
$$
\{x \in B\} = \bigcup_{x \in B \cap X(\Omega)}\{X= x\}
$$
(*nota*: scriviamo $B \cap X(\Omega)$ perché guardiamo *solo* le immagini inverse della $X$; non ci interessano i valori per cui abbiamo insiemi vuoti)
In particolare questo *appartiene alla sigma-algebra* $\mathcal{A}$, dato che abbiamo un'*unione al più numerabile* di elementi della stessa sigma-algebra: questo prova $X$ essere una *variabile aleatoria* (ed ovviamente è *discreta*). $\blacksquare$
