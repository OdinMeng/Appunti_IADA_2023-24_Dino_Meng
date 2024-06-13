---
data: 2024-04-21
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Esempi di Oscillazioni
tipologia: appunti
stato: "1"
capitolo: Oscillazioni
---
- - -
*Esempi di oscillazioni: il pendolo, ...*
- - -
# 0. Voci correlate
- [[Moto Armonico]]
- [[Moto Armonico Forzato]]
- [[Moto Armonico Smorzato]]
# 1. Il Pendolo di Galileo
**Il pendolo (notizie storiche).** Un giorno nella chiesa di Pisa, il scienziato Galileo Galilei si interrogo sulla natura del pendolo: supponendo che la corda che lega il pendolo sia lunga di un metro, qual è il suo periodo? Dipende in alcun modo dalla lunghezza? Adesso vediamo con le nozioni apprese.

#Esempio 
> [!exm] il pendolo
> Supponiamo di avere un *corpo* legato ad un *filo* avente lunghezza $L$, con un angolo $\theta$ rispetto al verticale: ovvero abbiamo la *figura 2.1.*.
> 
> Disegnando il *diagramma del corpo libero* ([[Diagramma di Corpo Libero#^e5976d|1]]), abbiamo
> $$
> \left(\sum \vec{F}\right) \cdot \hat{i}' \to \vec P_{\parallel} = ma_y = mg\sin \theta
> $$
> da cui discende l'*accelerazione parallela al suo moto* (ovvero *lungo l'arco*) è
> $$
> a_y = g\sin \theta
> $$
> Consideriamo *l'accelerazione parallela* come un *caso particolare del cambiamento di angolazione rispetto al tempo*. Infatti per uno spostamento $\text{d}s$ abbiamo uno spostamento di $L \text{d}\theta$.
> $$
> \ddot s = L \ddot \theta \implies \boxed{L \ddot \theta = -g\sin\theta}
> $$
> ovvero l'*equazione differenziale* associato a questo modello.
> 
> Adesso, per semplificare i conti usiamo *l'approssimazione degli angoli piccoli*, per cui abbiamo
> $$
> \sin \theta = \theta
> $$
> che diventa più *"accurata"* per $\theta \to 0$ (ovvero angoli piccoli).
> 
> Quindi si approssima l'equazione differenziale come
> $$
> L\ddot \theta = -g\sin\theta \sim L\ddot\theta = -g\theta
> $$
> Adesso prendendo $L=1 \text{ m}$, abbiamo
> $$
> \boxed{\omega = \sqrt{g} }
> $$
> o generalmente
> $$
> \omega = \frac{\sqrt g}{L}
> $$
> con
> $$
> T=\frac{2\pi}{\omega} \approx 2\text{ s}
> $$
> Infatti, notiamo di avere l'approssimazione
> $$
> \pi^2 = g
> $$
> Storicamente, questo è stato una delle *proposte* della *misurazione del metro*: ciò è avvenuto con la *rivoluzione francese*.

^2b1c53

**FIGURA 1.1.** (*Il pendolo*)
![[Pasted image 20240421224617.png]]

# 2. Gli ammortizzatori di un'automobile
#Esempio 
**L'Automobile.** Come si sa, gli *automobili* sono dotati di componenti per *assorbire* eventuali dislivelli in altezza (come *dossi*). Per gestirli, abbiamo l'*ammortizzatore* e le *sospensioni*: per spiegarli senza dover scendere in dettaglio, essi sono delle *molle* con dei contenitori di *liquidi viscosi* collegati alla ruota. 
L'obiettivo delle sospensioni è quello di *raggiungere il smorzamento critico*, per assorbire eventuali salti al meglio.
![[Pasted image 20240422200113.png]]

# 3. I ponti
#Esempio 
**I ponti.** Un esempio del *moto armonico forzato* sono *i ponti*. Ci sono certe situazioni in cui ci sono delle *forze esterne* che causano al ponte di *oscillare*. Di solito va tutto bene e non c'è nessuna *risonanza*; tuttavia, ci sono stati dei storici in cui ci sono state delle *risonanze*, con delle conseguenze disastrose.
Si pensa ad esempio al ponte di *Tacoma Narrows*: il vento è stato abbastanza forte da poter causare un'aumento alla loro *ampiezza*, determinando la sua distruzione.
![[Collapse-Tacoma-Narrows-Bridge-Washington-state-1940.webp]]
Oppure come una conseguenza, si pensa al fatto che i soldati devono *spezzare il passo* sui ponti, per evitare di creare risonanze.
