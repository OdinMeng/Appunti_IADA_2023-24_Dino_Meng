---
data: 2024-04-02
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Forza Elastica
tipologia: appunti
stato: "1"
capitolo: Dinamica
---
- - -
*Definizione di forza elastica. Formula matematica per descrivere la forza elastica al variare della posizione $x$ (legge di Hooke).*
- - -
# 0. Voci correlate
- [[Diagramma di Corpo Libero]]
- [[Formula di Taylor]]
- [[Definizione di Massa e di Forza]]
# 1. Definizione di Forza Elastica
#Definizione 
> [!def] forza elastica
> Supponiamo di avere un'oggetto fermo (o in quiete) attaccato ad una molla, con una distanza $x$ dall'origine della molla (*figura 1.1.*). 
> 
> Allora è naturale pensare che, esercitando un ulteriore spostamento $\Delta x$, abbiamo una forza che spinge l'oggetto *indietro* o *avanti*, a seconda del valore $\Delta x$.
> 
> Questa forza si dice *forza elastica*.

**FIGURA 1.1.** (*Situazione iniziale*)
![[Pasted image 20240402195846.png]]

# 2. Legge di Hooke
#Teorema 
> [!thm] legge di Hooke
> La *forza elastica* esercitata da una molla si calcola come il seguente
> $$
> F_x = -k\cdot \Delta x
> $$
> dove $k$ è una *costante di proporzionalità* (detta *rigidità*), misurata in $\frac{\text{kg} }{\text{s}^2}$.

#Osservazione 
> [!rmk] la legge di Hooke è un'approssimazione delle funzioni trigonometriche
> Notiamo che la *legge di Hooke* non è altro che la *prima espansione di Taylor*. Infatti, per la *formula di Taylor* ([[Formula di Taylor#^556164|1]] o [[Definizione di Serie di Taylor#^6b0724|2]]) abbiamo che
> $$
> \sin x \simeq x, \Delta x \to 0
> $$
> Quindi, possiamo rappresentare la forza elastica con questa funzione? Sì, questo avrebbe senso con la nostra realtà; infatti, se tirassimo l'oggetto attaccato alla molla *"troppo"* in avanti o indietro, la *molla si spezzerebbe* (*figura 2.1.*). 
> 
> Tuttavia, questo renderebbe tutto più complicato da un punto di vista matematico, rendendo preferibile la rappresentazione della forza elastica secondo la *legge di Hooke*.

**FIGURA 2.1.** (*Grafico più realistico dell'andamento della forza elastica*)
![[Pasted image 20240402200046.png]]
