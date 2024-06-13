---
data: 2024-03-18
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Esercizi su Linux
tipologia: appunti
stato: "1"
capitolo: Linux
---
- - -
*Esercizi su Linux.*
- - -
# 1. Slides
## Esercizi 1
1. POSIX é:
- `• Uno standard` `• Un SO` `• Una famiglia di SO`
2. UNIX é:
- `• Closed-Source` `• Open-Source`
3. Linux é:
- `• Closed-Source` `• Open-Source`
## Soluzioni 1
1. POSIX é uno standard.
2. UNIX é closed-source
3. Linux é open-source
## Esercizi 2
1. Stampare il contenuto del file `/etc/hosts`
2. Posizionarsi nella cartella `/tmp` e listare il contenuto della cartella `/home` usando un path relativo e uno assoluto
3. Usare l'editor nano per creare un file `file.txt` in una qualsivoglia cartella. Creare una link simbolico del file e cancellare l'originale. Cosa succede se si prova a stampare il contenuto del link? Ripetere con Hard Link
4. Creare una cartella e due file in essa. Cancellare la cartello con un unico comando.
5. Creare un nuovo gruppo `studenti` e un utente `studente` assegnato a tale gruppo.
   **Nota**: usare le opzioni `-m` `-g  <group>` del comando `useradd`
   E' necessario usare `sudo`?
   Un utente normale può listare i file nella home della home directory di `studente`?
   Modificare i permessi della home di `utente` affinchè tutti possano leggere, scrivere ed eseguire
## Soluzioni 2
1. Basta scrivere `cat ~/ect/hosts`
2. Indipendentemente da dove si trova, prima si scrive `cd ~/tmp`. Per il path relativo si scrive `cd ../home`; per il path assoluto si scrive `~/home`.
3. `touch file.txt`. Con un *soft link*, diventa impossibile leggere il file. Con un *hard link*, si puo' comunque leggere il file.
4. `rm -r(i) cartello` (la parte -i sarebbe opzionale, anche se è saggio usarlo)
5. Sì, è necessario usare sudo per creare il gruppo e l'utente. No, l'utente normale non può listare i file nella home della home directory di studente. Basta scrivere `chmod 777 /home`
# 2. Generate da ChatGPT
## Set 1 (Storia)
1. Chi è l'autore di Minix?
   - a) Linus Torvalds
   - b) Andrew Stuart Tanenbaum
   - c) Richard Stallman
   - d) Steve Jobs

2. Quale dei seguenti non è un sistema operativo Unix-like?
   - a) Unix
   - b) Linux
   - c) Windows
   - d) macOS

3. Quando è stato creato il kernel Linux?
   - a) 1970
   - b) 1988
   - c) 1991
   - d) 2000

4. Qual è una differenza chiave tra Linux e Minix?
   - a) Minix è stato originariamente sviluppato come un sistema operativo per scopi didattici, mentre Linux è stato creato per essere un sistema operativo completo per uso professionale.
   - b) Linux è stato creato da Andrew Stuart Tanenbaum, mentre Minix è stato creato da Linus Torvalds.
   - c) Minix è un sistema operativo a micro-kernel, mentre Linux è un sistema operativo a monolitico.
   - d) Minix è stato rilasciato come software closed-source, mentre Linux è stato rilasciato come software open-source.

5. Cosa significa l'acronimo "GNU" in GNU/Linux?
   - a) Grand Network Utilities
   - b) Global Network Union
   - c) GNU's Not Unix!
   - d) Generalized Networking Utility

6. Qual è una delle principali applicazioni di Linux nell'attuale panorama tecnologico?
   - a) Sistemi operativi per dispositivi Apple
   - b) Hosting di siti web
   - c) Sistemi operativi per computer Windows
   - d) Sistemi operativi per smartphone Android

7. Quale parte del sistema operativo GNU/Linux fornisce le applicazioni di default?
   - a) Il kernel
   - b) Le utility di sistema
   - c) Le librerie di default
   - d) Il sistema operativo GNU

8. Quale delle seguenti non è una piattaforma per cui Linux è alla base?
   - a) Hosting di siti web
   - b) Sistemi embedded
   - c) Piattaforme per Intelligenza Artificiale
   - d) Console di gioco PlayStation

## Set 2 (distribuzioni linux)
1. Qual è la principale differenza tra Linux e GNU/Linux?
   a) Linux è un sistema operativo completo, mentre GNU/Linux è solo il kernel
   b) Linux è il kernel, mentre GNU/Linux si riferisce a una famiglia di sistemi operativi basati su di esso
   c) Linux è un sistema operativo sviluppato da Linus Torvalds, mentre GNU/Linux è stato creato da Richard Stallman
   d) Linux è una distribuzione di software libero, mentre GNU/Linux è proprietario

2. Qual è il sistema operativo Linux più diffuso attualmente?
   a) Arch
   b) Red Hat Enterprise Linux
   c) Ubuntu
   d) Linux Mint

3. Quali sono le caratteristiche principali di Ubuntu?
   a) Basato su Debian, offre solo software libero
   b) Ha lo scopo di offrire un sistema operativo completo e facile da usare per PC e server
   c) È noto per la sua particolare attenzione alla stabilità e alla sicurezza
   d) Tutte le precedenti

4. Quale distribuzione Linux è sviluppata da volontari?
   a) Red Hat
   b) CentOS
   c) openSUSE Linux
   d) Fedora

5. Qual è la filosofia di Arch Linux?
   a) Massima compatibilità con hardware datato
   b) Mantenimento di un ambiente desktop predefinito
   c) Filosofia KISS (Keep It Simple, Stupid)
   d) Supporto commerciale a pagamento

6. Quale distribuzione Linux non prevede un ambiente desktop di default?
   a) Arch Linux
   b) Ubuntu
   c) Linux Mint
   d) Fedora

7. Quale distribuzione Linux è basata su Ubuntu?
   a) Arch Linux
   b) openSUSE Linux
   c) Mint
   d) CentOS

8. Qual è la caratteristica principale di CentOS?
   a) Versione consumer di Red Hat Enterprise Linux
   b) Offre funzionalità più innovative rispetto a Fedora
   c) Fornisce supporto commerciale a pagamento
   d) È sviluppato da volontari

9. Perché si dice che ci sono quasi distribuzioni di Linux infinite?
   a) Perché ogni distribuzione Linux è unica e non può essere catalogata
   b) Perché nuove distribuzioni vengono create e alcune vecchie vengono abbandonate rapidamente
   c) Perché il kernel Linux è estremamente personalizzabile
   d) Tutte le precedenti

10. Quale sistema operativo Linux viene utilizzato come punto di partenza per molte altre distribuzioni?
    a) Fedora
    b) Ubuntu
    c) Debian
    d) Arch Linux

## Set 3 (concetti linux)
**Domande a Scelta Multipla (10)**
1. Quale comando si utilizza per fare il login su una macchina Linux da terminale?
   - a) `ssh`
   - b) `login`
   - c) `su`
   - d) `logout`
   
2. Cosa fa il comando `ls -l`?
   - a) Lista il contenuto di una directory in formato lungo
   - b) Lista il contenuto di una directory in formato corto
   - c) Lista solo i file nascosti in una directory
   - d) Cambia i permessi di una directory
   
3. Come si chiama la directory principale del sistema Linux?
   - a) /root
   - b) /home
   - c) /var
   - d) /
   
4. Quale comando si utilizza per creare una nuova directory?
   - a) mkdir
   - b) touch
   - c) cp
   - d) mv
   
5. Cosa fa il comando `ps`?
   - a) Visualizza la data corrente
   - b) Mostra informazioni sui processi attivi
   - c) Stampa il contenuto di un file
   - d) Mostra le informazioni sullo spazio su disco
   
6. Quale opzione di `chmod` si usa per applicare le modifiche anche in modo ricorsivo?
   - a) -r
   - b) -f
   - c) -x
   - d) -v
   
7. Cosa indica il permesso "r-x---r--" su una cartella?
   - a) Tutti possono leggere la cartella
   - b) Tutti possono scrivere nella cartella
   - c) Solo l'utente proprietario può leggere la cartella
   - d) Tutti possono eseguire/attraversare la cartella
   
8. Quale comando si utilizza per terminare un processo in Linux?
   - a) kill
   - b) rm
   - c) top
   - d) ps
   
9. Cosa indica il permesso "r---x-w-" su un file?
   - a) Solo l'utente proprietario può leggere il file
   - b) Tutti possono scrivere nel file
   - c) Solo l'utente proprietario può scrivere nel file
   - d) Nessuno può leggere o scrivere nel file
   
10. Quale comando si utilizza per modificare il gruppo proprietario di un file?
    - a) chown
    - b) chgrp
    - c) chmod
    - d) chuser

**Domande Aperte (5)**
1. Spiega il concetto di path in Linux e differenzia tra path assoluto e path relativo.
2. Descrivi brevemente la struttura gerarchica del file system in Linux e fornisci esempi di alcune directory di sistema e il loro utilizzo.
3. Illustra l'utilizzo del comando `chmod` per modificare i permessi di un file. Fornisci esempi di utilizzo.
4. Cosa sono gli utenti e i gruppi in Linux? Come vengono utilizzati per gestire l'accesso ai file e alle risorse?
5. Spiega il concetto di processo in Linux. Come si identifica un processo e quali sono alcuni comandi utili per gestirli?

**Esercizi Pratici (5)**
1. Crea una nuova directory chiamata "documents" nella tua home directory.
2. Crea un file vuoto chiamato "notes.txt" all'interno della directory "documents".
3. Modifica i permessi del file "notes.txt" in modo che l'utente proprietario possa leggere e scrivere, il gruppo possa solo leggere e gli altri non possano fare nulla.
4. Visualizza il contenuto della directory "/tmp" e mostra solo i file che iniziano con la lettera "t".
5. Termina il processo con PID 1234.