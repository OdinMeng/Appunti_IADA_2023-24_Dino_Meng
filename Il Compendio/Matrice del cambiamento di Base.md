---
data: 2023-12-02
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Matrice del cambiamento di Base
tipologia: appunti
stato: "1"
---
*Matrice del cambiamento di Base: osservazioni preliminari, l'utilità e riassunto (definizione generale)*
- - -
# 1. Prima Osservazione: sulle prime proprietà delle matrici associate
#Osservazione 
> [!oss] Osservazione 1.1. (sulle prime proprietà delle matrici associate)
> Facciamo delle considerazioni sulle [[Prime Proprietà sulle Matrici associate a un'Applicazione Lineare]] e sui [[Teoremi sulle Matrici associate a un'Applicazione Lineare]].
> Consideriamo $f: V \longrightarrow V$ con $\dim V = n$. Per il *corollario 2.2. sulle applicazioni lineari* si ha che $f$ è un *isomorfismo* (ovvero biettiva, pertanto invertibile) ([[Conseguenze del teorema di dimensione delle Applicazioni Lineari#^a78df6]]).
> Allora $f^{-1}: V \longrightarrow V$ è *anch'essa applicazione lineare* e supponendo che $\mathcal{B}$ sia una *base* di $V$, abbiamo il seguente:
> $$M^\mathcal{B}_\mathcal{B}(f) \cdot M^\mathcal{B}_\mathcal{B}(f^{-1}) = M^\mathcal{B}_\mathcal{B}(f \circ f^{-1}) = M^\mathcal{B}_\mathcal{B}(\text{id}_V) = \mathbb{1}_n$$
> Da ciò ricaviamo in particolare che la matrice $M^\mathcal{B}_\mathcal{B}(f)$ è *invertibile* e la sua inversa è *esattamente* $M^\mathcal{B}_\mathcal{B}(f^{-1})$.
> $$\boxed{(M^\mathcal{B}_\mathcal{B}(f))^{-1} = (M^\mathcal{B}_\mathcal{B}(f^{-1}))}$$
> Ovviamente questo presuppone che in primis la matrice $M^\mathcal{B}_\mathcal{B}(f)$ sia *invertibile*.
> Ricordiamo inoltre il *teorema 1.1. sulle matrici associate* ([[Teoremi sulle Matrici associate a un'Applicazione Lineare#^ebd9e5]]): ovvero che prendendo un'altra base $\mathcal{C}$ di $V$, possiamo trovare le *coordinate* di $f(v)$ rispetto a $\mathcal{C}$ col seguente calcolo:
> $$\begin{pmatrix}\beta_1 \\ \vdots \\ \beta_m \end{pmatrix}= M^\mathcal{B}_\mathcal{C}(f) \cdot \begin{pmatrix}\alpha_1 \\ \vdots \\ \alpha_n\end{pmatrix}$$
> Istanziamo dunque questo risultato per $f = \operatorname{id}_V$.
> $$\operatorname{id}_V: V \longrightarrow V$$
> con $\mathcal{B}, \mathcal{C}$ basi di $V$.
> Allora prendendo un qualunque vettore $v \in V$ con le coordinate rispetto a $\mathcal{B}$ come $\alpha_1, \ldots, \alpha_n$, allora le coordinate dello stesso vettore $f(v)=v$ rispetto a $\mathcal{C}$ verranno calcolate nel modo sopra indicato.
> Pertanto possiamo considerare la matrice
> $$M^{\mathcal{B}}_\mathcal{C}(\operatorname{id}_V)$$
> come la *matrice del cambiamento di base*.

^546dd2

# 2. Detour: l'utilità di questa idea
**DETOUR.** Ora è naturale chiedersi a cosa serva quest'osservazione: naturalmente, come ci suggerisce la denominazione, una *matrice del cambiamento di base* serve per *cambiare* la *base* di un spazio vettoriale e trovare le *coordinate* dell'immagine della *"base cambiata"* in funzione della *"base cambiata"* stessa.
Infatti, codifichiamo certi problemi con *applicazioni lineari*: dunque scegliendo una base qualsiasi per lo *spazio vettoriale* abbiamo *coordinate diverse*. Vogliamo svolgere certi calcoli con queste coordinate, però avvolte questi calcoli possono diventare complicati: dunque, avendo coordinate diverse (ovvero cambiando basi) possiamo *"semplificare"* il problema. 
Questo sarà infatti il problema della *diagonalizzazione* ([[Considerazioni Preliminari sulla Diagonalizzazione]]).
# 3. Proposizione: Risultato finale
Allora da tutti questi risultati appena derivati, possiamo enunciare la seguente proposizione.

#Proposizione 
> [!prop] Proposizione 3.1. (calcolo di una nuova matrice associata con basi cambiate)
> Sia $f: V \longrightarrow V'$ un'*applicazione lineare* tra *spazi vettoriali* di *dimensione finita*.
> Siano $\mathcal{B}, \mathcal{C}$ le basi *"originarie"* di $V, V'$.
> Siano poi $\tilde{\mathcal{B}}, \tilde{\mathcal C}$ le *"nuove basi"* di $V, V'$.
> Allora abbiamo il seguente:
> $$\begin{align} &M^\tilde{\mathcal B}_\tilde{\mathcal C}(f) = M^\tilde{\mathcal B}_\tilde{\mathcal C}(\operatorname{id}_{V'} \circ f \circ \operatorname{id}_V) \\ & \boxed{M^\tilde{\mathcal B}_\tilde{\mathcal C}(f) = M^\mathcal{C}_\tilde{\mathcal{C}}(\operatorname{id_{V'}}) \cdot M^\mathcal{B}_\mathcal{C}(f) \cdot M^{\tilde{\mathcal{B}}}_\mathcal{B}(\operatorname{id}_V)}\end{align}$$
> Pertanto, se conosciamo la matrice $M^\mathcal{B}_\mathcal{C}(f)$ allora possiamo ottenere la *"nuova matrice"* $M^\tilde{\mathcal B}_\tilde{\mathcal C}(f)$ moltiplicando a destra e a sinistra la *"matrice conosciuta"* per le *due matrici di cambiamento di base*.

#Osservazione 
> [!oss] Osservazione 3.1. (idea grafica)
> Graficamente abbiamo una specie di *"semplificazione"* delle basi:
> $$M^\cancel{\mathcal{C}}_\mathcal{\tilde C}(\operatorname{id}_V) \cdot M^\cancel{\mathcal B}_\cancel{\mathcal C}(f) \cdot M^\mathcal{\tilde B}_\cancel{\mathcal{B}} = M^\mathcal{\tilde B}_\mathcal{\tilde C}(f)$$
> Ovviamente questo serve *solamente* come un trucco mnemonico, non una dimostrazione rigorosa.

#Corollario 
> [!cor] Corollario 3.1. (caso particolare del calcolo della nuova matrice associata)
> In particolare se prendiamo $f: V \longrightarrow V$, con $\mathcal{B}$ la *"base originaria"* e $\mathcal{C}$ la *"nuova base"* con cui facciamo il cambiamento di base, allora vale che
> $$\boxed{M^\mathcal{C}_\mathcal{C}(f) = M^\mathcal{B}_\mathcal{C}(\operatorname{id}_V) \cdot M^\mathcal{B}_\mathcal{B}(f) \cdot M^\mathcal{B}_\mathcal{C}(\operatorname{id}_V)}$$

#Dimostrazione 
**DIMOSTRAZIONE** della *proposizione 3.1.*.
Omessa in quanto basta considerare che $f = \operatorname{id}_{V'} \circ f \circ \operatorname{id}_V$ e il *teorema 2.1.* sulle *matrici associate* ([[Teoremi sulle Matrici associate a un'Applicazione Lineare#^65e5e6]]).

#Osservazione 
> [!oss] Osservazione 3.2. (origine della nozione di matrice simile)
> Notiamo che la nozione di *matrice* simile discende proprio da queste considerazioni: infatti considerando $P$ come la *matrice del cambiamento di base* 
> $$P = M^\mathcal{C}_\mathcal{B}(\operatorname{id}_V)$$
> Pertanto la sua *inversa* è 
> $$P^{-1} = (M^\mathcal{C}_\mathcal{B}(\operatorname{id}_V))^{-1} = M^\mathcal{B}_\mathcal{C}(\operatorname{id}_V)$$
> Allora l'uguaglianza del *corollario 3.1.* può essere scritta come
> $$M^\mathcal{C}_\mathcal{C}(f) = P^{-1} \cdot M^\mathcal{B}_\mathcal{B}(f) \cdot P$$
> che è proprio la nozione di *matrice simile* ([[Definizione di Matrice Simile#^9be4ee]]).
> Infatti $M^\mathcal{C}_\mathcal{C}(f)$ e $M^\mathcal{B}_\mathcal{B}(f)$ sono *simili*.

