---
data: 2023-10-05
corso: "[[Analisi Matematica I]]"
argomento: Richiami sui Numeri Razionali
tipologia: appunti
stato: "1"
---
*Richiami sui Numeri Razionali (propedeutica per studiare i numeri reali): la costruzione dei numeri interi $\mathbb{Z}$; la costruzione dei numeri razionali $\mathbb{Q}$; l'insufficienza di $\mathbb{Q}$ per rappresentare tutti i numeri. Dimostrazione dell'incommensurabilità di $\sqrt{2}$*
- - -
# 1. La costruzione dei numeri interi
#Osservazione 
> [!rmk] la costruzione di $\mathbb{Z}$ a partire da $\mathbb{N}$
Osserviamo che a partire dai [numeri naturali](Struttura%20dell'insieme%20dei%20numeri%20naturali) $\mathbb{R}$ è possibile costruire un altro insieme numerico più *completo* che ci permette di fare altre operazioni (oltre alla somma e moltiplicazione), ovvero i numeri *interi relativi* $\mathbb{Z}$ (*Zahl*), che viene definita come $$\mathbb{Z}:= \{\ldots,-2,-1,0,1,2,\ldots\}$$in cui ad ogni numero positivo $z$ corrisponde ad un numero *negativo* per cui ci permette di fare una nuova operazione: ovvero la *sottrazione $-$*.
Tuttavia questa non è sufficiente in quanto questa *costruzione* non ci permette di fare un'altra operazione molto importante, ovvero la *divisione* $\div$. 
# 2. La costruzione dei numeri razionali
#Osservazione 
> [!rmk] la costruzione di $\mathbb{Q}$ a partire da $\mathbb{N}$, $\mathbb{Z}$
Quindi a partire da $\mathbb{Z}$ è possibile costruire i numeri razionali $\mathbb{Q}$ (*Quoziente*), dove un numero $q \in \mathbb{Q}$ è un quoziente di un numero intero $\mathbb{Z}$ e di un numero razionale $\mathbb{N}$; $$\mathbb{Z} := \{\frac{p}{q} \text{ con }p\in\mathbb{Z}, q \in \mathbb{N}\diagdown\{0\}
\} $$I numeri razionali quindi ci permettono *non solo* di *contare*, ma anche di *misurare*, dato che possiamo precisamente misurare delle grandezze tramite questi numeri.
Tuttavia non posso misurare *tutto*; infatti se voglio descrivere un oggetto geometrico con i numeri, ovvero un quadrato con il lato $l=1$, non posso misurare la lunghezza della diagonale del quadrato.
Infatti questo segmento si dice una *grandezza incommensurabile*.

#Teorema 
> [!thm] l'incommensurabilità di $\sqrt{2}$
> Non esistono $n,k \in \mathbb{N}$ tali che $$(\frac{n}{k})^2=2$$ 
^4b9050

**DIMOSTRAZIONE** del *teorema 2.1.* ([[#^4b9050]]) 
Qui ragioniamo *per assurdo*; ipotizziamo che la tesi sia vera invece che falsa, poi per trovare un assurdo, una contraddizione.
1. Supponiamo che esistano $n,k \in \mathbb{N}$ tali che $$(\frac{n}{k})^2=2$$inoltre non è restrittivo supporre che questi $n,k$ non abbiano fattori in comune (quindi che siano ridotti ai minimi termini).
2. Ora, $$\begin{align} &\frac{n^2}{k^2} = 2 \\ \text{allora }& n^2=2k^2 \\ \text{allora }& 2 \ | \ n^2 \text{ è vera;} \end{align}$$
3. Considerando la scomposizione di $n$ in numeri primi, ovvero $$n = p_1^{k_1}p_2^{k_2}\ldots p_n^{k_n}$$allora se $n^2$ è divisibile per un numero primo $p_n$, allora per forza anche $n$ è divisibile per lo stesso numero primo, in quanto entrambi vengono moltiplicate per lo stesso $p_n$.
4. $$\begin{align} \text{allora }& 2 \ | \ n\text{ è vera;} \\ \text{allora }& n = 2m \\ \text{allora }& \frac{4n^2}{k^2} = 2 \\ \text{allora }& 4n^2 = 2k^2 \\ \text{allora }& k^2 = 2n^2 \\ \text{allora }& 2 \ | \ k \text{ è vera}\\  \text{ma allora anche }& 2 \ | \ n \text{ è vera} \end{align}$$
5. Quindi sia $n$ che $k$ che sono pari, ciò vuol dire che hanno un fattore in comune (ovvero $2$); ciò contraddice quello che abbiamo detto all'inizio, ovvero che $n$ e $k$ sono ridotti ai minimi termini. Di conseguenza non è possibile che esistano $n$ e $k$. $\blacksquare$

**CONCLUSIONE.** Quindi i numeri razionali $\mathbb{Q}$ non sono sufficienti per misurare la diagonale di un quadrato; infatti è impossibile definire un $x \in \mathbb{Q}$ tale che $x^2 = 2$.