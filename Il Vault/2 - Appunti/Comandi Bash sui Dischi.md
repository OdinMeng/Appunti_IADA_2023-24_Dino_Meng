---
data: 2024-04-13
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Comandi Bash sui Dischi
tipologia: appunti
stato: "1"
capitolo: I Dati sui Sistemi Operativi
---
- - -
*Comandi bash sui dischi.*
- - -
# 1. Comandi Bash per i dischi
**Utility GNU.**
I *SO Linux/Posix* hanno dei programmi *pre-installati* per gestire i file ([[Storia e Definizione di Linux#^e540a7|1]])
- Sono delle *utility*, parte della *GNU*, che permettono di svolgere compiti semplici e ripetitivi da  riga di comando
- Senza dover scrivere un programma apposito che chiami le *System Call* o *Funzioni di Libreria necessarie*.
- Documentati nella sezione 1 di `man` (*User Commands*) e nella sezione 8 (*System Administration tools and Daemons*)

Elenchiamo alcuni comandi importanti.
- `df`: visualizza dischi e loro occupazione (*"disk free"*)
- `mount`: permette di:
	- vedere quali dischi sono in uso
	- *montare* un disco, ovvero agganciarlo all'albero di file della macchina
	- usa la System Call `mount`
- `fdisk`: visualizza dischi e partizioni e crea partizioni
- `lsblk`: visualizza in maniera semplice le partizioni e i dischi (*"list block devices"*)
- `mkfs`: formatta e inizializza un File System su un disco (*"make file system*"*)
- `lspci` e `lsusb`: lista dispositivi PCI e USB, tra cui dischi (*"list PCI/USB"*)