---
data: 2024-04-29
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Densità Geometrica
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Discrete
---
- - -
*Definizione di densità geometrica avente un parametro non-estremo. Modello tipico di densità geometrica. L'assenza di memoria delle v.a. associate a densità geometrica.*
- - -
# 0. Voci correlate
- [[Densità associate a Variabili Aleatorie Discrete]]
- [[Definizione di Schema delle Prove Indipendenti]]
- [[Proprietà dello Schema delle Prove Indipendenti]]
# 1. Osservazione sullo Schema di Bernoulli
Adesso introduciamo un'altra *densità* importante: la densità geometrica. Prima di capirci qualcosa, si effettua la seguente osservazione preliminare.

#Osservazione 
**OSSERVAZIONE.** (*Sullo schema di Bernoulli*)
**MODELLO.** Prendiamo $(\Omega, p, \mathcal A)$ come lo *schema delle prove indipendenti* ([[Definizione di Schema delle Prove Indipendenti#^0f3594|1]]). Dallo studio di questa sappiamo i seguenti risultati ([[Proprietà dello Schema delle Prove Indipendenti#^5f0571|2]]).
i. *formula per calcolare il primo successo al $j$-esimo esperimento*
$$
P(C_j)=(1-q)^{j-1}q
$$
ii. *formula per calcolare $k$ successi*
$$
p(C_k)=\binom{n}{k}q^k (1-q)^{n-k}
$$
Adesso chiamo $C_j$ come $B_j$ e $C_k$ come $A_k$.
**VARIABILI ALEATORIE.** Adesso prendiamo $X$ come la *variabile aleatoria* che ci dice quanti successi abbiamo in un set di $\omega$ prove. Si verifica facilmente che
$$
p(X=k)=p(C_k)
$$
Ora prendendo $Y$ come la *variabile aleatoria* che ci dice il *numero del tentativo in cui abbiamo il primo successo su $n$ tentativi*, abbiamo
$$
Y_n(\omega):=\left\{\begin{align}&\min\{j \in \mathbb{N}: \omega_j = 1\}, \forall \omega \neq (0,\ldots,0)\\ &+\infty, \omega=(0,\ldots,0)\end{align}\right.
$$
e poi
$$
p(Y_n = j) = B_j, \forall j \in \{1,\ldots,n\}
$$
**DENSITA' ASSOCIATE.** Adesso troviamo le densità associate su $X$ e $Y$.
La prima è banale, dal momento che basta passare alla definizione: abbiamo
$$
q_X(k):=p\{X=k\}=p(A_k)=\binom{n}{k}q^k(1-q)^{n-k}
$$
Dopodiché per la densità $Y_n$ abbiamo
$$
q_{Y_n}(x)=p(\{Y_n=x\})=\left\{\begin{align}&(1-q)^{x-1}q, x=1,\ldots,n \\ &(1-q)^n, x=+\infty \\ &0, \text{altrimenti}\end{align}\right.
$$
Notiamo che $q_{Y_n}(x)=q_{Y_m}(x)$ per $x \leq \min\{n,m\}$. Ovvero considerando un qualsiasi $x$ che sia minore del minimo, ho che la probabilità di avere il successo in $x$ sarà sempre la stessa: se effettuo $5, 6, 7$ o più lanci, in ogni caso avrò la stessa probabilità di avere successo al primo, secondo, terzo e fino al quinto lancio. 
**ULTIMA VARIABILE ALEATORIA.** Essendo pronti a generalizzare, adesso cambiamo qualcosa sulla variabile aleatoria $Y_n$. Supponiamo di *non sapere* il numero di tentativi $n$ a priori: cosa cambia? In questo caso possiamo considerare la variabile aleatoria $Y$ come $\lim_n Y_n$ (ovvero l'estensione di $Y_n$ su tutti gli interi $\mathbb{N}$). In questo caso abbiamo
$$
q_Y(x)=\left\{\begin{align}&(1-q)^{x-1}q, x\in \mathbb{N} \\ &0, \text{altrimenti o }x=+\infty\end{align}\right.
$$
Questo ha perfettamente senso, dato che
$$
\lim_n q_{Y_n}(+\infty)=\lim_n(1-q)^n =0
$$
Adesso siamo pronti per definire tutto. $\blacksquare$
# 2. Definizione di Densità Geometrica
Possiamo definire formalmente la nozione di *densità geometrica*.

#Definizione 
> [!def] densità geometrica
> Sia $q \in (0,1)$ un parametro. Si definisce la *"densità geometrica di parametro $q$"* come la funzione
> $$
> q(x)=\left\{\begin{align}&(1-q)^{x-1}q, \forall x \in \{1,2,3,\ldots\}\\ &0, \text{altrimenti}\end{align}\right.
> $$
> e la si chiama come $\operatorname{Geo}{(q)}$.

^1351b1

#Proposizione 
> [!prp] la densità geometrica è una densità
> Mediante le *nozioni sulle serie*, si verifica che abbiamo convergenza in
> $$
> \sum_{x=1}^{+\infty}q(x)=1
> $$
> Infatti,
> $$
> \sum_{x=1}^{+\infty}q(x)=q\sum^{+\infty}_{y=x-1=0}(1-q)^{y}=1
> $$
> per quanto visto sulle *serie geometriche* ([[Carattere di una Serie#^4a2d35|1]])

# 3. Proprietà della Densità Geometrica
Vediamo una proprietà importante della *densità geometrica*.

#Proposizione 
> [!prp] l'assenza di memoria
> Sia $Y$ una v.a. con densità geometrica $\operatorname{Geo}{(q)}$. Allora 
> $$
> p\{Y> n+m \ | \ Y>n\}=p\{Y > m\}
> $$
> ovvero, avendo fatto $n$ tentativi e volendo ottenere il successo al $n+m$-esimo tentativo, *"me ne dimentico"* di tutte le $n$ prove appena svolte.
> 
> Inoltre vale che le probabilità sono calcolate come
> $$
> \boxed{
> \begin{gather}
> p(\{Y>n\})=(1-q)^n \\ p(\{Y \leq n\})=1-(1-q)^n
> \end{gather}
> }
> $$
^50d562

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^50d562]]
Osserviamo che abbiamo l'inclusione
$$
\{Y>n+m\} \subset \{Y>n\}
$$
Dunque segue che
$$
\{Y>n+m\}\cap \{Y>n\}=\{Y>n+m\}
$$
(per convincerci di questo fare un diagramma di Eulero-Venn)
quindi, prendendo la *definizione di probabilità condizionale* si ha
$$
p\{Y\geq n+m \ | \ Y>n\}:=\frac{p\textcolor{ORANGE}{\overbracket{\{Y>n+m \cap  Y>n\} }^{\{Y>n+m\}} } }{p(Y>n)}
$$
calcolando esplicitamente i termini abbiamo
$$
p\{Y>n\}=\sum_{x=n+1}^{+\infty}q(x)=\sum^{+\infty}_{x=n+1}q(1-q)^{x-1}
$$
con $x=j+n \implies j=x-n \implies j=(n+1)-(n)=1, x-1=(j-1)+n$ abbiamo
$$
\ldots=\sum^{+\infty}_{j=1}\underbracket{q(1-q)^{j-1} }_{1} (1-q)^n= (1-q)^n
$$
Similmente si ha
$$
p\{Y>n+m\}=(1-q)^{n+m}
$$
quindi abbiamo
$$
p\{Y\geq n+m \ | \ Y>n\}=\frac{p(Y>m+n) }{p(Y>n)}=\frac{(1-q)^{n+m} }{(1-q)^n}=(1-q)^n
$$
che è la definizione di
$$
p(\{Y>n\}):=(1-q)^n
$$
il che prova la tesi. Per calcolare $p(\{Y\leq n\})$ basta prendere il complementare. $\blacksquare$

#Osservazione 
> [!rmk] forma debole della densità geometrica
> Notando che stiamo sempre agendo su $\mathbb N$. Possiamo quindi porre $m'=m-1$ nella proposizione sull'assenza di memoria e avremo
> $$
> p(\{Y\geq n+m | Y>n\})= p(\{Y \geq m\})
> $$
> che di dà la *"forma debole"* della proposizione appena enunciata.
^49b8ac

#Corollario 
> [!cor] assenza di memoria, caso uguaglianza
> Sia $Y$ una v.a. con densità geometrica $\operatorname{Geo}{(q)}$. Allora 
> $$
> p(\{Y = n+m | Y>n\})=p(\{Y=m\})
> $$
^f3de0e

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^f3de0e]]
Basta pensare l'insieme a sinistra come
$$
\{Y=n+m|Y>n\}=\{Y\geq n+m|Y>n\}\diagdown\{Y>n+m|Y>n\}
$$
e usare le regole appena osservate ([[#^f3de0e]];[[#^49b8ac]]) si ricava che
$$
\begin{align}
p(\underbracket{\{Y\geq n+m|Y>n\} }_{\{Y\geq m\} }\diagdown\underbracket{\{Y>n+m|Y>n\}}_{\{Y>m\} })&=p(\{Y\geq m\})-p(\{Y>m\} ) \\ &=p(\{Y\geq m\}\diagdown \{Y>m\}) \\ &=\boxed{p(\{Y=m\})}
\end{align}
$$
che è la tesi. $\blacksquare$

**Conclusione.** Il corollario di questo teorema ci dice che *attendere il primo successo per altre $n$ prove* è completamente equivalente ad *attendere il primo successo per nessuna prove effettuata*; ovvero le precedenti prove si comportano come se non esistessero. Questo sfata la *fallacia* (nota come la *"Gambler's Fallacy"*, [wikipedia](https://en.wikipedia.org/wiki/Gambler%27s_fallacy)), per cui uno pensa che facendo infinite prove su qualcosa, si ha che la probabilità di avere almeno un successo aumenta all'aumentare di prove effettuate (se sono sempre fallimentari). Certo, per la *scimmia di Borel* potrebbe sembrar vera ([[Proprietà dello Schema delle Prove Indipendenti#^1606e3|1]]): nella visione globale ho la probabilità di avere almeno un successo aumenta: tuttavia, questo è completamente diverso dal contare il *"primo successo"*! Un conto è *contare la probabilità di avere almeno un successo*, un'altra storia è *contare il primo successo*.
Per spiegare in termini di logica, la *scimmia di Borel* implica di avere un *numero* di successi. Tuttavia, non viene detto nulla su *dove vengono disposti* questi successi.

# 4. Esercizi sulla Densità Geometrica
#Esercizio 
> [!exr] l'urna
> Da un'urna con 10 palline bianche e 15 nere si eseguono estrazioni con reinserimento fino all'estrazione di una pallina nera. Calcolare la probabilità che servano almeno 10 estrazioni per ottenere la pallina nera.

**SVOLGIMENTO.**
Si ha $q=0.6$. Prendiamo la densità $\operatorname{Geo}{0.6}$ e la associamo alla variabile aleatoria $Y$. La consegna ci sta chiedendo di calcolare
$$
p(\{Y \geq 10\})
$$
Qui basta considerare il suo complementare e utilizzare il teorema sull'assenza di memoria della densità geometrica. Ovvero
$$
p(\{Y \geq 10\}) = 1-p(\{Y<10\})=1-p(\{Y\leq 9\})=1-(1-(1-q)^9)
$$
Che ci dà il risultato finale
$$
0.0262144\%
$$
$\blacksquare$
