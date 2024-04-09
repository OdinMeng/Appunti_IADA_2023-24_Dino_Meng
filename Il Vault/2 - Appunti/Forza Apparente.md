---
data: 2024-04-02
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Forza Apparente
tipologia: appunti
stato: "1"
capitolo: Dinamica
---
- - -
*Dinamica dei sistemi di riferimento non inerziali: caso lineare. Definizione di forza apparente. Esempio di forza apparente: il treno che accelera.*
- - -
# 0. Voci correlate
- [[Moti Relativi]]
- [[Definizione di Massa e di Forza]]
# 1. Sistemi di riferimento non inerziali
#Osservazione 
> [!rmk] richiami preliminari
> Facciamo dei brevi *richiami* ai *sistemi di riferimento* ([[Moti Relativi#^cc670c|1]]). Ci ricordiamo la seguente legge fondamentale per i sistemi di riferimento $A$ e $B$:
> $$
> \vec{r}_{PA}=\vec{r}_{PB}+\vec{r}_{BA}
> $$
> da cui segue
> $$
> \vec{v}_{PA}=\vec{v}_{BA}+\vec{v}_{PB}+\text{rot}_1
> $$
> dove $\text{rot}_1$ è una *variabile* per tenere conto delle *rotazioni*. Inoltre, da qui segue anche
> $$
> \vec{a}_{PA}=\vec{a}_{BA}+\vec{a}_{PB}+\text{rot}_2
> $$
> dove $\text{rot}_2$ è una *variabile analoga* a $\text{rot}_1$. Esempi di casi in cui bisogna tenere conto di queste variabili sono le seguenti: forza centrifuga e forza di Coriolis.
> 
> Adesso definiamo formalmente un *sistema di riferimento lineare non-inerziale*.

#Definizione 
> [!def] sistema di riferimento lineare non-inerziale
> Siano $A$ e $B$ dei sistemi di riferimento. Se vale che
> $$
> \vec{a}_{PB}=\vec{a}_{PA}+\vec{a}_{BA}
> $$
> con $\vec{a}_{BA} \neq 0$, allora si dice che $A$ è un *sistema di riferimento inerziale* e $B$ è un *sistema di riferimento non-inerziale*. In questo caso particolare diciamo che i sistemi di riferimento sono *lineari*, dato che $\text{rot}_2=0$.

# 2. Forza Apparente di un Sistema non-inerziale
#Osservazione 
> [!rmk] osservazione per la forza apparente
> Notiamo che dall'equazione
> $$
> \vec{a}_{PB}=\vec{a}_{PA}+\vec{a}_{BA}
> $$
> segue, per la *seconda legge di Newton* ([[Principi della Dinamica#^cbe22b|1]]), che
> $$
> \vec{F}_A=m\vec{a}_{PA}=m\vec{a}_{PB}+m\vec{a}_{BA}
> $$
> ovvero
> $$
> \vec{F}_B= m\vec{a}_{PB}=\vec{F}-m\vec{a}_{BA}
> $$

#Definizione 
> [!def] forza apparente
> Siano $A$ e $B$ dei *sistemi di riferimento lineari*, rispettivamente uno inerziale e l'altro non-inerziale. Allora la quantità
> $$
> \vec{F}=m\vec{a}_{BA}
> $$
> si dice *"forza apparente"*. Questo nome ci suggerisce infatti che si tratta di una forza *"apparente"* che rappresenta solamente un moto, ma non si tratta di una vera e propria forza.

# 3. Esempio del treno
#Esempio 
> [!exm] il pendolo nel treno
> Supponiamo che in un *treno*, che si sta accelerando un un'accelerazione $\vec{a}$, c'è un *oggetto* attaccato al *soffitto* con una *corda ideale* (*figura 3.1.*). 
> 
> Notiamo che quando il treno si accelera, l'oggetto si *muove indietro*. Come mai? Per scoprirlo, usiamo le nozioni appena apprese sulle *forze apparenti*.
> 
> Prima di tutto notiamo che dal *sistema di riferimento inerziale* (ovvero quello esterno), abbiamo che vale l'equazione
> $$
> \sum \vec{F}=\vec{T}+\vec{F}_g = m\vec{a}
> $$
> Poi per il *sistema di riferimento non-inerziale* (ovvero per il personaggio dentro il treno) abbiamo che l'oggetto è in *quiete*, ovvero
> $$
> \sum \vec{F}= 0 \implies \vec{F}+\vec{T}+\vec{F}_g = 0 \implies \vec{F} = -m\vec{a}
> $$
> allora vediamo che la *forza apparente* $\vec{F}$ è *negativa*, ovvero che spinge l'oggetto *indietro*.

**FIGURA 3.1.** (*Situazione iniziale*)
![[Pasted image 20240402203854.png]]
