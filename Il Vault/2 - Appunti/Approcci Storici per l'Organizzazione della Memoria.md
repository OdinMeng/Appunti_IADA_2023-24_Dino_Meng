---
data: 2024-05-21
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Approcci Storici per l'Organizzazione della Memoria
tipologia: appunti
stato: "1"
capitolo: Memoria
---
- - -
*Approcci Storici per l'Organizzazione della Memoria: sostituzione totale, base e limit, memoria segmentata e memoria paginata. Conseguenza: memoria virtuale.*
- - -
# 1. Richiamo alla Memoria dei Sistemi a Processore
I sistemi ad processore possiedono molte *memorie*

![width:700px center ](images/mem-hierarchy.png)

Il compito del SO è gestire l'utilizzo della memoria da parte dei processi, con gli obbiettivi di:
- *Massimizzazione delle prestazioni*: usare la memoria più veloce possibile
- *Isolamento tra processi*: evitare problemi di sicurezza e stabilità
- *Facilita per il programmatore*: si vorrebbe che il SO fosse *trasparente* per chi programma

---

# 2. Approcci Storici per la Memoria
## 2.1. Pre-S.O.
Inizialmente, non vi era SO: l'elaboratore eseguiva un programma per volta
- Un programma poteva accedere a qualsiasi locazione di memoria
*Nota:* ancora non esisteva la memoria virtuale e la MMU, ecc...

## 2.2. Sostituzione Totale
Un SO che sostituisce completamente la memoria principale del programma in esecuzione ad ogni *Context Switching*
- L'approccio più *fallimentare* e *lento*: ho troppo tempo sprecato!

![500](images/no-limit.png)

## 2.3. Approccio Base e Limit
Introdotta negli *anni '70-'80*
**IDEA.**
- Più processi condividono la memoria
- Hanno il permesso di accedere a una sola zona di memoria
- Le *"fette"* sono identificate da due numeri
	- Ogni processo ha una sua *"fetta"*

![400](images/base-limit.png)

Molto importante, ebbe un grande successo
- Nasce il concetto di *Indirizzo Logico o Virtuale* 
	- Utile per la *sicurezza* della memoria
- La CPU ha i registri  *Base* e *Limit*, settati dal SO
- Essa permette ai processi di emettere solo indirizzi consentiti

**Pro:**
- Permette di avere *più processi*
- *Sicuro*: un processo non può accedere a memoria di altri

**Contro:**
- Allocazione *contigua*: si rischia spreco di memoria
	- Rischio la *frammentazione esterna*
- Poca flessibilità

![500](images/relocation-better.png)

## 2.4. Approccio a memoria segmentata
Come Base + Limit, ma ogni processo ha a disposizione più *segmenti*
Solitamente, ogni segmento ha scopi diversi:
- Segmento di *Codice*
- Segmento di Dati (Variabili Globali e Costanti)
- Segmento di Stack (Variabili di funzioni)
Sostanzialmente questa è una *generalizzazione* dell'approccio a memoria segmentata, migliorandola (quasi!) in ogni aspetto

**Pro:**
- Abbastanza *flessibile*
- *Semplice* da implementare
- Veloce

**Contro:**
- Segmenti di lunghezza diversa sono problematici da gestire
- Introducono *frammentazione* come in *Base + Limit*
	- Il limite principale non è stato superato

E' stato comunque molto usato negli anni '80 e '90

![500](images/segm-2.png)

![500](images/segm-1.png)


## 2.5. Approccio a paginazione
Vediamo l'approccio moderno. 

**IDEA.**
Un processo emette *Indirizzi Virtuali*
- Un modulo hardware detto *Memory Management Unit li traduce in Indirizzi Fisici*

Lo spazio degli indirizzi virtuali è diviso in blocchi di lunghezza fissa dette *pagine*
- Una tabella mappa la posizione delle pagine dallo spazio virtuale a quello fisico

In generale abbiamo che:
- Il processo vede uno *spazio virtuale* che è diviso in *pagine di grandezza dimensione fissa*
- La *tabella delle pagine* indica come sono state allocate nella memoria fisica
- La *MMU* effettua la traduzione
- Il *SO* imposta/programma la MMU
- Tipicamente lo spazio degli indirizzi virtuali è più grande di quello degli indirizzi fisici
	- *Esempio.* Il programma può emettere indirizzi su 1024 pagine, ma in memoria ce ne stanno solo 80. Se non basta, vedremo cosa succede; per ora si *"spera"* che tutto basti
- Il programmatore non deve sapere quanta memoria ha il sistema; gestisce tutto il sistema

**Pro:**
- No frammentazione (ho *pagine* con dimensioni fisse)
- Flessibile 
* E' lo standard *de-facto* *
- Utilizzato in tutti i moderni processori e SO

**Contro:**
- Richiede un Hardware veloce, che assiste tutto il processo (in particolare deve avere anche la *MMU*); tuttavia è l'*unico* difetto superabile.

**Figura:** (*Livello circuitale*)
![500](images/mmu.png)

**Figura:** (*Livello logico*)
![500](images/pagin-1.png)

![500](images/pagin-2.png)

![360](images/pagin-4.png)


---

# 3. La memoria virtuale
E' il naturale effetto *della memoria paginata*
- Il processo vede uno spazio di *indirizzi virtuale*, *mappato sulla memoria fisica*

**Architettura x86-64**:
- Pagine da 4KB
	- *Offset da 12 bit* ($\log_2(4000) \approx 12$) 
- Indirizzi Virtuali su 64bit, ma solo 48 significativi utilizzati 
	- Memoria virtuale di *256TB* 
- La MMU traduce ad indirizzi fisici di 48bit
	- Ma la memoria fisica è sempre *molto* più piccola; di solito abbiamo fino a 32GB per un computer personale.
## 3.1. Swap
Se le pagine non stanno tutte in memoria, si mettono su disco.
Lo spazio su disco che contiene le pagine non in memoria si chiama *Swap*

![450](images/virt-2.png)

## 3.2. Page Fault
Se il processo *emette un indirizzo di una pagina che non è in memoria*, si verifica un *Page Fault*:
1. La MMU avverte il SO
2. Il SO *interrompe il processo*
3. Il SO *carica* la pagina (o la crea) da disco
4. Il SO *reimposta* la MMU
5. Il processo *riprende*
Questo è un processo molto *lento*, quindi da *minimizzare*!

![600](images/virt-3.png)

