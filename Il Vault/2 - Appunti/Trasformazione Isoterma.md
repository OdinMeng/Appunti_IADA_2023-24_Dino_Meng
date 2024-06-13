---
data: 2024-05-15
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Trasformazione Isoterma
tipologia: appunti
stato: "1"
capitolo: Termodinamica
---
- - -
*Trasformazione isoterma. Modello tipico, definizione sistematica.*
- - -
# 0. Voci correlate
- [[Primo Principio della Termodinamica]]
- [[Definizione di Calore e Lavoro Termodinamico]]
- [[Legge dei Gas Perfetti]]
# 1. Modello Tipico della Trasformazione Isoterma
**MODELLO.** (*Trasformazione isoterma*)
Supponiamo di avere un *pistone libero* posto su una *fonte di calore*, così grande da rendere la *temperatura di equilibrio* $T$ fissa (infatti si dice che abbiamo un *"serbatoio termico infinito"*). 
![[Pasted image 20240515165709.png|500]]
Quindi aggiungo *calore*, senza far *variare la temperatura* $T$. Da qui abbiamo un cambiamento sia nella *pressione* che nel *volume*. Da qui ci sono una serie di conseguenze
i. *Energia interna*
Dato che l'energia interna si definisce tramite la *variazione della temperatura* $\Delta T$ ([[Equilibrio Termico#^886c25]]), si ha che essa è nulla. Infatti
$$
\Delta U = n c_v \Delta T = 0
$$

^3f2bdb

ii. *Lavoro e Calore*
Allora, per il *primo principio della termodinamica* ([[Primo Principio della Termodinamica#^9fdbb7]]), qui si ha che il *lavoro* e il *calore* sono la stessa quantità, solo che sono *opposte*.
$$
Q=-W
$$

^090019

iii. *Cambiamento della pressione al variare del volume*
Per la *legge dei gas perfetti* ([[Legge dei Gas Perfetti#^866193]]), abbiamo che vale
$$
PV=nRT \implies \boxed{P=\frac{nRT}{V} }
$$
ovvero un pezzo di *iperbola*.
![[Pasted image 20240515165841.png|500]]
iv. *Lavoro*
Adesso integriamo $P(V)$ rispetto alla variazione infinitesimale del volume $\text{d}V$, dandoci
$$
W:=-\int_i^f P \text{ d}V=-\int_{V_i}^{V_f}\frac{nRT}{V}\ \text{d}V=-nRT \ln V \bigg |_{V_i}^{V_f}=\boxed{-nRT \ln \frac{V_f}{V_i} }
$$
In definitiva abbiamo anche
$$
Q=-W \implies \boxed{Q=nRT \ln \frac{V_f}{V_i} }
$$

# 2. Definizione di Trasformazione Isotermica
#Definizione 
> [!def] trasformazione isotermica
> Si dice *trasformazione isotermica* una *trasformazione termodinamica* tale che la variazione della temperatura $\Delta T$ sia nulla. Ovvero, la *pressione* dipende solamente dal volume.
> $$
> P(V)=\frac{nRT}{V}
> $$

#Proposizione 
> [!prp] proprietà della trasformazione isotermica
> Abbiamo che la trasformazione isotermica gode delle seguenti proprietà.
> i. *Energia interna*
> $$\Delta U =0$$
> ii. *Lavore e calore*
> $$
> W=-nRT \ln\frac{V_f}{V_i}, Q=-W
> $$

^ea6998

