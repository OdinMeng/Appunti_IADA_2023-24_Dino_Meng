---
data: 2024-03-22
corso:
  - "[[Analisi Matematica II]]"
argomento: Insieme e Raggio di Convergenza per una Serie di Potenze
tipologia: appunti
stato: "1"
capitolo: Successioni e Serie di Funzioni
---
- - -
*Lemma preliminare (di Abel). Definizione di insieme e raggio di convergenza per una serie di potenze. Proprietà del raggio di convergenza, teorema di struttura dell'insieme di convergenza.*
- - -
# 0. Voci Correlate
- [[Definizioni Relative alle Serie di Funzioni]]
- [[Definizione di Serie di Potenze]]
- [[Criteri sulle Serie di Funzioni]]
# 1. Lemma di Abel
#Lemma 
> [!lem] di Abel
> Sia $S(x, x_0) = \sum_n a_n(x-x_0)^n$ una *serie di potenze*. Se questa serie converge in $\bar{x}$, con $\bar{x}\neq x_0$, allora esso converge assolutamente per ogni $x \in \mathbb{R}$ tale che $|x-x_0| < |\bar{x}-x_0|$. 
> Ovvero,
> $$
> S(\bar{x} \neq x_0, x_0)< +\infty \implies \forall x \in (x_0-\bar{x}, x_0+\bar{x} ), S(x, x_0) < +\infty
> $$
^781069

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^781069]]
Consideriamo fissato un qualsiasi $x \in \mathbb{R} \cap (x_0-\bar{x}, x_0+\bar{x} )$. Allora vale che
$$
|a_n(x-x_0)^n| = |a_n(\bar{x}-x_0)^n| \cdot \underbracket{\left(\frac{|x-x_0|}{|\bar{x}-x_0|}\right)^n}_{< 1}
$$
Poiché la serie $\sum_n a_n(\bar{x}-x_0)$ converge, è *necessario* che il limite dei termini generali sia convergente a $0$ ([[Teoremi Generali sulle Serie#^79c14a]]); ovvero
$$
\lim_n |a_n(\bar{x}-x_0)|^n = 0
$$
Allora per la *definizione* $\varepsilon-\bar{n}$ del limite ([[Limite di Successione#^ef60f6]]), esiste un $M>0$ tale che
$$
|a_n(\bar{x}-x_0)|\leq M
$$
(ovvero ogni termine generale della *serie numerica* è limitata in $\bar{x}$).
Inoltre, definendo
$$
q=\frac{|x-x_0|}{|\bar{x}-x_0|}\ < 1, \forall x
$$
Allora posso metterli assieme, ottenendo la disuguaglianza
$$
|a_n(x-x_0)^n| \leq M \cdot q^n \implies \sum_{n\in\mathbb N}^{+\infty}|a_n(x-x_0)^n| \leq \sum^{+\infty}_{n \in \mathbb N}M \cdot q^n
$$
Allora, sapendo che la serie
$$
\sum^{+\infty}_{n \in \mathbb{N} }M \cdot q^n
$$
converge (si può usare il *criterio del rapporto* ([[Teoremi sulle Serie a Termini positivi#^7d020d]])) a $q \in (0,1)$. Allora, per il *teorema del confronto*, la serie di funzioni è *convergente* (senza dover essere necessariamente *uniforme*). $\blacksquare$

#Corollario 
> [!cor] ulteriori condizioni per la convergenza uniforme
> Sia una *serie di potenze* $\sum_n a_n(x-x_0)^n$ convergente per $\bar{x}\neq x_0$. Per ogni $0<r<|\bar{x}-x_0|$ la *serie di potenze* è *uniformemente convergente* su *ogni compatto* $[x_0-r, x_0+r]$. 
^4987f2

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^4987f2]]
Si può dimostrare con l'*M-test di Weierstraß* ([[Criteri sulle Serie di Funzioni#^29de60]]). Per una dimostrazione completa vedere p. 142 (proposizione 2.11) del Pagani-Salsa. $\blacksquare$

# 2. Raggio e Insieme di Convergenza 
#Definizione 
> [!def] insieme di convergenza per una serie di potenze
> Sia $\sum_n a_n(x-x_0)^n$ una *serie di potenze*. 
> Poniamo l'insieme
> $$
> I := \left\{x \in \mathbb{R}\bigg| \sum^{+\infty}_{n=1} a_n(x-x_0)^n<+\infty\right\}
> $$
> come il suo *insieme di convergenza*. Notiamo che $I \neq \emptyset$, qualunque *serie di potenze* abbiamo.

#Definizione 
> [!def] raggio di convergenza per una serie di potenze
> Sia $\sum_n a_n(x-x_0)^n$ una *serie di potenze* col suo raggio di convergenza $I$.
> Allora poniamo il numero della *retta reale estesa* (ovvero $\mathcal{R} \in \mathbb{\tilde{R} }$) come
> $$
> \mathcal{R}:= \sup\{|x-x_0|, x \in I\}
> $$
> il suo *raggio di convergenza*.
> Si nota che si ha *sempre* $0 \leq \mathcal{R} \leq +\infty$.
^5707e6

# 3. Struttura del Raggio e dell'Insieme di Convergenza
#Teorema 
> [!thm] proprietà del raggio di convergenza
> Il raggio di convergenza $\mathcal{R}$ per una serie di potenze $\sum_n a_n(x-x_0)^n$ con intervallo di convergenza $I$ soddisfa le seguenti:
> i. Se un $x \in \mathbb{R}$ è tale che $|x-x_0|<\mathcal{R}$, allora $\sum_n a_n(x-x_0)^n$ è *assolutamente convergente*.
> ii. Se un $x \in \mathbb{R}$ tale che $|x-x_0|>\mathcal{R}$, allora $\sum_n a_n(x-x_0)^n$ non è *convergente*.
> 
> Viceversa se esiste un $\mathcal{R}' \in [0, +\infty]$ che verifica le *i.*, *ii.*, allora $\mathcal{R}' = \mathcal{R}$ (ovvero è il raggio di convergenza).
^c3d2fb

**DIMOSTRAZIONE** (parziale) del [[#^c3d2fb]].
Dimostriamo solo il punto i. del teorema.
Sapendo che per definizione $\mathcal{R}$ è un *estremo superiore* di un insieme, possiamo usare le *proprietà caratterizzanti* di un $\sup$ ([[Insiemi limitati, maggioranti, massimo e teorema dell'estremo superiore#^601040]]). In particolare, usiamo il seguente punto:
$$
\forall \varepsilon>0, \exists \bar{x} \in I: |\bar{x}-x_0|+\varepsilon > \mathcal{R}
$$
Adesso scelgo $\varepsilon = \mathcal{R}-|x-x_0| > 0$; ho quindi
$$
\begin{align}& \mathcal{R} < |\bar{x}-x_0|+\mathcal{R}-|x-x_0| \\ \implies & |x-x_0| < |\bar{x} - x_0| \end{align}
$$
e per il *lemma di Abel* ho l'assoluta convergenza in $x$. 
Per dimostrare il punto ii. si procede invece *per assurdo*. $\blacksquare$

#Teorema 
> [!thm] struttura dell'insieme di convergenza
> Sia $\sum_n a_n(x-x_0)^n$ una serie di potenze con insieme di convergenza $I$. Questo insieme di convergenza è un *insieme connesso in* $\mathbb{R}$ ed è:
> - o il singoletto $x_0$ (in caso si ha un insieme degenere)
> - o un intervallo centrato in $x_0$ qualsiasi
> $$ 
> $$
^587795

**DIMOSTRAZIONE** del [[#^587795]]
Sia $\mathcal{R}=+\infty$; allora $I = \mathbb{R}$.
Se invece $\mathcal{R}>0$, allora ho l'intervallo
$$
(x_0-\mathcal{R}, x_0+\mathcal{R})\subseteq I \subseteq [x_0-\mathcal{R}, x_0+\mathcal{R} ]
$$
Se invece $\mathcal{R}=0$, allora ho $I=\{x_0\}$. $\blacksquare$
