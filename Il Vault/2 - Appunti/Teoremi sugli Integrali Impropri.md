---
data: 2024-03-05
corso:
  - "[[Analisi Matematica II]]"
argomento: Teoremi sugli Integrali Impropri
tipologia: appunti
stato: "1"
capitolo: Fondamenta degli Integrali Generalizzati
---
- - -
*Teoremi sugli integrali impropri: teorema Aut-Aut per gli integrali generalizzati; criterio del confronto; criterio del confronto asintotico. Esempi di applicazioni dei teoremi.*
- - -
# 1. Teorema Aut-Aut per gli integrali impropri
#Teorema 
> [!thm] Aut-Aut per gli integrali generalizzati
> Se $f:J \longrightarrow \mathbb{R}$, dove $J=[a, b)$ (o anche $J=(a, b]$) e $f$ è *localmente integrabile* e *positiva* su $J$, allora l'integrale improprio
> $$
> \int_{[a,b]}f
> $$
> deve o *esistere finito* o *divergere all'infinito* ($+\infty$ nel primo caso). In particolare nel primo caso il limite (se finito) corrisponde a
> $$
> \lim_{x \to b^{-} }\int_a^x f(t) \text{ d}t = \sup_{x \in J}\int_a^x f(t) \text{ d}t
> $$
^ab6232

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^ab6232]].
Il teorema segue dall'osservazione che *la funzione integrale*
$$
F(x)=\int_a^x f(t) \text{ d}t
$$
è *crescente*. Utilizzando quindi i *teoremi sulle funzioni monotone* ([[Teoremi sui Limiti di Funzione#^e5c912]]) abbiamo la tesi. $\blacksquare$

#Osservazione 
> [!rmk] la positività della funzione è una condizione necessaria
> Si vede che l'ipotesi $f(x) \geq 0$ è un'*ipotesi chiave*.
> Come *controesempio* prendiamo l'integrale improprio
> $$
> \int_0^1 -\cos\left(\frac{1}{x}\right) \cdot x^{-2} \text{ d}x
> $$
> Prima di tutto si osserva che
> $$
> \left(\sin\left(\frac{1}{x}\right)\right)^{'} = -\cos\left(\frac{1}{x}\right)\cdot x^{-2}
> $$
> dunque il membro a destra è proprio la *primitiva* della funzione integranda.
> Adesso calcoliamo (o tentiamo di farlo) il limite
> $$
> \lim_{x \to 0^{+} }\int_t^1 f(t) \text{ d}t = \lim_{x \to 0^{+} }\sin\left(\frac{1}{t}\right)\bigg|_t^1 = \lim_{x \to 0^{+} }\sin (1)-\sin\left(\frac{1}{t}\right) = \not\exists
> $$
> Infatti il *problema* consiste nel fatto che la *funzione integranda* non è *positiva* per tutti i valori dell'intervallo $(0, 1]$; in particolare il $\cos$ ci fa *"oscillare velocemente"* tra $-1$ e $1$.

# 2. Criterio del confronto
#Teorema 
> [!thm] criterio del confronto
> Siano $f, g: J=[a, b) \longrightarrow \mathbb{R}$ (o anche $J=(a,b]$) delle funzioni *localmente integrabili* e tali che
> $$
> 0 \leq f(x) \leq g(x), \forall x \in J
> $$
> allora segue che se $g$ è *integrabile in senso generale su $J$*, allora lo è *anche* $f$ e vale che
> $$
> \int_{[a,b]}f \leq \int_{[a,b]} g
> $$
> Oppure se $f$ *non* è *integrabile in senso generale su $J$*, allora non lo è neanche $g$.
^e3ccfc

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^e3ccfc]]
Innanzitutto definiamo le *funzioni integrali*
$$
F(x)=\int_a^x f(t) \text{ d}t; G(x)=\int_a^x f(t) \text{ d}t
$$
Poiché $f(x) \leq g(x)$, si ha anche $F(x) \leq G(x)$. 
Per il *teorema di Aut-Aut per gli integrali impropri* ([[#^ab6232]]), si ha
$$
\lim_{x \to b^{-} }F(x)=\sup_{x \in J} F(x) \leq \sup_{x \in J}G(x)=\lim_{x \to b^{-} }G(x) \underbracket{< +\infty}_{\text{per ipotesi}}
$$
Allora segue che anche $f$ è *integrabile nel senso generale* e vale che
$$
\lim_{x \to b^{-} }\int_a^x f(t) \text{ d}t \leq \lim_{x \to b^{-} }\int_a^x g(t) \text{ d}t
$$
Per la tesi secondaria basta prendere la *contronominale* della tesi. $\blacksquare$

#Corollario 
> [!cor] teorema del confronto asintotico
> Siano $f, g: J \longrightarrow \mathbb{R}$ *localmente integrabili sul dominio* e tali che
> $$
> f(x), g(x) > 0 , \forall x \in J
> $$
> ed esiste il limite
> $$
> \lim_{x \to b^{-} }\frac{f(x)}{g(x)}=L \in (0, +\infty)
> $$
> Allora $f(x), g(x)$ hanno lo *"stesso carattere"*, nel senso che o sono *entrambe convergenti* o *entrambi divergenti*.
^28b15d

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^28b15d]]
Si tratta di esplicitare la *definizione "alla Cauchy"* del limite dell'ipotesi ([[Definizione di Limite di funzione#^c5e4ec]]).
$$
\begin{align}
\forall \varepsilon>0 , \exists \delta>0&: \forall x \in J, \\ x \in (b-\delta, b) &\implies \left|\frac{f(x)}{g(x)}-L\right| < \varepsilon \\ &\implies -\varepsilon + L < \frac{f(x)}{g(x)}<\varepsilon+L \\ f,g>0&{\implies}(-\varepsilon+L)g(x)<f(x)<(\varepsilon+L)g(x)
\end{align}
$$
dall'ultimo passaggio possiamo applicare il *teorema del confronto* ([[#^e3ccfc]]) per ricavare la tesi. $\blacksquare$

# 3. Esempi di esercizi
Ora applichiamo i teoremi appena enunciati con i seguenti esercizi.

#Esercizio 
> [!exr] 
> Dire il carattere dell'integrale improprio
> $$
> \int_0^1 \frac{1+\sqrt[3]{x}}{x^2+\sqrt{x}} \text{ d}x
> $$
> 
> *Svolgimento.* Prima di tutto prendiamo $J=(0, 1]$. Adesso osserviamo il *denominatore*; vediamo che $x^2$ si *"avvicina* a $0$ più velocemente di $\sqrt{x}$; quindi cerco una *funzione-campione di confronto* $g(x)$ con cui applicare il *criterio del confronto asintotico*.
> Scegliamo $g(x)=\frac{1}{\sqrt{x} }$; infatti calcolando il limite
> $$
> \lim_{x\to0^{+} }\frac{1+\sqrt[3]{x}}{x^2+\sqrt{x}}\cdot \sqrt{x}=1
> $$
> Abbiamo proprio il risultato voluto, ovvero che la *funzione integranda* si comporta come $\frac{1}{\sqrt{x}}$, che è convergente. Di conseguenza l'integrale iniziale è *integrabile in senso improprio* su $J$.

