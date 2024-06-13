---
data: 2024-06-03
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Tecnologie Cloud
tipologia: appunti
stato: "1"
capitolo: Argomenti Misti (Sistemi Operativi)
---
- - -
*Generalità sulle tecnologie Cloud: scenario, provider principali, servizi e prospettive odierne.*
- - -
# Tecnologie Cloud
## Scenario
Le tecnologie di VM e container permettono a un'azienda di *collocare i propri servizi in qualsiasi luogo del mondo* (ovvero è tutto *virtualizzato*)

Per molte aziende è conveniente *affittare una VM* da un'azienda specializzata, anziché comprare server fisici
- Avere server farm è *costoso*: necessario raffreddamento e sorveglianza
	- Economia di scala con data center grandi
	- Vedi: requisiti per *costruire un Data Center di livello 4, standard EN50600*
- Il personale specializzato è *poco e costa molto*!
	- Vedi: per costruire un data center, bisogna avere *più team specializzati* per progettare tutto, poi bisogna costruire il data center, poi un team per mantenere tutto, eccetera...
- Malfunzionamenti possono provocare *gravi danni economici*!

## Cloud Provider
**Conseguenza:** sempre più spesso le aziende comprano servizi da *Cloud Provider*
Tra i più popolari cloud provider:
- **Amazon Web Services**
- **Google Cloud**
- **Microsoft Azure**
- **Aruba** (in Italia)
- Poi molti altri! (tipo dei provider ad-hoc per la *Pubblica Amministrazione*)

**Pro:** Il costo immediato è molto basso
**Contro:** Il costo a lungo termine è significativamente alto (in alcuni anni copri il costo immediato)

Vedremo i *pro/contro* in dettaglio ulteriormente.

## Servizi offerti dai Cloud Provider
Diverse tipologie di servizi offerti dai cloud provider
- **IAAS (Infrastructure As A Service)**: possibilità di creare e utilizzare *VM* o *container*
- **PAAS (Platform As A Service)**: il cloud provider offre una *piattaforma di sviluppo*. L'utente scrive solo l'applicazione
	- **Esempio 1:** Database SQL remoto in Cloud
	- **Esempio 2:** servizio di hosting per siti web dinamici: supporto a hosting HTML, esecuzione server-side di PHP e SQL
- **SAAS (Software As A Service)**: l'utente/azienda compra una *subscription* a un *servizio completo*
	- **Esempio:** un'azienda compra un abbonamento a Microsoft Teams

![900](images/aas.png)

## Prospettive Odierne delle Tecnologie Cloud
Sempre più spesso aziende ed enti pubblici fanno ricorso a Cloud Provider per IAAS/PAAS/SAAS; tuttavia ancora oggi queste tecnologie sono ancorai in *fase di discussione*.

**Vantaggi:**
- Minore costo iniziale
- Maggiore affidabilità (infatti, *Google*, *Amazon* sono affidabili)

**Svantaggi:**
- *Vendor Lock-in* (ovvero praticamente sono *"legato"* all'ente fornitore, ho bisogno di tutele legali)
- Perdita di *Know How* (in particolare della *sovranità dei dati*: ripercussione particolare sui *problemi geopolitici*, come conflitti internazionali, leggi che tutelano dati (GDPR), eccetera...)
- Costo elevato nel lungo termine (in *2 anni* avrei coperto il costo immediato per *un server*)
