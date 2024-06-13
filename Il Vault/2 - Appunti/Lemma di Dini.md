---
data: 2024-04-21
corso:
  - "[[Analisi Matematica II]]"
  - "[[Conoscenza Personale]]"
argomento: Lemma del Dini
tipologia: appunti
stato: "1"
capitolo: Successioni e Serie di Funzioni
---
- - -
*Lemma di Dini: enunciato, esempi. (approfondimento personale perché ha il mio nome)*
- - -
# 0. Voci correlate
- [[Definizione di Successione di Funzioni]]
- [[Convergenza Puntuale e Uniforme per Successioni di Funzioni]]
*Nota: informazione presa da Wikipedia e da un paper di un professore canadese su quest'ultimo argomento (prof. Joel Feldman 2016): approfondimento personale per il meme.*
# 1. Lemma di Dini
#Lemma 
> [!lem] di Dini o di Dino
> Sia $(f_n)_n$ una *successione di funzioni continue* su $X$ in $\mathbb{R}$. Sia $X$ un *insieme compatto* ([[Insiemi compatti in R#^0eb138|1]]) (più precisamente dovrebbe essere *uno spazio metrico compatto* ma sono dettagli).
> Se valgono le seguenti:
> i. La *successione* $(f_n)_n$ è *monotona*, ovvero vale una delle due:
> $$
> f_{n+1}(x) \geq f_n(x) \vee f_{n}(x) \geq f_{n+1}(x), \forall x \in \mathbb{R}, \forall n \in \mathbb{N}
> $$
> ii. La successione converge *puntualmente* verso una funzione $f:\mathbb{R} \longrightarrow \mathbb{R}$.
> iii. La funzione-limite $f$ è *continua*.
> 
> Allora la successione $(f_n)_n$ *converge uniformemente* verso $f$ ([[Convergenza Puntuale e Uniforme per Successioni di Funzioni#^a140c0|2]]).
^60b0f6

**DIMOSTRAZIONE** del [[#^60b0f6]]
Omessa, dato che: o sarebbe troppo lunga, o richiederebbe argomenti più avanzati sulla topologia (tipo "ricoprimenti" e roba strana del genere). In ogni caso, è possibile visionare una dimostrazione per assurdo in formato online ([link](https://www.matematicamente.it/forum/viewtopic.php?t=123276)). $\blacksquare$

**FIGURA 1.1.** (*Ulisse Dini*)
![[Ulisse_Dini.jpg|250]]

# 2. Controesempi
Mostriamo degli esempi (o meglio controesempi) per cui *tutte e tre* le condizioni elencate sono *essenziali* per il teorema.

#Esempio 
> [!exm] compattezza dell'insieme
> Si mostra che la successione di funzioni definita come
> $$
> f_n:(0,1) \longrightarrow \mathbb{R}, f_n(x)=x^n
> $$
> possiede le seguenti proprietà:
> i. $(f_n)_n$ converge puntualmente su $f(x)=0$
> ii. $(f_n)_n$ sono continue, lo è pure $0$.
> iii. $(f_n)_n$ è decrescente
> 
> Tuttavia, non c'è la *convergenza uniforme*. Infatti
> $$
> \sup_{x \in (0,1)}\lim_n\left|f_n(x)-f(x)\right|=1
> $$

#Esempio 
> [!exm] la continuità della funzione-limite
> Sia $(f_n)_n$ una successione definita a tratti sul compatto $[0,1]$:
> $$
> f_n(x)=\left\{\begin{align}& -nx+1,  0 \leq x \leq \frac{1}{n}\\ &0, \frac{1}{n} <x \leq 1 \end{align} \right.
> $$
> Si dimostra che:
> i. La successione tende puntualmente alla funzione a tratti
> $$
> f_n(x)=\left\{\begin{align}& 1, x =0 \\ &0, 0<x\leq1\end{align} \right.
> $$
> ii. La successione è monotona (decrescente), lo si dimostra per induzione
> 
> Tuttavia, non c'è convergenza *uniforme*. Infatti
> $$
> \sup_{x \in [0,1]}\lim_n\left|f_n(x)-f(x)\right|=1
> $$

**FIGURA 2.1.** (*Esempio sulla continuità della funzione-limite*)
![[Pasted image 20240421202447.png]]

#Esempio 
> [!exm] la monotonia della funzione
> Sia $(f_n)_n$ una *successione di funzioni* definita a pezzi sul compatto $[0,1]$ come
> $$
> f_n(x)=\left\{\begin{align}& 0 , 0\leq x < \frac{1}{n} \\ &nx-1 , \frac{1}{n} \leq x \leq \frac{2}{n} \\ & -nx+3,  \frac{2}{n}<x\leq \frac{3}{n} \\ & 0, \frac{3}{n} < x \leq 1\end{align} \right.
> $$
> Ovvero la funzione con un *"triangolo di altezza $1$ che si sposta verso a sinistra"* (per una visione più chiara consultare la figura).
> Si vede che:
> i. La successione *converge puntualmente* verso alla funzione nulla $0$ (per convincerci di questo basta pensare che il *"gap"* (o la base se volete) del triangolo si riduce) 
> ii. Sia la *successione delle funzioni* che la *funzione limite* sono *continue* sul dominio (per convincerci di questo verificare i limiti)
> 
> Tuttavia non c'è *convergenza uniforme*. Infatti il *massimo* della funzione $f_n(x)$ è sempre $1$, disprovando il limite
> $$
> \sup_{x \in [0,1]}\lim_n f_n(x)= 1 \neq 0
> $$

**FIGURA 2.2.** (*Esempio sulla monotonia della funzione*)
![[Pasted image 20240421202501.png]]