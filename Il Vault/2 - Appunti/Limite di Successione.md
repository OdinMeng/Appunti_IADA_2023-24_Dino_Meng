---
data: 2023-11-01
corso: "[[Analisi Matematica I]]"
argomento: Limite di Successione
tipologia: appunti
stato: "1"
---
*Definizione di limite di successione.*
- - -
# 0. Argomenti ed osservazioni preliminari
Questo argomento richiede la conoscenza degli argomenti seguenti.
- [[Assiomi di Peano, il principio di induzione]]
- [[Successione e Sottosuccessione]]

Inoltre facciamo alcune osservazioni preliminari che ci possono aiutare a comprendere il 
contenuto di questa pagina.

> [!rmk] rappresentazione delle successioni sul piano cartesiano $\pi$ 
> Posso rappresentare una *successione* sul piano cartesiano mediante la maniera rappresentata nella *figura 0.A.*; alternativamente si può rappresentare una successione anche come dei punti sulla *retta reale*. 

**FIGURA 0.A.** (*Osservazione 0.A.*)
![[Pasted image 20231103224507.png]]

# 1. Limite di Successione
#Osservazione 
> [!rmk] origine del concetto
> Voglio introdurre il concetto di *limite* ([[Definizione di Limite di funzione#^c5e4ec]]) per una *successione* ([[Successione e Sottosuccessione#^e6d66f]]). 
> 
   Innanzitutto mi chiedo quale sia il *dominio* di una qualsiasi *successione*: la risposta è l'insieme dei numeri naturali $\mathbb{N}$. 
   Se posso definire il limite di una funzione che si avvicina ad un *punto di accumulazione del dominio*, allora posso certamente definire il limite di una successione che si avvicina ad un punto 
   di accumulazione per $\mathbb{N}$. 
   >
   Tuttavia come osservato ([[Punti di aderenza e di accumulazione#^740a07]]), non ci sono punti di accumulazione in $\mathbb{R}$; quindi bisogna *"ampliare"* i nostri orizzonti e considerare invece $\mathbb{\tilde{R}}$, in particolare il simbolo $+\infty$. Per definizione possiamo definire il punto di accumulazione di $+\infty$ come una semiretta qualsiasi $(a, +\infty)$.
>
   In questo caso possiamo prendere $+\infty$ come punto di accumulazione per $\mathbb{N}$. 
   Allora *l'unico valore* di cui ha senso calcolare il limite di una successione è $+\infty$; di conseguenza possiamo scrivere $$\lim_{n \to +\infty} a_n = \lim_{n}a_n$$in una e sola maniera univoca.

#Definizione 
> [!def] limite di successione 
Allora definiamo $$\boxed{\lim_{n}a_n = L}$$come $$\boxed{\begin{gather}\forall V \text{ di }L, \exists U \text{ di }+\infty: \forall n, \\ n \in U \implies a_n \in V \end{gather}}$$ovvero, supponendo $L \in \mathbb{R}$, $$\begin{gather}\forall \varepsilon >0, \exists N>0: \forall n, \\n > N \implies |a_n-L|<\varepsilon \end{gather}$$oppure se $L \in \mathbb{\tilde{R}}$, $$\begin{gather} \forall M > 0, \exists N >0: \forall n, \\ n > N \implies a_n > M \text{ (}a_n < -M\text{ per }-\infty\text{)}\end{gather}$$
Graficamente ho la *figura 1.1.*.
^ef60f6

**FIGURA 1.1.** (*definizione di limite di successione*)
![[Pasted image 20231103224524.png]]

#Definizione 
> [!def] convergenza e divergenza di una successione
Se $$\lim_n a_n = L$$esiste e il limite è un *numero* $L \in \mathbb{N}$, allora si dice che $a_n$ è *convergente*.
Altrimenti se esiste ma ho $$\lim_n a_n = \pm \infty$$allora si dice che $a_n$ è *divergente a* $\pm \infty$.
# 2. Proprietà di limiti di successione
#Osservazione 
> [!rmk] i teoremi per i limiti di funzioni valgono anche per i limiti di successioni
Osserviamo che per il *limite di successione* valgono *tutte* le *proprietà dei limiti di funzione* ([[Teoremi sui Limiti di Funzione]]), in quanto stiamo considerando un *caso particolare* di un *caso generale*. 
Quindi valgono le seguenti:
>- L'unicità del limite
>- Permanenza del segno
>- Teorema del confronto
>- Teorema dei due carabinieri
>- Operazioni sui limiti
>- Limite zero e infinitesimo
>- Forme indeterminate
^72d83a

Inoltre abbiamo altri *due altri teoremi*, specifici per le successioni.

#Teorema 
> [!thm] le sottosuccessioni convergono allo stesso valore delle loro successioni padre
Sia $(a_n)_n$ una successione a valori in $A$, e $(a_{n_k})_k$ una *successione estratta* di $a_n$ ([[Successione e Sottosuccessione]]).
*Tesi.* Supponendo che $$\lim_n a_n = l$$allora vale la seguente implicazione $$\boxed{\lim_n a_n = l \implies \lim_k a_{n_k} = l}$$
^f55fde

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 1.1.* ([[#^f55fde]]) 
Il punto cruciale consiste nel seguente.
Se $$\lim_n a_n = l \in \mathbb{R}$$vuol dire $$\begin{gather}\forall \varepsilon >0, \exists \bar{n} >0: \forall n, \\n > \bar{n} \implies |a_n - l|< \varepsilon \end{gather}$$adesso considero la *sotto successione* $(a_{n_k})_k$, *quale numero deve essere superata da* $k$? 
Ovvero mi chiedo se vale che $$\begin{gather}\forall \varepsilon >0, \stackrel{?}{\exists}\bar{k}: \forall n, \\ k > \bar{k} \implies |{a_{n_k}}-l|<\varepsilon \end{gather}$$
Scopriamo che basta scegliere $\bar{k} \geq \bar{n}$ in quanto se i valori $k$ di $n_k$ è *strettamente crescente*, allora sicuramente ho $$n_k \geq k \geq \bar{n}$$
In parole, l'idea consiste nel pensare che il *"peggior" caso* di *successione estratta* di una *successione* può essere la *successione stessa* (infatti estraggo dalla successione la stessa successione); quindi se considero la stessa successione posso avere $\bar{k} = \bar{n}$. In altri casi devo scegliere $\bar{k}$ in un punto più *"lontano"*, in particolare se $${a_\bar{n}} \not \in (a_{n_k})_k$$
#Teorema 
> [!thm] esistenza dei limiti delle successioni monotone
Se la successione $(a_n)_n$ è *monotona*, allora esiste *sempre* il limite$$\lim_{n}a_n$$

^b438ed

#Corollario 
> [!cor] convergenza delle successioni monotone e limitate
Se $(a_n)_n$ è *monotona* e *limitata* ([[Successione e Sottosuccessione#^73b5cc]]), allora sicuramente il limite $$\lim_{n}a_n$$è *convergente*.

^f03a7e

#Osservazione 
> [!rmk] nesso tra limiti di funzione e di successione
Se consideriamo la successione $(a_n)_n$ come la *restrizione* del dominio da $A \subseteq \mathbb{R}$ a $\mathbb{N} \subseteq \mathbb{R}$ di una qualsiasi *funzione di variabile reale*, ovvero se considero $$f: A\subseteq[0, +\infty) \longrightarrow B$$e $$({a_n})_n: A\cap \mathbb{N} \longrightarrow \mathbb{R}$$allora posso fare la seguente osservazione.
>
Se conosco il *limite della funzione* $$\lim_{x \to +\infty}f(x) = l$$allora in automatico conosco pure il *limite della successione* $$\lim_{n}a_n = l$$
Notiamo che vale anche il *viceversa* (inversa); se conosco il *limite di una successione*, allora conosco anche il *limite di una funzione* per $x \to +\infty$.
>
**ATTENZIONE!** Da qui non bisogna dedurre vale anche la *contraria* (tesi negata); se il limite della funzione per $x \to +\infty$ *non* è definita, allora ciò *non* significa che $\lim_n a_n$ *non* è neanche definita. Infatti $\lim_n a_n$ può esistere quando non esiste $\lim_{x \to +\infty}f(x)$.

#Esempio 
> [!exm] osservazione 2.2.
Vediamo alcuni esempi di quest'ultima osservazione.
>1. $$\lim_{x \to +\infty}\frac{1}{x}=0 \implies \lim_{n}\frac{1}{n}=0$$
>2. $$\lim_{x \to +\infty}\sqrt{x} = +\infty \implies \lim_n \sqrt{n} = +\infty$$
>3. $$\not \exists \lim_{x \to +\infty}\sin(n \pi) \cancel{\impliedby} \lim_{n}\sin(n\pi) = 0$$
# 2. Voci correlate
- [[Esempi di Limiti di Successione]]