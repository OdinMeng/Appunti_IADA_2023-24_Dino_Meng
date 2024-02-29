---
data: 2024-02-05
corso: "[[Analisi Matematica I]]"
argomento: Carattere di una Serie
tipologia: appunti
stato: "1"
capitolo: Serie (cenni)
---
- - -
*Carattere di una serie: definizione di serie convergente, divergente, indeterminata; esempi; osservazioni sulle serie convergenti.*
- - -
# 0. Osservazione preliminare
#Osservazione 
> [!rmk] Problema preliminare
> Ora vogliamo capire come si *comporta* la ridotta $(s_n)_n$ a partire dal termine generale della serie $(a_n)_n$ ([[Definizione di Serie]]).

# 1. Definizione di serie convergente, divergente e indeterminata
#Definizione 
> [!def] Serie convergente, divergente, indeterminata
> Data la serie
> $$
> \sum^{+\infty}_{ n \in \{0, 1\}}a_n \sim ((a_n)_n, (s_n)_n) 
> $$
> questa si dice:
> - *convergente* se esiste finito il limite
>   $$
> \lim_n s_n = s \in \mathbb{R}\ (\mathbb{C})  
> $$
> in tal caso $s$ si dice la *somma della serie*.
> - *divergente* se invece esiste ma non è finito il limite
> $$
> \lim_n s_n = \pm \infty \in \tilde{\mathbb{R}}
> $$
> - *indeterminata* se non esiste il limite
>   $$\not\exists\lim _n s_n $$
>
>La *"caratteristica"* di essere convergente, divergente o indeterminata si dice il *carattere della serie*.

# 2. Osservazioni sulle serie convergenti
Notiamo che le *serie convergenti* hanno certe proprietà interessanti.

#Osservazione 
> [!rmk] Le ridotte di una serie condivide il carattere della serie padre
> Consideriamo una qualsiasi *serie convergente* e un suo qualsiasi *resto $k$-esimo*
> $$
> \sum^{+\infty}_{n=0}a_n ; \sum^{+\infty}_{n=0}a_{n+k}
>  $$
>  Ho che entrambe le serie hanno *lo stesso carattere*.
>  
>  Considerando $s_n$ come la ridotta di $\sum a_n$, $\sigma_n$ la ridotta di $\sum a_{n+k}$,, troviamo una relazione tra le due ridotte, ovvero
>  $$ 
>  \sigma_n = s_{n+k}-s_{k-1}
>  $$
>  Infatti, guardando il membro destro dell'uguaglianza, il *primo termine* rappresenta la somma di tutti i termini della successione $(a_n)_n$ fino a $n+k$; invece il *secondo termine* *"toglie"* gli elementi che non appartengono al resto $k$-esimo, ovvero i termini $(a_0, \ldots, a_{k-1})$.
>  In definitiva possiamo dire che le ridotte differiscono per una *costante*.

#Osservazione 
> [!rmk] Le serie convergenti formano un spazio vettoriale su $\mathbb{R}$
> Considero una qualsiasi serie e un scalare $\lambda \in \mathbb{R}$;
> $$ 
> \sum^{+\infty}_{n=0}a_n; \sum^{+\infty}_{n=0}\lambda \cdot a_n
> $$
> Troviamo che entrambe le serie hanno lo *stesso carattere*. In particolare, se la serie è convergente allora *"scalandolo"* per un qualsiasi numero rimane comunque convergente.
>
> Adesso consideriamo due serie convergenti del tipo
> $$ 
> \sum^{+\infty}_{n=0}a_n; \sum^{+\infty}_{n=0}b_n
> $$
> Se sono entrambi *convergenti*, allora sicuramente sarà convergente pure la *somma* tra le due serie definita come
> $$ 
> \sum^{+\infty}_{n=0}a_n+ \sum^{+\infty}_{n=0}b_n:= \sum^{+\infty}_{n=0}(a_n+b_n)
> $$
> allora la serie ottenutosi a destra sarà pure *convergente*.
>
> Infatti, da questa breve osservazione si evince che le *serie convergenti* formano un $\mathbb{R}$-*spazio vettoriale* ([[Spazi Vettoriali#^7e2c4e]]).

# 3. Esempi di studio delle serie
*Nota: la maggior parte degli esempi verranno tratti dalla pagina* [[Definizione di Serie]]

#Esempio 
> [!exm] Serie costante
> Prendiamo la serie
> $$ 
> S=\sum^{+\infty}_{n=0}1
> $$
> Sappiamo che la successione delle somme parziali è $s_n = n+1$.
> Ma allora da ciò segue che
> $$
> \lim_n s_n = \lim_n (n+1) = +\infty
> $$
  Allora la serie è *divergente*.

#Esempio 
> [!exm] Serie identità
> Prendiamo adesso la serie
> $$ 
> S = \sum^{+\infty}_{n=0}n = 1+2+\ldots
> $$
> Vediamo che
> $$ 
> \lim_n s_n = \lim_n \frac{(n)(n+1)}{2} = +\infty
> $$
> Allora anche questa serie è divergente.

#Esempio 
> [!exm] Serie binaria
> Ora prendiamo la serie
> $$
> S= \sum^{+\infty}_{n=0}(-1)^n
> $$
> Vediamo che
> $$
> s_n = \begin{cases}-1, n \in \mathbb{P}\\1, n \in \mathbb{D} \end{cases} 
> $$
> Ma allora in questo caso il limite
> $$
> \lim_n s_n 
> $$
> *non esiste*, dal momento che scegliendo opportune sotto successioni otteniamo valori diversi.

#Esempio 
> [!exm] Serie geometrica per $\rho=0.5$
> Prendiamo la serie geometrica per $\rho=\frac{1}{2}$.
> Ovvero,
> $$
> S=\sum^{+\infty}_{n=0}\frac{1}{2^n}=1+\frac{1}{2}+\frac{1}{2^2}+\ldots+\frac{1}{2^n}+\ldots
> $$
> Allora abbiamo
> $$
> s_n = 2(1-\frac{1}{2^n}) \implies \lim_n s_n = 2(1-0)=2
> $$
> Allora la serie $S$ è *"convergente con somma $2$*.

#Esempio 
> [!exm] Serie geometrica generalizzata
> Ora generalizziamo l'esempio precedente per un $\rho \in \mathbb R$.
> Ovvero,
> $$ 
> S = \sum^{+\infty}_{n=0}\rho^n
> $$
> Ora distinguiamo casi diversi.
> Per $\rho=1$, osserviamo che la serie si comporterà come la *serie costante* (ovvero $\sum_{0\leq n < +\infty} 1$), dunque $S$ diventa *divergente*.
> Invece per $\rho \neq 1$, abbiamo che la *successione delle ridotte parziali* è
> $$ 
> s_n = \frac{1-\rho^{n+1}}{1-\rho} \implies \lim_n s_n= \lim_n \frac{1-\rho^{n+1}}{1-\rho}
> $$
> Notiamo che *"l'unica parte che si muove"* è $\rho^{n+1}$; studiamo dunque solo il limite
> $$
> \lim_n \rho^n= \begin{cases}+\infty, \rho > 1 \\ 0 , -1<\rho<1  \\ \not\exists, \rho\leq -1\end{cases} 
> $$
> Dunque deduciamo che
> $$ 
> \boxed{\lim_n s_n = \begin{cases}+\infty, \rho \geq 1 \\ \frac{1}{1-\rho}, -1<\rho<1 \\ \not \exists, \rho \leq -1 \end{cases}}
> $$
> Allora la serie è *divergente* per $\rho \geq 1$, *convergente* per $\rho \in (-1, 1)$, e *indeterminata* per $\rho \leq -1$.

#Esempio 
> [!exm] Serie armonica
> Ora vogliamo studiare il carattere della serie
> $$ 
> S = \sum^{+\infty}_{n=1}\frac{1}{n}
> $$
> Consideriamo la successione $(s_n)_n$.
> $$
> \begin{align}
> &s_1 = 1 \\ &s_2 = 1+\frac{1}{2} \\ & s_3 = 1+ \frac{1}{2}+\frac{1}{3} \\ & s_4 =1+\frac{1}{2}+\frac{1}{3}+\frac{1}{4} \geq 1 + 2 + \frac{1}{4}+\frac{1}{4} \geq 1 + 2 \frac{1}{2} \\ &\vdots \\ & s_8 = 1+ \ldots+ \frac{1}{8} \geq 1+\frac{1}{2}+2\frac{1}{4}+4\frac{1}{8} = 1+3\frac{1}{2} \\ & s_{2^n}=1+\frac{1}{2}+\ldots+\underbrace{\frac{1}{2^{n-1}}+\ldots+\frac{1}{2^n}}_{2^{n-1} \text{ termini}}
> \end{align}
> $$
> Ma allora svolgendo un'operazione simile per $s_4, s_8$, possiamo minorare $s_{2^n}$ come
> $$
> s_{2^n} \geq 1+\frac{1}{2}+2\frac{1}{4}+4\frac{1}{8}+\ldots+2^{n-1}\frac{1}{2^n} = 1+\frac{n}{2}
> $$
> Pertanto, per il teorema del confronto ([[Limite di Successione#^72d83a]]), il limite è
> $$ 
> \lim_n s_{2^n} = +\infty
> $$
> Allora dato che stiamo considerando una *sottosuccessione su* $s_n$, anche il limite $s_n$ è 
> $$
> \lim_n s_n =+\infty
> $$
> (*N. B.* dimostreremo questo risultato nelle pagine successive, considerando le *successioni a termini positivi*).
> Pertanto la serie armonica è *divergente*.

^869811

#Esempio 
> [!exm] Serie di Mengoli
> Consideriamo la serie
> $$
>  S = \sum^{+\infty}_{n=1}\frac{1}{n(n+1)}=\frac{1}{(1)(2)}+\frac{1}{(2)(3)}+\ldots+\frac{1}{(n)(n+1)}+\ldots
>  $$
>  Vogliamo determinare il carattere della serie $S$ (di Mengoli).
>  Innanzitutto osserviamo che
>  $$
>  \frac{1}{n(n+1)}=\frac{1}{n}-\frac{1}{n+1} 
>  $$
>  Allora, considerando la successione delle ridotte di $S$ abbiamo una *serie telescopica*:
>  $$
>  \begin{align}
>  s_n = \frac{1}{1(2)}+\ldots+\frac{1}{n(n+1)}&=1-\frac{1}{2}+\frac{1}{2}-\frac{1}{3}+\ldots+\frac{1}{n}-\frac{1}{n+1}\\&= 1-\frac{1}{n+1}
>  \end{align}
>  $$
>  Di conseguenza il suo limite è
>  $$ 
>  s_n = 1-\frac{1}{n+1} \implies \lim_n s_n =1
>  $$
>  Allora la *serie di Mengoli* è *"convergente con somma $1$"*.

#Esempio 
> [!exm] Problema di Basilea
> Consideriamo la serie
> $$
> S = \sum^{+\infty}_{n=1}\frac{1}{n^2} 
> $$
> Notiamo che questa è *"approssimabile"* con la *serie di Mengoli*; allora si deduce che $S$ è *convergente*. Ma con quale somma?
> Questa domanda venne posta per la prima volta nel *1644* come il *problema di Basilea* ([approfondimenti storici su Wikipedia](https://it.wikipedia.org/wiki/Problema_di_Basilea)) e risolta dal noto matematico *L. Euler*, dimostrando che la somma esatta è
> $$ 
> \frac{\pi}{6}
> $$

**FIGURA 1.** (*Foto di Pietro Mengoli e Leonhard Euler*)
![[Pasted image 20240206132632.png]]