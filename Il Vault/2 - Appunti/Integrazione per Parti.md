---
data: 2023-12-12
corso: "[[Analisi Matematica I]]"
argomento: Integrazione per Parti
tipologia: appunti
stato: "1"
capitolo:
---
- - -
*Teorema dell'integrazione per parti: enunciato, dimostrazione e applicazione.*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Derivata e derivabilità]]
- [[Proprietà delle derivate]] (regola di Leibniz)
- [[Primitiva di una Funzione]]
# 1. Enunciato della regola
#Teorema 
> [!thm] integrazione per parti
> Siano $f, g \in \mathcal{C}^1$ (ovvero *derivabili* almeno una volta con la loro derivata continua) ([[Derivata Successiva e Classe C#^dbae48]]).
> Allora vale che
> $$\boxed{\int f(x) g'(x) \ dx = f(x)g(x) - \int f'(x) g(x)\  dx}$$
> Da cui
> $$\boxed{\int_a^b f(x)g(x) \ dx = f(b)g(b)-f(a)g(a)-\int_a^b f'(x)g(x) \ dx}$$
^4f8e66
# 2. Dimostrazione
#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 1.1.* ([[#^4f8e66]])
Ricordiamoci la *regola di Leibniz* per le derivate ([[Proprietà delle derivate#^fd716f]]):
$$(fg)' = f'g+fg'$$
So che sia $f'g$ che $fg'$ sono *continue*. Allora possiamo considerare la *funzione integrale* di $f'g+fg'$: 
$$\int_a^x f(t)g'(t) \ dt + \int_a^x f'(t)g(t) \ dt = f(x)g(x)-f(a)g(a)$$
da cui, calcolandola in $b$, deriva
$$\int_a^b f(t)g'(t) \ dt = f(b)g(b)-f(a)g(a) - \int_a^b f'(t)g(t) \ dt \ \blacksquare$$

#Osservazione 
> [!rmk] trucchetto mnemonico
> *Approfondimento tratto da "Le Matematiche" di A. D. Aleksandrov, A. N. Kolmogorov e M. A. Lavrent'ev (pp. 169-170)*
> Si può alternativamente imparare una *"dimostrazione"* meno formale ma più *"facile"* da imparare a memoria di questo teorema: consideriamo l'integrazione come un'*"operazione"* che prende in argomento funzioni.
> Allora, ricordandoci la regola di Leibniz possiamo derivare
> $$\begin{align}(uv)' &= uv'+u'v \\ uv' &= (uv)' - u'v \\ \int(uv)' dx &= uv-\int (u'v) \ dx \end{align}$$
# 3. Regola pratica
#Osservazione 
> [!rmk] regola pratica
> Come *"regoletta pratica"* possiamo considerare la $f$ come la funzione *"derivanda"* chiamandola $D$, e invece possiamo considerare $g'$ come la funzione *"integranda"* chiamandola $I$. 
> Riformulando il teorema iniziale abbiamo
> $$\int DI = D \smallint I - \int D' \smallint I$$
> Dove $D, I$ sono le *funzioni originali*, $D'$ la funzione derivata e $\smallint I$ la funzione integrata.
## Metodo D-I (approfondimento personale)
#Osservazione 
> [!rmk] metodo D-I 
> Inoltre è possibile impararsi un *"trucchetto pratico"* per questa tecnica di integrazione, spiegato nel seguente video dal professore universitario cinese-statunitense *Steve Chow*
> https://www.youtube.com/watch?v=2I-_SV8cwsw
