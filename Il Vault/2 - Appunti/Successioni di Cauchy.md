---
data: 2023-11-07
corso: "[[Analisi Matematica I]]"
argomento: Successioni di Cauchy
tipologia: appunti
stato: "1"
---
*Definizione di successione di Cauchy; teorema sulla successione di Cauchy; teorema di completezza di R; esiti della dimostrazione del teorema di completezza di R.*
- - -
# 1. Definizione di Successione di Cauchy
#Definizione 
> [!def] Successione di Cauchy.
> Sia $(a_n)_n$ una *successione reale* ([[Successione e Sottosuccessione]], **DEF 1.2.**), allora definiamo $(a_n)_n$ come *successione di Cauchy* se vale la seguente: $$\forall \varepsilon >0, \exists \bar{n}: n,m>\bar{n} \implies |a_n-a_m| < \varepsilon $$

#Osservazione 
>[!rmk] Osservazione 1.1. (convergenza e Cauchy)
> Osserviamo che questa definizione è ben *diversa* dalla nozione di *convergenza*: con la *convergenza* abbiamo *un punto* che si avvicina ad un certo valore, invece qui abbiamo *due punti* $a_n$ e $a_m$ che si *"avvicinano"* tra di loro.
Tuttavia in $\mathbb{R}$ è possibile dire che questi sono *equivalenti* in quanto ci troviamo in uno *spazio metrico*. Dimostreremo questa affermazione con due teoremi.

#Teorema
> [!thm] di caratterizzazione delle successioni convergenti 
> Se una successione in $\mathbb{R}$ è convergente, allora è di *Cauchy*.
^6e84e5

#Dimostrazione
**DIMOSTRAZIONE** del *teorema 1.2.* ([[#^6e84e5]])
Sia $(a_n)_n$ convergente, allora $$\lim_n a_n = \bar{a} \in \mathbb{N}$$Cioè $$\begin{gather}\forall \varepsilon >0, \exists \bar{n}: \forall n \\ n > \bar{n} \implies |a_n-\bar{n}| < \frac{\varepsilon}{2}< \varepsilon \end{gather}$$Allora se $m,n > \bar{n}$ abbiamo i seguenti: $$\begin{gather}\forall \varepsilon >0, \exists \bar{n}: \forall n,m \\ n > \bar{n} \implies |a_n-\bar{a}| < \frac{\varepsilon}{2} \\ m > \bar{n}  \implies |a_m - \bar{a} | < \frac{\varepsilon}{2}\end{gather}$$Allora sommandoli abbiamo $$|a_n-a_m|\leq|a_n-\bar{a} + a_m - \bar{a}| \leq |a_n-\bar{a}|+|a_m-\bar{a}| < 2\frac{\varepsilon}{2} = \varepsilon$$Dunque abbiamo verificato $$\forall \varepsilon >0, \exists \bar{n}: n,m>\bar{n} \implies  |a_n-a_m| < \varepsilon$$che è la definizione della *successione di Cauchy*.
## Completezza di R
#Teorema 
> [!thm] Completezza di R.
> In $\mathbb{R}$ le *successioni di Cauchy* sono *convergenti*.
^bc7fc3

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema di completezza di R* ([[#^bc7fc3]])
La dimostrazione si articola in tre parti, ad ognuna con un suo esito.
1. Una *successione di Cauchy* è *limitata*. Infatti $(a_n)_n$ di Cauchy significa $$\forall \varepsilon>0, \exists \bar{n}: n,m>\bar{n} \implies |a_m-a_n| < \varepsilon$$Fissando $\varepsilon = 1$ ottengo $$\exists \bar{n}: n,m>\bar{n} \implies |a_n-a_m| < 1$$Quindi $$\begin{gather}m>\bar{n} \implies |a_{\bar{n}+1}-a_m|<1\end{gather}$$Analogamente $$n > \bar{n} \implies |a_n - a_{\bar{n}+1}| < 1$$Quindi $$a_n \in (a_{\bar{n}+1}-1, a_{\bar{n}+1}+1)$$Allora $(a_n)_n$:
	1. Fino a $\bar{n}$ si comporta come vuole;
	2. Da $\bar{n}+1$ in poi tutti i suoi valori immagine $a_{n}, n>\bar{n}$ sono *tutti* dentro un intervallo fissato. Ovvero è questa successione è limitata.

2. Per il [[Secondo teorema di Bolzano-Weierstraß]], se $(a_n)_n$ è di *Cauchy* ed è *limitata* (ed è reale per ipotesi) allora esiste una successione estratta convergente.

3. "Se una *successione di Cauchy* ha una sottosuccessione convergente, allora la successione originaria è convergente.": infatti teniamo in conto i seguenti:
   - $(\ast)$ $(a_n)_n$ è di Cauchy vuol dire $$\begin{gather}\forall \varepsilon >0, \exists \bar{n}: \forall n,m\\ n,m>\bar{n} \implies |a_m-a_n|<\frac{\varepsilon}{2}\end{gather}$$
   - $(\ast\ast)$ $(a_{n_k})_k$ è *convergente a* $\bar{a}$ vuol dire $$\lim_k a_{n_k}=\bar{a} \iff\begin{gather}\forall \varepsilon >0, \exists \bar{k}: \forall k \\k>\bar{k} \implies|a_{n_k} - \bar{a}|<\frac{\varepsilon}{2}  \end{gather}$$
Ora per far valere $m > \bar{n} \land k > m \implies k > \bar{n}$ prendiamo e $k > \max\{\bar{n}, \bar{k}\}$. Ora li *"combiniamo"* e valuto $|a_n - \bar{a}|$. Ora vale $a_{n_k} > a_m$; allora $\forall n>\bar{n}, k>\max\{\bar{n},\bar{k}\}$$$|a_n-\bar{a}| \leq |a_n - a_{m} +a_{n_k}-\bar{a}| < |a_n-a_{n_k}| + |a_{n_k}-\bar{a}| <2\frac{\varepsilon}{2} =\varepsilon$$e abbiamo esattamente la definizione di $$\lim_{n}a_n = \bar{a} \ \blacksquare$$
