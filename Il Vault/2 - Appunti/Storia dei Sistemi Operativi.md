---
data: 2024-03-16
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Storia dei Sistemi Operativi
tipologia: appunti
stato: "1"
capitolo: Introduzione ai Sistemi Operativi
---
- - -
*Storia dei sistemi operativi: dagli elaboratori ai sistemi operativi moderni (linux ecluso).*
- - -
# 1. Breve excursus sulla Storia degli Elaboratori
**Condizione necessaria** per un SO: Avere un sistema di elaborazione

**LA PRIMA IDEA:** Primo elaboratore *progettato* da Charles Babbage nella *prima metà dell'800*
- Puramente meccanico.
- Non fu mai costruito

**I PRIM ELABORATORI:** I primi elaboratori vennero *costruiti* negli anni '40 del '900
- Basati su *valvole*, oggi si usano i *transistori* che sono più *veloci ed efficaci* (e meno grandi)
- Programmati direttamente in linguaggio macchina
- Nessun sistema operativo. L'elaboratore eseguiva un programma per volta

**FIGURA: Elaboratore a valvole**
![width:800px center](images/valvole.png)

# 2. Il passaggio ai transistor
**Elaboratori a transistor (1955-1965)** (nel *dopoguerra*)
- Mainframe custoditi in locali e da tecnici specializzati
- Programmi scritti su schede performate o nastri magnetici
- Primi linguaggi di programmazione (e.g., *FORTRAN*)
- I programmi venivano *eseguiti in sequenza*.
- Il *sistema operativo* aveva il *solo* compito di *eseguire programmi* in sequenza: il codice veniva rappresentato dalle *schede perforate*.

**FIGURA: MACCHINA A TRANSISTOR**
![width:600px center](images/batch.png)
![width:500px](images/transistor2.png) ![width:250px](images/transistor1.png)
# 3. I circuiti integrati e i Primi Sistemi Operativi
**Circuiti Integrati (1965-1980)**
- Prestazioni maggiori. Prezzi e dimensioni minori: infatti i *circuiti integrati* sono delle *singole schede* con molti *transistor*
- IBM crea la linea di computer IBM 360, col suo SO detto **OS/360**
  - Introduce multiprogrammazione: più processi in esecuzione contemporaneamente
  - Usato ancora oggi in alcuni campi
  
- Il MIT assieme a partner industriali (3) sviluppa **MULTICS**
  - Progettato per *main frame molto potenti*
  - Permette l'utilizzo a *centinaia di utenti*
  - Poco successo: *MULTICS* rimane comunque importante, dato che ha posto le *fondamenta* per la costruzione di altri *sistemi operativi*. Infatti, da MULTICS nasce *Unix* nei Bell Labs (New Jersey), come progetto personale di Ken Thompson, Dennis Ritchie e altri: poi da UNIX nascerà la famiglia Linux

**FIGURA: Elaboratore a circuito integrato**
![width:600px](images/ci.png)

**FIGURA: Ken Thompson e Dennis Ritchie**
![width:400px center](images/ken-dennis.png)

# 4. Apple e Microsoft
**I personal Computer (1980-oggi)**
- Grazie a sviluppi nei Circuiti Integrati fu possibile produrre computer a prezzi bassi.
- Nei primi anni '80 nasce **Microsoft/DOS**, inizialmente pensato per computer IBM con CPU Intel (famiglia 8086)
- La **Apple** inventa un sistema operativo con **GUI** che ottiene molto successo, da cui **Windows** si ispirerà

**FIGURA: Bill Gates e Steve Jobs**
![width:300px center](images/jobs-gates.png)

**Microsoft**: Fondata nel 1975 da Bill Gates e Paul Allen
- Nel 1981 commercializza *MS-DOS*
- Nel 1985 commercializza *Windows*
  - Sistema operativo con *interfaccia grafica a finestre* (da cui il nome)
  - Orientato a *processori Intel*
- Nel tempo ha commercializzato versioni a
  - 16 bit (Windows 1.0, 1985 – Windows 3.1, 1992)
  - 16/32 bit (Windows 9x, 1993-2000)
  - 32/64 bit (da Windows NT in poi)
  - Oggi abbiamo Windows 11

**Apple**: fondata nel 1976 da Steve Jobs, Steve Wozniak e Ronald Wayne
- Dal 1984 al 2001 commercializza Mac OS
  - SO completamente grafico
  - Raggiunge *limiti strutturali* di sviluppo alla fine del '90, non permettendo
    - *Multitasking preemptivo*: questo si rivelò come la *"falla fondamentale"* del sistema operativo *MAC OS*, in quanto con questo sistema *era il singolo processo a dire quando interrompere la CPU*. Se si ha un *"processo buggato"*, allora l'intero processore sarebbe bloccato!
    - Memoria protetta
- Ricostruendo tutto *da capo*, nel 2001 commercializza Mac OS X
  - Nato per computer Macintosh
  - Inizialmente retro-compatibile con Mac OS
  - Basato su architettura UNIX

**I SISTEMI OPERATIVI DI OGGI.**
- Windows e Apple Mac OS continuano lo sviluppo fino ad ora.
  - Windows 11 e Mac OS 13 Ventura
- Dagli anno '90 in boom dei **telefoni cellulari**, porta alla nascita di sistemi operativi dedicati. Nascono:
  - (Symbian: morto nel 2011)
  - Android
  - Mac OS (*iOS*)
