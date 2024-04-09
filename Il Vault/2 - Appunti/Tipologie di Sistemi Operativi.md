---
data: 2024-03-16
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Tipologie di Sistemi Operativi
tipologia: appunti
stato: "1"
capitolo: Introduzione ai Sistemi Operativi
---
- - -
*Tipologie di Sistemi Operativi.*
- - -
# 0. Preambolo
Ci sono diverse varietà di SO. Alcune ancora vive, altre morte e sepolte. Possono essere suddivise in *ambiti d'utilizzo*.
# 1. Mainframe
**1. SO per mainframe**
- Per elaboratori *enormi in grandi compagnie*
- Supportano tanti utenti e risorse
- In declino in favore di SO general purpose (Linux)
- Esiste ancora OS/390, discendente di OS/360 di IBM. Ad esempio ancora oggi i *server delle banche* usano questi OS.

# 2. Uso personale
**2. SO per PC** (ad uso personale)
- Sono i più diffusi.
- *Basati su interfaccia grafica*
- Pensati per un solo utente, *non esperto*
- Esempi: Windows, MacOS, Ubuntu (?), ...

# 3. Server
**3. SO per server**
- Per *professionisti*
- Spesso dotati di *sola shell*
- Sono varianti di quelli per PC
- Esempi: Linux, Windows Server

# 4. Dispositivi Portatili
**4. SO per Smartphone o tablet**
- Basati su GUI e input touch
- Esempi: Android, MacOS

# 5. Sistemi Operativi ad Uso Particolare
**5. SO integrati**
- Per router, elettrodomestici, veicoli
- Non accettano programmi esterni

**6. SO per sensori**
- Su dispositivi con risorse *molto limitate* (come ad esempio calcolatrici)
- Molto leggeri e semplici

Usi comuni per le tipologie 5,6: Frighi, elettrodomestici, ...

**7. SO real time**
- Per applicazioni particolari dove il *tempo è fondamentale*
  - Processi industriali, *aerei*, autoveicoli
- Alcuni compiti devono essere svolti **tassativamente** entro *una deadline*: il più *velocemente possibile*
  - Design del sistema notevolmente più complicato
  
**8. SO per smartcard**
- Le *smartcard* (e.g., Bancomat) hanno un sistema di elaborazione e un SO (*spesso*)
- Requisiti di **basso consumo** e **sicurezza**
