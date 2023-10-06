---
data: 2023-09-26
corso: "[[Analisi Matematica I]]"
argomento: Predicati
tipologia: appunti
---
*Definizione generale dei predicati corredata con degli esempi, breve focus sui quantificatori, negazione dei predicati con quantificatori*
- - -
# Definizioni generali
**DEF 1.** Si definisce il *predicato* come la parte del linguaggio che contiene delle variabili. Esempi di seguito per illustrare il concetto del *predicato*.

**ES 1.** Sia definisce il predicato $\mathcal{P}(x): \text{lo studente }x \text{ è più alto di 1,7m}$ 
Se $x$ è Pietro, allora $\mathcal{P}(x)$ si legge come *"Lo studente **Pietro** è più alto di 1,7m."*
In questo caso si ha un predicato *unario*, nel senso che accetta solo **una** variabile, ovvero $x$. 

**ES 2.** Sia $\mathcal{Q}(x,y):\text{Lo studente }x\text{ è amico della studentessa }y$.
Se $x$ è Pietro e $y$ è Francesca, allora $\mathcal{Q}(x,y)$ si legge come *"Lo studente **Pietro** è amico della studentessa **Francesca**"*.
In questo caso si ha un predicato *binario*; continuando così si può definire anche dei predicati $n$-ari.

**ES 3.** Sia $\mathcal{S}(x,y,z):\text{Nell'ospedale }x\text{, il medico }y\text{ ha sbagliato la diagnosi }z$. 

**DEF 2.** Si definisce il *quantificatore* come l'espressione che, nel nostro linguaggio, corrisponde a *"esiste"* oppure *"tutti"*. 
Essi sono i seguenti. $$ \begin{align}&\forall \text{ si legge come "per ogni"} \\ &\exists \text{ si legge come "esiste"}\end{align}$$

**OSSERVAZIONE 1.** Un modo per trasformare i predicati in una [Proposizione](Proposizioni) è di utilizzare i quantificatori appena definiti.

**ES. 1.1.** $\forall x \mathcal{P}(x)$ si legge come *"Ogni studente è più alto di 1,7m"*
Si nota che, mediante il quantificatore, il predicato $\mathcal{P}(x)$ è una proposizione; si definisce in questo caso $x$ come *variabile muta*.

Ora si può comporre frasi come la seguente.
$$\forall x, \mathcal{Q}(x,y) = \mathcal{R}(y)$$che si legge come *"Tutti sono amici di $y$"*; dopodiché si può anche comporre un'altra fase, come$$\exists y: (\forall x, \mathcal{Q}(x,y)) = \exists y: \mathcal{R}(y)$$che si legge come *"Esiste una studentessa $y$ di cui tutti sono amici"*

**ES 1.2.** Per comporre la frase *"In ogni ospedale c'è un medico che ha sbagliato tutte le diagnosi"* si usa la seguente: $$\forall x (\exists y:\forall z,\mathcal{S}(x,y,z)) $$
> [!warning] **OSSERVAZIONE 2.** Però si deve fare subito un'osservazione importante: in questo caso l'ordine conta, in quanto $$\forall x, \exists y: \mathcal{Q}(x,y)$$si legge come *"Ogni studente $x$ ha un'amica studentessa $y$"*; pertanto $$\exists y: (\forall x, \mathcal{Q}(x,y)) \neq \forall x, \exists y: \mathcal{Q}(x,y)$$

# Negazione dei predicati con i quantificatori
**OSSERVAZIONE 1.** Si prende in esame il seguente. $$\forall x, \mathcal{P}(x):\text{ogni studente }x\text{ è più alto di 1,7m}$$che si legge come *"Tutti i studenti sono più alti di 1,7m"*
Pensando col procedimento linguistico, la [negazione](Connettivi) di questa frase verrebbe come *"Esiste almeno un studente meno alto o uguale a 1,7m"*. 
Pertanto, $$\neg(\forall x,\mathcal{P}(x)) \iff \exists x:\neg \mathcal{P}(x) $$
> [!warning] **OSSERVAZIONE 2.** Da quanto detto si deduce che $\neg(\forall x,\mathcal{P}(x))$ NON è necessariamente equivalente a $\forall x:\neg \mathcal{P}(x)$, in quanto ci vuole **solo** un ente $x$ per rendere $\mathcal{P}(x)$ falsa.

Analogamente, lo stesso discorso vale per $$ \neg(\exists y: \mathcal{Q}(y)) \iff \forall y: \neg \mathcal{Q}(x)$$
**REGOLA GENERALE** Da qui si evince la regola generale per negare un predicato con i quantificatori; 
1. I quantificatori esistenziali devono essere scambiati con quelli opposti; nel senso che da il *quantificatore esistenziale* $\exists$ si trasforma nel *quantificatore universale* $\forall$, viceversa per $\forall$.
2. Si nega il predicato $\mathcal{P}(x)$.

**ES 1.** Riprendendo l'**esempio 2** da [[#Definizioni generali]], se si vuole dire che *"Non è vero che esiste una studentessa che è amica di tutti"*, si esegue così:
$$\neg(\exists y: \forall x, \mathcal{Q}(x,y)) = \forall y, \exists x: \neg \mathcal{Q}(x,y)$$
**ES 2.** Riprendendo l'**esempio 3** da [[#Definizioni generali]], per dire che *"Non è vero che in ogni ospedale c'è un medico che ha sbagliato tutte le diagnosi"* si fa il seguente: $$ \neg(\forall x, \exists y: \forall z, \mathcal{S}(x,y,z)) = \exists x: \forall y, \exists z:\neg\mathcal{S}(x,y,z)$$
**ES. 3** Richiamandoci alla definizione del *limite*, rigorosamente definito dal matematico Cauchy nel suo scritto *Cours d'analyse* (1821), ovvero $$\begin{align}&\lim_{x\to x_0}f(x)=L \\ &\text{è come dire} \\ &\forall \varepsilon>0, \exists\delta>0 : 0 < | x-x_0|<\delta \implies|f(x)-L|<\varepsilon\end{align} $$Se si vuole negare che esiste il limite $L$ in $x_0$, allora ciò significa, dal punto di vista matematico, il seguente. $$\begin{align} &\exists\varepsilon>0:\forall\delta>0, \neg(p\implies q) \\ &\text{ove }p=0 < | x-x_0|<\delta,\space q=|f(x)-L|<\varepsilon \\ &\exists \varepsilon>0:\forall\delta>0, \neg(\neg p\vee q) = p\land q \\ &\exists\varepsilon>0: \forall\delta>0, 0<|x-x_0|<\delta \land|f(x)-L|\ge\varepsilon \end{align}$$