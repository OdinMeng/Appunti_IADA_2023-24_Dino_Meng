---
data: 2024-04-17
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Problematiche dei Sistemi Professionali
tipologia: appunti
stato: "1"
capitolo: I Dati sui Sistemi Operativi
---
- - -
*Osservazione preliminare per RAID e FDS: le problematiche dei sistemi professionali.*
- - -
# Problematiche dei Sistemi professionali
**I Sistemi Professionali.**
Nei sistemi di grandi dimensioni, una singola macchina ha tanti dischi (possiamo averne fino a 100!)
- Fino a 100 dischi su una stessa macchina
- Premettono di conservare *enormi quantità di dati*

Spesso ci sono server dedicati allo *storage*
- I calcolatori accedono *via rete* ai dati dello storage
- Tramite *protocolli di rete*

**FIGURA.** (*Esempio di rack storage*)
![750](images/storage-array.png)

Allora seguono i seguenti *problemi*, da *gestire*.

**Problemi.**
1. Sono necessarie tecniche per gestire i *guasti* (*failure*)
	- Un disco ha l'$1\%$ di probabilità di rompersi *ogni mese*
		- Dato reale per i dischi magnetici
	- Se ho $100$ dischi, ho in media *un guasto al mese*; nel senso probabilistico, dopo un certo periodo di tempo la *probabilità di avere almeno un guasto* tende a salire verso 1 ([[Proprietà dello Schema delle Prove Indipendenti#^1606e3|vedere la Scimmia di Borel]]).
	- Non è pensabile *perdere dati* in sistemi professionali!
	- Voglio gestire gli errori in una *maniera automatica*

2. Sono auspicabili tecniche per *aumentare le prestazioni*
	- Se $100$ dischi vengono opportunamente usati in parallelo, possono moltiplicare  $\times 100$ la *velocità* del sistema
	- 
Adesso vedremo *due soluzioni* per gestire le problematiche: da un lato avremo il *RAID*, e dall'altra i *FDS*.
