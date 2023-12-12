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
- [[Assiomi di Peano, il principio di induzione]], **DEF 4.2.1.** (*Successione a valore in A*)
- [[Successione e Sottosuccessione]]
Inoltre facciamo alcune osservazioni preliminari che ci possono aiutare a comprendere il contenuto di questa pagina.
**OSS 0.A.** Posso rappresentare una *successione* sul piano cartesiano così:
![[Pasted image 20231103224507.png]]
Oppure volendo anche come dei punti dell'*asse reale*.
# 1. Limite di Successione
**PROBLEMA.** Voglio introdurre il concetto di *limite* ([[Definizione di Limite di funzione]]) per una *successione* ([[Successione e Sottosuccessione]]). 
Innanzitutto mi chiedo quale sia il *dominio* di una qualsiasi *successione*: la risposta è l'insieme dei numeri naturali $\mathbb{N}$. 
Se posso definire il limite di una funzione che si avvicina ad un *punto di accumulazione del dominio*, allora posso certamente definire il limite di una successione che si avvicina ad un punto di accumulazione per $\mathbb{N}$. Tuttavia come osservato ([[Punti di aderenza e di accumulazione]], **ESEMPIO 3.3.**), non ci sono punti di accumulazione in $\mathbb{R}$.
Quindi bisogna *"ampliare"* i nostri orizzonti e considerare invece $\mathbb{\tilde{R}}$, in particolare il simbolo $+\infty$. Per definizione possiamo definire il punto di accumulazione di $+\infty$ come una semiretta qualsiasi $(a, +\infty)$.
In questo caso possiamo prendere $+\infty$ come punto di accumulazione per $\mathbb{N}$. 
Allora *l'unico valore* di cui ha senso calcolare il limite di una successione è $+\infty$; di conseguenza possiamo scrivere $$\lim_{n \to +\infty} a_n = \lim_{n}a_n$$in una maniera univoca.

**DEF 1.1.** (*Definizione di limite di successione*)
Allora definiamo $$\lim_{n}a_n = L$$come $$\begin{gather}\forall V \text{ di }L, \exists U \text{ di }+\infty: \forall n, \\ n \in U \implies a_n \in V \end{gather}$$ovvero, supponendo $L \in \mathbb{R}$, $$\begin{gather}\forall \varepsilon >0, \exists N>0: \forall n, \\n > N \implies |a_n-L|<\varepsilon \end{gather}$$oppure se $L \in \mathbb{\tilde{R}}$, $$\begin{gather} \forall M > 0, \exists N >0: \forall n, \\ n > N \implies a_n > M \text{ (}a_n < -M\text{ per }-\infty\text{)}\end{gather}$$
Graficamente ho una situazione del tipo
![[Pasted image 20231103224524.png]] ^ef60f6

**DEF 1.2.** (*Convergenza e divergenza*)
Se $$\lim_n a_n = L$$esiste e il limite è un *numero* $L \in \mathbb{N}$, allora si dice che $a_n$ è **convergente**.
Altrimenti se esiste ma ho $$\lim_n a_n = \pm \infty$$allora si dice che $a_n$ è **divergente a** $\pm \infty$.

## Proprietà del limite di successione
**OSS 1.1.** Osserviamo che per il *limite di successione* valgono *tutte* le *proprietà dei limiti di funzione* ([[Teoremi sui Limiti di Funzione]]), in quanto stiamo considerando un *caso particolare* di un *caso generale*. 
Quindi valgono le seguenti: ^72d83a
- L'unicità del limite
- Permanenza del segno
- Teorema del confronto
- Teorema dei due carabinieri
- Operazioni sui limiti
- Limite zero e infinitesimo
- Forme indeterminate
Inoltre abbiamo altri *due altri risultati* per le successioni.

**TEOREMA 1.1.**
Sia $(a_n)_n$ una successione a valori in $A$, e $(a_{n_k})_k$ una *successione estratta* di $a_n$ ([[Successione e Sottosuccessione]]).
*Tesi.* Supponendo che $$\lim_n a_n = l$$allora $$\lim_k a_{n_k} = l$$
**DIMOSTRAZIONE.** Il punto cruciale consiste nel seguente.
Se $$\lim_n a_n = l \in \mathbb{R}$$vuol dire $$\begin{gather}\forall \varepsilon >0, \exists \bar{n} >0: \forall n, \\n > \bar{n} \implies |a_n - l|< \varepsilon \end{gather}$$adesso considero la *sotto successione* $(a_{n_k})_k$, *quale numero deve essere superata da* $k$? Ovvero $$\begin{gather}\forall \varepsilon >0, \stackrel{?}{\exists}\bar{k}: \forall n, \\ k > \bar{k} \implies |{a_{n_k}}-l|<\varepsilon \end{gather}$$
Scopriamo che basta scegliere $\bar{k} \geq \bar{n}$ in quanto se i valori $k$ di $n_k$ è *strettamente crescente*, allora sicuramente ho $$n_k \geq k \geq \bar{n}$$
In parole, l'idea consiste nel pensare che il *"peggior" caso* di *successione estratta* di una *successione* può essere la *successione stessa* (infatti estraggo dalla successione la stessa successione); quindi se considero la stessa successione posso avere $\bar{k} = \bar{n}$. In altri casi devo scegliere $\bar{k}$ in un punto più *"lontano"*, in particolare se $${a_\bar{n}} \not \in (a_{n_k})_k$$
**TEOREMA 1.2.**
Se la successione $(a_n)_n$ è *monotona*, allora esiste *sempre* il limite$$\lim_{n}a_n$$
**COROLLARIO 1.2.a.** 
Se $(a_n)_n$ è *monotona* e *limitata* ([[Successione e Sottosuccessione]], **DEF 1.3.**), allora sicuramente il limite $$\lim_{n}a_n$$è *convergente*.

**OSS 1.2.** Se consideriamo la successione $(a_n)_n$ come la *restrizione* del dominio da $A \subseteq \mathbb{R}$ a $\mathbb{N} \subseteq \mathbb{R}$ di una qualsiasi *funzione di variabile reale* ([[Funzioni]], **DEF 1.1.**), ovvero se considero $$f: A\subseteq[0, +\infty) \longrightarrow B$$e $$({a_n})_n: A\cap \mathbb{N} \longrightarrow \mathbb{R}$$allora posso fare la seguente osservazione.
Se conosco il *limite della funzione* $$\lim_{x \to +\infty}f(x) = l$$allora in automatico conosco pure il *limite della successione* $$\lim_{n}a_n = l$$
Notiamo che vale anche il *viceversa* (inversa); se conosco il *limite di una successione*, allora conosco anche il *limite di una funzione* per $x \to +\infty$.
**ATTENZIONE!** Da qui non bisogna dedurre vale anche la *contraria*; se il limite della funzione per $x \to +\infty$ *non* è definita, allora ciò *non* significa che $\lim_n a_n$ *non* è neanche definita. Infatti $\lim_n a_n$ può esistere quando non esiste $\lim_{x \to +\infty}f(x)$.

**ESEMPIO 1.1.** Vediamo alcuni esempi di quest'ultima osservazione.
1. $$\lim_{x \to +\infty}\frac{1}{x}=0 \implies \lim_{n}\frac{1}{n}=0$$
2. $$\lim_{x \to +\infty}\sqrt{x} = +\infty \implies \lim_n \sqrt{n} = +\infty$$
3. $$\not \exists \lim_{x \to +\infty}\sin(n \pi) \cancel{\impliedby} \lim_{n}\sin(n\pi) = 0$$
# 2. Voci correlate
- [[Esempi di Limiti di Successione]]