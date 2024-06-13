---
data: 2024-04-18
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Teorema Lavoro-Energia Cinetica
tipologia: appunti
stato: "1"
capitolo: Energia e Quantità di Moto
---
- - -
*Teorema Lavoro-Energia Cinetica: enunciato, dimostrazione matematica. Osservazioni ed esempi di applicazione.*
- - -
# 0. Voci correlate
- [[Principi della Dinamica]]
- [[Energia Cinetica]]
- [[Definizione di Lavoro]]
# 1. Teorema Lavoro-Energia Cinetica
#Teorema 
> [!thm] teorema lavoro-energia cinetica (teorema L-K)
> Supponiamo che un corpo si stia muovendo ad istanti $i, f$ con le rispettive velocità $v_i$, $v_f$. Allora vale la seguente:
> $$
> \boxed{\sum W = \Delta K}
> $$
^544309

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^544309]]
*N.B. La dimostrazione è importantissima*
Consideriamo la *seconda legge di Newton*, che ci dice
$$
\sum \vec{F} = m \vec{a}
$$
Allora, considerando uno *spostamento infinitesimale* $d\vec{r}$, posso calcolare $dW$ come segue.
$$
\begin{align} dW &= \sum \vec{F} \cdot d\vec{r} \\ &= m\vec{a}\cdot \text{d} \vec{r} \\
&= m \vec{a} \cdot \vec{v} \cdot \text{d}t \\ &= m \left(\frac{1}{2}\frac{1}{\text{d}t}v^2\right) \text{d}t
\end{align} 
$$
Poiché $\sum W = \int dW$, ho
$$
\sum W=\int_i^f m \left(\frac{1}{2}\frac{1}{\underline{\cancel{\text{d}t}}}v^2\right) \underline{\cancel{\text{d}t}} = \frac{1}{2}m\underbracket{\int_i^f v^2}_{\Delta (v^2)}=\frac{1}{2}m\Delta(v^2)
$$
che ci dà il risultato finale
$$
\boxed{\sum W = \Delta K}
$$
che è la tesi. $\blacksquare$

**OSSERVAZIONI.** Adesso poniamo delle *osservazioni* su questo teorema.

#Osservazione 
> [!rmk] osservazioni sul teorema L-K
> Osserviamo questo teorema.
> i. Questo teorema è una *conseguenza diretta* della *seconda legge di Newton*: infatti stiamo considerando sempre dei *punti materiali*.
> ii. Questa non è la *conservazione dell'energia*, anche se in casi importanti avremmo comunque dei *risultati uguali*.
> iii. Per il lavoro $\sum W$ non si intende assolutamente il *lavoro* nel *senso termodinamico*!

# 2. Esempi
Andiamo a vedere degli esempi in cui applichiamo questo teorema.

#Esempio 
> [!exm] la distanza di arresto
> Prendiamo un caso noto della cinematica: abbiamo una macchina che sta frenando, con l'*attrito dinamico* e con la velocità iniziale $v_i$.
> 
> Per calcolare la *distanza di arresto*, possiamo sfruttare questo *teorema*: l'idea è quella di *calcolare il lavoro totale*, porlo uguale alla *differenza dell'energia cinetica* e ricavare la distanza $d$. Possiamo fare questo dato che l'*unica forza agente sul corpo* che sia parallela alla frenata è la forza d'attrito $F_d=\mu_d g$.
> 
> Allora ho
> $$
> \sum W = W_D = 0-\frac{1}{2}mv_i^2
> $$
> Ricordandoci che il lavoro è di *segno negativo*, dal momento che ho *versi opposti*, procedo con i calcoli.
> $$
> W_D = -\mu_d g \cdot d = -\frac{1}{2}mv_i^2
> $$
> che ci dà il risultato finale
> $$
> d=\frac{mv_i^2}{2\mu_d g^2}
> $$
