---
data: 2024-05-15
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Legge dei Grandi Numeri
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Assolutamente Continue
---
- - -
*Definizione preliminare: media campionaria su un esperimento. Definizione: successione di variabili aleatorie che soddisfa la legge (debole) dei grandi numeri. Teorema: condizione sufficiente per la legge dei grandi numeri.*
- - -
# 0. Voci correlate
- [[Proprietà della Varianza]]
- [[Definizione di Variabile Aleatoria]]
# 1. Definizione di Media Campionaria
#Definizione 
> [!def] media campionaria di una sequenza di variabili aleatorie
> Siano $X_1, \ldots, X_N$ delle *variabili aleatorie* su uno medesimo spazio di probabilità $(\Omega, \mathcal A, p)$. 
> 
> Si dice la sua *media campionaria* come la variabile aleatoria
> $$
> \overline{X\ }=\frac{1}{N}\sum_{k=1}^N X_k
> $$

^fa1850

#Osservazione 
> [!rmk] proprietà immediate
> Notiamo che $\overline{X \ }$ rimane una *variabile aleatoria*, dato che una *somma di variabili aleatorie* rimane una *variabile aleatoria* ([[Variabile Aleatoria Assolutamente Continua#^edc8f8]]).

#Osservazione 
> [!rmk] l'idea
> L'idea di questa definizione è di dare una definizione ben posta di *"set di esperimenti"*: intuitivamente abbiamo che con l'aumentare di $N \to +\infty$, ci sono *meno fluttuazioni* di $\overline{X \ }$. Ovvero più esperimenti facciamo, meno errori abbiamo. Formalizziamo ciò detto con la *legge di grandi numeri*.

# 2. Legge debole dei Grandi Numeri
#Definizione 
> [!def] legge debole dei grandi numeri
> Una *successione di variabili aleatorie* $(X_n)_n$ su uno stesso spazio di probabilità, tutte con lo *stesso valore medio* $E[X_n]=\mu$, si dice che *soddisfa le legge (debole) dei grandi numeri* se vale che
> $$
> \forall \varepsilon>0, \lim_n p\left\{|\overline{X}_n-\mu|>\varepsilon \right\}=0
> $$
> Ovvero con l'aumentare di $n$, l'errore sulla *media campionaria* tende a $0$ e tende a concentrarsi sulla media $\mu$.
> 
> Alternativamente, ponendo $Z_n = \overline{X}_n - \mu$ la *"variabile aleatorie errore"*, si ha
> $$
> \forall \varepsilon>0, \lim_n p\left\{|\overline{Z}_n|>\varepsilon \right\}=0
> $$

^8b66a0

# 3. Condizione Sufficiente per la Legge dei Grandi Numeri
Vogliamo trovare delle ipotesi su $(X_n)_n$ affinché la *legge dei grandi numeri* sia soddisfatta. Vediamo un esempio

#Teorema 
> [!thm] condizione sufficiente per la legge dei grandi numeri
> Sia $(X_n)_n$ una successione di variabili aleatorie, tali che:
> - Hanno *momento secondo finito*
> - Sono *scorrelate*
> - Hanno lo *stesso valor medio* e la *stessa varianza*
> 
> $$
> \forall n\neq k\in \mathbb N:
> \begin{gather}
> E[X_n]=\mu\\ \operatorname{var}{X_n}=\sigma^2 \\
> \operatorname{cov}{(X_n, X_k)}=0
> \end{gather}
> $$
> 
> Allora $(X_n)_n$ soddisfa la legge dei grandi numeri.
^f6f2b0

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^f6f2b0]]
Si dimostra tramite la disuguaglianza di *Čebyšëv* ([[Proprietà della Varianza#^4a710c]]). Per usarla, calcoliamo prima la varianza di $\overline {X}_n$.
$$
\operatorname{var}{\overline{X} }_n=\operatorname{var}{\left(\frac{1}{n}\sum_n X_n\right)}=\frac{1}{n^2}\sum_{k=1}^n \operatorname{var}{X_k}=\frac{n\sigma^2}{n^2}=\frac{\sigma^2}{n}
$$
Inoltre la sua media $E[\overline{X}_n]=\mu$ (per la linearità). Adesso possiamo finalmente usare *Čebyšëv*, dandoci
$$
0 \leq p\left\{|\overline{X}_n +\mu|>\varepsilon\right\}\leq \frac{\operatorname{var}{\overline{X}_n} }{\varepsilon^2}= \frac{\sigma^2}{n \varepsilon^2}
$$
Per $n \to +\infty$, abbiamo $\varepsilon \to 0$, da cui si ha la tesi (per il teorema dei due carabinieri). $\blacksquare$

#Osservazione 
> [!rmk] ipotesi alternative
> Notiamo che potevamo *"modificare"* delle ipotesi per rendere comunque valido il teorema. 
> - Invece di richiedere che si ha la *stessa varianza*, bastava richiedere che sono *tutte equilimiatate*; ovvero
> $$
> \sup_k\sigma_k^2 < +\infty
> $$
> - Si può richiedere che *abbiano solo valor medio finito* se $X_k$ hanno la *stessa distribuzione* e sono *indipendenti* (dunque scorrelate).
> 
> Si può fare questo dato che il punto della dimostrazione consiste nel fatto che la *media campionaria* ha la stessa media, ma la sua varianza è più piccola delle $X_k$ ed è *infinitesima* per $n$.

