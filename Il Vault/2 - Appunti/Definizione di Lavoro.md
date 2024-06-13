---
data: 2024-04-18
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Definizione di Lavoro
tipologia: appunti
stato: "1"
capitolo: Energia e Quantità di Moto
---
- - -
*Definizione di base di Lavoro compiuto da una Forza. Osservazioni, esempi.*
- - -
# 0. Voci correlate
- [[Integrabilità secondo Riemann]]
- [[Prodotto Scalare]]
# 1. Definizione di Lavoro
Andiamo a definire l'altra *misura essenziale*, ovvero il *lavoro*.

#Definizione 
> [!def] lavoro compiuto da una forza rispetto ad uno spostamento
> Ho un oggetto con *punto di applicazione* di *forza* $\vec{F}$ e con uno *spostamento* $\Delta \vec{r}$ (non dev'essere *necessariamente* causata dalla forza!). 
> 
> Si definisce il *lavoro compiuto dalla forza rispetto al suo spostamento* come il *prodotto scalare*
> $$
> W:= \vec{F} \cdot \Delta \vec{r}
> $$
> In generale, conoscendo le *istanze iniziali* $i, f$ abbiamo
> $$
> W:=\int_{i}^f \vec{F} \cdot d\vec{r}
> $$
> (in questo caso *considero tutti i spostamenti come degli spostamenti infinitesimi*)
> 
> Il lavoro viene misurato in *Joule* (da dimostrare per conto proprio).

^5bf065

#Osservazione 
> [!rmk] il lavoro e l'energia cinetica hanno la stessa misura
> Da osservare che il *lavoro* $W$ e l'*energia cinetica* $K$ hanno la stessa misurazione. Infatti, andremo a vedere che sotto certe condizioni potremmo *"convertire"* il lavoro $W$ in energia cinetica $K$ con un teorema.

#Proposizione 
> [!prp] le proprietà del prodotto scalare
> Ricordiamoci le seguenti proprietà del prodotto scalare.
> i. Se la *forza applicata* e la *distanza* sono *parallele*, allora si può calcolare il prodotto scalare come un semplice prodotto
> $$
> F \parallel \Delta r \implies W=F\Delta r
> $$
> ii. Se sono invece *ortogonali*, il lavoro è nullo
> $$
> F \perp \Delta r \implies W=0 \text{ J}
> $$
> iii. Se sono invece *opposti*, il lavoro è di segno negativo
> $$
> F \text{ opposto a }\Delta r \implies W  = -F \cdot \Delta \vec{r}
> $$

# 2. Esempi
Applichiamo questa definizione con qualche esempio noto della *dinamica*.

#Esempio 
> [!exm] il piano inclinato con la corda
> Supponiamo di avere un *blocco su un piano inclinato trascinato da un cavo su una distanza* $d$. Supponiamo inoltre di conoscere l'angolo di inclinazione $\theta$, la tensione $T$ e la costante di gravità $g$ (*figura 2.1.*).
> 
> Vogliamo calcolare i *lavori totali* di tutte le forze agenti sul corpo.
> 
> Prima di tutto troviamo che le uniche e sole forze agenti sul corpo sono la *forza normale*, *forza tensione* e la *forza peso*. Li chiameremo $N, T, P$.
> 
> Adesso calcoliamo i lavori compiuti da queste forze
> $$
> \left\{\begin{align}
> & W_T = T \cdot d = Td \\
> & W_P = \vec{F}_g \cdot \Delta \vec{r}=(F_g)\cdot \hat{i}' \cdot d = -mg \sin (\theta) d \\
> & W_N = 0 \ \text{(vincolo geometrico, dato che } N \parallel d \text{)}
> \end{align}\right.
> $$
> Allora ho
> $$
> \boxed{\sum W = (T-mg\sin\theta)d}
> $$

**FIGURA 2.1.**
![[Pasted image 20240418202515.png]]
