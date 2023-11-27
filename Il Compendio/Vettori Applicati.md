---
data: 2023-09-28
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Vettori Applicati
tipologia: appunti
stato: "1"
---
*Definizione basilare del vettore applicato, operazioni tra essi, vettore nullo, limitazioni dei vettori applicati, alcune proprietà.*
- - -
# Premessa
Ci mettiamo nel contesto della *geometria euclidea*, i quali postulati vengono descritti dagli *Elementi* (uno dei testi fondamentali della matematica) di Euclide (uno dei matematici greci più importanti); quindi ricorreremo a dei concetti geometrici che vengono dati come *elementi primitivi*, come il *punto*, il *piano*, la *retta*, $\ldots$

# DEF 1. Vettore Applicato

^8447d6

Un **vettore applicato** è un segmento orientato, caratterizzato dunque da:
- **Punto di applicazione**; ovvero il *"punto di partenza"* $A$ del vettore $\overrightarrow{AB}$.
- **Direzione**; essa è quella data dalla *retta* su cui giace il vettore
- **Verso**; esso è uno dei due *orientamenti* dalla retta
- **Modulo o lunghezza**; viene indicata con $|\overrightarrow{AB}|$

Graficamente il vettore si rappresenta così:
![[Vektor.png]]
Dal grafico si evince che un **vettore applicato** è determinato da una [coppia ordinata](Coppie%20Ordinate%20e%20Prodotto%20Cartesiano) $(A, B)$ di punti; in tal caso il vettore si denota $\overrightarrow{AB}$
## DEF 1.2. Vettore applicato nullo
Per ogni *punto di applicazione* $A$, esiste il **vettore applicato nullo** $\overrightarrow{AA}$, che non ha un verso definito.
## DEF 1.3. Somma dei due vettori applicati
I *vettori applicati* si possono **sommare** tra di loro, purché il punto finale del primo vettore coincida con il punto iniziale del secondo, ovvero purché siano della forma $$\overrightarrow{AB}, \overrightarrow{BC}$$**DEF 1.3.** Definiamo$$\overrightarrow{AB}+\overrightarrow{BC} = \overrightarrow{AC}$$
**OSS 1.3.1** Se i due vettori non sono della forma appena descritta sopra, ovvero $$\overrightarrow{AB}, \overrightarrow {CD} \text{ ove }B\neq C$$allora non è possibile sommare questi due vettori; infatti questo rappresenta la *prima limitazione* dei vettori liberi.

**OSS 1.3.2.** Se prendiamo $$\begin{align}\overrightarrow{AB}+\overrightarrow{BB} &=\overrightarrow{AB} \\ \overrightarrow{AA}+\overrightarrow{AB} &= \overrightarrow{AB}\end{align}$$notiamo che $\overrightarrow{BB}$ e $\overrightarrow{AA}$ si comportano come il numero $0$ con l'addizione; **però** notiamo che questi due sono dei vettori applicati *distinti* e non uguali, in quanto essi sono definiti dai loro rispettivi *punti di applicazione* (e ovviamente $A\neq B$). Pertanto è come se si avesse un numero $0$ per ogni punto nel piano, dandoci così la *seconda limitazione* dei vettori liberi.

**PROP 1.3.1: LA PROPRIETA' ASSOCIATIVA.** La somma di vettori applicati, quando possibile, soddisfa la *proprietà associativa*;
	**DETOUR.** Nei numeri reali $\mathbb{R}$ la *proprietà associativa* della somma dice il seguente.
	$$\forall a,b,c \in \mathbb{R} \text{ vale che } (a+b)+c=a+(b+c)$$Infatti grazie a questa proprietà è possibile scrivere la somma per un $n$ numero di numeri senza nessuna ambiguità; ad esempio $a+b+c$.
	**DIM.** Dobbiamo dimostrare che per ogni vettore applicato $\overrightarrow{AB}, \overrightarrow{BC}, \overrightarrow{CD}$ vale che $$(\overrightarrow{AB} +\overrightarrow{BC}) +\overrightarrow{CD} = \overrightarrow{AB} +(\overrightarrow{BC} +\overrightarrow{CD}) $$Ora, usando la definizione di *somme dei vettori* (**DEF 1.3.**), possiamo scrivere: $$ \begin{align}&\text{membro sx. }(\overrightarrow{AB}+\overrightarrow{BC}) + \overrightarrow{CD} = \overrightarrow{AC} + \overrightarrow{CD} = \overrightarrow{AD}  \\ &\text{membro dx. }\overrightarrow{AB} + (\overrightarrow{BC} + \overrightarrow{CD}) = \overrightarrow{AB} + \overrightarrow{BD} = \overrightarrow{AD} \space\space\blacksquare\end{align}$$Oppure si può anche avvalere dell'interpretazione grafica:
	![[Prop ass.png]]

## DEF 1.4. Moltiplicazione di un vettore per uno scalare
**DEF 1.4.** Dato un vettore applicato $\overrightarrow{AB}$ e un numero reale $a \in \mathbb{R}$, definiamo $a \cdot \overrightarrow{AB}$ in questo modo: $$\begin{align}&\text{- Se }a=0,\space a\cdot\overrightarrow{AB} := \overrightarrow{AA}\\&\text{- Se }a>0,\space a\cdot\overrightarrow{AB}:=\text{Un vettore applicato in }A\text{ con le proprietà A)} \\ &\text{- Se }a<0,\space a\cdot\overrightarrow{AB} :=\text{Un vettore applicato in A} \text{ con le proprietà B)} \end{align} $$
- **A)** Con la *stessa* __direzione__ e lo *stesso* __verso__, **ma** con __modulo__ uguale a $a\cdot|\overrightarrow{AB}|$;
- **B**) Con la *stessa* __direzione__, il **verso** *opposto* dal vettore originario $\overrightarrow{AB}$ e con **modulo** uguale a $|(a)|\cdot|\overrightarrow{AB}|$, ovvero $-(a)\cdot|\overrightarrow{AB}|$ ($|a|$ rappresenta il valore assoluto)

## OSS 1.1. Parallelismo tra equazioni lineari e vettori applicati
Si nota un parallelismo tra due argomenti appena affrontati, ovvero le [soluzioni di un'equazione](Equazioni%20e%20soluzione) e i [[Vettori Applicati]]. Infatti, da una certa *somma di vettori* si ottiene un altro vettore; da una *moltiplicazione di un vettore con uno scalare* si ottiene un altro vettore, come proprio accade con le *soluzioni di un'equazione* (osservatosi in [[Equazioni e Proprietà Lineari]]). 
Infatti entrambi i *vettori applicati* e le *soluzioni lineari* compongono dei **spazi vettoriali**; come lo stesso accade con le *soluzioni alle equazioni differenziali lineari*.