---
data: 2024-03-11
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Architettura di Von-Neumann
tipologia: appunti
stato: "1"
capitolo: Architetture degli elaboratori
---
- - -
*Caso specifico di un calcolatore generico: l'architettura di Von-Neumann. Struttura base di un calcolatore: CPU, Memoria primaria, periferiche e bus. Strutture specifiche di ogni singolo componente. Ciclo fetch-decode-execute della CPU.*
- - -
# 1. Layout di un Architettura di Von-Neumann
**IL LAYOUT GENERALE.** L'*architettura di Von-Neumann* è una *disposizione specifica* di un *calcolatore*, ed è formate principalmente da quattro componenti:
- La *CPU*, ovvero la *Central Processing Unit* che *esegue* le istruzioni
- La *memoria primaria*, della quale l'unicità è caratteristica dell'*architettura di Von-Neumann*; contiene sia *dati* che *istruzioni*
- Le *periferiche*, ovvero i *dispositivi I/O* che permettono l'interazione del calcolatore con l'*esterno*: comprendono la *memoria di massa*, *dispositivi di input e output* come la *tastiera* o il *monitor*
- Il *bus* che mette in *comunicazioni* le diverse componenti appena viste.

**FIGURA 1.1.** (*Architettura di Von-Neumann*)
![[Pasted image 20240311171935.png]]

# 2. Strutturazione specifica dei componenti
**CPU.** Specificamente la *CPU* è formata da altri componenti interni.
- Il *Program Counter*, abbreviato come *PC*: serve a *tenere conto* dell'*istruzione da eseguire* in un programma. In parole brevi, controlla il *flusso di esecuzione* di un programma.
- Il *Register file*, che tiene conto delle istruzioni.
- L'*ALU*, che esegue i singoli *calcoli aritmetici*.
- Il *Bus Interface*, che interfaccia il *register* con il *bus*.

**MEMORIA PRIMARIA.** La memoria primaria è organizzata in *modo lineare*, come uno *stack* di *locazioni di memoria* associati a degli *indirizzi di memoria*. Ogni *locazione di memoria* contiene un singolo *valore* numerico.

**DISPOSITIVI I/O.** I dispositivi *I/O* permettono di consentire la *comunicazione* del *calcolatore* col *mondo esterno*. Si può trattare ad esempio di *dati in arrivo*, che possono venire dalla *tastiera* o dal *mouse*; similmente si può parlare anche di *dati in uscita*, che sono visualizzabili col *monitor* o periferiche simili. Oppure si può trattare anche di un'*archiviazione larga di dati*, ovvero di *"mass storage"*, che può essere fatto con componenti come l'*HDD*, l'*SSD*, ...

**FIGURA 2.1.** (*Struttura particolare della CPU*)
![[Pasted image 20240311173452.png]]

# 3. Ciclo fetch-decode-execute della CPU
**IL CICLO.** La *CPU* segue delle istruzioni, e lo fa effettuando un ciclo di *tre operazioni*: fetch, decode e infinite execute.

**FETCH.** In questo stato il processore *incrementa* il *PC (program counter)*, ricava l'*istruzione* dalla *memoria primaria* e salva questa istruzione nell'*instruction register*.
**DECODE.** In questo processo la *CPU* interpreta il valore numerico in un'istruzione, il cui significato cambia al *variare dell'architettura*.
**EXECUTE.** In questo ultimo stato il processore esegue le operazioni contenute nell'*istruzione*, avvalendosi dell'*ALU*.