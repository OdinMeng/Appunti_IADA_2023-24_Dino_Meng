---
data: 2024-03-25
corso:
  - "[[Analisi Matematica II]]"
argomento: Definizione di Spazio Metrico
tipologia: appunti
stato: "1"
capitolo: Struttura di R^N
---
- - -
*Definizione di distanza su R^N, proprietà di distanza. Definizione di spazio metrico euclideo. Definizione generalizzata di spazio metrico.*
- - -
# 0. Voci correlate
- [[Definizione di RN]]
- [[Intorni]]
# 1. Distanza euclidea su R^N
#Definizione 
> [!def] Distanza Euclidea su più variabili
> Siano $\underline{x}, \underline{y} \in \mathbb{R}^N$, con $\underline{x}=(x_1,\ldots, x_N)$ e $\underline{y}=(y_1, \ldots, y_N)$. Allora definisco la *distanza euclidea* tra questi due punti come la funzione
> $$
> d(\underline{x},\underline{y}):= \sqrt{\sum^N_{n=0}(x_n-y_n)^2 }
> $$

^59944b

#Proposizione 
> [!prp] le proprietà della distanza euclidea
> La distanza euclidea gode delle medesime proprietà soddisfatte con la distanza euclidea su $\mathbb{R}$ ([[Intorni#^d3c02b|1]], [[Intorni#^de2ab0|2]], [[Intorni#^ff0f13|3]]), ovvero le seguenti.
> i. *(riflessività)*
> $$
> d(\underline{x},\underline{y})=0 \iff \underline{x}=\underline{y}
> $$
> ii. *(simmetria)*
> $$
> d(\underline{x}, \underline{y}) = d(\underline{y}, \underline{x})
> $$
> iii. *(disuguaglianza triangolare)*
> $$
> d(\underline{x}, \underline{y}) \leq d(\underline{x}, \underline{z}) + d(\underline{z}, \underline{y})
> $$

^740289

# 2. Spazio Metrico
#Definizione 
> [!def] spazio metrico euclideo
> La coppia $(\mathbb{R}^N, d)$ si dice *"spazio metrico euclideo"*.

#Definizione 
> [!def] distanza/metrica, spazio metrico
> Sia $S$ un insieme. Un'applicazione $d: S \times S \longrightarrow \mathbb{R}$ che verifica le tre proprietà della distanza euclidea ([[#^740289|1]]) si dice *distanza* (o *metrica*) in $S$.
> 
> In particolare la coppia $(S, d)$ si dice *spazio metrico*.

# 3. Esempi di spazi metrici
#Esempio 
> [!exm] spazio metrico con $+\infty > p\geq 1$
> Sia $p \geq 1$ un numero finito. Sia $\mathbb{R}^N$ l'insieme degli elementi.
> Allora la funzione
> $$
> d_p(\underline{x}, \underline{y}) = \left(\sum^N_{i=1} |x_i-y_i|^p\right)^{\frac{1}{p} }
> $$
> è una *distanza*.

#Esempio 
> [!exm] spazio metrico con $p=+\infty$
> Sia $p=+\infty$. Allora la funzione
> $$
> d_{\infty}(\underline{x},\underline{y} ) = \max_{i \in \{1, \ldots, n\}}|x_i-y_i|
> $$
> è una *distanza*.

