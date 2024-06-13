---
data: 2024-05-21
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Algoritmi per lo Rimpiazzamento delle Pagine
tipologia: appunti
stato: "1"
capitolo: Memoria
---
- - -
*Problema: rimpiazzamento delle pagine dalla memoria. Algoritmi: FIFO, Ottimo e LRU.*
- - -
# 1. Rimpiazzamento delle pagine
La memoria fisica è *sempre più piccola* di quella virtuale

Se è piena di pagine utilizzate da processi attivi, il SO deve *scegliere* quale pagine eliminare e salvare su disco

Esistono diversi *algoritmi di rimpiazzamento* per effettuare ciò in maniera furba

## 1.1. Algoritmo FIFO
Rimuovo dalla memoria *la pagina caricata da più tempo*

![width:800px center ](images/sost-fifo.png)

- Semplice, ma inefficace
	- *Ragionamento analogico:* A casa non ho abbastanza spazio per mettere nuove cose; quindi prendo la cosa più *vecchia*, come il *divano* e la metto in cantinato.

## 1.2. Algoritmo Ottimo
Rimuovo la pagina che non mi servirà per più tempo *nel futuro*

![width:800px center ](images/sost-opt.png)

- Ottimo, ma *impossibile prevedere il futuro* (purtroppo)
	- *Ragionamento analogico:* A maggio tolgo gli scii, a dicembre tolgo la tavola da surf. Purtroppo impossibile da *"automatizzare"* ragionamenti del genere in una maniera rigorosa

## 1.3. Algoritmo Least Recently Used
Rimuovo la pagina che *non viene usata da più tempo*

![width:800px center ](images/sost-lru.png)

 - Semplice, efficace.
- Serve collaborazione della *MMU* per tenere traccia di accessi
- Usato quasi sempre (con varianti)
- Non si fa differenza tra processi: le pagine sono uguali
