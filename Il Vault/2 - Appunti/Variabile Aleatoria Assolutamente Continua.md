---
data: 2024-05-12
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Variabile Aleatoria Assolutamente Continua
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Assolutamente Continue
---
- - -
*Definizione di v.a. assolutamente continua. Note tecniche: condizioni equivalenti per verificare se è variabile aleatoria, idea geometrica, costante di integrazione. Parallelismo tra v.a. assolutamente continue e discrete. Teorema: composizione delle variabili assolutamente continue con funzioni regolari.*
- - -
# 0. Voci correlate
- [[Funzione Integrabile in Senso Generalizzato]]
- [[Definizione di Variabile Aleatoria]]
# 1. Definizione di Variabile Aleatoria Assolutamente Continua
#Definizione 
> [!def] variabile aleatoria assoluta continua
> Sia $(\Omega, \mathcal A, p)$ uno *spazio di probabilità*. Una variabile aleatoria $X:\Omega \longrightarrow \mathbb R$ si dice *assolutamente continua* se esiste una funzione $f:\mathbb{R}\longrightarrow [0,+\infty) \in \mathcal{R}(\mathbb{R})$ (ovvero *integrabile su tutta la retta reale*) tale che
> $$
> \forall B \in \mathcal{B}(\mathbb{R}), \ p\{X\in B\}=\int_B f
> $$
> e di conseguenza
> $$
> \int_\mathbb{R} f = p\{\Omega\}=1
> $$
> Definiamo la sua distribuzione come
> $$
> p_x(B):=p\{X \in B\} 
> $$
> e la sua *densità* è $f$ (oppure si può dire che *"$X$ ammette $f$ come densità"*).

# 2. Note tecniche
Poniamo una serie di note tecniche.

#Lemma 
> [!lem] condizione equivalente per le v.a. assolutamente continue
> Similmente al caso delle *variabili aleatorie discrete*, per verificare se $X$ è una *variabile aleatoria assolutamente continua*, basta prendere un *solo intervallo* $B=(a,b)$ (con $a \in \mathbb{R} \cup \{-\infty\}$) e verificare che
> $$
> p\{X \in B\}=\int_B f = \int_a^b f
> $$
> perché tanto dopo si può passare al *complementare* ([[Definizione di Variabile Aleatoria#^034fe2|1]]).

#Osservazione 
> [!rmk] l'idea geometrica
> L'idea delle *variabili assolutamente continue* è quello di prendere $B$ come un intervallo (o alla peggio avremo un'*unione* di intervalli, per non rendere le cose troppo complicate da un punto di vista tecnico) e di calcolarci l'integrale. 
> 
> Notiamo che qui *non c'entra in nessun modo* la *nozione di continuità*: vedremo che il termine *"assolutamente continuo"* si riferisce ad un altro comportamento di $X$.

**FIGURA 2.1.** (*Idea geometrica*)
![[Pasted image 20240512095307.png]]

#Osservazione 
> [!rmk] ci sono più densità associabili ad una v.a. assolutamente continua
> Notiamo che cambiando il valore di $f$ su un *insieme finito di punti*, abbiamo che l'integrale
> $$
> \int_B f
> $$
> rimane lo stesso. Infatti cambiando gli *"estremi"* abbiamo che l'integrale rimane lo stesso: per essere più precisi, due densità $f_1,f_2$ associate ad una medesima v.a. $X$ possono differire al più su *un insieme di misura nulla* (ovvero puntini).
> 
> Quindi diciamo comunque che la *densità è unica a meno di cambiamenti irrilevanti* (su insiemi di misura nulla).

# 3. Differenze tra v.a. discrete e assolutamente continue
#Osservazione 
> [!rmk] differenze tra v.a. discrete e assolutamente continue
> Notiamo che se per le *variabili aleatorie discrete* abbiamo
> $$
> \sum_{x \in \mathbb R}q(x)=1
> $$
> allora deve necessariamente seguire che $q(x) \in [0,1]$. Vale lo stesso per le *v.a. assolutamente continue*? Considerando che abbiamo *aree*, la risposta è no. Infatti, considerando un rettangolo con base $\frac{1}{2}$ e di altezza $2$, abbiamo comunque che la sua area (rappresentando l'integrale $\int_B f$) è $1$ lo stesso.
> 
> Dopodiché se abbiamo che $p\{X=x\}=q(x)$, nel caso assolutamente continuo abbiamo
> $$
> p\{X=x\}=\int_{ \{x\} }f = 0
> $$
> poiché l'integrale su un singolo punto è zero.
> 
> *Conclusione:* abbiamo che le *variabili aleatorie discrete* sono *"concentrate"* su singoli punti, invece con le *assolutamente continue* abbiamo che sono *"distribuite"* sulla *retta reale*.

# 4. Composizione di Variabili Aleatorie Assolutamente Continue
#Osservazione 
> [!rmk] osservazione preliminare
> Prima di considerare la *composizione di variabili aleatorie assolutamente continue* nel senso generalizzato, consideriamo un esempio.
> 
> Supponiamo di avere $X$ v.a. assolutamente continua, e $\psi$ una funzione costante che manda $\mathbb{R}$ in $\{1\}$. Allora componendo $\psi \circ X$ si avrebbe una *variabile aleatoria discreta*, in quanto è tutta *"spiaccicata"* su $7$. Infatti si avrebbe che
> $$
> \{\psi \circ X = 7\}=\Omega
> $$
> Quindi $\psi \circ X$ non è più assolutamente continua.
> 
> Allora, per far sì che $\psi \circ X$ rimanga *assolutamente continua*, dobbiamo imporre delle restrizioni su $\psi$: ovvero che deve *assumere valori infiniti*, per evitare di concentrare troppo la nostra variabile aleatoria.

#Proposizione 
> [!prp] composizione di variabili aleatorie assolutamente continue
> Sia $f$ una densità per $X$ assolutamente continua. Supponiamo $\psi$ *strettamente monotona* e *regolare* (in particolare di classe $\mathcal{C}^1$)
> 
> Allora $Y:=\psi \circ X$ è *assolutamente continua* con densità $g:\mathbb R \longrightarrow \mathbb R$ data da
> $$
> g(x)=f\left(\psi^{-1}(x)\right)\left|\psi'(\psi^{-1}(x))\right|^{-1}
> $$
^304386

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^304386]]
Omessa. Basta tener conto che $\psi$ è *invertibile* dunque utilizzabile per un *cambio di variabile*. $\blacksquare$

#Esempio 
> [!exm] caso lineare
> Se $\psi$ è lineare, ovvero del tipo $\psi(x):=\alpha x + \beta$, allora si ha che la composizione $Y:=\psi \circ X$ ha densità
> $$
> \boxed{g(x)=f\left(\frac{x-\beta}{\alpha}\right)\frac{1}{|\alpha|} }
> $$

^c13554

# 5. Media delle v.a. assolutamente continue
Vediamo come si comporta la *somma* tra le *variabili aleatorie assolutamente continue*.

#Lemma 
> [!lem] la somma di variabili aleatorie
> Siano $X_1, X_2$ due *variabili aleatorie assolutamente continue* con densità $f_1, f_2$. Supponiamo $X_1,X_2$ *indipendenti*.
> 
> Allora abbiamo che la somma $Y:=X_1+X_2$ è una *variabile aleatoria assolutamente continua* con densità
> $$
> f_Y(x)=\int_\mathbb{R}f_1(y)f_2(x-y) \ \text{d}y
> $$
> 
> **NOTA!** Non è *detto* che la somma rimanga dello stesso tipo.
^edc8f8

**DIMOSTRAZIONE** del [[#^edc8f8]]
Omessa. Per vedere dei controesempi è necessario sapere gli *integrali doppi* (di cui non sappiamo ancora, #TODO). $\blacksquare$
