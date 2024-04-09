---
data: 2024-03-05
corso:
  - "[[Analisi Matematica II]]"
argomento: Funzioni Localmente Integrabili
tipologia: appunti
stato: "1"
capitolo: Fondamenta degli Integrali Generalizzati
---
- - -
*Scopo degli integrali generalizzati. Definizione di funzioni localmente integrabili.*
- - -
# 0. Preambolo
#Osservazione 
> [!rmk] lo scopo degli integrali generalizzati (o impropri)
> Sappiamo che gli *integrali di Riemann* ([[Integrabilità secondo Riemann#^5455b8]]) sono solitamente definite su *funzioni limitate* e su *insiemi compatti*. Noi vogliamo quindi estendere questi integrali ad una *classe di funzioni* più ampia: definiamo quindi le *funzioni localmente integrabili* su un intervallo e alla fine studieremo gli *integrali indefiniti*.

# 1. Definizione di funzione localmente integrabile
#Definizione 
> [!def] funzione localmente integrabile su un intervallo
> Sia $J\subseteq \mathbb R$ un intervallo arbitrario (ovvero può essere *chiuso*, *aperto*, *semichiuso* o *semiaperto*).
> Una funzione $f: J \longrightarrow \mathbb{R}$ si dice *localmente integrabile su* $J$ se $f$ è integrabile su ogni intervallo compatto $\forall K \subseteq J$.

#Esempio 
> [!exm] esempio immediato
> Un esempio immediato è quello delle funzioni continue e monotone su $J$.

#Osservazione 
> [!rmk] le funzioni localmente integrabili sono continue
> Osserviamo che ponendo $f: J \longrightarrow \mathbb{R}$ e $c \in J$ e definendo l'*Integralfunktion* ([[Funzione Integrale#^4a5cb4]]) come
> $$
> F(x)=\int_c^x f(t) \ \text{d}t
> $$
> vediamo che $F(x)$ è una funzione *continua* su $J$. Per una dimostrazione di questa proposizione, basta considerare che una qualsiasi integral-funzione è lipschitziana, dunque continua ([[Funzione Integrale#^7e839c]]). Di conseguenza vale il seguente:
> $$
> \forall d \in J, \lim_{x \to d}\int_c^x f(t) \ \text{d}t = \lim_{x \to d}F(x) = F(d) = \int_c^d f(t) \ \text{d}t
> $$
> Con le *funzioni integrabili in senso generalizzato* vedremo di estendere questa nozione anche ai punti *non* appartenenti all'intervallo $J$, purché questi punti siano *punti di accumulazione* per $J$ ([[Funzione Integrabile in Senso Generalizzato]])).
