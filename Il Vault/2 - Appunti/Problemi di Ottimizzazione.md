---
data: 2024-04-23
corso:
  - "[[Analisi Matematica II]]"
argomento: Problemi di Ottimizzazione
tipologia: appunti
stato: "1"
capitolo: Ottimizzazione in più variabili
---
- - -
*Generalità sui problemi di ottimizzazione: schema generale in ambito interdisciplinare, schema specifico per il nostro corso (integrazione tra appunti e libro di Pagani-Salsa)*
- - -
# 0. Voci correlate
- [[Definizione di Estremo per una Funzione in più variabili]]
# 1. Problemi di Ottimizzazione
**Significato.** Per *"ottimizzazione"* si intende un'ampia categoria di problemi; di solito si tratta di *massimizzare* o *minimizzare* un obbiettivo, una funzione ([[Definizione di Estremo per una Funzione in più variabili#^96861f|1]]). Per affrontare un problema del genere, bisogna porsi *una serie di domande* (e questo fungerà da schema generale per la risoluzione di un problema di ottimizzazione).

**Schema.** Poniamo la seguente serie di domande.
1. *Esiste* il punto di minimo o massimo?
	- Per garantirci di questo, dovremmo applicare il macchinario appena sviluppato su *Weierstraß* ([[Teorema di Weierstraß Generalizzato#^cd4d7c|1]]) o sulle *funzioni coercive* ([[Funzione Coerciva#^74d787|2]]).
2. Il punto estremo è *unico*?
	- Ovviamo l'*estremo* in sé (ovvero il $\max$ o $\min$) è unico, ma non è detto che il *punto di estremo* sia unico. 
	- Questo è importante per le eventuali proprietà di *convessità* del dominio di una funzione (di cui non occuperemo).
3. *Come si comportano questi punti?*
	- Sapendo che *esiste* l'*estremo* della funzione, dobbiamo sapere *come si comporta* questo punto; ovvero vogliamo sviluppare delle *condizioni necessarie* per questi punti di estremo, così per sapere come trovarli. Ci occuperemo di questa parte.
4. *Come si calcolano questi punti?*
	- Questo rientra nell'ambito dell'*analisi numerica* (non parte del nostro programma).
# 2. La Ricerca degli Estremi
Adesso svisceriamo lo schema appena sviluppato, soffermandoci sulla domanda *"Come si comportano questi punti?"*; ovvero vogliamo trovare *dove* si trovano questi punti (una domanda quasi analoga).

**Problema.** Supponiamo di avere una funzione del tipo
$$
f:\underbracket{B(0;1)(\mathbb{R}^N)}_{ \{x \in \mathbb{R}^N: \lVert x \rVert \leq 1 \} } \longrightarrow \mathbb{R} 
$$
Per Weierstraß so che la funzione ammette *almeno* un minimo e un massimo ([[Teorema di Weierstraß Generalizzato#^cd4d7c|1]]). Ma dove stanno? Possiamo cercali in *"due luoghi"*
- Li cerchiamo nei punti $\lVert x \rVert <1$; qui parliamo di *minimi e massimi liberi* e potrebbe essere che il gradiente di questi punti sono nulli; nei prossimi capitoli definiremo degli strumenti per capire la loro natura
- Li cerchiamo nei punto $\lVert x \rVert = 1$; qui parliamo di *minimi e massimi vincolati*: non possiamo più utilizzare il gradiente della funzione, in quanto non vi è più un legame. Dobbiamo dunque sviluppare degli strumenti sulle *curve e superfici*, che rappresentano un *vincolo* per la nostra funzione. Infatti troveremo che gli estremi vincolati hanno delle proprietà particolari (in particolare i gradienti della restrizione e della funzione sono paralleli).
Vedremo di risolvere questi problemi in questo capitolo.
