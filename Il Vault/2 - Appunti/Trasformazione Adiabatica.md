---
data: 2024-05-15
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Trasformazione Adiabatica
tipologia: appunti
stato: "1"
capitolo: Termodinamica
---
- - -
*Trasformazione adiabatica (o isentropica): definizione, calcolo dell'entropia, derivazione dell'equazione caratteristica sul piano PV. Proprietà qualitativa delle trasformazioni adiabatiche sul piano PV.*
- - -
# 0. Voci correlate
- [[Calcolo di Entropia per un Gas Perfetto]]
- [[Definizione di Entropia]]
- [[Capacità Termica e Calore Specifico]]
# 1. Trasformazione Adiabatica (o Isentropica)
#Definizione 
> [!def] trasformazione adiabatica
> Una *trasformazione termodinamica* si dice *"adiabatica"* o *"isentropica"* se il calore scambiato è nullo.
> $$
> \delta Q = 0 \implies T \ \text{d}S=0 \implies \text{d}S=0
> $$

#Proposizione 
> [!prp] proprietà della trasformazione adiabatica
> Abbiamo le seguenti *equazioni di stato* per una trasformazione adiabatica.
> i. *Piano TS*
> $$
> S \in \mathbb{R}, S=n c_V \ln T + nR \ln V + S_0
> $$
> ii. *Piano PV*
> $$
> P(V)=\mathcal C V^{-\gamma}, \gamma:=\frac{c_P}{c_V}, \mathcal{C} \in \mathbb{R}
> $$
> oppure
> $$
> PV^{\gamma}=\mathcal C
> $$
> iii. *Equazioni miste*
> $$
> \begin{gather}
> TV^{\gamma-1}=\mathcal C \\ P^{1-\gamma}T^{\gamma} = \mathcal C
> \end{gather}
> $$
> con $S_0, \mathcal{C}$ delle *costanti* determinate dal sistema termodinamico.
^309f27

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^309f27]]
Per il lemma sull'entropia dei gas perfetti si ha già la prima tesi. Adesso facciamo i calcoli con questa espressione: in particolare tentiamo di manipolare quest'ultima espressione, in modo tale da ottenere una relazione che leghi il *volume* e la *temperatura*.
$$
\begin{align}
\mathbb{R} \ni S &=nc_V \ln T + nR \ln V + S_0 \\
&=\frac{n}{R}\left(\ln T^{\frac{c_V}{R} }+ \ln V\right)+ S_0 \\\mathbb{R} \ni \tilde{S} &= VT^{\frac{c_V}{R} } \ (\ast)
\end{align}
$$
Adesso per vedere il valore $\frac{c_V}{R}$, consideriamo la *legge di Mayer*, che ci dice
$$
R=c_P-c_V\implies \frac{c_V}{R}=\frac{c_V}{c_P-c_V}=\frac{1}{\frac{c_P}{c_V}-1}=\frac{1}{\gamma-1}
$$
chiamando $\gamma = \frac{c_P}{c_V}$. Adesso proseguiamo con i nostri calcoli, usando la *legge dei gas perfetti*, trasformando $(\ast)$ in un'espressione del tipo $F(P,V)$.
$$
\begin{align}
\tilde{S}&=VT^{\frac{1}{\gamma-1} } \\ &=V\left(\frac{PV}{nR}\right)^{\frac{1}{\gamma-1} } 
\\
&=V(PV)^{\frac{1}{\gamma-1} }=V^{\frac{\gamma}{\gamma-1} }P^{\frac{1}{\gamma-1} } \\
\mathbb R \ni \bar{S}&= PV^{\gamma}
\end{align}
$$
che è la tesi finale. Per ottenere *iii.* bisogna *"giocare"* con queste equazioni ulteriormente. $\blacksquare$

