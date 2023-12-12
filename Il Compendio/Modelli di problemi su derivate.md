---
data: 2023-11-20
corso: "[[Analisi Matematica I]]"
argomento: Modelli di problemi su derivate
tipologia: appunti
stato: "0"
---
*Esempi di problemi con le derivate.*
- - -
# 1. Problema delle tangenti di un punto
> [!mod] Modello 1.1. (trovare la tangente di un punto di una funzione)
> Sia $f$ una *funzione derivabile* ([[Derivata e derivabilità#^6e7606]]) in un punto $x_0$.
> Dato che è *derivabile* nel punto $x_0$, allora dev'esserci una tangente su quel punto.
> Quindi, supponiamo che il nostro problema è di quello *trovare* la retta $r$ che definisce la *tangente* sul punto $x_0$.
> 1. Impostiamo la retta come
> $$r : y = mx + q$$
> 2. Naturalmente il valore $m$ è la derivata di $f$ nel punto $x_0$; pertanto $m = f'(x_0)$.
> 3. Poi per definizione la retta tangente $r$ passa per il punto $(x_0, f(x_0))$; facendo i conti ottengo
>    $$q = f(x_0)-f'(x_0)x_0$$
> 4. Rimettendo tutto assieme, abbiamo
> $$\begin{align}r: \ &y = f'(x_0)x + f(x_0)-f'(x_0)(x_0) \\ &\boxed{y = f'(x_0)(x-x_0)+f(x_0)}\end{align}$$
# 2. Ortogonalità della retta tangente di un cerchio e raggio del cerchio
**Per ora omessa, da riprendere quando faremo la geometria affine con ALEG**

# 3. Problemi di massimo e/o minimo
> [!mod] Modello 3.1. (problema di massimo e/o minimo)
> Suppongo di avere $f: [a, b] \longrightarrow \mathbb{R}$, che sia *continua* ([[Definizione di continuità#^ddf65d]]), che sia derivabile (*almeno*) su $]a, b[$. 
> 1. $f$ ha minimo e/o assoluto? Sì, per il *teorema di Weierstraß* ([[Teoremi sulle funzioni continue#^918fc1]])
> 2. Dove si trovano questi punti di massimo e/o minimo assoluto? Usiamo il *teorema di Fermat* ([[Teorema di Fermat#^8ab68b]]) per costruire *l'insieme dei punti stazionari* unito agli *"estremi"* $P$ dove
>    $$P = \{x \in \ ]a, b[ \ | \ f'(x) = 0\} \cup \{a,b \} $$
> 3. Come faccio ad individuare gli effettivi $\max$, $\min$ di $f$? Basta prendere $\max(f(P))$ e $\min(f(P))$.

# 4. Approssimazione delle funzioni in certi valori
> [!mod] Modello 4.1. (approssimazione delle funzioni)
> Suppongo di avere una funzione $f$ derivabile (*almeno*) $n+1$ volte, e di voler trovare il valore di una sua immagine. Ad esempio $f(k)$: ora non voglio trovare il suo valore *esatto*, ma solo una sua *approssimazione* con un errore inferiore a $10^n$.
> 1. Considerare il *polinomio di Taylor* ([[Formula di Taylor#^556164]]) $T_n(f, x_0, x)$ per un $n$ *generico* (ovvero incognita) e $x_0$ opportuno.
> 2. Considerare la *"distanza"* tra la funzione $f$ stessa (inserita col valore voluto $k$) e il polinomio di Taylor calcolato in $k$ $T_n(f, x_0, k)$.
> 3. Maggiorare il *resto di Lagrange* per un certo valore; ovvero trovare un valore che *"limita"* il resto; l'idea di base sarebbe quello di *"stimare il resto (l'errore)"*, trovando il *"valore peggiore"*.
>    $$\frac{f(\xi)}{k!}(k-x_0)^{k}$$
> 4. Tentare di inserire $n$ finché si ottiene che il resto è *minore* di $10^n$.
> 5. Quando ho trovato $\bar{n}$ che soddisfa le mie esigenze, calcolo il polinomio di Taylor
>    $$T_\bar{n}(f, x_0, x)$$
>    Che è il risultato voluto dalla consegna.

