---
data: 2024-02-07
corso:
  - "[[Analisi Matematica I]]"
  - "[[Analisi Matematica II]]"
argomento: Teoremi Generali sulle Serie
tipologia: appunti
stato: "1"
capitolo: Serie Numeriche
---
- - -
*Primi teoremi sulle serie: condizione necessaria per una serie convergente, criterio di Cauchy per le serie.*
- - -
# 0. Voci correlate
- [[Definizione di Serie]]
- [[Carattere di una Serie]]
# 1. Condizione necessaria per serie convergenti
#Teorema 
> [!thm] condizione necessaria per la convergenza di una serie
> Sia
> $$
> \sum^{+\infty}_{n \in \mathbb{N}} a_n 
> $$
> una serie *convergente*.
> Allora la *successione dei termini generali* $(a_n)_n$ presenta il limite nullo, ovvero
> $$
> \lim_n a_n = 0
>  $$
^79c14a

#Osservazione 
> [!rmk] attenzione!
> Osservare attentamente che questo teorema ci fornisce *solamente* una condizione necessaria per una serie convergente, ma *non* una condizione sufficiente; infatti, prendendo la *serie armonica*, abbiamo che il limite della successione $\lim_n a_n$ si annulla; ma la sua serie è *divergente* ([[Carattere di una Serie#^869811]]).

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^79c14a]].
Supponiamo, per ipotesi che la serie
$$
\sum^{+\infty}_{n \in \mathbb{N}} a_n 
$$
sia *convergente*.
Allora per ipotesi segue che il *limite della successione delle ridotte* è convergente per tale serie:
$$ 
\lim_n s_n = s \in \mathbb{R}
$$
Allora vale anche
$$
\lim_n s_{n-1} = \lim_n s_n = s
$$
Ma allora possiamo sottrarli e ottenere
$$ 
\lim_n (s_{n}-s_{n-1})=s-s=0
$$
Però ci ricordiamo che $s_{n-1}-s_{n}$ non è altro che un modo per esprimere $a_n$, dal momento che *sottraiamo* tutti i termini $a_0, \ldots, a_{n-1}$ da $a_{0}, \ldots, a_{n}$.
Di conseguente
$$ 
\lim_n (s_n-s_{n-1}) = \boxed{\lim_n a_n = 0} \ \blacksquare
$$

#Osservazione 
> [!rmk] l'utilità di questo teorema
> Come osservato prima, non si può sfruttare questo teorema come una *condizione sufficiente*; tuttavia è possibile comunque sfruttare la *contronominale* di questo teorema, ovvero
> $$ 
> ((a_n)_n, (s_n)_n) \text{ convergente} \implies \lim_n a_n = 0
> $$
> diventa
> $$ 
> \lim_{n}a_n \neq 0 \vee \not \exists \lim_n a_n \implies ((a_n)_n, (s_n)_n) \text{ divergente o indeterminata}
> $$
> Allora guardando semplicemente il *comportamento* del limite per $a_n$, possiamo già escludere se la sua serie è *convergente* o meno.
> 
> Ad esempio, voglio studiare la *serie costante* del tipo $1+1+\ldots+1+\ldots$; osservo che il limite della successione dei suoi termini generali è divergente, dunque è impossibile che sia *convergente*. Infatti, la serie costante è *divergente* per $+\infty$.

# 2. Criterio di Cauchy
#Teorema 
> [!thm] Criterio di Cauchy per le serie
> Sia
> $$
> \sum^{+\infty}_{n \in \mathbb{N}}a_n
> $$
> una *serie a valori in $\mathbb{R}$ o $\mathbb{C}$*.
> Allora sono equivalenti:
> $$\sum^{+\infty}_{n \in \mathbb{N}}a_n \text{ convergente} \iff \begin{gather}\forall \varepsilon > 0, \exists \bar n: \forall n > \bar n \land \forall k \in \mathbb{N} \\|a_{n+1}+a_{n+2}+\ldots+a_{n+k}| < \varepsilon \end{gather}$$
^3f8079

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^3f8079]].
Ricordo il *teorema di completezza di $\mathbb{R}$* ([[Successioni di Cauchy#^bc7fc3]]) e il *teorema di caratterizzazione delle successioni convergenti* ([[Successioni di Cauchy#^6e84e5]]), per i quali una *successione qualsiasi* $(\alpha_n)_n$ è *convergente* se e solo se è di *Cauchy* (in $\mathbb{R}$).
Per definizione, la serie è convergente se la sua successione delle ridotte $(s_n)_n$ è *convergente*. Allora la serie è convergente *se e solo se* $(s_n)_n$ è di *Cauchy*.
Ora richiamo la definizione di successione di Cauchy: una successione si dice di Cauchy quando vale
$$
\begin{gather}\forall \varepsilon> 0, \exists\bar n:\\ n, k >\bar n \implies  |s_n-s_k| < \varepsilon\end{gather}
$$
Adesso supponendo che $n > k$ (non è restrittiva dal momento che se è vero il contrario, posso "scambiare i nomi" di $n, k$), posso ottenere la relazione
$$
n>\bar n; \exists m \in \mathbb{N}: k=n+m
$$
Allora riprendendo la definizione di successione di Cauchy ho
$$
\begin{gather}\forall \varepsilon> 0, \exists\bar n:\\ n, k >\bar n \implies  |s_n-s_{n+m}| < \varepsilon\end{gather}
$$
Osserviamo che il membro sinistro della disuguaglianza a destra può essere riformulata come
$$ 
|s_n-s_{n+m}|= |s_{n+m}-s_n| = |a_{n+1}+\ldots+a_{n+k}| 
$$
che è la tesi. $\blacksquare$

