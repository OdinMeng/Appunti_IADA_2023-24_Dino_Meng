---
data: 2024-03-06
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Grandezze e Misure Fisiche
tipologia: appunti
stato: "1"
capitolo: Introduzione alla Fisica
---
- - -
*Definizione di grandezza fisica. Le grandezze fondamentali della fisica, definizione operative. Misura diretta e indiretta e misura derivata. Analisi e verifica dimensionale.*
- - -
# 1. Definizione di Grandezza Fisica
**Grandezza Fisica.** Una grandezza fisica è una *caratteristica* di un corpo (o fenomeno naturale) a cui si può associare *uno (o più) numeri*. Come primi esempi di *grandezza fisica* vedremo le c.d. *grandezze fondamentali*.
# 2. Le Grandezze Fondamentali
**Le grandezze Fondamentali.** Nel *sistema internazionale* ci sono *sette grandezze fondamentali*, tra cui il metro, il chilogrammo, il secondo, lo Kelvin, la candela, l'Ampere e la mole; in particolare ci soffermeremo sulla *lunghezza* (il metro), sulla *massa* (il chilogrammo) e sul *tempo* (il secondo). Queste grandezze fisiche sono *"fondamentali"* dal momento che vengono definite *"operativamente"*, ovvero solo mediante dalle *operazioni necessarie per misurarle*. 
Dopodiché, in generale le *grandezze fisiche* si esprimono in *termini di campione* (ovvero le *unità*).
In particolare:
- Il *secondo* viene misurato dal valore numerico delle *risonanze del cesio*, 9.192.631.770 volte il periodo di oscillazione di una risonanza dell'atomo $^{233}\text{Ce}$.
- Il *metro* viene misurato dalla distanza percorsa dalla luce in un secondo, diviso per 299.792.458.
- Il *chilogrammo* viene misurato secondo la *costante di Planck* $h = 6,62607015 \cdot 10^{-34} \text{ kg} \cdot \text{m}^{2} \cdot \text{s}^{-1}$.
Notare che la definizione del *metro* dipende dal *secondo* e similmente la definizione del *chilogrammo* dipende dal *metro* e dal *secondo*.
# 3. Misure dirette, indirette e unità derivate
**Misura diretta.** La misura diretta è il *confronto* con un *campione*, detto l'*unità*. Ad esempio, supponiamo di avere un corpo lungo $c$, che prenderemo come campione. Adesso immaginiamo di avere un altro corpo con lunghezza $L$, per ottenere la misura di questo corpo basta fare il rapporto $\frac{L}{c}$ (*figura 3.1.*).

**FIGURA 3.1.** (*Esempio di una misura diretta*)
![[Pasted image 20240306211930.png]]

**Misura indiretta.** La misurazione indiretta è una relazione matematica. Ad esempio si ha la densità di un cilindro, per cui necessitiamo di *massa* e *volume* (*figura 3.2.*); oppure il principio di Archimede è un buon esempio.

**FIGURA 3.2.** (*La densità di un cilindro*)
![[Pasted image 20240306212313.png]]

**Unità derivate.** Le unità derivate sono le *combinazioni* di *unità fondamentali*. Come visto prima, possiamo prendere la *densità* di un qualsiasi corpo come un'unità derivata, dal momento che è espressione di una combinazione tra il chilogrammo e metro cubo.

# 4. Analisi Dimensionale
**Osservazione.** (*l'analisi dimensionale ci fornisce una condizione sufficiente*) Studiare e analizzare le *unità* diventa molto importante, in particolare per *verificare* i risultati di un'analisi fisica: infatti la misura (o l'unità) di un risultato ci fornisce una *condizione sufficiente*. 
Ad esempio, se si sta cercando di calcolare il peso di un corpo e alla fine si ottiene un risultato in secondi, è ovvio che c'è qualcosa di sbagliato! Se la misurazione è sbagliata, allora sicuramente il calcolo è errato. Tuttavia questa non ci fornisce una *condizione necessaria*, dal momento che la misurazione può essere giusta ma il risultato può essere comunque sbagliato.

**Idea.** (*l'analisi dimensionale ha delle regole precise*) Nell'analisi dimensionale poniamo delle *regole precise*:
1. La somma e la sottrazione di *grandezze fisiche* dev'essere *omogenea*, ovvero che le grandezze devono essere le stesse;
2. L'argomento di *funzioni trascendenti* (come $\sin, \cos, \exp, \ldots$) dev'essere *adimensionale* (ovvero senza essere dotate di dimensioni: in un modo la misura viene cancellata).

**Applicazioni.** (*Verifica e analisi dimensionale*)
1. (*Verifica dimensionale*)
Come detto prima, possiamo *verificare* se un risultato di un calcolo (o di una formula, legge) sia giusto o errato, guardando le misure.
Ad esempio voglio verificare la legge oraria.
$$
\Delta x = v\Delta t + \frac{1}{2}a \Delta t^2
$$
Adesso racchiudo tutti i membri nelle parentesi quadre per dire che *"sto prendendo le loro dimensioni (o unità)"*.
$$
[\Delta x] = [v][\Delta t] + \left[\frac{1}{2}\right][a][\Delta t^2]
$$
Ora metto le loro dimensioni, esprimendoli con opportuni simboli o con le loro unità di riferimento.
$$
m = \frac{m}{s}s+ \frac{m}{s^2}s^2  \implies m= m \ \text{OK!}
$$
Quindi posso vedere che *è possibile* (non dev'essere *necessariamente vero*!) che la formula data sia corretta.
2. (*Analisi Dimensionale / Dipendenza Funzionale*)
L'analisi dimensionale può essere utile anche per determinare le *misure necessarie* per calcolare una certa grandezza fisica: possiamo dedurre l'*unica (o più) combinazioni* di grandezze fisiche per calcolare una grandezza derivata.
Ad esempio, vogliamo calcolare *l'accelerazione di una massa che si muove su una circonferenza* (ovvero l'accelerazione centripeta).
Sappiamo che l'accelerazione si esprime in $\frac{m}{s^2}$. Vogliamo dunque una combinazione di queste misure che dia questa combinazione di dimensioni.
Facendo finta di conoscere il *raggio* $R$ della circonferenza, la *velocità* $v$ e la *massa* $m$ del corpo, possiamo sapere già quali diventeranno utili per calcolare il risultato voluto (*figura 4.1.*).
Infatti, si trova che
$$
[R]\rightarrow m; [v]\rightarrow \frac{m}{s}; [m] \rightarrow kg
$$
Allora si ha
$$
\left[\frac{v^2}{R}\right] = \frac{m}{s^2}
$$
che sono i dati utili per calcolare l'accelerazione. Tuttavia questa non ci fornisce una *formula esatta* per calcolare la grandezza, dal momento che con l'analisi dimensionale le *costanti* vengono trascurate. ^e43c58

**FIGURA 4.1.** (*L'analisi dimensionale di un corpo che si muove su un cerchio*)
![[Pasted image 20240307193457.png]]
