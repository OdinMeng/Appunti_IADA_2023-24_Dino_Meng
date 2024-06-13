---
data: 2024-03-29
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Proprietà dello Schema delle Prove Indipendenti
tipologia: appunti
stato: "1"
capitolo: Nozioni preliminari per la Probabilità
---
- - -
*Risultati relativi allo schema delle prove indipendenti: formula per calcolare la probabilità di un evento elementare; formula per calcolare la probabilità del primo successo al lancio $j$; formula per calcolare $k$ probabilità; la scimmia di Borel*
- - -
# 0. Voci correlate
- [[Definizione di Schema delle Prove Indipendenti]]
# 1. Risultati Relativi allo Schema di Bernoulli
#Proposizione 
> [!prp] risultati relativi allo schema delle prove indipendenti
> Sia $(\Omega, \mathcal{A}, p)$ uno *schema delle prove indipendenti*. Si ha che
> i. *formula per calcolare la probabilità ogni elemento campionario* 
> $$
> p(\{\omega\})=q^{\sum_{\omega_i \in \omega}\omega_i}(1-q)^{n-\sum_{\omega_i \in \omega}\omega_i}
> $$
> ii. *formula per calcolare il primo successo al $j$-esimo esperimento*
> $$
> P(C_j)=(1-q)^{j-1}q
> $$
> iii. *formula per calcolare $k$ successi*
> $$
> p(C_k)=\binom{n}{k}q^k (1-q)^{n-k}
> $$
^5f0571

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^5f0571]]
*N.B. L'importanza di questo teorema è quello prima di capire il ragionamento, poi la formula. Quindi leggere bene!*
i. Già dimostrata in [[Definizione di Schema delle Prove Indipendenti#^0f3594]]
ii. Formalizziamo l'evento $C_j$ come
$$
C_j = \{\omega \in \Omega : \omega_1 = \ldots=\omega_{j-1} = 0 \land \omega_j = 1\}
$$
allora prendo l'intersecatoria e passo alla probabilità
$$
C_j = \bigcap_{i \leq j-1 }\mathcal{C}A \cap A_j \implies p(C_j)=(1-q)^{j-1}q
$$
che è la tesi. Notiamo la *non-dipendenza* da $n$ di questa formula.
iii. Prendiamo $C_k$ come l'evento in cui ho $k$ componenti di $\omega$ per cui *valgono* $1$. Associo ad un dato $\omega \in C_k$ con la *famiglia degli indici* $H$ tali per cui $\omega_{h \in H}=1$. Chiaramente $|H|=k$ (ovvero il numero degli indici per cui ho $k$ successi è proprio $k$ stesso). Quindi posso creare una corrispondenza *biunivoca* tra $\omega \in C_k$ e $H$. Posso provare in questo modo che
$$
|C_k| = \binom{n}{k}
$$
(*a parole, sto prendendo la combinazione di $k$ elementi su $n$ elementi*)
Inoltre, notiamo che per la *formula i.* sappiamo che per un $\omega \in C_k$
$$
p(\{\omega\})= q^k (1-q)^{n-k}
$$
allora ho
$$
p(C_k)=\sum_{\omega \in C_k}p(\{\omega\})=\binom{n}{k}q^k(1-q)^{n-k}
$$
che è la tesi. $\blacksquare$

#Osservazione 
> [!rmk] la somma della probabilità degli eventi elementari è $1$
> Osserviamo che per induzione è possibile provare la somma
> $$
> \sum_{\omega \in \Omega}p(\{\omega\})=1
> $$

# 2. La Scimmia di Borel
#Osservazione 
> [!rmk] la probabilità di avere $0$ successi diventa sempre più piccolo
> Notiamo che la probabilità $A$ di avere $0$ successi (o $n$ insuccessi) si può scrivere come segue.
> $$
> p(A)=(1-q)^n
> $$
> (per una dimostrazione dettagliata vedere [[#^5f0571|1]], *formula 3*)
> Allora posso prendere il limite
> $$
> \lim_n p(A)=\lim_n (1-q)^n=0
> $$
> Ma allora per la definizione del limite, qualunque valore piccolo $\varepsilon>0$ fissato, *deve esistere* un numero di esperimenti $n_0(\varepsilon)$ tale che $1-q^n<\varepsilon$, quindi ho la probabilità di *avere almeno un successo* del $p(\mathcal{C}A)>1-\varepsilon$! Quindi prima o poi c'è sempre la speranza di aver un successo, qualunque valore di $q \in (0,1)$ ho.
> 
> Illustriamo questa osservazione col seguente teorema/esempio.

#Esempio 
> [!exm] la scimmia instancabile di Borel
> Supponiamo di mettere una *scimmia* davanti ad un *laptop*. Riuscirà, pigiando i tasti a caso, a *comporre il primo capitolo di Harry Potter* (che ha circa $5000$ caratteri)?
> 
> Se prendiamo che ci sono $25$ *tasti* sulla tastiera, vediamo che ci sono
> $25^{5000}$ disposizioni, che ha la grandezza di $10^{7000}$. Quindi, ho la probabilità di avere *almeno un successo* del
> $$
> q=25^{-5000}
> $$
> Prendiamo $\varepsilon=\frac{1}{10^{4} }$; per l'osservazione appena vista, abbiamo che esiste un numero di $n_0$ tentativi tali che ho la probabilità di avere almeno un successo
> $$
> p(\mathcal C A)=1-\frac{1}{10^4}=0.9999
> $$
> Quindi ho la probabilità del $99.99\%$ che la scimmia possa comporre il primo capitolo di Harry Potter! Wow! Ma qual è il valore di questo $n_0$?
> Vediamo che
> $$
> (25^{-5000})^{n_0}\leq \frac{1}{10^4} \implies n_0 \geq 4 \cdot 25^{5000}
> $$
> che è un numero decisamente molto grande.
^1606e3

