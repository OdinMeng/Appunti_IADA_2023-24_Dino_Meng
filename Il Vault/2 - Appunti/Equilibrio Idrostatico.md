---
data: 2024-05-13
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Equilibrio Idrostatico
tipologia: appunti
stato: "1"
capitolo: Solidi e Fluidi
---
- - -
*Equilibrio idrostatico di un oggetto immerso in un fluido. L'equazione dell'equilibrio idrostatico. Corollario: legge di Stevino. Addendum sul vuoto: l'esperimento di Magdeburg.*
- - -
# 0. Voci correlate
- [[Principio di Archimede]]
# 1. Equilibrio Idrostatico
**PROBLEMA.** Considero un *cubo* immerso in un fluido. Cosa succede? Quali sono le forze? Qual è la pressione agente sul cubo? 
Facendo uno zoom *"tridimensionale"* sul cubo, vediamo che abbiamo due *"set"* di forze: ci sono delle forze che vanno *verso dentro il cubo*, lungo *l'orizzontale* (o una qualsiasi direzione che non sia verticale). Vedremo che queste si annulleranno, dato che sono simmetriche.
D'altro canto abbiamo le *forze lungo la verticale*, che invece non si annullano.
![[Pasted image 20240513200741.png]]
Disegnando il *diagramma delle forze*, abbiamo che la forza $\vec{F}(z)$ va *in alto*, invece $\vec{F}(z+\Delta z)$ in *basso*. La sua risultante coincide con la *spinta di Archimede* ([[Principio di Archimede#^d38569|1]]), di cui ricordiamo è
$$
F_s = \Delta V \rho g
$$
In particolare posso considerare $\Delta V$ una quantità al variare in $z$: $\Delta V = A \Delta z$.
Allora ponendo l'uguaglianza $\vec{F}_s = \vec{F}(z)+\vec{F}(z+\Delta z)$ e passando alla sua forma vettoriale si ha
$$
F_s = A\Delta z \rho g = F(z)-F(z+\Delta z)
$$
Ricordandomi della *definizione di pressione* ([[Definizione di Pressione Macroscopica#^a4dad7|2]]) posso dividere a destra per $A \Delta z$ e ottenere
$$
\rho g = \frac{P(z)-P(z+\Delta z)}{\Delta z}
$$
Cos'è questa, facendo tendere $\Delta z \sim \text{d}z \to 0$? Questa è proprio la *definizione di derivata*, che ci dà
$$
\rho g = - \frac{\text{d} P}{\text{d}z}
$$
che ci dà l'equazione differenziale
$$
\boxed{\frac{\text{d}P }{\text{d}z }= -\rho g}
$$
che è detta *l'equazione differenziale dell'equilibrio idrostatico*. Questo risultato vale per un *fluido qualsiasi*: sia fluidi comprimibili che non comprimibili. $\blacksquare$

# 2. Legge di Stevino
Assumendo *fluidi incomprimibili* (quindi a *densità costante*) abbiamo la *legge di Stevino*.

#Corollario 
> [!cor] legge di Stevino
> La pressione esercitata su un *oggetto* in un *fluido incomprimibile* ad altezza $h$ è
> $$
> P(z)=P_0 - \rho g z
> $$
^27cdee

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^27cdee]]
Si tratta banalmente di integrare l'equazione dell'*equilibrio idrostatico*, da cui si ha la tesi. $\blacksquare$

Adesso vediamo qualche esempio.

#Esempio 
> [!exm] fluido in acqua
> Un'oggetto *sommerso* in acqua (con la superficie non coperta, quindi subisce la pressione atmosferica) subisce la pressione di *due atmosfere* ad altezza $L$ (in realtà $-L$ ma sono dettagli). Allora si ha che
> $$
> P(-L)=2P_{\text{atm.} }=P_{\text{atm.} }+\rho g L
> $$
> da cui si ricava
> $$
> \boxed{L=\frac{P_{\text{atm.} } }{\rho g}\simeq 10.3 \ \text{m} }
> $$

Sostanzialmente abbiamo un *andamento lineare*. Notiamo che vale anche la *direzione contraria*? Ovvero ad altezze positive abbiamo una *"pressione negativa"*, che spinge l'oggetto in sù.

#Esempio 
> [!exm] colonna d'acqua
> Una colonna d'acqua è dotato di *fori* in basso e di un *contenitore vuoto* in alto. Assumendo che sui fori si eserciti la *pressione atmosferica*, notiamo che l'acqua tende a *salire* fino a circa $10 \ \text{m}$.
> 
> Questo è dovuto al fatto che nel *vuoto* non c'è nessuna forza, se non quella esercitata dalla *pressione atmosferica* (che poi si trasmette verso il vuoto, per Pascal).

**FIGURA 2.1.** (*Colonna d'acqua*)
![[Pasted image 20240513202815.png|500]]

# 3. Nota sul Vuoto
Facciamo un breve addendum sul vuoto, che può portare a *conseguenze controintuitive*. Vediamo ad esempio l'*esperimento di Magdeburg*

**Esperimento di Magdeburg.** Supponiamo di avere *due emisferi* che compongono una *sfera*. In questa sfera c'è il *vuoto* (ovvero non ci sono forze esterne). Adesso tentiamo di *aprire* questa sfera, esercitando delle *forze*. Tuttavia, applicando anche *tantissima forza* (usando tipo degli *elefanti*), non si riesce a separare questi emisferi! Accipicchia, ma cosa c'è? Il fatto è che la *pressione atmosferica* spinge i due *emisferi* ad unirsi il quanto possibile, dal momento che non c'è nessuna *forza che si oppone*.
![[Pasted image 20240513203559.png|500]]
