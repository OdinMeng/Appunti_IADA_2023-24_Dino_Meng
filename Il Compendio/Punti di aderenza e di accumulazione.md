---
data: 2023-10-23
corso: "[[Analisi Matematica I]]"
argomento: Punti di aderenza e di accumulazione
tipologia: appunti
stato: "1"
---
*Definizione di punto di aderenza e di accumulazione. La chiusura e il derivato di un insieme. Primo teorema di Bolzano-Weierstraß.*
- - -
# 1. Punti di aderenza (o di chiusura)
#Definizione 
> [!def] Definizione 1.1. (Punto di aderenza o di chiusura per un insieme, chiusura di un insieme).
> Sia $E \subseteq \mathbb{R}$, $x_0 \in \mathbb{R}$.
> Allora $x_0$ si dice *punto di chiusura (o di aderenza)* per $E$ se è vera la seguente: $$\forall r>0: ((x_0-r, x_0+r)\cap E)\neq \emptyset$$
> Ovvero in ogni *palla/intorno centrato di $x_0$* ([[Intorni#^533fec]]) devono esserci elementi di $E$.
> Inoltre definiamo l'insieme dei *punti di chiusura* dell'insieme $E$ si dicono la *chiusura (o aderenza) di $E$*, scritto come $\overline{E\ }$.

#Esempio 
> [!ex] Esempio 1.1.
Consideriamo l'insieme $E = (1, 2)$ e voglio trovare gli elementi di $\overline{E\ }$.
Per farlo è possibile disegnare il grafico di $E$, poi *"testare"* ogni elemento della retta $\mathbb{R}$ per vedere quali sono i potenziali elementi di $\overline{E\ }$.
Si evince che:
I numeri $0, \frac{1}{2}$ *non* sono *punti di aderenza* per $E$, in quanto è possibile individuare *almeno* un intorno fuori da $E$ (ovvero che non contenga elementi di $E$).
1 è un *punto di aderenza*, in quanto per tutti gli intorni in $x_0$ abbiamo sempre almeno un elemento di $E$; infatti si deve sempre *"andare a destra"*, *"entrando"* in $E$. Analogo il discorso per $2$.
In conclusione è possibile individuare $$\overline{E\ } = [1, 2]$$

**FIGURA 1.1.** (*Esempio 1.1.*)
![[Pasted image 20231103215330.png]]

#Osservazione 
> [!oss] Osservazione 1.1. (proprietà della chiusura)
Osserviamo che per ogni insieme è vera che $$E \subseteq \overline{E \ }$$ (*da rielaborare meglio, forse da dimostrare formalmente*)

#Esempio 
> [!ex] Esempio 1.2.
Considero l'insieme $$E = \{\frac{1}{n}, n \in \mathbb{N} \diagdown \{0\}\}$$poi voglio trovare le seguenti: $\overline{E \ }, E^{\circ}, \partial E$.
$\overline{E \ } = E \cup \{0\}$ e $\partial E = E \cup \{0\}$; a questi insiemi aggiungiamo il numero $0$ in quanto *per l'Archimedeità di $\mathbb{R}$* ([[Conseguenze dell'esistenza dell'estremo superiore]], **TEOREMA 3.1.**) è sempre possibile trovare un $n$ tale che$$\forall \varepsilon > 0, \exists n :0 <\frac{1}{n}< \varepsilon$$ 
$E^{\circ} = \emptyset$; infatti $E$ è definita tramite gli $\mathbb{N}$, che presenta dei *"buchi"* in $\mathbb{R}$. 

#Esempio 
> [!ex] Esempio 1.3.
Voglio studiare l'insieme dei *numeri razionali* $\mathbb{Q}$ ([[Richiami sui Numeri Razionali]]).
Prima di tutto, sicuramente $$\overline{\mathbb{Q}} = \mathbb{Q} \cup \mathbb{R} = \mathbb{R}$$per la *densità di $\mathbb{Q}$ in $\mathbb{R}$* ([[Conseguenze dell'esistenza dell'estremo superiore#^e279b1]]). Ovvero da ciò consegue che prendendo un punto $q_0 \in \mathbb{Q}$, è possibile trovare sempre dei numeri razionali per qualsiasi *intorno* con $r >0$. Infatti $$\forall r > 0, \exists a \in \mathbb{Q}: q_0+r>a>q$$
In secondo luogo vediamo che l'insieme dei punti di frontiera $\partial \mathbb{Q}$ è anch'esso $\mathbb{R}$ per motivi analoghi.
In definitiva, per *l'assioma di Dedekind* ([[Assiomi dei Numeri Reali#^c29076]]) sappiamo che tra un numero razionale $q_0$ e un altro numero (in questo caso prendiamo $q_0 + r,  \forall \varepsilon >0$) dev'esserci un numero *irrazionale* che non appartiene a $\mathbb{Q}$; allora non ci sono dei *punti interni* ([[Punti interni, esterni e di frontiera#^c78831]]).

## Proprietà della chiusura
Possiamo enunciare le seguenti proprietà per la *chiusura* di $E$.

#Teorema 
> [!thm] Teorema 1.1. (Proprietà della chiusura $\bar{E \ }$).
> Sia $E \subseteq \mathbb{R}$, allora sono vere che:
> 1. $\overline{E \ }$ è un *insieme chiuso* ([[Insiemi aperti e chiusi#^36f40d]]). Per provare questo, bisognerebbe dimostrare che l'insieme complementare della chiusura di $E$ è *aperto*; quindi bisogna considerare i punti che non stanno né in $E$ né nella sua chiusura $\overline{E \ }$ e poi dimostrare che esiste un'intervallo di ogni punto che non sta nella chiusura.
> 2. $\overline{E \ }$ è *il più piccolo chiuso* che contiene $E$. Quindi ho in mente una *relazione d'ordine* ([[Relazioni]], **DEF 4.1.**), ovvero dal punto di vista di quella d'inclusione. Ovvero $$A > B \iff B\subseteq A$$
> 3. Un insieme $E$ è *chiuso* se e solo se $\overline{E \ } = E$
# 2. Punti di accumulazione
#Definizione 
> [!def] Definizione 2.1. (Punto di accumulazione, derivato di un insieme).
> Sia $E \subseteq \mathbb{R}$, $x_0 \in \mathbb{R}$. Si dice che $x_0$ è un **punto di accumulazione di $E$** se è vera che 
> $$\forall r > 0, (]x_0-r, x_0+r[ \ \cap E) \diagdown\{x_0\} \neq \emptyset$$
> ovvero un *punto di aderenza* escludendo però il punto $x_0$ stesso; quindi un punto $x_0$ è di accumulazione per $E$ se in ogni intorno di $x_0$ ci sono punti di $E$ diversi da se stesso.
> 
> L'insieme dei *punti di accumulazione per $E$* si chiama *derivato* di $E$, demarcata col simbolo $$\mathcal{D}E$$
> e si legge come *"d corsivo maiuscolo"*.
^b12c00

#Osservazione 
> [!oss] Osservazione 2.1. (significato di $\pm \infty$ punto di accumulazione)
   Come abbiamo definito degli *intorni di $+\infty$ o di $-\infty$* ([[Intorni#^4ff870]]) è possibile definire anche $+\infty$ o $-\infty$, in una maniera analoga, come *punti di accumulazione* di un insieme $E$. Un $+\infty$ è punto di accumulazione per $E$ vuol dire che si verifica il seguente: $$\forall M >0, (M, +\infty)\cap E \neq \emptyset $$ovvero $$\forall M > 0, \exists x_0 \in E: x > M$$ovvero che per ogni semiretta a partire da $M$, dev'esserci almeno un elemento in comune tra questa semiretta e l'insieme $E$ con $+\infty$ come punto di accumulazione.
   Analoga la definizione di un insieme $E$ che ha $-\infty$ come punto di accumulazione.
   Questo diventerà importante in particolare per studiare i *limiti di successioni* ([[Limite di Successione]])

#Teorema 
> [!thm] Teorema 2.1. (di caratterizzazione degli punti di accumulazione).
> Sia $E \subseteq \mathbb{R}$, $x_0 \in \mathbb{R}$. $x_0$ è *punto di accumulazione per $E$* se e solo se in *ogni* intorno di $x_0$ ci sono *infiniti* punti di $E$. 
^622755

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 2.1.* ([[#^622755]])
Questa dimostrazione si articola in due sotto-dimostrazioni.
"$\impliedby$": Dimostriamo che *se in ogni intorno di $x_0$ ci sono infiniti punti di $E$, allora $x_0$ è di accumulazione per $E$*: questo è evidentemente vero, in quanto se in ogni intorno di $x_0$ ci sono infiniti punti di $E$, allora dev'esserci almeno un elemento di $E$ in questo intorno diverso da $x_0$.
"$\implies$": Ora notiamo il viceversa; ovvero che *se $x_0$ è di accumulazione per $E$ allora in ogni suo intorno ci sono infiniti punti di $E$.*
Per dimostrare questa proposizione, procediamo dimostrando la *contronominale*; ovvero che se in *ogni intorno di $x_0$ ci sono elementi finiti di $E$, allora $x_0$ non è punto di accumulazione per $E$* ([[Logica formale - Sommario]]); in una maniera simile si può dimostrare per assurdo.
Supponiamo quindi che $x_0$ abbia un intorno in cui ci sono un numero finito punti di $E$: allora 
$$(x_0-r, x_0+r) \cap E = \{x_1, x_2, \ldots, x_k\}$$(*figura 2.1.*) 
Considero dunque $r = \min(\{ d(x_0, x_j), \forall j \in \{ 1, 2, \ldots, k\}\})$ ovvero la *minima* distanza tra $x_0$ e un qualunque punto di $E$. Allora risulta che 
$$((x_0-r, x_0+r) \cap E)\diagdown \{x_0\} = \emptyset$$
il che ci dimostra che $x_0$ *non* è di accumulazione per $E$. (oppure è un punto isolato).

**FIGURA 2.1.** (*Idea del passaggio finale*)
![[Pasted image 20231103215401.png]]

## Esempio di derivato di un insieme
#Esempio 
> [!ex] Esempio 2.1.
   Prendiamo di nuovo l'intervallo $$E = (1,2)$$E voglio individuare $\mathcal{D}E$. Con lo stesso approccio di *esempio 1.1.*, *"testiamo"* dei elementi della retta reale per vedere se possono essere dei *punti di accumulazione*.
Ovviamente $0$ non può essere punto di accumulazione.
$1, 2$ sono *punti di accumulazione* per $E$ in quanto disegnando un qualsiasi intorno di questi punti, si deve per forza disegnare un intervallo che contenga elementi di $E$. Analogo il discorso per i numeri $1 \leq x \leq 2$.
Allora $$\mathcal{D}E = [1,2]$$

#Esempio 
> [!ex] Esempio 2.2.
   Prendiamo l'insieme $$E = \{\frac{1}{n}, n \in \mathbb{N} \diagdown \{0\}\}$$
   Con lo stesso approccio di sempre, individuiamo gli elementi di $\mathcal{D}E$.
   Prima di tutto, vediamo che $1$ non è punto di accumulazione. Infatti è possibile individuare un intorno $(1-r, 1+r)$ che non abbia elementi di $E$: basta porre $r = 0,1$.
   Analogo discorso per tutti gli elementi $n$ ponendo $r = | \frac{1}{n^2+n}|$.
   Finalmente vediamo che $0$ è punto di accumulazione per l'*Archimedeità* dei reali ([[Conseguenze dell'esistenza dell'estremo superiore]], **TEOREMA 3.1.**). Infatti per qualsiasi $r$ è sempre possibile trovare $n \in \mathbb{N}$ tale che $$0 < \frac{1}{n} < 0+r$$
Allora $\mathcal{D}E = \{0\}$.

#Esempio 
> [!ex] Esempio 2.3. (punti di accumulazione per $\mathbb{N}$)
>  Prendiamo i *numeri naturali* ([[Numeri Naturali - Sommario]]). 
Si scopre che $\mathcal{D}\mathbb{N} = \emptyset$; non esistono i numeri naturali che siano dei *punti $\mathbb{R}$ di accumulazione per $\mathbb{N}$*, in quanto tutti questi numeri distano tra di loro. Basta infatti prendere l'intorno in $n \in \mathbb{N}$ di raggio $0,5$. Invece è possibile dire che $+\infty$ è punto di accumulazione per $\mathbb{N}$, in quanto grazie all'*Archimedeità dei reali* ([[Conseguenze dell'esistenza dell'estremo superiore#^d95d40]]) si verifica la seguente condizione: $$\forall M >0, \exists n \in \mathbb{N}: n>M \text{ dove }\varepsilon=1 $$ ^740a07
Questo esempio si rivelerà fondamentale per la definizione di *limite di successione* ([[Limite di Successione#^ef60f6]]).
