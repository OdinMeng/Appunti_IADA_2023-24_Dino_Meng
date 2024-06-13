---
data: 2024-06-03
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Layer di Compatibilità
tipologia: appunti
stato: "1"
capitolo: Argomenti Misti (Sistemi Operativi)
---
- - -
*Layer di Compatibilità: Motivazione, definizione, tipologie e tecnologie principali.*
- - -
# Layer di compatibilità
Torniamo indietro con queste tecnologie di virtualizzazione. In particolare siamo sul *livello utente*.

## VM e Software
Le VM permettono di avere un sistema ad elaboratore *virtuale*
- Su cui installare *un SO a piacere*
- Esempio: VM con Linux su PC Windows

Spesso per l'utente, la VM serve solo a usare un *software* scritto per un SO diverso
- Esso può girare solo su $(Architettura,SO)$ *per cui é stato compilato*
- Non é possibile usare su altro $SO$, anche se stessa $Architettura$. *Le System Call sono diverse!* 
Tuttavia le *macchine virtuali* sono un po' *"esaggerate"* per questa casistica. Vediamo un'altra tecnica di virtualizzazione, ovvero i *Layer di Compatibilità*.

## Definizione di Layer di Compatibilità
Un *Layer di compatibilità* é un *software* che permette di eseguire un programma scritto per un $SO$ diverso: sostanzialmente implementa delle *System Call*
- Ma compilato su stessa $Architettura$
Implementa le **System Call** di un altro SO, tramite quelle del SO corrente.
- **Esempio:** Win32 `ReadFile` ⇒ POSIX `read` 

Funzionamento *complesso* e problematico
- Esistono meccanismi *non-mappabili*
- Gestione di I/O complessa: dipende da SO e da driver
- Le System Call diverse hanno una semantica diversa
- Molto difficile, comunque possibile

![500](images/sc.png)

## Layer di Compatibilità a Livello API e ABI
**Layer di compatibilità a livello Application Programming Interface (API):** Richiede ricompilazione del software
- Basato su una libreria software implementa le System Call di un SO tramite *quelle di un altro*
- Si fa una specie di *"massaggio degli argomenti"* delle System Call

**Layer di compatibilità a livello Application Binary Interface (ABI):** *NON* richiede ricompilazione del software
- Il programma usa le System Call del proprio SO. Il Layer *le intercetta* e *invoca quelle del SO corrente*

## Tecnologie Principali
1. **CYGWIN**
Permette di usare programmi che usano System Call **POSIX** su Windows
- A livello **API**
- Richiede ricompilazione

**Nota:** POSIX $\neq$ Linux

**Cygwin** é semplicemente un'altro ambiente per compilare ed eseguire programmi POSIX che usano le System Call e Librerie POSIX

2. **WINE**
Permette di usare programmi per **Windows** su Linux e MacOS
- A livello **ABI**
- Non richiede ricompilazione
  - Non sarebbe possibile con software closed-source Windows

Molto matura e usata:
- Funzionano anche programmi con interfaccia grafica
- Alcuni programmi complessi invece non si possono usare

3. **WSL 1**
Permette di usare programmi per **Linux** su Windows
- A livello **ABI**
- Non richiede ricompilazione

**Nota.** (*WSL 2*)
Invece la *WSL 2* è una VM minimale con un vero kernel
- **NON** é un Layer di compatibilità
- Più flessibile, ma più lenta
