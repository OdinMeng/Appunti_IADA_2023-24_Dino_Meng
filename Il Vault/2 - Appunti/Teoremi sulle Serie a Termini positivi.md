---
data: 2024-02-09
corso:
  - "[[Analisi Matematica I]]"
  - "[[Analisi Matematica II]]"
argomento: Teoremi sulle Serie a Termini non negativi
tipologia: appunti
stato: "1"
capitolo: Serie Numeriche
---
- - -
*Tre criteri di convergenza sulle serie a termini positivi: criterio del rapporto, della radice, della serie condensata.*
- - -
# 0. Voci correlate
- [[Definizione di Serie]]
- [[Serie a Termini non negativi]]
- [[Limite di Successione]]
# 1. Criterio dell'ordine di infinitesimo
#Teorema 
> [!thm] dell'ordine di infinitesimo
> Sia $\sum_n a_n$ una *serie a termini non negativi*. Si ha che:
> A. *Convergenza della serie*
> Se esiste $p>1$ tale che esista il limite
> $$
> \lim_n a_n \cdot n^p = L \in [0, +\infty)
> $$
> Allora la serie $\sum_n a_n$ è *convergente*.
> B. *Divergenza della serie*
> Se esiste $p \leq 1$ tale che esista il limite
> $$
> \lim_n a_n \cdot n^p = L \in (0,+\infty) \cup \{+\infty\}
> $$
> allora la serie $\sum_n a_n$ è *divergente*.
^77712d

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^77712d]]
*N.B. Questa è solo un'idea della dimostrazione*
Questo criterio sostanzialmente discendo dal confronto delle successioni $(a_n)_n$ e $(\frac{1}{n^p}_n)_n$ e si legge dunque le ipotesi come
$$
\lim_n \frac{a_n}{\frac{1}{n^p}} \ \blacksquare
$$

# 2. Criterio del rapporto
#Teorema 
> [!thm] criterio del rapporto
> Sia $\sum_n a_n$ una serie a termini positivi. Se *esiste* un $0<k<1$, tale che $\forall n \in \mathbb{N}$ valga
> $$
> \frac{a_{n+1}}{a_n} \leq k
> $$
> allora la *serie è convergente*.
^dfb151

**DIMOSTRAZIONE** del [[#^dfb151]]
Segue dal *teorema del confronto* ([[Teorema del Confronto per le Serie a Termini non negativi#^700a42]]]) e dalla *convergenza* di $\frac{1}{n^\alpha}$ per $|\alpha|<1$.
Infatti,
$$
\begin{align} & a_2 \leq k \cdot a_1 \\ &a_3 \leq k \cdot a_2 \leq k^2 \cdot a_1 \\ &\vdots \\ &a_n \leq k^{n+1}a_1
\end{align}
$$
che è proprio la *serie geometrica* con $0<k<1$. $\blacksquare$

#Teorema 
> [!thm] criterio del rapporto col limite
> Sia $\sum_n a_n$ una *serie a termini positivi*. Supponendo che *esiste* e *valga* $l$ il limite
> $$
> \lim_n \frac{a_{n+1}}{a_n}=l
> $$
> Allora:
> - Se $l < \ 1$, allora la serie è *convergente*.
> - Se $l > 1$, allora la serie è *divergente*.
> - Se invece $l=1$ o il limite non esiste, allora *non si può dire niente*.
> $$
> $$
^7d020d

#Osservazione 
> [!rmk] casi inconcludenti
> Vediamo che se il limite vale $l=1$ allora lo studio è inconcludente, dal momento che sia *serie convergenti* che sia *serie divergenti* possono avere tale limite $l=1$.
> Posso infatti prendere $a_n = \frac{1}{n}$ e $b_n=\frac{1}{n^2}$ come esempi.

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^7d020d]].
Basta prendere le definizione del limite $\varepsilon-\bar{n}$ e scegliere opportuni valori $\varepsilon$.
Altrimenti si può procedere con la seguente dimostrazione.
*N.B. Questa dimostrazione è stata svolta con Daniele del Santo*
i. Supponiamo che valga il limite $\lim_n \frac{a_{n+1}}{a_n}=l<1$.
Allora prendiamo un valore qualsiasi $\rho$ tale che $l < \rho < 1$; ovvero *"$\rho$ sta in mezzo tra $l, 1$"*.
Quindi per definizione del limite vale che *esiste* un $\bar n \in \mathbb{N}$ tale che
$$
n \geq \bar n \implies \frac{a_{n+1}}{a_n}<\rho 
$$
Allora di conseguenza deve seguire
$$
\frac{a_{\bar n+1}}{a_\bar n}< \rho \implies a_{\bar n + 1}< \rho \cdot a_{\bar n}
$$
Ma allora vale anche per
$$
\frac{a_{\bar n+2}}{a_{\bar n+1}}< \rho \implies a_{\bar n + 2}< \rho^2 \cdot a_{\bar n+1} \leq \rho \cdot a_{\bar n +1}
$$
Notiamo che questo vale anche prendendo $\bar{n} + 3$, $\bar{n} +4$ e così via...
Dunque *per induzione* vale che
$$
\forall k \in \mathbb{N}, a_{\bar n +k} < \rho^k \cdot a_{\bar n}
$$
Allora da $\bar n$ in poi, il termine $a_n$ è *maggiorata* dal numero $\rho^{n-\bar n} \cdot a_{\bar n}$; ovvero
$$
a_n \leq \rho^n \cdot \frac{a_\bar n}{\rho^\bar n}
$$
Ora utilizzo il *teorema del confronto per le serie a termini positivi* ([[Teorema del Confronto per le Serie a Termini non negativi#^700a42]]), confrontando $\sum_n a_n$ con $\sum_n \rho^n \cdot \frac{a_\bar n}{\rho^\bar n}$.
Sicuramente la serie 
$$
\frac{a_\bar n}{\rho^\bar n} \sum_n \rho^n
$$
è *convergente* per $\rho \in (0, 1)$. Allora $\sum_n a_n$ è *convergente*.
ii. Supponiamo invece il limite $\lim_n \frac{a_{n+1}}{a_n} = l > 1$.
Allora per definizione del limite
$$
\exists \bar n : n > \bar n \implies \frac{a_{n+1}}{a_n}>1
$$
Ovvero $a_{n+1} > a_n$. Allora da un certo $\bar n$ in poi, la successione $(a_n)_n$ sarà sempre *crescente*; dunque il resto $\bar{n}$-esimo della serie è *divergente*, dunque la serie $\sum_n a_n$ è divergente. $\blacksquare$

# 3. Criterio della radice
#Teorema 
> [!thm] criterio della radice
> Sia $\sum_n a_n$ una *serie a termini non negativi* e supponiamo che esista $0<k<1$ tale che valga sempre
> $$
> \sqrt[n]{a_n}\leq k, \forall n
> $$
> allora la *serie è convergente*.
^e91303

**DIMOSTRAZIONE** del [[#^e91303]]
Si eleva tutto alla $n$; infatti
$$
\sqrt[n]{a_n} \leq k \implies a_n \leq k^n
$$
da cui, per il *teorema del confronto* e per la *convergenza* di $\sum_n k^n$ per $0<k<1$, abbiamo la tesi. $\blacksquare$

#Teorema 
> [!thm] criterio della radice col limite
> Sia $\sum_n a_n$ una *serie a termini positivi*.
> Supponendo che esista e sia finita il limite
> $$
> \lim_n \sqrt[n]{a_n} = l
> $$
> Allora:
> - Se $l < 1$, allora la serie è *convergente*.
> - Se $l > 1$, allora la serie è *divergente*.
> - Altrimenti non posso dire nulla
> $$
> $$
^825d87

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^825d87]].
La dimostrazione è analoga a quella vista per il [[#^7d020d]], dunque omessa. $\blacksquare$

# 4. Criterio della serie condensata
*N.B. Parte svolta con Daniele del Santo*

#Teorema 
> [!thm] criterio della serie condensata
> Sia $\sum_n a_n$ una *serie a termini positivi*.
> Supponendo che $(a_n)_n$ sia *decrescente*, ovvero che $\forall n, a_{n+1} \leq a_n$.
> Allora la serie $\sum_n a_n$ ha lo stesso carattere della serie $\sum_n b_n := \sum_n (2^n a_{2^n})$.
^9290da

#Definizione 
> [!def] serie condensata di una serie
> Sia $\sum_n a_n$ una serie. Allora la serie
> $$
> \sum_{n \in \mathbb{N}}^{+\infty}2^n a_{2^n}
> $$
> si dice la *"serie condensata"* di $a_n$.

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^9290da]].
Omessa (anche a lezione). $\blacksquare$
