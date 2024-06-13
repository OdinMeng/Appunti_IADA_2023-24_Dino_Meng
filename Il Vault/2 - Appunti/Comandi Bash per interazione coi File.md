---
data: 2024-04-16
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Comandi Bash per interazione coi File
tipologia: appunti
stato: "0"
capitolo: I Dati sui Sistemi Operativi
---
- - -
*Breve richiamo sui comandi Bash per interagire con i file.*
- - -
# 1. Comandi Bash per File
Ripassiamo i comandi Bash per manipolare i file.

**Le Utility di GNU/Linux.**
I SO Linux/Posix hanno dei *programmi pre-installi per gestire i file*:
Sono delle *utility* che permettono di svolgere compiti semplici e ripetitivi da  riga di comando
Senza dover scrivere un programma apposito che chiami le *System Call o Funzioni di Libreria necessarie*.
Sono documentati nella sezione 1 di `man`

1. **Lettura di file:**
- `cat filename`: stampa su Standard Output il contenuto di un file
- `less filename` e `more filename`: visualizzazione passo-passo
- `head  filename` e `tail filename`: stampa prime/ultime righe di un file
- `grep pattern file`: stampa delle righe che contengono un `pattern`

2. **Scrittura di file:**
- Per scrivere su file si usa tipicamente la *redirezione su file* della Bash:
```c
echo "Ciao" > filename
```
- Con `touch filename` creo un file se non esiste

3. **Rimozione di file:**
- `rm filename`: rimuove un file (se ho i permessi per farlo

4. **Altre operazioni**:
- `cp origine destinazione`: copia un file
- `chmod, chgrp, chown`: modificano permessi, gruppo e proprietario di un file