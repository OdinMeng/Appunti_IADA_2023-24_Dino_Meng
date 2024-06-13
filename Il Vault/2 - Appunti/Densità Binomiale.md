---
data: 2024-04-10
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Densità Binomiale
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Discrete
---
- - -
*Definizione di densità binomiale di parametri $n$ e $q$; caso tipico della densità binomiale (numero di successi di uno schema di prove ripetute). Esempio di densità binomiale.*
- - -
# 0. Voci correlate
- [[Densità associate a Variabili Aleatorie Discrete]]
- [[Definizione di Schema delle Prove Indipendenti]]
- [[Proprietà dello Schema delle Prove Indipendenti]]
# 1. Definizione di Densità Binomiale

^7f761d

**PREAMBOLO.** Adesso iniziamo a vedere *casi specifici* di *densità associate* a v.a. discrete, partendo dalla cosiddetta *"densità binomiale"*.

#Definizione 
> [!def] densità binomiale
> Siano $n \in \mathbb{N}$ e $q \in (0,1)$ dei *parametri numerici fissati*. Chiamo la *"densità binomiale di parametri $n,q$"* la funzione posta come
> $$
> q(x)=\left\{\begin{align}&\binom{n}{x}q^x(1-q)^{n-x}, x\in \{0 ,\ldots, n\} \\ &0, x \not \in \{0, \ldots, n\}\end{align}\right.
> $$
> e la indichiamo come $B(n,q)$. 
^01be20

#Osservazione  
> [!rmk] la densità binomiale è una densità
> Si verifica che $B(n,q)$ come definita ([[#^01be20|1]]) sopra è una *densità*. Infatti,
> $$
> \sum_{x \in \mathbb{R} }q(x)=\sum_{i=0}^{n}q(i)=\sum_{i=0}^n \binom{n}{i}q^i (1-q)^{n-i} =((1-q)-q)^n = 1^n = 1
> $$
> Parimenti vale che
> $$
> \sum_{x \in \emptyset}q(x)=0
> $$

# 2. Caso Tipico della Densità Binomiale
**PREAMBOLO.** Adesso vediamo un *caso tipico* di *spazio probabilistico* in cui si ha la *densità binomiale*; ovvero lo *schema delle prove ripetute* ([[Definizione di Schema delle Prove Indipendenti#^d5d5b8|1]]). In particolare studiamo questo modello in relazione al *numero dei successi ottenuti* ([[Proprietà dello Schema delle Prove Indipendenti#^5f0571|2, punto i.]]).

#Osservazione 
> [!rmk] schema delle prove ripetute e il numero dei successi
> Prendiamo lo $(\Omega, \mathcal{A}, p)$ come uno *schema delle prove ripetute*; ovvero abbiamo $\Omega=\{0, 1\}^n$ e la probabilità definita come
> $$
> p(\{\omega\})=q^{\sum \omega_i}(1-q)^{n-{\sum \omega_i}}, \forall \omega \in \Omega
> $$
> Allora possiamo definirci una *variabile aleatoria discreta* come
> $$
> X(\omega)=\sum^n_{i=1}\omega_i
> $$
> In parole, $X(\omega)$ prende la $n$-upla $\omega$ e ritorna il *numero delle volte in cui compare* $1$.
> 
> Adesso calcolo la densità $q(x)=p(\{X=x\})$. Osserviamo preliminarmente che per $x \not \in \{0, 1, \ldots, n\}$ abbiamo $\{X=x\}=\emptyset$ e dunque $q(x)=0$. 
> 
> Ora copro invece i casi in cui ho $\{X=x\}$ non vuoto; mi ricordo che per ogni insieme $\{X=x\}$ ho le *combinazioni* di classe $x$ su $n$ oggetti. Allora ho
> $$
> q(x)=p(\{x=X\})=\sum_{x \in \{X=x\}}q^x (1-q)^{n-x}=\binom{n}{x}q^x(1-q)^{n-x}
> $$
> 
> Notiamo che abbiamo che $q$ è proprio la *densità binomiale* $B(n,q)$. 
> 
> Facciamo un'ultima osservazione: che vuol dire prendere la distribuzione $p_x$ associata a $X$? Semplicemente vuol dire che, dato un range di valori $B \subset \mathbb{R}$ stiamo sommando le *probabilità* che il numero delle vittorie stiano dentro in questo range (ovvero le densità). In matematichese, abbiamo
> $$
> p_x(B)=\sum_{x \in B}q(x)
> $$

# 3. Esempio di Esercizio con Densità Binomiale
#Esercizio 
> [!exr] i bulloni difettosi e sani
> Una fabbrica produce i bulloni in confezioni da tre pezzi ciascuna; ogni bullone prodotto ha una probabilità di essere difettosi con una probabilità del $0.2$. Calcolare la probabilità che in una confezione vi sia al più un bullone difettoso.

**SVOLGIMENTO.** Basta prendere $B(3,0.8)$, dato che siamo in uno *schema di prove ripetute*, se consideriamo la *"vittoria"* come *"avere un bullone sano"*: in tal caso basta prendere $B=\{2,3\} \subset \mathbb R$ e calcolare $p_x(B)$, ovvero
$$
p_x(B)=q(2)+q(3)=\ldots=0.896
$$
Che è il nostro risultato.