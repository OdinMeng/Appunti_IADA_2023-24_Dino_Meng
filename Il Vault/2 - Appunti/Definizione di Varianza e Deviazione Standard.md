---
data: 2024-05-09
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Definizione Varianza e Deviazione Standard
tipologia: appunti
stato: "0"
capitolo:
---
- - -
*Idea della varianza. Definizione di varianza, deviazione standard, variabile aleatoria avente momento secondo finito.*
- - -
# 0. Voci correlate
- [[Definizione del Valore Medio]]
- [[Proprietà del Valore Medio]]
- [[Definizione di Variabile Aleatoria]]
# 1. Definizione di Varianza e Deviazione Standard
**IDEA.** Supponiamo di avere la varianza di una variabile aleatoria $E[X]$. Però questa informazione ci sembra piuttosto *"povera"*, vogliamo sapere di più di questa variabile aleatoria $X$: in particolare *come* si comporta rispetto alla sua media $E[X]$.
Un primo modo di quantificare quest'idea è di usare la *distanza euclidea* $|X - E[X]|$ e prendere il suo valor medio $E[|X-E[X]|]$; tuttavia presenta dei problemi, in quanto diventa difficile da gestire con valori assoluto.
Un altro approccio che è *"simile"* alla distanza euclidea è di prendere la loro differenza e di considerarne il *quadrato*; ovvero $(X-E[X])^2$. Certo, non è proprio l'idea iniziale ma si comporta similmente. Ad esempio, abbiamo $E[(X-E[X])^2] = 0 \iff X=0$. Questa sarà l'idea di cui considereremo

#Definizione 
> [!def] varianza, deviazione standard
> Sia $X$ una *variabile aleatoria discreta avente valor medio finito* $E[X]<+\infty$. Se $E[(X-E[X])^2] < +\infty$ (ovvero la quantità appena considerata ha valor medio finito), possiamo definire la sua varianza come
> $$
> \boxed{\operatorname{var}{X}:=E\left[\textcolor{CYAN}{ (X-E[X])^2}\right]}
> $$
> Notiamo subito che la *varianza* è sempre positiva, dal momento che lo è pure il suo argomento (in azzurro). 
> 
> Per non scomodarci con questo problema (infatti avvolte vogliamo sapere *"in che modo si discosta dalla media"*), prendiamo la sua radice e la chiamiamo *deviazione standard* (o *scarto quadratico medio*), definito come
> $$
> \boxed{\sigma_X :=\sqrt{\operatorname{var}X } }
> $$

#Osservazione 
> [!rmk] l'esistenza di varianza implica l'esistenza della media
> Notiamo che l'esistenza della varianza $\operatorname{var}{X}$ implica che esiste la media.
> 
> Infatti, $(X-E[X])^2 = X^2 - 2(XE[X]) + E[X]^2$, ci interessa sapere come si comporta $X$. Per il *teorema sulla composizione delle medie di variabili aleatorie* ([[Proprietà del Valore Medio#^5ebd9e|1]]) deve seguire che
> $$
> \sum_{x \in \mathbb R}x^2 q(x) < +\infty
> $$
> Poiché $|x|\leq 1+x^2$, si verifica subito che
> $$
> \sum_{x \in \mathbb{R}}|x|q(x)\leq \sum_{x \in \mathbb{R} }(1+x^2)q(x) \leq 1+\sum_{x \in\mathbb{R} }x^2q(x) < +\infty
> $$

# 2. Valore medio avente momento secondo finito
Notiamo che non vale il viceversa: se una variabile aleatoria ha valor medio, non è detto che la media del suo quadrato sia finito. Definiamo una classe di variabili aleatorie che hanno sia *media finita* che il *valor medio del suo quadrato* finito.

#Definizione 
> [!def] valor medio avente momento secondo finito
> Si dice che una variabile aleatoria $X$ ha *valor medio finito* se valgono che
> $$
> E[X], E[X^2]<+\infty
> $$
> In altre parole è una variabile aleatoria su cui *possiamo definire* la *varianza*.

