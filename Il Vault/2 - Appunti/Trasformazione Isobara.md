---
data: 2024-05-15
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Trasformazione Isobara
tipologia: appunti
stato: "1"
capitolo: Termodinamica
---
- - -
*Trasformazione isobara: modelli tipico, caratteristiche. Definizione specifica.*
- - -
# 0. Voci correlate
- [[Legge dei Gas Perfetti]]
- [[Primo Principio della Termodinamica]]
- [[Definizione di Calore e Lavoro Termodinamico]]
- [[Equilibrio Termico]]
# 1. Modello Tipico della Trasformazione Isobara
Consideriamo una *trasformazione* dove non c'è nessuna *variazione di pressione*. In particolare consideriamo il seguente *"modello tipico"* per ricavare le caratteristiche

**MODELLO.** (*Trasformazione isobara*)
Prendiamo un *pistone libero*, su cui poggiamo un cubetto, tutto poggiato su una *piastra calda*. Il sistema è in *equilibrio meccanico*.
![[Pasted image 20240515144000.png|500]]
Ho che la pressione del gas è la *pressione atmosferica* e *la pressione esercitata dalla forza peso del cubo*, ovvero
$$
P=P_{\text{atm} }+\frac{F_P}{A}
$$
(in realtà non c'importa tanto, basta che sia costante). Adesso aumentiamo la *temperatura* con una variazione $\Delta T$.  Da qui abbiamo una cascata di effetti.
i. *Variazione di volume*
Dato che sto supponendo la *pressione costante*, il gas deve *espandersi* dal momento che ho maggior *movimento delle particelle*. Per determinare tale variazione di volume $\Delta V$ usiamo la *legge dei gas perfetti*, che ci dice
$$
PV=nRT
$$
Dato che $P$ è *costante*, possiamo isolare la $V$ ottenendo
$$
V = \frac{nRT}{P}
$$
ovvero abbiamo la funzione costante
![[Pasted image 20240515144303.png|500]]
e passando all'incremento si ha
$$
\Delta V = \frac{nR}{P}\Delta T
$$
ii. *Lavoro compiuto sul gas*
Adesso calcolare il lavoro è semplice, si tratta di fare base per altezza.
$$
W=-P \Delta V = -nR\Delta T
$$
iii. *Energia interna e calore scambiato*
Infine vogliamo considerare la *variazione totale dell'energia interna*. Considerando di aver a che fare con uno *scambio di calore*, si ha
$$
\Delta U = nc_v \Delta T
$$
Per il *primo principio della termodinamica* si ha anche
$$
\Delta U = Q+W
$$
Quindi il calore scambiato è
$$
Q=n(R+C_v)\Delta T
$$
Ricordiamoci che abbiamo pure di avere *per definizione*
$$
Q=nc_P \Delta T
$$
quindi combinando tutto si ha
$$
c_P = R+c_V
$$
che è proprio la *relazione di Mayer* ([[Capacità Termica e Calore Specifico#^922961]]).

# 2. Definizione di Trasformazione Isobara
#Definizione 
> [!def] trasformazione isobara
> Si dice *trasformazione isobara* una *trasformazione termodinamica* che mantiene una *pressione costante*. Ovvero, la *funzione* volume dipende solo dalla temperatura
> $$
> V(T)=V=\frac{nR}{P}T
> $$
> ovvero sul *diagramma PV* è costante.

#Proposizione 
> [!prp] caratteristiche della trasformazione isobara
> Si ha che per una trasformazione isobara valgono che:
> i. *Il lavoro* si calcola come
> $$
> W=-P\Delta V = -nR \Delta T
> $$
> ii. *Il calore* si calcola come
> $$
> Q=n(R+c_V)\Delta T=nc_P \Delta T
> $$

