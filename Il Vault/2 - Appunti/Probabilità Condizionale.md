---
data: 2024-03-17
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Probabilità Condizionale
tipologia: appunti
stato: "1"
capitolo: Nozioni preliminari per la Probabilità
---
- - -
*Probabilità condizionale. Esempio preliminare, definizione di probabilità condizionale, osservazioni sulla probabilità condizionale, indipendenza di due eventi. Regola della catena. Esempio concreto di modello probabilistico con probabilità condizionali.*
- - -
# 1. Osservazione preliminare
#Osservazione 
> [!rmk] la probabilità può cambiare al variare di informazioni disponibili
> Consideriamo un'urna con *dieci palline* numerate da 1 a 10. Qual è la probabilità che, estraendo una pallina, si ha una pallina con un numero *minore o uguale* di 5? Ovviamente è $0.5$, dato che $p(A) = 5/10=0.5$. Infatti, $\Omega = \{1,2,3,4,5,6,7,8,10\}$ e $A = \{1,2,3,4,5\}$.
> 
> Adesso cambiamo le cose: supponiamo ora di sapere a priori (tramite un insider) che il numero sarà *sicuramente pari*. Ma allora quale sarà la probabilità di avere un numero *minore o uguale di 5*? Qui le cose cambiano, dato che dobbiamo *cambiare lo spazio campionario* a $\Omega' = \{2,4,6,8,10\}$ e prendiamo l'insieme $A' = \{\omega' \in \Omega': \omega \leq 5\}$. Quindi la probabilità *è scesa* a $\tilde{p}(A')= 2/5$.
> 
> Si osserva in particolare che $A' = A \cap \Omega'$ e vale la relazione
> $$
> \tilde{p}(C)=\frac{|A \cap \Omega'|}{|\Omega'|} = \frac{p(A \cap \Omega')}{p(\Omega')}
> $$
> Vedremo di *definire rigorosamente* questo concetto.

# 2. Definizione di Probabilità Condizionale
#Definizione 
> [!def] probabilità condizionale
> Siano $A, B$ due *eventi* in uno *spazio di probabilità* $(\Omega, \mathcal{A}, p)$ con $p(B)>0$.
> Chiamiamo la *"probabilità condizionale di $A$ dato $B$"* la quantità definibile come
> $$
> \boxed{p(A|B) := \frac{p(A \cap B)}{p(B)}}
> $$
> Notare che $A|B$ *non ha nessun significato* ed è solo un modo per esprimere *"evento $A$ dato $B$"*.

#Osservazione 
> [!rmk] i casi estremi
> Notiamo che se $P(B)=0$, la definizione perde senso. Infatti, se $B$ non *ha nessuna probabilità di accadere*, allora non ha senso chiedere *se un certo evento $A$ accadrebbe o meno a seconda dell'evento $B$*, dato che tanto l'evento $B$ è impossibile.
> 
> Parimenti, se $P(B)=1$ non *avrebbe senso considerare* la probabilità condizionale, dato che rimane la stessa. Infatti, $P(B)=1 \implies P(A|B) = P(A)$.

#Proposizione 
> [!prp] la probabilità condizionale costituisce una probabilità
> Sia $p(\cdot | B)$ la funzione del tipo
> $$
> p(\cdot|B): \mathcal{A} \longrightarrow [0,1]
> $$
> cioè $\forall A \in \mathcal{A}$, $p(A|B)$, allora questa funzione è una probabilità su $\mathcal{A}$.

#Proposizione 
> [!prp] la regola della catena
> Siano $A_1, \ldots, A_n$ degli *eventi* in uno *spazio di probabilità* $(\Omega, \mathcal{A}, p)$ tali che la *probabilità di tutti gli eventi fino all'$n-1$-esimo non sia nulla*, ovvero
> $$
> p\left(\bigcap^{n-1}_{k=1}A_k\right)>0
> $$
> allora vale la seguente regola:
> $$
> p\left(\bigcap^{n}_{k=1}A_k\right) = p(A_1) \cdot p(A_2 | A_1)\cdot p(A_3|A_2 \cap A_1)\cdot \ldots \cdot p\left(A_n | \bigcap^{n-1}_{k=1}A_k\right)
>  $$

# 3. Esempi di Problemi con la Probabilità Condizionale
#Esempio 
> [!exm] l'urna
> Supponiamo di avere un'urna con 90 palline, da cui ne estriamo 5.
> Vogliamo sapere la probabilità che escano i numeri 1 e 7, e sapendo che dei 5 numeri estratti 3 saranno sicuramente dispari.
> 
> Modellizziamo questo problema come il seguente:
> $$
> \Omega = \{\omega \subset \{1, \ldots, 90\}: |\omega| = 5\}
> $$
> Dal calcolo combinatorio è noto che $|\Omega| = \binom{90}{5}$. 
> 
> Adesso prendiamo $A$ come l'evento in cui *"i numeri estratti contengono 1 e 7"*, l'evento $B$ come *"tre dei numeri estratti sono dispari"*. Per calcolare $|A|$, $|B|$ e $|A \cap B|$, sarà necessario usare i *strumenti del calcolo combinatorio*, da cui discende che:
> $$
> \begin{gather}
> \left|A\right|=\binom{88}{3} \\
> \left|B\right|=\binom{45}{2}\binom{45}{3} \\
> \left|A \cap B\right| = 43 \binom{45}{2}
> \end{gather}
> $$
> Adesso possiamo calcolare $P(A)$ e $P(A|B)$. Abbiamo dunque
> $$
> P(A)=\frac{\binom{88}{3}}{\binom{90}{5}}=\ldots\approx0.0025
> $$
> e
> $$
> P(A|B) = \frac{43\binom{45}{2}}{\binom{90}{5}}\cdot \frac{\binom{90}{5}}{\binom{45}{2}\binom{45}{3}} = \ldots \approx 0.003
> $$
> In questo caso la probabilità di $A$ è *aumentata*.

#Osservazione 
> [!rmk] avvolte si parte dalle probabilità condizionali
> Vediamo adesso un esempio in cui si *costruisce un modello probabilistico* a partire dalle *informazioni sulle probabilità condizionali*. Questo si rivelerà utile, spesso nei *casi reali* in cui si hanno *quasi esclusivamente* probabilità condizionali. 
> 
> Ad esempio, spesso si hanno informazioni del tipo "la probabilità che un incidente accada è del 20% se piove".

#Esempio 
> [!exm] le urne
> Supponiamo di avere *due urne*, etichettate come $\alpha$ e $\beta$.
> L'urna $\alpha$ contiene *tre palline nere* e *una pallina bianca*; l'urna $\beta$ contiene invece *una pallina nera* e *una pallina bianca*. 
> Adesso estraiamo una palla da una delle urne. Si suppone che la scelta dell'urna sia equiprobabile. Qual è la probabilità di pescare una pallina nera?
> 
> Prima di tutto costruiamo il modello probabilistico.
> $$
> \Omega = \{\alpha_n, \alpha_b, \beta_n, \beta_b\}
> $$
> dove il singolo elemento rappresenta l'esito *"si è scelta l'urna ... e la pallina ..."*. 
> Adesso, prendiamo $A = \{\alpha_n, \alpha_b\}$ e $N=\{\alpha_n, \beta_n\}$ come gli *eventi casuali* in cui *"pesco una qualsiasi palla dall'urna alfa"* e *"ho pescato una palla nera da una qualsiasi urna"*.
> Grazie alle ipotesi iniziali, conosciamo le seguenti probabilità condizionali.
> $$
> p(A)=\frac{1}{2}, P(N|A)=\frac{3}{4}, P(N|\mathcal{C}A) = \frac{1}{2}
> $$
> e usando la definizione di probabilità condizionale si ha
> $$
> P(N \cap A )= \frac{3}{4\cdot 2} = \frac{3}{8}
> $$
> (il calcolo è analogo per $P(N \cap \mathcal{C}A)$).
> Adesso si osserva che 
> $$
> N:=\{\alpha_n,\beta_n\} =(N \cap A) \cup (N \cap \mathcal{C}A)
> $$
> che ci dà il risultato finale
> $$
> P(N)=P(N\cap A) + P(N \cap \mathcal{C}A) = \frac{5}{8}
> $$

#Osservazione 
> [!rmk] avvolte la probabilità condizionale è ininfluente
> Osserviamo che non sempre vale $P(\cdot) \neq P(\cdot|B)$, dato un'evento $B$ tale che $P(B)>0$. Infatti, vediamo un esempio.
> 
> Supponiamo di lanciare due volte una moneta. Se prendiamo $A$ come le volte in cui *esce la testa al secondo lancio* e $B$ come le volte in cui *esce la testa al primo lancio*, notiamo che $P(A)=P(A|B)$ e che $P(B)=P(B|A)$. Infatti, $|A|=|B|=2$ e $|A \cap B|=1$.
> Formalizzeremo questo concetto sotto forma di *eventi indipendenti* ([[Eventi Indipendenti#^8efb9e|1]]).
