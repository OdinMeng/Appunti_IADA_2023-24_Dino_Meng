---
data: 2024-03-18
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Processi e Programmi Linux
tipologia: appunti
stato: "1"
capitolo: Linux
---
- - -
*Concetto di processo su Linux. Comandi relativi ai processi.*
- - -
# 1. Definizione di Processi e programmi
**DEFINIZIONE DI PROCESSO (RICHIAMO).**
Un processo è un programma in esecuzione.
In Linux, ogni processo è identificato da un'identificatore detto *PID*.
Il *PID* si usa per *effettuare operazioni sul processo*.
# 2. Comandi Relativi ai Processi
Abbiamo i seguenti comandi per gestire i processi.
- **`kill <PID>`**: termina il processo (*se ho i privilegi opportuni!*)
- **`top`**: mostra in maniera interattiva i *processi in esecuzione*. Simile a un Task Manager via Shell
- **`ps [opzioni]`**: mostra informazioni sui processi attivi.
	- `a`: informazioni su tutti i processi (non solo generati dalla sessione shell corrente)
	- `x`: mostra anche i processi in background
	- `f`: stampa i processi in modo che se ne veda il rapporto padre-figli (ovvero l'*albero dei processi*)
	- `u`: stampa più informazioni
		**Esempio**: `ps fax` è un utilizzo molto comune di questo comando
	- **Nota:** `ps` è tra i pochi programmi in cui le opzioni non vanno iniziate con `-`. Ciò è un *relitto* delle primissime versioni di Unix in cui le opzioni non avevano il `-`.
- **`lsusb`**: lista i dispositivi usb
- **`lspci`**: lista i dispositivi su bus pci
- **`lsblk`**: lista i dischi
- **`ifconfig`**: lista le interfacce di rete (*lo stato della rete*)
- **`pwd`**: stampa la *directory corrente*
- **`free`**: mostra quanta memoria *RAM libera* ed occupata ha il sistema
- **`df [-htv]`**: visualizza *informazioni sui file system del sistema* (in particolare lo *stato di occupazione dei dischi*).
	- `-t` : nr totale di blocchi e i-node liberi
	- `-v` : percentuale di blocchi e i-node
	- `-h` : stampa in GB/MB anzinchè in numero di byte
```bash
Filesystem     1K-blocks      Used Available Use% Mounted on
udev             3923948         4   3923944   1% /dev
tmpfs             787220      1552    785668   1% /run
/dev/sda6      425085288 259786508 143682652  65% /
none                   4         0         4   0% /sys/fs/cgroup
none                5120         0      5120   0% /run/lock
none             3936080       436   3935644   1% /run/shm
none              102400        44    102356   1% /run/user
```
