---
data: 2023-12-12
corso: "[[Analisi Matematica I]]"
argomento: Integrazione per Sostituzione
tipologia: appunti
stato: "0"
capitolo:
---
- - -
*Integrazione per sostituzione: teorema, dimostrazione e utilità pratica.*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Funzione Integrale]]
- [[Primitiva di una Funzione]]
- [[Derivata e derivabilità]]
- [[Funzioni]]
# 1. Enunciato del teorema
#Teorema 
> [!thm] Teorema 1.1. (integrazione per sostituzione)
> Sia $g \in \mathcal{C}^1$ (ovvero *derivabile fino ad almeno* $f'$ con $f'$ continua),
> $$g: [\alpha, \beta] \longrightarrow [a,b]$$
> Sia $f:[a,b] \longrightarrow \mathbb R$ *continua* ([[Definizione di continuità#^ddf65d]]).
> Sia $F$ l'*Integralfunktion* di $f$ ([[Funzione Integrale#^e5e02b]]).
> Allora vale che
> $$(F(g(x))' = F'(g(x)) \cdot g'(x) = f(g(x))g'(x)$$
> Di conseguenza vale anche
> $$\boxed{\int_\alpha^\beta f(g(t))g'(t) \ dt = \int_{g(\alpha)}^{g(\beta)}f(x) \ dx}$$
> In particolare se $g$ è *invertibile* e vale che $g(\alpha) = a, g(\beta) = b$, allora vale anche
> $$\boxed{\int_a^b f(x) \ dx = \int_{g^{-1}(a) = \alpha}^{g^{-1}(b) = \beta}f(g(t))g'(t) \ dt}$$
^4d29d1
# 2. Dimostrazione
#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 1.1.* ([[#^4d29d1]])
La dimostrazione è immediata: questa segue dalle *regole di derivazione* ([[Proprietà delle derivate]]) e dal *teorema fondamentale del calcolo integrale* ([[Teorema Fondamentale del Calcolo Integrale#^99ef41]]): infatti vale che
$$F(g(\beta)) -F(g(\alpha)) = \int_{g(\alpha)}^{g(\beta)}f(x) \ dx$$
# 3. Regola pratica
#Osservazione 
> [!oss] Osservazione 3.1. (regoletta pratica)
> Anche se l'enunciato del teorema in sé potrebbe sembrar complicato, in realtà è più facile di quello che si pensa. Infatti possiamo usare la seguente regoletta pratica:
> - Poniamo una nuova *"variabile"* e la chiamiamo $u$ in funzione di $x$; ovvero abbiamo qualcosa del tipo $u = f(x)$.
> - Prendendo la derivata di $u$ ottengo $du = f'(x) dx$.
> - Se nell'integrale riesco a trovare $f'(x) dx$, posso *"sostituirla"* con $du$ e posso sostituire altrettanto $f(x)$ con $u$. Inoltre dobbiamo ricordarci pure di sostituire gli *estremi* dell'integrando! Supponendo che $\alpha, \beta$ siano gli estremi allora li troviamo ponendo $u_\alpha = e^\alpha$ e $u_\beta = e^\beta$.
> 
> Si illustra questa regoletta nel seguente esempio.

#Esempio 
> [!ex] Esempio 3.1. (sostituzione per $u$)
> Voglio calcolare
> $$\int_1^2 2x \cdot x^2 \ dx$$
> Anche se questo integrale sarebbe troppo banalmente facile da calcolare con le altre *tecniche* di integrazione (come ad esempio mediante la tabella delle primitive), supponiamo però di esser pagati una modica cifra di denaro per ogni volta che usiamo l'*integrazione per sostituzione*.
> Siamo avari di denaro, quindi tentiamo di usare questa tecnica.
> Poniamo dunque $u = x^2$, da cui implica $du = 2x \ dx$.
> Inoltre, *"trasformiamo"* gli estremi calcolando
> $$u_1 = 1^2 = 1; u_2 = 2^2 = 4$$
> Ho tutte le condizioni per svolgere l'integrale? Sì! Ho proprio $2x \ dx$ nell'integrale stesso.
> $$\int_1^2 x^2 \cdot 2x \ dx$$
> Allora lo effettuo la *sostituzione per $u$*:
> $$\int_1^2 x^2 \cdot 2x \ dx = \int_1^4 u \ du$$
> Alla fine calcolo l'integrale
> $$\int_1^4 u \ du = \frac{u^2}{2}\Bigg|_1^4 = \frac{15}{2}$$
> che è ciò che volevamo.
