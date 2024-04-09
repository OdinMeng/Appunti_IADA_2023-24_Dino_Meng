---
data: 2024-03-11
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Architettura Base del Calcolatore
tipologia: appunti
stato: "1"
capitolo: Architetture degli elaboratori
---
- - -
*Architettura base (generalizzata) di un calcolatore. Esecuzione di un programma: linguaggio di programmazione ad alto livello, linguaggio assembly e codice macchina.*
- - -
# 1. Il black box
**IL BLACK BOX.** Sapendo che *tutto dev'essere codificato nel linguaggio binario* nel calcolatore, vogliamo capire come il nostro *computer* è in grado di *eseguire le istruzioni*, che sono chiaramente scritte in un linguaggio *non binario* (come ad esempio *C* oppure *Python*).
Infatti quando vogliamo eseguire un programma, dobbiamo *convertire* il *codice sorgente* del programma in un linguaggio che sia leggibile dalla macchina: tuttavia questo processo non è esplicitamente visibile, dal momento che possiamo vedere solo l'*input* e l'*output*. Quindi c'è questa specie di *"black box"* che converte il codice sorgente in codice macchina.
Il nostro obbiettivo è di chiarire questo *"black box"*.

**FIGURA 1.1.** (*Il black box*)
![[Pasted image 20240311170445.png]]

# 2. Compilatore e Assembler
**IL COMPILATORE.** Ci ricordiamo che il linguaggio C è un linguaggio di programmazione che va *compilato*, ovvero trasformato in un linguaggio di programmazione che è più *"leggibile"* dal computer. Stiamo parlando del linguaggio *Assembly*, che è *poco astratto*.
Tuttavia, le istruzioni che caratterizzano questo linguaggio dipende dalla *singola architettura dell'elaboratore* (ovvero del *processore*). Infatti ci sono *molti* approcci diversi per il linguaggio *Assembly*. Quindi questo linguaggio si dice *non portatile*.
**L'ASSEMBLER.** Tuttavia il linguaggio *Assembly* non è sufficiente per essere compreso dalla macchina, dal momento che rimane ancora testo. Vogliamo quindi trasformare un'istruzione in una singola sequenza di cifre $0,1$: su questo processo interviene l'*assembler* per trasformare le istruzioni in valori numerici (ovvero in *forma statica*) e interviene anche il *linker* per le *librerie*. Per vedere più dettagli su questo processo, vedere il sito https://godbolt.org/.

**FIGURA 2.1.** (*Schema generale della conversione di un programma*)
![[Pasted image 20240311171201.png]]
