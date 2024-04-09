---
data: 2024-02-08
corso:
  - "[[Analisi Matematica I]]"
  - "[[Analisi Matematica II]]"
argomento: Serie a Termini non negativi
tipologia: appunti
stato: "1"
capitolo: Serie Numeriche
---
- - -
*Definizione di serie a termini non negativi (o positivi); proprietà fondamentale delle serie a termini non negativi (o positivi); teorema dell'aut-aut per le serie a termini non negativi.*
- - -
# 0. Voci correlate
- [[Definizione di Serie]]
- [[Carattere di una Serie]]
# 1. Definizione di serie a termini non negativi
#Definizione 
> [!def] Serie a termini non negativi o positivi
> Sia
> $$
> \sum^{+\infty}_{n \in \mathbb{N}} a_n
> $$
> una serie, tale che $\forall n, a_n \geq 0$ (ovvero tutti i *termini della successione dei termini della serie sono positivi*), allora la serie si dice *a termini non negativi*. Parimenti, se invece si verifica $a_n > 0$, allora la serie si dice *a termini positivi*.

# 2. Proprietà fondamentale delle serie a termini non negativi
#Osservazione 
> [!rmk] Proprietà fondamentale delle serie a termini non negativi
> Osserviamo che se una serie è a *termini non negativi*, allora $(s_n)_n$ è sicuramente una successione *monotona crescente*. Questa proprietà sarà importante in quanto ci permetterà di enunciare il c.d. teorema dell'*aut-aut* per le serie a termini non negativi.
^fa4bf8

#Teorema 
> [!thm] dell'aut-aut per le serie a termini non negativi
> Sia 
> $$
> \sum^{+\infty}_{n \in \mathbb N} a_n
> $$
> una *serie* a termini non negativi, allora la serie o *è divergente* o *è convergente*, come suggerirebbe il termine Kierkegaardiano *"Aut-Aut"* ([approfondimenti sull'Aut-Aut di S. Kierkegaard](https://it.wikipedia.org/wiki/Aut-Aut_(Kierkegaard))].
^74d49b

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^74d49b]].
La dimostrazione è semplice, basta prendere *l'osservazione 2* ([vedere sopra](#^fa4bf8)) e applicare il *teorema dei limiti per le successioni monotone* ([[Limite di Successione#^b438ed]]), per cui se una successione è *monotona* (in particolare $(s_n)_n$), allora il suo limite deve *esistere*.
Pertanto se esiste il limite
$$
\lim_n s_n = s \in \tilde{\mathbb{R}}
$$
allora la serie non può essere indeterminata, per definizione. $\blacksquare$