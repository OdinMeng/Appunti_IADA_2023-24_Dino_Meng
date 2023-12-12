---
data: 2023-12-09
corso: "[[Analisi Matematica I]]"
argomento: Classificazioni di Discontinuità
tipologia: appunti
stato: "0"
capitolo:
---
- - -
*Classificazioni di punti discontinue: discontinuità eliminabile; discontinuità di primo, secondo e terzo ordine.*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Definizione di continuità]]
- [[Continuità delle funzioni varie]]
*Nota: questa pagina è stata scritta riprendendo il testo di E. Giusti di Analisi Matematica (volume 1)*
# 1. Discontinuità eliminabile
#Definizione 
> [!def] Definizione 1.1. (punto di discontinuità eliminabile)
> Sia $f$ una *funzione discontinua per un punto* $x_0$ ([[Definizione di continuità#^ddf65d]]).
> Il *punto di discontinuità* in $x_0$ si dice *"discontinuità eliminabile"* se il limite
> $$\lim_{x \to x_0}f(x)$$
> esiste ed è finito (appartenente a $\mathbb{R}$) ma non corrisponde al valore $f(x_0)$; ovvero
> $$\boxed{f(x_0) \neq \lim_{x \to x_0}f(x) = k \in \mathbb{R} }$$
> Si dice *"eliminabile"* in quanto è possibile *"ripristinare"* la continuità imponendo il valore $f(x_0)$ uguale al limite: però comunque bisogna stare attenti che in questo caso si tratta di un'altra funzione, non più quella originaria.
# 2. Discontinuità di primo, secondo e terzo ordine
#Definizione 
> [!def] Definizione 2.1. (discontinuità di primo ordine / di salto)
> Sia $f$ una *funzione discontinua nel punto* $x_0$.
> Il *punto di discontinuità* $x_0$ si classifica *"di primo ordine"* o *"di salto"* se esistono entrambi i limiti *destri e sinistri* ([[Definizione di Limite di funzione#^406c13]]) ma non sono uguali.
> $$\boxed{\lim_{x \to x_0^-}f(x) \neq \lim_{x \to x_0^+}f(x)}$$
> In altre parole, abbiamo una specie di *"salto"* tra i due *"punti"*.

#Definizione 
> [!def] Definizione 2.2. (discontinuità di secondo ordine)
> Sia $f$ una *funzione discontinua nel punto* $x_0$.
> Si classifica $x_0$ come un *"punto di discontinuità del secondo ordine"* se esistono entrambi il *limite destro* che il *limite sinistro*, ma una di essi non è finita ed è $+\infty$ o $-\infty$.
> Ovvero $$\boxed{\lim_{x \to x_0^-} f(x) \in \tilde{\mathbb{R}} \vee \lim_{x \to x_0^+}f(x) \in \tilde{\mathbb{R}}}$$
> In altre parole, abbiamo una specie di *"salto infinito"* tra i due *"punti"*.

#Definizione 
> [!def] Definizione 2.3. (discontinuità di terzo ordine)
> Sia $f$ una *funzione discontinua nel punto* $x_0$.
> Classifichiamo $x_0$ come un *"punto di discontinuità del terzo ordine"* se non esiste il *limite destro* e/o *limite sinistro*.
> $$\boxed{\not \exists \lim_{x \to x_0^\pm}f(x)}$$
> In questo non abbiamo neanche dei *"salti"*, in quanto non abbiamo nessun dato quantificabile per *"misurarla"*.

