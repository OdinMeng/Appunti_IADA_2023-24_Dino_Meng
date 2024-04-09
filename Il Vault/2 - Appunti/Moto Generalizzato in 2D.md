---
data: 2024-03-14
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Moto in 2D o 3D
tipologia: appunti
stato: "1"
capitolo: Cinematica
---
- - -
*Descrizione del moto a due dimensioni. Caso generalizzato del moto, analisi geometrico-vettoriale del vettore velocità e del vettore accelerazione.*
- - -
# 1. Caso generalizzato del moto
#Osservazione 
> [!rmk] generalizzazione del moto a due dimensioni
> Adesso consideriamo un *caso più generale* di una *traiettoria*, ovvero qualcosa del tipo raffigurato nella *figura 1.1.*: vogliamo capire se ci sono delle *"regole"* che stanno sotto i vettori velocità $\vec{v}(t)$ e accelerazione $\vec{a}(t)$, data un'istanza del tempo.
> 
> Notiamo che il *vettore velocità* dev'essere *sempre* parallela alla *tangente* della curva $\vec{r}(t)$. Questo ha senso e coincide perfettamente con l'*interpretazione geometrica* della *derivata* ([[Derivata e derivabilità#^ec396f]]).
> 
> Per quanto riguarda l'*accelerazione*, bisogna fare uno studio più approfondito e ingrandito della traiettoria, in particolare nella parte più *"curvate"*. Prendendo due *istanze dei vettori velocità sufficientemente vicini* $\vec{v}(t)$ e $\vec{v}(t+\Delta t)$ e prendendo il loro incremento $\Delta \vec{v} = \vec{v}(t+\Delta t)-\vec{v}(t)$, abbiamo una freccia che punta *ortogonalmente* rispetto ai vettori velocità. Scalandolo in particolare l'incremento del tempo $\Delta t$, si ottiene il vettore velocità $\vec{a}(t_i), t_i \in [t, t+\Delta t]$ (*figura 1.2.*). Dunque si ha un *"grado di libertà"* per il vettore accelerazione, e di solito varia al *curvare della traiettoria*.
> 
> Si dimostrerà che $\vec{a}$ può essere scomposta in *due componenti*:
> Una componente è *parallela* a $\vec{v}$, e la chiamiamo $\vec{a}_{\parallel}$: questa componente determina il cambiamento del modulo di $|\vec{v}|$.
> La seconda componente è quella *ortogonale* a $\vec{v}$, e la chiamiamo $\vec{a}_{\perp}$: questa componente determina il *cambiamento della direzione* di $\vec{v}$.
> 

**FIGURA 1.1.** (*La prima situazione*)
![[Pasted image 20240314203147.png]]

**FIGURA 1.2.** (*La situazione zoomata*)
![[Pasted image 20240314203208.png|500]]

#Osservazione 
> [!rmk] il modulo dell'accelerazione nullo non implica l'assenza del cambiamento di velocità
> Da questo notiamo che $|\vec{a}|$ non *deve necessariamente implicare* che non c'è nessun *cambiamento di velocità* $\Delta \vec{v}$; invece può solo necessariamente implicare che non c'è nessun cambiamento nell'*"intensità"* della velocità.
