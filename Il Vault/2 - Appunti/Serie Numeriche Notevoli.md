---
data: 2024-03-08
corso:
  - "[[Analisi Matematica II]]"
argomento: Serie Numeriche Notevoli
tipologia: appunti
stato: "1"
capitolo: Serie Numeriche
---
- - -
*Serie numeriche notevoli, campioni per il confronto con altre serie.*
- - -
# 0. Voci correlate
- [[Teorema del Confronto per le Serie a Termini non negativi]]
- [[Relazione tra Serie Numeriche e Integrali Generalizzati]]
# 1. Serie Armonica Generalizzata
#Teorema 
> [!thm] serie armonica generalizzata
> Consideriamo la serie
> $$
> \sum^{+\infty}_{n=1}\frac{1}{n^p}
> $$
> per $p>0$.
> Se $p \in (0, 1]$, allora la serie *diverge*.
> Se $p \in (1, +\infty)$ allora la serie *converge* con somma $s \leq \frac{p}{p-1}$.
^63f010

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^63f010]].
*N.B. Questa è un'idea della dimostrazione*
Sfruttiamo la *relazione tra le serie numeriche e gli integrali generalizzati*, con la *funzione scalino* per $\frac{1}{n^p}$. Abbiamo dunque una situazione del tipo
$$
\sum^{+\infty}_{n=1}a_n \longleftrightarrow \int_0^{+\infty}a(t) \text{ d}t \leq \int_0^{+\infty}f(t) \ \text{d}t
$$
Vogliamo trovare un'opportuna funzione $f(t)$ di cui sappiamo essere convergente e dominare $a(t)$.
Definiamo dunque
$$
f(x):= \begin{cases}1, 0 \leq x < 1 \\ \frac{1}{x^p}, x \geq 1 \end{cases}
$$
Come visto con gli *integrali impropri notevoli* ([[Integrali Impropri Notevoli#^84083f]]), possiamo studiare l'*integrabilità* di $f$ su $(0, +\infty)$. $\blacksquare$

#Osservazione 
> [!rmk] l'utilità delle serie armoniche generalizzate
> Questa serie sarà particolarmente utile per studiare il *carattere* delle *altre serie*, dal momento che la *serie armonica generalizzata* funge da *"serie campione"* per i confronti.
