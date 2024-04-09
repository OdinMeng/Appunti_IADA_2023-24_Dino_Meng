---
data: 2024-03-18
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Comandi Base Linux
tipologia: appunti
stato: "1"
capitolo: Linux
---
- - -
*Concetto di argomenti e opzioni per un comando. Formato dei comandi su Linux; concatenazione dei comandi mediante la semicolonna `;`; alcuni comandi di base: comando manuale `man` e altri comandi generalmente utili (`date`, `uptime`, `who`, `hostname`)*
- - -
# 1. Argomenti e Opzioni dei Comandi
Vengono digitati sul terminale. Avviano il corrispondente eseguibile

Alcuni ammettono *argomenti*, ovvero gli *oggetti* su cui il comando deve agire.
- Specificati dopo il nome del comando

Alcuni ammettono *opzioni* che specificano comportamenti particolari
- Iniziano per `-` seguite da una singola lettera
- Oppure per `--` seguite da una stringa

---
# 2. Formato dei comandi

**Formato**:
```bash
comando [opzioni] [argomenti]
```
**Esempio**: stampa il contenuto di `file.txt`
```bash
cat file.txt
```
**Esempio**: lista il contenuto della cartella `dir`, includendo anche i file nascosti (che iniziano per `.`):
```bash
ls -a dir
```
```bash
ls --all dir
```

---
# 3. Concatenazione dei comandi
E' possibile avere più comandi con una sola riga, separandoli con `;`.
```bash
comando1 ; comando2; ...
```

**Altri comportamenti**:
- I comandi possono essere concatenati tramite il carattere `|` (questo concetto sarà ben noto come *pipe*).
- Si può redirezionare l'output di un comando su file tramite il carattere `>` (questo concetto sarà ben noto quando vedremo i *flussi stdin, stdout e stderr*).
- Analizzato in dettaglio più avanti

---
# 4. Comando manuale

**Manuale in linea**: i comandi sono documentati
```
man <comando>
```
Restituisce la pagina di manuale del `<comando>`. Particolarmente utile per capire gli *argomenti* e le *opzioni* del comando.

Comandi simili:
- `apropos`: ricerca in tutti i manuali dei comandi
- `whereis`: trova il binario, il sorgente e il manuale di un comando

---
# 5. Altri comandi di base utili
**Altri comandi di base**:
- `date`: visualizza la *data*
- `who`: mostra gli *utenti attualmente collegati*. 
- `uptime`: tempo di vita di un sistema, numero di utenti collegati, carico del sistema negli ultimi 1, 5, 15 minuti; utile nell'ambito in cui si usano i *server*, dato che di solito vanno rimasti accesi *per sempre*. Con questo comando si vede se un *server* sia stato *riavviato o meno*, che potrebbe essere sorgente di problemi.
- `hostname`: nome della macchina
