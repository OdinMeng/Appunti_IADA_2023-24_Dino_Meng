---
data: 2024-01-28
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Diagramma Commutativo
tipologia: appunti
stato: "1"
capitolo:
---
- - -
*L'idea generale di diagramma commutativo: esempi specifici*
- - -
# 1. L'idea generale
#Definizione 
> [!def] diagramma commutativo
> Il *diagramma commutativo* è un diagramma che collega degli *insiemi* (in particolare *spazi vettoriali*) tramite delle funzioni (*applicazioni lineari*), tali che tutti i *"percorsi"* che collegano un punto iniziale con un punto finale siano *equivalenti*.
> 
> Infatti, il *"diagramma commutativo"* per una certa funzione $f: A \longrightarrow B$ non sarebbe altro che la *"maniera compatta"* per rappresentare la *figura 1.1.*.

**FIGURA 1.1.** (*Definizione 1.1.*)
![[Pasted image 20240128183400 1.png]]

#Esempio 
> [!exm] Esempio 1.1.
> Consideriamo le seguenti applicazioni lineari.
> $$f: V \longrightarrow V'$$
> $$\pi: V' \longrightarrow V''$$
> $$g: V \longrightarrow V''$$
> Da questo traiamo il seguente *diagramma commutativo* (*figura 1.1.*)
> Notiamo che sono equivalenti le seguenti applicazioni:
> $$g = \pi \circ f$$

**FIGURA 1.2.** (*Esempio 1.1.*)
![[Pasted image 20240128172835 1.png]]

# 2. Esempi specifici
#Esempio 
> [!exm] matrice associata alla composizione di due funzioni
> Vogliamo calcolare la *matrice associata* alla composizione di *due applicazioni lineari*, con le basi $\mathcal{B, C, D}$ (rispettivamente per $V, V', V''$) ([[Definizione della Matrice associata a un'Applicazione Lineare#^ea78d6]]).
> 
> Prima di tutto disegno il *diagramma*, considerando le applicazioni lineari $f: V \longrightarrow V'$ e $g: V' \longrightarrow V''$ e la *funzione coordinante* $\pi, \rho, \tau$ che ritornano le coordinate per un certo vettore in $V$ ($V'$, $V''$) per $\mathcal{B}$ ($\mathcal{C, D}$). Allora ottengo il diagramma nella *figura 2.1.*.
>
>Noto che posso *"collegare"* la *n-upla* "associata" a $V$ *"direttamente"* a $V''$, considerando la matrice associata
>$$M^\mathcal{B}_\mathcal{D}(g \circ f)$$
>Che è equivalente (dato che stiamo parlando di un diagramma commutativo) a 
>$$\boxed{M^\mathcal{B}_\mathcal{D}(g \circ f) = M^\mathcal{C}_\mathcal{D}(g) \cdot M^\mathcal{B}_\mathcal{C}(f)}$$

**FIGURA 2.1.**  (*Esempio 2.1.*)
![[Pasted image 20240128174125 1.png]]

#Esempio 
> [!exm] interpretazione grafica di un teorema
> Consideriamo una qualsiasi *applicazione lineare* del tipo
> $$f: V \longrightarrow V'$$
> con $\mathcal{B}, \mathcal{C}$ delle basi di $V, V'$.
> Consideriamo inoltre $\pi, \tau$ le *funzioni coordinanti* ([[Applicazioni Lineari Notevoli#^de557a]]). Abbiamo dunque la situazione nella *figura 2.3.*.
> 
> Allora il *teorema 1.1. sulle matrici associate* enuncia che *deve* esistere un *"collegamento"* tra le $n$-uple $K^n$; infatti la linea tratteggiata rappresenta l'applicazione lineare associata alla matrice $M^\mathcal{B}_\mathcal{C}(f)$, ovvero
> $$L_{M^\mathcal{B}_\mathcal{C}(f)}(v) =M^\mathcal{B}_\mathcal{C}(f) \cdot v$$
> 
> Allora alla fine sono equivalenti le funzioni
> $$\boxed{L_{M^\mathcal{B}_\mathcal{C}(f)}\circ\pi = \tau\circ f}$$
^d97de6

**FIGURA 2.2.** (*Esempio 2.2.*)
![[Pasted image 20240128182404 1.png]]

#Esempio 
> [!exm] matrice del cambiamento di base
> Ora consideriamo l'endomorfismo identità 
> $$\operatorname{id_V}: V \longrightarrow V$$
> dove il *dominio* è *"rappresentata"* dalla base $\mathcal{B}$, e il *codominio* *"rappresentata* dalla base $\mathcal{C}$. Dato un vettore $v \in V$, voglio trovare un modo ti trovare le *coordinate di $v$* in riferimento a $\mathcal{C}$.
> 
> Definiamo dunque le funzioni coordinanti ([[Applicazioni Lineari Notevoli#^de557a]]) $\pi, \tau$, che da $v$ restituiscono la $n$-upla $K^n$ delle coordinate di $v$ per $\mathcal{B}$ o $\mathcal{C}$.
> Disegniamo dunque il diagramma commutativo (*figura 2.2.*).
> 
> Dal *teorema sulle matrici del cambiamento di base* ([[Teoremi sulle Matrici associate a un'Applicazione Lineare#^ebd9e5]]), abbiamo un'applicazione associata alla matrice $M^\mathcal{B}_\mathcal{C}(\operatorname{id}_V)$ che *"collega"* le $n$-uple $K^n$.
> 
> Dunque, traiamo la seguente relazione:
> $$\boxed{\pi(\operatorname{id_V}(v)) = M^\mathcal{B}_\mathcal{C}(\operatorname{id}_V) \cdot \pi(v)}$$
> che è la riformulazione dell'idea delle *matrici del cambiamento di base*.

**FIGURA 2.3.** (*Esempio 2.3.*)
![[Pasted image 20240128175028 1.png]]

#Esercizio 
> [!exr] Esercizio 2.1.
> Ragionare sulla *figura 2.4.*, dicendo *quale teorema/formula* si potrebbe ricavare.
>
> *N.B. l'applicazione $F_\mathcal{D}$ vuole rappresentare l'applicazione coordinante di un vettore in $V$ rispetto ad una base $\mathcal{D}$.*

**FIGURA 2.4.** (*Esercizio 2.1.*)
![[Pasted image 20240128182900 1.png]]