---
data: 2023-12-11
corso: "[[Analisi Matematica I]]"
argomento: Teorema Fondamentale del Calcolo Integrale
tipologia: appunti
stato: "1"
capitolo:
---
- - -
*Teorema fondamentale del Calcolo Integrale: enunciato, dimostrazione e corollari.*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Funzioni]]
- [[Definizione di continuità]]
- [[Integrabilità secondo Riemann]]
- [[Funzione Integrale]]
- [[Derivata e derivabilità]]
- [[Rapporto Incrementale]]
# 1. Enunciato del Teorema F.C.I.
#Teorema 
> [!thm] Teorema 1.1. (fondamentale del calcolo integrale)
> Sia $f: [a,b] \longrightarrow \mathbb{R}$ una funzione *integrabile secondo Riemann* ([[Integrabilità secondo Riemann#^5455b8]]), ovvero $f \in \mathcal{R}([a,b])$.
> Sia $\bar{x} \in [a,b]$. Sia $f$ *continua* in $\bar{x}$ ([[Definizione di continuità#^ddf65d]]).
> Sia $F(x)$ l'*Integralfunktion* di $f$ ([[Funzione Integrale#^e5e02b]]), ovvero
> $$F(x)=\int_a^x f(x) \ dx$$
> Allora $F$ è *derivabile* in $\bar{x}$ e vale che
> $$\boxed{F'(\bar{x}) = f(\bar x)}$$
^99ef41

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema fondamentale del calcolo integrale* ([[#^99ef41]]).
Per dimostrare il *teorema fondamentale del calcolo integrale* mi basta provare che la funzione integrale $F$ è *derivabile* in $\bar{x}$ e che $F'(\bar{x}) = \bar{x}$, ovvero *per definizione* della derivata ([[Derivata e derivabilità#^478a87]]) devo provare il limite
$$\lim_{x \to \bar{x}}R^F_{\bar x}(x) = f(\bar{x}) \implies \lim_{x \to \bar{x}}R^F_{\bar x}-f(\bar x) = 0$$
dove $R^F_\bar{x}$ è il *rapporto incrementale* ([[Rapporto Incrementale#^ccc58b]])
$$\frac{F(x)-F(\bar{x})}{x-\bar x}$$
Allora riformulando nuovamente devo provare il limite
$$\lim_{x \to \bar x}\frac{\int_a^x f(t) dt - \int_a ^\bar{x} f(t) dt}{x-\bar x}-f(\bar x)=0$$
Però ricordandoci una delle proprietà per cui possiamo *"invertire"* il pedice con l'apice scambiando i segni ed effettuando delle manipolazioni posso avere
$$\int_a^x f(t) dt +\int_\bar x^a f(t) dt = \int_\bar x^a f(t) dt +\int_a^x f(t) dt = \int_\bar x ^x f(t) dt$$
Inoltre mi ricordo che 
$$f(\bar x) = \frac{\int_\bar{x} ^ x f(\bar x) dt}{x - \bar x}$$
infatti sto *"calcolando"* l'altezza partendo dall'*area* $\int f(\bar x) dt$ e dalla *base* $x-\bar x$ (ovvero faccio $h = A/b$)
Allora in definitiva ho
$$\lim_{x \to \bar x}\frac{\int_\bar x^x f(t)- f(\bar x) dt}{x-\bar x}$$
Ma so che $f$ è *continua* in $\bar x$, ovvero che vale il limite
$$\lim_{x \to \bar x} f(x) = f(\bar x) \implies \lim_{x \to \bar x}f(x) - f(\bar x)=0$$
Ovvero, *"alla Cauchy"* ciò equivale al seguente:
$$\begin{gather}\forall \varepsilon >0, \exists \delta>0: \forall x, \\|x-\bar x| < \delta \implies|f(x)- f(\bar x)| < \varepsilon \end{gather}$$
Allora, considerando un qualsiasi $t \in [\bar x, x]$ (ovvero tra gli *"estremi"* dell'integrale), ho 
$$|t-\bar x| <\delta \implies |f(t)-f(\bar x)| < \varepsilon$$
Allora con tutte le considerazioni appena effettuate e ricordandoci un'altra *proprietà* dell'*integrale* ([[Proprietà delle Funzioni Integrabili#^cd03da]]) ho
$$|R^F_{\bar x}(x) - f(\bar x)| =\frac{1}{x-\bar x}\left| \int_\bar x^x f(t)-f(\bar x) dt\right| \leq \frac{1}{x - \bar{x}}\int_\bar x^x |f(t) - f(\bar x)| dt < \frac{\int_\bar x^x \varepsilon \ dt}{x-\bar x} = \varepsilon$$
In definitiva, rimettendo tutto apposto ho il seguente:
$$\begin{gather}\forall \varepsilon >0, \exists \delta >0: \forall x, \\|x-\bar x| < \delta \implies |R^F_{\bar x}(x)-f(\bar x)|< \varepsilon \end{gather}$$
che è proprio la *definizione* del *limite* 
$$\lim_{x \to \bar x}R^F_\bar x (x) = f(\bar x) \implies \boxed{F'(\bar{x}) = f(\bar x)} \ \blacksquare$$
# 2. Conseguenze del teorema
#Corollario 
> [!cor] Corollario 2.1. (primitivabilità delle funzioni continue)
> Se $f$ è *continua*, allora $f$ è *primitivabile* ([[Primitiva di una Funzione#^5b45ed]]) e la sua funzione integrale è *una* sua primitiva.
^796d23

**DIMOSTRAZIONE** del *corollario 2.1.* ([[#^796d23]])
Questo corollario segue *direttamente* dal *teorema fondamentale del calcolo integrale*: infatti se una funzione è *continua nel suo dominio*, allora per il teorema sopracitato questa l'*Integralfunktion* di questa funzione è la *primitiva* per ogni punto nel dominio. $\blacksquare$
Inoltre nella dispensa si trova una *dimostrazione alternativa*.

#Corollario 
> [!cor] Corollario 2.2. (teorema di Torricelli-Barrow)
> Vedere la pagina [[Teorema di Torricelli-Barrow]] dato che è possibile dimostrarla senza l'ausilio del *"teorema padre"*, ovvero il *teorema fondamentale del calcolo integrale*.