---
data: 2023-12-02
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Prime Proprietà sulle Matrici associate a un'Applicazione Lineare
tipologia: appunti
stato: "1"
---
*Prime proprietà sulle matrici associate ad un'applicazione lineare.*
- - -
# 1. Prime proprietà sulle matrici associate
#Proposizione 
> [!prp] prime proprietà sulle matrici associate
> Siano $f, h: V \longrightarrow V'$ due *applicazioni lineari* ([[Definizione di Applicazione Lineare#^9b39f9]]) con $\mathcal{B}$, $\mathcal{C}$ rispettivamente le basi di $V, V'$.
> Supponiamo inoltre che ci sia anche $g: V' \longrightarrow V''$, con $\mathcal{C}$ base di $V''$. Sia poi $\lambda \in K$ uno *scalare*.
> Sia $M^{\mathcal{B}}_{\mathcal{C}}(f) \in M_{m,n}(K)$ una *matrice associata all'applicazione lineare* $f$ ([[Definizione della Matrice associata a un'Applicazione Lineare#^ea78d6]]).
> Allora valgono le seguenti sei proprietà:
> $$\begin{align}i. & \ M^\mathcal{B}_\mathcal{B}(\operatorname{id}_V) = \mathbb{1}_n \\ ii. & \ M^\mathcal{B}_\mathcal{C}(0_V) = 0 \in M_{m,n}(K) \\ iii. & \ M^\mathcal{B}_\mathcal{D}(g \circ f) = M^\mathcal{C}_\mathcal{D}(g) \cdot M^\mathcal{B}_\mathcal{C}(f) \\ iv. & \ M^\mathcal{B}_\mathcal{C}(\operatorname{id}_V) = (M^\mathcal{C}_\mathcal{B}(\operatorname{id}_V))^{-1} \\ v. & \ M^\mathcal{B}_\mathcal{C}(f+h) = M^\mathcal{B}_\mathcal{C}(f) + M^\mathcal{B}_\mathcal{C}(h) \\ vi. & \ M^\mathcal{B}_\mathcal{C}(\lambda \cdot f) = \lambda \cdot M^\mathcal{B}_\mathcal{C}(f) \end{align}$$
^0af01d

#Dimostrazione 
**DIMOSTRAZIONE** delle *prime proprietà sulle matrici associate* ([[#^0af01d]])
Dimostrazioni omesse in quanto per verificarle basta usare *definizioni* delle *applicazioni lineari*, *matrici associate* ed eventualmente usare delle loro proprietà. Alternativamente, si può avvalere dei diagrammi commutativi.