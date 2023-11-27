---
data: 2023-11-24
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Applicazioni Lineari Notevoli
tipologia: appunti
stato: "0"
---
*Prime applicazioni lineari che verranno date per noti: trasformazione lineare associata ad una matrice, funzione coordinante.*
- - -
# 1. Trasformazione lineare associata ad una matrice
#Definizione 
> [!def] Definizione 1.1. (trasformazione lineare associata alla matrice)
> Sia $A \in M_{m,n}(K)$ una *matrice* ([[Matrice#^18867e]]).
> Allora la matrice $A$ definisce una *funzione* del tipo
> $$L_A: K^n \longrightarrow K^m; v \mapsto A\cdot v $$
> La *funzione* associa un vettore $K^n$ ad un vettore $A\cdot v$ che vive in $K^n$; ricordiamoci che $\cdot$ rappresenta la *moltiplicazione riga per colonna* ([[Operazioni particolari con matrici#^eecbc9]]).
> 

^fd2d05

#Proposizione 
> [!prop] Proposizione 1.1. ($L_A$ è un'applicazione lineare)
> Per ogni *matrice* $A \in M_{m,n}(K)$ la funzione precedentemente definita $L_A$ è una *applicazione lineare* ([[Definizione di Applicazione Lineare#^9b39f9]]).

#Dimostrazione 
**DIMOSTRAZIONE** della *proposizione 1.1.*
Siano $v_1, v_2 \in K^n$. Allora sfruttando delle *proprietà* della moltiplicazione riga per colonna ([[Operazioni particolari con matrici#^5cf872]]), otteniamo
$$\begin{align}L_A(v_1+v_2) &= A\cdot(v_1+v_2) \\ &= A\cdot v_1 + A \cdot v_2 \\ &= L_A(v_1) + L_A(v_2)\end{align} $$
Similmente, supponendo $\lambda \in K$, dimostriamo che
$$ L_A(\lambda v) = A\cdot(\lambda v) = \lambda (A \cdot v) = \lambda L_A(v) \ \blacksquare$$
## Esempio particolare
#Esempio 
> [!ex] Esempio 1.1. (rotazione nel piano di un angolo $\alpha$ in senso antiorario)
> Sia $\alpha \in \mathbb{R}$ un *angolo* e consideriamo la matrice *"rotazione"*
> $$R_\alpha = \begin{pmatrix} \cos \alpha & - \sin \alpha \\ \sin \alpha & \cos \alpha\end{pmatrix} $$
> Allora l'applicazione lineare rappresentato da
> $$L_{R_{\alpha}}: \mathbb{R}^2 \longrightarrow \mathbb{R}^2 $$
> rappresenterebbe la rotazione di un angolo $\alpha$ in senso *antiorario*.
> Calcoliamo ad esempio
> $$L_{R_\alpha}(\begin{pmatrix}1 \\ 0 \end{pmatrix}) = \begin{pmatrix} \cos \alpha & - \sin \alpha \\ \sin \alpha & \cos \alpha\end{pmatrix} \cdot\begin{pmatrix}1 \\ 0 \end{pmatrix} = \begin{pmatrix} \cos \alpha \\ \sin \alpha \end{pmatrix} $$
> Invece per esercizio si lascia al lettore di calcolare
> $$L_{R_\alpha}(\begin{pmatrix}0 \\ 1 \end{pmatrix}) $$
> (vi è dato un suggerimentino nella figura sottostante!)

**GRAFICO 1.1.** (*Situazione grafica*)
![[Pasted image 20231124231735.png]]


# 2. Applicazione lineare coordinante
#Definizione 
> [!def] Definizione 2.1. (funzione coordinante)
> Sia $V$ un *K-spazio vettoriale* di dimensione finita ([[Dimensione#^3a9321]]), suppongo $\dim V = n \in \mathbb{N}$.
> Sia $\mathcal{B}$ una *base* ([[Definizione di Base#^def430]]).
> Allora definiamo la funzione che *prende le coordinate di un vettore rispetto a* $\mathcal{B}$ in questo modo:
> $$F_{\mathcal{B}}: V \longrightarrow K^n $$
> dove, dato un vettore $v \in V$ e applicandoci questa funzione ho il vettore $K^n$ che contiene *tutte* le coordinate di $v$ rispetto alla base $\mathcal{B}$ ([[Definizione di Base#^820fd0]]).
> 
> Infatti questa definizione è ben posta in quanto $\mathcal{B}$ è base di $V$, pertanto ogni vettore $v$ è espressione *unica* dello $\text{span}$ della *base*. Quindi
> $$F_\mathcal{B}(v) = \begin{pmatrix}\lambda_1 \\ \vdots \\ \lambda_n \end{pmatrix}, v = \lambda_1 v_1 + \ldots + \lambda_n v_n $$

#Proposizione 
> [!prop] Proposizione 2.1. (invertibilità della funzione coordinante)
> La funzione $F_\mathcal{B}$ è *iniettiva* in quanto abbiamo che ogni vettore è *espressione* unica dello $\text{span}$ della base; si può verificare che è anche suriettiva. Quindi questa applicazione lineare è biiettiva, quindi invertibile ([[Funzioni#^7b369f]]).
> Allora si dice che $F_\mathcal{B}$ è un *isomorfismo* di *spazi vettoriali*.

# 3. Applicazioni lineari inverse di isomorfismi
#Esercizio
> [!es] Esercizio 3.1. (inverse degli isomorfismi come spazi vettoriali)
> Provare che se $f: V \longrightarrow V'$ è *biiettiva*, allora $f^{-1}: V' \longrightarrow V$ è anch'essa un'*applicazione lineare*. Quindi dimostrare che se una applicazione lineare è isomorfa, allora considerando la sua inversa si conserveranno le stesse proprietà.

#Dimostrazione 
**DIMOSTRAZIONE** dell'*esercizio 3.1.*
1. Dimostro la *additività* di $f^{-1}$:
Considero innanzitutto la composizione $f \circ f^{-1}$, che per definizione deve valere
$$(f \circ f^{-1})(V') = V'$$
Allora calcolo $f \circ f^{-1}$ per $v'_1+v'_2$ in due modi diversi: nella prima considerandoli *"assieme"*, nell'altra *"distinguendo"* le immagini.
$$\begin{align}&\begin{cases}1. \  f(\boxed{f^{-1}(v'_1+v'_2)})=v'_1+v'_2 \\ 2. \  f(f^{-1}(v'_1))+f(f^{-1}(v'_2))=v'_1 + v'_2 \stackrel{\text{AL1 di } f}\implies f(\boxed{f^{-1}(v'_1)+f^{-1}(v'_2)}) = v'_1 +v'_2\end{cases} \\& \implies f^{-1}(v'_1+v'_2) = f^{-1}(v'_1)+ f^{-1}(v'_2)\end{align}$$
2. Dimostro l'*omogeneità* di $f^{-1}$:
I procedimenti sono analoghi.
$$\begin{align}&\begin{cases} f(f^{-1}(\lambda v'))= \lambda v' \\ \lambda \cdot f(f^{-1}(v')) = f(\lambda \cdot f^{-1}(v')) = \lambda v'\end{cases}\\ & \implies f^{-1}(\lambda v') = \lambda f^{-1}(v') \ \blacksquare\end{align} $$

>[!warning] Da chiedere al prof. Gallet (o al tutor Varutti) se il ragionamento è effettivamente giusto
