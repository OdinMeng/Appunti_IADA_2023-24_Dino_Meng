---
data: 2023-11-25
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Definizione di Rango per Applicazione Lineare
tipologia: appunti
stato: "1"
---
*Definizione di rango per un'applicazione lineare.*
- - -
# 0. Osservazione preliminare
**OSS 0.a.** (*Osservazione sulla trasformazione lineare $L_A$*) Consideriamo una matrice $A \in M_{m,n}(K)$ e la trasformazione lineare associata alla matrice $A$, $L_A$ ([[Applicazioni Lineari Notevoli#^fd2d05]]). 
$$L_A : K^n \longrightarrow K^m; L_A(v) = A \cdot v $$
Se in $K^n$ prendiamo la *base standard* $\mathcal{E}$, dove
$$\mathcal{E}=\{e_1, \ldots,e_n\}; e_i = \begin{pmatrix}0 \\ \vdots \\ 1 \text{ (posizione }i\text{-esimo} \\ \vdots \\ 0 \end{pmatrix} $$
Calcolando $A \cdot e_i$, per la *definizione di righe per colonne* ([[Operazioni particolari con matrici#^eecbc9]]) notiamo che otterremo proprio la sua *colonna*. Allora
$$A\cdot e_i = A^{(1)} $$
Per l'osservazione effettuata in [[Teorema di struttura per Applicazioni Lineari]] ([[Teorema di struttura per Applicazioni Lineari#^7da006]]), sappiamo che
$$\begin{align}\operatorname{im} L_A &= \operatorname{span}(L_A(e_1), \ldots, L_A (e_n)) \\ &= \operatorname{span}(A^{(1)}, \ldots, A^{(n)})\end{align}$$
Pertanto prendendo la *dimensione* ([[Dimensione#^3a9321]]) dell'applicazione lineare $L_A$ si otterrebbe 
$$ \dim (\operatorname{span}(A^{(1)}, \ldots, A^{(n)}))$$
che è esattamente la definizione del *rango* ([[Rango#^d641ff]]) della matrice $A$.
$$\boxed{\dim \operatorname{im} L_A=  \dim \operatorname{span} (A^{(1)}, \ldots, A^{(n)}) = \operatorname{rg}(A)} $$

# 1. Definizione di Rango per un'applicazione lineare
#Definizione 
> [!def] rango di un'applicazione lineare
> Sia $f: V \longrightarrow V'$ un'*applicazione lineare* ([[Definizione di Applicazione Lineare#^9b39f9]]) tra *spazi vettoriali* di *dimensione finita*.
> Allora definiamo il *rango di* $f$ come
> $$\operatorname{rg} f = \dim(\operatorname{im} f)$$

**OSS 1.1.** Data l'osservazione precedente, il *rango* di un'applicazione lineare è una *generalizzazione* del rango di una matrice.