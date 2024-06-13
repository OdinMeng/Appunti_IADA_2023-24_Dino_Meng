---
data: 2024-05-12
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Deformazione dei Corpi
tipologia: appunti
stato: "1"
capitolo: Solidi e Fluidi
---
- - -
*Deformazione dei corpi. Classificazione delle deformazioni: deformazione di trazione, deformazione da taglio. Deformazione in regime elastico e plastico. Modulo di Young e "Sheer modulus". Coefficiente di Poisson. Bulle modulus.*
- - -
# 0. Voci correlate
- [[Forze sui Corpi Solidi]]
# 1. Deformazione di trazione e da taglio
#Definizione 
> [!def] deformazione di trazione
> Supponiamo di avere un cubo di *altezza* (o lunghezza) $l$. Esercitando uno *sforzo di tensione* $\sigma_N$ causo un cambiamento di questa *altezza* con una differenza di $\Delta l$ (quindi viene schiacciato da una direzione).
> 
> Si definisce la *deformazione di trazione* (*"normal strain"*) come la quantità
> $$
> \varepsilon_t = \frac{\Delta l}{l}
> $$

**FIGURA 1.1.** (*Deformazione di trazione*)
![[Pasted image 20240512214528.png|500]]

#Definizione 
> [!def] sforzo da taglio
> Supponiamo di avere un cubo di *altezza* (o lunghezza) $l$. Esercitando uno *sforzo di taglio* $\sigma_T$ causo uno spostamento $\Delta x$ nella direzione spinta.
> 
> Si definisce la *deformazione di taglio* (*"sheer strain"*) come la quantità
> $$
> \varepsilon_s = \frac{\Delta x}{l}
> $$

**FIGURA 1.2.** (*Deformazione da taglio*)
![[Pasted image 20240512215000.png|500]]

# 2. Regime elastico e plastico
Quando deformiamo un oggetto, abbiamo *due comportamenti*. Un caso è quando il *corpo torna alla sua forma originaria*, una volta che lo sforzo non si è più applicato. Oppure quello che succede è che ho causato così tanta *deformazione* che il corpo non torna più alla sua forma originale.
Come prima cosa deduciamo che lo *sforzo* $\sigma$ è proporzionale alla deformazione $\varepsilon$; infatti avrei una specie di *"legge di Hooke"*.
![[Pasted image 20240512220159.png]]

#Definizione 
> [!def] regime plastico ed elastico di una deformazione
> Sia $\varepsilon(\sigma)$ la deformazione causata da uno sforzo. Si dice che è in *regime elastico* se è una retta (quindi il corpo poi torna alla forma originaria), se no si dice che è in *regime plastico* (il corpo conserva la sua forma deformata), fino quando non si ha la *frattura*.

#Definizione 
> [!def] modulo di Young e Sheer modulus
> Ho dei valori per cui posso dire *fino a quanto posso comprimere* un corpo. Abbiamo:
> $$
> \frac{\sigma_t}{\varepsilon_t}=Y
> $$
> la *"costante di Young"* e poi
> $$
> \frac{\sigma_s}{\varepsilon_s}=S
> $$
> il *modulo di taglio* (*"Sheer modulus"*). Poi il *coefficiente di Poisson* descrive il rapporto tra la *deformazione di taglio* e di *trazione*.
> $$
> \frac{\varepsilon_s}{\varepsilon_t} = \nu
> $$
> Infine se voglio considerare pure il volume ho il *"Bulle modulus"*, definito come
> $$
> B=\frac{\Delta \rho}{\Delta V}
> $$
> 
> Per vedere questi valori ho le tavole.

#Definizione 
> [!def] densità
> Si definisce la densità come
> $$
> \rho:=\frac{m}{V}
> $$

