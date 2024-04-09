---
data: 2023-10-02
corso: "[[Analisi Matematica I]]"
argomento: Untitled
tipologia: appunti
stato: "1"
---
*Assiomi di G. Peano; significato nella matematica, quali sono. Il principio di induzione; le applicazioni del principio di induzione: dimostrazione per induzione e definizioni. Successioni.*
- - -
# 1. Riflessioni sui fondamenti dei numeri $\mathbb{N}$
**OSS 1.** Mi pongo il seguente *problema*: è possibile trovare degli *assiomi* (ovvero delle prime proprietà che non vengono dimostrate ma sapute a priori) su $\mathbb{N}$ in modo che tutte le *proprietà* (descritte in [[Struttura dell'insieme dei numeri naturali]]) siano deducibili da questi? 
Quindi sto riflettendo sui *fondamenti* della matematica, in particolare sui numeri *naturali* $\mathbb{N}$, poi per trovare una sistemazione particolarmente conveniente per noi.
# 2. Assiomi di Peano
Gli **assiomi di Peano** soddisfano tutte le seguenti regole enunciate:
(0.) Esiste un insieme $\mathbb{N}$ che denomineremo come l'insieme dei *numeri naturali*
1. Esiste un elemento di questo insieme, che chiamo $0$; $0 \in \mathbb{N}$
2. Esiste una funzione *successivo* $\sigma : \mathbb{N} \longrightarrow \mathbb{N}$ che soddisfa le seguenti proprietà:
	1. $\sigma$ è iniettiva, ovvero $\forall x_1, x_2 \in \mathbb{N}; x_1 \neq x_2 \implies \sigma(x_1) \neq \sigma(x_2)$
	2. $0 \not \in \sigma(\mathbb{N})$; ovvero lo $0$ non è successivo di nessun numero in $\mathbb{N}$.
	
3. (*principio di induzione*) Sia l'insieme $S \subseteq \mathbb{N}$ e si suppone che: $0 \in S$ e $\forall n, n \in S \implies \sigma(n) \in S$; allora $S = \mathbb{N}$. ^76b850

**OSS 2.1.** Dagli assiomi **2.1.** e **2.2.** appena enunciate è possibile dedurre che l'insieme $\mathbb{N}$ dev'essere necessariamente *infinito*: se il codominio della funzione $\mathbb{N}$ ha più elementi del dominio della funzione $\mathbb{N}$ (visto che $\sigma$ è iniettiva ed il numero $0$ non fa parte dell'immagine), **ma** si tratta del medesimo insieme $\mathbb{N} = A = B$, pertanto $\mathbb{N}$ dev'essere infinita in quanto è l'unico modo per soddisfare le condizioni dedotte.

**DEF 2.1. Il sistema di Peano**
Secondo gli seguenti assiomi appena enunciati, si può definire un **sistema di Peano** come la terna $(\mathbb{N}, 0, \sigma)$.

**OSS 2.2.** Si nota che la scelta dell'*"elemento iniziale"* (ovvero in questo caso $0$) è una scelta arbitraria che può essere cambiata; infatti si può *"spostare"* questo *"punto di partenza"* e si avrebbe comunque un *sistema di Peano* in cui valgono le stesse regole enunciate; infatti si può dimostrare che tutti i sistemi di Peano sono *isomorfi*, cioè che sono sostanzialmente lo stesso con qualche nome dei numeri alterati.
Questa osservazione diventerà molto importante per il *principio di induzione*. 

**APPROFONDIMENTO. (tratto da Analisi Matematica Vol. 1, E. Giusti).** Se si vuole essere bibliograficamente accurati, allora bisognerebbe specificare che ci sono altri quattro *assiomi di Peano*, che sono piuttosto assiomi logici e abbastanza intuitivi, ovvero: $$\begin{align}1. &\ \forall a \in \mathbb{N}, a=a; \\ 2. &\ \forall a,b \in \mathbb{N}, a=b \iff b=a \\ 3. &\ \forall a,b,c \in \mathbb{N}, (a=b) \land (b\land c) \implies a=c \\ 4. &\ (a=b)\vee b\in\mathbb{N} \implies a\in \mathbb{N}  \end{align}$$
# 3. Il principio di induzione
Uno degli *assiomi* più importanti appena enunciati è *l'assioma 4.*, che viene definito anche come il **principio di induzione**, che enuncia il seguente: $$\begin{align}[(S\subseteq \mathbb{N}) \land(0 \in S)\land(\forall n \in \mathbb{N}, n \in S \implies(n+1)\in S)] \implies S = \mathbb{N} \end{align}$$Ora, riscrivendolo in un modo più comprensibile, questo principio enuncia che:
1. Supponendo che esista un insieme $S \subseteq \mathbb{N}$ (verificando così la prima condizione)
2. Poi supponendo che un numero $0$ appartenga a $S$, quindi il *"punto di partenza"*
3. E infine se è vero che se un qualsiasi elemento $n$ appartiene a $S$, allora il suo successivo $\sigma(n)$ appartiene anch'esso a $S$,
4. Allora $S = \mathbb{N}$.
## 3.1. L'idea fondamentale
Per capire fino a fondo l'idea del *principio d'induzione* si può riflettere sulla funzione *successivo* $\sigma$, ovvero: cos'è?
Se $\sigma(0)=1$ e $\sigma(n) = n+1$, allora si può pensare che a partire da $0$ posso raggiungere tutti i numeri in $\mathbb{N}$. Ad esempio, $$5 = \sigma(4) = \sigma(\sigma(3)) = \sigma(\sigma(\sigma(2))) = \sigma(\sigma(\sigma(\sigma(1)))) = \sigma(\sigma(\sigma(\sigma(\sigma(0)))))$$
Si può utilizzare la seguente analogia: se voglio salire di un piano, devo percorrere un numero di gradini; se posso salire sul primo gradino, che lo chiamo gradino $0$, allora posso salire sul prossimo (analogia con la funzione successiva $\sigma$), poi sul prossimo e sul prossimo, finché raggiungo il prossimo piano.
# 4. Applicazioni del principio di induzione
Il **principio di induzione** può essere utilizzato principalmente per due scopi: o definire *oggetti* o verificare/dimostrare delle *proprietà* (ovvero dei [predicati unari](Predicati%20e%20Quantificatori.md)); nel primo caso si parla di **definizione per ricorrenza** e invece nel secondo di **dimostrazione per induzione**.
## 4.1. Dimostrazione per induzione
In questa pagina si parlerà principalmente di *dimostrazione per induzione*, corredato da vari esempi.
L'*idea* per la **dimostrazione per induzione** consiste nel seguente: 
1. Ho una *proprietà* (ovvero un [predicato unario](Predicati%20e%20Quantificatori.md)) $\mathcal{P}(n)$ e voglio dimostrare che essa è *verificata* per ogni $n \in \mathbb{N}$; 
2. Si crea quindi *l'insieme dei numeri che verificano $\mathcal{P}(n)$* e la chiamiamo $S$.
3. Ora per dimostrare $\mathcal{P}(n)$ basta verificare le due condizioni:
	1. $0 \in S$, ovvero $\mathcal{P}(0)$ è vera;
	2. $\forall n \in S \implies \sigma(n) \in S$; ovvero se $\mathcal{P}(n)$ è vera, allora $\mathcal{P}(n+1)$. Da notare che si tratta **solo** di dimostrare *l'implicazione materiale*.
	3. Allora $S = \mathbb{N}$, ovvero tutti i valori che rendono $\mathcal{P}(n)$ vera sono tutti i numeri in $\mathbb{N}$. 

Si vedono alcuni esempi sulla *dimostrazione* per induzione in [[Esempi di Induzione]]
## 4.2. Definizioni per ricorrenza
### DEF. 4.2.1. Successione a valori in $A$.
Sia $A$ un insieme qualunque e $f$ una funzione $$f: \mathbb{N} \longrightarrow A; n \mapsto f(n) = a_n$$Quindi saranno determinati $$f(0)=a_0, f(1) = a_1, \ldots, f(n) = a_n$$
Questa funzione $f$ si chiama, *tradizionalmente*, una **successione a valori in $A$** (cioè nell'insieme $A$).
Lo rappresentiamo con $$(a_n)_n: (a_0, a_1, \ldots, a_n, \ldots)$$
### DEF 4.2.2. La sommatoria
Si può definire la *sommatoria* $$\sum^{n}_{j=0}a_i = a_0 + \ldots + a_n$$in una maniera rigorosa usando il *principio di induzione* e la definizione di *successione*:
**DEF 4.2.2.** Si pone $$\sum_{j=0}^n a_n = s_n$$poi, ponendo il caso base $$s_0 = a_0$$e in seguito $$\forall n, s_{n+1} = s_n + a_{n+1}$$definendo così la sommatoria, in quanto sono partito dall'elemento *base* $a_0$, e potendo generare la sommatoria di $n+1$ a partire da $n$; pertanto la *successione* $(s_n)_n$ viene definita su $\mathbb{N}$ a partire da $0$.

### DEF 4.2.3. Produttoria
Similmente si definisce la *produttoria* $$\prod_{i=0}^na_i = a_0\cdot\ldots\cdot a_n$$ come $$\begin{align}&\prod_{i=0}^na_i = p_n \\ &p_0 = a_o \\ &\forall n, p_{n+1} = p_n \cdot a_{n+1}\end{align}$$
**ESEMPIO 4.2.3.1. Fattoriale.** Un caso particolare della *produttoria* è il cosiddetto **fattoriale**; la si definisce come $$\prod_{i=0}^{n}i = n!$$Quindi $$\begin{align}&0! = 1 \\ &\forall n;(n+1)! = n!(n+1)\end{align}$$