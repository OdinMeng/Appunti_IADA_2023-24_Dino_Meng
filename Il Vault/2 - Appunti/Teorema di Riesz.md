---
data: 2024-03-29
corso:
  - "[[Analisi Matematica II]]"
argomento: Teorema di Riesz
tipologia: appunti
stato: "1"
capitolo: Struttura di R^N
---
- - -
*Applicazioni lineari $\mathcal{L}(\mathbb{R}^N, \mathbb{R}^M)$: teorema di rappresentazioni delle applicazioni lineari, teorema di Riesz finito dimensionale.*
- - -
# 0. Voci correlate
- [[Definizione di Applicazione Lineare]]
- [[Matrice]]
- [[L'insieme delle Applicazioni Lineari]]
- [[Limite di Funzione in più variabili]]
- [[Campo Scalare e Insieme di Livello]]
# 1. Teorema di Rappresentazioni delle Applicazioni Lineari
#Osservazione 
> [!rmk] le funzioni in più variabili possono essere delle applicazioni lineari
> Notiamo che una certa classe di *funzioni in più variabili* del tipo $f: \mathbb{R}^N \longrightarrow \mathbb{R}^M$ possono essere delle *applicazioni lineari*. Quindi possiamo applicare delle regole particolari per queste funzioni.

#Teorema 
> [!thm] di rappresentazione delle applicazioni lineari
> Sia $\mathcal{L}(\mathbb{R}^N, \mathbb{R}^M)$ lo *spazio delle applicazioni lineari* $L: \mathbb{R}^N \longrightarrow \mathbb{R}^M$. Sia $M_{m,n}(\mathbb{R})$ lo *spazio delle matrici* $m \times n$ a coefficienti in $\mathbb{R}$.
> 
> Fissata una base $\mathcal{B}$ per il dominio $\mathbb{R}^N$ e un'altra base $\mathcal{C}$ per il codominio $\mathbb{R}^M$, deve *esistere una biiezione* tra $\mathcal{L}(\mathbb{R}^N, \mathbb{R}^M)$ e $M_{m,n}(\mathbb{R})$. 
^47405d

# 2. Teorema di Riesz, finito dimensionale
#Teorema 
> [!thm] di Riesz finito dimensionale
> Sia $L$ un *campo scalare*. Ovvero del tipo $L:\mathbb{R}^N \longrightarrow \mathbb{R}$.
> 
> Allora *esiste uno ed uno solo* $\underline{a} \in \mathbb{R}^N$ tale che
> $$
> L(\underline{x})=\langle \underline{a}, \underline{x}\rangle, \forall \underline{x} \in \mathbb{R}^N
> $$
^a9143c

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^a9143c]]
La dimostrazione si articola in *due parti*; una dimostra l'esistenza del vettore $\underline{a}$ e l'altra ne dimostra l'unicità
"$\exists$": Sia $\mathcal{B}$ una base per il dominio, con $\mathcal{B}=\{e_1, \ldots, e_N\}$. Ho inoltre le coordinate del vettore $\underline{x}$ rispetto alla base, scritto come $\pi=(x_1,\ldots,x_N)$. Allora basta calcolare $L(\underline{x})$;
$$
\begin{align}
L(\underline{x})&= L(x_1 \underline{e_1}+\ldots+x_N \underline{e_N}) \\ &= x_1 L(\underline{e_1})+\ldots+x_N L (\underline{e_N}) \\  a_i := L(\underline{e_i}) \implies'' &= x_1 \underline{a_1}+\ldots+x_N \underline{a_N}=\langle \underline{x}, \underline{a} \rangle
\end{align}
$$
che è la prima parte.
"$!$": Supponiamo che esista un vettore $\underline{b} \neq \underline{a} \in \mathbb{R}^N$ tale che
$$
L(\underline{x})=\langle\underline{x}, \underline{b} \rangle
$$
Poiché, come precedentemente dimostrato, abbiamo
$$
L(\underline{x})=\langle\underline{x}, \underline{a}\rangle
$$
ho
$$
\begin{align}
\langle \underline{x}, \underline{a}\rangle = \langle \underline{x}, \underline{b}\rangle&  \implies \langle \underline{x}, \underline{a}-\underline{b} \rangle = 0 
\\ \underline{x}=\underline{a}-\underline{b} & \implies '' = \langle \underline{a}-\underline{b}, \underline{a}-\underline{b}\rangle = 0 \iff \underline{a}=\underline{b}
\end{align}
$$
che contraddice la supposizione iniziale, dandoci un *assurdo*. $\blacksquare$
