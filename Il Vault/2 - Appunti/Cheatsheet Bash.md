---
data: 2024-03-21
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Comandi Bash
tipologia: appunti
stato: "1"
capitolo: Linguaggio Bash
---
- - -
*Cheatsheet Bash utile per smanettare*
- - -
# 1. Concatenazione Comandi
- `;` - semplice concatenazione una dopo l'altra
- `||` - se il primo comando dà errori, allora l'altro comando viene eseguito
- `&&` - se il primo comando non dà errori, l'altro comando viene eseguito
- `1>` - redireziona il stdout di un comando in un altro file 
- `1>>` - uguale a `1>`, al posto di cancellare il contenuto di un file aggiunge a capo
- `2>` - redireziona il stderr 
- `<` - redireziona il stdin
- `|` - pipe; il stdout del primo comando diventa lo stdin del primo comando
# 2. Comandi di Base
- `man [comando]` - restituisce del testo che spiega un comando
- `whereis [comando]` - restituisce il path in cui si trova il codice del comando
- `date` - visualizza la data
- `who` - mostra gli utenti attualmente collegati
- `uptime` - mostra il tempo di vita del sistema
- `hostname` - nome della macchina
# 3. Comandi Relativi al File System
- `ls [dir]` - lista il contenuto della directory attuale o specificata.
- `touch` o `echo > [filename]` - crea file
- `rm [-rfi] [filename]` - elimina un (o più) file(s)
- `cd [path]` - cambia directory
- `mkdir, rmdir` - crea o elimina directory
- `cp, mv [src] [dst]` - copia/sposta file o cartelle
- `ln [-s]` - crea link (soft) ad un file
- `find [path] [-n nome] [print]` - cerca file in una cartella
- `cat` - stampa contenuto di un file a stdout
- `nano` - editor testi semplice
- `vim` - editor testi per masochisti
- `pdw` - stampa la directory corrente
# 4. Comandi Relativi agli Utenti e ai Permessi
- `adduser, deluser, addgroup, delgroup` - aggiunge/rimuove utenti o gruppi
- `groups` - stampa i gruppi ai quali appartiene l'utente corrente
- `whoami` - stampa il nome dell'utente corrente
- `su [utente]` - cambia utente
- `sudo [comando]` - esegue un comando con privilegi root 
- `chmod [permessi] [file]` - modifica i permessi di un file
- `chown, chgrp [-r] [nome] [file]` - modifica utente/gruppo proprietario di un file
# 5. Comandi Relativi ai Processi
- `ps [ufax...]` - stampa i processi in esecuzione
- `kill [PID]` - uccide processo
- `ifconfig` - mostra lo stato della rete
- `top` - mostra processi attivi in maniera interattiva
# 6. Comandi Relativi ai Filtri (e simili)
- `grep [-nicve...] [pattern] [content]` - filtra il contenuto con un certo pattern
- `cut [-b byterange/-d delimitatore -c campi]` - estrae colonne o campi di un contenuto 
- `tr [-cds] [set1] [set2]` - sostituisce il contenuto set1 di un testo con set2
- `sort [options] [-o outfile] [file]` - ordina un file in modo arbitrario (da specificare)
- `uniq [-cdu]` - esame i dati linea per linea, cercando i duplicati
- `wc [-wcl]` - conta testo per parole/caratteri/linee
# 7. Condizioni
- `(( espressione ))` - condizione numerica
- `[[ espressione ]]` - condizione tra stringhe
- `[[ -a -f/-c -r -w -x path ]]` - condizione su path
