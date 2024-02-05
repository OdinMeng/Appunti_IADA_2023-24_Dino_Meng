---
data: 2023-12-05
corso: "[[Analisi Matematica I]]"
argomento: Tipologie di Funzioni Integrabili
tipologia: appunti
stato: "1"
---
*Teoremi che prescrivono l'integrabilità di certe famiglie di funzioni.*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Funzioni]] (monotonia)
- [[Teoremi sulle funzioni continue]] (thm. di Weierstraß)
- [[Definizione di continuità]]
- [[Continuità Uniforme]]
- [[Conseguenze dell'esistenza dell'estremo superiore]]
- [[Suddivisione di un Intervallo]]
- [[Somma inferiore e superiore per una Funzione]]
- [[Integrabilità secondo Riemann]]
- [[Esempi di Funzioni Integrabili]]
# 1. L'integrabilità delle funzioni monotone
#Teorema 
> [!thm] Teorema 1.1. (di integrabilità della funzioni monotone)
> Sia $f: [a,b] \longrightarrow \mathbb{R}$; sia $f$ *monotona* ([[Funzioni#^3fb408]]).
> Allora $f$ è *integrabile secondo Riemann* ([[Integrabilità secondo Riemann#^5455b8]]).
> $$\boxed{f \text{ monotona} \implies f \in \mathcal{R}([a,b])}$$
^12da61

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 1.1.* ([[#^12da61]])
Dimostriamo il caso in cui $f$ è *monotona crescente*; la dimostrazione è analoga anche nel caso in cui $f$ è *monotona decrescente*.
Osserviamo che $f$ è anche *limitata* in $[f(a), f(b)]$ in quanto *monotona crescente*.
Allora considero la seguente *suddivisione* ([[Suddivisione di un Intervallo#^318045]]).
$$\Delta= \{a, a+\frac{b-a}{n}, a+2(\frac{b-a}{n}), \ldots, a+(n-1)\frac{b-a}{n}, b\}$$
Adesso calcolo la *differenza* tra la *somma superiore* e la *somma inferiore* relativa a questa suddivisione, poi per minorarla con una certa quantità;
$$\begin{align}S(f, \Delta)-s(f, \Delta) &= \sum_{i=1}^{n}(x_i-x_{i-1})(f(a+i(b-a))-f(a+(i-1)(b-a))) \\ &\leq \frac{b-a}{n}\sum_{i=1}^{n}f(x_i)-f(x_{i-1}) \\ &= \frac{b-a}{n}(f(x_1)-f(x_0))+(f(x_2)-f(x_1))+\ldots+(f(x_n)-f(x_{n-1})) \\ &= \frac{b-a}{n}(f(x_n)-f(x_0)) \\ &= (b-a)(f(b)-f(a)) \cdot \frac{1}{n}\end{align}$$
Ma per *Archimede* ([[Conseguenze dell'esistenza dell'estremo superiore#^d95d40]]) questa quantità diventa piccola a piacere; pertanto per il *teorema di caratterizzazione delle funzioni integrabili* ([[Integrabilità secondo Riemann#^92bcfb]]), la funzione $f$ è *integrabile secondo Riemann*. $\blacksquare$

# 2. Integrabilità delle funzioni continue
#Teorema 
> [!thm] Teorema 2.1. (di integrabilità delle funzioni continue)
> Sia $f: [a,b] \longrightarrow \mathbb{R}$ una funzione *continua* ([[Definizione di continuità#^d2f56f]]) sul suo dominio.
> Allora $f$ è *integrabile secondo Riemann*.
> $$\boxed{f \text{ continua} \implies f \in \mathcal{R}([a, b])}$$
^dd4f09

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 2.1.* ([[#^dd4f09]])
Richiamiamoci ad una delle *proprietà delle funzioni continue*, ovvero il *teorema di Heine* ([[Continuità Uniforme#^d030d1]]).
![[Continuità Uniforme#^d030d1]]
Ovvero *"alla Cauchy"* sappiamo che è vero il seguente:
$$\begin{gather}\forall \varepsilon >0, \exists \delta>0: \forall x_1, x_2 \in[a, b] \\|x_1-x_2| < \delta \implies |f(x_1)-f(x_2)| < \varepsilon\end{gather}$$
Allora fissiamo un qualunque $\varepsilon > 0$ e grazie alla continuità uniforme possiamo garantirci che esiste un $\delta$ tale che
$$\forall x_1, x_2 \in [a,b], |x_1-x_2| < \delta \implies |f(x_1)-f(x_2)| < \frac{\varepsilon}{b-a}$$
In tal caso considero una *suddivisione* ([[Suddivisione di un Intervallo#^318045]]) dove ogni *"distanza"* tra due punti della suddivisione è minore di tale $\delta$ trovato. Ovvero, considero un 
$$\Delta \in \mathcal{D}: \forall i, x_i-x_{i-1} < \delta$$
Graficamente questo ragionamento corrisponde alla *figura 2.1.*
Ora calcolo la *differenza tra la somma superiore e la somma inferiore* ([[Somma inferiore e superiore per una Funzione]])
$$S(f, \Delta)-s(f, \Delta) = \sum_{i=1}^{n} (x_i-x_{i-1})(\sup_{[x_i, x_{i-1}]}f(x)-\inf_{[x_i, x_{i-1}]}f(x))$$
Ora considero il fatto che la funzione $f$ è *continua* e che *"agiamo"* su un intervallo chiuso e limitato: vediamo che così vale il *teorema di Weierstraß* ([[Teoremi sulle funzioni continue#^918fc1]]). Di conseguenza, possiamo considerare l'estremo superiore e inferiore come il minimo e massimo della funzione.
$$\sup_{[x_i, x_{i-1}]} f(x) = \max_{[x_i, x_{i-1}]} f(x) = f(x_{\text{max},i})$$
e analogamente
$$\inf_{[x_i, x_{i-1}]} f(x) = \min_{[x_i, x_{i-1}]} f(x) = f(x_{\text{min},i})$$
Pertanto
$$\sup_{[x_i, x_{i-1}]} f(x) - \inf_{[x_i, x_{i-1}]} f(x) = f(x_{\text{max},i})-f(x_{\text{min},i})$$
Ma sapendo che sia i *punti di massimo e minimo* $x_{\text{max},i}$ e $x_{\text{min}, i}$ devono necessariamente vivere in $[x_i, x_{i-1}]$, anche la loro distanza è minore di $\delta$.
Graficamente quest'idea viene raffigurata nella *figura 2.2.*.
Pertanto, per l'ipotesi della continuità uniforme vale che
$$|x_{\text{max},i}-x_{\text{min},i}| < \delta \implies|f(x_{\text{min}, i})-f(x_{\text{max},i})| < \frac{\varepsilon}{b-a}$$
In definitiva, tutto assieme possiamo concludere la dimostrazione.
$$\begin{align}S(f, \Delta)-s(f, \Delta) &= \sum_{i=1}^{n}(x_i,x_{i-1})(\sup_{[x_i, x_{i-1}]}f(x)-\inf_{[x_i, x_{i-1}]}f(x)) \\ &< \sum_{i=1}^{n}(x_i-x_{i-1})\frac{\varepsilon}{b-a} \\ &\leq \cancel{(b-a)}\frac{\varepsilon}{\cancel{b-a}} = \varepsilon \\ &\boxed{S(f, \Delta)- s(f, \Delta) < \varepsilon}\end{align}$$
Che corrisponde alla *condizione necessaria e sufficiente dell'integrabilità* ([[Integrabilità secondo Riemann#^92bcfb]]), pertanto $f$ è *integrabile secondo Riemann*. $\blacksquare$

**FIGURA 2.1.** (*La suddivisione 'delta'*)
![[Pasted image 20231208115104.png]]
**FIGURA 2.2.** (*I punti di max e min vivono in delta*)
![[Pasted image 20231208115115.png]]