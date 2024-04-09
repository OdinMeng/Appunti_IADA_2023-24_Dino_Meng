---
data: 2024-03-11
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Paradigmi CISC e RISC
tipologia: appunti
stato: "1"
capitolo: Architetture degli elaboratori
---
- - -
*Paradigmi CISC e RISC per le istruzioni del linguaggio Assembly. Filosofia generale degli approcci, svantaggi e vantaggi e spiegazione della necessità storica di due paradigmi diversi.*
- - -
# 1. Introduzione Storica
**INTRODUZIONE STORICA.** Nel corso della storia sono stati sviluppati *due approcci* per codificare le *istruzioni Assembly*: una è il *CISC* (*Complex Instruction Set Computers*) e l'altra è *RISC* (*Reduced Instruction Set Computers*). La più tradizionale è la *CISC*, con le architetture Intel negli anni '70, e la più nuova e la *RISC*. Nei paragrafi successivi si vedrà il motivo.
# 2. RISC e CISC
**CISC.** Il *primo paradigma* è il *CISC*, da cui il nome ci dice che si vuole svolgere *tante operazioni complesse*: questo semplifica tantissimo la vita dei *programmatori Assembly*, dato che devono scrivere meno istruzioni! Tuttavia, con questo approccio si ha un *tempo di esecuzione* più lento (in particolare le istruzioni richiedono più di un *ciclo di clock*) dato che le istruzioni diventano *complesse* da *decodificare*. Questo è stato l'approccio preferito dall'inizio, dato che il *compilatore* non esisteva, oppure non era ancora abbastanza *"affidabile"*.
**RISC.** Con l'*avvento dei compilatori*, si vuole iniziare a semplificare tutto: tanto con il linguaggio di programmazione C, non bisognava trattare più con *registri*! Con questo approccio si vuole dare un *"set"* di istruzioni *poche* ma *semplici*, e di solito ogni istruzione ha un suo solo compito preciso. Nell'avvenire del tempo, l'approccio *RISC* è diventato più popolare dal momento che è *più veloce* e che non serviva più *programmare in Assembly*.