---
data: 2024-05-21
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Comandi Bash sui Processi
tipologia: appunti
stato: "1"
capitolo: Processi
---
- - -
*Comandi Bash sui processi: ottenere PID, sintassi per processi, VFS per i processi.*
- - -
# Ottenere PID
Vediamo altre due system call (funzioni) per ottenere *PID* di processi.

```c
#include <unistd.h>

pid_t getpid(void);
pid_t getppid(void);
```
- La `getpid()` ritorna il PID del processo chiamante
- La `getppid()` ritorna il PID del *padre* del processo chiamante

# Comandi Bash per Processi
Vediamo alcuni *comandi Bash* per i processi. Iniziamo riassumendo quelli già noti

- `ps`: lista i processi del sistema
  - Di default mostra solo processi figli del terminale corrente.
    - Con l'opzione `a` mostra tutto
    - Uso comune: `ps fax`
  - Di default, mostra solo processi che sono in foreground (hanno una shell)
	- Con opzione `x` mostra anche quelli in background
	- Opzioni utili: `u` mostra utente proprietario. `f` rende graficamente gerarchia padre-figlio
- `top`: mostra i processi in maniera interattiva
- `htop`: come `top` ma grafica migliorata
	- `top`, `htop` sono l'equivalente del *Task Manager* per il *Linux* sul terminale.
- `which`: fornisce il path assoluto di un programma di sistema. *Molto utile!*
  ```bash
  $ which ls
  /usr/bin/ls
  ```
	- I comandi di sistema vengono cercati nelle cartelle indicate nella variabile d'ambiente `$PATH`
		- Solitamente: `/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin`
- `pgrep`: stampa il PID di tutti i processi di un programma. Letteralmente è `ps + grep`.
  ```bash
  $ pgrep chrome
  480492
  480498
  480505
  ```

## Sintassi per Processi in Bash
**Note tecniche.** (*importanti!*)
Esecuzione di processi figli da *script bash*:
- Un comando che termina con `&` viene *eseguito in background* (si dice *"detatched"*)
	- Viene eseguita una `fork` e una `exec` per eseguire il comando
	- Non esegue la `wait`. Lo script e il programma eseguono *in parallelo*
- Il PID del processo appena creato può essere ottenuto con `$!`
	- Sovrascritto a ogni processo creato! Usare *attentamente*
- Si può usare il comando `wait [PID]` per aspettare
	- Attende il figlio `PID` se specificato, altrimenti un figlio qualsiasi

**Esempio:** Quanto ci mette a eseguire questo codice? (*classica domanda quiz per l'esame!*)
```bash
sleep 4 &   # Sleep viene eseguito in background
PID=$!      # Lo script recupera il PID
sleep 2     
wait $PID   # Lo script attende che sleep termini
```

**Soluzione.** Ci mette $4$ secondi, non $6$! I programmi eseguono in parallelo

## Informazioni sui Processi
**Il `/proc` file system.**
I sistemi Linux/POSIX espongono informazioni sui processi correnti tramite uno *Pseudo File Virtuale* detto `procfs`
- File System Virtuale
- Montato in `/proc` in automatico dal *kernel*
- Permette a chiunque di conoscere lo stato dei processi in esecuzione
- *Tramite normali letture da file*
- Buona alternative a System Call complicate
- Non *corrisponde* fisicamente sul disco, è un modo per *mappare* le info sul *file system*.

**Sottocartelle del `/proc` file system.**
1.  Le informazioni su un processo $PID$ si trovano nella *directory* `/proc/PID`
- Il *file* `/proc/PID/status` contiene varie informazioni:
```bash
$ cat /proc/1566/status
Name:   grep
State:  R (running)
Tgid:   5452
Pid:    5452
PPid:   743
...
VmPeak:     5004 kB
VmSize:     5004 kB
VmLck:         0 kB
VmHWM:       476 kB
VmRSS:       476 kB
```

2. La **subdirectory** `/proc/PID/fd` contiene un link per ogni file aperto dal processo
- Il nome di questi link è il *numero del descrittore* usato nel processo
- Ricordare: ogni file aperto *identificato da un numero*

**Esempio:**
```bash
/proc/1968/fd/1
```
Rappresenta lo `stdout` del processo $1968$.
- Ricorda: $0$ è `stdin`, $1$ è `stdout`, $3$ è `stderr`


Altri *file/subdirectory* del processo $PID$ sotto `/proc/PID`
![900](images/procfs.png)

3. Il file system `/proc` fornisce anche molte informazioni sul sistema e possibilità di configurazione
- `/proc/cpuinfo`: informazioni su CPU
- `/proc/meminfo`: informazioni su memoria

![width:700px center](images/proc-dir.png)


4.  `sysfs`: montato in `/sys`, contiene informazioni sullo *stato del kernel* e sulle periferiche
-  Complementare a `/proc`
5. `/dev`: contiene i file speciali che rappresentano le *periferiche*
  - Dispositivi a blocchi:
    - Dischi: `/dev/sda1`, `/dev/hda2`
    - CDRom: `/dev/cdrom`; Floppy: `/dev/fd0`
  - Dispositivi a carattere: tastiera, mouse
  - Quando si legge/scrive a questi file speciali, viene invocato il *driver* della periferica corrispondente
  - Volendo (non consigliato!) si potrebbe fare delle operazioni su questi file virtuali.
