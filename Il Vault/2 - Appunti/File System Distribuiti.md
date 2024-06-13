---
data: 2024-04-17
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: File System Distribuiti
tipologia: appunti
stato: "1"
capitolo: I Dati sui Sistemi Operativi
---
- - -
*Soluzione FDS: Introduzione (collegamento via rete), approcci per la FDS (NFS, NBD). Definizione di File System Distribuito, software orchestratore. Tecnologie attuali di FDS: HDFS e CEPH.*
- - -
# File System Distribuiti: Introduzione
**Problema.** (*File System Distribuiti*)
E' possibile usare un FS che *si trova su un altra macchina*
- Tipicamente un *server dedicato allo storage*
- Si utilizzano *protocolli dedicati*
	- **Network File System (NFS)**: il più *usato e flessibile*
	- **Samba**: Microsoft (anche se di dubbia reputazione)
	- **File Transfer Protocol (FTP)**: obsoleto, purtroppo in certi casi ancora utilizzata
	- **Fiber Channel**: per grandi *Storage Area Network* (in declino, oggi si preferisce usare i file server normali)

**Figura.** (*L'idea del FSD*)
![300](images/dfs.png)

# Approcci per i File System Distribuiti
Abbiamo *due approcci* per i *file system distribuiti*, che rispondono alla domanda: *"Dove poniamo il File System"*? Quindi questi approcci sono concettualmente diversi:
- *File System di Rete* (o Network File System): FS gira sul server
- *Dispositivi a Blocchi di Rete* (o Network Block Device): FS gira sul client
Vedremo che ognuna ha i suoi vantaggi e svantaggi.

**Figura.** (*L'idea del NFS e NBD*)
![](images/nfs-vs-nbd.png)

**Network File System**
- **Vantaggi:** Possono collegarsi più *client in parallelo*, possiamo svolgere *operazioni di alto livello*..
- **Svantaggi:** Carico troppo sul *file system del server*, soprattutto quando ho più *clienti in parallelo*. Problemi di scalabilità.
**Network Block Device**
- **Vantaggi:** Possiamo svolgere *operazioni di basso livello*, come ad esempio decidere quale file system usare. Necessario in certi casi, come ad esempio usare il database *MYSQL*. 
- **Svantaggi:** Può girarci *solo ed esclusivamente solo* un client.

---
# File System Distribuiti: Definizione
**Definizione.** (*File System Distribuito, software orchestratore*)
Un *File System Distribuito* è un file system che risiede *su più dischi su macchine diverse*
- E' necessario un software *orchestratore*
- Per far sì che l'utilizzatore ne fruisca come un unico FS
	- Quindi è *molto complesso*, dato che deve dare l'*illusione* di essere un *unico FS*.

Un FS distribuito:
- E' visto da utilizzatori come un unico FS *grande e affidabile*
- Vi si accede tipicamente come disco di rete (è un File System di Rete)

**Modello.** (*Client-Server*)
Basati su modello *client-server*
- Client consulta il *metadata server* per listare directory e ottenere *informazioni sui file*
- Client accede al *contenuto da uno o più data server*

**Figura.** (*L'idea*)
![500](images/dfs-dist.png)

---
# Tecnologie per FS distribuiti
I FS distribuiti si installano con *software di orchestrazione* dedicati
- Organizzano i dati nei vari dischi e nodi
- Replicano i dati per aumentare le prestazioni
- Recuperano i dati quando un utilizzatore vi accede
Adesso ne studiamo alcuni.

1. **Hadoop Distributed File System (HDFS)**
Parte della suite *Hadoop per Big Data*. E' un FS distribuito
- Si installa su un *cluster* (insieme) di server/nodi
- I *Name Node* hanno l'indice dei *file*
- I *Data Node* memorizzano il contenuto dei *file*
- Tutto viene replicato $N$ volte
**Vantaggi:** Funziona benissimo, infatti viene utilizzato quasi da tutti (banche, eccetera...)
**Svantaggi:** Problemi di scalabilità: infatti in realtà HDFS è in declino e sta vivendo di *"rendita aziendale"*, ovvero viene usata solo perché le aziende non possono o non vogliono cambiare la tecnologia per FSD.

**Figura.** (*Schema HDFS)
![500](images/hdfs.png)

2. **CEPH**
*Concettualmente simile a HDFS*. Si usa su cluster di nodi. Implementa nuovi concetti più moderni, tra cui:
- **FS distribuito:** i client accedono a *file e cartelle*
- **Dispositivo a blocchi:** i client vedono *disco grezzo a blocchi*
- **Object storage:** i client accedono a *bucket generici* identificati da ID
- **Vantaggi:** Molto flessibile, infatti permette di avere sia *Newtork FS* che *Network BD*. Inoltre, abbiamo già implementato un *database molto efficiente*. La tecnologia *CEPH* è "in rising".

**Figura.** (*CEPH*)
![470](images/ceph.png)
