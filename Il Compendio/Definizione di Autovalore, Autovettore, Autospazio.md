---
data: 2023-12-02
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Definizione di Autovalore, Autovettore, Autospazio
tipologia: appunti
stato: "1"
---
*Definizione di autovalore, spettro di un'applicazione lineare; definizione di autovetture; definizione di autospazio.*
- - -
# 1. Autovalore di un'applicazione
#Definizione 
> [!def] Definizione 1.1. (autovalore di un'applicazione lineare)
> Sia $f: V \longrightarrow V$ un'*applicazione lineare* ([[Definizione di Applicazione Lineare#^9b39f9]]), con $\dim V = n$.
> Uno *scalare* $\lambda \in K$ si dice *autovalore* (in inglese *"Eigenvalue"* o in tedesco *"der Eigenwert"*) per l'applicazione $f$ se si verifica il seguente
> $$\boxed{\exists v \in V \diagdown \{0_V\}: f(v) = \lambda \cdot v }$$
> A parole, *"un scalare $\lambda$ è autovalore di $f$ se esiste un vettore di $V$ (escluso il vettore nullo in quanto creerebbe dei problemi) tale che l'immagine di tale vettore è uguale al vettore scalato per il scalare scelto"*.

^1098ea

#Osservazione 
> [!oss] Osservazione 1.1. (l'esempio della riflessione rispetto alla retta $l$)
> Riprendiamo l'*esempio 1.2.* relativo alle considerazioni preliminari ([[Considerazioni Preliminari sulla Diagonalizzazione#^0ce141]]): notiamo che $1, -1$ sono *autovalori* di $\rho_l$.
> Infatti, 
> $$\rho_l(v_1) = 1 \cdot v_1; \rho_l(v_2) = -1 \cdot v_2; v_1, v_2 \neq 0_V$$

## Spettro di un'applicazione lineare
#Definizione 
> [!def] Definizione 1.2. (spettro di un'applicazione lineare)
> Data $f: V \longrightarrow V$, definiamo l'*insieme dei autovalori di* $f$ come lo *spettro di* $f$ e lo indichiamo con
> $$\operatorname{Sp}{f} $$
# 2. Autovettore di un'applicazione relativo ad un'autovalore
#Definizione 
> [!def] Definizione 2.1. (autovettore di un'applicazione lineare relativo ad un'autovalore)
> Sia $f: V \longrightarrow V$ un'*applicazione lineare*; sia $\lambda \in K$ un *autovalore* di $f$.
> Diciamo che il vettore $v \in V$ è *autovettore* (in inglese *"Eigenvector"* o in tedesco *"der Eigenvektor"*) se vale che
> $$f(v) = \lambda \cdot v$$

^0f1977

# 3. Autospazio di un'autovalore
#Definizione 
> [!def] Definizione 3.1. (autospazio di un autovalore)
> Sia $\lambda \in K$ un *autovalore* per $f$. 
> Definiamo *l'autospazio* (in inglese *"Eigenspace"* o in tedesco *"der Eigenraum"*) di $\lambda$ come *l'insieme di autovettori* di $\lambda$ e lo denotiamo con
> $$\operatorname{Aut}{\lambda}$$

^1486dc

#Osservazione 
> [!oss] Osservazione 3.1. (l'elemento nullo è elemento di qualsiasi autospazio)
> Affinché lo scalare $\lambda$ sia *autovalore*, per definizione, deve valore che
> $$v \in V \diagdown \{0_V\}: f(v) = \lambda \cdot v$$
> Allora se $\lambda$ è *autovalore*, consideriamo l'autovettore $w \in V$ relativa a $\lambda$:
> $$f(w) = \lambda \cdot w $$
> In particolare se $w = 0_V$, varrebbe che
> $$f(0_V) = \lambda \cdot 0_V = 0_V$$
> Dunque vale che il *vettore nullo* $0_V$ appartiene *sempre* all'autospazio di un qualunque autovalore.
> $$\forall \lambda \text{ autovalore di }f, 0_V \in \operatorname{Aut}{\lambda}$$

^4d3c9b
