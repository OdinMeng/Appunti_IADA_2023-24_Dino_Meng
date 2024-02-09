---
data: 2023-11-25
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Teorema di struttura per Applicazioni Lineari
tipologia: appunti
stato: "1"
---
*Enunciato, dimostrazione ed esempio del teorema di struttura per le applicazioni lineari.*
- - -
# 1. Enunciato
Ora vediamo come un'*applicazione lineare* è completamente determinata da dove *"finiscono"* le basi.

#Teorema 
> [!thm] di struttura per le applicazioni lineari
> Siano $V, V'$ due *spazi vettoriali* di $K$, finitamente generati ([[Dimensione#^3a9321]]).
> **ATTENZIONE!** Ciò non deve necessariamente significare che le loro dimensioni devono coincidere.
> Allora prendendo $\mathcal{B}$ una base del dominio del tipo
> $$\mathcal{B} = \{v_1, \ldots, v_n\} $$
> Ora siano $v_1, \ldots, v_n'$ dei vettori *qualsiasi* in $V'$.
> Allora *esiste* ed è *unica* un'applicazione lineare ([[Definizione di Applicazione Lineare#^9b39f9]]) $f: V \longrightarrow V'$ che soddisfa le seguente condizione: $f(v_i) = v_i'$
> $$\boxed{\exists f: V \longrightarrow V'|  \forall i \in \{1, \ldots, n\} , f(v_i)=v_i'}  $$
^2f37c1

# 2. Dimostrazione
#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 1.1.* ([[#^2f37c1]])
Per questa dimostrazione usiamo una tecnica *particolare*: questa consiste prima nel *supporre* l'esistenza di tale funzione, di dimostrarne l'*unicità*, ottenendo alla fine così degli *"indizi"* per costruire la funzione supposta.
Sia $v \in V$; per ipotesi $\mathcal{B}$ è una *base* ([[Definizione di Base#^def430]]) di $V$, quindi per definizione abbiamo che $v \in \operatorname{span(\mathcal{B})}$. Allora si scrive in *maniera unica* ([[Definizione di Base#^128180]]) che
$$v = \lambda_1 v_1 +\ldots + \lambda_n v_n $$
Allora
$$f(v) = f(\lambda_1 v_1 + \ldots + \lambda_n v_n) $$
Per le proprietà di $f$ sappiamo che
$$f(v) = \lambda_1 f(v_1)+\ldots+\lambda_nf(v_n) $$
Per ipotesi abbiamo supposto che $f(v) = v'$; pertanto
$$f(v) = \lambda_1 v_1' + \ldots \lambda_n v_n' $$
Quindi l'immagine di $v \in V$ è *univocamente* determinata dalle proprietà supposte vere per $f$.
Pertanto sappiamo che se questa $f$ esiste, allora questa è *unica*.
Ora *"troviamo"* l'applicazione lineare $f$, che in realtà è già stata trovata: quindi usiamo l'*"indizio"* lasciato sopra definendo $f(v)$ nel modo seguente e dimostrando che questa è effettivamente un'applicazione lineare e soddisfa la condizione imposta nell'enunciato.
$$f(v) := \lambda_1 v_1' + \ldots +\lambda_n v_n' $$
1. (*l'immagine di $f(v_i)$ coincide con $v_i'$*) Qui basta imporre $(\lambda_1, \ldots, \lambda_i, \ldots, \lambda_n) = (0, \ldots, 1, \ldots, 0)$; allora
   $$f(v_i) = 0+\ldots+v_i' + \ldots +0 = v_i'  \text{ OK}$$
2. (*$f$ è additiva*) Siano $u, v \in V$. Allora voglio dimostrare $f(u) + f(v) = f(u+v)$.
   Dato che $\mathcal{B}$ è base di $V$, allora $u, v$ sono *espressioni uniche* di elementi della base come combinazione lineare.
   Allora
   $$\begin{gather}u = \mu_1v_1+ \ldots + \mu_n v_n \\ v=\lambda_1v_1+\ldots+\lambda_nv_n \\ u+v = (\mu_1+\lambda_1)v_1 + \ldots + (\mu_n \lambda_n)v_n\end{gather}$$
   Ora calcoliamo $f(u)$ e $f(v)$ separatamente
   $$\begin{gather}f(u) = \mu_1v_1' + \ldots + \mu_nv_n'; f(v) = \lambda_1 v_1' + \ldots + \lambda_n v_n'\\ \implies f(u)+f(v) = (\mu_1+\lambda_1)v_1'+\ldots+(\mu_n+\lambda_n)v_n' \end{gather}$$
   Invece calcoliamo $f(u+v)$ e scopriamo che
   $$\boxed{f(u+v)} = (\mu_1+\lambda_1)v_1'+ \ldots+(\mu_n+\lambda_n)v_n' = \boxed{f(u)+(v)} $$
3. ($f$ è *omogenea*) Analogamente si dimostra che $f$ è *omogenea*. Si lascia di dimostrare questo al lettore per esercizio. $\blacksquare$

# 3. Conseguenza
**OSS 3.1.** (*Le immagini di un sistema di generatore sono un sistema di generatori per l'immagine di $f$*) Consideriamo $f: V \longrightarrow V'$ un'applicazione lineare tra spazi vettoriali finitamente generati.
Sia $\mathcal{B} = \{v_1, \ldots, v_n\}$ una base di $V$: allora se considero le loro immagini $f(v_1), \ldots, f(v_n)$ allora vedo che questi sono un *sistema di generatori* per $\operatorname{im} f$ ([[Definizione di Nucleo e immagine#^5f82a3]]).
Infatti se $v' \in \operatorname{im} f$ allora $\exists v \in V: f(v) = v'$
Quindi, dato che $\mathcal{B}$ è base di $V$, possiamo scrivere
$$f(v) = f(\lambda_1v_1 + \ldots+\lambda_nv_n) = \ldots = \lambda_1 f(v_1) + \ldots +\lambda_n f(v_n) $$
Per il *teorema* appena enunciato e dimostrato sappiamo che $f(v_i) = v_i'$; allora
$$v' = \lambda_1 v_1' + \ldots + \lambda_n v_n' $$
Allora
$$\forall v' \in \operatorname{im} f, v' \in \operatorname{span}(v_1', \ldots, v_n') \implies \operatorname{im} f = \operatorname{span}(v_1', \ldots, v'_n)$$
Inoltre notiamo che abbiamo *solo* usato il fatto che $\mathcal{B}$ è un *sistema di generatori* per $V$. ^8fd96a

#Corollario 
>[!cor] Corollario 3.1. (relazione tra l'immagine e lo span degli immagini di una applicazione lineare)
>Sia $f: V \longrightarrow V'$ una *applicazione lineare*. 
>Sia $\mathcal{B} = \{v_1, \ldots, v_n\}$ una base di $V$; siano $v_1', \ldots, v_n'$ elementi di $V'$.
>Sia inoltre $f(v_i) = v_i', \forall i \in \{1, \ldots, n\}$.
>Allora 
>$$\boxed{\operatorname{im}f = \operatorname{span}(v_1', \ldots, v_n')} $$

^7da006

# 4. Esempio
#Esempio 
> [!exm] esempio su $\mathbb{R}^2$ su base canonica $\mathcal{E}$
> Considero in $\mathbb{R}^2$ la sua base standard $\mathcal{E} = (e_1, e_2)$, dove
> $$e_1 = \begin{pmatrix}1 \\ 0 \end{pmatrix}; e_2 = \begin{pmatrix} 0 \\ 1\end{pmatrix}$$
> Ora considero due elementi qualsiasi in $\mathbb{R}^2$
> $$w_1 = \begin{pmatrix}  2 \\ 3\end{pmatrix}; w_2 = \begin{pmatrix} -1 \\ 4\end{pmatrix} $$
> Per il *teorema di struttura di applicazioni lineare*, sappiamo che esiste ed è unica un'applicazione lineare $f: \mathbb{R}^2 \longrightarrow \mathbb{R}^2$ tale che
> $$f(e_1) = w_1, f(e_2) = w_2 $$
> Ora ci chiediamo il seguente: chi è l'immagine attraverso $f$ di un generico elemento $\begin{pmatrix}x \\ y \end{pmatrix} \in \mathbb{R}^2?$
> Per farlo scrivo questo generico vettore esprimendolo in termini di $e_1, e_2$; ovvero
> $$\begin{pmatrix}x \\ y \end{pmatrix}= xe_1 + ye_2$$
> Per il *teorema di struttura*, 
> $$ f\begin{pmatrix}x \\ y \end{pmatrix} = x \cdot \begin{pmatrix} 2 \\ 3\end{pmatrix} +  y \cdot \begin{pmatrix}-1 \\ 4 \end{pmatrix} = \begin{pmatrix}2x-y \\ 3x+4y \end{pmatrix}$$

#Esempio 
> [!exm] quando non può esistere la funzione
> Osserviamo che invece non può esistere un'applicazione lineare tale che
> $$ \begin{gather}f\begin{pmatrix}1 \\ 0 \end{pmatrix} = \begin{pmatrix}1 \\ 2 \end{pmatrix}\\ f \begin{pmatrix}0 \\ 1 \end{pmatrix} = \begin{pmatrix}-1 \\ 1 \end{pmatrix}\\ f\begin{pmatrix}1 \\ 1 \end{pmatrix} = \begin{pmatrix}11 \\ 17 \end{pmatrix} \end{gather}$$
> In quanto questi tre elementi non sono *linearmente indipendenti*, quindi non formano una *base* per $\mathbb{R}^2$.