---
data: 2024-05-01
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Densità Congiunta e Marginale
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Discrete
---
- - -
*Definizione di densità congiunta e marginale. Osservazione: legame tra densità marginale e congiunta*
- - -
# 0. Voci correlate
- [[Densità associate a Vettori Aleatori]]
- [[Introduzione ai Vettori Aleatori]]
# 1. Separazione delle Densità Aleatorie
Come osservato all'inizio, possiamo *"unire"* delle variabili aleatorie singole in *un vettore aleatorio.* Oppure possiamo fare il viceversa: da un *vettore aleatorio* possiamo scomporlo in *variabili aleatorie*. Poniamo pene la loro definizione, concentrandosi sulla *densità*.

#Definizione 
> [!def] densità congiunta
> Siano $X_1, \ldots, X_N$ delle *variabili aleatorie discrete*. La densità $q$ del vettore aleatorio $X$ definito come
> $$
> X\to(X_1,\ldots,X_N)
> $$
> allora chiamiamo la *densità congiunta* delle singole variabili aleatorie come la *densità su $X$*.

^05d119

#Definizione 
> [!def] densità marginale
> Sia $X \to (X_1,\ldots,X_N)$ un *vettore aleatorio*. Le densità $q_1, \ldots, q_N$ delle variabili aleatorie $X_1,\ldots,X_N$ si dicono *densità marginali*.

^6bca48

# 2. Legame tra Densità Congiunta e Densità Marginali
Qual è la differenza tra *densità congiunta* e *densità marginale*? Da una posso ricavare l'altra? Il viceversa? Adesso vediamo con gli seguenti esempi.

#Teorema 
> [!thm] legame densità congiunta e marginali
> Dalla densità di un *vettore aleatorio* $X$ possiamo ricavare le *densità marginali*. Tuttavia dalle *densità marginali* non si ricava sempre il *vettore aleatorio*.
^46e1cc

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^46e1cc]]
Parte 1. Dimostriamo la prima parte dell'enunciato (ovvero che possiamo ricavare le densità marginali da una densità congiunta).
Per un $t \in \mathbb{R}$ abbiamo
$$
\begin{align}
q_1(t)=p\{X_1=t\}&=p\{X_1=t \land \underbracket{(X_2,\ldots,X_N) \in \mathbb{R}^{N-1}\} }_{\text{fa ciò che vuole} } \\
&=p\{X_1 \in \{t\} \times \mathbb{R}^{N-1}\}=\sum_{x \in \{t\}\times \mathbb{R}^{N-1} }q(x)
\end{align}
$$
che dimostra $q_1(t)$ essere una *densità*. Ripetendo il ragionamento per un $k$ qualsiasi abbiamo
$$
q_k(t)=\sum_{x \in E}q(x)
$$
con $E=\mathbb{R}^{k-1} \times \{t\} \times \mathbb{R}^{N-k}$. $\blacksquare$
Parte 2. Vedere l'esempio sottostante, che può essere presa come una *dimostrazione per assurdo*.

#Esempio 
**Esempio.** (*Le urne senza reimmissione*)
Prendiamo un'urna con $n$ palline, numerate da $1$ a $n$. Estraiamo *due palline senza reimmissione* e indichiamo $X_1,X_2$ i numeri delle palline estratte. Allora abbiamo che
$$
x_1=x_2 \implies p(\{X_2=x_2 | X_1 = x_1\})=0
$$
e d'altra parte
$$
x_1 \neq x_2 \implies p(\{X_2=x_2| X_1=x_1\})=\frac{1}{n-1}
$$
(avendo la prima pallina estratta, abbiamo una scelta in meno). 
Adesso, per calcolare la probabilità di un vettore qualsiasi sfrutto le regole della probabilità condizionale (in particolare la regola della catena, [[Probabilità Condizionale#^f0b2e8|1]]).
$$
\begin{align}
q(x)=p(\{X \in x\})&=p(\{X_1 =x_1\} \cap \{X_2 = x_2\})
\\ & =p(\{X_1=x_1\})\cdot p(\{X_2=x_2|X_1=x_1\})
\end{align}
$$
da cui ricaviamo
$$
q(x)=\left\{\begin{align}
& \frac{1}{n(n-1)}, x \in \{1,2,\ldots,n\}^2 \land x_1 \neq x_2 \\ &0, \text{altrimenti}
\end{align}\right.
$$
Ovvero, in forma compatta $q(x)=\frac{1}{n(n-1)}\chi_E$ con $E$ le *"coppie ordinate di interi con componenti diversi"*.
Adesso, avendo ottenuto questa *densità congiunta*, vogliamo ricavarne la densità *marginale*. In particolare abbiamo
$$
\tilde{q}_2(t)=\sum_{x \in \mathbb{R} \times \{t\} }q(x)=\left\{\begin{align}&\sum_{x \in \{1,\ldots,\hat{t}, \ldots,N\} }\frac{1}{n(n-1)}, x \in\{1,\ldots,n\}  \\ &0, \text{altrimenti}\\ \end{align}\right.
$$
Avendo una somma di esattamente $N-1$ elementi, abbiamo che
$$
\sum_{x \in \{1,\ldots,\hat{t}, \ldots,N\} }\frac{1}{n(n-1)}=\frac{1}{n}
$$
ovvero
$$
\tilde{q}_2(t)=\frac{1}{n}\chi_E
$$
con $E=\{1,\ldots,N\}$. Questa è una brutta notizia! Infatti, dovrebbe essere
$$
q_2(t)=\frac{1}{(n)(n-1)}\chi_E
$$
Ovvero
$$
\tilde{q}_2(t)\neq q_2(t)
$$
Da questo ricaviamo che dalle *densità marginali* non si può sempre ricondurre alla *densità congiunta*.

#Osservazione 
> [!rmk] caso possibile
> Osserviamo che nel precedente caso, ricavare la *densità congiunta* dalle marginali è possibile nel caso in cui ammettessimo la *reimmissione* (da verificare per esercizio). Vedremo che questo non è un caso.

# 3. Condizione Necessaria e Sufficiente per far valere il viceversa
In base all'osservazione precedente, enunciamo la seguente proposizione

#Proposizione 
> [!prp] condizione necessaria e sufficiente per il legame forte tra densità marginale e congiunta
> Siano $X_1,\ldots,X_N$ delle *variabili aleatorie discrete* e $X = (X_1,\ldots,X_N)$ il vettore aleatorio.
> Allora vale che la densità $q$ su $X$ è esprimibile come
> $$
> q(x)=\prod_{k=1}^N q_k(x_k), \forall x \in \mathbb{R}^N
> $$
> *se e solo se* vale che $X_1,\ldots,X_N$ sono *indipendenti*.

^734f38

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^734f38]]
"$\impliedby$": Banale, basta considerare la definizione di variabili aleatorie indipendenti. Infatti ho
$$
q(x):=p\{X = x\} \equiv \prod_{k \in \{1,\ldots, N\} }p\{X_k = x_k\} =: \prod_{k \in \{1, \ldots, N\} }q_k(x_k)
$$
"$\implies$": Siano $E_1, \ldots, E_N \in \mathcal{B}(\mathbb{R})$ e $E = \bigtimes_i E_i$ (ovvero un sottoinsieme di $\mathbb{R}^N$) abbiamo che
$$
p(\{X \in E\})=\sum_{x \in E} q(x)=\sum_{x \in E}\prod_{k=1}^N q_k(x_k)
$$
Possiamo commutare la *produttoria* con la *sommatoria*. Per convincerci di questo pensiamo al caso bidimensionale: ovvero con $E_1=\{x_1, \bar{x}_1\}$ e $E_2=\{x_2, \bar{x}_2\}$ abbiamo $(q_1(x_1)+q_1(\bar{x}_1)) \cdot (q_2(x_2)+q_2(\bar{x}_2))$, che sviluppandolo ci dà 
$(q_1(x_1)+q_1(\bar{x}_1))\cdot (q_2(x_2)+q_2(\bar{x}_2))=q_1(x_1)q_2(x_2)+q_1(\bar{x}_1)q_2(x_2)+\ldots+q_1(\bar{x}_1)+q_2(\bar{x}_2)$ 
Dunque abbiamo 
$$
p(X_1\in E_1, \ldots, X_N \in E_N) = \ldots = \prod_{k=1}^N \sum_{x_k \in E_k} q_k(x_k):=\prod_{k=1}^N p(\{X_k \in E_k\})
$$
che prova la tesi. $\blacksquare$
