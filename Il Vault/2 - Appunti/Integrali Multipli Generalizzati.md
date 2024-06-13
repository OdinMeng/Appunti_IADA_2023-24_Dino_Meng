---
data: 2024-06-04
corso:
  - "[[Analisi Matematica II]]"
argomento: Integrali Generalizzati in più Variabili
tipologia: appunti
stato: "1"
capitolo: Calcolo Integrale in più Variabili
---
- - -
*Integrali multipli nel senso generalizzato: definizione di una funzione localmente integrabile su un insieme localmente misurabile. Definizione di successione di insiemi invadente un insieme e adatta ad una funzione. Definizione di funzione integrabile nel senso generalizzato.*
- - -
# 0. Voci correlate
- [[Funzione Integrabile in Senso Generalizzato]]
- [[Funzioni Localmente Integrabili]]
# 1. Nomenclatura preliminare
#Definizione 
> [!def] funzione localmente integrabile, successione di insiemi invadente e adatta
> Una funzione $f$ si dice *localmente integrabile* su $J$, che a sua volta è *localmente misurabile* in $\mathbb{R}^N$ se *esiste* una *successione di insiemi* $(A_n)_n$ tale che:
> i. *Misurabilità:* $A_n \in \mathcal{M}(\mathbb{R}^N)$
> ii. *Crescenza limitata:* $A_n \subseteq A_{n+1} \subseteq J$
> iii. *Il limite della misura dello scarto è nullo:*
> $$
> \forall \mathcal{M}(\mathbb{R}^2) \ni E \subseteq J ,  \lim_n m_N(E \diagdown A_n)=0
> $$
> iv. *La funzione è Riemann-integrabile su un termine della successione:* 
> $$
> f_{|A_n} \in \mathcal{R}(A_n)
> $$
> Inoltre una *successione di insiemi* $(A_n)_n$ che rispetta le condizioni sopra, si dice *"invadente $J$"* e *"adatta a $f$"*.

# 2. Integrale generalizzato
#Definizione 
> [!def] funzione integrabile nel senso generalizzato
> Sia $f: J \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ *localmente integrabile* su $J$ *localmente misurabile*. Sia inoltre $f(x \in J)\geq 0$. Sia $(A_n)_n$ una *successione di insiemi* invadente $J$ e adatta ad $f$.
>  
> Allora si dice che $f$ è *integrabile nel senso generalizzato su $J$* se esiste ed è *finito* il limite
> $$
> \lim_n \int_{A_n} f
> $$
> In tal caso, si pone
> $$
> \int_J f := \lim_n \int_{A_n}f
> $$
