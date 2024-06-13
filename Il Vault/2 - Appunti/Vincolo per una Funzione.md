---
data: 2024-05-07
corso:
  - "[[Analisi Matematica II]]"
argomento: Vincolo per una Funzione
tipologia: appunti
stato: "1"
capitolo: Ottimizzazione in più variabili
---
- - -
*Definizione di vincolo per una funzione (campo scalare). Definizione di estremo vincolato di una funzione in un vincolo.*
- - -
# 0. Voci correlate
- [[Definizione di Estremo per una Funzione in più variabili]]
# 1. Definizione di Vincolo
Prima di poter parlare di *ottimizzazione vincolata*, parliamo (giustamente) di cosa intendiamo per un *"vincolo"*

#Definizione 
> [!def] vincolo per una funzione
> Sia $f:E \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ un *campo scalare*. Un insieme $V \subset E$ si dice *"vincolo di $E$ per $f$* se soddisfa
> $$
> V \neq \emptyset, V \neq E
> $$
> Ovvero il *vincolo* dev'essere una *"parte selezionata"* di $E$.

#Osservazione 
> [!rmk] caso comune
> Di solito come *vincolo* poniamo delle *curve* o *superfici*, che vengono espresse come funzioni $\gamma$ o superfici $\sigma$, poi per considerare i loro sostegni $\Gamma, \Sigma$.

# 2. Definizione di Estremo Vincolato
#Definizione 
> [!def] estremo vincolato per una funzione
> Sia $f: E \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ un *campo scalare* e $V$ un suo *vincolo*.
> 
> Un punto $\underline{x_0} \in V$ si dice *"estremo vincolato per $f$ in $V$"* se vale che $\underline{x_0}$ è un *punto estremo* ([[Definizione di Estremo per una Funzione in più variabili#^96861f|1]]) di $f_{|V}$ (ovvero *"$f$ ristretta in $V$"*).

Notiamo che non c'è nessuna relazione tra *estremi vincolati* e *punti estremi* (ovvero di $\max,\min$) per $f$ vista *"globalmente"*. Come obbiettivo di questa sezione ci poniamo quello di *sviluppare* teoremi che ci diano delle *condizioni necessarie* per l'esistenza di punti vincolati, in tal modo da poter capirne la loro natura.
