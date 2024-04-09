---
data: 2023-09-27
corso: "[[Analisi Matematica I]]"
argomento: Operazioni con gli Insiemi
tipologia: appunti
---
*Elenco di operazioni che possono essere svolte con/tra [insiemi](Teoria%20degli%20Insiemi.md).*
- - -
# Operazioni con gli insiemi: breve introduzione ed elenco
E' possibile formare un nuovo [insieme](Teoria%20degli%20Insiemi.md) partendo da uno o più insiemi, ed è possibile farlo grazie alle operazioni con gli insiemi.
In particolare ne studieremo tre: l'*insieme complementare*, l'*intersezione* e l'*unione*. ^080cd5
# Insieme Complementare
Sia $\mathcal{U}$ l'*insieme universo/ambiente* e $A$ un insieme, allora si definisce $$\mathcal{C}_{\mathcal{U}}A := \{x\in \mathcal{U}:x\not\in A\}$$Secondo il *diagramma Eulero-Venn*, essa si rappresenta come:
![[Insieme complemento.png]]
**OSS.** Si nota che l'*insieme complementare* dipende dall'*insieme universo* scelto; quindi si tratta comunque di un'*operazione binaria* (?, in realtà da chiedere al prof. come specifica), in quanto si deve fare la scelta di due variabili. 
# Intersezione, Unione
Altre due operazioni importanti sono *l'intersezione* e *l'unione*.
## Intersezione
Si definisce l'intersezione $$A\cap B := \{x\in\mathcal{U}: x\in A \land x\in B \} $$A seguito la rappresentazione in *diagramma di Eulero-Venn*
![[Intersezione.png]]
## Unione
Si definisce l'unione $$A\cup B := \{x\in\mathcal{U}: x\in A \vee x\in B \} $$A seguito la rappresentazione in *diagramma di Eulero-Venn*
![[Unione.png]]
## OSS 1. Nesso tra matematica logica e teoria degli insiemi
E' interessante notare che le operazioni di intersezione $\cap$ e unione $\cup$ costituisce una specie di ponte, o collegamento tra la [[Teoria degli Insiemi]] e la logica formale, particolarmente con i [[Connettivi]]. 
Si nota che da un lato viene usata la forma intensiva per rappresentare un insieme, mentre dall'altro vengono usati i connettivi $\land$ e $\vee$ per rappresentare le proprietà caratterizzanti. 
Inoltre si osserva un parallelismo piuttosto interessante tra $\cup, \vee$ e $\cap, \land$. 
## OSS 2. Proprietà tra intersezione e l'unione
Si osservano delle **proprietà** di queste due operazioni quanti si interagiscono tra di esse.
**PROPRIETA' 1.** Proprietà associativa $$\begin{align} (A\cup B)\cup C &= A\cup(B \cap C) \\(A\cap B)\cap C &= A \cap(B\cap C)\end{align}$$
**PROPRIETA' 2.** Proprietà simmetrica $$\begin{align} A\cup B &= B \cup A\\A\cap B &= B \cap A\end{align}$$
**PROPRIETA' 2.** Proprietà distributiva $$\begin{align} A\cup(B \cap C) &= (A\cup B) \cap(B\cup C) \\A \cap(B\cup C)&= (A \cap B)\cup(A\cap C)\end{align}$$
E' possibile anche illustrarli tramite i diagrammi di Eulero-Venn.