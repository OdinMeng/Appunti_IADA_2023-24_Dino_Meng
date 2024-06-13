---
data: 2024-06-03
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Comandi Bash per Networking
tipologia: appunti
stato: "1"
capitolo: Argomenti Misti (Sistemi Operativi)
---
- - -
*Comandi Bash per Networking.*
- - -
# Networking in Linux
## Interfacce di Rete
La gestione della rete cambia a seconda di distribuzione Linux/POSIX, ma ci sono dei concetti generali.

Ogni *interfaccia di rete* è identificata da un nome.
- Scheda Ethernet: `eth0` o `eno1`
- Scheda WiFi: `wifi0`
- Interfaccia di loopback: `lo`

## Informazioni sulla Rete
1. `ifconfig` è il comando storico per avere informazioni.
In realtà è obsoleto, ora si usa il comando `ip addr`

**Esempio**:
```bash
$ ip addr
1: lo: <LOOPBACK,UP,LOWER_UP> mtu 65536 qdisc noqueue state UNKNOWN group default qlen 1000
    link/loopback 00:00:00:00:00:00 brd 00:00:00:00:00:00
    inet 127.0.0.1/8 scope host lo
       valid_lft forever preferred_lft forever
    inet6 ::1/128 scope host 
       valid_lft forever preferred_lft forever
2: eno1: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc fq_codel state UP group default qlen 1000
    link/ether 2c:f0:5d:c3:7b:b5 brd ff:ff:ff:ff:ff:ff
    altname enp0s31f6
    inet 140.105.50.104/24 brd 140.105.50.255 scope global dynamic noprefixroute eno1
       valid_lft 101209sec preferred_lft 101209sec
    inet6 fe80::bf0b:ea7e:b8a9:d363/64 scope link noprefixroute 
       valid_lft forever preferred_lft forever
```

2. `ip route`: Quando viene generato un pacchetto, il sistema usa la *routing table* per decidere *su quale interfaccia trasmetterlo*

```bash
$ ip route
default via 140.105.50.254 dev eno1 proto dhcp metric 100 
140.105.50.0/24 dev eno1 proto kernel scope link src 140.105.50.104 metric 100 
```

La routing table viene creata in automatico quando si configurano le interfacce di rete, inserendo indirizzo IP, netmask e default gateway.

## Configurazione della Rete
Storicamente, rete configurata tramite file di configurazione.
- `/etc/network/interfaces`: indirizzo IP, subnet mask e default gateway
- `/etc/resolv.conf`: resolver DNS

Ora si usa il demone *Netplan*, che ha file di configurazione in `/etc/netplan/...`
```yaml
network:
  version: 2
  renderer: networkd
  ethernets:
    ens3:
      addresses: [172.16.86.5/24]
      gateway4: 172.16.86.1
      nameservers:
          addresses: [8.8.8.8, 8.8.4.4 ]
```

Si applica la configurazione col comando:
```
netplan apply
```

I sistemi desktop hanno meccanismi di più alto livello per queste configuazioni
- Ubuntu Desktop ha *Network Manager* per configurare la rete tramite interfaccia grafica
- *Network Manager* scrive i file di configurazione per noi
- Attenzione a cambiare i file manualmente, rischio conflitto

## Comandi Misti
**Risoluzioni DNS:**
`host <dominio>` o `dig <dominio>`

**Troubleshooting:**
`ping <destinazione>` e `traceroute <destinazione>` 

**Richieste HTTP**:
`curl <URL>` o `wget <URL>` per scaricare pagine Web

**Listare tutti i socket nel sistema**:
Si usa il comando `netstat`, che ha molte opzioni:
- `-l`: Stampare solo socket passivi
- `-t`: Solo TCP
- `-p`: Stampare il PID e il nome del processo associato al socket

Utile per sapere se un programma server è attivo:
```bash
$ netstat -nplt
Active Internet connections (only servers)
Proto Recv-Q Send-Q Local Address           Foreign Address         State       PID/Program name    
tcp        0      0 0.0.0.0:22              0.0.0.0:*               LISTEN      1411/sshd    
tcp        0      0 0.0.0.0:80              0.0.0.0:*               LISTEN      950293/nginx: maste 
tcp        0      0 0.0.0.0:443             0.0.0.0:*               LISTEN      950293/nginx: maste 
tcp        0      0 0.0.0.0:5000            0.0.0.0:*               LISTEN      4014584/docker-prox                  
```

## Creazione di Socket da Comando
Il comando `nc` permette di creare e usare in maniera semplice un socket da riga di comando
**Client:**
```bash
nc <indirizzo> <porta>
```

**Server:**
```bash
nc -l <porta>
```

Quando il socket è connesso, si può scrivere e leggere nel socket usando il terminale

**Esercizio:** usare `nc` per scambiare messaggi tra due PC
