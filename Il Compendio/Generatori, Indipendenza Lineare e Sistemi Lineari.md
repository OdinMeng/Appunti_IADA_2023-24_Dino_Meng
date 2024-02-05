---
data: 2023-11-17
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Generatori, Indipendenza Lineare e Sistemi Lineari
tipologia: appunti
stato: "1"
---
*Breve osservazione sui concetti di generatori, indipendenza lineare come astrazioni di aspetti dei sistemi lineare.*
- - -
# Osservazione sui sistemi di generatori e indipendenza lineare
#Osservazione 
> [!oss] Osservazione 1.1. (sistemi di generatori in termini di sistemi lineari)
In $K^n$, l'essere un *sistema di generatori* può essere *"parafrasato"* in termini di *sistemi lineari* ([[Sistemi Lineari]]); infatti se $\{v_1, \ldots, v_s\} \subseteq K^n$ è un *sistema di generatori* per $K^n$, allora abbiamo
$$\forall v \in K^n, \exists \lambda_1, \ldots, \lambda_s: v=\lambda_1v_1 + \ldots + \lambda_s v_s$$
**ATTENZIONE!** Notiamo che usiamo l'altro valore $s$ in quanto $n$ è stato già fissato con $K^n$: infatti non abbiamo stabilito a priori che $s = n$.
Scriviamo dunque 
$$v_1 = \begin{pmatrix}a_{11} \\ \vdots \\ a_{1n} \end{pmatrix}; \ldots; v_s = \begin{pmatrix}a_{s1}\\ \vdots \\ a_{sn} \end{pmatrix}; v= \begin{pmatrix} b_1 \\ \vdots \\ b_n\end{pmatrix}$$
Allora *"l'essere $v$ una combinazione lineare del sistema di generatori"* equivale ad avere il seguente *sistema lineare*: 
$$\begin{cases}\lambda_1 a_{11} + \ldots + \lambda_s a_{s1} = b_1 \\ \vdots \\ \lambda_1 a_{1n}+ \ldots + \lambda_s a_{sn} = b_n\end{cases}$$
Quindi si dice che $v$ è *combinazione lineare di* $v_1, \ldots, v_s$ se e solo se il *sistema lineare* del tipo
$$\begin{pmatrix}a_{11} & \ldots & a_{s1}\\ \vdots & & \vdots \\ a_{1n} & \ldots & a_{sn} \end{pmatrix}\begin{pmatrix}\lambda_1 \\ \vdots \\ \lambda_s \end{pmatrix} = \begin{pmatrix}b_1 \\ \vdots \\ b_n \end{pmatrix}$$
è *compatibile*.

#Osservazione 
> [!oss] Osservazione 1.2. (indipendenza lineare in termini di sistemi lineari)
Analogamente l'essere *linearmente indipendenti* può essere parafrasata in termini di *sistemi lineari* usando il *sistema lineare omogeneo associato*: infatti avendo un sistema del tipo
$$\begin{pmatrix}a_{11} & \ldots & a_{s1}\\ \vdots & & \vdots \\ a_{1n} & \ldots & a_{sn} \end{pmatrix}\begin{pmatrix}\lambda_1 \\ \vdots \\ \lambda_s \end{pmatrix} = \begin{pmatrix}0 \\ \vdots \\ 0 \end{pmatrix}$$
e se questa è *compatibile* e la sua *soluzione* è *unica*, allora tutti i vettori $v_1, \ldots, v_s$ sono *linearmente indipendenti*.

#Osservazione 
> [!oss] Osservazione 1.3. (a mo' di conclusione)
Concludiamo che i concetti di *sistemi di generatori* ([[Combinazione Lineare]], **DEF 3.1.**) e di *indipendenza lineare* ([[Dipendenza e Indipendenza Lineare]]) sono modi di *astrarre* dei concetti che riguardano i *sistemi lineari* ([[Sistemi Lineari]]).