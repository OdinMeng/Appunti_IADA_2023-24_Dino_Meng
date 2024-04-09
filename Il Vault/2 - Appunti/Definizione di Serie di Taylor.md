---
data: 2024-03-22
corso:
  - "[[Analisi Matematica II]]"
argomento: Osservazione Preliminare per le Serie di Taylor
tipologia: appunti
stato: "1"
capitolo: Successioni e Serie di Funzioni
---
- - -
*Osservazione preliminare per le serie di Taylor: le serie di potenze possono diventare i coefficienti di Taylor. Definizione di serie di Taylor*
- - -
# 0. Voci correlate
- [[Formula di Taylor]]
- [[Definizione di Serie di Potenze]]
- [[Funzione Somma di una Serie di Potenze]]
# 1. Osservazione preliminare
#Osservazione 
> [!rmk] le serie di potenze sono riconducibili alla formula di Taylor
> Consideriamo una *serie di potenze* ([[Definizione di Serie di Potenze#^106000|1]]) $\sum_n a_n(x-x_0)^n$, col *raggio di convergenza* $\mathcal{R} \in (0, +\infty]$ ([[Insieme e Raggio di Convergenza per una Serie di Potenze#^5707e6|2]]) e sia $f$ la *funzione somma* ([[Funzione Somma di una Serie di Potenze#^fb512c|3]]).
> Per i *teoremi enunciati su* $f$ ([[Funzione Somma di una Serie di Potenze#^071d88|4]]), sappiamo che $f \in \mathcal{C}^{\infty}$ ([[Derivata Successiva e Classe C#^dbae48|5]]) e si ha
> $$
> \frac{\text{d}^k}{\text{d}x^k}f(x)=\sum^{+\infty}_{n=k}(n)(n-1)\ldots(n-k+1)(x-x_0)^{n-k}\cdot a_n
> $$
> Adesso applichiamo questa formula per $x=x_0$; si ha
> $$
> \frac{\text{d}^k}{\text{d}x^k}f(x_0)=k! a_k
> $$
> (si nota che stiamo usando la convenzione $0^0=1$)
> Si ricava il *termine generale* $k$-esimo della successione $(a_n)_n$ come
> $$
> a_k = \frac{f^{(k)}(x_0) }{k!}
> $$
> che è proprio il *termine* $k$-esimo del *polinomio di Taylor* ([[Formula di Taylor#^556164|6]]).
> Dunque, possiamo scrivere per $x \in I_\mathcal{R}$,
> $$
> f(x)=\sum^{+\infty}_{n=0}a_n(x-x_0)^n = \sum^{+\infty}_{n=0}\frac{f^{(n)}(x_0) }{n!}(x-x_0)^n
> $$

# 2. Definizione di Serie di Taylor
#Definizione 
> [!def] serie di Taylor di una funzione avente un punto iniziale
> Sia $f \in \mathcal{C}^{\infty}$ su $I=(x_0-k, x_0+k)$ con $k>0$.
> La *serie di funzioni* (in particolare la *serie di potenze*)
> $$
> \sum^{+\infty}_{n=0}\frac{f^{(n)}(x_0)}{n!}(x-x_0)^n
> $$
> si dice *"serie di Taylor di $f$ avente punto iniziale $x_0$"*.

^6b0724

#Osservazione 
> [!rmk] relazione tra funzione e la sua serie di Taylor
> Per una funzione di classe infinito abbiamo definito una sua *"serie di Taylor"*. Possiamo trovare un legame tra gli due oggetti matematici? Vedremo questo con la nozione di *sviluppabilità in serie di Taylor* ([[Sviluppabilità di una Funzione in Serie di Taylor]]).