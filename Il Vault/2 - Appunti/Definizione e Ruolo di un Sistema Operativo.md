---
data: 2024-03-16
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Definizione e Ruolo di un Sistema Operativo
tipologia: appunti
stato: "1"
capitolo: Introduzione ai Sistemi Operativi
---
- - -
*Definizione e ruolo di un Sistema Operativo.*
- - -
# 1. Il ruolo del sistema operativo
**IL COMPITO DEL SISTEMA OPERATIVO.**
- Il compito dei sistemi operativi è:
  - Interagire con l'*hardware*
  - Fornire all'utente un *modello* di computer più semplice (ovvero con ciò che si chiama *UI*)
  - In un certo senso, i sistemi operativi rendono gradevole ciò che ha un'interfaccia sgradevole. Ovvero di *mediare* la comunicazione tra le *applicazioni* e *hardware*. Infatti, ogni *dispositivo I/O* ha una sua *logica*, quindi il compito di un *sistema operativo* è anche quello di *permettere la portabilità delle applicazioni*.

![width:500px center](images/so-schema.png)

![width:500px center](images/so-beauty.png)

# 2. Gli strumenti del Sistema Operativo
**COME L'OS FA DA MEDIATORE?**
- Il sistema operativo si interfaccia con i dispositivi hardware tramite dei *moduli software* chiamati *Driver*. Quindi si ha una situazione del tipo *OS <-=-> Driver <-=-> Hardware*.
- Offre servizi alle applicazioni tramite *API* chiamate *System Call*, che permettono alle applicazioni di *usare l'hardware facilmente*.
- Organizzato in moduli
