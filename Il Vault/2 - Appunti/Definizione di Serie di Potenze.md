---
data: 2024-03-22
corso:
  - "[[Analisi Matematica II]]"
argomento: Definizione di Serie di Potenze
tipologia: appunti
stato: "1"
capitolo: Successioni e Serie di Funzioni
---
- - -
*Osservazione preliminare. Definizione di serie di potenze a coefficienti reali con punto iniziale $x_0$ (o concentrata in $x_0$). Esempi di serie di potenze e la loro convergenza al variare di $x \in E$.*
- - -
# 0. Voci correlate
- [[Definizioni Relative alle Serie di Funzioni]]
- [[Criteri sulle Serie di Funzioni]]
# 1. Definizione di Serie di Potenze
#Osservazione 
> [!rmk] osservazione preliminare
> Poniamoci il seguente problema: dato che le *funzioni* possono rappresentare delle *somme per le serie di funzioni*, possiamo approssimare le *funzioni* con delle *funzioni più gestibili*? Come ad esempio con potenze? In questa parte sulle *serie di potenze* si parlerà di questo argomento.

#Definizione 
> [!def] serie di potenze a coefficienti reali con punto iniziale in $x_0$
> Sia $(a_n)_n$ una *successione reale*. Sia $x_0 \in \mathbb{R}$. 
> Posto per ogni $n \in \mathbb{N}$ come $f_n := a_n (x-x_0)^n$, si definisce la *serie di funzioni*
> $$
> \sum^{+\infty}_{n \in \mathbb{N} }f_n(x)=\sum^{+\infty}_{n \in \mathbb{N} }a_n(x-x_0)^n
> $$
> e questa si dice *"serie di potenze a coefficienti reali con punto iniziale $x_0$"*.
^106000

#Osservazione 
> [!rmk] sulla convergenza della serie
> Si osserva che per $x=x_0$, la serie è *sempre* convergente, dato che $x-x_0$ si anulla.
> Inoltre, di solito si pone $x_0=0$.

# 2. Esempi di Serie di Potenze
#Esempio 
> [!exm] serie di potenze globalmente convergente
> Sia $x_0=0$ e $a_n = \frac{1}{n!}$. Allora si ha la *serie di potenze*
> $$
> \sum^{+\infty}_{n=1}\frac{x^n}{n!}
> $$
> Questa serie di potenze converge per $x=0$ e anche per $x \in \mathbb{R}$ per il *criterio del rapporto*.

#Esempio 
> [!exm] serie di potenze convergente su un intervallo non degenere
> Prendiamo
> $$
> \sum^{+\infty}_{n=0}x^n
> $$
> Questa è esattamente una *serie geometrica* ([[Carattere di una Serie#^4a2d35]]), pertanto è convergente per $|x|<1$ e divergente per $|x|\geq 1$. Quindi la serie è convergente per l'intorno di $0$ posto come $(-1,1)$. 

#Esempio 
> [!exm] serie di potenze convergente solo sul centro
> Prendiamo adesso
> $$
> \sum^{+\infty}_{n=0}n!x^n
> $$
> Questa serie è convergente *se e solo se* $x=x_0=0$, per il criterio del rapporto.

#Osservazione 
> [!rmk] gli intervalli di convergenza sono degli intorni del centro
> Notiamo che l'*insieme di convergenza* sono sempre un *intorno* di $x_0$. In seguito parleremo di *raggio di convergenza* ([[Insieme e Raggio di Convergenza per una Serie di Potenze]]).
