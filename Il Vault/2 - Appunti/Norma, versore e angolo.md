---
data: 2024-01-09
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Norma, versore e angolo
tipologia: appunti
stato: "1"
capitolo: Geometria Euclidea (cenni)
---
- - -
*Conseguenze della definizione di prodotto scalare: definizione di norma di un vettore, definizione di versore e definizione di angolo tra due vettori. Disuguaglianza di Cauchy-Schwarz*
- - -
# 0. Voci correlate
- [[Prodotto Scalare]]
- [[Ortogonalità e ortonormalità]]
- [[Teorema spettrale]]
# 1. Definizione della norma e del versore
#Definizione 
> [!def] norma di un vettore
> Sia $v \in \mathbb{R}^n$ un *vettore*.
> Definiamo la *norma di $v$* la quantità
> $$||v|| := \sqrt{(v \cdot v)}$$
> dove $\cdot$ rappresenta il *prodotto scalare* ([[Prodotto Scalare#^228d4c]]).

#Osservazione 
> [!rmk] la norma è sempre positiva
> Notiamo che per il *dominio della radice quadrata*, la norma di un vettore qualsiasi è *sempre positiva*.
> $$||v|| \geq 0, \forall v \in \mathbb{R}^n$$

#Definizione 
> [!def] versore
> Si definisce un *versore* un vettore $v \in \mathbb{R}^n$ tale che la sua norma sia $1$.
> $$||v|| = 1$$

^8d3d4d

# 2. Disuguaglianza di Cauchy-Schwarz
#Teorema 
> [!thm] disuguaglianza di Cauchy-Schwarz
> Siano $v, w$ dei vettori in $\mathbb{R}^n$. Allora deve necessariamente valere la seguente disuguaglianza:
> $$|v \cdot w| \leq ||v|| \cdot || w ||$$
^15ae79

#Corollario 
> [!cor] disuguaglianza di Cauchy-Schwarz 2.0
> Siano $v, w \in \mathbb{R}^n$ diversi dal *vettore nullo* (pertanto la loro norma sarà strettamente positiva). 
> Allora vale che il *prodotto scalare dei vettori diviso per il prodotto scalare delle norme* è limitato tra $-1, 1$.
> $$-1 \leq \frac{v \cdot w}{||v|| \cdot ||w||} \leq 1$$
^9ed8df

#Dimostrazione 
**DIMOSTRAZIONE** del *corollario 2.1.* ([[#^9ed8df]])
La dimostrazione del corollario è immediato. Basta considerare la *disuguaglianza triangolare* ([[Funzioni di potenza, radice e valore assoluto#^5bd8b3]]), applicarla sulla *disuguaglianza di Cauchy-Schwarz* ([[#^15ae79]]) e infine dividere da ambo i lati per $||v|| \cdot ||w||$.
$$\begin{gather}|v \cdot w| \leq ||v|| \cdot || w || \\\implies -(||v|| \cdot || w ||) \leq |v \cdot w| \leq ||v|| \cdot || w || \\\implies \boxed{-1 \leq \frac{|v \cdot w|}{||v|| \cdot || w||} \leq 1}\end{gather}$$

# 3. Definizione di angolo
#Osservazione 
> [!rmk] la disuguaglianza di Cauchy-Schwarz e la trigonometria
> Possiamo, in una maniera interessante, collegare la *disuguaglianza di Cauchy Schwarz* ([[#^9ed8df]]) alle *funzioni trigonometriche* ([[Funzioni trigonometriche#^dd4b35]]), in particolare il *coseno*; infatti sono entrambe *limitate* in $[-1, 1]$.

#Definizione 
> [!def] angolo tra due vettori
> Siano $v, w$ due vettori *non nulli* in $\mathbb{R}^n$.
> Si definisce l'*angolo* di $v, w$ come la quantità $\alpha \in [0, \pi]$
> $$\cos \alpha = \frac{v \cdot w}{||v|| \cdot ||w||} $$

^52f57f

#Osservazione 
> [!rmk] condizione necessaria e sufficiente per la perpendicolarità di due vettori
> Si osserva che l'angolo tra due vettori non nulli $v, w$ è $\frac{\pi}{2}$ se e solo se vale il seguente:
> $$\frac{v \cdot w}{||v|| \cdot || w||} = \cos(\frac{\pi}{2}) = 0 \implies v \cdot w = 0$$
> Questa osservazione diventa importante per la definizione di *ortogonalità* ([[Ortogonalità e ortonormalità]]).

^013add

