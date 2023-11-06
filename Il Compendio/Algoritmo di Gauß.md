---
data: 2023-10-25
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Algoritmo di Gauß
tipologia: appunti
stato: "1"
"":
---
*Definizioni preliminari per la descrizione dell'algoritmo di Gauß (Matrice completa e le operazioni elementari OE). Descrizione dell'algoritmo di Gauß per rendere un sistema lineare in un sistema lineare equivalente a scala come un programma.*
- - -
# 1. Matrice completa di un sistema lineare
**DEF 1.1.** Consideriamo un [sistema lineare](Sistemi%20Lineari) di forma $$A \cdot x = b$$allora definiamo la *matrice* ottenuta aggiungendo alla matrice $A$ la colonna data dai *termini noti* $b$ come la **matrice completa** di questo sistema lineare. La denotiamo con $$(A | b) := \begin{pmatrix} a_{11} & a_{12} &\ldots& a_{1n} & | &  b_1 \\ a_{21} & a_{22} & \ldots & a_{2n} & | & b_2 \\ \vdots & & & \vdots & | &\vdots \\a_{m1} & a_{m2} & \ldots & a_{mn} & | & b_m\end{pmatrix}$$
**NOTA.** Il segno sbarra $|$ per *"differenziare"* i termini noti dai coefficienti è opzionale ed ha uno scopo puramente grafico.
# 2. Operazioni elementari OE
Ora definiamo una serie di *operazioni elementari* (OE) che sono in grado di trasformare un *sistema lineare* di forma $(A|B)$ in un altro *equivalente* ([[Sistemi Lineari]], **DEF 1.5.**). 

**OE1.** *L'operazione scambia equazioni*
Dati due indici $i, j \in \{1, \ldots, m\}$ scambiamo di posto l'equazione $i$-esima e $j$-esima.
Questo corrisponde a *scambiare* la riga $i$-esima con la riga $j$-esima della matrice $(A | B)$.

**OE2.** *L'operazione scala equazioni*
Dato l'indice $i \in \{1, \ldots, m\}$ e uno *scalare* $\lambda \in K$, moltiplichiamo l'$i$-esima equazione per $\lambda$. Precisamente questo corrisponde a *moltiplicare* per $\lambda$ l'$i$-esima riga della matrice completa $(A|B)$.

**OE3.** *L'operazione somma equazioni*
Dati due indici $i, j \in \{1, \ldots, m\}$ e uno scalare non nullo $\lambda \in K, \lambda \neq 0$, sommiamo alla $i$-esima equazione alla $i$-esima equazione la $j$-esima equazione dopo averla moltiplicata per $\lambda$.
Ovvero questo corrisponde a sommare alla riga $i$-esima della matrice completa $(A|B)$ $\lambda$ volte la $j$-esima riga.

**OSS 2.1.** Osserviamo che queste operazioni determinano dei sistemi lineari *equivalenti* in quanto queste operazioni sono *completamente invertibili*; infatti partendo da un sistema lineare *"trasformato"* mediante le **OE.**, possiamo tornare al sistema originario.

**PROP 2.1.** Se applico ad un sistema lineare qualsiasi una di queste operazione elementari, allora ottengo un sistema equivalente.
**PROP 2.2.** Dato un *qualsiasi sistema lineare arbitrario*, posso portarlo ad un *sistema a scala* con queste operazioni elementari **OE**. Infatti mostreremo un *algoritmo* ([[Nozioni Fondamentali di Programmazione]]) che è in grado di *"gradinizzare"* (ovvero portare a scala) una matrice completa $(A | B)$ qualsiasi.
# 3. L'algoritmo di Gauß
## Premesse storiche
Riprendendo la **PROP 2.2.** della sezione precedente, abbiamo appena enunciato che siamo in grado di portare un sistema lineare non a scala in un sistema lineare *a scala*; dimostreremo questa proposizione descrivendo uno degli algoritmi più noti dell'*Algebra Lineare*, ovvero **l'algoritmo di Gauß**.
- - -
**NOTIZIA STORICA.** (*Trascrizione appunti + approfondimenti personali*)
Questo algoritmo è stato attribuito al noto matematico [C. F. Gauß](https://de.wikipedia.org/wiki/Carl_Friedrich_Gau%C3%9F) *(1777-1855)* in quanto fu proprio lui a formalizzare questo procedimento in latino; tuttavia ciò non significa che il matematico Gauß inventò questo algoritmo, in quanto ci sono evidenze storiche che prima esistevano già descrizioni su questo procedimento. Infatti, esiste un antico manoscritto cinese (*I Capitoli nove arte matematica*/*九章算術*, circa 179) che descrive un principio simile a quello che andremo a descrivere.
Per ulteriori approfondimenti consultare le seguenti pagine:
https://mathshistory.st-andrews.ac.uk/HistTopics/Matrices_and_determinants/
https://it.frwiki.wiki/wiki/Les_Neuf_Chapitres_sur_l%27art_math%C3%A9matique
- - -
## Descrizione dell'algoritmo come programma
**OBIETTIVO.**
Come detto prima, il nostro *obiettivo* è quello di *"gradinizzare"* un sistema lineare qualsiasi che non sia a scala.

**INPUT.**
Quindi il nostro input è un sistema lineare qualsiasi del tipo $$Ax = b$$che lo *"condenseremo"* nella *matrice completa* $(A|B)$.

**OUTPUT.** 
Vogliamo ottenere la matrice completa $(\tilde{A\ }|\tilde{B\ })$ tale che $$\tilde{A\ } \text{è a scala} \text{ e }\tilde{A}x = \tilde{B} \stackrel{\text{equiv.}}\cong Ax = b$$
**ALGORITMO.** 
Il nostro procedimento si articola in una serie di *"istruzioni"* da eseguire per un certo numero di volte.
- - -
1. Determino il valore $\bar{j\ }$ come *l'indice di colonna minimo* per cui abbiamo una colonna *non nulla* di $A$. Ovvero $$\bar{j \ } := \min\{j: A^{j} \neq 0\}$$
2. Determino l'indice $\bar{i\ }$ tale per cui abbiamo l'elemento $a_{\bar{i\ },\bar{j\ }} \neq 0$ (*l'esistenza di un tale $\bar{i \ }$ deriva dalla scelta di $\bar{j \ }$*)
3. Scambio le righe $1$ con la $\bar{i \ }$-esima; in questo modo sarà possibile supporre che $a_{1\bar{j\ }} \neq 0$ (*OE1*)
4. Voglio assicurarmi che *non* ho altre colonne *nulle* in $A^{(\bar{j \ })}$ (eccetto ovviamente $A_{(1)}$).
	1. Moltiplico la riga $A_{(1)}$ per $\frac{1}{a_{1\bar{j \ }}}$ (*OE2*)
	2. Sommo alle altre righe $A_{i}, \forall i \in \{2, \ldots, m\}$ un *multiplo opportuno* di $A_{(1)}$. Ovvero $\lambda = -a_{ij}$. (*OE3*) $$A_{(i)} = A_{(i)}- a_{ij}A_{(1)}$$
5. Se la matrice ottenuta non è a scala, ripeto lo stesso procedimento a partire da *1.* sulla *sottomatrice* (ovvero una *"parte selezionata"* della matrice) con righe $\{2, \ldots, m\}$ e colonne $\{\bar{j \ }+1, \ldots, n \}$, del tipo $$A' \in M_{m-1,n-\bar{j \ }-1}(K)$$
- - -
Queste operazioni corrispondono a:
$$\begin{align}0.\ & \begin{pmatrix}0 &0 & *&*&* \\0&0 &*&*&* \\ 0&0&*&*&*\end{pmatrix}\\ 1.\ &\begin{pmatrix}0 &0 & *&*&* \\0&0 &*&*&* \\ 0&0&*&*&*\end{pmatrix}; \bar{j\ }=3 \\ 2. \ & \begin{pmatrix}0 &0 & *&*&* \\0&0 &*&*&* \\ 0&0&*&*&*\end{pmatrix}; \bar{i \ }= 1,2,3 \text{ (una di queste)} \\ 3. \ & \begin{pmatrix}0 &0 & *&*&* \\0&0 &*&*&* \\ 0&0&*&*&*\end{pmatrix} A_{(1) }\leftrightarrows A_{(1),(2),(3)} \text{ (una di queste)} \\ 4.1. \ & \begin{pmatrix}0 &0 & 1&*&* \\0&0 &*&*&* \\ 0&0&*&*&*\end{pmatrix} \\ 4.2. \ & \begin{pmatrix}0 &0 & 1&*&* \\0&0 &0&*&* \\ 0&0&0&*&*\end{pmatrix}A_{(i)} = A_{(i)}- a_{ij}A_{(1)} \text{ per } i=2,3 \\ 5. \ & \begin{pmatrix}0 &0 & 1&*&* \\0&0 &0&+&+ \\ 0&0&0&+&+\end{pmatrix} \implies\begin{pmatrix} + & + \\+ & +\end{pmatrix} \text{ ripeto} \end{align}$$
- - -
**OSS 3.1.** Affinché questo algoritmo sia *valido* e *ben posto*, devo assicurarmi che:
1. Questo deve *eventualmente* terminare in un certo tempo *finito*; questo accade in quanto *prima o poi* le colonne e le righe delle *sottomatrici* della *5.* eventualmente si *"esauriranno"* e avremmo una matrice a scala.
2. Questo restituisce l'*output* corretto, come prescritto dalle specificazione. Anche questo si verifica in quanto ogni volta che raggiungo e svolgo il step *4.*, ho *"gradinizzato"* una scala. 
## Esempio di applicazione.
Come un *programmatore* fa dei *"unit tests"* su un programma o algoritmo, tentiamo di applicare questo principio appena descritto ad un sistema lineare.

**ESEMPIO 3.1.** Consideriamo il sistema lineare dato da $$(A|B) = \begin{pmatrix} 0 & -1 & 2 & 1 & 3 \\2 & 4 & 8 & 6 & 2 \\3 & 1 & 5 & 3 & 1\end{pmatrix}$$Ora ci applichiamo *l'algoritmo di Gauß*. $$\begin{align}0. & \ \begin{pmatrix} 0 & -1 & 2 & 1 & 3 \\2 & 4 & 8 & 6 & 2 \\3 & 1 & 5 & 3 & 1\end{pmatrix}; j=0, i=2 \\ 1. & \ \begin{pmatrix} 2 & 4 & 8 & 6 & 2 \\0 & -1 & 2 & 1 & 3 \\3 & 1 & 5 & 3 & 1\end{pmatrix};A_{(1) }\leftrightarrows A_{(2)} \\ 2. & \  \begin{pmatrix} 1 & 2 & 4 & 3 & 1 \\0 & -1 & 2 & 1 & 3 \\3 & 1 & 5 & 3 & 1\end{pmatrix}; A_{(1)} = 0.5A_{(1)} \\ 3. & \ \begin{pmatrix} 1 & 2 & 4 & 3 & 1 \\0 & -1 & 2 & 1 & 3 \\0 & -5 & -7 & -6 & -2\end{pmatrix}; A_{(2)} = A_{(2)}+0A_{(1)}; A_{(3)} = A_{(3)}-3A_{(1)}\ \\ 4. & \ \text{ripeto con} \begin{pmatrix}-1 &2 & 1 & 3 \\ -5 & -7 & -6 & -2  \end{pmatrix} \\ 5. &  \ \begin{pmatrix}1 &-2 & -1 & -3 \\ -5 & -7 & -6 & -2  \end{pmatrix}; A_{(1)} = -A_{(1)} \\ 6. & \ \begin{pmatrix}1 &-2 & -1 & -3 \\ 0 & -17 & -11 & -17  \end{pmatrix}; A_{(2)} = A_{(2)}-5A_{(1)} \\ 7. & \ \text{ la matrice in 6. è a scala; FINE}\end{align}$$Dunque otteniamo la seguente matrice: $$(\overline{A\ } |\overline{b}) = \begin{pmatrix}1 & 2&4&3&1\\0&1&-2&-1&-3\\0&0&-17&-11&-17 \end{pmatrix} $$che è *a scala*.

**ESERCIZIO PERSONALE.** Questo esercizio prevede un collegamento con *l'informatica*, in particolare con la *programmazione*.
A) Scrivere uno *pseudocodice* che *"emula"* questo principio
B) Implementare tale *pseudocodice* in *C/Python*
C) Calcolare la *"complessità"* di questo codice