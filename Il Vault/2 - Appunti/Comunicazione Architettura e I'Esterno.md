---
data: 2024-03-12
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Comunicazione Architettura e I'Esterno
tipologia: appunti
stato: "1"
capitolo: Architetture degli elaboratori
---
- - -
*Approcci PMIO, MMIO per la comunicazione tra architettura e strutture I/O. Metodi polling e interrupt per gestire la comunicazione tra CPU e I/O. Direct Memory Access per trasferimento di grandi quantità di dati.*
- - -
# 1. Le questioni fondamentali
**LE DOMANDE.** Per poter aver un'idea di come poter far *comunicare* il nostro *calcolatore* con le strutture *I/O esterne*, dobbiamo porci le seguenti domande.
- Cosa succede se vogliamo comunicare con altri dispositivi? Come facciamo ad inviare e ricevere informazioni? Dove li salviamo? Come gestiamo la comunicazione asincrona?
- Come possiamo accedere ai dispositivi di memorizzazione di massa?
# 2. Collegamento delle informazioni
**PMIO.** Una prima idea per poter approcciarsi alla prima domanda è di usare l'approccio *"Port Mapped I/O"*, dove semplicemente creiamo delle *istruzioni speciali* per comunicare con dei dispositivi input-output. In particolare, sono delle istruzioni simili a dei *load* e *store*. Da notare che gli *indirizzi dei dispositivi I/O* sono diversi da quelli del *calcolatore*.
Quindi, in questo caso *separiamo* la *memoria di lavoro* dai *dispositivi I/O*.

**MMIO.** Un'idea più aderente ad un approccio *RISC* è quello di usare *istruzioni già esistenti*: quindi dedichiamo alcuni *istruzioni già esistenti* della memoria per *operazioni di I/O*. In particolare servirà un *componente* che sarà in grado di *decodificare* se un *indirizzo* è dedicato al *calcolatore* o al *dispositivo I/O*.

# 3. Esecuzione delle Operazioni I/O
**LA SECONDA DOMANDA.** Ora, per risolvere la seconda domanda, ovvero *come gestire la comunicazione effettiva* tra il calcolatore e l'I/O, abbiamo due approcci per gestire casi in cui *i dispositivi* lavorano con *tempi diversi*, ovvero quando un dispositivo è più veloce dell'altro. 
I due metodi principali sono il *polling* e l'*interrupt.* 

**POLLING.** L'idea del *polling* è quella di controllare ad *intervalli regolari* se il dispositivo *I/O* sia pronto o meno. Il svantaggio di questo approccio è il *dispendio del tempo*, dedicato per fare il *polling*; oppure in certi casi, è stato effettuato in un tempo troppo tardivo.

**INTERRUPT.** Una seconda idea è quello di *"avvisare"* il *CPU* quando un dispositivo è pronto. Questo avviene tramite *supporto hardware*, che *"interrompe"* il processore forzandolo ad un pezzo di codice per gestire il dispositivo I/O.

# 4. Gestione di Grande Quantità di Dati
**L'ULTIMA DOMANDA.** Per gestire invece un *trasferimento di grandi quantità di dati*, gli approcci di *polling* e di *interrupt* sono inefficaci, dal momento che da un lato spostiamo sempre dati e dall'altro il processore viene continuamente interrotto. Allora l'idea è quello di *istituire un specifico* fatto apposta per questo caso, ovvero la *direct memory access* (DMA). Questo permette di copiare i dati dal dispositivo I/O alla memoria di lavoro, senza dover interrompere la *CPU*.