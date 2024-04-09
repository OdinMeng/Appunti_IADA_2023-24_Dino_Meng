---
data: 2024-03-14
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Spazio di Probabilità Discreto
tipologia: appunti
stato: "1"
capitolo: Nozioni preliminari per la Probabilità
---
- - -
*Definizione di spazio di probabilità discreto come generalizzazione di spazi di probabilità finiti. Proprietà dei spazi probabilistici discreti. Esempio del lancio della moneta ripetuta infinitamente.*
- - -
# 1. Definizione di Spazio di Probabilità Discreto
#Definizione 
> [!def] spazio di probabilità discreto
> Sia $(\Omega, \mathcal{A}, p)$ un *spazio di probabilità*. Questo *spazio di probabilità* si dice *discreto* se vale che $\Omega$ è *al più numerabile* (ovvero esiste una biiezione tra $\Omega$ e $\mathbb{N}$) e che $\mathcal{A}$ è la *famiglia di tutti i sottoinsiemi di* $\Omega$. In particolare, $\mathcal{A}$ è una *sigma-algebra*.

^58b1f7

#Proposizione 
> [!prp] modellizzazione di uno spazio probabilistico discreto
> Adesso vogliamo capire *come definire* questo spazio probabilistico discreto, in particolare per quanto riguarda la probabilità $p$. Come possiamo associare un *numero* ad una *somma infinita di numeri*? Qui ci serve la *teoria delle serie*. Possiamo porre
> $$
> p(A)=\left\{ \begin{array}{rcl} \sum_{\omega \in A} p(\{\omega\}),\emptyset \neq A \subset \Omega & \\  0, A = \emptyset& \end{array} \right.
> $$
> Questa definizione è *ben posta*, dato che $\Omega$ è un *insieme numerabile* e quindi $\mathcal{A}$ *al più numerabile*.

#Osservazione 
> [!rmk] la probabilità degli eventi casuali è ben posta
> Se $A$ è *numerabile* allora interpreto la probabilità
> $$
> \sum_{\omega \in A}p(\{\omega\})
> $$
> come una *serie*, dal momento che $A$ è un elemento di un sottoinsieme di elementi infiniti di $\Omega$.
> Ma allora non si avrebbe il rischio di avere una definizione *mal posta*? Ovvero che *cambiando l'ordine in cui sommo i termini* $p(\{\omega\})$ posso cambiare il *risultato* della somma?
> 
> La risposta è no, dal momento che stiamo trattando di *serie convergenti a termini positivi*, quindi *assolutamente convergenti* ([[Assoluta e Semplice Convergenza di una Serie#^5669ce]]). Dunque per il *teorema di Riemann* ([[Assoluta e Semplice Convergenza di una Serie#^c571fd]]), la somma della serie non cambia.

#Proposizione 
> [!prp] proprietà dei spazi di probabilità
> Sia $(\Omega, \mathcal{A}, p)$ uno *spazio di probabilità discreto*. Allora valgono le seguenti.
> A. *Continuità dal basso*
> Se $(A_n)_n$ è una *successione crescente di eventi casuali*, ovvero che valga $A_n \subset A_{n+1}$ (*"un evento è sempre incluso nel prossimo"*), allora vale il limite
> $$
> p\left(\bigcup^{\infty}_{k=1}A_k\right) = \lim_n p(A_n)
> $$
> B. *Continuità dall'alto*
> Se $(A_n)_n$ è una *successione decrescente di eventi casuali*, ovvero $A_{n+1} \subset A_n$ (ovvero *"un evento include sempre il prossimo evento"*), vale il limite
> $$
> p\left(\bigcap^{\infty}_{k=1} A_k\right)=\lim_n p(A_n)
> $$

#Corollario 
> [!cor] sigma-subadditività dei spazi probabilistici discreti
> Sia $(A_n)_n$ una *successione di eventi in uno spazio probabilistico discreto* $(\Omega, \mathcal{A}, p)$. Allora vale che
> $$
> p\left(\bigcup^{\infty}_{k=1}A_k\right) \leq \sum^{+\infty}_{n=1}p(A_n)
> $$
^99cd3a

#Osservazione 
> [!rmk] bilanciare la disuguaglianza
> Prendiamo la disuguaglianza del [[#^99cd3a]], per due *eventi non disgiunti* $A, B$: si ha
> $$
> P(A \cup B)+P(A \cap B)=P(A)+P(B)
> $$
> Da un punto di vista geometrico, l'elemento $P(A \cap B)$ rappresenta l'*"eccesso"* della somma $A\cup B$; infatti, se $A \cap B = C \neq \emptyset$, si può vedere che vale la relazione
> $$
> A \cup B = (A \diagdown C) \cup (B \diagdown C) \cup C
> $$
> allora
> $$
> P(A \cup B) = P(A)-P(C)+P(B)-P(C)+P(C)
> $$
> ovvero la tesi
> $$
> P(A \cup B)+P(A \cap B) = P(A) + P(B)
> $$
> Dalla stessa idea si ha 
> $$
> \begin{gather}
> P(A)+P(B)+P(C)-P(A \cap C)-P(A \cap B)-P(B \cap C) + P(A \cap B \cap C) \\ =  \\P(A \cup B \cup B)
> \end{gather}
> $$

# 2. Esempi di Modelli Probabilistici Discreti
#Esempio 
> [!exm] moneta lanciata infinitamente
> Presa una moneta e *lanciandola ripetutamente*, vogliamo determinare la *probabilità che esca testa al lancio $n$-esimo ma non prima*.
>  
> Per approcciarci a questo problema, possiamo scegliere $\Omega$ come *l'insieme delle successioni a valori in $\{0, 1\}$*. Ad esempio, un elemento di $\Omega$ potrebbe essere $(0,0,1,0,1,0,1,\ldots)$.
> Allora prendiamo un suo *elemento generico* $\omega_n \in \Omega$ come la *famiglia delle successioni che hanno* $1$ nei *primi elementi* e $0$ all'$n$-esimo (dopo non ci importa più come si comporta).
> Vediamo che $\Omega = \{\omega_n, n \in \mathbb{N}\}$.
> Per rispondere alla *domanda*, possiamo ragionevolmente stabilire che *in ogni singolo lancio la probabilità che esca testa o croce sia la stessa* (ovvero che la moneta non sia truccata). Inoltre, gli eventi elementari sono *indipendenti*.
> 
> Allora possiamo assegnare a $\omega_1$ il numero $0.5$: infatti la probabilità che esca testa al primo lancio è proprio $0.5$. Per quanto riguarda invece $\omega_2$, possiamo fare la *metà della metà*: ovvero $0.25$. Andando avanti, assegniamo
> $$
> \omega_n = \frac{1}{2^n}
> $$
> Notiamo che la serie formata dalle probabilità degli eventi elementari è *convergente* con *somma* $1$. 
> $$
> \sum^{+\infty}_{n=1}\frac{1}{2^n}=1
> $$
> Quindi questo è *perfettamente in linea col nostro modello probabilistico*. 
> 
> Adesso, possiamo iniziare a *rispondere delle domande*. Se vogliamo ad esempio calcolare la probabilità che esca testa *per la prima volta tra il terzo e sesto lancio (compresi)*, basta fare la somma
> $$
> \frac{1}{2^3}+\ldots+\frac{1}{2^6}
> $$
> Oppure se vogliamo sapere la probabilità che esca *testa* in un *lancio pari*, basta fare la somma
> $$
> \sum^{+\infty}_{n=1}\frac{1}{2^{2n}} = \sum^{+\infty}_{n=1}\frac{1}{4^n} = \frac{1}{3}
> $$

#Osservazione 
> [!rmk] attenzione nel modellizzare i modelli probabilistici
> Come possiamo notare, abbiamo preso $\Omega$ come un *insieme fatto di famiglie di successioni*, invece di *un insieme fatto di singole successioni*. Perché questa scelta? Non potevamo semplicemente scegliere gli eventi casuali di $\Omega$ come le singole successioni?
> 
> La risposta è sì, ma questo ci creerebbe problemi. Infatti, in questo caso $\Omega$ non diventerebbe più numerabile: se volessimo assegnare ad ogni singolo evento $\omega$ un numero tale che la somma di tutti gli elementi rimanga $1$, bisognerebbe dare un *numero infinitamente piccolo*.
> 
> Per spiegare meglio questo concetto, vediamo un *esempio pratico*. Ci viene chiesto di *modellizzare la risposta elastica* di un *ponte di ferro costruito con delle travi*. Possiamo considerare un modello partendo dai *singoli atomi di ferro*? Sì. Conviene farlo? No, dato che il *concetto di elasticità* viene definito a partire dalle *travi*, non *sugli atomi*.
