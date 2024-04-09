---
data: 2023-11-17
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Teorema di Rouché-Capelli
tipologia: appunti
stato: "1"
---
*Teorema Rouché-Capelli: enunciato, dimostrazione e corollario. Esempio di applicazione*
- - -
# 1. Enunciato
#Teorema 
> [!thm] di Rouché-Capelli
> Sia $A \in M_{m,n}(K)$ una *matrice*, sia $b \in K^m$ un *"vettore-colonna"*.
> Allora il *sistema lineare* composto da
> $$A \cdot x = b $$
> è *compatibile* se e solo se vale che il rango di $A$ è uguale a quella della matrice completa  $(A|b)$ ([[Algoritmo di Gauß#^8357bd]]);
> $$\operatorname{rg}(A) = \operatorname{rg}(A|b)$$
> In tal caso la *generica soluzione* della soluzione dipende da $n - \operatorname{rg}(A)$ parametri liberi.
^95c688

# 2. Dimostrazione
#Dimostrazione 
**DIMOSTRAZIONE** (*Teorema 1.1.*)
La dimostrazione si articolerà in due parti principali: nella prima dimostriamo l'equivalenza *"se e solo se"*, nella seconda dimostriamo che la *generica soluzione* dipende da $n - \operatorname{rg}(A)$.
Dunque dimostriamo l'equivalenza
$$\boxed{Ax = b \text{ compatibile} \iff \operatorname{rg}(A) = \operatorname{rg}(A|b)}  $$
"$\implies$": Suppongo che $Ax = b$ sia *compatibile*; allora esiste una soluzione $s \in K^n$ tale che $As = b$. Notiamo che possiamo *"esplicitare la scrittura"* applicando la definizione della *moltiplicazione righe per colonne* ([[Operazioni particolari con matrici#^eecbc9]]); allora questo equivale a dire
$$s_1 A^{(1)}+\ldots+s_nA^{(n)} = b$$
il che significa $b$ è *combinazione lineare* dei *vettori colonna* della matrice $A$. Dunque
$$ b \in \operatorname{span}(A^{(1)}, \ldots, A^{(n)})$$e ciò implica il seguente
$$\operatorname{span}(A^{(1)}, \ldots, A^{(n)}) = \operatorname{span}(A^{(1)}, \ldots, A^{(n)}, b)$$
(la dimostrazione è lasciata da svolgere per esercizio)
Allora 
$$ \dim(\operatorname{span}(A^{(1)}, \ldots, A^{(n)})) = \dim(\operatorname{span}(A^{(1)}, \ldots, A^{(n)}, b))$$
che per definizione è proprio
$$\boxed{\operatorname{rg}(A) = \operatorname{rg}(A|b)}$$
Ora dimostriamo il viceversa.
"$\impliedby$": Supponiamo che valga $\operatorname{rg}(A)=\operatorname{rg}(A|b)$.
Allora per definizione del rango ([[Rango#^d641ff]]) ricaviamo che
$$\dim(\operatorname{span}(A^{(1)}, \ldots, A^{(n)})) = \dim(\operatorname{span}(A^{(1)}, \ldots, A^{(n)}, b)) $$
Il fatto che le *dimensioni* ([[Dimensione#^3a9321]]) di queste sono uguali implica che i sottospazi stessi sono uguali ([[Dimensione#^265196]]); allora
$$\operatorname{span}(A^{(1)}, \ldots, A^{(n)}) = \operatorname{span}(A^{(1)}, \ldots, A^{(n)}, b)$$
Pertanto
$$ b \in \operatorname{span}(A^{(1)}, \ldots, A^{(n)}, b) \implies  b \in \operatorname{span}(A^{(1)}, \ldots, A^{(n)}) $$
Ma precedentemente abbiamo osservato che quest'ultima equivale a dire che il sistema
$$ Ax = b$$
è *compatibile*.
- - -

> [!warning] Passaggio non banale
> Il passaggio meno scontato di questa dimostrazione è quella di esplicitare la scrittura, applicando la nozione di prodotto righe per colonne. 
> Inoltre un altro passaggio non banale è quello di applicare la proposizione per cui se due vettori sono linearmente dipendenti, allora il span di entrambi è uguale a span di una dei vettori.
> $$a \in \operatorname{span} b \implies \operatorname{span} b = \operatorname{span} (a, b)$$

- - -
Ora mostriamo la *seconda parte* del teorema: ovvero che se $Ax = b$ è compatibile, allora la sua generica soluzione dipende da $n - \operatorname{rg}(A)$ *parametri liberi*.
Per farlo useremo il *teorema di struttura delle soluzioni di sistemi lineari* ([[Teoremi sui Sistemi Lineari#^49a263]]) e il *teorema di dimensione per le soluzioni di un sistema lineare omogeneo* ([[Teorema di dimensione delle soluzioni di sistemi lineari#^b69f0c]]).
Il primo ci dice che la generica soluzione $s$ è della forma
$$ s = \tilde{s} + s_0$$dove $\tilde{s}$ è una soluzione fissata di $Ax = b$, $s_0$ invece una soluzione per il *sistema lineare omogeneo associato* $Ax=0$.
Il secondo teorema ci dice che il sottospazio vettoriale $W$ delle soluzioni del *sistema lineare omogeneo associato* ha la dimensione $n - \operatorname{rg}(A)$.
Allora esiste una base $\mathcal{B}_W$ di $W$ formata da $k = n-\operatorname{rg}(A)$ elementi; 
$$\mathcal{B}_W = \{w_1, \ldots, w_k\}$$
e ogni $s_i \in W$ è *combinazione lineare* (unica) di $\mathcal{B}_W$.
Allora
$$s_0 =t_1w_1 + \ldots+ t_kw_k, \forall t_i \in K$$
In definitiva la generica soluzione $s$ di $Ax =b$ è della forma
$$ s = \tilde{s} + t_1w_1 + \ldots +t_kw_k \ \blacksquare$$ ^fe5f64
# 3. Corollario
Dalla dimostrazione di questo teorema segue il seguente corollario.

#Corollario 
> [!cor] del teorema di Rouché-Capelli
Sia $A \in M_{m,n}(K)$.
Allora $\operatorname{rg}(A)=n$ (ovvero il rango è il *massimo* possibile) se e solo se per ogni $b \in K^n$ il sistema lineare $Ax = b$ è *compatibile*.
$$\boxed{\operatorname{rg}(A) = n \iff \forall b \in K^n, \exists s \in K^m: As = b} $$
^4ed5f2

#Dimostrazione 
**DIMOSTRAZIONE** (*Corollario 3.1.*)
Nella dimostrazione del *teorema 1.1.* ([[#^fe5f64]]) abbiamo visto che
$$Ax = b \text{ compatibile}  \iff b \in \operatorname{span}(A^{(1)}, \ldots, A^{(n)})$$
Nella nostra situazione abbiamo che $\operatorname{span}(A^{(1)}, \ldots, A^{(n)}) \subseteq K^n$ e $\dim K^n = n$; pertanto 
$$ \begin{align}\operatorname{rg}(A) \ &\iff \dim(\operatorname{span}(A^{(1)}, \ldots, A^{(n)})) =n = \dim K^n\\ &\iff \operatorname{span}(A^{(1)}, \ldots, A^{(n)})  = K^n \\ & \iff \forall b \in K^n, b \in \operatorname{span}(A^{(1)}, \ldots, A^{(n)}) \\ &\iff \forall b \in K^n, Ax=b \text{ è compatibile} \end{align}$$
$\blacksquare$
# 4. Esempio
Vediamo un esempio che fa uso di questo teorema.
> [!exm] Esempio 4.1.
Considero il sistema lineare
$$\begin{cases}x_1-2x_2+3x_3-x_4 = 1 \\ x_2-x_4 = 2 \end{cases}$$
Lo *"traduciamo"* in termini di matrici e vettori colonna:
$$Ax = b$$
dove
$$A=\begin{pmatrix}1 &-2 & 3 & -4 \\0 & 1 & 0 & -1 \end{pmatrix};x =\begin{pmatrix}x_1\\x_2\\x_3\\x_4 \end{pmatrix}; b=\begin{pmatrix} 1 \\ 2\end{pmatrix}$$
Calcolando $\operatorname{rg}(A)$ e $\operatorname{rg(A|b)}$, ci viene fuori
$$\operatorname{rg}(A) = \operatorname{rg}(A|b)$$
dato che sono entrambi a scala e non hanno righe nulle.
Dunque per il *teorema di Rouché-Capelli* il sistema lineare $Ax = b$ ammette soluzione/i; inoltre la generica soluzione dipende da $4-2 = 2$ elementi.
Si lascia al lettore di completare l'esempio determinando la *generica soluzione* per esercizio.
