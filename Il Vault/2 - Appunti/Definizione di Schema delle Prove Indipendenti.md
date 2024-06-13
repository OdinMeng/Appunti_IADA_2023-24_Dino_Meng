---
data: 2024-03-29
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Definizione di Schema delle Prove Indipendenti
tipologia: appunti
stato: "1"
capitolo: Nozioni preliminari per la Probabilità
---
- - -
*Definizione di Schema delle Prove Indipendenti.*
- - -
# 0. Voci correlate
- [[Eventi Indipendenti]]
# 1. Esempio Preliminare
#Esempio 
> [!exm] il lancio della moneta
> Facciamo il seguente esperimento: lanciamo $n$ volte una moneta, per la quale ha una probabilità $0<q<1$ di ottenere *testa* (quindi stiamo rinunciando all'*equiprobabilità* dell'esperimento; inoltre supponiamo che esistano *solo due esiti*). Supponiamo che *tutti i risultati dei singoli lanci siano indipendenti tra di loro*.
> 
> Consideriamo quindi lo spazio campionario degli eventi elementari come le $n$-uple di *zeri e uni*, ovvero
> $$
> \Omega = \{0,1\}^n
> $$
> Adesso definiamo la famiglia degli eventi complessi $(A_k)_{k\leq n}$ definendo il singolo evento complesso $A_i$ come *"la probabilità di uscire $1$ (o testa) al lancio $i$-esimo"*. 
> Visto che la probabilità di ottenere testa in un singolo lancio è $q$, possiamo porre
> $$
> p(A_i)=q, \forall i \leq n
> $$
> Adesso prendiamo un $\omega \in \Omega$, espresso come $\omega = \{\omega_1, \ldots, \omega_n\}$ con $\omega_i$ la componente $i$-esima di questa $n$-upla.
> Poi prendiamo l'insieme degli indici $\{1,\ldots,n\}$ e lo dividiamo in due sottoinsiemi $I_0$, $I_1$ definiti come
> $$
> I_0=\{1\leq i \leq n : \omega_i = 0\}, I_1=\{1\leq i \leq n: \omega_i = 1\}
> $$
> Possiamo quindi vedere ogni elemento $\omega \in \Omega$ come l'intersezione
> $$
> \{\omega\}=\bigcap_{i \in I_1}A_i \cap \bigcap_{i \in I_2}\mathcal{C}A_i
> $$
> Per le ipotesi iniziali, sappiamo che gli eventi delle intersecatorie sono *indipendenti*, dunque posso passare alla probabilità
> $$
> p(\{\omega\})=\prod_{i \in I_1}p(A_i) \cdot \prod_{i \in I_2}p(\mathcal{C}A_i) = q^{|I_1|}(1-q)^{|I_2|}
> $$
> Notando che per ottenere $|I_1|$ basta sommare tutti gli elementi di $\omega$, possiamo scrivere
> $$
> \left|I_1\right| = \sum_{\omega_i\in \omega} \omega_i ; |I_0|=n-|I_1|
> $$
> il ché ci porta al risultato finale
> $$
> \boxed{p(\{\omega\})=q^{\sum_{\omega_i \in \omega}\omega_i}(1-q)^{n-\sum_{\omega_i \in \omega}\omega_i} }
> $$
^0f3594

# 2. Definizione Formale dello schema di Bernoulli
#Definizione 
> [!def] schema delle prove indipendenti / ripetute / di Bernoulli
> Sia $(\Omega, \mathcal{A}, p)$ uno *spazio di probabilità*, formato da $n$ prove *ripetute ed indipendenti*, che possono avere *solo due esiti possibili* (etichettati con $1, 0$ e detti tradizionalmente come *"successo"* e *"insuccesso"*). 
> 
> Questo spazio di probabilità si dice *"schema delle prove indipendenti* (o *ripetute* o *di Bernoulli*).

^d5d5b8

