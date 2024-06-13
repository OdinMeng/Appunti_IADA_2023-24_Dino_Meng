---
data: 2024-04-16
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Libreria Standard e System Call
tipologia: appunti
stato: "1"
capitolo: I Dati sui Sistemi Operativi
---
- - -
*Un primo confronto tra la Libreria Standard C e le System Call per l'interazione coi file. Aspetti diversi, aspetti comuni, passaggi per l'invocazione di una SysCall. Manuale di Linux (specifica pagine), strumenti per debuggare codici con SysCall.*
- - -
# 1. Aspetti Diversi
1. Le funzioni di libreria utilizzando le System Call
![450](images/printf-write.png)

2. Le **Funzioni di Libreria** sono eseguite in *modalità utente*. Non hanno nessun privilegio particolare.
	- Sono semplicemente delle *funzioni che facilitano l'uso delle System Call*

3. Le **System Call** sono eseguite in *modalità kernel*.
	- Hanno accesso alla *memoria fisica*
	- Possono accedere alle interfacce dei dispositivi di I/O
	- Vengono fornite dal *Sistema Operativo*

---
# 2. Aspetti Comuni
Le **Applicazioni** possono invocare *sia funzioni di libreria che System Call*.
Se vogliono usufruire dei servizi del SO è *sempre necessario usare le system call*
	- Lo fanno *le applicazioni direttamente*
	- Oppure lo fanno *le funzioni di libreria* invocate dalle applicazioni

![320](images/so-scheme.png)


# 3. Passaggi per l'invocazione di una System Call
Ci sono *due metodi* per invocare una system call. 

1. Tramite `int 0x80` (*metodo classico*)
- *Nota.* La funzione `int 0x80` non è altro che una *interrupt* ([[Comunicazione Architettura e I'Esterno#^84b9a9|1]]), dal momento che viene chiamata la *CPU* viene interrotta ed esegue un pezzo di codice predefinito. Da osservare che c'è un pezzo di assembly nel codice!

![450](images/system-call-steps-2.png)

2. Tramite `syscall` (*metodo moderno*)
![450](images/system-call-steps.png)

**Osservazione.** Qui abbiamo sempre una *situazione delicata*! Se non siamo abbastanza attenti, questo potrebbe generare delle *vulnerabilità di sicurezza*, dal momento che stiamo passando da *user-mode* a *kernel-mode* in una maniera *quasi-arbitraria*.

---
# 4. Manuale di Linux
**Manuale:**
Il manuale di Linux è diviso in sezioni:
1. User Commands
2. System Calls
3. C Library Functions
4. Devices and Special Files
5. Eccetera...

La `fopen` è in sezione $3$, la `open` in sezione $2$.
Invece `printf` è sia un *comando bash* che una *funzione di libreria*
- Ha *due pagine di manuale*
	- `man 1 printf`: comando Bash
	- `man 3 printf`: funzione di libreria C

---
# 5. Strumenti per Debuggare Codici con System Call
*Esistono degli strumenti di debug* per vedere *quali System Call vengono invocate* da un processo.
- Si può fare tramite *profile* (e.g., `valgrind`: utile per vedere le prestazioni), *debbugger* (e.g., `gdb`, utile per vedere tutto passo a passo) o tool nativi (e.g., `strace`, per stampare una lista di System Call invocati)
- Ci focalizziamo in particolare su `strace` e su `gdb`.

1. **`strace`**
*Non richiede di ricompilare i programmi*. Funziona sempre, anche se non ho il sorgente del programma. E' un tool del SO.
**Funzionamento**: `strace comando`

**Esempio:** Di default `strace` lista le system call 
```bash
$ strace pwd
execve("/usr/bin/pwd", ["pwd"], 0x7ffd37cdfc80 /* 72 vars */)       = 0
...
getcwd("/tmp", 4096)                                                = 5
fstat(1, {st_mode=S_IFCHR|0620, st_rdev=makedev(0x88, 0x5), ...})   = 0
write(1, "/tmp\n", 5/tmp)                                           = 5
```

Si può semplicemente contare le invocazioni a System Call
```bash
$ strace -c date
mar 25 ott 2022, 10:16:48, CEST
% time     seconds  usecs/call     calls    errors syscall
------ ----------- ----------- --------- --------- ----------------
  0,00    0,000000           0         6           read
  0,00    0,000000           0         1           write
  0,00    0,000000           0         9           close
  ...     ...
```

2. **`ltrace`**
Simile a `strace`. Permette di visualizzare le *funzioni di libreria* usate da un processo
**Funzionamento**: `ltrace comando`

**Nota:** *non funziona su tutti gli eseguibili.*
Solo quelli compilati con *laxy binding* (opzione del linker), di default fino a Ubuntu 16.
Per essere sicuri, compilare con l'opzione: `-z lazy`
Esempio: `gcc sample.c -o myprog -z lazy`

**Esempio:** Di default `ltrace` lista le invocazioni a funzione
```bash
$ ltrace pwd
...
getcwd(0, 0)                                                    = ""
puts("/home/det_user/trevisan"/home/det_user/trevisan
)                                                               = 24
...
```

Per contare le funzioni invocate:
```bash
$ ltrace -c date
Tue Oct 25 10:35:00 CEST 2022
% time     seconds  usecs/call     calls      function
------ ----------- ----------- --------- --------------------
 15.59    0.000543          67         8 fwrite
 13.90    0.000484          60         8 fputc
  8.76    0.000305         305         1 setlocale
  ...
```
