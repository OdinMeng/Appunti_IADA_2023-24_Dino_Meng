---
data: 2024-05-01
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Densità Multinomiale
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Discrete
---
- - -
*Densità multinomiale: definizione e modello tipico.*
- - -
# 0. Voci correlate
- [[Densità associate a Vettori Aleatori]]
# 1. Definizione di Densità Multinomiale
Vediamo una *generalizzazione* della *densità binomiale*, ovvero una generalizzazione dello *schema delle prove indipendenti* sul numero degli esiti.

#Definizione 
> [!def] densità multinomiale
> Prendiamo uno *schema di $N$ prove ripetute* con $n$ esiti. Sia $x=(x_1,\ldots,x_n)$ il vettore in cui contiamo *"il numero di vittorie per gli esiti $1,2,\ldots,n$*. Sia $q_n$ la probabilità di avere vittoria su $n$, tali che $\sum q_n = 1$.
> Si definisce *densità multinomiale* come la funzione
> $$
> \boxed{q(x)=\frac{N!}{\prod (x_n!)} {\prod q_n^{x_n} }\chi_E }
> $$
> con $E$ l'insieme delle $n$-uple con somma $n$. Formalmente.
> $$
> E:=\left\{x \in \mathbb{R}^N: \sum^{N}_{j=1}x_j=n\right\}
> $$

# 2. Modello Tipico
Vediamo il *modello tipico* della densità multinomiale.

#Esempio 
**MODELLO.** (*Densità multinomiale*)
Prendiamo uno schema di $N$ prove ripetute con $n$ esiti. Etichettiamo tali esiti con $1,\ldots,n$. Si assume che la loro probabilità singolare è
$$
q_1,q_2,\ldots,q_n \in (0,1): \sum_{0\leq i \leq n}q_i=1
$$
Adesso prendiamo lo spazio delle probabilità elementari come
$$
\Omega = \{1,\ldots,n\}^N
$$
ovvero come la $N$-upla di $n$ esiti. 
Adesso consideriamo la variabile aleatoria $X_j$ che conta *"il numeri di volte che l'output $j$ si presenta nelle $N$ prove*. Di questo vogliamo calcolarne la probabilità $p$.
Per farlo, dobbiamo prima introdurre un altro evento, $A_{k,j}$ che *"conta alla k-esima prova se è venuto il risultato j-esimo*. Possiamo dunque scrivere un elemento $\omega \in \Omega$ come l'intersezione di eventi indipendenti
$$
\{\omega\} = \bigcap_{i=1}^NA_{i,\omega_i}
$$
Abbiamo la probabilità $p$ definita come
$$
p(\omega)=\prod_{i=1}^NA_{i,\omega_i}=\prod_{i=1}^Nq_i^{X_i(\omega)}
$$
Adesso introduciamo l'ultimo vettore aleatorio, definito come
$$
X=(X_1,\ldots,X_N)
$$
che conta *"il numero di successi per il primo, secondo, l'$N$-esimo esito"*. Notiamo subito che $\{X=x\}$ è non vuoto se e solamente se abbiamo un vettore sensato. Ovvero tale che
$$
x \in \mathbb{N}^N, \sum^N_{j=1}x_j=1
$$
Quindi se $\omega \in \{X = x\}$, vale che
$$
p(\{\omega\})=\prod_{i=1}^{N}q_i^{x_i}
$$
Per calcolare $q(x)$, basta contare il numero degli elementi di $\{X=x\}$.
A prima vista abbiamo $N!$ combinazioni possibili di $N$-uple; tuttavia, per rimuovere eventuali duplicati, dobbiamo *togliere tutti i modi in cui gli stessi numeri possono permutare*. Ovvero $x_1!x_2!\ldots x_N!$
Ovvero abbiamo
$$
|\{X=x\}|=\frac{N!}{\prod^N_{i=1}(x_i!)}
$$
Quindi infine abbiamo la *densità multinomiale*
$$
\boxed{q(x)=\frac{N!}{\prod (x_n!)} {\prod q_n^{x_n} }\chi_E }
$$
$\blacksquare$