---
data: 2024-02-08
corso:
  - "[[Analisi Matematica I]]"
  - "[[Analisi Matematica II]]"
argomento: Teorema del Confronto per le Serie a Termini non negativi
tipologia: appunti
stato: "1"
capitolo: Serie Numeriche
---
- - -
*Teoremi sulle serie a termini non negativi: teorema del confronto (+ due corollari), tecnica di valutazione delle serie con Taylor.*
- - -
# 0. Voci correlate
- [[Serie a Termini non negativi]]
- [[Definizione di Serie]]
- [[Carattere di una Serie]]
- [[Formula di Taylor]]
- [[Insiemi limitati, maggioranti, massimo e teorema dell'estremo superiore]]
# 1. Teorema del confronto per le serie a t. n. n.
#Teorema 
> [!thm] del confronto per le serie a termini non negativi
> Siano $\sum_n a_n$, $\sum_n b_n$ due *serie a termini non negativi*.
> Supponiamo che valga $a_n \leq b_n, \forall n$ (ovvero che tutti i termini di $(b_n)_n$ *"stanno sopra"* tutti quelli di $(a_n)_n$)
> Allora:
> i. Se $\sum_n a_n$ è divergente, allora anche $\sum_n b_n$ è divergente.
> ii. Se $\sum_n b_n$ è convergente con somma $s_b$, allora anche $\sum_n a_n$ è convergente con somma $s_a$, con $s_a \leq s_b$.
^700a42

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^700a42]].
*N.B. Dimostrazione omessa con Eva Sincich, dimostrazione fatta con Daniele del Santo*
i. Supponiamo che $\sum_n a_n$ sia *divergente*. Ora consideriamo le *ridotte* $n$-esime per le serie $\sum_n a_n$, $\sum_n b_n$ e le denotiamo rispettivamente con $s^a_n$, $s^b_n$.
Per ipotesi so che per una qualsiasi $n \in \mathbb{N}$ ho $a_n \leq b_n$, di conseguenza $a_0+a_1 \leq b_0+b_1$; $a_0+a_1+a_2\leq b_0+b_1+b_2$; e procedendo per induzione ottengo
$$
a_0+\ldots+a_n \leq b_0+\ldots+b_n
$$
I membri della disuguaglianza sono esattamente $s_n^a, s_n^b$.
Ma allora
$$
s_n^a \leq s^b_n
$$
Dato che $\sum_n a_n$ è *divergente*, per definizione deve seguire il limite
$$ 
\lim_n s_n^a = \pm\infty
$$
Ma allora per il *teorema del cfr. per i limiti di successione* ([[Limite di Successione#^72d83a]]) ho il limite
$$ 
\lim_n s^a_n = \pm\infty \land s_n^a \leq s_n^b \implies \lim_n s_n^b = \pm\infty
$$
Allora per definizione la serie $\sum_n b_n$ è *divergente*.
ii. Ora supponiamo invece che $\sum_n b_n$ sia *convergente* con somma $s_b$.
Per definizione ho il limite finito
$$
\lim_n s_n^b = s_b
$$
Però, considerando che trattiamo di *serie a termini non negativi*, abbiamo che la *successione delle ridotte* è monotona crescente; allora vale anche
$$ 
s_b = \sup_{n \in \mathbb{N}}{s_n^b}
$$
Ovvero *"$s_b$ è il maggiorante di tutti i termini di $(s^b_n)_n$"*, dunque $s_n^b \leq s_b$. 
Ora possiamo concatenare l'ipotesi iniziale col risultato appena ottenuto:
$$
s_n^a \leq s_n^b \leq s_b
$$
Ma allora $s_n^a$ è una *successione strettamente crescente e limitata da $s_b$*; allora per il teorema sulle successioni monotone e limitate ([[Limite di Successione#^f03a7e]]), $s_n^a$ dev'essere convergente, ovvero
$$
\lim_n s_n^a = s_a \leq s_b
$$
che è la tesi. $\blacksquare$

# 2. Conseguenze del teorema del cfr.
#Corollario 
> [!cor] caso resto $k$-esimo
> Siano $\sum_n a_n$, $\sum_n b_n$ due *serie a termini non negativi*.
> Supponendo che valga
> $$ 
> \exists k \in \mathbb{N}: \forall n, n>k \implies a_n \leq b_n
> $$
> (ovvero *"da un certo punto $a_n$ sta sotto $b_n$"*)
> allora:
> i. Se $\sum_n b_n$ è *convergente*, allora anche $\sum_n a_n$ è *convergente*.
> ii. Se $\sum_n a_n$ è *divergente*, allora anche $\sum_n b_n$ è *divergente*.
^ff29d9

#Osservazione 
> [!rmk] pezzo mancante
> Notare attentamente che questo corollario *non coincide completamente* col teorema del confronto, dal momento che nel caso delle serie *convergenti* non vale più la tesi $s_a \leq s_b$, dato che stiamo *solo* considerando il resto $k$-esimo delle serie.

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^ff29d9]].
Basta applicare il *teorema del confronto* ai *resti* $k$-esimo delle serie $\sum_n a_n$, $\sum_n b_n$, ovvero $\sum_{n=k}a_n$, $\sum_{n=k} b_n$. $\blacksquare$

#Corollario 
> [!cor] seconda conseguenza
> Siano $\sum_n a_n$, $\sum_n b_n$ serie a *termini positivi*.
> Supponendo che *esista finito e strettamente positivo il limite*
> $$
> \lim_n \frac{a_n}{b_n} = \lambda \in (0,+\infty)
> $$
> Allora le due serie hanno lo *stesso carattere*.
^89b52d

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^89b52d]].
Supponiamo il limite 
$$ 
\lim_n \frac{a_n}{b_n} = \lambda \in (0, +\infty)
$$
Allora per definizione del limite ho
$$
\begin{gather}
\forall \varepsilon >0, \exists k \in \mathbb N : \forall n, \\n > k \implies \left|\frac{a_n}{b_n}-\lambda \right| < \varepsilon \iff \lambda-\varepsilon < \frac{a_n}{b_n} < \lambda + \varepsilon
\end{gather}
$$
Scegliamo $\varepsilon = \frac{\lambda}{2}$. Allora ho
$$
\begin{align}
&\frac{1}{2}\lambda<\frac{a_n}{b_n}<\frac{3}{2}\lambda
\\
& \frac{1}{2}\lambda \cdot b_n < a_n < \frac{3}{2}\lambda \cdot b_n
\end{align}
$$

Il secondo passaggio è giustificato dal momento che $b_n$ è sempre *strettamente positivo*.
Allora, supponendo che $\sum_n a_n$ sia *convergente*, allora segue che $\sum_n \frac{\lambda}{2}b_n$ è *convergente*, ovvero $\sum_n b_n$ è anche *convergente*.
Il ragionamento è analogo per il caso in cui $\sum_n a_n$ è *divergente*. $\blacksquare$

# 3. Tecnica di valutazione delle serie con Taylor
#Osservazione 
> [!rmk] L'utilità pratica del corollario del teorema del confronto
> Sarà utile utilizzare il [[#^89b52d]] per valutare il carattere di certe serie, in specie se lo si usa accompagnandolo ai *sviluppi di Taylor per le funzioni* ([[Formula di Taylor#^947c8a]])
> 
> Supponiamo di dover studiare il carattere di una serie del tipo
> $$
> \sum^{+\infty}_{n}f(\frac{1}{n})
> $$
> Prendiamo lo sviluppo di Taylor per $f(x)$ con $x_0=0$ e $n=2$. Ovvero la $f$ diventa una funzione del tipo
> $$
> f(x)=f(0)+f'(0)x+\frac{f''(0)}{2}x^2+r_2(0,x)
> $$
> con il limite
> $$
> \lim_{x \to 0}\frac{r_2(0,x)}{x^2}=0
> $$
> Ora supponiamo di avere i seguenti casi:
> - Se $f(0) \neq 0$, allora la *funzione vicino a* $0$ non si annulla mai; dunque per qualsiasi valori di $x$, abbiamo la somma di un numero più grande di $f(0)$. Allora la serie è *divergente*.
> - Se $f(0)=0$ e $f'(0)\neq0$, allora sarà utile valutare $f$ in $\frac{1}{n}$ e prendere il suo limite.
> Infatti si avrebbe una situazione del tipo
> $$
> \lim_n\frac{f(\frac{1}{n})}{\frac{1}{n}}=\lim_nf'(0)+\frac{r_2(0,\frac{1}{n})}{\frac{1}{n^2}}\cdot\frac{1}{n} \neq 0
> $$
> dunque la serie sarà *sicuramente divergente*, dato che si comporta come $\frac{1}{n}$.
> - Se $f(0)=0$, $f'(0)=0$ e $f''(0) \in \mathbb{R}$, ripetiamo lo stesso procedimento di prima e si avrebbe la situazione del tipo
> $$
> \lim_n \frac{f(\frac{1}{n})}{\frac{1}{n^2}}=\lim_n\frac{f''(0)}{2}+\frac{r_2(0,\frac{1}{n})}{\frac{1}{n^2}}
> $$
> Infatti, se il limite fosse $0$, allora $f(\frac{1}{n})$ sarebbe più piccola di $\frac{1}{n^2}$, dunque convergente in ogni caso.
> $$
> $$
