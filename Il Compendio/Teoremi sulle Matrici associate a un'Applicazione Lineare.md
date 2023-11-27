---
data: 2023-11-26
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Teoremi sulle Matrici associate a un'Applicazione Lineare
tipologia: appunti
stato: "1"
---
*Due risultati importanti derivanti dalla definizione della matrice associata ad un'applicazione lineare.*
- - -
# 1. Primo risultato relativo alle coordinate
#Teorema 
> [!thm] Teorema 1.1. (relazione tra le coordinate rispetto alle basi)
> Sia $f: V \longrightarrow V'$ un'*applicazione lineare* tra *spazi vettoriali* di *dimensione finita* ([[Definizione di Applicazione Lineare#^9b39f9]], [[Spazi Vettoriali#^74efce]], [[Dimensione#^3a9321]]).
> Siano $\mathcal{B}, \mathcal{C}$ rispettivamente *basi* di $V, V'$ ([[Definizione di Base#^def430]]). In particolare sia $\mathcal{B} = \{v_1, \ldots, v_n\}$
> Fissiamo $v$ un vettore di $V$; $v \in V$
> Supponiamo che ci sia il *vettore-colonna* $A$ in $K^n$ sia il *vettore* che rappresenta le coordinate di $v$ rispetto a $\mathcal{B}$;
> $$A = \begin{pmatrix}\alpha_1 \\ \vdots \\ \alpha_n \end{pmatrix}: v=\alpha_1 v_1 + \ldots + \alpha_n v_n $$ 
> Allora le *coordinate* di $f(v)$ rispetto a $\mathcal{C}$ sono date da
> $$\begin{pmatrix}\beta_1 \\ \vdots \\ \beta_m \end{pmatrix} = M^\mathcal{B}_\mathcal{C}(f) \cdot A = M^\mathcal{B}_\mathcal{C}(f) \cdot \begin{pmatrix}\alpha_1 \\ \vdots \\ \alpha_n\end{pmatrix}$$

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 1.1.*
La dimostrazione è omessa in quanto è *"semplice"* visto che basta scrivere le definizioni e compiere dei calcoli. Quindi la dimostrazione è lasciata da svolgere al lettore.
Consiglio: definire $f(v_i)$ in un certo modo e usare un *"trick"* in cui si sfrutta il fatto che $f$ soddisfa le proprietà delle applicazioni lineari.
# 2. Secondo risultato relativo alla composizione
#Teorema 
> [!thm] Teorema 2.1. (matrice associata della composizione delle applicazioni lineari)
> Siano $f: V \longrightarrow V'$, $g: V' \longrightarrow V''$ due *applicazioni lineari* tra *spazi vettoriali* di *dimensione finita*.
> Siano $\mathcal{B}, \mathcal{C}, \mathcal{D}$ rispettivamente le *basi* di $V, V', V''$.
> Allora possiamo considerare la *composizione* $g \circ f: V \longrightarrow V''$ e vale che
> $$M^\mathcal{B}_\mathcal{D}(g \circ f) = M^\mathcal{C}_\mathcal{D}(g) \cdot M^\mathcal{B}_{\mathcal{C}}(f) $$

**TRUCCHETTO MNEMONICO.** Come trucchetto mnemonico si potrebbe visualizzare che le lettere $\mathcal{C}$ si *"cancellano"*.

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 2.1.*
Anche qui la dimostrazione è stata omessa in quanto bisogna solo usare le definizioni.
## Caso applicazioni identità
#Corollario 
> [!cor] Corollario 2.1.
> Sia $V$ un *K-spazio vettoriale* di *dimensione finita*, siano $\mathcal{B}, \mathcal{C}$ basi di $V$. Sia $\operatorname{id}_V$ l'applicazione lineare *identità*.
> Allora
> $$M^\mathcal{C}_\mathcal{B}(\operatorname{id}_V) \cdot M^\mathcal{B}_\mathcal{C}(\operatorname{id}_V) = M^\mathcal{B}_\mathcal{B}(\operatorname{id}_V) = \mathbb{1}_n $$
> Quindi vediamo che la matrice $M^{\mathcal C}_{\mathcal B}(\operatorname{id}_V)$ è l'*inversa* di $M^{\mathcal B}_{\mathcal C}(\operatorname{id}_V)$.
