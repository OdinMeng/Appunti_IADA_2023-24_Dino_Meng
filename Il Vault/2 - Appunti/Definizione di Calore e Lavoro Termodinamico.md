---
data: 2024-05-14
corso:
  - "[[Introduzione alla Fisica]]"
  - d
argomento: Definizione di Calore e Lavoro Termodinamico
tipologia: appunti
stato: "1"
capitolo: Termodinamica
---
- - -
*Definizione di calore e lavoro dal punto di vista termodinamico. Definizione analogico. Definizione precisa del lavoro termodinamico.*
- - -
# 0. Voci correlate
- [[Definizione di Lavoro]]
# 1. Definizione Analogica tra Calore e Lavoro
#Definizione 
> [!def] calore e lavoro
> Si definiscono il *calore* e il *lavoro* come la quantità di *energia trasferita* tra sistemi. In particolare:
> - Il *calore* è la *quantità di energia trasferita* tra *sistema e ambiente* (o tra *due sistemi*) a causa di una variazione nella *temperatura*
> - Il *lavoro* è la *quantità di energia trasferita* tra *sistema e ambiente*, dovuto a *cambiamenti di parametri esterni* (come il volume, la pressione, eccetera...).
> 
> A livello fondamentale, vedremo che il *calore* è la *"energia inutile e inutilizzabile"*, d'altro canto il *lavoro* è quella *"utile e trasferibile"*.

# 2. Definizione di Lavoro Termodinamico
Vediamo di derivare il *lavoro* dal punto di vista termodinamico, richiamandoci alla definizione classica del lavoro ([[Definizione di Lavoro#^5bf065]])
$$
W:=\int_i^f \vec{F} \cdot \text{d}\vec{x}
$$
ovvero l'integrale della forza usata per compiere uno spostamento. Adesso, nel *contesto della termodinamica* consideriamo un pistone che si muove in alto, dovuto alla pressione del gas.
![[Pasted image 20240514211523.png|500]]
Osservo che abbiamo: la forza $\vec{F}$ che spinge verso l'*alto*, uno spostamento $\text{d}\vec{x}$, e una variazione di volume $\text{d}V$. Inoltre c'è anche la pressione nel gas, che è invariata. Poiché gli spostamenti sono tutti concordi, possiamo considerare tutto come dei scalari positivi.
Allora per definizione di *pressione* ([[Definizione di Pressione Macroscopica#^0ed401]]) si ha
$$
F = PA
$$
Adesso, per avere qualcosa che ci *"ricordi dell'integrale"*, consideriamo che lo spostamento $\text{d}x$ è proporzionale al cambiamento di volume $\text{d}V$. Per rendere tutto giusto, lo dividiamo per l'area.
$$
\text{d}x=\frac{\text{d}V }{A}
$$
Adesso moltiplico da ambo i lato per $\text{d}x$
$$
F \cdot \text{d}x = PA \cdot \frac{\text{d}V}{A}=P \cdot \text{d}V
$$
Infine integro da ambo i lati, ottenendo
$$
W=\int P \ \text{dV}
$$
Abbiamo due scelte per il *segno dell'integrale*: se consideriamo il *lavoro compiuto sul gas*, è *negativo*. Se invece è compiuto sull'*ambiente*, è *positivo*. Adesso siamo pronti per definire tutto

#Definizione 
> [!def] lavoro termodinamico
> Si definisce il *lavoro compiuto sul gas in un sistema termodinamico* come l'integrale
> $$
> W:=-\int P \text{ d}V
> $$
