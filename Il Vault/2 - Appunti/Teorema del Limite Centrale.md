---
data: 2024-05-15
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Teorema del Limite Centrale
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Assolutamente Continue
---
- - -
*Teorema del limite centrale. Osservazione preliminare, enunciato teorema, osservazione. Approfondimento tecnico: convergenza in legge e in probabilità.*
- - -
# 0. Voci correlate
- [[Legge dei Grandi Numeri]]
# 1. Valutazione Asintotica dell'Errore
**IDEA.** Per la definizione appena messa sulla *legge dei grandi numeri* ([[Legge dei Grandi Numeri#^8b66a0]]) abbiamo il limite di una successione che va a $0$. La domanda che ci poniamo è la seguente: *con quale "velocità" converge?*
Ovvero, se è possibile confrontare la successione convergente $a_n \to 0$ con una delle seguente *"successioni misuratori"*:
$$
| \ \log_a n\ |\  n^\alpha\ | \  x^n \ | \  n! \ | \  n^n \ |
$$
da sinistra abbiamo i più *"lenti"*, a destra i più *"veloci"*. Queste sono tutte *successioni divergenti*, con velocità crescenti.

**IL LIMITE.** Adesso posso valutare le *velocità* calcolando il seguente limite. Sia $Z_n$ la successione convergente a $0$, $b_n$ la successione misuratore, allora considero
$$
\lim_n Z_n b_n=c \in \tilde{\mathbb{R}}
$$
Se ho $c \neq 0$, allora ciò significa che la successione $a_n$ si comporta come $\frac{c}{b_n}$. Altrimenti, se ho $c=0$, allora $a_n$ è troppo veloce.

**L'OBBIETTIVO.** Adesso vogliamo trovare una successione $(b_n)_n$ divergente tale che possiamo moltiplicarci $Z_n$ così che converga ad una *variabile aleatoria non nulla*. Ovvero voglio ottenere il limite
$$
\lim_n Z_n b_n \neq 0
$$
indipendentemente dalla natura di $Z_n$.
Facciamoci l'idea per un *caso specifico*: prendiamo una successione di *gaussiane* $(X_n)_n: X_k \sim \mathcal{N}(\mu, \sigma^2)$. Supponendo l'indipendenza, abbiamo
$$
\sum^n_{k=1}X_k\sim \mathcal N (n\mu + n\sigma^2)
$$
([[Densità Gaussiana#^643559]]). Adesso normalizzo tutto per $n$, ottenendo la *media campionaria*
$$
\overline{X}_k \sim \mathcal{N}\left(\mu, \frac{\sigma^2}{n}\right)
$$
Adesso riscalo tutto verso la *gaussiana normale*, prendendo
$$
\frac{\overline{X}_n-\mu}{\sqrt{\frac{\sigma^2}{n} } }\sim \mathcal{N}(0,1)
$$
Allora abbiamo
$$
\lim_n |\overline{X}_n -\mu|\sqrt{\frac{n}{\sigma^2} } = \lim_n |Z_n|\sqrt{\frac{n}{\sigma^2} } \to 0
$$
Allora la nostra successione candidata è $b_n = \sqrt{\frac{n}{ \sigma^2} }$. Si dimostra che questo è il comportamento delle *variabili aleatoria indipendenza con la stessa distribuzione*. Vedremo questo col *teorema del limite centrale*.

#Definizione 
> [!def] variabili aleatorie indipendenti con la stessa distribuzione
> Si dice che una *successione* di variabili aleatorie $(X_n)_n$ è di *variabili aleatorie indipendenti con la stessa distribuzione* (i.i.d.) se hanno la stessa distribuzione, o la stessa funzione di ripartizione.

^ca3120

# 2. Teorema del Limite Centrale
#Teorema 
> [!thm] del limite centrale
> Sia $(X_n)_n$ una *successione di variabile aleatorie i.i.d.* che ammettono *momento secondo finito*. Sia $\mu$ il loro valore medio e $\sigma^2$ la loro varianza. Allora ponendo $Z_n$ la *"media campionata riscalata"*, ovvero
> $$
> Z_n := \frac{\overline X_n-\mu}{\sqrt{\frac{\sigma^2}{n} } }
> $$
> Si ha che
> $$
> \lim_n p\{Z_n \leq x\}=\phi (x)
> $$
> con $\phi(x)$ la *funzione di ripartizione* di $\mathcal{N}(0,1)$. In altre parole,
> $$
> \boxed{\lim_n Z_n \sim \mathcal{N}(0,1)}
> $$
> Ovvero $Z_n$ tende alla *gaussiana normale*.
^08b332

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^08b332]]
Omessa. Osserviamo solo che le medie e le varianze sono
$$
E[\overline{X}_n]=\mu, \operatorname{var}X_n = \frac{\sigma^2}{n}
$$
e poi
$$
E[Z_n]=0, \operatorname{var}Z_n = 1
$$
che di dà l'idea generale. $\blacksquare$

# 3. Convergenza in legge e in probabilità
#Definizione 
> [!def] convergenza in legge e in probabilità
> Si dice che una successione di v.a. $(X_n)_n$ converge *in legge* a $X$ se vale che
> $$
> \forall x \in \mathbb{R}, \lim_n F_n(x)=F(x)
> $$
> Se sono definite su uno stesso *spazio di probabilità*, allora si dice che converge in probabilità a $X$ se
> $$
> \lim_n p\underbracket{\{|X_n-X|>\varepsilon\}}_{\in \Omega}=0, \forall \varepsilon>0
> $$
> Notiamo che hanno la stessa gerarchia tra *convergenza puntuale e uniforme* per *successioni di funzioni*.

