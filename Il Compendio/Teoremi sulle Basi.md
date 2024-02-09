---
data: 2023-11-14
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Teoremi sulle Basi
tipologia: appunti
stato: "1"
---
*Tutti i teoremi sulle basi: teorema di estrazione di una base, teorema del completamento/estensione, lemma di Steinitz, teorema sul numero di elementi delle basi. Cenni/idee alle dimostrazioni di questi teoremi*
- - -
# 1. Teorema di estrazione di una base
Questo primo teorema, come ci suggerisce il titolo, serve per *"estrarre"* una base da uno *spazio vettoriale* ([[Spazi Vettoriali]]), ovvero di determinarla.

#Teorema 
> [!math|{"type":"theorem","number":"1.1.","setAsNoteMathLink":false,"title":"Teorema di estrazione di una base","label":"teorema-di-estrazione-di-una-base"}] Teorema di estrazione di una base.
> Sia $V$ un *K-spazio vettoriale*, *finitamente generato*, sia $\{v_1, \ldots, v_k\}$ un *sistemi di generatori* di $V$.
> Allora esiste $\mathcal{B} \subseteq \{v_1, \ldots, v_k\}$ tale che $\mathcal{B}$ è *base* di $V$.
^938ed7

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema di estrazione* ([[#^938ed7]])
*Nota: questa non è una vera e propria dimostrazione, bensì un semplice cenno. Ci si focalizza in particolare su un algoritmo per scopi informatici.*
In questa dimostrazione procediamo per *costruzione*, ovvero troviamo la *base* $\mathcal{B}$ mediante il cosiddetto *algoritmo* dello scarto.
Inoltre supponiamo $V \neq \{0\}$.

**ALGORITMO** (*dello scarto*)
1. Inizializziamo la *"lista vuota"* $\mathcal{B} = \{\}$ (nel linguaggio C sarebbe un vettore/array, in Python una lista)
2. Iterare tutti gli elementi di $(v_1, \ldots, v_k)$ (equiv. `for v in V`)
	1. Consideriamo $v_1$ di: se $v_1 = 0$, allora passiamo al prossimo; altrimenti aggiungo $v_1$ a $\mathcal{B}$.
	**ATTENZIONE!** Per $0$ ovviamente si intende il *vettore nullo* di $V$.
	1. Consideriamo $v_2$: se $v_2=0$ oppure $v_2 \in \text{span}(\mathcal{B})$, allora procedere al prossimo; altrimenti aggiungo questo a $\mathcal{B}$.
	2. Ripetere fino a $v_k$.
3. Alla fine otteniamo una lista che è sicuramente contenuto in $(v_1, \ldots, v_k)$ che si può dimostrare essere base di $V$ (*omessa, anche se semplice da dimostrare*).

**PSEUDOCODICE** (*quasi-Python*)
```python
def TrovaBase(vettore_nullo, sistema_di_generatori):
	B = []
	for v in sistema_di_generatori:
		if v == vettore_nullo or v in span(B):
			continue
		else:
			B.append(v)
		# Alternativamente si può solo negare la condizione e scrivere
		if v != vettore_nullo and v not in span(B):
			B.append(v)
	return B
```
# 2. Teorema del completamento
Ora consideriamo un teorema *"speculare"* a parte, ovvero a partire da un insieme di *vettori linearmente indipendenti* possiamo avere una *base* aggiungendo degli elementi (o anche nessuno).

#Teorema 
> [!math|{"type":"theorem","number":"2.1.","setAsNoteMathLink":false,"title":"Teorema del completamento/estensione","label":"teorema-del-completamentoestensione"}] Teorema del completamento/estensione.
> Sia $V$ un *K-spazio vettoriale*, *finitamente generato*, siano $\{v_1, \ldots, v_p\}$ elementi di $V$ *linearmente indipendenti*.
> Allora esiste una base $\mathcal{B}$ di $V$ tale che
> $$ \{v_1, \ldots, v_p\}\subseteq \mathcal{B}$$
> in parole gli elementi $\{v_1, \ldots, v_p\}$ possono essere *"completati"* per formare una base.
^dbffba

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema di estensione/completamento* ([[#^dbffba]])
*Nota: anche qui diamo semplicemente un'idea della dimostrazione.*
Dato che $V$ è *finitamente generato*, esiste un insieme di vettori di $V$ $\{w_1, \ldots, w_r\}$ che è *sistema di generatori* per $V$. 
Allora se considero $\{v_1, \ldots, v_p, w_1, \ldots, w_r\}$, vedo che anche questo è un *sistema di generatori per* $V$. Infatti aggiungendo qualsiasi vettore $v \in V$ ad un sistema di generatori, questo rimane comunque un sistema di generatori.
A quest'ultimo applico *l'algoritmo dello scarto*, ottenendo una base $\mathcal{B}$ di $V$, in quanto per come è fatto l'algoritmo *"scarto"* i vettori *linearmente dipendenti*.
## Connessione tra base e indipendenza lineare
#Osservazione 
> [!rmk] enti minimali e massimali
Da questi due teoremi osserviamo una relazione tra il concetto di *base* ([[Definizione di Base]]), *indipendenza lineare* ([[Dipendenza e Indipendenza Lineare]]) e *sistema di generatori* ([[Combinazione Lineare]]). 
Da un lato abbiamo una *base* come un *sistema di generatori* *"minimale"*, ovvero che contiene un numero *minimo* di vettori; oppure possiamo equivalentemente caratterizzare una *base* come un *insieme di vettori linearmente dipendenti* *"massimale"*, ovvero che può essere *estesa*.
# 3. Teorema sulla cardinalità delle basi
Ora enunciamo un teorema importante che ci permetterà di definire la *dimensione* ([[Dimensione#^3a9321]]) di un spazio vettoriale.
## Lemma di Steinitz
#Lemma 
> [!lem] di Steinitz.
> Sia $V$ un *K-spazio vettoriale*, *finitamente generato*, sia $\mathcal{B} = \{v_1, \ldots, v_n\}$ una *base* di $V$.
> Allora $\forall k>n$ e per ogni scelta di vettori $\{w_1, \ldots, w_k\} \subseteq V$ vale che $\{w_1, \ldots, w_k\}$ sono *linearmente dipendenti*.
^f23180

#Dimostrazione 
**DIMOSTRAZIONE** del *lemma di Steinitz* ([[#^f23180]])
Per ipotesi vale che gli elementi $w_1, \ldots, w_k$ sono elementi di $V$ (dunque esprimibili come combinazione lineari della base), ovvero:
$$
\begin{cases}w_1 = c_{11}v_1 + \ldots +c_{n1}v_n\\ \vdots \\ w_k = c_{1k}v_1 + \ldots +c_{nk}v_n \end{cases}
$$
Ora consideriamo le *coordinate* di ogni vettore $w_i$ esprimibile come
$$
\begin{pmatrix} c_{1i} \\ \vdots \\ c_{ni} \end{pmatrix}
$$
Adesso consideriamo la *combinazione lineare* delle coordinate di $w_i$, ovvero
$$
a_1 \begin{pmatrix}c_{11}\\ \vdots \\ c_{n1} \end{pmatrix} + \ldots + a_k \begin{pmatrix}c_{1k} \\ \vdots \\ c_{nk} \end{pmatrix}
$$
Ora consideriamo il *sistema lineare omogeneo* del tipo
$$
\begin{pmatrix}c_{11} & \ldots & c_{1k}\\ \vdots & & \vdots \\ c_{n1} & \ldots & c_{nk} \end{pmatrix}\begin{pmatrix} a_1 \\ \vdots \\ a_k\end{pmatrix} = \begin{pmatrix}0 \\ \vdots \\ 0 \end{pmatrix}
$$
di cui possiamo dimostrare che è *compatibile* con una *una soluzione* non (tutta) nulla. $\blacksquare$

#Osservazione 
> [!rmk] giustificazione dell'ultimo passaggio
Osserviamo che la matrice dei *coefficienti*
$$ \begin{pmatrix}c_{11} & \ldots & c_{1k}\\ \vdots & & \vdots \\ c_{n1} & \ldots & c_{nk} \end{pmatrix} $$
per ipotesi ha $k > n$, ovvero è più *"lunga"* orizzontalmente. Quindi per *"accuratezza"* la scriviamo come
$$ \begin{pmatrix}c_{11} &\ldots &  \ldots & c_{1k}\\ \vdots & && \vdots \\ c_{n1} & \ldots&\ldots & c_{nk} \end{pmatrix} $$
quindi gradinizzandola con Gauß ([[Algoritmo di Gauß]]) abbiamo dei *"gradini"* più lunghi di un elemento. Allora ho più *"parametri liberi"* non-nulli, determinando così *soluzioni non nulle*.
## Teorema principale
#Teorema 
> [!thm] sulla cardinalità delle basi
> Sia $V$ un *K-spazio vettoriale*, *finitamente generato*, siano $\{v_1, \ldots, v_n\}$ e $\{w_1, \ldots, w_m\}$ due *basi* di $V$.
> Allora $n = m$; ovvero le due basi hanno lo stesso *numero di elementi* (alt. *"cardinalità"*).
^c61910

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 3.1.* ([[#^c61910]])
Per il *lemma di Steinitz* ([[#^f23180]]), abbiamo che questi due insiemi di vettori per essere *basi* (ovvero *linearmente indipendenti* e *sistemi di generatori*), deve valere
$$m \leq n \land n \leq m \implies m=n$$