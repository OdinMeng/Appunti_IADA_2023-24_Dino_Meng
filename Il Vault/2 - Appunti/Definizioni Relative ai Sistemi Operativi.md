---
data: 2024-03-16
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Definizioni Relative ai Sistemi Operativi
tipologia: appunti
stato: "1"
capitolo: Introduzione ai Sistemi Operativi
---
- - -
*Definizioni relative ai sistemi operativi: kernel, processo, thread, system call, sistemi di libreria, kernel/user mode, file system, path, bootloader, login e shell.*
- - -
# 0. Preambolo
Adesso diamo delle *definizioni* relativi ai *sistemi operativi*.
# 1. Kernel
1. **Kernel**
  - Si dice il *"cuore del SO"*
  - Include *tutti i moduli* visti in precedenza
    - Gestisce le operazioni fondamentali e a più basso livello
  - Modulo software *sempre in esecuzione*
    - Con *privilegi speciali*, ovvero *massimi*
    - Tutte le altre applicazioni (di utente o di sistema) hanno *privilegi minori* (ad esempio a loro è *proibito* interagire con i dispositivi I/O)
      - Si *appoggiano al kernel*
  - Diverse tipologie di kernel
    - *Monolitici*: il kernel è un unico programma che esegue tutto il codice necessario.
    - *Micro-Kernel*: cercano di delegare alle applicazioni più funzionalità possibile (per rendere più modulare un sistema operativo).
    - *A livelli stratificati*: il kernel (e i programmi) sono organizzati in una gerarchia di processi a privilegi crescenti (questo per creare meno distinzioni tra app e kernel). 

# 2. Processo
2. **Processo**
  - Programma in esecuzione
    - Con certi *privilegi e risorse* della CPU o RAM
  - Accede alla CPU *a turno* con gli altri programmi
    - Il SO deve permettere che il suo stato sia conservato quando viene messo in pausa
	    - Richiede salvataggio di registri di CPU
    - Ogni processo identificato da un numero detto *PID* (*Process Identifier*)
  - Un processo può creare altri processi detti *figli*
    - Si dice che i processi sono organizzati in un *Albero dei Processi*

# 3. Thread
3. **Thread** (da inglese *"filo")
  - Un processo *raggruppa le risorse* di un programma in esecuzione
  - Un *thread individual* raggruppa a sua volta *un flusso di esecuzione*
  - Un processo può avere invece al suo interno *uno o più* flussi in esecuzione (come ad esempio *Chrome* con le sue tab)
  - Identificato da un identificatore detto *TID*

# 4. System call
^b01808

4. **System call**
  - Sono delle *funzioni* messe a disposizione dal SO alle applicazioni
  - Offrono i servizi del SO per *creare processi*, *accedere ai dischi*, ecc...
    - Il kernel *"serve"* (nel senso di compiere) le richieste di System Call dei programmi
  - **ATTENZIONE!** Da non confondere con le *Funzioni di Libreria!!!*
    - Che sono *moduli software* (*pezzi di codice*) che svolgono compiti comuni a più applicazioni
    - Sono software comuni con stessi *privilegi di applicazione* (ovvero a *"user-level"*)
    - Possono (ma non sempre) chiamare delle System Call
    - Non possono *interagire direttamente* con l'*hardware*
**Sintassi delle system call.**:
  - Le system call sono funzioni C. Hanno aspetti diversi
  
**POSIX** su Linux
``` c
int read (int fd, void *buffer, size_t nbytes);
```
**Win32/Win64 API** su Windows
```c
BOOL ReadFile (
  HANDLE fileHandle,
  LPVOID dataBuffer,
  DWORD numberOfByteToRead,
  LPDWORD numberOfByteRead,
  LPOVERLAPPED overlappedDataStructure
);
```

  **Esempi di System Call comuni**.
    - Gestione dei *processi*: `fork` `exec` `wait` `kill`
    - Gestione dei *file su disco*: `open` `close` `read` `write`

# 5. I sistemi di libreria
**I SISTEMI DI LIBRERIA.**
  - **Nota**: i SO operativi offrono anche molte *funzioni di libreria*
    - Alcune funzioni di libreria non necessitano di System Call
    - Calcolare la radice quadrata: `double sqrt(double arg)`. Non necessita di una System Call
    - Scrivere su schermo: `int printf(char *format, arg list ...)`. Formatta la stringa da scrivere e poi chiama la System Call `write`
- **ATTENZIONE!** Quindi da questo discende che la funzione `printf(...);` **NON** può essere una *system call*! Questa *invoca* una system call, ma non lo è!

# 6. Kernel/User Mode
5. **Kernel/User mode** nella CPU: Ci sono principalmente *due livelli di privilegio*.
  - *Kernel Mode (alto livello)*: Il kernel ha accesso *completo* all'hardware ^33592a
    - Può accedere a ogni locazione di memoria e registro di dispositivo di I/O; può accedere a *TUTTO* per quanto concerne i dispositivi I/O
    - *Solo* codice di ottima qualità. Gli errori sono potenzialmente *distruttivi!!!*
  - *User Mode*: le applicazioni hanno possibilità limitate
    - Accedono a uno spazio di indirizzamento limitato (*memoria virtuale*); quindi *non* possono accedere a *"memorie virtuali di altro processi"*.
    - Non possono accedere direttamente ai dispositivi di I/O; quindi *niente Assembly*!
    - Necessaria cooperazione della CPU che implementa specifiche funzionalità
    - Le *funzioni di libreria* si eseguono in *User Mode*
    
![width:600px center](images/kernel-user-mode.png)
# 7. File system
7. **File System**: ci sono due *significati* di *file system*
  - Struttura che include un *insieme di file e cartelle*
  - Organizzato secondo un *albero* (ovvero un *file system* è l'*albero*)
  
![width:600px center](images/tree.png)

# 8. I path
8. **Organizzazione dei path.**
  - **Root Directory**: la *radice di tutti le cartelle*. Si *identifica* con `/` in Linux
  - **Working Directory**: directory dove un processo viene lanciato
Ci sono *due modi* per *esprimere un path*.
  - **Path Assoluto**: *inizia* con `/` e identifica un percorso a partire dalla *Root Directory*, dalla *radice*
  - **Path Relativo**: *non inizia* con `/` ma con un nome. Identifica un path relativo alla *Working Directory* del processo

---
# 9. Bootloader, login e shell
9. **Bootloader**:
  - Il codice che carica in memoria il kernel al momento dell'accensione del sistema
  - Contenuto in *ROM/EEPROM* *immunificabile*
  - Cosa succede quando *accendiamo un computer*? La *CPU* accede un *indirizzo noto della memoria*, che a sua volta contiene una *ROM* con il *bootloader*.
9. **Login**:
  - *Autenticazione* di un utente nel sistema, solitamente tramite *username e password*
9.  **Shell**: ^043a3d
  - *Programma* che legge *comandi* da tastiera, li *esegue* e ne stampa l'*output*
	  - **NOTA.** Come input viene *accettato solo la tastiera*
  - Metodo di accesso tradizionale
  - *Non fa parte del kernel*
    - Quando un sistema viene avviato, il kernel avvia sempre una shell o l'interfaccia grafica
    - Ne faremo un pesante utilizzo nel corso