---
data: 2024-04-13
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Utenti e Gruppi su Linux
tipologia: appunti
stato: "1"
capitolo: I Dati sui Sistemi Operativi
---
- - -
*Ulteriori dettagli su Utenti e Gruppi in Linux: utenti, gruppo primario/secondario, utente root e file di configurazione.*
- - -
# 1. Utenti e Gruppi
In parte visto all'inizio del corso ([[Utenti e Permessi Linux]])
In Linux, esistono:
- **Utenti**: account che possono utilizzare il sistema, creare processi, accedere a file
- **Gruppi**: insiemi di utenti. Ogni utente ha un:
  - **Gruppo principale:** solo uno ($=1$)
  - **Gruppi secondari:** senza limiti di numero ($\geq 0$)
  
Ogni utente e gruppo è identificato da un *nome* e da un *id* numerico

**Esempio**:
- **Utenti:** `martino`, `luca`, `paolo`
- **Gruppo principale:**
  - `martino` -> `docenti`
  - `luca` -> `studenti`
  - `paolo` -> `studenti`
- **Gruppo secondario:**
  - `martino` `luca` -> `sistemioperativi`
  - `martino` `paolo` -> `reti`
  
# 2. Utente root
**Definizione.** (*Utente root*)
L'utente *root* esiste su tutti i sistemi ([[Utenti e Permessi Linux#^a6b955|1]])
- Ha *id* $0$
- Bypassa tutti i controlli sui permessi (ovvero fa ciò che vuole, nei limiti del software)

*Nota*: *root* è un utente con privilegi illimitati. NON è né parte del kernel, né il suo codice esegue in modalità kernel.

*Errore comune:* dire che l'utente *root* esegue processi in kernel-mode! Non può mica accedere alla *memoria* o ai *dispositivi I/O*!

# 3. File per utenti e gruppi
**File di configurazione per utenti e gruppi.**
Le informazioni su utenti e gruppi attivi salvate in file di configurazione accessibili *solo a root*:
- `/etc/passwd`: lista di utenti e dettagli ($ID$, *home directory*)
	- Nota: Una volta c'erano le *password* dentro, adesso non più per ovvi motivi di sicurezza (nonostante il nome ci dia un'idea del genere).
- `/etc/shadow`: password cifrate con *hash*.
- `/etc/group`: lista di *gruppi* e dei rispettivi componenti
