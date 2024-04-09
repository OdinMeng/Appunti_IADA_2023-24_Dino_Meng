---
data: 2024-03-28
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Formula di Bayes
tipologia: appunti
stato: "1"
capitolo: Nozioni preliminari per la Probabilità
---
- - -
*Formula di Bayes (tre versioni): enunciato, dimostrazione. Interpretazione della terza versione. Osservazione sul test del COVID-19: quello che conta è il rapporto di probabilità condizionali su probabilità generali.*
- - -
# 0. Voci correlate
- [[Probabilità Condizionale]]
# 1. Formula di Bayes
#Teorema 
> [!thm] formula di Bayes
> Sia $(\Omega, \mathcal{A}, p)$ uno *spazio di probabilità*, e siano $A,B$ degli eventi.
> Allora valgono le seguenti formule.
> i. *Formula di Bayes*
> $$
> p(B|A)=\frac{p(A|B)p(B)}{p(A)}
> $$
> ii. *Formula di Bayes per le dicotomie* 
> $$
> p(A),p(B)>0\implies p(B|A)=\frac{p(A|B)p(B)}{p(A|B)p(B)+p(A|\mathcal{C}B)p(\mathcal{C}B)}
> $$
^b06f08

#Corollario 
> [!cor] formula delle probabilità delle cause
> Sia $(\Omega, \mathcal{A}, p)$ uno *spazio di probabilità*, e sia $(B_n)_{n \in N}$ una *partizione* di $\Omega$, tale che $p(B_n)>0, \forall n$.
> Allora vale che
> $$
> p(B_i|A)=\frac{p(A|B_i)p(B_i)}{p(A)}=\frac{p(A|B_i)p(B_i)}{\sum_{n \in N}p(A|B_n)p(B_n)}
> $$
^3db3cb

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^b06f08]].
Basta osservare che, per definizione, ho
$$
p(B|A)p(A)=p(A \cap B)=p(B \cap A)=p(A|B)p(B)
$$
da cui posso ricavare la tesi. $\blacksquare$

#Osservazione 
> [!rmk] interpretazione della formula di Bayes
> Prendendo la *terza versione della formula di Bayes* (ovvero [[#^3db3cb]]), posso interpretare gli eventi della partizione $(B_n)_n$ come le *"cause"* al verificarsi dell'evento $A$. Quindi, la formula enunciata ci permette di calcolare che, quando ho l'evento $A$, è stato proprio l'evento $B_i$ a causare.

# 2. Osservazione sulla formula di Bayes
#Osservazione 
> [!rmk] osservazione sull'importanza dei valori
> Osserviamo una caratteristica dedotta dalla *formula di Bayes*.
> 
> Dalla formula abbiamo
> $$
> p(B|A)=\frac{p(A|B)p(B)}{p(A|B)p(B)+p(A|\mathcal{C}B)p(\mathcal{C}B)}
> $$
> da cui discende, per valori di $p(B)$ non nulli,
> $$
> p(B|A)=\frac{p(A|B)}{p(A|B)+\frac{p(A|\mathcal C B)}{p(B)}p(\mathcal{C}B)}
> $$
> Notiamo che il valore $p(B|A)$ tende a $1$ per valori più piccoli di
> $$
> \rho=\frac{p(A|\mathcal{C}B)}{p(B)}
> $$
> che sarebbe il rapporto tra la probabilità di avere *un'evento $A$ che non* sia causato da $B$ e la probabilità di $B$.
> Al contrario, il valore $p(B|A)$ tende a scendere per valori di $\rho$ più grandi.
> 
> Infine, possiamo interpretare questo valore $\rho$ come *"una costante di proporzionalità per la conversione da $p(A|B)$ a $p(B|A)$"*

#Osservazione 
> [!rmk] esempio del test di SARS-COVID19
> Applichiamo quest'osservazione con un esempio.
> 
> Supponiamo di avere un test clinico per determinare la presenza della presenza del *coronavirus*. Etichettiamo $A$ come gli eventi per cui ho un *paziente positivo al test* e $B$ come gli eventi per cui ho *un paziente effettivamente malato*.
> 
> Facciamo finta di sapere che il *test risulta positivo* al $99\%$ col *virus presente*, e il *test risulta positivo* al $2\%$ col *virus assente* (ovvero i falsi positivi). Inoltre, la probabilità di *beccarsi il virus* è di $0.2\%$ 
> Questo sembra un buon test, no? Vediamo
> 
> Traducendoli nel nostro linguaggio, abbiamo
> $$
> p(A|B)=0.99, p(A|\mathcal{C}B)=0.02, p(B)=0.002
> $$
> Adesso, per ricavare la *probabilità di avere un malato effettivo da un test positivo*, usiamo l'osservazione appena ricavata:
> $$
> p(B|A)=\frac{0.99}{0.99+\frac{0.02}{0.002}0.998 } = 0.09 \approx 9\%
> $$
> Accipicchia! Ma cos'è successo? Abbiamo solo la probabilità del $9\%$ per determinare se un paziente è *effettivamente malato* da un *test positivo*?
> 
> Infatti, analizzando la situazione, vediamo che il valore $\rho$ è *molto grande*, ovvero
> $$
> \rho=10
> $$
> che *"porta giù"* il valore $p(B|A)$.
> 
> Quindi, se volessimo un *buon risultato*, dovremmo avere dei valori $p(A|\mathcal{C}B)$ (ovvero la probabilità dei falsi positivi) *molto più piccoli* rispetto a $p(B)$.
> $$
> p(A|\mathcal{C}B)  \ll p(B) \sim \rho < 1
> $$


