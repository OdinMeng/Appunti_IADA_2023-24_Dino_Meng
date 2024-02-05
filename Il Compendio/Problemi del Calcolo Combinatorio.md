---
data: 2023-10-03
corso: "[[Analisi Matematica I]]"
argomento: Problemi del Calcolo Combinatorio
tipologia: appunti
stato: "1"
---
*Significato del calcolo combinatorio; quali problemi esso mira di risolvere. Alcuni problemi: disposizioni con ripetizioni, disposizione di oggetti a m a m, permutazioni di n oggetti e combinazioni. Alcuni problemi misti del calcolo combinatorio*
- - -
# 1. Cosa vuol dire "calcolo combinatorio"
Se si definisce l'insieme dei numeri [naturali](Struttura%20dell'insieme%20dei%20numeri%20naturali) come l'insieme dei numeri che servono *per contare*, allora il **calcolo combinatorio** si basa sul problema di *contare* certi insiemi/oggetti/$\ldots$

**DEF 1. Cardinalità** Si definisce la **cardinalità** di un *insieme $A$* come il numero $n$ degli elementi contenuti nell'insieme $A$. Lo si denota come $|A|$.

# 2. I problemi del calcolo combinatorio
Il *calcolo combinatorio* ci presenta vari problemi che valgono la pena di essere studiati.

## PROBLEMA 2.1. Cardinalità del prodotto cartesiano
**PROBLEMA 2.1.** Supponiamo che $|A| = n$, $|B| = m$, ove $A,B$ sono *insiemi* e $n, m \in \mathbb{N}$. Allora ci poniamo il problema di trovare $|A \times B|$.
Se disegniamo il grafico di un qualsiasi prodotto cartesiano $A \times B$, si evince che per ogni riga $(a_1, a_2, \ldots, a_n)$ ci sono $m$ colonne; quindi $|A \times B| = n\times m$
![[Pasted image 20231004223727.png]]
## PROBLEMA 2.2. Disposizioni con ripetizione
**PROBLEMA 2.2.** Siano $A,B$ insiemi con $|A| = n; |B| = m$; voglio contare il numero degli elementi di $$B^A := \{\text{funzioni da }A\text{ a B}\}$$Per risolvere questo problema si può avvalere del diagramma in cui rappresentiamo gli due insiemi $A, B$. Ora, prendendo il primo elemento $a_0$, vediamo che possiamo definire $m$ funzioni, collegando l'elemento $a_0$ a $b_m$.
Stesso discorso vale per $a_1, a_2, \ldots, a_n$; quindi generalizzando possiamo vedere che il risultato viene $m^n = |B|^{|A|} = |B^A|$

**DEF 2.2.** Questo problema, nel calcolo combinatorio, si chiama **disposizioni con ripetizioni**, ovvero senza *vincoli* particolari.

![[Pasted image 20231004223802.png]]
### ESEMPIO 2.2.1.
Se voglio costruire tutte le *bandiere tricolori* possibili (ove sono ammessi i anche colori ripetuti) con *4 colori* a disposizione, quante posso costruirne?
**SOLUZIONE.** Questo è un caso applicato di *disposizioni con ripetizione*; infatti se si definisce le caselle delle bandiere come un insieme a tre variabili, $A = {1, 2, 3}$, allora vogliamo trovare tutte le *funzioni* associate da $A$ a $B=\{\text{rosso}, \text{verde}, \text{giallo}, \text{bianco}\}$
Pertanto la soluzione è $3^4$.
## PROBLEMA 2.3. Disposizioni di oggetti da $m$ a $n$
**PROBLEMA 2.3.** Prendiamo lo stesso problema di prima; tuttavia vogliamo ora considerare un vincolo particolare: vogliamo cercare solo le *funzioni [iniettive](Funzioni)* (**DEF 3.2.**) da $A$ a $B$. Ricapitolando, per *iniettiva* si intende che ad ogni $a_x$, $a_y$ vengono associati immagini diversi. Pertanto, è necessario che $m \geq n$.
**DEF 2.3.1.** Inoltre indichiamo l'*insieme delle funzioni iniettive* come $D_n^m$.
**SOLUZIONE.** Si può avvalere dello stesso grafico di prima; se prendo il primo elemento $a_0$, allora ho $m$ scelte per lo stesso ragionamento di prima; ora, se prendo il secondo elemento $a_1$, allora per rispettare il vincolo, ho una scelta in meno (ovvero l'elemento $b_m$ associato ad $a_0$): quindi ora ho $m-1$ scelte. Procedendo avanti così, arrivo fino all'elemento $a_n$ per cui ho $m-n+1$ scelte.
Pertanto $$|D^m_n| = m(m-1)(m-2)\ldots(m-(n-1))$$
### ESEMPIO 2.3.1.
Prendiamo in esame lo stesso problema di prima, ovvero quella avendo a disposizione una *bandiera tricolore da colorare* e *quattro colori*. 
Ora non vogliamo più i stessi colori; infatti, se la funzione dev'essere iniettiva, allora in un senso applicato ciò vuol dire che ad ogni area della bandiera dev'esserci un colore diverso.
Quindi si tratta di calcolare $|D^4_3| = 4(3)(2)$
## PROBLEMA 2.4. Permutazioni
**PROBLEMA 2.4.** Prendiamo il problema appena preso in esame (ovvero la *disposizione di oggetti da $n$ a $m$*) e ora vogliamo ci aggiungiamo un ulteriore vincolo: cerchiamo le *funzioni biiettive*, ovvero quelle sia *iniettive* che *suriettive*. Da qui consegue necessariamente che $|A| = |B| = n$.
**DEF 2.4.1.** Definiamo *l'insieme delle permutazioni (ovvero delle funzioni biiettive)* come $P^n$.
**SOLUZIONE.** Questo non è altro che un caso speciale di $|D^m_n|$ ove $m=n$, quindi $$|P^n| = |D^n_n| = n(n-1)(n-2)\ldots(1) = n!$$
### ESEMPIO 2.4.1.
Consideriamo un problema totalmente diverso; se ho la *stringa* "CIAO", quante volte posso cambiarlo in modo tale che le lettere presenti nella stringa ci siano comunque?
Questo si tratta ovviamente di una *permutazione*, quindi calcoliamo $|P^4| = 4!$.
## PROBLEMA 2.5. Combinazioni, coefficienti binomiali
**PROBLEMA 2.5.** Se considero un insieme $A$ con $|A| = n$, e un numero $k \in \mathbb{N}$ tale che $0 \leq k \leq n$, allora voglio calcolare il *numero di sottoinsiemi di $A$ con $k$ elementi*.
**DEF. 2.5.1.** Definiamo *l'insieme dei sottoinsiemi di $A$ con $k$ elementi* come $$C^n_k \text{ oppure }\binom{n}{k}$$e si legge come *"$n$ su $k$"*. Inoltre lo si chiama anche come il *coefficiente binomiale* oppure le *combinazioni di $n$ oggetti a $k$ a $k$*.
**SOLUZIONE.** Qui usiamo un esperimento mentale che presenta una situazione analoga a quella presentata.
Suppongo di aver $n$ numero di palline, da cui voglio scegliere $k$; per la prima pallina $0$ posso sceglierne $n$, poi per la pallina $1$ posso sceglierne $n-1$, poi andando così finche si raggiunge l'ultima pallina $k$ da cui posso scegliere $n-k+1$. Si osserva che questo è esattamente le *disposizioni* da $n$ a $k$, $D^n_k$.  
Tuttavia in questo modo tengo conto dell'ordine in cui scelgo le palline; invece le *combinazioni* non tengo conto dell'ordine. Quindi se vogliamo considerare l'ordine, dobbiamo attribuire ad ogni *combinazione* una *permutazione*; ciò vuol dire che bisogna moltiplicare le *combinazioni di $n$ oggetti a $k$ a $k$* per le *permutazioni di $k$ oggetti*; pertanto si scrive$$D^n_k = P^kC^n_k$$da cui deriva $$C^n_k = \frac{D^n_k}{P^k} = \frac{(n)(n-1)\ldots(n-k+1)}{k!} = \frac{n!}{k!(n-k)!} = \binom{n}{k}$$Nella pagina [[Coefficiente Binomiale]] ci soffermeremo particolare (appunto) sul *coefficiente binomiale*, in quanto essa porta con sé delle proprietà particolari che ci permetteranno di costruire certi oggetti matematici, tra cui il *triangolo di Tartaglia*.

### ESEMPIO 2.5.1.
Se ho un sacco con $10$ palline da cui ne estraggo $3$, quante *combinazioni* possibili ho?
Semplicemente, $C^10_3 = \binom{10}{3} = \frac{10!}{3!(7!)}$.

# 3. Esempi misti del Calcolo Combinatorio
Ora presentiamo alcuni esempi misti del calcolo combinatorio, che può comprendere l'ausilio di alcune delle definizioni date sopra e un buon approccio critico ai problemi.

**PROBLEMA 3.1.** Ho un mazzo da $40$ carte e ne pesco $3$; quanti sono i possibili risultati $t$?
Questo è un caso quasi-banale di *combinazioni*, quindi $$t = C^{40}_3 = \frac{40!}{3!(37!)} = \frac{40 \cdot39\cdot 38}{3\cdot2} = 9880$$
**PROBLEMA 3.1.A** Ora considerando che ci sono $4$ semi (quindi $10$ carte per seme), quanti sono i risultati $r$ che NON contengono le carte di *denari*?
Anche qui si tratta di un problema di *combinazioni*, che però va affrontato più criticamente: infatti vogliamo estrarre le $40$ carte escludendone $10$, in quanto essi rappresentano dei semi; quindi sostanzialmente il "corpo" delle carte sono solo $30$.
$$r = \binom{40-10}{3} = \binom{30}{3} = 4060$$

**PROBLEMA 3.1.B** Considerando lo stesso mazzo di carte, ora voglio invece calcolare i risultati $\tilde{r}$  che contengono invece i *denari*.
Un approccio particolarmente furbo è quello semplicemente di prendere $t$ (ovvero tutte le combinazioni possibili) e sottrarli per il numero dei risultati senza i denari; infatti l'insieme dei risultati *con* i denari è complemento dell'insieme dei risultati *senza* i denari.
Quindi, $$\tilde{r} = 9880 - 4060 = 5820$$
Oppure un altro approccio comunque accettabile è di considerare tutte le combinazioni dei risultati con esattamente *un* seme, poi *due* semi e infine *tre* semi e infine sommarli.
Infatti, $$\tilde{r} = \binom{10}{1} \binom{30}{2} + \binom{10}{2}\binom{30}{1} + \binom{10}{3}\binom{30}{0} = 5820$$

**PROBLEMA 3.2. Il Lotto.** Ho $90$ bussolotti, ovvero dei numeri; ne estraggo $5$. Quali sono le possibili estrazioni?
Anche qui si tratta di un caso di *combinazioni* in quanto non tiene conto dell'ordine dei numeri estratti (in quanto essi vengono già ordinati in un'ordine crescente). $$n_{\text{estrazioni}} = \binom{90}{5} \approx44 \cdot 10^6$$
**PROBLEMA 3.3.** Ho una scacchiera $5 \times 5$ e $6$ pedine uguali.
*In quanti modi posso mettere le pedine sulla scacchiera, se voglio che tutte le righe e tutte le colonne abbiano almeno una pedina?*

> [!warning] Soluzione controllata con D.D.S.: Parzialmente corretta ma manca un pezzo.

**PROPOSTA DELLA SOLUZIONE.** Ragioniamo nel seguente modo:
1. Voglio porre le prime $5$ pedine in modo tale che il vincolo venga rispettato (quindi tutte le righe e le colonne hanno almeno una pedina piazzata), poi per porre la $6$-esima pedina liberamente.
2. Per le $5$ pedine ragiono così:
	1. Voglio porre la prima pedina sulla prima riga e su qualsiasi colonna. Ho quindi $5$ possibilità.
	2. Ora voglio porre la seconda pedina sulla seconda riga; però non posso porlo sulla stessa colonna scelta dalla prima pedina, dandomi una scelta in meno. Ho quindi $4$ possibilità.
	3. Mi accorgo che qui si tratta di un semplice problema di *permutazioni (o disposizioni di oggetti a 5 a 5)*, ovvero che per calcolare tutte le possibilità devo fare $5! = 5*4*3*2*1$.
3. Ora considero la $6$-esima pedina: se le altre $5$ pedine hanno già occupato le loro caselle, allora mi rimangono solo $20$ caselle ($25-5=20$).
4. Quindi ottengo il risultato $$x = 20(5!) = 2400$$