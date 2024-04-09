---
data: 2024-03-18
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Shell Linux
tipologia: appunti
stato: "1"
capitolo: Linux
---
- - -
*Concetto di sessione shell e SSH su Linux.*
- - -
# 1. Login su Shell
Per fare login sulla *shell* ([[Definizioni Relative ai Sistemi Operativi#^043a3d]]), è necessario inserire le proprie *credenziali sul terminale* (in realtà di solito viene fatta *automaticamente*):
```
login as: <username>
password: <password>
```

Per fare logout: `CTRL+D`, `exit` o `shutdown` (solo *superuser*, detto *root*)

---
# 2. Terminali Remoti attraverso SSH
E' possibile usare un terminale *remoto* utilizzando SSH (*Secure Shell*). ^4e2dd7

Su un'altra macchina collegata *in rete*, digitare su terminale:
```bash
ssh <username>@<indirizzo IP della macchina>
```
Si utilizza il protocollo *Secure Shell*, che *trasmette* in maniera cifrata i comandi e il loro output tramite la rete.