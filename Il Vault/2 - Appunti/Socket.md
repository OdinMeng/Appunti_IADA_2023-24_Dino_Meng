---
data: 2024-06-03
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Socket
tipologia: appunti
stato: "1"
capitolo: Argomenti Misti (Sistemi Operativi)
---
- - -
*Definizione di Socket, implementazione dei Socket con le System Call.*
- - -
# I Socket
## Definizione di Socket
I *Socket* uno strumento di *Inter-Process Communication* per scambiare dati tra diversi *nodi di rete*

Utilizzo simile alle *pipe* e alle *FIFO*
- Identificati da un *file descriptor*
- Vi si accede con le System Call `read` e `write`

A differenza di  *pipe* e alle *FIFO*
- Connettono *nodi diversi*
- Vengono *creati in maniera diversa* con System Call dedicate
- Questo è l'*unico modo* per comunicare tra *sistemi operativi*!

## Tipologie di Socket
Esistono quattro tipologie di socket:
- **Stream Socket**: permettono comunicazione tramite *TCP* (*String byte*)
- **Datagram Socket**: permettono comunicazione tramite *UDP* (*Messaggi*)
- **Raw Socket**: permettono comunicazione tramite *pacchetti grezzi IP*
- **UNIX**: permettono comunicazione tra processi *di uno stesso nodo*

**Sempre** basati su modello **client/server**

## Modello Client/Server
Per implementare il *modello client/server* abbiamo i *socket passivi* e *attivi*.

Un **Passive Socket** *aspetta connessioni* in arrivo
- Implementa un *server*

Un **Active Socket** è effettivamente connesso a un altro nodo
- Permette lo *scambio di dati*
- Usato da un *client* per comunicare col server
- Usato anche dal *server*, *dopo* aver accettato una nuova connessione

## UNIX Socket
Comunicazione tra processi di uno stesso nodo
- Concettualmente *molto simili* a una *pipe* o *FIFO*

**Differenza**
- Usano modello *client/server*
- Un *server* si mette in ascolto
- Un *client* contatta il server e inizia la comunicazione
- Sono *peer-to-peer*

![450](images/sock-kern.png)

## Stream Socket
Comunicazione tramite *TCP*
- Servizio orientato alla *connessione*
- Client e server comunicano tramite un *flusso di byte*
- Molto affidabile! Circa $1/1000$ dei pacchetti vengono persi, che vengono comunque ritrasmessi
Simile a una *pipe* o *FIFO* tra *nodi diversi*

![550](images/sock-tcp.png)

## Datagram Socket
Comunicazione tramite UDP
- Client e server si scambiano *messaggi*
- Servizio non affidabile
	- Possibile perdita di pacchetti che non vengono ritrasmessi

## Differenze tra Socket
**Differenze:**
- Datagram Socket:
	- Orientato ai *messaggi*
	- Non affidabile
- Stream Socket e UNIX socket:
	- Orientato allo *stream*
	- Affidabile

![[2 1.png|350]]

# Funzioni e System Call per i Socket
I sistemi Linux/POSIX mettono a disposizione System Call per usare i socket
- Ogni socket è identificato da un File Descriptor
- Similmente ai file aperti o *FIFO* aperti, o *pipe*. 
- Si effettua I/O usando le System Call `read` e `write`
	- Tranne che per i *Datagram Socket* (si usano `sendto` e `recvfrom`)
Per creare un socket, si usano *System Call dedicate*
- Bisogna specificare *indirizzi IP e porte*
- *Attendere* che il kernel stabilisca la connessione

## Stream Socket e UNIX Socket
- *Client* usa: `socket` e `connect`
- *Server* usa `socket`, `bind`, `listen` e `accept`
- *Entrambi* usano `read` `write` e `close`

![450](images/sock-stream.png)

## Datagram Socket
- *Client* usa: `socket`
- *Server* usa `socket`, `bind`
- *Entrambi* usano `sendto` e `recvfrom` e `close`

![450](images/sock-dgram.png)

## Funzioni e System Call per i Socket
Noi vediamo in dettaglio *solo gli Stream Socket*
- Che utilizzano *TCP*
- Sono *affidabili*
- Orientati alla *connessione*
- Client e server comunicano tramite un stream di byte
- Semantica simile a *pipe*, ma *bidirezionale*
Nelle prossime slide, sono presentate le System Call, ipotizzando di creare uno *Stream Socket*

## Creazione di un Socket
```c
#include <sys/socket.h>
int socket(int domain, int type, int protocol);
```

Crea un socket. Gli argomenti `domain` e `protocol` ne *specificano la natura*.
- Argomento `protocol`, per noi sempre `0`

Ritorna il File Desciptor, se no $-1$.

**Esempi:**
- **Stream Socket** `int fd = socket(AF_INET, SOCK_STREAM, 0)`
- **UNIX Socket** `int fd = socket(AF_UNIX, SOCK_STREAM, 0);`
- **Datagram Socket** `int fd = socket(AF_INET, SOCK_DGRAM, 0))`

## Struttura `sockaddr`
Prima di vedere le *System Call* nello specifico, vediamo una struttura dati importante per rappresentare *indirizzi IP* e *porte*.

```c
struct sockaddr {
    sa_family_t sa_family;  /* Address family (AF_* constant) */
    char sa_data[14];       /* Socket address (size varies
                               according to socket domain) */
};
```

La `struct sockaddr` contiene un indirizzo IP, una porta o entrambi.
Deve essere *generica*: supportare protocolli potenzialmente diversi da suite TCP/IP

Il campo `sa_data` deve contenere gli indirizzi e le porte
Quando si usano socket con TCP/IP si utilizza la `struct sockaddr_in`

Viene usata in tutte le System Call che richiedono una `struct sockaddr`.
- Le System Call *solo generiche*
- Se noi usiamo TCP/IP, usiamo `struct sockaddr_in`

## Lato Client
```c
#include <sys/socket.h>
int connect(int sockfd, const struct sockaddr * addr, socklen_t addrlen );
```

Rende il socket `sockfd` *attivo* e si connette a indirizzo IP e porta specificati in `addr` e `addrlen`
Ritorna $0$ in caso di successo, se no $-1$

La `struct sockaddr` contiene un indirizzo IP, una porta o entrambi
- Entrambi in questo caso

La `connect` è *bloccante* finché non viene stabilita la connessione (TCP).

## Lato Server
1. *Trasformazione in passivo*
```c
#include <sys/socket.h>
int bind(int sockfd , const struct sockaddr * addr , socklen_t addrlen );
```

Rende il socket `sockfd` passivo, ovvero *lo mette in ascolto sulla porta specificata* in `addr` e `addrlen`
Ritorna $0$ in caso di successo, se no $-1$

La `addr` punta a una `struct sockaddr`, che sarà sempre di fatto una `struct sockaddr_in`:
- Contenente solo una porta in questo caso

2. *Attivazione di un socket passivo*
```c
#include <sys/socket.h>
int listen(int sockfd , int backlog);
```

Dopo che un socket `sockfd` è stato specificato come passivo (con `bind`), la `listen` lo *mette effettivamente in ascolto sulla porta* specificata.
Il parametro `backlog` determina *quante connessioni* in attesa *possono accodarsi* prima di essere servite. Di solito è un numero piccolo, tipo 5
Ritorna $0$ in caso di successo, se no $-1$

3. *Accettazione di connessioni*
```c
#include <sys/socket.h>
int accept(int sockfd , struct sockaddr * addr , socklen_t * addrlen);
```

Attende che una connessione arrivi al socket passivo `sockfd`
- *Bloccante* finchè non arriva una connessione

Nel momento in cui arriva una nuova connessione:
- La funzione ritorna
- Il valore di ritorno è un *nuovo socket attivo* (ovvero l'indirizzo IP)
- In `addr` (e `addrlen`) è specificato l'indirizzo del client

Tipicamente messo in un *ciclo while infinito*.

## Lettura e Scrittura su Socket
Un socket attivo viene creato:
- Direttamente da un client dopo che si è connettersi
- In un server, ogni volta che la `accept` ritorna, e permette la comunicazione con un client

Un socket è *bidirezionale*. In caso di *Stream Socket*:
- Si effettua I/O con `read` e `write`, o volendo con le funzioni specifiche per i socket `send` e `recv`
- Un socket viene chiuso tramite la `close` (col pacchetto *FIN*, *SYN* nel caso di connessione stabilita)

## Conversione di Indirizzi IP
Necessarie funzioni per convertire indirizzi IP in stringa e in formato binario su $4B=32bit$

```c
char *inet_ntoa(struct in_addr in);
int inet_aton(const char *cp, struct in_addr *inp);
```

IP in formato stringa specificato come `char *`
IP in formato binario specificato come `struct in_addr`

- Tipicamente si usa:
  ```c
  struct sockaddr_in s;
  inet_aton("1.2.3.4", &s.in_addr);
  ```
Le varianti `inet_ntop` e `inet_pton` sono equivalenti, ma più moderne

## Network Byte Order
*Indirizzi IP e porte* sono numeri interi su $32$ e $16$ bit.
Diverse architetture usano *convenzioni diverse* per l'ordine delle cifre
Necessario mettersi d'accordo quando si trasmettono via rete!

In rete si usa *Big Endian*, anche detto *Network Byte Order*: ovvero mettiamo *prima* le cifre più significative, poi alla fine le *cifre meno significative*.

![550](images/nbo.png)

Diverse architetture usano convenzioni diverse. Per ovviare a questi problemi, abbiamo le seguenti funzioni per convertire i numeri *Little-Endian* in *Big-endian* (o *Big-Endian a Big-Endian*)

```c
#include <arpa/inet.h>
uint32_t htonl(uint32_t hostlong);
uint16_t htons(uint16_t hostshort);
uint32_t ntohl(uint32_t netlong);
uint16_t ntohs(uint16_t netshort);
```

Convertono da formato dell'architettura corrente (`h`) a Network Byte Order (`n`), numeri su $32bit$ `l` e su $16bit$ (`s`), e viceversa

**Esempio:**
```c
uint16_t port_h = 12345;
uint16_t port_n = htons(port_h);
```

## Modificare le Opzioni di un Socket
```c
#include <sys/socket.h>
int getsockopt(int sockfd, int level, int optname,
               void *restrict optval, socklen_t *restrict optlen);
int setsockopt(int sockfd, int level, int optname,
               const void *optval, socklen_t optlen);
```

Manipolano le opzioni per il socket `sockfd`.
Modificano comportamenti di default:
- Forzare la bind a una certa porta: `SO_REUSEADDR`
- Parametri di funzionamento di TCP
- Molte altre

## Flusso Tipico per Socket Scream
**LATO CLIENT.**
```c
// Creazione
int fd = socket(AF_INET, SOCK_STREAM, 0);

/* Connessione: specifica indirizzo IP
   e porta del server */
connect(fd,
        (struct sockaddr*)&address,
        sizeof(address)));

// Input/Output
write(fd, buffer, n);
read(fd, buffer, SIZE);

// Chiusura
close(fd);
```

**LATO SERVER.**
```c
// Creazione                                                 
int fd = socket(AF_INET, SOCK_STREAM, 0);

// Bind: specifica porta
bind(fd, (struct sockaddr*)&address, sizeof(address));

// Listen: specifica lunghezza della coda in attesa
listen(fd, 3);

// Servizio ai client
while (1){

    /* Attesa di un client: ottiene indirizzo IP
       e porta del client */
    int active_fd  = accept(fd,
						(struct sockaddr*)&address,
						(socklen_t*)&addrlen)
					);
    // Input/Output
    write(active_fd, buffer, n);
    read(active_fd, buffer, SIZE);

    // Chiusura
    close(active_fd);
}

// Chiusura
close(fd);
```

## Risoluzione DNS
Esistono funzioni di libreria per effettuare risoluzioni DNS:
```c
#include <netdb.h>
struct hostent *gethostbyname(const char *name);
```

Effettua una risoluzione DNS per il dominio `name`.
Ritorna una `struct hostent`, una struttura molto complessa che contiene i risultati della risoluzione

E' deprecata, ora si usa la simile `getaddrinfo`

Non vediamo in dettaglio

## Esercizio sui Socket
**Esercizio.**
Il server $45.79.112.203$ alla porta TCP $4242$ offre un servizio di `echo`.
Se un client vi si connette e manda un messaggio, il server risponde con lo stesso messaggio.
Si crei un programma che si connette al suddetto endpoint, manda un messaggio e stampa la risposta un messaggio.

**SOLUZIONE.**
```c
#include <stdio.h>                                                                                                         
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#define SIZE 1024
#define MESSAGGIO "Ciao Mondo!\n"

int main(int argc, char *argv[]){

        int fd, n;
        char buffer[SIZE];
        struct sockaddr_in address;

        if ((fd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
            perror("socket failed");
            exit(EXIT_FAILURE);
        }

        address.sin_family = AF_INET;
        address.sin_port = htons(4242);
        if (inet_aton("45.79.112.203", &address.sin_addr) <=0){
            perror("convert server ip failed");
            exit(EXIT_FAILURE);        
        }

        if ((connect(fd, (struct sockaddr*)&address,sizeof(address)))< 0){
            perror("connect failed");
            exit(EXIT_FAILURE);        
        }
        
        write(fd, MESSAGGIO, sizeof(MESSAGGIO));
        printf("Tramesso: %s\n", MESSAGGIO);
        
        n = read(fd, buffer, SIZE);
        buffer[n] = 0;
        printf("Ricevuto: %s\n", buffer);
        close(fd);
        
}
```
