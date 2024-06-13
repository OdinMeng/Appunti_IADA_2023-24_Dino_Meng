---
data: 2024-06-03
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Internet
tipologia: appunti
stato: "1"
capitolo: Argomenti Misti (Sistemi Operativi)
---
- - -
*Generalità sulle reti: internet, stack di protocolli e DNS.*
- - -
# Lo stack di rete TCP/IP in Linux
## Definizione di Internet
*Internet* è un l'*insieme di nodi e apparati di rete* che permettono una *comunicazione mondiale*
- Internet è l'unione di tante *Network*
- Collegate tramite *Router* (serve per *distinguere traffici di rete*)
- Ogni nodo è identificato da un *Indirizzo IP*

![260](images/internet.png)

## Indirizzi IP
Un indirizzo IP identifica univocamente un nodo in Internet
- Numero su 32 bit. Sono *pochi!* Con dei calcoli si trova che $2^{32} \ll 7 \cdot 10^9$
- Composto da una *parte di network e una di host*
	- La *netmask* delimita le *due parti*
	- Necessario per la trasmissione di pacchetti tramite Ethernet
		- L'indirizzo IP $127.0.0.1$ identifica per convenzione il *Local Host*
	- Ovvero serve per mandare un pacchetto a se stesso

![width:500px center](images/ips.png)

## Protocolli Rete
I protocolli formano una *Pila*:
- Il livello $N$ usa i servizi del livello $N-1$
- Li migliora e li offre al livello $N+1$
- Il livello $N$ parla col suo omologo su un altro nodo

In particolare i livelli sono i seguenti:
- *L1* - Dati binari (funzionalità semplice)
- *L2* - Messaggi (ethernet, wifi, ...)
- *L3* - Identificatori (IP)
- *L4* - Identificativi dei processi, porte
- ...
- *L7* - Applicazioni (Esempio: Server Web)

![450](images/levels.png)

I protocolli vengono *inscatolati* uno dentro l'altro:
- Un frame **Ethernet** trasporta un pacchetto **IP**
- Un pacchetto **IP** trasporta un segmento **TCP**
- Un segmento **TCP** contiene i dati dell'**applicazione**

![450](images/payload.png)

Le applicazioni in Linux possono usare i servizi di:
- *TCP* per avviare una comunicazione orientata al flusso (`SOCK_DGRAM`)
- *UDP* per mandare datagrammi (`SOCK_STREAM`)
- *Pacchetti IP generici* (`SOCK_RAW`)
Non li implementeremo, impareremo ad usare uno dei servizi

Il *kernel* implementa i moduli TCP, UDP, IP
Offre delle *System Call* per poterne utilizzare i servizi

![450](images/sock-type.png)

## Domain Name System (DNS)
Il *Domain Name System (DNS)* è un sistema di directory distribuito e gerarchico
- Serve per identificare nodi di Internet tramite un *nome di dominio* anziché un indirizzo IP
- Permette la *conversione tra indirizzi IP e nomi di dominio*
	- Una specie di *"elenco telefonico dell'internet"*

Linux offre funzioni per usare il DNS in maniera semplice

![450](images/dns.png)
