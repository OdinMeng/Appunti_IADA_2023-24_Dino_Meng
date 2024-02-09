---
data: 2024-01-31
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Ortonormalizzazione di Gram-Schmidt
tipologia: appunti
stato: "1"
capitolo: Geometria Euclidea (cenni)
---
- - -
*Ortonormalizzazione di Gram-Schmidt*
- - -
# 1. Problema principale
#Osservazione 
> [!rmk] Problema principale
> Data la definizione di *base ortonormale per un spazio vettoriale* ([[Ortogonalità e ortonormalità#^ac24ad]]), ci chiediamo se è possibile, dati certi vettori linearmente indipendenti, ricavare una base *ortonormale* per una base. Col teorema che vedremo, la risposta è sì.

#Teorema 
> [!thm] Ortogonormabilità di vettori linearmente indipendenti
> Siano $V$ un *spazio vettoriale* dotato di *prodotto scalare* ([[Prodotto Scalare#^228d4c]]). Siano $w_1, \ldots, w_k \in V$ dei vettori in $V$.
> Allora esiste una *base ortonormale* del tipo $(v_1, \ldots, w_k)$ per il sottospazio costituito da $\operatorname{span}(w_1, \ldots, w_k)$.

# 2. Ortonormalizzazione di Gram-Schmidt
#Dimostrazione 
$k=1$: Semplicemente definiamo
$$
v_1 := \frac{w_1}{||w_1||}
$$
Questo è il *primo* vettore della base ortonormale, ed è banalmente normale. Infatti, prendendo la norma di $v_1$ troviamo che è proprio $1$.
$k-1 \implies k:$ Per ipotesi induttiva abbiamo che i vettori
$$
v_1, \ldots, v_{k-1}
$$
formano una base *ortonormale* per $\operatorname{span}(w_1, \ldots, w_{k-1})$.
Ora definiamo la *proiezione ortogonale per* $(w_1,\ldots, w_{k-1})$ come
$$
\tilde{w}_k := (w_k \cdot v_1)v_1 + \ldots + (w_k \cdot v_{k-1})v_{k-1}
$$
Adesso definiamo
$$ 
\tilde{v}_k = w_k - \tilde{w}_k
$$
Osserviamo che $\tilde{v}_k$ non può essere mai nulla; infatti da un lato abbiamo un *vettore linearmente indipendente* da $(w_1, \ldots, w_{k-1})$ (dunque anche da $v_1, \ldots, v_{k-1}$) e dall'altro abbiamo un'espressione per $(v_1, \ldots, v_{k-1})$.
Ora calcoliamo il *prodotto scalare* $\tilde{v}_k \cdot v_i$, per un qualunque $i \in \{1, \ldots, k-1\}$
$$
\begin{align}\tilde{v}_k \cdot v_i &= (w_k-\tilde w_k)\cdot v_i \\ &= w_k \cdot v_i - \tilde{w}_k \cdot v_i \\ &= \ldots - (w_k \cdot v_1)v_1 \cdot v_i - \ldots - (w_k\cdot v_i)v_i \cdot v_i - \ldots - (w_k \cdot w_{k-1})w_{k-1} \cdot w_{i} \\ &= \ldots - 0 -  \ldots -0-(w_k-v_i)1 - 0 - \ldots -0 \\ &= w_k \cdot v_i - w_k-v_i = 0  \end{align}
$$
Sfruttando l'ipotesi induttiva (in particolare il fatto che $w_1, \ldots, w_{k-1}$ sono ortogonali e che $w_i$ è un versore) e la bilinearità del prodotto scalare, otteniamo questo risultato. Ovvero, $\tilde{v}_k$ è *ortogonale* rispetto a tutti gli elementi $v_1, \ldots, v_{k-1}$.
Infine definendo
$$v_k := \frac{\tilde v _k}{||\tilde v _k ||}$$
otteniamo l'ultimo vettore della base ortonormale per $w_1, \ldots, w_k$. $\blacksquare$