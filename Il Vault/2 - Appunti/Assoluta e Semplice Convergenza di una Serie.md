---
data: 2024-02-09
corso:
  - "[[Analisi Matematica I]]"
  - "[[Analisi Matematica II]]"
argomento: Assoluta e Semplice Convergenza di una Serie
tipologia: appunti
stato: "0"
capitolo: Serie Numeriche
---
- - -
*Serie a termini di segno qualunque: serie assolutamente, semplicemente convergente; teorema dell'assoluta convergenza; criterio di Leibniz per le serie di segno alternato.*
- - -
# 0. Voci correlate
- [[Definizione di Serie]]
- [[Serie a Termini non negativi]]
- [[Teoremi Generali sulle Serie]]
- [[Conseguenze dell'esistenza dell'estremo superiore]]
# 1. Definizione di assoluta e semplice convergenza
#Definizione  
> [!def] serie assolutamente convergente
> Sia $\sum_n a_n$ una *serie* con termini in $\mathbb{R}$ o $\mathbb{C}$.
> La serie $\sum_n a_n$ si dice *assolutamente convergente* se è convergente la serie $\sum_n |a_n|$.

#Definizione 
> [!def] serie semplicemente convergente
> Sia $\sum_n a_n$ una *serie* con termini in $\mathbb{R}$ o $\mathbb{C}$.
> Se $\sum_n a_n$ è *convergente* ma $\sum_n |a_n|$ è *divergente*, allora $\sum_n a_n$ si dice *semplicemente convergente*.

# 2. Rapporto tra le serie e le serie assolute
#Osservazione 
> [!rmk] preambolo
> Ora ci chiediamo se esiste un rapporto che lega $\sum_n a_n$ con $\sum_n |a_n|$; ovvero vogliamo trovare dei teoremi che sono in grado di garantire (o meno) il rapporto dei caratteri delle serie $\sum_n a_n$ e $\sum_n |a_n|$. 
> Se una serie è assolutamente convergente, allora è convergente? Oppure vale il viceversa? Se è convergente, allora dev'essere assolutamente convergente? 
> Ora lo vediamo.

#Teorema 
> [!thm] dell'assoluta convergenza
> Sia $\sum_n a_n$ una serie qualunque.
> Se $\sum_n |a_n|$ è *convergente*, allora $\sum_n a_n$ è sicuramente convergente.
> Ovvero *"se una serie è assolutamente convergente, allora è convergente"*.
^5669ce

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^5669ce]].
Supponiamo che $\sum_n a_n$ sia *assolutamente convergente*, ovvero $\sum_n |a_n|$ è *convergente*.
Allora applico il *criterio di Cauchy* sulla serie $\sum_n |a_n|$ ([[Teoremi Generali sulle Serie#^3f8079]]).
$$
\begin{gather}
\forall \varepsilon>0, \exists \bar n: \forall n, k \\ n > \bar n \land k \in \mathbb{N} \implies ||a_n|+|a_{n+1}|+\ldots+|a_{n+k}|| < \varepsilon
\end{gather}
$$
Applico la *disuguaglianza triangolare* al membro sinistro della disuguaglianza ([[Funzioni di potenza, radice e valore assoluto#^5bd8b3]]).
Allora ho una situazione del tipo
$$
|a_n+\ldots+a_{n+k}| \leq |a_n|+\ldots+|a_{n+k}| = ||a_n|+\ldots+|a_{n+k}|| < \varepsilon
$$
Ma allora ho
$$
\begin{gather}
\forall \varepsilon>0, \exists \bar n: \forall n, k \\ n > \bar n \land k \in \mathbb{N} \implies |a_n+a_{n+1}+\ldots+a_{n+k}| < \varepsilon
\end{gather}
$$
che è il *criterio di Cauchy* per la serie $\sum_n a_n$. $\blacksquare$

#Osservazione 
> [!rmk] non vale il viceversa
> Abbiamo solo dimostrare che vale l'implicazione "$\implies$", ma non "$\impliedby$"; ovvero non abbiamo dimostrato che le successioni convergenti sono assolutamente convergenti.
> Non sarebbe infatti possibile *"replicare"* la stessa dimostrazione al contrario, dal momento che in questo caso la disuguaglianza triangolare non vale più.
> Infatti si proporrà il *criterio di Leibniz* come *"controesempio"* per sfatare l'inversa della tesi, ovvero che *esistono* delle serie semplicemente convergenti.

# 3. Criterio di Leibniz
#Teorema 
> [!thm] criterio di Leibniz per le serie a termini di segno alternato
> Sia $(a_n)_ n$ una successione in $\mathbb{R}$ tale che:
> i. la successione è decrescente e a termini non negativi, ovvero
> $$
> \forall n, 0 \leq a_{n+1} \leq a_n
> $$
> ii. il suo limite è nullo;
> $$
> \lim_n a_n = 0
> $$
> Allora la serie $\sum_n(-1)^n\cdot  a_n$ è *convergente*. Inoltre si può stimare la somma con un errore, dato come
> $$
> \left|s-s_n\right|\leq a_{n+1}
> $$
^945fc0

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^945fc0]].
Si tratta di dimostrare che il limite della *successione delle ridotte della serie* esiste finito, ovvero il limite $\lim_n s_n$.
Osservo preliminarmente che si costruisce $(s_n)_n$, per ipotesi iniziali, nel seguente modo:
$$
s_0 = a_0; s_1=a_0-a_1 ; s_2 = a_0-a_1+a_2 ; \ldots
$$
Inoltre tengo conto del fatto che i termini sono *"più piccoli di quello precedente"*, dal momento che la successione è *decrescente*.
Allora ho una situazione del tipo raffigurato nella *figura 1.*.
In parole costruisco la *successione di intervalli* definita come la seguente:
$$
(I_n)_n: [\alpha_n, \beta_n]:=\begin{cases}[s_{n-1}, s_n], \exists k \in \mathbb{N}: n=2k \\ [s_n, s_{n-1}] \text{ alt.} \end{cases}
$$
Inoltre noto che la distanza di due *"estremi"* di un qualunque intorno è proprio $|a_n|$.
Vedo che posso usare il teorema di *Cantor*; per dimostrarlo bene devo solo dimostrare bene la seguente catena di disuguaglianze
$$
\boxed{s_{2n+1}\leq s_{2n+3}\leq s_{2n+2} \leq s_{2n}}
$$
ovvero che *"le ridotte pari sono decrescenti e stanno sopra le ridotte dispari che sono a loro volta crescenti"*.
Per dimostrare un pezzo faccio dei calcoli relativi a $s_{2n+1}, s_{2n+2}$:
$$
\begin{cases}s_{2n+1} = s_{2n}+(-1)^{2n+1}a_{2n+1}=s_{2n}-a_{2n+1} \implies s_{2n} \geq s_{2n+1} \\ s_{2n+2} = s_{2n+1} + (-1)^{2n+2}a_{2n+2} = s_{2n+1} + a_{2n+2} \implies s_{2n+2} \geq s_{2n+1} \\ s_{2n+2} = s_{2n}-\underbracket{(a_{2n+1}-a_{2n+2})}_{\geq 0} \implies s_{2n} \geq s_{2n+2}  \end{cases}
$$
Ultimamente ho $s_{2n+1} \leq s_{2n+2} \leq s_{2n}$.
Per *"completare la catena di disuguaglianza"* segnata sopra, faccio un calcolo analogo per $s_{2n+3}$;
$$
\begin{cases}s_{2n+3} = s_{2n+2}-a_{2n+3} \implies s_{2n+3} \leq s_{2n+2} \\ s_{2n+3} = s_{2n+1} + \underbracket{(a_{2n+2} - a_{2n+3})}_{\geq 0} \implies s_{2n+3} \geq s_{2n+1}\end{cases}
$$
Finalmente ho ottenuto ciò che volevo dimostrare all'inizio.
Adesso dimostriamo la stima dello scarto $|s-s_n|\leq a_{n+1}$; osservo che se ho $n$ pari, allora posso maggiorare $|s-s_n|$ ricorsivamente fino a $s_2$, avendo una situazione del tipo
$$
|s-s_{2n+2}|\leq|s-s_{2n}|\leq |s-s_{2n-2}|\leq\ldots \leq |s-s_2 | =|a_1|\leq a_{n+1}
$$
Invece se ho $n$ dispari, basta maggiorarlo con un $s_{2n}$ pari e da lì segue la stessa catena.
Continuando verso la fine della dimostrazione del teorema, posso essere sicuro di dire che la successione $(s_{2n+1})_n$ è *crescente*, invece la successione $(s_{2n})_n$ è decrescente ma vale che $\forall n, s_{2n+1} \leq s_{2n}$. Ora posso finalmente applicare il *teorema di Cantor* ([[Conseguenze dell'esistenza dell'estremo superiore#^78d038]]) in una maniera rigorosa.
Ora definisco il limite di queste due successioni come
$$
\lim_n s_{2n+1}=\sigma, \lim_n s_{2n}=\eta
$$
ovvero *"$\sigma$ è l'estremo sinistro, $\eta$ è l'estremo destro"*.
Per concludere mi basta solo dimostrare che $\sigma = \eta$, ovvero che due *successioni estratte* di $(s_n)_n$ convergono allo stesso valore, di conseguenza il limite della successione $\lim_n s_n$ esiste.
Considero dunque il fatto che *"il limite delle ridotte pari stanno sopra a quelle dispari"*, e che i limiti delle successioni monotone sono gli *estremi* delle successioni.
Ovvero, 
$$
\forall n, s_{2n+1} \leq \sigma \leq \eta \leq s_{2n}
$$
Ora, manipolando l'espressione ottengo
$$
\forall n , 0 \leq |\sigma-\eta| \leq s_{2n} - s_{2n+1}=a_{2n+1}
$$
Per ipotesi iniziale il limite della *successione dei termini generali* è nulla; ovvero
$$
\lim_n a_n = 0 \implies \lim_n a_{2n+1} = 0
$$
Allora per il *teorema dei due Carabinieri* ([[Limite di Successione#^72d83a]]) ho il limite
$$
\lim_n |\eta-\sigma| = 0 \implies \eta = \sigma
$$
Che dimostra $\sigma = \eta$, come volevasi dimostrare. Per dimostrare la stima
$$
|s-s_n| \leq a_{n+1}
$$
si usa il fatto che le *successioni convergenti in $\mathbb{R}$* sono *successioni di Cauchy* ([[Successioni di Cauchy#^6e84e5|1]]), ovvero
$$
\begin{gather}
\forall \varepsilon>0, \exists N>0: \forall n,m>N \\ |s_n-s_m| < \varepsilon
\end{gather}
$$
Sia fissato $m \in \mathbb{N}$, da cui si ha un $\bar{n}$ abbastanza grande tale che $\bar{n}>m$. Allora
$$
\begin{align}
\bar{n}>m>N \implies |s_\bar{n}-s_m| &=|(a_1+\ldots\pm a_\bar{n})-(a_1+\ldots\pm a_m)| \\&
=|a_{m+1}-(\underbracket{a_{m+2}-\ldots\mp a_{\bar{n} } )}_{\geq 0}| \leq a_{m+1}
\end{align}
$$
da cui si ricava la tesi, ponendo il limite $\bar{n} \to +\infty$: infatti $\lim_n s_n = s$. $\blacksquare$

**FIGURA 1.** (*Situazione iniziale*)
![[Pasted image 20240209150438.png]]

# 4. Teorema di Riemann
#Teorema 
> [!thm] di Riemann
> Sia $\sum_n a_n$ *assolutamente convergente*.
> Allora *tutte le serie* $\sum_n b_n$ del tipo $b_n := a_{\varphi(n)}$, dove $\varphi$ è una *biiezione* del tipo $\varphi: \mathbb N \longrightarrow \mathbb N$, saranno sicuramente *convergenti* con la stessa somma.
> Ovvero *"se una serie è assolutamente convergente, allora una qualsiasi altra serie con i stessi termini ma rimescolati sarà convergente con la stessa somma"*.
> Notare che vale anche il *viceversa*.
^c571fd

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^c571fd]].
Omessa. $\blacksquare$
