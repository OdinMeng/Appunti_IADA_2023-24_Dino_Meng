---
data: 2023-11-27
corso: 
argomento: Teorema di De l'Hôpital
tipologia: appunti
stato: "1"
---
*Uno dei strumenti più potenti e versatili dell'analisi matematica: il teorema del marchese De l'Hôpital*
- - -
# 0. Curiosità storiche
**TRATTO DAL SITO**
http://scienzaemusica.blogspot.com/2012/06/de-lhopital-e-il-quesito-dellesame-di.html
- - -
L'Hôpital nacque in una ricca famiglia.  
Il padre, Anne-Alexandre, era un *"pezzo grosso"* dell'epoca; infatti, tra le altre cose, fu generale dell'esercito del Re.  
Se, da piccolo, il piccolo Guillaume intraprese una *carriera militare*, in seguito dovette abbandonarla a causa di rilevanti *problemi alla vista*.  

Ergo, il suo interesse si spostò verso la Matematica.  
Nei primi anni '90 del XVII secolo, de l'Hôpital ingaggiò Johann Bernoulli affinché gli insegnasse il calcolo infinitesimale.  

Il marchese si mostrò così interessato all'argomento che lo imparò in breve tempo e che riassunse in un manuale intitolato *"Analyse des infiniment petits pour l'intelligence des lignes courbes"*, datato *1696*.    
Il suddetto rappresenta il *primo manuale di calcolo infinitesimale d'Europa!*

*Rouse Bell* scrive a proposito del libro di de l'Hôpital:  
*"Il merito di aver redatto il primo trattato che spiega i principi e l'uso del metodo va tutto a de l'Hôpital...Questo lavoro ebbe ampia circolazione; rese la notazione differenziale di uso comune in Francia e contribuì a diffonderla in Europa."*

Sappiamo che de l'Hôpital, dal 1694, pagò Bernoulli ben 300 franchi all'anno per raccontargli delle sue scoperte, descritte poi nel suo testo.  
Nel 1704, a seguito del decesso di de l'Hôpital, Bernoulli raccontò dell'accordo, asserendo che molti dei risultati nell'*Analyse des infiniment petits* erano opera sua!
- - -
# 1. Enunciato del teorema
#Teorema 
> [!thm] Teorema 1.1. (di De l'Hôpital)
> Siano $f, g: [a, b[ \longrightarrow \mathbb{R}$.
> Supponiamo che $f, g$ siano *derivabili* ([[Derivata e derivabilità#^12c1df]]).
> Supponiamo inoltre che per ogni punto ($a$ *escluso*) nel dominio la derivata $g'$ *non* si annulla mai;
> $$\forall x \in ]a, b[, g'(x) \neq 0 $$
> Supponiamo infine che il *limite destro* di $b$ per $f, g$ sono nulli.
> $$\lim_{x \to b^-}f(x) = \lim_{x \to b^-}g(x) = 0 $$
> Se esiste il limite
> $$\lim_{x \to b^-}\frac{f'(x)}{g'(x)}= L \in \mathbb{\tilde{R}} $$
> Allora esiste il limite
> $$\lim_{x \to b^-}\frac{f(x)}{g(x)} = L $$
> $$\boxed{\exists L \in \mathbb{\tilde{R}}: \lim_{x \to b^-}\frac{f'(x)}{g'(x)} = L \implies \lim_{x \to b^-}\frac{f(x)}{g(x)} = L}$$
^67a7cd
# 2. Dimostrazione del teorema
**OSS 2.1.** (*Osservazione preliminare*) Supponendo $g(b) = 0$ e $g'(x) \neq 0$ per $]a, b[$, potrà esserci mai un $x_0 \in ]a, b$ tale che $g(x_0)$ si annulla? No, in quanto sennò avremmo $g(x_0) = g(b) = 0$ e per il *teorema di Rolle* ([[Teorema di Rolle#^2d8bff]]) avremmo un $\xi$ in $]a, b[$ tale che la derivata $g'$ si annullerebbe; il che è *assurdo*, in quanto contraddice con le supposizioni iniziali. ^ce8190

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema di De l'Hôpital* ([[#^67a7cd]])
Prima di tutto per comodità *"prolungo"* le funzioni $f, g$ in $b$ ponendo $f(b) = g(b) = 0$; ciò è consentito e non sarebbe restrittivo in quanto le funzioni rimarrebbero comunque *continue* e *derivabili* in $]a,b[$.
Ora tenendo in conto l'osservazione preliminare (**OSS 2.1.**, [[#^ce8190]]), ha senso considerare la frazione
$$\frac{f(x)}{g(x)}, \forall x \in ]a, b[$$
Allora *"facendo finta di conoscere"* il limite
$$\lim_{x \to b^-}\frac{f'(x)}{g'(x)} = L \in \mathbb{R} $$
Che tradotto *"alla Cauchy"* ([[Definizione di Limite di funzione#^0f845a]]) vorrebbe dire
$$\begin{gather}\forall \varepsilon >0, \exists \delta >0: \forall x \in ]a, b[\\ b-\delta < x < b \implies \left|\frac{f'(x)}{g'(x)}-L\right|<\varepsilon\end{gather} $$
Ora considero un punto nell'intervallo $x \in ]b-\delta, b[$ e applico il *teorema di Cauchy* ([[Teorema di Cauchy#^0c9255]]) alle funzioni $f, g$ in $[x, b]$. 
Ovvero
$$\exists \xi \in ]x, b[: \frac{f'(\xi)}{g'(\xi)}=\frac{f(b)-f(x)}{g(b)-f(x)} = \frac{f(x)}{g(x)} $$
e sappiamo che $x < \xi < b$.
Pertanto considerando che $x$ non è altro che un punto tra $b-\delta$ e $b$, si potrebbe *"maggiorare"* $\xi$ come $b-d < \xi < b$. 
Allora questa uguaglianza vale per l'intorno considerato per $x$: mettendo tutto assieme e riconsiderando la definizione *"alla Cauchy"* del limite precedentemente scritto, abbiamo
$$\begin{gather}\forall \varepsilon >0, \exists \delta >0: \forall x \in ]a, b[\\ b-\delta < x < b \implies \left|\frac{f(x)}{g(x)}-L\right|<\varepsilon\end{gather}  $$
che è proprio la *definizione* del limite
$$\lim_{x \to b^-}\frac{f(x)}{g(x)}=L \ \blacksquare $$

**OSS 2.2.** (*Il teorema vale anche per il limite verso l'infinito*) Se al posto di $b$ un numero *finito* pongo $b = +\infty$; allora il teorema varrebbe lo stesso. Basta ragionare con la definizione $\varepsilon$-$N$ al posto di $\varepsilon$-$\delta$.

**OSS 2.3.** (*Il teorema vale anche per il caso $\frac{\infty}{\infty}$*) Questo teorema vale anche se si verificano entrambi i limiti:
$$\lim_{x \to b^-}f(x) = +\infty = \lim_{x \to b^-}g(x) $$
**OSS 2.4.** (*Il teorema vale anche per $L = +\infty$*) Questo teorema vale anche se il limite $L$ vale $+\infty$.
# 3. Utilità pratica
> [!prop] Proposizione 3.1. (utilità pratica del teorema di De l'Hôpital)
> Se in un limite ho un *caso indeterminato* del tipo
> $$\frac{0}{0} \text{ oppure } \frac{\infty}{\infty}$$
> e se ho 
> $$g'(x) \neq 0$$
> Allora posso calcolare il limite
> $$\lim_{x \to x_0} \frac{f'(x)}{g'(x)}$$
> il quale risultato sarà lo stesso del limite
> $$\lim_{x \to x_0}\frac{f(x)}{g(x)} $$
> A parole, se ho un *caso indeterminato* e ho la funzione sul denominatore che non si annulla mai, allora posso derivare entrambe le frazioni per avere un limite *"equivalente"*.
> **ATTENZIONE!** Questo non è un teorema del tipo *"se e solo se"*; l'implicazione qui è univoca, pertanto non deve *necessariamente* valere il viceversa.

