---
data: 2024-05-01
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Densità associate a Vettori Aleatori
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Discrete
---
- - -
*Definizione generalizzata di distribuzione su vettori aleatori. Definizione di densità su vettori aleatori discreti. Proprietà delle densità.*
- - -
# 0. Voci correlate
- [[Introduzione ai Vettori Aleatori]]
- [[Definizione di Distribuzione]]
# 1. Generalizzazione sulla Distribuzione e Densità
**Generalizzazione.** Come abbiamo definito la *distribuzione* e la *densità* su *variabili aleatorie*, possiamo definire la *distribuzione* e *densità* per *vettori aleatori*. Ovvero

#Definizione 
> [!def] distribuzione e densità su vettori aleatori
> Sia $X : \Omega \longrightarrow \mathbb{R}^N$ e $E \in \mathcal{B}(\mathbb{R}^M)$. Sicuramente si ha $X$ vettore aleatorio. 
> Dunque ha senso considerare
> $$
> p_x(E):=P(\{X \in E\})
> $$
> e lo chiameremo *distribuzione*, oppure *densità* nel caso discreto come segue:
> $$
> q(x):=p(\{X=x\})
> $$

# 2. Proprietà delle Densità Aleatorie
Come fatto per le *densità* sul caso scalare, enunciamo delle proprietà ([[Densità associate a Variabili Aleatorie Discrete#^88759e|1]]).

#Proposizione 
> [!prp] proprietà delle densità aleatorie
> Sia $q$ una densità associata ad un vettore aleatorio $X$. Allora valgono che:
> $$
> q(x)=0, x \in \mathbb{R}^N: x \not \in X(\Omega)
> $$
> poi
> $$
> \sum_{x \in X(\Omega)}q(x)=1
> $$
> e infine
> $$
> \boxed{p_x(E)=p\{X \in E\}=\sum_{x \in E}q(x)}
> $$
> ovvero la *densità* identifica la *probabilità sul boreliano $E$*.

**FIGURA 2.1.** (*L'idea della proprietà 2*)
![[Pasted image 20240501215710.png]]