---
data: 2024-06-03
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Docker
tipologia: appunti
stato: "1"
capitolo: Argomenti Misti (Sistemi Operativi)
---
- - -
*Docker: definizione, comandi ed esempio.*
- - -
# Docker
## Docker: Definizione
Si può installare *su ogni macchina Linux*
- Disponibile anche su MacOS e Windows (ma implementato tramite una VM)

Permette di avviare container a partire da una *Immagine*:
- E' un File System che *contiene il programma da eseguire*
- Ed *eventuali dipendenze*: librerie condivise, altri programmi, file di configurazione

La componente interna di Docker che permette di eseguire i container si chiama `containerd`

## Docker: container e immagine e hub
Un *Container è una Immagine* in esecuzione:
- Un insieme di processi che può operare solo sui file presenti nell'immagine
- I file dell'immagine vengono copiati
- I processi possono creare nuovi file o modificare quelli esistenti
- Non può accedere ai file della macchina fisica
- I figli condividono la stessa *"gabbia"*

Esiste una libreria di immagini pre-costruite su **Docker Hub** (https://hub.docker.com/)
- Ognuna contiene un software installato con le sue dipendenze
- Può essere scaricata ed eseguita, creando un container
- Ogni immagine ha una versione identificata da un *tag*
	- *latest* indentifica l'ultima versione

E' anche possible *creare la propria immagine* col proprio software

## Comandi di Docker
- `docker pull <immagine>`: scarica un `immagine` da Docker Hub
- `docker ps`: mostra i container in esecuzione
- `docker run --name <nome> <immagine>`: esegue un container da `immagine` e gli assegna il `<nome>`
	- Argomento `-v pathLocale:pathContainer`: permette al container di accedere `pathLocale` che viene montato in `pathContainer`
	- Argomenti `--cpus <n>`, `--memory=<n><s>`: limita le risorse dell'immagine
	- Argomento `-d`: processo in background (diventa un *demone*)
	- Argomento `-e VAR=VAL`: specifica delle variabili d'ambiente (come password, eccetera...)
- `docker stop <nome>`: termina il container identificato da `nome`
- `docker logs <nome>`: vedere l'output dell'immagine in esecuzione
- `docker inspect <nome>`: per vedere informazioni sull'immagine
Molti altri comandi...

Necessari permessi di *superuser*, da fornire con `sudo`

## Docker e file montati
Di default, un container *non* può accedere ai file della macchina fisica, ma solo a una copia di quelli dell'immagine

L'opzione `-v pathLocale:pathContainer` permette al container di accedere a `pathLocale`, che viene *montato* in `pathContainer` all'interno del FS del container

**Esempio:**
```bash
docker run --name nome \
	-v /home/martino:/opt/home-di-martino \
	immagine
```
Il container `nome` può accedere al path fisico `/home/martino` tramite il path `/opt/home-di-martino`

## Docker e Rete
Ogni container ha un *indirizzo IP* in una *rete virtuale* che collega tutti i container
- Possibile comunicazione tra *container*
- Possibile comunicazione tra *macchina fisica e container* (esempio: Server Web)
- Possibile comunicazione tra *container e Internet* tramite Default Gateway virtuale

## Docker e Risorse
**Limitazione di CPU:** `docker run --cpus 2 <immagine>`
**Limitazione di memoria:** `docker run --memory=512m <immagine>`

## Docker: Esempio
Creazione di container per eseguire il DBMS *PostgreSQL*
- Un DBMS relazionale
- Un processo del database deve essere in esecuzione
- Vi si accede tramite rete e un protocollo dedicato

**Scaricamento dell'immagine:**
`docker pull postgres`

**Avviamento del container:**
```bash
docker run -d \
	--name some-postgres \
	-e POSTGRES_PASSWORD=mysecretpassword \
	-e PGDATA=/var/lib/postgresql/data/pgdata \
	-v /home/martino/db:/var/lib/postgresql/data \
	postgres                                                                
```

Opzioni usate:
- `-d`: fai partire il processo in background
- `-e VAR=VAL`: specifica variabili d'ambiente visibili nel container
  - Usato per password del DB e per specificare dove esso salva i dati
- `-v /home/martino/db:/var/lib/postgresql/data`: i dati sono salvati sulla macchina fisica in `/home/martino/db` ma nel container al path `/var/lib/postgresql/data`

**Privilegi del container:**
Il container `some-postgres` esegue l'immagine `postgres`.
Ha accesso alle risorse fisiche di:
- CPU e memoria senza limiti
- File System: solo `/home/martino/db`
- Rete: ha un indirizzo IP. Il server si mette in ascolto sulla porta di default $5432$

**Monitoraggio:**
Se tutto è andato a buon fine, il container è in esecuzione. Si osserva con:
```bash
$ docker ps
CONTAINER ID  IMAGE    COMMAND                CREATED        STATUS        PORTS    NAMES
c6320fa9eb9b  postgres "docker-entrypoint.s…" 50 seconds ago Up 49 seconds 5432/tcp some-postgres
```

Si può ottenere il suo IP con
```bash
$ docker inspect some-postgres
...
"IPAddress": "172.17.0.2",
...
```

**Sulla macchina fisica:**
I processi di `postgres` sono normali processi in esecuzione, ma con privilegi **molto limitati**
```bash
$ ps fax
 443964 ?        Sl     0:05 /usr/bin/containerd-shim-runc-v2 -namespace moby ....     
 443985 ?        Ss     0:01  \_ postgres
 444080 ?        Ss     0:00      \_ postgres: checkpointer 
 444081 ?        Ss     0:00      \_ postgres: background writer 
 444083 ?        Ss     0:00      \_ postgres: walwriter
 444085 ?        Ss     0:00      \_ postgres: logical replication launcher
...
```

I file dove il DB salva i suoi dati sono in 
```bash
$ sudo tree /home/martino/db/ -L 2                                                    
/home/martino/db/
└── pgdata
    ├── base
    ├── global
    ├── pg_commit_ts
...
```

**Utilizzo:**
Il DB si può usare installando il client `psql`, col comando:
```bash
$ PGPASSWORD=mysecretpassword psql -U postgres -h 172.17.0.2 
psql (12.12 (Ubuntu 12.12-0ubuntu0.20.04.1), server 15.1 (Debian 15.1-1.pgdg110+1))
WARNING: psql major version 12, server major version 15.
         Some psql features might not work.
Type "help" for help.

postgres=# 
```

Il DB salva i dati nella cartella fisica: `/home/martino/db`
Con 3 semplici comandi si è installato PostgreSQL!
