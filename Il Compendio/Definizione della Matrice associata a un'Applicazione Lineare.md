---
data: 2023-11-26
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
tipologia: appunti
argomento: Definizione della Matrice associata a un'Applicazione Lineare
stato: "1"
---
*Definizione della matrice associata ad un'applicazione lineare rispetto alle basi del dominio e del codominio, esempi.*
- - -
# 1. Definizione
#Definizione 
> [!def] matrice associata a f rispetto alle basi B, C
> Sia $f: V \longrightarrow V'$ un'*applicazione lineare* ([[Definizione di Applicazione Lineare#^9b39f9]]) tra *spazi vettoriali* ([[Spazi Vettoriali#^7e2c4e]]) di *dimensione finita* ([[Dimensione#^3a9321]]).
> Siano $\mathcal{B}, \mathcal{C}$ rispettivamente le *basi* ([[Definizione di Base#^def430]]) di $V, V'$ 
> $$\mathcal{B} = \{v_1, \ldots, v_n\} ; \mathcal{C} = \{w_1, \ldots, w_m\}$$
> Definiamo quindi la *matrice associata ad $f$ rispetto alle basi $\mathcal{B}$ e $\mathcal{C}$*, come la *matrice* ([[Matrice#^18867e]]) in $M_{m,n}(K)$ denotata con
> $$M^\mathcal{B}_\mathcal{C}(f) $$
> e ottenuta nella maniera seguente.
> Per ogni vettore $v_i$ di $\mathcal{B}$ scriviamo $f(v_i)$ come la *combinazione lineare* di $w_1, \ldots, w_m$; le *coordinate* ([[Definizione di Base#^820fd0]]) rispetto agli elementi di $\mathcal{C}$ formeranno la *colonna* $i$-esima della matrice
> In altre parole,
> $$(M^\mathcal{B}_\mathcal{C}(f))^{(i)} = \text{coordinate di }f(v_i)\text{ a }\mathcal{C}; \forall i \in \{1, \ldots, n\} $$

^ea78d6

# 2. Esempi
#Esempio 
> [!exm] su $\mathbb{R}^2$
> Considero la trasformazione lineare
> $$f(\begin{pmatrix}x \\ y \end{pmatrix}) = \begin{pmatrix}2x-y\\x+2y \end{pmatrix} $$
> Considero la *base standard* $\mathcal{E}$ formata dagli elementi $\begin{pmatrix} 1 \\ 0\end{pmatrix}$ e $\begin{pmatrix}0 \\ 1 \end{pmatrix}$ come le basi del *dominio* e del *codominio*.
> Allora vogliamo costruire la *matrice associata all'applicazione lineare $f$*
> $$M^{\mathcal{E}}_{\mathcal{E}}(f) $$
> Per farlo calcoliamo $f(\begin{pmatrix}1 \\ 0 \end{pmatrix})$ e $f(\begin{pmatrix}0 \\ 1 \end{pmatrix})$, li esprimiamo come *combinazioni lineari* di $mathcal{E}$ per prendere le loro coordinate, al fine calcolare le colonne della matrice associata.
> Si lascia di svolgere il procedimento meccanico al lettore per esercizio.

#Esempio 
> [!exm] applicazione nulla
> Considero $f$ l'applicazione nulla, ovvero del tipo
> $$f(v) = 0_V$$
> Allora per *qualsiasi* scelta delle basi del dominio $\mathcal{B}$ e del codominio $\mathcal{C}$, la *matrice associata* ad $f$ sarà *sempre nulla*, in quanto i vettori di $\mathcal{C}$ sono *linearmente indipendenti* ([[Dipendenza e Indipendenza Lineare#^3782e8]]) in quanto *basi*.

#Esempio 
> [!exm] applicazione identità
> Consideriamo $f$ l'applicazione *identità*, ovvero del tipo
> $$f(V) = V $$
> Sia quindi $\mathcal{B} = \{v_1, \ldots, v_n\}$ basi sia del *dominio* che del *codominio*; pertanto $(f(v_i))_i = (v_i)_i$.
> Per l'osservazione precedente si nota che
> $$f(v_i) \in \operatorname{span}{\mathcal B} \implies v_i = 0v_1 + \ldots + 0v_{i-1} + v_i + 0v_{i+1} + \ldots + 0v_n $$
> Allora, svolgendo i calcoli necessari, la *associata all'applicazione identità* rispetto alle *stesse* basi del dominio e del codominio è la *matrice identità* $\mathbb{1}_n$.
> $$M^{\mathcal B}_{\mathcal B}(f) = \mathbb{1}_n$$
