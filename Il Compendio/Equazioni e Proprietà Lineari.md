---
data: 2023-09-26
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Equazioni Lineari
tipologia: appunti
---
*Equazioni Lineari* 
- - -
# Equazioni Lineari
Un'[equazione](Equazioni%20e%20soluzione) lineare è un'equazione algebrica di primo grado.

**ESEMPIO 1.** Consideriamo la seguente equazione: $$3x+y-2z=0$$^ex1
Intanto osserviamo che in questa equazione sono presenti tre variabili, ossia $x, y, z$.
Richiamandoci alla definizione della [soluzione](Equazioni%20e%20soluzione), risolvere quest'equazione significa determinare una (o tutte) le terne di numeri $(x,y,z)$ tali che, se sostituiamo tali numeri alle variabili nel membro sinistro, si ottiene $0$. 
**OSSERVAZIONE 1.1.** Se in un'equazione a una variabile (come nell'[Esempio 1.](Equazioni%20e%20soluzione)) ci viene chiesto di determinare solo **un** numero, in questo esempio ogni soluzione dev'essere costituito da **tre numeri**; quindi ci viene chiesta una *terna* di numeri, che devono apparire insieme. Il numero che costituisce la terna si chiama *entrata*.
**ESEMPIO 1.1.1.** La terna $(x=0, y=0, z=0)$ è una soluzione all'equazione, infatti $3*0+1*0-2*0=0+0-0=0$
Parimenti, anche la scelta $(x=1, y=1, z=2)$ ovvero la terna $(1,1,2)$ è una soluzione perché $3*1+1*1-2*2=3+1-4=0$.
Similmente anche $(0,2,1)$ è soluzione.

# Sistema di Equazioni Lineari
Un *sistema di equazioni lineari* è costituito da più equazioni lineari; una soluzione viene considerata tale quando soddisfa tutte le equazioni nel sistema.
**ESEMPIO** Un esempio di equazione lineare che verrà preso in considerazione è la seguente. $$\begin{cases}3x+y-2z=0\\-2x-2y+2z=0\\2x-0y-z=0 \end{cases} $$ 
# Proprietà lineari
C'è un motivo per studiare le equazioni lineari, in quanto emergono dei nuovi comportamenti particolari.
Ora accade che queste ultime 2 soluzioni in *esempio 1.1.1.* (vedi sopra) che abbiamo esibito possiamo costruire delle altre soluzioni, sfruttando le proprietà di base delle operazioni tra numeri, in particolare quella **associativa, commutativa e distributiva**.
Più concretamente si mostra che $$(2,2,4)$$ è anch'essa soluzione all'[esempio 1.](#^ex1)
Però si può vedere questa terna nel modo seguente:
- Si parte da $(1,1,2)$
- Si moltiplica ogni *entrata* della terna per $2$, ottenendo $(2,2,4)$
In una maniera più compatta introduciamo la seguente notazione. $$ (2,2,4) = 2(1,1,2)$$
Riprendiamo la quantità che abbiamo considerato prima $$\begin{align}3*2+1*2-2*4 &= 3(2*1)+1(2*1)-2(2*1) \\ prop. associativa&= (3*2)1+(1*2)1-(2*2)2 \\ prop. commutativa &= 2(3*1)+2(1*1)-2(2*2) \\  prop. distributiva&= 2(3*1 + 1*1 - 2*2) \\ (1,1,2)\spaceè\space soluzione&= 0\end{align}$$ Pertanto si capisce che se moltiplichiamo la soluzione per un numero, otteniamo un'altra soluzione.
Lo stesso ragionamento ci mostra che la terna $$(37, 37, 74)$$ è soluzione, perché $$3*37+1*37-2*74 = 37(3*1+1*1-2*2) = 37*0 = 0$$
## PRIMA PROPRIETA'
Generalizzando, vediamo che $\forall \alpha \in \mathbb{R}$ la terna $(\alpha, \alpha, 2\alpha) = \alpha(1,1,2)$ è soluzione.

**OSSERVAZIONE 2.** Tuttavia così non si ottiene *tutte* le soluzioni di un'equazione; ad esempio la terna $(0,2,1)$ è anche una soluzione all'*esempio 1.* (vedi all'[inizio](#^ex1)). 
Si dice che queste due soluzioni sono *linearmente indipendenti*.

## SECONDA PROPRIETA'
Analizziamo ora un secondo fenomeno. Si mostra che $$(1, 3, 3)$$ è soluzione. 
**OSSERVAZIONE 3.** $$ \begin{align}1&=1+0 \\ 3&=1+2 \\ 3&=2+1\end{align}$$ Ovvero, in una notazione più compatta, $$ (1,3,3) = (1,1,2) + (0,2,1)$$Ora calcoliamo $$\begin{align} 3*1+1*3-2*3 &= 3(1+0) + 1(1+2) - 2(2+1) \\ prop. distributiva &= (3*1+1*1-2*2) + (3*0+1*2-2*1) \\ entrambi\space sono\space soluzioni &= 0+0=0 \end{align}$$
# Generalizzazioni
Condensando quanto osservato, troviamo le tre proprietà principali:
1. La terna $(0,0,0)$ è soluzione
2. Se $(\bar{x}, \bar{y}, \bar{z})$ è soluzione, allora $\forall \alpha \in \mathbb{R}$ anche $\alpha(\bar{x}, \bar{y}, \bar{z})$ è soluzione.
3. Se $(\bar{x}, \bar{y}, \bar{z})$, $(\hat{x}, \hat{y}, \hat{z})$ sono due soluzioni, allora anche $(\bar{x}, \bar{y}, \bar{z})+(\hat{x}, \hat{y}, \hat{z}) = ((\bar{x}+\hat{x}), (\bar{y}+\hat{y}), (\bar{z}+\hat{z}))$ è soluzione

