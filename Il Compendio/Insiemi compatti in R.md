---
data: 2023-11-07
corso: "[[Analisi Matematica I]]"
argomento: Insiemi compatti in R
tipologia: appunti
stato: "0"
---
*Definizione di insiemi compatti in R; R come spazio metrico; teorema di caratterizzazione dei compatti in R; lemma di caratterizzazione della chiusura tramite la successione; dimostrazione del teorema.*
- - -
# 0. Preambolo - Spazi metrici e topologici
**OSS 0.a.** Osserviamo che dal titolo leggiamo che stiamo *in specifica* prendendo l'insieme $\mathbb{R}$, in quanto questo è un insieme su cui possiamo definire una *distanza* ([[Intorni]], **DEF 1.1.**). Infatti si dice che $\mathbb{R}$ è uno *spazio metrico*, come lo è pure $\mathbb{R}^2, \ldots, \mathbb{R}^{n}$. Altrimenti un insieme su cui non può essere definita una *distanza* si dice *spazio topologico*.
Per approfondire questo tema rivolgersi alla dispensa di *D.D.S.*, capitolo *10.2*, p. 33.
# 1. Definizione di insieme compatto in R
#Definizione 
> [!math|{"type":"theorem","number":"1.1.","setAsNoteMathLink":false,"title":"Insieme compatto in R per successioni","label":"insieme-compatto-in-r-per-successioni"}] Teorema 1.1. (Insieme compatto in R per successioni).
> 
Sia $E \subseteq \mathbb{R}$. $E$ si dice **compatto per successione** (*d'ora in poi diremo compatto e basta*) se vale la seguente proprietà: se da *ogni successione* a valori in $E$ posso estrarre *una sottosuccessione convergente ad un punto* $x \in E$.

**OSS 1.1.** Con questa definizione, un insieme compatto sembra un ente di cui è quasi impossibile da verificare: infatti diventa interessante trovare una *caratterizzazione alternativa* con un teorema.
# 2. Teorema di caratterizzazione dei compatti
#Teorema 
> [!math|{"type":"theorem","number":"2.1.","setAsNoteMathLink":false,"title":"Teorema di caratterizzazione dei compatti in R","label":"teorema-di-caratterizzazione-dei-compatti-in-r"}] Teorema 2.1. (Teorema di caratterizzazione dei compatti in R).
> Sia $E \subseteq \mathbb{R}$. 
> *Tesi.* Allora $E$ è compatto *se e solo se* $E$ è chiuso e limitato.
^759c9b

## Lemma di caratterizzazione della chiusura
Prima di poter procedere alla dimostrazione, ci serve il seguente lemma.

#Lemma
> [!math|{"type":"lemma","number":"2.1.","setAsNoteMathLink":true,"title":"Caratterizzazione della chiusura tramite le successioni","label":"caratterizzazione-della-chiusura-tramite-le-successioni"}] Lemma 2.1. (Caratterizzazione della chiusura tramite le successioni).
>  Sia $E \subseteq \mathbb{R}$.
> Allora $E$ è *chiuso* ([[Insiemi aperti e chiusi]], **DEF 2.1.**) se e solo se vale la seguente proprietà:
> $(\ast)$ Se una successione a valori in $E$ è convergente, allora il limite appartiene all'insieme $E$.
^9c1b28

#Dimostrazione 
`\begin{proof}`@[[#^9c1b28]]
Questo è un teorema del tipo $\iff$, quindi si procede in due passi distinti.
1. "$\implies$": Sia $E$ *chiuso*; ora supponiamo (*per assurdo*) che sia falsa la proprietà $(\ast)$. Ovvero supponiamo che esiste una successione a valori in $E$ tale che il suo punto di convergenza $\bar{a}$ appartiene ad un punto fuori da $E$ (ovvero al suo complementare $\mathcal{C}_\mathbb{R}E$).
   Però $E$ è chiuso, di conseguenza $\mathcal{C}_\mathbb{R}E$ è aperto: quindi abbiamo i seguenti. $$\bar{a} \in \mathcal{C}_\mathbb{R}E \implies\ \exists \varepsilon >0, ]\bar{a}-\varepsilon,\bar{a}+\varepsilon[ \subseteq \mathcal{C}_\mathbb{R}E$$Però allo stesso tempo abbiamo, per definizione $$\lim_n a_n = \bar{a} \implies \begin{gather}\forall \varepsilon >0, \exists \bar{n}:\forall n \in E \\n > \bar{n} \implies a_n \in \ ]\bar{a}-\varepsilon, \bar{a}+\varepsilon[\end{gather}$$Tuttavia questo è un *assurdo* in quanto sappiamo che se $a_n$ appartiene a $E$ e invece l'intorno $]\bar{a}-\varepsilon,\bar{a}+\varepsilon[$ contiene *solo* elementi di $\mathcal{C}_\mathbb{R}E$, questo è impossibile. Allora la proprietà $(\ast)$ è vera.
   L'idea della contraddizione sarebbe
   **FIGURA 2.1.a.** (*La contraddizione*)
   [ DA FARE ]
2. "$\impliedby$": Sia vera la proprietà $(\ast)$, allora dimostro che $\mathcal{C}_\mathbb{R}E$ sia aperto.
   Per assurdo suppongo che $\mathcal{C}_\mathbb{R}E$ *non* sia aperto: allora facciamo la negazione di $$\begin{gather}\neg(\forall x \in \mathcal{C}_\mathbb{R}E ,\exists \varepsilon >0: \ ]x-\varepsilon, x+\varepsilon[ \subseteq \mathcal{C}_{\mathbb{R}}E)\\ \exists x \in \mathcal{C}_\mathbb{R}E: \forall \varepsilon >0, \ ]x-\varepsilon, x+\varepsilon[ \ \cap E \neq \emptyset\end{gather}$$Allora il gioco è fatto; quindi prendo l'intorno $\varepsilon = \frac{1}{n}$ posso individuare una successione $x_n$ $$\begin{gather}\varepsilon = \frac{1}{n} \implies\exists \bar{x} \in \mathcal{C}_{\mathbb{R}}E:\forall n, \ ]\bar{x}-\frac{1}{n}, \bar{x}+\frac{1}{n}[ \ \cap E \neq \emptyset \\ \forall n, \exists x_n \in E: |x_n - \bar{x} | < \frac{1}{n} \implies \lim_nx_n = \bar{x} \in \mathcal{C}_\mathbb{R}E\end{gather}$$Quindi ho trovato una successione $(x_n)_n$ a valori in $E$ che converge ad un punto *fuori di* $E$, che è impossibile in quanto violerebbe la l'ipotesi iniziale.
   **FIGURA 2.1.b.** (*La seconda contraddizione*)
   [DA FARE]
`\end{proof}`

##  Dimostrazione del teorema
Ora siamo pronti per dimostrare il *teorema di caratterizzazione dei compatti*.

#Dimostrazione 
`\begin{proof}`@[[#^759c9b]]
Questo è un teorema del tipo *se e solo se*, quindi dimostriamo entrambi i lati delle implicazioni.
1. "$\implies$": Suppongo che $E$ sia *compatto*, allora devo dimostrare che $E$ è chiuso è limitato.
   *Per assurdo* suppongo che $E$ non sia limitato: ora se considero una successione a valori in $E$ divergente, allora per ipotesi questa deve avere una sottosuccessione *convergente*. Per esempio se $E$ è *superiormente illimitato* ([[Insiemi limitati, maggioranti, massimo e teorema dell'estremo superiore]]) ho la seguente implicazione $$\forall n\in \mathbb{N}, \exists x_n \in E: x_n > n \implies \lim_n x_n = +\infty$$allora $(x_n)_n$ non avrebbe sottosuccessioni convergenti ad un punto in $E$.
   *Per assurdo* suppongo che $E$ sia non chiuso; allora non vale la proprietà $(\ast)$ del [[#^9c1b28]] ovvero $$\begin{gather}\neg [\forall (a_n)_n\text{ è convergente in }E ,  \lim_n a_n \in E]\\ \exists(a_n)_n \text{ convergente in }E : \lim_n a_n \not \in E\end{gather}$$Perciò *tutte* le sottosuccessioni di $(a_n)_n$ convergono ad un punto $\bar{a} \not \in E$.
   Però essendo $E$ per ipotesi *compatto*, la successione $(a_n)_n$ dovrebbe avere almeno una successione che converge ad un punto in $E$, dandoci un assurdo.
   Come si può vedere $E$ deve essere necessariamente sia *limitato* che *chiuso*.

2. "$\impliedby$": Sia $E$ *chiuso* e *limitato*, proviamo che $E$ è compatto.
   Prendo una successione $(a_n)_n$ in $E$.
   Se $E$ è *limitato* allora per il [[Secondo teorema di Bolzano-Weierstraß]] deve esistere una *sottosuccessione convergente* e la indichiamo con $$(a_{n_k})_k: \lim_k a_{n_k} = \bar{a}$$però $E$ è anche *chiuso*, e per la proprietà $(\ast)$ del **LEMMA 2.1.** deve valere che il valore per cui converge il limite della sottosuccessione appartiene a $E$; ovvero $$(a_{n_k})_k: \lim_k a_{n_k} = \bar{a} \in E$$
   Pertanto $E$ è compatto in quanto abbiamo individuato una sottosuccessione convergente ad un punto in $E$. 
`\end{proof}`
