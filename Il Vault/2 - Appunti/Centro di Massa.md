---
data: 2024-04-22
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Centro di Massa
tipologia: appunti
stato: "1"
capitolo: Energia e Quantità di Moto
---
- - -
*Definizione matematica di centro di massa di un sistema di punti. Cinematica e dinamica del centro di massa.*
- - -
# 0. Voci correlate
- [[Sistema e Ambiente]]
- ... (media ponderata DA INSERIRE; collegamento con probabilità) #TODO
- [[Velocità e Accelerazione di un Corpo Puntiforme]]
- [[Principi della Dinamica]]
# 1. Definizione di Centro di Massa
Tappiamo uno dei buchi lasciati da noi sulla fisica.

#Definizione 
> [!def] centro di massa di un sistema di punti
> Sia $\Sigma$ un sistema di punti con le distanze dall'origine $\vec{r}_i$ associate ad ogni punto. Sia $M$ la *massa totale del sistema* (ovvero la sommatoria delle masse).
> 
> Si definisce il *centro di massa* come quel *punto dall'origine* definito come
> $$
> \boxed{\vec{r}_{CM}:=\sum_{i \in \Sigma}\frac{m_i}{M}\vec{r}_i}
> $$
> Statisticamente questo coincide col concetto della *"media ponderata delle masse"*.
> 
> Geometricamente si ha che il *centro di massa* $\vec{r}_{CM}$ si trova *sempre* nel *poligono* delineato dai punti del sistema.

**FIGURA 1.1.** (*Intuizione geometrica*)
![[Pasted image 20240422220658.png]]

# 2. Cinematica e Dinamica del Centro di Massa
Avendo definito il *centro di massa* come una distanza $\vec{r}$, possiamo giostrarlo a piacimento prendendone le derivate e simile.

#Teorema 
> [!thm] la cinematica e la quantità di moto del centro di massa
> Segue che la *velocità del centro di massa* coincide con
> $$
> \boxed{\vec{v}_{CM}=\sum_{i \in \Sigma}\frac{\vec{p}_i}{M} }
> $$
> ovvero abbiamo
> $$
> \boxed{\vec{p}_{\Sigma}=M \vec{v}_{CM} }
> $$

^210545

#Teorema 
> [!thm] la dinamica del centro di massa
> Considerando invece la sua *accelerazione* abbiamo la forza
> $$
> \vec{a}_{CM}=\sum_{i \in \Sigma}\frac{m_i\vec{a}_i}{M}=\frac{1}{M}\sum_{i \in \Sigma}\vec{F}_i
> $$
> ovvero ho che la *sommatoria delle forze esterne* coincide con
> $$
> \boxed{M\vec{a}_{CM}=\sum_{i \in \Sigma}\vec{F}_{\text{ext.}, i}=\sum_{i \in \Sigma}\frac{\text{d} }{\text{d}t}m\vec{v}_i }
> $$
^30ede8

**CONSEGUENZE.** Come conseguenza della *dinamica e cinematica del centro di massa* ([[#^30ede8|1]], [[#^210545|2]]) noto che prendendo un *oggetto complesso* (come ad esempio una chiave inglese) e considerandolo come un *sistema di punti*, ho che il suo *centro di massa* segue perfettamente la *traiettoria* di un punto.
![[2 1.png]]
Questo ci è utile per *trattare* oggetti come dei *materiali puntiformi*!
