---
data: 2024-03-10
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Rappresentazione dell'Informazione nei Calcolatori
tipologia: appunti
stato: "1"
capitolo: Architetture degli elaboratori
---
- - -
*Rappresentazione dell'informazione nei calcolatori. Principio zero: l'esistenza di solo due simboli. Rappresentazione dei numeri, del testo e delle immagini in binario.*
- - -
# 1. Principio zero (uno)
**IL BINARIO.** La *rappresentazione dell'informazione* nei *calcolatori* si basa su un *principio cardine*, ovvero che abbiamo *solo* due simboli: vengono (solitamente) denominati come $0, 1$. 
Ci sono state alcune eccezioni, come con i *computer sovietici* che avevano tre simboli, ma questo è un dettaglio storico minore.
Quindi consegue che *ogni tipologia di informazione*, tra cui numeri, foto, testo, documenti, istruzioni, eccetera... vanno *rappresentati* con questi due soli simboli. Ora vedremo come sarà possibile superare questo apparente limite del binario.

# 2. La rappresentazione dei numeri
**I BIT E I BYTE.** Definiamo un *bit* come una *singola cifra binaria* che può solo assumere *uno dei valori* $0, 1$. Si definisce un *byte* come *otto bit*. Segue che ogni *byte* può rappresentare $2^8$ numeri.
Dopodiché si può prendere i *multipli* del *byte*, tra cui il *kilobyte*, *megabyte*, eccetera...
Tuttavia è possibile ci sono due *tipi di multipli del byte*: uno è di base $10^n$, l'altro è di base $2^{10n}$. Dato che gli ordini di grandezza sono più o meno uguali, è possibile fare uno fraintendimento tra questi multipli.
Dunque indicheremo quelli con base $10^n$ con i prefissi *kilo*, *mega*, *giga*, *tera*, *peta*, ...; invece per quelli di base $2^{10n}$ vengono indicati con *kibi*, *mebi*, *gibi*, *tebi*, *pebi*.
(*Notare che queste sono semplici convenzioni, e non sono necessariamente rispettate da tutti!*)

## I numeri Naturali
**I NUMERI NATURALI.** Ora vediamo come *"tradurre"* un *byte* (o più) in un numero naturale. Generalmente, supponendo che un numero binario è della forma
$$
\langle x_1x_2\ldots x_n\rangle
$$
Allora possiamo ottenere il suo numero *in base decimale* facendo il seguente calcolo:
$$
\sum_{i=1}^n x_i 2^{n-i}
$$
Ovvero *"sommiamo le potenze di $2^n$, a seconda della posizione delle cefire"*.
Si può usare altre basi, tra cui l'*ottale* e l'*esadecimale*.

**OPERAZIONI TRA NUMERI IN BINARIO.** Per sommare *due numeri in binario*, lo si fa come facciamo di solito in *decimale*, solo che abbiamo solo *due cifre* (quindi abbiamo più riporti del solito).
Ad esempio,
$$
1101 \ 1001+0010 \ 0011 = 1111 \ 1100
$$
Similmente si può definire la *moltiplicazione di numeri in binario*.

**OVERFLOW.** Notiamo che con queste nozioni, abbiamo una limitazioni: queste operazioni (in somma) hanno un range possibile tra $[0, 2^{n-1}]$. Ma cosa succede se tentiamo di sommare *"due numeri troppo grandi"*? Ovvero se tentiamo di sommare ad esempio
$$
1111 \ 1111 + 1111 \ 1111 = \ ?
$$
Qui abbiamo infatti il cosiddetto *"overflow"*: tentando di sommare due numeri tali che la somma venga maggiore di $2^{n-1}$, non abbiamo abbastanza bit per rappresentare il nuovo numero.
Dunque si fa la somma come di consueto, troncando via le parti *"in eccesso"*. In questo caso ho
$$
\begin{align}1111 \ 1111 &+ \\ 1111 \ 1111 &= \\ 1111\ 1110\end{align}
$$
Quindi paradossalmente stiamo *"sottraendo"* il primo numero con $1$!

## I numeri Interi
**I NUMERI INTERI.** Adesso, vogliamo rappresentare anche i *numeri negativi*, dal momento che potrebbero risultare utili per certi contesti, tra cui i debiti, conti negativi, eccetera...
Storicamente ci sono stati più approcci per formalizzare i *numeri negativi* nel *binario*, tra cui quello del *segno e modulo*, del *complemento-due* e dell'*eccesso N*.

**SEGNO E MODULO.** Per sostituire il segno $-$ del numero negativo, basta usare *uno dei bit* del numero in binario per rappresentare il segno. Ovvero, se ad esempio ho
$$
1 000\  1011
$$
questo non si legge più come $2^7 + 2^3 + 2^1 + 2^0$, bensì come $- \cdot (2^3 + 2^1 + 2^0)$.
Questo sembra un buon approccio, dal momento che ampliamo il *range dei numeri rappresentabili* in $[-2^{n-1}-1, 2^{n-1}-1]$. Tuttavia ci sono due problematiche:
- In questo modo abbiamo due rappresentazioni del numero zero: ovvero $1000 \ 000$ e $0000 \ 000$, così in un modo *"sprechiamo"* uno slot.
- La somma tra *numeri positivi e negativi* non è più definibile in una maniera intuitiva: bisogna vedere dei *casi specifici* per poter sommarli.
Tutto sommato, questo approccio è quello *"naïve"*, dal momento che l'idea sottostante è molto semplice.

**IL COMPLEMENTO 2.** In questo caso il *primo bit* diventa $-2^{n-1}$, ovvero adesso il numero lo leggiamo come ^bd3948
$$
1000 \ 0000 \to -2^7
$$
E il restante delle caselle vengono lette come di consueto. In questo modo abbiamo molti vantaggi:
- Il range dei numeri diventa $[-2^{n}, 2^{n-1}-1]$
- Il primo bit indica comunque il *segno* (o la *"negatività"*) del numero
- Possiamo sommare numeri positivi e negativi normalmente

**ECCESSO N.** Qui si tratta di *"sostituire il zero con un numero negativo"*, ovvero di *"contare da un numero più basso"*. Ad esempio, impostando $N=128$, leggiamo il numero $0$ come $-128$. Allora si ha
$$
\begin{gather}1000 \ 000 = 0 \\ 1111 \ 111 = 127\end{gather}
$$

## I numeri razionali
**I NUMERI RAZIONALI (O REALI).** Adesso voglio rappresentare i numeri *razionali*, ovvero quelli con la *virgola*; oppure vogliamo rappresentare pure i *numeri reali*, anche se sarebbe realisticamente impossibile per la *densità dei razionali nei reali*: ci servirebbero una quantità infinita di bit!
Quindi è necessaria una *buona approssimazione* per questi numeri, dal momento che una *vera e propria fedele rappresentazione* sarebbe fisicamente impossibile.
Storicamente ci sono state molte convenzioni per rappresentare questi numeri, oggi si usa lo *standard IEEE 754*, che ha come *"idea di base"* quella di *"simulare"* la *notazione scientifica*: si ha un *bit per il segno*, dei *bit* per l'*esponente delle cifre significative* in $2^n$ che viene moltiplicata per la *mantissa*. 
Questo standard ci offre più *"tipologie di numeri"* con certi *livelli di precisione*, tra cui i numeri a *precisione singola e doppia*.
Inoltre, questa convenzione ci offre una possibilità per definire l'*infinito* $\pm \infty$ e il risultato di un'operazione *indefinita* NaN. 
Per una visualizzazione di questa convenzione, vedere il sito https://bartaz.github.io/ieee754-visualization/. ^85e458
# 3. La rappresentazione del testo
**IL TESTO.** Per quanto riguarda invece il *testo*, storicamente ci sono state più convenzioni per *"trasformare"* i *bit* in caratteri.
Inizialmente c'è stata la convenzione *ASCII*, dove si usava un *byte* per rappresentare un singolo carattere. Si nota che in realtà *sette bit* erano già sufficienti per rappresentare tutti i caratteri nell'alfabeto anglo-sassone (ovvero latino escludendo gli accenti), quindi c'era un *"bit in eccesso"*.
Da qui si hanno più *"varianti"* di *ASCII*, dove si usa il *bit in eccesso* per rappresentare altri caratteri, tra cui *lettere accentate*, *nuovi caratteri caratteristici della lingua*, eccetera...; il variante dipende dal *linguaggio di riferimento*.
Tuttavia questa *molteplicità* rappresenta un limite dell'ASCII, dal momento che in questo modo diventa *impossibile* scrivere documenti in *più linguaggi*. Oppure con l'ASCII rimane comunque impossibile *rappresentare* la scrittura di certi linguaggi, come ad esempio quello del *giapponese*, *cinese*, ...
Quindi oggi si usa la convenzione *Unicode*, che non solo comprende *una buona parte dei linguaggi*, ma anche gli *emoticon*.
# 4. La rappresentazione delle immagini
**LE IMMAGINI.** Qui basta considerare la convenzione *RGB*, dove si usa una *terna* di *byte* per rappresentare l'*intensità della luce* per il colore *rosso*, *giallo* e *blu*.