---
data: 2024-05-09
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Proprietà della Varianza
tipologia: appunti
stato: "1"
capitolo:
---
- - -
*Proprietà della varianza: comportamento rispetto allo scalamento e alla somma. Condizione equivalente per la nullità della varianza. Disuguaglianza di Čebyšëv. La somma di variabili aleatorie discrete aventi momento secondo finito ha momento secondo finito (con dimostrazione costruttiva).*
- - -
# 0. Voci Correlate
- [[Definizione di Varianza e Deviazione Standard]]
- [[Proprietà del Valore Medio]]
# 1. Comportamento della Varianza rispetto alle Operazioni
#Proposizione 
> [!prp] prime proprietà
> Sia $X$ una *variabile aleatoria* avente momento secondo finito. Allora valgono le seguenti:
> $$
> \left\{
> \begin{align}
> & \operatorname{var}X = E\left[X^2\right]-(E[X])^2
> \\ &\operatorname{var}(cX) = c^2 \operatorname{var}X \\ 
> & \operatorname{var}(X+c)=\operatorname{var}X
> \end{align}
> \right.
> $$
> Nella prima ho semplicemente definito un *modo semplice* per scrivere la varianza, nella ho $c^2$, dal momento che *non posso avere valori negativi*, e nella terza rimane uguale perché tanto sto traslando tutto assieme, sia la varianza che la media.
^f08894

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^f08894]]
Sono conti, usando la *linearità del valor medio* ([[Proprietà del Valore Medio#^82d56e]]). Si consiglia al lettore di farlo per esercizio. $\blacksquare$

# 2. Condizione Necessaria e Sufficiente per la Nullità della Varianza
Prima di passare ad un'altra proprietà della varianza, enunciamo il seguente lemma (una proprietà che è similmente presente per gli integrali).

#Lemma 
> [!lem] Condizione necessaria per variabili aleatori costanti
> Sia $X$ una *variabile aleatoria discreta* con *valor medio finito*. Allora vale che:
> - Se esiste un $c \in \mathbb{R}$ tale che $p(\{X = c\})=1$, cioè abbiamo la variabile aleatoria costante $X=c$ a meno di un insieme di probabilità nulla,
> - Allora se $X$ è *a segno costante* (quindi o $\geq 0$ o $\leq 0$) e la sua media è nulla ($E[X]=0)$, allora $p(\{X=0\})=1$ (ovvero il valore $c$ dev'essere $0$), a meno di un insieme di probabilità nulla. 
> 
> Ovvero se abbiamo una *variabile aleatoria costante con media nulla a segno costante*, la costante dev'essere *nulla*.
^b0dd0e

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^b0dd0e]]
Per $x \neq c$ abbiamo che l'evento $\{X=x\} \subseteq \mathcal{C}\{X=c\}$ (ovvero è incluso nel complementare degli eventi in cui $X$ è $c$). Di conseguenza vale che $p(\{X=x\})=1-1=0$. Ne segue dunque che la sua media è
$$
E[X]=\sum_{x \in \mathbb{R^{\pm} } }xp\{X=x\}=c p\{X=c\}=c
$$
Per ottenere la tesi basta imporre $E[X]=0$ e dunque ottenere che
$$
E[X]=0 \iff c=0
$$
Questo ci è garantito dal fatto che stiamo agendo su una *sommatoria a termini costanti*, ovvero non abbiamo *"oscillazioni"* tra numeri negativi e positivi. Si può dimostrare la tesi anche per assurdo, usando lo stesso fatto: infatti se ci fosse un $x\neq0$ tale che $p(\{X=x\})\neq 0$, allora varrebbe la sommatoria $\sum_x xp(\{X=x\})>0$, che sarebbe un assurdo per il punto di prima. $\blacksquare$

Da qui possiamo già avere l'idea della prossima proprietà: dato che la varianza è una *"specie di distanza"* di $X$ da $E[X]$, allora si pensa che se è nulla allora $X$ deve concentrarsi sul valore medio (e viceversa!).

#Proposizione 
> [!prp] condizione necessaria e sufficiente per la nullità della varianza
> Sia $X$ una *variabile aleatoria avente momento secondo finito*.
> Allora sono equivalenti:
> $$
> \operatorname{var}{X}=0 \iff \exists c \in \mathbb{R}: p(\{X =c\})=1\implies E[X]=c
> $$
^b15349

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^b15349]]
"$\impliedby$": Supponendo che $p(\{X=c\})=1$, per il lemma appena enunciato ([[#^b0dd0e]]) segue che $c=E[X]$. Poiché gli eventi $\{X=E[X]\}$ e $\{(X-E[X])^2=0\}$ sono uguali, abbiamo
$$
p(\{X=E[X]\})=p(\{(X-E[X])^2=0\})=1
$$
ancora per il lemma, applicato su $(X-E[X])^2$, abbiamo che sua media (ovvero la varianza di $X$) è nulla:
$$
E\left[(X-E[X])^2\right]=:\operatorname{var}{X}=0
$$
che prova la tesi. 
"$\implies$": Se $\operatorname{var}{X}=0$, abbiamo per definizione
$$
E\left[(X-E[X])^2\right]=0
$$
essendo il termine $(X-E[X])^2$ sempre positivo, per lo stesso lemma abbiamo
$$
p(\left\{(X-E[X])^2=0\right\})=1
$$
ma allora questo significa
$$
p(\{X-E[X]=0\})=1 \iff p(\{X=E[X]\})=1
$$
che prova la tesi. $\blacksquare$

# 3. Disuguaglianza di Čebyšëv
Vogliamo dare una *versione quantitativa* della proposizione appena enunciata: ovvero vogliamo considerare *intorni* ad $E[X]$.

#Proposizione 
> [!prp] disuguaglianza di Čebyšëv
> Sia $X$ una *variabile aleatoria discreta* con *momento secondo finito*. Allora vale la seguente disuguaglianza:
> $$
> \forall \varepsilon>0, \boxed{p(\{|X-E[X]| > \varepsilon\}) \leq \frac{\operatorname{var}{X} }{\varepsilon^2} }
> $$
> Ovvero abbiamo che la probabilità che $X$ disti dalla media $E[X]$ è controllata da un valore che decresce sempre. In termini matematici,
> $$
> \lim_{\varepsilon \to 0^+}p(\{|X-E[X]| > \varepsilon\})=0
> $$
^4a710c

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^4a710c]]
Prendiamo la variabile aleatoria $Y$ definita come
$$
Y:=\varepsilon^2 \chi_{\{|X-E[X]|>\varepsilon\}}
$$
ovvero se $X$ dista da $E[X]$ *"troppo"*, è nullo; altrimenti ho il valore $\varepsilon^2$.
Ho dunque due casi
$$
\left\{
\begin{align}
& \omega \in \{|X-E[X]| > \varepsilon\} \implies Y(\omega) = \varepsilon^2 \leq (X(\omega)-E[X])^2
\\ 
& \omega \in \{|X-E[X]|\leq \varepsilon\}\implies Y(\omega)=0\leq(X(\omega)-E[X])^2
\end{align}
\right.
$$
In ogni caso, ho sempre che il valore $Y$ è controllato da $(X-E[X])^2$ in alto. Dunque per la *monotonia del valor medio* ([[Proprietà del Valore Medio#^0b9728]]) ho
$$
\operatorname{var}{X}:=E[(X-E[X]^2)]\geq E[Y]=\varepsilon^2\cdot \underbracket{p\{|X-E[X]|>\varepsilon\} }_{E[\chi_{A}]=p(\{A\}) }
$$
Dividendo per $\varepsilon^2$ ottengo la tesi. $\blacksquare$

# 4. La Varianza della Somma di Variabili Aleatorie Discrete
Prima di dire il *comportamento della varianza* rispetto alla *somma*, vediamo se tale domanda è ben posta: ovvero se la somma delle variabili aleatorie ha momento secondo finito.

#Lemma 
> [!lem] la somma delle variabili aleatorie ha momento secondo finito 
> Siano $X_1,\ldots,X_N$ delle *variabili aleatorie discreti aventi momento secondo finito*.
> Allora anche la variabile aleatoria somma $Y:=\sum_n^N X_n$ ha *momento secondo finito*.
^b8e7ed

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^b8e7ed]]
Si dimostra per $N=2$, poiché si generalizza su $\mathbb{N}$ per induzione. Si tratta di vedere $Y^2$ come la composizione $g \circ X$ (dove $X=(X_1,X_2)$), con $g(x_1, x_2):=(x_1+x_2)^2$. Alla per il teorema sulla composizione delle variabili aleatorie ([[Proprietà del Valore Medio#^5ebd9e]]) si ha
$$
(\ast) \ \sum_{(x_1,x_2) \in \mathbb{R}^2}(x_1+x_2)^2 q(x)
$$
Il nostro obbiettivo è di provare che questa è convergente. Definendo $q_1, q_2$ le densità associate a $X_1,X_2$ si ha
$$
(\ast \ast) \ \sum_{x \in \mathbb{R}}x^2q_1(x)+\sum_{x \in \mathbb{R} }x^2q_2(x)<+\infty
$$
Quindi si tratta di ricavare (o maggiorare) da $(\ast)$ a $(\ast\ast)$. Possiamo usare la maggiorazione $(x_1+x_2)^2=x_1^2+2x_1x_2+x_2^2\leq 2(x_1^2+x_2^2)$ (per convincerci di questo basti pensare al quadrato del binomio). Allora si ha la catena delle disuguaglianze
$$
\begin{align}
\sum_{(x_1,x_2) \in \mathbb{R}^2}(x_1+x_2)^2 q(x) &\leq \sum_{(x_1,x_2) \in \mathbb{R}^2}2(x_1^2+x_2^2)q(x_1,x_2)\\ &=2\cdot\sum_{(x_1,x_2)  \in \mathbb{R}^2 }x_1^2q(x_1,x_2)+x_2^2q(x_1x_2)\\
\end{align}
$$
Adesso si tratta di spezzare la sommatoria in $\mathbb{R}^2$, dandoci
$$
2\cdot\sum_{(x_1,x_2)  \in \mathbb{R}^2 }x_1^2q(x_1,x_2)+x_2^2q(x_1x_2)=2\left(\underbracket{\sum_{x_1 \in \mathbb{R} }x_1^2 q_1(x_1)+\sum_{x_2 \in \mathbb{R} }x_2^2 q_2(x_2)}_{<+\infty}\right)
$$
che prova la tesi. $\blacksquare$


#Osservazione 
> [!rmk] calcolo della varianza
> Abbiamo solamente dimostrato che *possiamo* calcolarci la varianza, ma non l'abbiamo ancora fatto. Adesso lo facciamo per $N=2$. In particolare, analizziamo la relazione tra la varianza della *somma* e delle *componenti individuali*.
> 
> Notiamo preliminarmente che
> $$
> 2X_1X_2 = (X_1+X_2)^2-X_1^2-X_2^2
> $$
> Dato che tutti i membri a destra hanno *secondo momento finito*, lo ha pure $X_1X_2$. Adesso per calcolare la varianza basta sfruttare la linearità di $E$
> $$
> \begin{align}
> (X_1+X_2-E[X_1+X_2])^2&=(X_1-E[X_1]+X_2-E[X_2])^2
> \\ &= (X_1-E[X_1])^2+(X_2-E[X_2])^2\\&+2(E[X_1X_2]-E[X_1]E[X_2])
> \end{align}
> $$
> Portando tutto alla varianza, abbiamo
> $$
> \boxed{\operatorname{var}(X_1+X_2)=\operatorname{var}X_1+\operatorname{var}{X_2}+2(E[X_1X_2]-E[X_1]E[X_2])}
> $$
> Notiamo che *queste due* non corrispondono perfettamente; infatti c'è l'eccesso alla fine. Diamo un significato a questo con la nozione di *covarianza*.
^b2bc1a

