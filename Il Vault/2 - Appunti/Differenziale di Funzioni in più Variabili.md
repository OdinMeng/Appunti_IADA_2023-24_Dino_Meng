---
data: 2024-04-15
corso:
  - "[[Analisi Matematica II]]"
argomento: Differenziale di Funzioni in più Variabili
tipologia: appunti
stato: "1"
capitolo: Calcolo Differenziale Multivariata
---
- - -
*Generalizzazione delle nozioni di differenziabilità e differenziale di campi scalari a funzioni in più variabili. Definizione di derivata di Frèchet. Osservazione: non abbiamo singole equazioni, ma sistemi. Teorema: equazione equivalente per la differenziabilità di funzioni in più variabili.*
- - -
# 0. Voci correlate
- [[Differenziale di Campi Scalari]]
- [[Sistemi Lineari]]
- [[Teorema di Riesz]]
# 1. Generalizzazione di Differenziabilità
**Generalizzazione.** Fino ad ora abbiamo definito le nozioni di *differenziabilità* e *differenziali* per *campi scalari* ([[Differenziale di Campi Scalari#^aabe21|1]]), ovvero funzioni del tipo $f:\mathbb{R}^N \longrightarrow \mathbb{R}$. Adesso vogliamo generalizzare queste stesse nozioni a *funzioni in più variabili* ([[Definizione di Funzione in più variabili|2]]), ovvero funzioni del tipo $f:\mathbb{R}^N \longrightarrow \mathbb{R}^M$. Per fare ciò useremo in particolare le nostre conoscenze sui *sistemi lineari* ([[Sistemi Lineari#^6f6520|3]]).

#Definizione 
> [!def] differenziabilità di funzioni in più variabili e derivata di Frèchet
> Si dice che una funzione $f:A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}^M$ è *differenziabile nel punto* $\underline{x_0} \in A$, con $A$ *aperto*, se esiste un'operatore lineare $L \in \mathcal{L}(\mathbb{R}^N, \mathbb{R}^M)$ tale che vale
> $$
> f(\underline{x})=f(\underline{x_0})+L(\underline x - \underline{x_0})+o(\lVert \underline{x}-\underline{x_0 \rVert})
> $$
> 
> L'operatore $L$ si dice *"differenziale"*, oppure *"derivata di Frèchet"* di $f$ in $\underline{x_0}$.

^0791fa

# 2. Osservazione con i sistemi lineari
#Osservazione 
> [!rmk] ho sistemi lineari
> Osserviamo che con l'equazione
> $$
> f(\underline{x})=f(\underline{x_0})+L(\underline x - \underline{x_0})+o(\lVert \underline{x}-\underline{x_0 \rVert})
> $$
> Ho precisamente dei *sistemi lineari*, dal momento la funzione $f$ si divide nelle sue singole componenti $f_1, \ldots, f_M$. Di conseguenza, per usare il *teorema di Riesz* ([[Teorema di Riesz#^a9143c|1]]) per trovare un rappresentante di $L$, devo usare una matrice.
> 
> Infatti, fissata una base $\mathcal{B}$ su $\mathbb{R}^N$ e un'altra base $\mathcal{C}$ su $\mathbb{R}^M$, ho il seguente:
> $$
> \forall L \in \mathcal{L}(\mathbb{R}^N, \mathbb{R}^M), \exists! A \in M_{m,n}(\mathbb{R}): L(\underline{h})=A \cdot \underline{h}
> $$
> Ovvero l'operatore è rappresentato dalla moltiplicazione riga per colonna di $A \cdot \underline{h}$.

^048e55

# 3. Condizione Equivalente 
**Giustificazione.** Vogliamo trovare delle *condizioni equivalenti* per la differenziabilità di funzioni in più variabili; in particolare delle condizioni che *leghino* le nozioni appena apprese sulla *differenziabilità di funzioni in più variabili* con le sue *singole componenti*, che sono dei *campi scalari*. Enunciamo il seguente teorema.

#Teorema 
> [!thm] condizione equivalente per la differenziabilità di funzioni in più variabili
> Sia $f:A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}^M$. Sono equivalenti:
> i. $f$ è *differenziabile* in $\underline{x_0}$
> se e solo se
> ii. Ogni componente $f_i: A' \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ è *differenziabile* in $\underline{x_0}$, per $\forall i \in \{1, \ldots, M\}$.
^9c2e42

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^9c2e42]].
Questo teorema si basa sul fatto che la funzione $f$ stessa è *definibile* mediante le sue singole componenti $f_1, \ldots, f_M$, quindi omessa. $\blacksquare$
