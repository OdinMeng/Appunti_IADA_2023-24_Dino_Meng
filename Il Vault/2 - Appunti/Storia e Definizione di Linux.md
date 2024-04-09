---
data: 2024-03-18
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Storia del Linux
tipologia: appunti
stato: "1"
capitolo: Linux
---
- - -
*Notizie storiche  relative al sistema operativo Linux: UNIX, Minix e Linux. Linux oggi. Definizione di Linux.*
- - -
# 1. UNIX
Abbiamo detto che **Unix** nasce negli anni '*70* da MULTICS: da sottolineare che è stata nata negli anni '70 (o fine anni '60)! ancora oggi ci stiamo portando la *filosofia* dietro Unix, dal momento che è stato *progettato così bene*.
Nascono *numerose varianti* negli anni '80 che vengono *standardizzate* (in particolare sono standarizzati i *system calls*)
- Standard **ISO C** - 1972
- Standard **Posix** - 1988 ^1ad28a

Tutte le versioni erano a pagamento, in capo ad *AT&T*
- Il codice era *closed-source* (a *pagamento*), molto lungo e complesso
# 2. MINIX
Creato da Andrew *Stuart Tanenbaum*
- Uno degli autori di uno dei libri consigliati in questo corso

E' un *clone di UNIX*:
- *Open-Source*
- A *micro-kernel*
- Pensato per la *didattica*, in particolare per un corso universitario sui *sistemi operativi*
- Non adatto a essere un vero SO

**FIGURA: Stuart Tanenbaum**
![width:350px bg right:30%](images/tanenbaum.png)

# 3. LINUX
Nel *14.03.1991* il *giovane finlandese universitario* Linus Torvalds crea il kernel **Linux**:
- Sviluppato *a partire da Minix*
- Per esser un *vero SO* (non solo per scopi didattici): quindi anche un uso *professionale*
- Tante distribuzioni: *Ubuntu, Debian, Fedora* e infinite...
- Ormai diffuso globalmente

**FIGURA: Linus Torvalds che se la ride**
![width:350px bg right:30%](images/linus.png)

**FIGURA: Linus Torvalds che alza un dito medio nel mezzo di una conferenza, gesto per insultare la compagnia NVIDIA**
![[torvalds.webp]]

---
# 4. Definizione di Unix, Linux, GNU
- *Unix*: sistema operativo sviluppato negli anni '80 in AT&T (*closed source!*)
- *Linux*: è un kernel Unix-like sviluppato da Linus Torvald dal 1991 (*open source!*)
- *GNU*: sistema operativo open source (*kernel escluso!*) Unix-Like. Può funzionare con diversi kernel; la maggior parte funziona col *linux*. GNU è un acronimo ricorsivo, che sta per *GNU's Not Unix!* $^{(1)}$. La GNU è quella parte che fornisce le *applicazioni di default* e roba del genere.

Ora lo standard è *GNU/Linux*: sistema operativo GNU con kernel Linux

**Nota:** L'evoluzione diretta di Unix é il SO *Berkeley Software Distribution* (BSD), da cui derivano *FreeBSD* e *Mac OS X*

$^{(1)}$. *GNU is a recursive acronym for "GNU's Not Unix!", chosen because GNU's design is Unix-like, but differs from Unix by being free software and containing no Unix code. Stallman chose the name by using various plays on words, including the song The Gnu.*  

---
# 5. Diramazioni da UNIX (riassunto generale)

**FIGURA: Linea temporale di diramazioni dall'UNIX**
![width:600px center](images/linux.png)

**NOTA.** Quindi da questo schema si sa che l'*OS X* (ovvero il sistema operativo per i dispositivi Apple) *deriva* dall'*UNIX*, che ha la stessa convenzione di *Linux*; è comunque sbagliato dire che *OS X* è *Linux*! Sono due cose comunque diversissime

---
# 6. Linux Oggi
- Stabile, maturo e free (*a livello professionale*)
- Più complesso da usare di Windows
- Alla base di quasi tutte le tecnologie per:
  - Servizi web: *hosting* (e.g. di siti, ...)
  - Archiviazione dei dati: *database*, data warehouse
  - *Sistemi embedded*
  - Piattaforme per *Intelligenza Artificiale*; algoritmi addestrati su server con OS basati sul kernel Linux
  
*Questo corso si concentrerà sull'uso di Linux, dato che per noi diventerà importantissimo!!!*

---
# 7. Kernel Linux

Simile rispetto alla nostra *definizione generica di SO*

**FIGURA: Kernel Linux**
![width:600px center](images/kernel.png)


![width:220px bg right:25%](images/so-scheme.png)


---
# 8. GNU/Linux

La *GNU/Linux* include *librerie e utility* di default, come i seguenti.

![width:400px center](images/programs.png)
