---
data: 2023-12-02
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: L'insieme delle Applicazioni Lineari
tipologia: appunti
stato: "1"
---
*Cenno all'insieme delle applicazioni lineari: definizione e teorema della funzione matrice associata ad un'applicazione lineare.*
- - -
# 1. Definizione dell'insieme $\mathcal{L}$
#Definizione 
> [!def] l'insieme delle applicazioni lineari dal dominio al codominio $\mathcal{L}$
> Siano $V, V'$ dei *K-spazi vettoriali* ([[Spazi Vettoriali#^7e2c4e]]) di *dimensione finita* ([[Dimensione#^3a9321]]); $\dim V = n; \dim V' = m$
> Allora definiamo *l'insieme delle applicazioni lineari da* $V$ *in* $V'$ come l'insieme $\mathcal{L}$
> $$\mathcal{L}(V, V') = \{\operatorname{id}_V, 0_V, f, \ldots \}$$
^b619fd

#Proposizione 
> [!prp] $\mathcal{L}$ diventa un spazio vettoriale
> Abbiamo che definendo la *somma* tra applicazioni lineari in maniera *"puntuale"* e analogamente lo *scalamento* di un'applicazione lineare, ovvero
> $$(f+g)(v) = f(v)+g(v); (\lambda \cdot v)(v) = \lambda \cdot f(v) $$
> Abbiamo che *l'insieme delle applicazioni lineari* $\mathcal{L}(V, V')$ diventa un *spazio vettoriale* su $K$.
# 2. Teorema della funzione matrice associata ad applicazione lineare
#Teorema 
> [!thm] della funzione matrice associata ad un'applicazione lineare
> Nelle ipotesi della *definizione 1.1.* ([[#^b619fd]]), fissata $\mathcal{B}$ base di $V$ e $\mathcal{C}$ base di $V'$, possiamo definire una funzione del tipo
> $$\mathcal{L}(V, V') \longrightarrow M_{m,n}(K); f \mapsto M^\mathcal{B}_\mathcal{C}(f)$$
> Allora questa funzione è un'*applicazione lineare* ed un *isomorfismo*.

^c7a393

