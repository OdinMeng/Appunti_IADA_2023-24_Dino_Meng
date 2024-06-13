---
data: 2024-06-04
corso:
  - "[[Analisi Matematica II]]"
argomento: Misura e Integrazione su Superfici
tipologia: appunti
stato: "1"
capitolo: Calcolo Integrale in più Variabili
---
- - -
*Misura e integrazione su superfici: aree di superfici regolari, integrali di superfici su campi scalari.*
- - -
# 0. Voci correlate
- [[Superficie Regolare in Forma Parametrica]]
- [[Cenni sul Prodotto Vettoriale]]
# 1. Area di Superficie
**MOTIVAZIONE.** Vogliamo misurare le *superfici*, come fatto con la *lunghezza delle curve*. Partiamo dal seguente esempio: siano $\underline{a}, \underline{b} \in \mathbb{R}^2$ che formino una *base* per $\mathbb{R}^2$ (ovvero sia linearmente indipendenti che un sistema di generatori). Da qui si ha un *parallelogramma* generato da questi due vettori avente parametrizzazione $\sigma:K = [0,1]^2 \longrightarrow \mathbb{R}^2$ definito come $\sigma(u,v):=u\underline{a}+u\underline{b}$ ([[Superficie Regolare in Forma Parametrica#^3eefbb|1]]), da cui si ha il sostegno $\Sigma:=\sigma([0,1]^2)$ Per calcolare l'area $A(\Sigma)$ si calcola banalmente il valore assoluto del determinante della *matrice dei vettori* ([[Determinante#^52f4e0|2]]) definita come
$$
A=\begin{pmatrix}a_1 & b_1 \\ a_2 & b_2\end{pmatrix}
$$
Dopodiché possiamo *"generalizzare"* la seguente notazione come
$$
A(\Sigma)=\left|\det\begin{pmatrix}a_1 & b_1 \\ a_2 & b_2\end{pmatrix}\right| = \lVert \underline{a} \times \underline{b} \rVert = \iint_{K}\lVert \sigma_u \times \sigma_v \rVert \text{ d}u \text{ d}v
$$
Adesso vediamo di generalizzare il discorso sulle *superfici regolari*.

**FIGURA 1.1.** (*Discorso preliminare*)
![[Pasted image 20240604102328.png]]

#Definizione 
> [!def] area di superficie
> Sia $\sigma: K \subseteq \mathbb{R}^2 \longrightarrow  \mathbb{R}^3$ una *superficie regolare in forma parametrizzata* ([[Superficie Regolare in Forma Parametrica#^3eefbb|1]]) (dunque ammettono un *piano tangente*, [[Superficie Regolare in Forma Parametrica#^8e6653|2]]) con $K$ un *insieme compatto-misurabile secondo Peano-Jordan* ([[Cenni alla Misura di Peano-Jordan#^325d78|3]]). 
> 
> Allora si definisce l'area del *sostegno* $A(\Sigma=\sigma(K))$ come l'integrale
> $$
> \boxed{A(\Sigma)=\iint_K \lVert \sigma_u(u,v)\times \sigma_v(u,v) \rVert \text{ d}u\text{ d}v}
> $$

#Osservazione 
> [!rmk] differenza dal parallelogrammo
> Notiamo che il *parallelogrammo* $\sigma:\mathbb{R}^2 \longrightarrow \mathbb{R}^2$ presentato all'inizio in realtà sarebbe una funzione del tipo $\sigma:\mathbb{R}^2 \longrightarrow \mathbb{R}^3$, solo che la *terza variabile* è bloccata, in quanto *costante* (quindi stavamo guardando la restrizione del codominio).

# 2. Integrale di Superficie
Generalizziamo quanto detto sulle *aree di superficie*, "mettendo in mezzo" i campi scalari.

#Definizione 
> [!def] integrale di superficie su campo scalare
> Sia $\sigma: K \subseteq \mathbb{R}^2 \longrightarrow \mathbb{R}^3$ una *superficie regolare* con $K$ *compatto-misurabile* e sia $f: E \subseteq \mathbb{R}^2 \longrightarrow \mathbb{R} \in \mathcal{C}^0(E)$ tali che $\Sigma=\sigma(K) \subseteq E$ (ovvero i domini devono essere *"compatibili"* tra di loro).
> 
> Allora si definisce l'*integrale di superficie* di $f$ in $\sigma$ come
> $$
> \boxed{\iint_\Sigma f \text{ d}\sigma = \iint_K f(\sigma(u,v))\cdot \lVert \sigma_u \times \sigma_v \rVert \text{ d}u \text{ d}v}
> $$

