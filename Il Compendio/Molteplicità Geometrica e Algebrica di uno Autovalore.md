---
data: 2023-12-03
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Molteplicità Geometrica e Algebrica di uno Autovalore
tipologia: appunti
stato: "1"
---
*Definizione di molteplicità geometrica e algebrica di un autovalore. Esempi. Proposizioni e osservazioni.*
- - -
# 1. Definizione di molteplicità geometrica
#Definizione 
> [!def] Definizione 1.1. (molteplicità geometrica di un autovalore)
> Sia $f: V \longrightarrow V$ un'*applicazione lineare* con $\dim V$ finita ([[Definizione di Applicazione Lineare#^9b39f9]]). Sia $\bar{\lambda} \in K$ un *autovalore* per $f$ ([[Definizione di Autovalore, Autovettore, Autospazio#^1098ea]]);
> allora si definisce il numero
> $$\dim_K \operatorname{Aut}{\bar\lambda}$$
> come la *molteplicità geometrica* dell'autovalore $\bar\lambda$.
> A parole questo vuol dire *"il numero di autovettori associati a $\bar\lambda$"*.
> Inoltre lo denotiamo con
> $$m_g(\bar\lambda)$$

^0fc15c

# 2. Definizione di molteplicità algebrica
#Definizione 
> [!def] Definizione 2.1. (molteplicità algebrica di un autovalore)
> Sia $f: V \longrightarrow V$ un'*applicazione lineare* con $\dim V$ finita.
> Sia $P_f(\lambda)$ il *polinomio caratteristico* ([[Polinomio Caratteristico di una Applicazione Lineare#^3daf01]]).
> Allora, supponendo che $\bar{\lambda}$ sia *autovalore* per $f$ (ovvero $P_f(\bar{lambda}) = 0$), per il teorema di Ruffini ([[Regola di Ruffini#^af4d5f]]) vale che
> $$P_f(\lambda) = (\lambda-\bar{\lambda})\cdot g(\lambda)$$
> Definiamo la *molteplicità algebrica* di $\bar{\lambda}$ come il *numero naturale* $m$ per cui si ha
> $$P_f(\lambda) = (\lambda-\bar{\lambda})^m \cdot \tilde{g}(\lambda)$$
> ove $\lambda-\bar{\lambda}$ *non* divide $\tilde{g}(\lambda)$.
> Ovvero a parole la *molteplicità algebrica* di $\bar{\lambda}$ è *"l'esponente più alto associato al valore $\bar{\lambda}$ del polinomio caratteristico linearizzato"*.
> Inoltre denotiamo questo con
> $$m_a(\bar{\lambda})$$

^f27f78

#Esempio 
> [!ex] Esempio 2.1. (esempio)
> Sia $P_f(\lambda) = (\lambda-5)^2 \cdot (\lambda+1)^3$
> Allora $5, -1$ sono *autovalori* per $f$ e la molteplicità algebrica per questi sono rispettivamente $2, 3$.
# 3. Relazione tra la molteplicità algebrica e geometrica
#Proposizione 
> [!prop] Proposizione 3.1. (relazione tra molteplicità algebrica e geometrica)
> Sia $f: V \longrightarrow V$ un'*applicazione lineare* con $\dim V$ finita e con $\lambda$ autovalore per $f$.
> Allora vale che
> $$m_g(\lambda) \leq m_a(\lambda)$$
^f9542a

#Dimostrazione 
**DIMOSTRAZIONE** della *proposizione 3.1.* ([[#^f9542a]])
Omessa.
# 4. Osservazione finale
#Osservazione 
> [!oss] Osservazione 4.1. (osservazione sulla molteplicità algebrica)
> Se $f: V \longrightarrow V$ è un'*applicazione lineare* con dimensione finita e chiamo tale dimensione $n$, allora $P_f(\lambda)$ è un polinomio di grado *esattamente* $n$.
> Pertanto la *somma* delle *molteplicità algebrica* di tutti gli autovalori è *al più* $n$.