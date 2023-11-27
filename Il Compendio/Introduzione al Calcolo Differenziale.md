---
data: 2023-11-22
corso: "[[Analisi Matematica I]]"
argomento: Introduzione al Calcolo Differenziale
tipologia: appunti
stato: "1"
---
*Introduzione al calcolo differenziale: cenni storici ed esempio meccanico del rapporto incrementale e derivata*
- - -
# 1. Origine storico del concetto
**OSS 1.1.** (_Contesto storico_) Ci troviamo nella seconda metà del XVII secolo, un periodo caratterizzato dagli straordinari contributi di due giganti della matematica: Isaac Newton e Gottfried Wilhelm Leibniz. Questi due luminari sono diventati figure fondamentali nello sviluppo del _calcolo differenziale_, introducendo concetti rivoluzionari come la _derivata_, che poi diventerà materia d'esame per quanto ci concerne.

Focalizziamoci ora sul genio di Isaac Newton: autodidatta straordinario, Newton, già a soli 21 anni, ha delineato la concettualizzazione della _velocità_. È interessante notare che le seguenti definizioni, sebbene non siano direttamente oggetto d'esame, possono essere considerate come un cenno alla _fisica newtoniana_ ([[Introduzione Alla Fisica]]). 
## Esempio meccanico del calcolo differenziale
> [!def] Definizione 1.1. (legge oraria)
> Sia $x \mapsto x(t)$ una funzione che associa al tempo $t$ la *posizione* di un punto mobile su un asse $x$.
> Allora $x(t)$ si dice legge oraria. 
^56240d

**FIGURA 1.1.** (*Legge oraria*)
![[Pasted image 20231122154137.png]]

> [!def] Definizione 1.2. (velocità media dati due istanti di tempo)
> Si definisce la *velocità*, dati due istanti di tempo $t_1$ e $t_2$ la velocità media $v(t_1, t_2)$ nel seguente modo:
> $$v(t_1, t_2) = \frac{x(t_1)-x(t_2)}{t_1-t_2} $$
> Sul numeratore abbiamo *l'incremento* dello spazio, sul denominatore *incremento* del tempo.
> 
> **ATTENZIONE!** Per *"incremento"* si intende semplicemente la differenza tra il punto finale e iniziale; quindi non dev'esserci necessariamente un *"incremento"*: può esserci nessuna variazione o anche un *"decremento"* (ovvero una specie di incremento negativo).
^190e60

Ora voglio legare questo concetto di *velocità* ad una sola variabile di tempo $t$; allora definisco la *velocità* istantanea mediante il concetto di *limite* ([[Definizione di Limite di funzione#^0f845a]]).
> [!def] Definizione 1.3. (velocità istantanea)
> Sia $x(t)$ una legge oraria.
> Allora chiamo la velocità istantanea $v(t)$
> $$v(t) = \lim_{t_1 \to t_2} v(t_1,t_2) $$

Ora abbiamo il *concetto* meccanico della derivata: nei successivi capitoli ci prescindiamo dai presupposti fisici e ci dirigiamo verso all'astrazione puramente matematica.