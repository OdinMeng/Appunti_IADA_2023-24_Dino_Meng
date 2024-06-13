---
data: 2024-06-03
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Concorrenza e Parallelismo
tipologia: appunti
stato: "1"
capitolo: Sincronizzazione
---
- - -
*Generalità sulla programmazione concorrente e/o parallela.*
- - -
# Motivazioni per la Sincronizzazione
## Definizioni di Concorrenza e Parallelismo
Diamo delle *definizioni preliminari*.

**Concorrenza:** un programma con più flussi di esecuzione
**Parallelismo:** un programma che esegue su più calcoli contemporaneamente

Notiamo subito che non ci dev'essere nessun legame tra di loro, soprattutto del tipo $\iff$.

1. Un programma può essere *concorrente senza essere parallelo*
	- Ha tanti thread che eseguono su un sistema con una sola CPU

2. Un programma può essere *parallelo senza essere concorrente*
	- Le moderne CPU hanno istruzioni che manipolano più dati
	- Paradigma *Single Instruction Multiple Data (SIMD)*
	- Una *singola istruzione per sommare due vettori*, componente per componente
	- La CPU ha una *ALU* che permette di effettuare più operazioni in parallelo
	- Usando un *singolo thread/processo*

## Obbiettivi della Programmazione Parallela
Teoricamente, parallelizzando e usando $N$ core anzinché $1$, dovremmo avere:
$$
T_N = \frac{T_1}{N}
$$
Ovvero *minimizziamo* il tempo $T_N$ con un comportamento del tipo $T_N \to 0$.

In realtà, vale solo per un *numero ridotto di processori e core*.
- Solitamente, con un numero ridotto di core, si ha davvero un *incremento*
- Poi c'è un *appiattimento*. Questo è dovuto alla *legge di Ahmdal*
Quindi si ha un andamento del tipo
![[Pasted image 20240521214949.png|500]]

**LEGGE.** (*Di Ahmdal*, o del *buonsenso*)
*"Il miglioramento delle prestazioni di un sistema che si può ottenere ottimizzando una certa parte del sistema è limitato dalla frazione di tempo in cui tale parte è effettivamente utilizzata"*

**Ovvero:** la parte di codice non parallelizzabile, penalizza tutto il programma. Abbiamo dei cosiddetti *"bottleneck"*

**Problema:** *non tutti gli algoritmi sono parallelizzabili!*

## Definizione di Paralelizzabilità (e non)
**Definizione:** *Esecuzione di un algoritmo tramite più flussi simultanei*. Non tutti gli algoritmi sono parallelizzabili

**Parallelizzabile:** (esempi)
- Calcolare la somma di un vettore (array); posso spezzare l'array in *due*, farci le somme individuali poi sommare le ridotte.

**Non Parallelizzabile:** (esempi)
- Calcolare le cifre di $\sqrt{2}$; devo in un modo o l'altro usare i *metodi dell'analisi numerica*, che sono *iterativi* (o addirittura *ricorsive...*)

## Attualità della Programmazione Parallela
Ancora oggi questo tema è *attuale*.

C'è *molta ricerca* per tentare di *parallelizzare* gli algoritmi
- Trovando *espedienti matematici*
- Oggi abbiamo sistemi con *tanti core*, e vogliamo sfruttarli al massimo
- Calcolando *soluzioni approssimate* (tipo per $\sqrt{2}$ posso usare gli *sviluppi di Taylor*)

Problema sentito nel *machine learning*
- Addestrare una rete neurale usando molti core (e nodi)
	- Problema risolto
- Algoritmi di *clustering* (classificazione) paralleli
	- Problema in parte aperto