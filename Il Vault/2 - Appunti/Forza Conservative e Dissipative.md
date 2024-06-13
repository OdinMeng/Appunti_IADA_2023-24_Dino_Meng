---
data: 2024-04-18
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Forza Conservative e Dissipative
tipologia: appunti
stato: "1"
capitolo: Energia e Quantità di Moto
---
- - -
*Definizione di forza conversativa. Esempi di forze non-conservative (dissipative), esempi di forze conservative. Osservazione: in realtà tutte le forze sono conservative, da un punto di vista microscopico.*
- - -
# 0. Voci correlate
- [[Lavoro di Forze Notevoli]]
# 1. Definizione di Forza Conservativa
Consolidiamo l'osservazione posta quando abbiamo calcolato le *il lavoro* delle *forze* ([[Lavoro di Forze Notevoli#^20a03c|1]]).

#Definizione 
> [!def] forza conservativa
> Una forza si dice *conservativa* se valgono una delle condizioni equivalenti:
> $$
> \boxed{\begin{align}
> & \int_i^f \vec{F} \cdot \text{d}\vec{r} \text{ indipendente dal percorso }\text{d}\vec{r} \\
> &\Updownarrow \\
> & \int_i^f \vec{F}\cdot \text{d}\vec{r}+\int_f^i \vec{F}\cdot \text{d}\vec{r} = 0 \\ & \Updownarrow \\ & \oint  \vec{F} \cdot \text{d}\vec{r} = 0 \\ &\Updownarrow \\&\exists U:\mathbb{R}^3 \longrightarrow \mathbb{R} \ | \ \vec{F}=\nabla U(x,y,z)
> \end{align}}
> $$
> Note sulle ultime due condizioni:
> - Il simbolo $\oint$ è l'*integrale del percorso chiuso*
> - Il simbolo $\nabla$ è il *gradiente* ([[Gradiente di Campi Scalari#^c35d56|1]]), ovvero il vettore che punta ad un *punto critico* della funzione $U$. Inoltre, la funzione $U$ sarà nota come l'*energia potenziale*.
> 
> In caso contrario, la forza si dice *"forza dissipativa"*. Ne faremo un commento in seguito

^afc4ee

# 2. Esempi di Forze Conservative
#Esempio 
> [!exm] forze dissipative
> Le forze dissipative sono le seguenti:
> - Attrito (infatti $W = \mu N s)$
> - Resistenza dei fluidi
> - Forza compiuta da una persona (infatti siamo tecnicamente delle *"macchine termiche"*)
> 
> Poi ci sono altre forze dissipative...

#Esempio 
> [!exm] forza conservative
> Le forze conservative possono essere le seguenti.
> - Elastica
> - Peso
> - Le forze fondamentali (elettrica, gravitazionale e magnetica)
> 
> Eccetera...

# 3. Le forze dissipative esistono?
#Osservazione 
> [!rmk] le forze dissipative sono una mera illusione
> Osserviamo che una *condizione necessaria* per l'esistenza di *forze non conservative* è quella di essere in un *punto di vista macroscopico*: questo perché in realtà, dal punto di vista microscopiche, le forze dissipative non esistono. Le energie sono *sempre* conservate, solo in una maneira più disordinata.
> 
> Citiamo il fisico R. Feynman, che ci dice le seguenti parole ([[Feynman Sulle Forze Dissipative|brano integrale]])
> 
> *"We have spent a considerable time discussing conservative forces; what about nonconservative forces? We shall take a deeper view of this than is usual, and state that there are no nonconservative forces! As a matter of fact, all the fundamental forces in nature appear to be conservative. This is not a consequence of Newton’s laws. In fact, so far as Newton himself knew, the forces could be nonconservative, as friction apparently is. When we say friction apparently is, we are taking a modern view, in which it has been discovered that all the deep forces, the forces between the particles at the most fundamental level, are conservative."*
> 
> Come esempio a sostegno di questa argomentazione possiamo citare un'esempio dello stesso autore.
> 
> *"As another example, when friction is present it is not true that kinetic energy is lost, even though a sliding object stops and the kinetic energy seems to be lost. The kinetic energy is not lost because, of course, the atoms inside are jiggling with a greater amount of kinetic energy than before, and although we cannot see that, we can measure it by determining the temperature. Of course if we disregard the heat energy, then the conservation of energy theorem will appear to be false."*
