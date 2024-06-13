---
data: 2024-05-01
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Introduzione ai Vettori Aleatori
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Discrete
---
- - -
*Introduzione ai vettori aleatori: generalizzazione delle variabili aleatorie, esempi di costruzione dei vettori aleatori. Lemma di caratterizzazione dei vettori aleatori.*
- - -
# 0. Voci correlate
- [[Definizione di Variabile Aleatoria]]
# 1. Generalizzazione delle variabili aleatorie
Vogliamo generalizzare le *variabili aleatorie reali* del tipo $X: \Omega \longrightarrow \mathbb{R}$. Adesso vogliamo generalizzarlo sull'insieme $E$, in particolare dove poniamo $E=\mathbb{R}^N$ (e lo chiameremo vettore aleatorio). Segue che la definizione è identica alla definizione generalizzata di v.a. ([[Definizione di Variabile Aleatoria#^add567|1]]).

Questo ci è utile per svariati motivi; vogliamo studiare uno *spazio campionario* su più aspetti e capire il suo *comportamento congiunto*, oppure lo stesso spazio campionario presenta elementi in *più variabili* (pensiamo all'esempio delle freccette [[Strutture Matematiche della Probabilità#^8ae512|1]], dove approssimiamo ogni spazio con i boreliani $\mathcal{B}(\mathbb{R}^2)$).

#Esempio 
**SCHEMA DELLE PROVE INDIPENDENTI.**
Studiamo uno *schema delle prove indipendenti* ([[Definizione di Schema delle Prove Indipendenti#^d5d5b8|1]]) mettendo in risalto due aspetti: chiamiamo $X_1$ il *numero di successi nelle $n$ prove* e $X_2$ il *numero in cui si verifica il primo successo*.
Formalmente abbiamo
$$
\begin{gather}
X_1(\omega)=\sum_{i=1}^n \omega_i \\ 
X_2= \begin{cases}\min\{j: \omega_j=1\}, \omega_j \neq \underline{0} \\ +\infty, \omega_j = \underline{0}\end{cases}
\end{gather}
$$
Siamo interessati a sapere la probabilità di avere *almeno quattro successi*, in cui il *primo successo* avvenga *prima del terzo tentativo*. In altre parole, stiamo cercando
$$
p(\{X_1\geq 4\}\cap\{X_2<3\})
$$
Ricordandoci che abbiamo gli intervalli
$$
\{X_1\geq 4\} \sim [4, +\infty], \{X_2 < 3\} \sim (-\infty, 3)
$$
Adesso introduciamo il vettore aleatorio $X$ definito come
$$
X:\Omega \longrightarrow \mathbb{R}^2, \omega \mapsto (X_1(\omega), X_2(\omega))
$$
Adesso riscriviamo la domanda iniziale come
$$
p(\{X \in E\})
$$
con $E$ definita come il prodotto cartesiano degli intervalli di $X_1,X_2$. Ovvero
$$
E:=[4,+\infty]\times(-\infty, 3)
$$
**LA NOVITA'.** Fino ad ora non abbiamo fatto nulla di nuovo; abbiamo solo ridefinito cose. Adesso possiamo considerare il *codominio* come un *boreliano di $\mathbb{R}^2$*, ovvero poniamo $E \in \mathcal{B}(\mathbb{R}^2)$. Vedremo bene questo aspetto col seguente lemma.

# 2. Lemma di Caratterizzazione dei Vettori Aleatori
Come abbiamo fatto con le *v.a.* ([[Definizione di Variabile Aleatoria#^034fe2|1]]), enunciamo un *lemma di caratterizzazione* per vettori aleatori.

#Lemma 
> [!lem] lemma di caratterizzazione dei vettori aleatori
> Sia $X:\Omega \longrightarrow \mathbb{R}^N$ con $(\Omega, p, \mathcal A)$ uno *spazio di probabilità*. Allora si ha che sono equivalenti le seguenti condizioni
> $$
> \begin{align} 
> & \forall k \in \{1, \ldots, N\}, X_k \ \text{è variabile aleatoria} \\ &\Updownarrow \\
> \\ & \{X \in E\} \in \mathcal A, E:=\prod^N_{k=1}(a_k,b_k) \\ &\Updownarrow \\ 
> & \{X \in E\} \in \mathcal A, \forall E \in \mathcal{B}(\mathbb{R}^2)
> \end{align}
> $$
^328f56

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^328f56]]
Lo spirito di dimostrazione è identico a quello per dimostrare il caso scalare. Sappiamo che la *prima* e la *seconda* condizione sono equivalenti, dal momento che consideriamo solo i *boreliano* in $\mathcal{B}(\mathbb{R}^2)$. La *seconda* e la *terza* sono equivalenti, dal momento che possiamo prendere complementari, intersezioni ed unioni.

Notare per controllare se $X$ sia un *vettore aleatorio* o meno, si usa spesso la condizione *i.* e *ii.* dato che sono le più facili da controllare. Invece dal punto di vista operativo si usa la *iii.*, dato che è la più flessibile.

Inoltre con questo lemma possiamo definire bene la nozione di vettore aleatorio.

# 3. Definizione di Vettore Aleatorio
#Definizione 
> [!def] vettore aleatorio
> Si dice *"vettore aleatorio"* (o v.a. in più variabili) come una funzione
> $$
> X:\Omega\longrightarrow \mathbb{R}^N
> $$
> (dove $\Omega$ fa parte dello spazio di probabilità) tale che
> $$
> \{X \in (E \subseteq_\mathcal{B} \mathbb{R}^N) \} \in \mathcal{A}
> $$
> che viene soddisfatta se e solo se vale il *lemma di caratterizzazione sui vettori aleatori* ([[#^328f56|1]]).

^8f9fad

# 4. Caso Discreto
In particolare vedremo i *vettori aleatori discreti*.

#Osservazione 
> [!rmk] vettori aleatori discreti
> Osserviamo che i *vettori aleatori discreti* sono quei vettori che assumono al più una quantità numerabile di valori; equivalentemente, le loro *componenti* sono v.a. discrete. 