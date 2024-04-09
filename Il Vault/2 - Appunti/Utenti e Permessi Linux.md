---
data: 2024-03-18
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Utenti e Permessi Linux
tipologia: appunti
stato: "1"
capitolo: Linux
---
- - -
*UNIX sistema multiutente. Concetto di utenti, gruppi e permessi; comandi relativi agli utenti e permessi; permessi di un file.*
- - -
# 1. UNIX è un sistema multiutente
Un dispositivo con OS Linux può avere più *utenti* (infatti si dice che è un *sistema multiutente*).
- Essi possono fare login su una *shell* o un *terminale remoto* (SSH; [[Shell Linux#^4e2dd7]])
- Ogni utente ha la sua *Home Directory* in `/home/<utente>`
  Serve per permettere all'utente di immagazzinare file personali come documenti, immagini, programmi.

---
# 2. Utenti e permessi
Un utente può essere assegnato a uno o più *gruppi*.
- Ogni utente deve essere associato ad *uno ed uno solo gruppo primario**
- Eventualmente un utente può essere assegnato a più *gruppi secondari*
Meccanismo utente-gruppi serve per gestire l'accesso a file e risorse.

L'utente *root* esiste sempre ed ha massimi privilegi

**ATTENZIONE!** Non bisogna *assolutamente* confondere l'*utente root* con il *kernel-mode*! ([[Definizioni Relative ai Sistemi Operativi#^33592a]]) In ogni caso si avviano le applicazioni *SEMPRE* in *user-mode*!

---
# 3. Comandi relativi agli Utenti e ai Permessi
**Gestione**: Comandi per creare o rimuovere utenti e gruppi: `useradd`, `groupadd`, `userdel`, `groupdel` (*di solito sono complicati da usare*)
- Su molti OS Linux, esistono dei *comandi più facili da usare*: `adduser`, `addgroup`, `deluser`, `delgroup`

**Altri comandi**:
- `groups`: stampa i gruppi ai quali appartiene l'utente corrente
- `whoami`: stampa l'*utente corrente* (per dubbi esistenziali?)
- `su <utente>`: *cambia utente* (chiede password)
- `sudo <comando>`: esegue il comando *come utente* `root`, dopo aver chiesto la password
	- Nota: `sudo` sta per *"super user does"*
	- Nota 2: Se si tenta di usare questo comando con un utente che non *ha il privilegio di usare sudo*, si vede questo spaventoso messaggio: `<user> is not in the sudoers file.  This incident will be reported.`; ovvero si dice che l'*incidente* verrà *"segnalato"*. Nel passato (fino ad un anno fa) veniva effettivamente *segnalato* tramite una *mail* all'*amministratore effettivo*. Adesso questo tentativo viene semplicemente registrato sul file `/var/log/auth.log`, se non specificato (per ulteriori dettagli vedere il commit https://github.com/sudo-project/sudo/commit/6aa320c96a37613663e8de4c275bd6c490466b01)

**FIGURA: Babbo natale che controlla la lista dei non-sudoers cattivi**
![[incident.png]]

---
# 4. Tipologie di Permessi
I file e le cartelle hanno tre tipi di *permessi*:
- 1) Permesso di **Lettura**: Per i file, *accedere a contenuto*. Per cartelle, *listare i file*.
- 2) Permesso di **Scrittura**: Per i file, *modificare il contenuto*. Per le cartelle, *creare file o cartelle in essa* (alterare la lista).
- 3) Permesso di **Esecuzione/Attraversamento**:
  - Per i **file**, esiste il permesso di **esecuzione**. Necessario per *eseguire programmi*.
  - Per le **cartelle**, esiste il permesso di **attraversamento**. Necessario per *accedere a sotto cartelle*.

**NOTA BENE.** Con i *permessi* non c'è *nessuna eredità*; ad esempio nel caso in cui un utente ha il permesso di *scrivere* su un file, questo non vuol dire che questo utente ha necessariamente anche il permesso di *leggere* su questo file; se l'utente ha il *solo permesso di scrivere sul file*, allora questa è l'unica cosa che può fare (anche se potrebbe risultare strana come cosa).

---
# 5. Utente e Gruppo proprietario
**DEFINIZIONE DI UTENTE/GRUPPO PROPRIETARIO.**
I file e le cartelle hanno *uno ed uno solo utente proprietario* e un *gruppo proprietario*.
I permessi su file sono gestibili separatamente per:
- Utente proprietario del file
- Utenti del gruppo proprietario del file
- Tutti gli altri utenti

# 6. Permessi di un file
**PERMESSI DI UN FILE.**
Per riassumere, ad ogni file abbiamo *nove permessi*, separati per tipologia del permesso e per tipologia dell'utente: in totale ogni file o cartella ha $3 \times 3$ permessi, in formato `rwxrwxrwx`, i *primi tre dedicati* per l'*utente proprietario*, i *secondi tre* per il *gruppo proprietario* e gli *ultimi tre* per *tutti* gli altri (quindi in ordine "$U_\text{r} U_\text{w} U_\text{x} G_\text{r} G_\text{w} G_\text{x} O_\text{r} O_\text{w} O_\text{x}$").
- Ogni permesso può essere attivo o no (quindi 1 o 0)
![width:300px center](images/permissions.png)

**Esempio:**
```
$ ls -l
-rw-rw-r-- 1 martino docenti  102 set 30 14:16 compile.txt
-rw-rw-r-- 1 martino docenti  199 set 30 15:27 style.css
```

**Esempio generale sui file**:
si considerino le seguenti informazioni sul file `my-program`:
```
-rwxr-xr-- 1 martino docenti  102 set 30 14:16 my-program
```
- L'utente `luca` del gruppo `docenti` può eseguire `my-program`?
  **SI**: il gruppo ha permessi `r-x`, quindi `luca` può eseguire `my-program`
- L'utente `marco` del gruppo `studenti` può eseguire `my-program`?
  **NO**: gli altri hanno permessi `r--`, quindi `marco` non può eseguire `my-program`

**Esempio generale sulle cartelle**:
si considerino le seguenti informazioni sulla cartella `data`:
```
dr-xr--r-- 3 martino docenti 4096 ott  1 18:33 data/
```
- L'utente `luca` del gruppo `docenti` può listare i file?
  **SI**: il gruppo ha permessi `r--`
- L'utente `luca` del gruppo `docenti` può accedere alla cartelle dentro `data`?
  **NO**: il gruppo ha permessi `r--`. Servirebbe `r-x`
- L'utente `martino` del gruppo `docenti` può creare file in `data`?
  **NO**: l'utente `martino` ha permessi `r-x`. Servirebbe `rwx`

---
# 7. Comando per modificare i permessi di un file
**1. Modifica dei permessi di un file**: si usa il comando `chmod [-r] <permessi> <file>`
I permessi possono essere indicati con (principalmente) *due sintassi*: *assoluto* e *mirato*.
- **Assoluto**, con *tre cifre ottali*, che rappresentano rispettivamente i *permessi a utente, gruppo e altri*. Ogni cifra ha *3 bit* e rappresenta *permessi di lettura, scrittura ed esecuzione/attraversamento*.
  Esempio: `chmod 750 file.txt` dà permessi totali a utente ($7_8=111_2$), lettura/esecuzione al gruppo ($5_8=101_2$) e niente agli altri ($0_8=000_2$)
- **Mirato**: Modifica permessi esistenti tramite una stringa composta di 3 parti:
	- Quali utenti: `u` (user), `g` (gruppo), `o` (other) (*chi?*)
	- Che operazione: `+` (aggiungi), `-` (rimuovi) (*cosa?*)
	- Quale permesso: `r` (lettura), `w` (scrittura), `x` (esecuzione/attraversamento) (*quale?*)
    Esempio: `chmod g+w file.txt` dà permessi in scrittura agli utenti del gruppo proprietario del file
    
- `-r` applica il comando ricorsivamente a file e cartelle contenute
- **Chi può modificare i permessi:** *Utente proprietario* e utente `root`

**Esempio**: usi di `chmod`
- `chmod 600 file.txt`: l'utente può leggere e scrivere. Il gruppo e gli altri niente.
- `chmod 640 file.txt`: l'utente può leggere e scrivere. Il gruppo può leggere. Gli altri niente
- `chmod u+x file.txt`: Aggiungi i permessi di esecuzione all'utente
- `chmod go+w file.txt`: Aggiungi i permessi di scrittura al gruppo e a gli altri

**2. Modifica di proprietario e gruppo** di file o cartella
- `chown utente file`: modifica utente proprietario (*"change owner"*)
- `chgrp gruppo file`: (*"change group"*)
- `chown utente:gruppo file`: modifica contemporaneamente entrambi
- **Note**:
  - Posso assegnare un file *solo a un gruppo che posseggo*
  - Sulla maggior parte degli OS, solo `root` può cambiare utente proprietario; non esiste il *"give-away"* dei file.
  - Opzione `-r`: applica il comando *ricorsivamente* a cartelle e file contenuti