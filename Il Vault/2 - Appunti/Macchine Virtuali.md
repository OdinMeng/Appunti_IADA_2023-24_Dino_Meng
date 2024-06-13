---
data: 2024-06-03
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Macchine Virtuali
tipologia: appunti
stato: "1"
capitolo: Argomenti Misti (Sistemi Operativi)
---
- - -
*Macchine virtuali: motivazioni, definizione di VM e hypervisor, tecnologie principali.*
- - -
# Necessità di isolamento (Motivazioni per le VM)
Diamo una serie di *motivazioni* per parlare delle *macchine virtuali*

**Premessa 1:** Le organizzazioni *comprano macchine molto potenti*
- Una server potente costa meno di tanti server piccoli
**Premessa 2:** Ogni utente/dipartimento *ha bisogno un macchina dedicata*
- Un crash in una macchina non compromette l'altra
	- Esempi: Database, Web Server, eccetera...

**Conseguenza:** Si vuole *dividere* una macchine potente in più macchine *meno potenti*, dandone ognuna un suo servizio

**Esempio.**
Un organizzazione compra una *macchina potente*, e necessità di un *server Web, FTP e mail*
- Non vuole far girare i *3 software sulla stessa macchine*
- Un problema in uno solo, *può compromettere tutto* e bloccare l'intera azienda
	- Esempio: memory leak, disco pieno, ecc...
- Una vulnerabilità di sicurezza compromette tutti e 3 i sistemi  

**Soluzione:** il server viene diviso in tre *Macchine Virtuali*, ad ognuna un suo compito
Questa è la tecnica usata *quasi sempre* nelle aziende IT moderne:
- I servizi sono sempre in VM dedicate
- Vengono eseguiti su server potenti dotati di *Hypervisor* (vedremo che cos'è)
- I *servizi Cloud* offrono la possibilità di usare VM (vedremo)

---
# Macchine Virtuali
## Definizione di VM e Hypervisor
Una *Macchina Virtuale (VM)* è un *ambiente virtuale che emula un sistema ad elaboratore* (quindi software)

Un *Hypervisor* è il software che rende possibile ciò, usando tecniche di *virtualizzazione*
Questi devono avere i seguenti requisitit teorico-tecnici:
- **Sicuri:** una VM non deve compromettere il sistema o accedere ad altre VM (ovvero non ho nessun *leak*, l'isolamento dev'essere proprio sicuro)
- **Affidabili:** una VM non deve essere *meno affidabile* di una macchina fisica (in certi casi si può raggiungere il caso in cui le *VM* sono ancora più affidabili!)
- **Efficienti:** una VM non deve essere *significativamente* meno veloce di una macchina fisica
	- Tante tecniche per arrivare a ciò (in particolare sia dal lato software che dal lato hardware)
	- La *"penalità"* può essere al più 5% ($\text{VM} \not \ll \text{HW}$). 
Per riassumere, un *Hypervisor permette di creare un sistema ad elaboratore virtuale*, con CPU, memoria e disco virtuali
- Eventualmente con accesso rete e dispositivi di I/O fisici o virtuali

![550](images/vbox.png)
## Storia delle Macchine Virtuali
1. Il *concetto* nasce negli anni *'60*, nell'epoca dei mainframe
Poco utilizzati fino ai primi anni 2000
- Gli *hypervisor erano lenti*, e non vi era grande necessità
- Si comprava *una macchina fisica per ogni servizio*
- Riassunto: esisteva, ma era rimasto sulla carta per limiti tecnologico-economici.

2. Tornano alla ribalta negli *anni 2000*
- Gli Hypervisor hanno fatto un *salto tecnologico*, diventando *efficientissimi*
	- Sono in grado di emulare l'*Hardware* come se fosse nativo: il lavoro degli Hypervisor viene facilitato proprio dall'architettura stessa
- I server sono diventati *molto potenti*, rendendo conveniente *dividerli* in più macchine di potenza intermedia
	- Abbiamo più core, memoria, in generale i computer sono molto più potenti

3. Oggi le *macchine virtuali* e gli *Hypervisor* sono una tecnologia pienamente matura:
- **Sicura**
- **Efficiente:** meno del 5% di penalizzazione rispetto a macchina fisica
- Tutte le aziende hanno *cluster* dedicati *a ospitare VM*
	- Un *team specializzato* gestisce il cluster e il software di virtualizzazione
	- I *team di sviluppo* (anche questo specializzato) installano i servizi su VM dedicate

## Tipologie di Hypervisor
Ci sono due tipologie di Hypervisor.

**Hypervisor di Tipo 1**
E' un *SO dedicato che serve solo a creare VM*
*Efficienti* perché hanno il controllo completo della macchina
**Esempi:** Xen, Microsoft Hyper-V, VMware ESXi 
![300](images/hv1.png)


**Hypervisor di Tipo 2**
E' un *software eseguito in un normale SO* che permette di creare *Macchine Virtuale*
*Meno efficienti* (dato che, come si vede nella figura, ho uno *"strato"* di software in più); ma ormai i SO offrono assistenza a Hypervisor di Tipo 2
**Esempi:** VMWare Player, Virtual Box, QEMU, Parallels
![300](images/hv2.png)

# Problemi degli Hypervisor
Come visto prima, gli *Hypervisor* hanno il compito di emulare *sistemi ad elaboratori* dal lato software, mantenendo la stessa *affidabilità* ed *efficienza* dell'hardware. In particolare avremo i seguenti problemi:
- Ottimizzazione della CPU
- Ottimizzazione della Memoria
Vedremo come verranno risolti questi problemi, sia dal lato *software* che dal lato *hardware*.

## Ottimizazione della CPU 
Un Hypervisor permette di *emulare in software una CPU virtuale*, potenzialmente di *architettura diversa* rispetto alla macchina fisica
- **Esempio:** emulare ARM su CPU x86
- **Problema:** *molto lento!* Si deve implementare in software una CPU. In questo caso si ha $\text{VM} \lll \text{HW}$.

Solitamente ciò non avviene e si *ottimizza* l'uso della CPU
- La VM esegue le istruzioni direttamente sulla CPU fisica
	- Ovvero sono *eseguite davvero* sulla *CPU fisica*. Da questo ci sono ulteriori problematiche, tra cui la gestione delle *risorse globali*: su questo aiuterà il lato *Hardware*.
- *Necessaria cautela*, per evitare i *leak*.

**Soluzione.** (*Virtual Kernel Mode*)
Nei moderni Hypervisor, la VM esegue le istruzioni sulla *CPU fisica*
- Le CPU moderne permettono il *virtual kernel mode*
	- Permette di eseguire istruzioni in *kernel-mode*
	- Limitando i *privilegi*
	- Ovvero il *VM* crede di essere in *modalità kernel*, anche in realtà è limitata.
- Il kernel della VM esegue il suo codice in *virtual kernel mode*
	- Altrimenti potrebbe leggere tutta la memoria della macchina fisica! Che sarebbe pericolosissimo (esempi: leak, corruzione, accesso potenziale ai malintenzionati, eccetera...)

![600](images/vm-cpu.png)

## Ottimizzazione della Memoria
Abbiamo il problema analogo, solo che al posto della *CPU* occupiamo della *memoria*.

Un Hypervisor, se emula la CPU, *emula anche memoria in software*
- Ogni volta che una VM accede a una *locazione di memoria*, l'*Hypervisor* esegue del codice per fornigli il risultato
- *Lentissimo*!

Gli Hypervisor moderni permettono alle VM di accedere *direttamente* a *porzioni di memoria fisica* (quindi come prima, usiamo veramente la *memoria fisica*)
- Necessari due livelli di *paginazione*
	- All'*interno della VM*: da *memoria virtuale di processo* a *memoria della VM*
	- Da *memoria della VM a memoria fisica*
- Abbiamo una composizione del tipo $(P)_{VM}: IV_{VM} \mapsto IF_{VM} \mapsto IF_{HW}$ 
Serve cooperazione del sistema fisico e della CPU!  

**Soluzione.** (*Page Table Annidate*)
Le CPU moderne supportano *Page Table annidate*
- *Primo livello:* mappa tra processo nella VM a memoria della VM ($IV_{VM} \mapsto IF_{VM}$)
- *Secondo livello:* mappa tra memoria della VM e memoria fisica ($IF_{VM} \mapsto IF_{HW}$)

![600](images/vm-mem.png)

## Problema Attuale
In realtà ancora oggi c'è un altro problema ovvero la gestione dell'*Input/Output*: come faccio ad esporre direttamente l'*I/O* alla *VM*?
- Questo problema rappresenta la *"ultima frontiera"* degli Hypervisor
- Situazioni applicabili: Reti neurali, per le *GPU*

# Tecnologie Principali per le VM
- Per giocare: **VirtualBox** o **QEMU**
- Per installare VM su un server: **Kernel-based Virtual Machine (KVM)** + **Libvirt**
- Per un cluster di VM: **OpenStack**

Altre alternative possibili, non tutte *open source* e *free* (tipo **VMWARE**)
