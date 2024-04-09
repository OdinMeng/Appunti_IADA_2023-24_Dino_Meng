---
data: 2024-03-22
corso:
  - "[[Analisi Matematica II]]"
argomento: Teoremi di Passaggio del Limite per le Serie di Funzioni
tipologia: appunti
stato: "1"
capitolo: Successioni e Serie di Funzioni
---
- - -
*Teoremi di passaggio al limite per le serie di funzioni: derivata di una serie, integrale di una serie e una serie di funzioni continue.*
- - -
# 0. Voci correlate
- [[Teoremi di Passaggio del Limite per le Successioni di Funzioni]]
- [[Definizioni Relative alle Serie di Funzioni]]
# 1. Teoremi di Passaggio del Limite per le Serie Funzionali
#Osservazione 
> [!rmk] possiamo trasporre altre conoscenze
> Conoscendo i *teoremi di passaggio del limite per le successioni di funzioni* ([[Teoremi di Passaggio del Limite per le Successioni di Funzioni]]), possiamo applicare queste conoscenze sulle *serie di funzioni*. 

#Teorema 
> [!thm] derivata di una serie
> Sia $(f_n)_n$ una *successione di funzioni* con il termine generale $f_n: (a,b) \longrightarrow \mathbb{R}$ *derivabile sul dominio*. Se valgono che:
> i. La serie delle derivate $\sum_n f'_n(x)$ è *uniformemente convergente nel dominio* con *somma* $G(t)$
> ii. La serie delle funzioni generali $\sum_n f_n(x)$ è *convergente almeno in un punto* $t_0 \in (a,b)$,
> allora anche la serie $\sum_n f_n(x)$ è *uniformemente convergente* in $(a,b)$, detta $F(t)$ la sua somma, risulta che $F$ è *derivabile* e si ha $F'(t)=G(t)$. In altre parole, possiamo effettuare lo *"scambio"*
> $$
> \left(\sum^{+\infty}_{n=1}f_n(x)\right)' = \sum^{+\infty}_{n=1}f'_n(x)
> $$

#Teorema 
> [!thm] l'integrale di una serie
> Sia data $(f_n)_n$ una *serie di funzioni* tali che il termine generale $f_n$ sia *limitata* e *integrabile in* $[a,b]$.
> Se $\sum_n f_n(t)$ è *convergente uniformemente* in $[a,b]$ con somma $F(t)$, allora vale che $F$ è *integrabile secondo Riemann* in $[a,b]$ e risulta
> $$
> \int_a^b \sum^{+\infty}_{n=1}f_n(t)\ \text{d}t = \sum^{+\infty}_{n=1}\int_a^b f_n(t) \ \text{d}t
> $$

#Teorema 
> [!thm] la continuità di una serie
> Sia $(f_n)_n$ una *serie di funzioni continue* sull'intervallo $I$. Se vale che:
> i. $\sum_n f_n(t)$ converge uniformemente con somma $f:I \longrightarrow \mathbb{R}$
> Allora $f$ è *continua su $I$*.
