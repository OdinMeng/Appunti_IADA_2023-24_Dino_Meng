---
data: 2023-09-29
corso: "[[Introduzione alla Programmazione e Laboratorio]]"
argomento: Paradigmi di Programmazione
tipologia: appunti
stato: "1"
---
*Breve introduzione alla programmazione; paradigmi di programmazione con esempi*
- - -
# Paradigma: cos'è
Nella *programmazione* un **paradigma** (di programmazione) è una *macroarea*, uno *stile* in cui si sviluppa un *linguaggio di programmazione*; nei vari linguaggi di programmazione (soprattutto quelli moderni) si ha molteplici *paradigmi di programmazione*. 
Ad esempio in *Python* v'è presente il paradigma *imperativo ad oggetti* con le *classi*, e anche il *paradigma dichiarativo funzionale* con la funzione *lambda*.

## Quali sono? Quanti sono?
Generalmente si hanno i seguenti *paradigmi* rappresentati nel diagramma sottostante:
![[Paradigmi]]
Principalmente i paradigmi sono le seguenti due:
1. **Paradigma IMPERATIVO**
	Il paradigma *imperativo* pone l'enfasi sullo *specificare* le istruzioni al fine di ottenere un risultato voluto. Un esempio di *paradigma imperativo procedurale* è il linguaggio *C*, oppure un esempio di *paradigma imperativo a oggetti (OOP)* è *Java*.

2. **Paradigma DICHIARATIVO**
	In questo caso il paradigma *dichiarativo* esprime la *logica* di un calcolo senza dover descrivere il flusso di controllo. Per esempio nel in un linguaggio dichiarativo *logico* si usa, appunto, la logica per rappresentare e/o elaborare delle informazioni, oppure con la programmazione *funzionale* si usa una serie di valutazioni matematiche.

### Differenza tra imperativo e dichiarativo: esempi
La differenza tra il paradigma **IMPERATIVO** e **DICHIARATIVO** si illustra mediante il seguente esempio; due *"pseudocodici"* che rappresentano, da un lato il paradigma *imperativo*, e dall'altro il paradigma *dichiarativo*. Entrambi vogliono esprimere l'utilizzo di un ascensore.

| IMPERATIVO | DICHIARATIVO                             |
| ---------- | ---------------------------------------- |
| - ATTESA   | - SE ARRIVATO e APERTO, ENTRA            |
| - APRI     | - SE PUOI ENTRARE, DEVI ASPETTARE ARRIVI |
| - CHIUDI   | - ...                                    |
| - BOTTONE  |                                          |
| - ...           |                                          |
A sinistra si può vedere che impongo *una serie di istruzioni*, come quello di attendere, aprire, chiudere, et cetera $\ldots$; invece a destra impongo una *struttura logica*, per esempio SE l'ascensore è ARRIVATO e APERTO, allora posso entrare.

Un'altra analogia potrebbe essere quella di una *ricetta di cucina*, che solitamente esprime una serie di istruzioni (pertanto usa una struttura *imperativa*), come *"cucina per 10 minuti"*, *"sbatti le uova"* e via così $\ldots$
Invece se si vuole, per qualche motivo, scrivere una ricetta mediante il paradigma *dichiarativo*, allora si troverebbe scritto qualcosa del genere di *"se l'acqua bolle a 100 gradi °C, allora la pasta è pronta"*.