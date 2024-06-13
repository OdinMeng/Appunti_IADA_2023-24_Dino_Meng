---
data: 2024-04-13
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Disco dell'Elaboratore
tipologia: appunti
stato: "1"
capitolo: I Dati sui Sistemi Operativi
---
- - -
*Richiamo alle architetture degli elaboratori: definizione di disco come dispositivo I/O: memoria persistente, tipologie di dischi, interfaccia e algoritmo di accesso dell'elaboratore al disco. Organizzazione dei dati sui dischi a livello hardware.*
- - -
# 1. Definizione di Disco negli Elaboratori
**Definizione** (*disco*)
Dal modulo sulle *architetture degli elaboratori* ([[Architettura di Von-Neumann#^c81c7e|1]]), ricordiamoci che il *disco* é un *componente fondamentale dei sistemi di elaborazione*
- Permette di avere una memoria persistente
	-  Sopravvive al riavvio dell'elaboratore
- E' una memoria riscrivibile
	- Diversamente da ROM, PROM e EPROM

## 1.1. Tipologie di Disco
**Tipologie di Disco**
Ci ricordiamo che ci sono diverse tecnologie per costruire i dischi
- *Nastri magnetici:* obsoleti/storici
- *Dischi magnetici:* (o note come *"HDD"*) i piú usati
- *Stato solido (memorie flash)*: (o note come *"SSD/formalmente EPROM"*) in ascesa ancora oggi

Ogni tipologia si differisce per *prestazioni, costi, affidabilità, meccanismo di accesso*.
- Nei dischi magnetici la testina si sposta (*HDD*)
	- Accesso al disco non ha un tempo costante
	- Letture sequenziali preferite
	- Costo minore
- Memorie flash: tempo di accesso quasi costante (*HDD*)
	- Scrittura piú lenta di lettura
	- Costo maggiore

## 1.2. Accesso al Disco
**Definizione** (*interfaccia*)
Il disco é un dispositivo *di I/O*, quindi la CPU lo utilizza attraverso un'*interfaccia*

**FIGURA** (*Schema di architettura*)
![width:600px   center](images/interfaces.png)

**Modo approssimato dell'accesso al disco**
In prima approssimazione (ad alto livello), la CPU accede al disco nel seguente modo:
1. La CPU scrive *nell'interfaccia del disco* la *locazione di memoria* che vuole leggere o scrivere
    - Assieme a *informazioni di controllo* (e.g., se Read o Write)
    - L'accesso all'interfaccia avviene come a una qualunque locazione di memoria
2. Il disco *esegue* l'operazione
3. Il disco *setta dei flag* nell'interfaccia che segnalano che l'*operazione é conclusa*
4. La CPU, leggendo i flag, realizza che l'*operazione é terminata*
    - Eventualmente legge i dati dall'interfaccia (in caso di Read)
    - Nota come la tecnica del *"polling"* ([[Comunicazione Architettura e I'Esterno#^53a200|1]])

## 1.3. Ottimizzazione dell'Accesso ai Dischi
Esistono altre tecniche per rendere *più efficiente* l'accesso al disco. Le accenniamo, e sono le seguenti.
- *DMA*: Direct Memory Access
	- La CPU istruisce il disco sul compito da effettuare
	- Il DMA controller legge/scrive autonomamente i dati in memoria
- *Caching*: Il sistema operativo tiene in RAM *le porzioni di disco più lette* (quindi abbiamo delle zone già preventivamente copiate)

---

## 1.4. Organizzazione dei Dati nei Dischi
**Dischi Magnetici** (*HDD*)
In disco magnetico, i dati sono organizzati in *tracce concentriche e settori*. Abbiamo dei *dischi in parallelo*, con *due facciate* ognuna.

**FIGURA** (*Schema di un disco magnetico*)
![width:370px center](images/track-sector.png)

**Dischi a stato solido** (*SSD*)
I dischi a stato solido invece sono *simili alle celle di memorie RAM*.
- Matrice di celle
