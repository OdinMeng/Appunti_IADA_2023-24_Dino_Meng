---
data: 2024-03-06
corso:
  - "[[Analisi Matematica II]]"
argomento: Criteri per l'Assoluta Convergenza in senso Generalizzato
tipologia: appunti
stato: "1"
capitolo: Fondamenta degli Integrali Generalizzati
---
- - -
*Criteri (teoremi) per determinare l'assoluta convergenza in senso generalizzato per una funzione: criterio dell'ordine di infinitesimo su un dominio illimitato, criterio dell'ordine di infinito su un dominio limitato. Esempi.*
- - -
# 1. Criterio dell'ordine di infinitesimo e dell'infinito
#Teorema 
> [!thm] criterio dell'ordine di infinitesimo su un insieme illimitato
> Sia $f:J \longrightarrow \mathbb{R}$ localmente integrabile, dove $J$ è una semiretta.
> Si ha:
> 1. Se esiste $\alpha>1$ tale che
> $$
> \lim_{x \to +\infty}|f(x)|\cdot x^\alpha = L \in [0, +\infty)
> $$
> Allora $f$ è *assolutamente integrabile* in senso generalizzato su $J$.
> 2. Se invece esiste $\alpha \leq 1$ tale che
> $$
>  \lim_{x \to +\infty}|f(x)|\cdot x^\alpha = L \in (0, +\infty) \cup \{+\infty\}
> $$
> Allora $f$ *non è assolutamente integrabile* in senso generalizzato su $J$.
> $$
> $$

#Osservazione 
> [!rmk] il senso di questo teorema
> Per leggere bene le ipotesi del teorema, si deve leggere il prodotto
> $$
> \left |f(x) \right | \cdot x^\alpha
> $$
> come
> $$
> \frac{|f(x)|}{\frac{1}{x^\alpha}}
> $$
> e utilizzare il *teorema del confronto asintotico* ([[Teoremi sugli Integrali Impropri#^28b15d]]). Infatti, se il limite è $0$, allora semplicemente $|f(x)|$ si annulla. Altrimenti, se è un numero positivo $|f(x)|$ si avvicina a $0$ *"come o più velocemente"* di $\frac{1}{x^\alpha}$, che è una funzione notevole per l'integrale improprio ([[Integrali Impropri Notevoli#^84083f]]).

#Teorema 
> [!thm] criterio dell'ordine di infinito su intervalli limitati
> Sia $f:J=[a,b) \longrightarrow \mathbb{R}$ con $b \in \mathbb{R}$.
> Si hanno le seguenti.
> A. Se si verifica che
> $$
> \exists \alpha < 1 : \lim_{x \to b^{-} }|f(x)|\cdot(b-x)^\alpha = L \in [0, +\infty) 
> $$
> Allora $f$ è *assolutamente integrabile in senso generalizzato* su $J$.
> B. Se si verifica invece
> $$
> \exists \alpha \geq 1 : \lim_{x \to b^{-} }|f(x)|\cdot(b-x)^\alpha = L \in (0, +\infty) \cup \{+\infty\} 
> $$
> Allora $f$ *non* è *assolutamente integrabile in senso generalizzato* su $J$.

# 2. Esempi di applicazione
#Esempio 
> [!exm] la distribuzione gaussiana
> Si considera la distribuzione gaussiana
> $$
> f(x)=e^{-x^2}
> $$
> Posso dire se questa è *integrabile in senso generalizzato* su $[0, +\infty)$? Sì, usando i teoremi appena enunciati con $\alpha=2$, si ha
> $$
> \lim_{x \to +\infty}e^{-x^2}\cdot x^2 \in [0, +\infty)
> $$
> Quindi sicuramente si sa che
> $$
> \int_0^{+\infty}e^{-x^2} \ \text{d}x
> $$
> esiste ed è finito.

#Esercizio  
> [!exr] 
> Stabilire se la funzione $f$ è *integrabile* su $J=(0, 3]$.
> $$
> f(x)=\frac{1}{\sqrt{x+x^3}}
> $$
> Prima di tutto si osserva che posso *"scartare"* $x^3$, dato che $x$ va più velocemente a $0$ di $x^3$. Allora scelgo $\alpha=\frac{1}{2}$ e uso il *criterio dell'ordine dell'infinito*.
> $$
> \lim_{x \to 0^+}\frac{\sqrt{x}}{\sqrt{x}\sqrt{1+x^2}} = 1 \in (0, +\infty)\cup\{+\infty\}
> $$
> Allora la funzione è *integrabile in senso generalizzato*, dato che lo è pure $\frac{1}{\sqrt{x}}$.

