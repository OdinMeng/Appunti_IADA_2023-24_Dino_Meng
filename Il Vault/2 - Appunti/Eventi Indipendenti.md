---
data: 2024-03-28
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Eventi Indipendenti
tipologia: appunti
stato: "1"
capitolo: Nozioni preliminari per la Probabilità
---
- - -
*Definizione di indipendenza di eventi; prima definizione per due eventi; definizione generalizzata.*
- - -
# 1. Definizione di due eventi indipendenti
#Definizione 
> [!def] due eventi indipendenti
> Siano $A, B$ degli *eventi* in uno *spazio di probabilità*. $A, B$ si dicono *indipendenti* se vale che
> $$
> A, B \ \text{indipendenti}: P(A \cap B)=P(A)\cdot P(B)
> $$
> In particolare se $P(B)>0$, vale che
> $$
> P(A)=P(A|B)
> $$
> oppure se $P(A)>0$, vale che
> $$
> P(B)=P(B|A)
> $$
> cioè *"la probabilità di $A$ non cambia conoscendo $B$ e viceversa"*.
^8efb9e

# 2. Definizione generalizzata di eventi indipendenti
#Definizione 
> [!def] tre eventi indipendenti
> Tre eventi $A,B,C$ in uno spazio di probabilità si dicono *indipendenti* se sono *due a due indipendenti* e se vale
> $$
> p(A)p(B)p(C)=p(A\cap B \cap C)
> $$

#Definizione 
> [!def] $n$ eventi indipendenti
> Una successione di eventi $(B_n)_{n \in N}$ si dicono *indipendenti* se per *ogni sottoinsieme finito* $J \subset N$, con $|J|\geq 2$ abbiamo che
> $$
> \forall J\subset N, p\left(\bigcap_{j \in J}B_j\right)=\prod_{j \in J}p(B_j)
> $$

^264eb5

#Osservazione 
> [!rmk] la necessità di dover aggiungere un'altra condizione
> Notiamo che, quando abbiamo effettuato il passaggio da $n=2$ a $n=3$, abbiamo dovuto aggiungere un'ulteriore condizione, ovvero che la *produttoria degli eventi devono valere la probabilità dell'intersezione degli eventi*. Giustifichiamo questa necessità col seguente *esempio*.
> 
> Supponiamo che nel dipartimento di Matematica, Informatica (e Geoscienze) di Trieste *tre* matematici, in particolare un analista, un algebrista e uno statistico, stanno giocando a dadi, *ognuno lanciando un dado* (trascurando dettagli inutili, stiamo lanciando *tre dadi*).
> 
> Contrassegno l'evento $A$ come *"il primo e il secondo dado hanno lo stesso risultato"* e l'evento $B$ come *"il secondo e il terzo dado hanno lo stesso risultato"*. Gli eventi $A, B$ sono indipendenti, dato che $p(A \cap B)=p(A)p(B)=\frac{1}{6}\cdot\frac{1}{6}$. 
> Adesso contrassegniamo l'evento $C$ come *"il primo e il terzo dado hanno lo stesso risultato"*: in questo caso, vediamo che $A,B,C$ rimangono *a due a due indipendenti*.
> 
> Tuttavia, $A$ non è più indipendente da $B \cap C$ (ovvero che capitino assieme); se $B \cap C$ accade, allora per forza $A$ dev'essere vero! Ovvero $p(A|B \cap C) = 1$.
> 
> Di conseguenza, possiamo dire che $A,B,C$ *non sono indipendenti*, nonostante il fatto che siano comunque *a due a due indipendenti*.

# 3. Le Non-Proprietà degli Eventi
#Osservazione 
> [!rmk] la indipendenza non gode della proprietà transitiva
> Notiamo che l'*indipendenza tra eventi* non gode della *proprietà transitiva*. Ad esempio, se $A$ è *indipendente* da $B$ e $B$ è *indipendente* da $C$, non deve vuol dire che $A$ è *indipendente* da $C$.
> 
> Interpretiamo questa cosa un una visione geometrica: consideriamo i tre eventi come dei *"segmenti del quadrato"* con area $0.5$. Li poniamo in una maniera tale che $p(A \cap B)=p(B \cap C)=\frac{1}{4}$ (ovvero $A,B$ e $B,C$ sono *indipendenti*) ma $p(A \cap C) = 0$, che rende $A,B$ non-indipendenti.

**FIGURA 3.1.** (*La non transitività dell'indipendenza tra eventi*)
![[Pasted image 20240328211548.png]]

#Proposizione 
> [!prp] la condizione aggiuntiva fornisce una condizione sufficiente
> Notiamo che la *"condizione generale"* per $n$ eventi non dice nulla per l'*indipendenza a $j$ a $j$* di questi eventi.
> Ovvero,
> $$
> p\left(\bigcap_{n \in N}B_n\right)=\prod_{n \in N}p(B_n)
> $$
> non deve *necessariamente implicare*
> $$
> \forall J\subset N, p\left(\bigcap_{j \in J}B_j\right)=\prod_{j \in J}p(B_j)
> $$
^9ce5cd

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^9ce5cd]]
Si può dimostrare il caso $n=3$ con un controesempio: tenendo conto del *lancio dei tre dadi* con gli eventi
$$
\begin{gather}
A=\left\{(x,y) \in \Omega:  y=1,2,5\right\} \\
B=\left\{(x,y) \in \Omega:  y=4,5,6\right\} \\
C=\left\{(x,y) \in \Omega:  x+y=9\right\}
\end{gather}
$$
provando che $A,B,C$ *non sono a due a due indipendenti*, ma vale che
$$
p(A\cap B \cap C)=p(A)p(B)p(C)
$$
confutando la contronominale. $\blacksquare$

# 4. Il complementare degli Eventi Indipendenti
#Osservazione 
> [!rmk] i complementari di due eventi indipendenti rimangono indipendenti
> Suppongo che due eventi $A,B$ sono *indipendenti*. Cosa succede se passo al complementare? Rimangono indipendenti o no?
> 
> Spoiler: rimangono indipendenti, dal momento che possiamo pensare $\mathcal{C}A \cap B$ (o viceversa) come $B \diagdown (A \cap B)$. (ovvero rimuoviamo da $B$ la parte in comune con $A$, *figura 4.1.*). Da qui seguono i seguenti passaggi:
> $$
> \begin{align}
> p(\mathcal{C}A \cap B)=p(B \diagdown (A \cap B)) &= p(B)-p(A \cap B) \\ &= p(B)-p(A)p(B) \\ &= p(B)(1-p(A)) \\ &=p(B)p(\mathcal{C}A)
> \end{align}
> $$
> che sarebbe la tesi. Generalizzando questa osservazione in più piani, abbiamo le seguenti proposizioni.

**FIGURA 4.1.** (*Idea del primo passaggio*)
![[Pasted image 20240328212846.png]]

#Proposizione  
> [!prp] condizioni equivalenti tra eventi indipendenti
> Siano $A,B$ degli *eventi indipendenti*. Allora sono equivalenti
> $$
> A \text{ ind. }B \iff \mathcal{C}A \text{ ind. }B \iff A \text{ ind. }\mathcal{C}B \iff \mathcal{C}A \text{ ind. }\mathcal{C}B
> $$
> (*N.B. La scritta $\text{ind.}$ sta per "... indipendente da ..."*)

#Proposizione 
> [!prp] scegliendo i complementari di alcuni eventi indipendenti rimangono indipendenti
> Sia $(A_n)_{n \in N}$ una famiglia di *eventi indipendenti*. Sia $J \subset N$ un *sottoinsieme di indici* qualsiasi.
> Definiamo la nuova famiglia di eventi $(B_n)_{n \in N}$ come
> $$
> B_i = \left\{\begin{align}&A_i, i \in J \\ &\mathcal{C}A_i, i \not \in J \end{align}\right.
> $$
> (*a parole stiamo scegliendo alcuni elementi e li stiamo convertendo in loro complementari*)
> Segue che anche $(B_n)_{n \in N}$ è una *famiglia di eventi indipendenti*.

^0ca386

