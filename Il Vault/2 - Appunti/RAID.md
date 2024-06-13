---
data: 2024-04-17
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: RAID
tipologia: appunti
stato: "1"
capitolo: I Dati sui Sistemi Operativi
---
- - -
*Definizione di RAID, brevissimo excursus storico. Concetto essenziale di RAID: lo striping. Livelli di RAID: 0, 1, 4, 5, 6. Osservazioni conclusive su RAID.*
- - -
# Definizione di RAID
Le tecniche *RAID* (*"redundant array of independent disks"*) hanno lo scopo di affrontare i problemi di *prestazioni e affidabilità*
- Proposto nel 1988 da David A. Patterson (e altri) nel paper *A Case for Redundant Arrays of Inexpensive Disks (RAID)* (questo era infatti il nome storico)
- Famiglia di metodi per organizzare dati su *batterie di dischi*
- Molto comunemente utilizzato, sia in ambienti professionali che personali.

# Concetti Essenziali di Raid
**Definizione.** (*striping*)
Si basa su *striping*, ovvero distribuire i dati su $N$ dischi. Possiamo farlo in due modi:
- A livello di *bit*: il disco $i$-esimo contiene i bit $n~|~n~mod~N=i$ (ad esempio i bit pari vanni su disco 1, i bit dispari sull'altro disco)
- A livello di *blocco*: il disco $i$-esimo contiene i blocchi $n~|~n~mod~N=i$ (la più *comune*)
Ciò migliora le prestazioni, permettendo *letture parallele*

**Definizione.** (*codice di parità*)
Eventualmente con l'aggiunta di *codici di parità*
- Sono dei codici *"backup"* che servono per rilevare errori effettuando somme. In grado di ripristinare i dati, prendendo il complementare.
- Per essere *fault-tolerant*
- Non si perdono i dati in caso di guasti di un disco

# Livelli di RAID
Ci sono *diverse configurazioni o schemi di dischi possibili*, detti *"livelli"*. Differiscono da:
- A seconda che offrano aumenti di *prestazione o affidabilità*
- *Numero minimo di dischi richiesto*
- *Robustezza a guasti* multipli
- Alcune tecniche sono intuitive, altre meno.

**RAID 0.** (*Selezionamento*)
- **Idea:** I dati sono *divisi* tra i dischi tramite *striping* (a livello di blocco di solito)
- **Minimo numero di dischi:** $\geq 2$
- **Vantaggi:** Alta velocità sia di lettura che di scrittura grazie ad accessi paralleli. Come vedremo, questo è l'*unico vantaggio* di RAID 0.
- **Svantaggi:** Decresce affidabilità del sistema; con un guasto, ho perso tutti i dati!
- **Casi d'uso:** Traffici di rete ad alta velocità (come 10Gb/s)

![220](images/raid0.png)

**RAID 1**. (*Mirroring*)
- **Idea:** I dati sono *replicati* su più dischi. L'opposto di *RAID 0*.
- **Minimo numero di dischi:** $\geq 2$
- **Vantaggi:** Con $N$ dischi, resiste a $N-1$ guasti. Alte prestazioni di lettura.
- **Svantaggi:** *Bassa velocità di scrittura* limitata dal disco più lento. Prendi infatti il *minimo della velocità* tra i dischi.
- **Casi d'uso:** Server dove è necessaria una buona resistenza a guasti, oppure una alta velocità di lettura.

![220](images/raid1.png)

**RAID 2, 3.**
- Ignorate, dato che sono assolutamente obsolete. Per un approfondimento vedere la pagina Wikipedia ([Link](https://it.wikipedia.org/wiki/RAID#RAID_2:_sezionamento_a_livello_di_bit))

**RAID 4.** (*Disco di parità*)
- **Idea:** Il disco $N$ disco *memorizza la parità dei dati* sugli altri $N-1$ dischi
- **Minimo numero di dischi:** $\geq 3$. Due (o $n+1$) di dato più parità
- **Vantaggi:** Resiste a *un guasto* e permette *letture parallele* (quindi alte prestazioni di lettura). 
- **Svantaggi:** Scrittura lenta. Necessario calcolare e scrivere parità. Inoltre, sollecitando *sempre* l'ultimo disco per la scrittura della parità, rischio sia di avere il *"bottleneck"* (letteralmente ingorghi) e di incrementare la *probabilità del guasto*.
- **Casi d'uso:** Non si usa tanto. Si userà una sua variante più furba, la *RAID 5*.

![240](images/raid4.png)


**RAID 5.** (*Parità distribuita*)
- **Idea:** Come RAID 4, ma codici di parità distribuiti su tutti i dischi equalmente
- **Minimo numero di dischi:** $\geq 3$
- **Vantaggi:** Sostanzialmente ci sono *solo vantaggi* rispetto sa *RAID 3*: resiste a un guasto. *Scritture più veloci di RAID 4*: non è necessario accedere *sempre* a disco di parità, rimuovendo eventuali *bottleneck*.
- **Svantaggi:** Scrittura comunque lenta (a causa di parità)
- **Casi d'uso:** Molto usato in sistemi reali

![240](images/raid5.png)

**RAID 6** (*Doppia parità distribuita*)
- **Idea:** Codici di parità memorizzati due volte. Tra tutti i dischi. Ovvero, per ogni riga *dedico due dischi per la parità*.
- **Minimo numero di dischi:** $\geq 4$
- **Vantaggi:** Resiste a *due guasti*
- **Svantaggi:** Scrittura molto lenta (a causa di doppia parità)
- **Casi d'uso:** Molto usato in sistemi reali, in particolare dove *abbiamo dati sensibili*, quindi abbiamo bisogno di una garanzia maggiore.

![240](images/raid6.png)

---
# RAID: Conclusioni
**Riassunto RAID.**
Gli schemi RAID permettono di migliorare *prestazioni e affidabilità* quando si hanno molti dischi su una stessa macchina

**Limiti della RAID.**
1. Non proteggono da un *failure completo della macchina*: eventualmente alcuni livelli proteggono le *failure dei dischi*. Come ad esempio abbiamo
	- *Temporaneo*: manca la corrente
	- *Permanente*: si rompe la scheda madre
- Ciò non è accettabile per servizi *mission-critical* (esempio: le *ASL*)

2. Le tecniche RAID *non scalano*:
- C'è un *massimo numero di dischi collegabili* a una macchina
- Il *BUS PCI ha un limite* (di circa 36 Gb/s)

Per sistemi *molto grandi* (quindi ancora più grossi) si usano *File System distribuiti*
