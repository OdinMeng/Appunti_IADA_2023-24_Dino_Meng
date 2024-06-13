---
data: 2024-06-02
corso:
  - "[[Analisi Matematica II]]"
argomento: Formule di Riduzione in 3D
tipologia: appunti
stato: "1"
capitolo: Calcolo Integrale in più Variabili
---
- - -
*Tecniche integrazione in tre variabili: formule di riduzione per corde e per sezioni.*
- - -
# 0. Voci correlate
- [[Teorema di Fubini]]
- [[Integrazione di Riemann su n-rettangoli]]
# 1. Riduzione per Corde
**IDEA.** Vogliamo avere un'equivalente del *teorema di Fubini* nel caso $\mathbb{R}^{N=3}$. Dato che ho più *"gradi di liberta"* nel fissare i punti o corde, ho più metodi. Partiamo dal caso in cui iniziamo con la *corda*.

#Teorema 
> [!thm] formula di riduzione per corde
> Sia $R=\bigtimes_{i=1,2,3} [a_i, b_i]$ un *3-rettangolo*. Sia $f:R\subseteq \mathbb{R}^3 \longrightarrow \mathbb{R} \in \mathcal{R}(E)$.
> 
> Prendendo il *"complementare della corda"*, ovvero l'insieme $(\overline{x}, \overline{y}) \in S= [a_1,b_1] \times [a_2,b_2]$, ho che la *restrizione* di $f$ su questa corda $f_{|(\overline{x},\overline{y})}$ è *integrabile secondo Riemann* su $[a_3,b_3]$ e vale la formula
> $$
> \boxed{
> \iint_S \left(\int_{a_3}^{b_3} f(z) \ \text{d}z \right) \text{d}x \text{ d}y = \iiint_R f(x,y,z) \ \text{d}x \text{ d}y \text{ d}z
> }
> $$
> Ovvero l'*integrale iterato* ha lo stesso valore dell'*integrale triplo*.
^0f97d0

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^0f97d0]]
Omessa. Si può facilmente convincere di questo teorema con un'approccio geometrico-visivo (vedere l'osservazione sottostante). $\blacksquare$

#Osservazione 
> [!rmk] osservazioni geometriche
> L'idea di questo teorema è quello di *prendere* la *corda* $[a_3,b_3]$ e di calcolare la sua misura integrandolo, poi per far variare sul resto del dominio $S$. Quindi stiamo facendo ricondurre l'integrale triplo in un *integrale singolo* poi in un *integrale doppio*; $\iiint \to \iint \circ \int$.
> 
> Da queste considerazioni abbiamo che:
> - Questo teorema è facilmente generalizzabile *per induzione* su $\mathbb{R}^N$
> - Questo teorema vale ugualmente scambiando le assi (o le basi canoniche) $x,y,z$.
> $$
> $$

**FIGURA 1.1.** (*Riduzione per corde*)
![[Pasted image 20240602165915.png]]

# 2. Riduzione per Sezioni
Adesso, al posto di prendere *"corde unidimensionali"* prendiamo *"sezioni bidimensionali"*.

#Teorema 
> [!thm] riduzione per sezioni
> Sia $f:R=\times_{i=1,2,3} [a_i, b_i] \subseteq \mathbb{R}^3 \longrightarrow \mathbb{R} \in \mathcal{R}(R)$, con $\bar{z} \in [a_3, b_3]$ fissato. 
> 
> Allora considerando la restrizione $f_{| \{\bar z\} }$ ho che essa è *integrabile secondo Riemann* sulla *sezione* $S=[a_1,b_1] \times [a_2, b_2]$ vale la formula
> $$
> \boxed{\int_{a_3}^{b_3} \left( \iint_S f(x,y) \text{ d} x \text{ d}y\right)\text{ d}z = \iiint_R f(x,y,z) \text{ d}x\text{ d}y\text{ d}z
> }
> $$
^6a5a8a

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^6a5a8a]]
Analogo al teorema precedente. Le osservazioni si applicano ugualmente. $\blacksquare$

**FIGURA 1.1.** (*Riduzione per sezioni*)
![[Pasted image 20240602170944.png]]