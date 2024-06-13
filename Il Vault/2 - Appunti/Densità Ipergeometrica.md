---
data: 2024-04-29
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Densità Ipergeometrica
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Discrete
---
- - -
*Definizione di densità ipergeometrica. Modello tipico di spazio probabilistico avente densità ipergeometrica.* 
- - -
# 0. Voci correlate
- [[Densità associate a Variabili Aleatorie Discrete]]
# 1. Definizione di Densità Ipergeometrica
Continuiamo con la nostra carrellata delle *densità su v.a. discrete*.

#Definizione 
> [!def] densità ipergeometrica
> Siano $a,b,n \in \mathbb{N}^+$ dei *parametri strettamente positivi*, tali che $n \leq a+b$. Ponendo i parametri secondari come
> $$
> k_1 = \max\{n-b, 0\}; k_2=\min\{a,n\}
> $$
> (si nota che ovviamente segue che $k_1 \leq k_2$) allora si definisce la *densità ipergeometrica di parametri* $a,b,n$ come la funzione definita così
> $$
> q(x):=\left\{\begin{align}& \frac{\binom{a}{x} \binom{b}{n-x} }{\binom{a+b}{n}}, x: (k_1 \leq x \leq k_2) \cap \mathbb{N}\\ &0, \text{altrimenti}\end{align}\right.
> $$
> Lo si indica con $\operatorname{Iper}{(n,a,b)}$.

Notiamo che con $x$ che *"appartiene all'iterazione da $k_1$ a $k_2$"* segue che
$$
k_1 \leq x \leq k_2 \implies \left\{\begin{align}& x \geq 0 \land n-x \leq b \\ &x\leq a \land n-x \geq 0\end{align}\right.
$$
(per convincerci di questo consideriamo i casi di $k_1$, $k_2$ caso per caso)
quindi abbiamo che i *coefficienti* dei *binomi di Newton* sono ben posti.

#Proposizione 
> [!prp] la densità ipergeometrica è una densità
> Si verifica che vale, per una qualsiasi scelta della tripla $n,a,b$ valida, si ha
> $$
> \sum _{k_1 \leq x \leq k_2}q(x)=1
> $$

# 2. Modello Tipico
Per capire il *vero significato* di questa densità, proponiamo il seguente *"modello tipico"* della densità ipergeometrica.

#Esempio 
**MODELLO.** (*Urna senza reimmissione*)
**Spazio.** Supponiamo di avere un'urna con $N$ palline di due colori: $M$ *bianche* e restante ($N-M$) *nere*. Supponiamo di eseguire $n$ estrazioni senza reimmissione.
Qui notiamo subito che vogliamo porre $n \leq (N-M)+M = N$ per avere una *situazione ben posta*. Questa è uguale alla condizione $n \leq a+b$.
Conoscendo già lo spazio $\Omega$ da considerare sono le *combinazioni* di $n$ su $N$ oggetti ([[Probabilità Condizionale#^953e13|1]]). 
Quindi, assumendo l'*equiprobabilità*, abbiamo
$$
\forall \omega \in \Omega, p(\omega)=\frac{1}{\left|\Omega\right|}=\frac{1}{\binom{N}{n} }
$$
**Variabili Aleatorie.** Adesso iniziamo a considerare le *variabili aleatorie.* Introduciamo la v.a. $X$ come il *"numero di palline bianche estratte"*. Adesso osserviamo che il *codominio* di $X$ ha le seguenti proprietà, prendendo $x=X(\omega)$ qualsiasi. Vediamo di *"interpretare"* i valori derivati $k$ dati nella definizione.
Prima di tutto, dev'essere *minore* di $k_2 := \min\{n, M\}$; sono *"limitato"* dal numero di tentativi disponibili. Notiamo subito che da questo discende $n-x \leq \min\{n, N-M\}$ (stiamo infatti considerando la situazione complementare).
Dopodiché consideriamo il *"complementare"* della maggiorazione appena ottenuta: abbiamo infatti
$$
x \leq \min\{0, N-M-n\} \implies x \geq \max\{0, n-(N-M)\}
$$
ovvero abbiamo che il *"peggior risultato"* è quello di avere $0$ palline, oppure il *minimo numero di palline bianche ottenibili* (ad un certo punto esauriscono le palline nere e saremmo *"costretti"* a pescare quelle bianche).
**Derivazione della Densità Ipergeometrica.** A questo punto vogliamo calcolare la densità associata ad $X$. L'evento $\{X=k\}$ corrisponde ad *"aver pescato $k$ palline bianche su una scelta di $n$ palline su $N$"*, di cui sappiamo la cardinalità ([[Probabilità Condizionale#^953e13|2]]).
$$
|\{X = k\}| = \binom{M}{k}\binom{N-M}{n-k}
$$
(possiamo interpretarla come *"$k$ palline devono essere bianche, le restanti $n-k$ nere"*)
da cui abbiamo
$$
p(\{X=k\})=\frac{\binom{M}{k}\binom{N-M}{n-k} }{\binom{N}{n} }
$$
che è proprio la tesi voluta, considerando le limitazioni su $X(\omega)$. Da qui in poi possiamo generalizzare tutto come $M=a$, $N-M=b$ e $N=n$. $\blacksquare$

**FIGURA.** (*Densità ipergeometrica*)
![[HypergeometricPDF.png]]
