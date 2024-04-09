---
data: 2024-03-29
corso:
  - "[[Analisi Matematica II]]"
argomento: Introduzione al Calcolo Differenziale in più variaibli
tipologia: appunti
stato: "1"
capitolo: Calcolo Differenziale Multivariata
---
- - -
*Osservazione preliminare per il calcolo differenziale in più variabili: approssimazione delle funzioni con sviluppo di Taylor col resto di Peano, definizione o-piccolo e obbiettivi per il calcolo differenziale multivariata.*
- - -
# 0. Voci correlate
- [[Formula di Taylor]]
- [[Derivata e derivabilità]]
- [[Definizione di Funzione in più variabili]]
# 1. Osservazione preliminare
#Osservazione 
> [!rmk] caso $N=1$
> Prendiamo il caso $\mathbb{R}^1$. Dai risultati del *calcolo differenziale*, possiamo approssimare una funzione $f: \mathbb{R} \longrightarrow \mathbb{R}$ come
> $$
> f(x)=f(x_0)+f'(x_0)(x-x_0)+R(x)
> $$
> dove vale il limite
> $$
> \lim_{x \to x_0}\frac{R_n(x)}{|x-x_0|^n}=0
> $$
> ovvero $R_n$ è un *"o-piccolo"* di $|x-x_0|^n$ (per una definizione ben costruita vedere sotto).

#Definizione 
> [!def] o-piccolo delle funzioni
> Siano $f,g$ funzioni tali che
> $$
> \lim_{x \to x_0}f(x)=g(x)=0 \land \lim_{x \to x_0}\frac{f(x)}{g(x)}=0
> $$
> Allora si dice che $f$ è un *"o-piccolo"* della funzione $g$, e la si scrive come
> $$
> f = o(g)
> $$

#Osservazione 
> [!rmk] gli obbiettivi del calcolo differenziale multivariata
> Come osservato prima, vogliamo tenere conto di questa *rappresentazione locale*, estendendolo per *funzioni in più variabili* del tipo $f: \mathbb{R}^N \longrightarrow \mathbb{R}^M$.
> In particolare, voglio costruire l'approssimante
> $$
> f(\underline{x})=f(\underline{x_0})+\mathbb{A}(\underline{x}-\underline{x_0})+E(\underline{x} )
> $$
> dove vale il limite
> $$
> \lim_{\underline{x} \to \underline{x_0} }\frac{E(\underline{x}) }{\Vert \underline{x}-\underline{x_0} \rVert}
> $$
> (ovvero $E=o(\rVert \cdot \lVert)$ )

