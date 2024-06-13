---
data: 2024-04-15
corso:
  - "[[Analisi Matematica II]]"
argomento: Campi Scalari di Classe C
tipologia: appunti
stato: "1"
capitolo: Calcolo Differenziale Multivariata
---
- - -
*Definizione di funzioni classi C in più variabili (campi scalari). Corollario: i campi scalari sono differenziabili.*
- - -
# 0. Voci correlate
- [[Teorema del Differenziale Totale]]
- [[Derivata Successiva e Classe C]]
# 1. Definizione di Classe C1 per Campi Scalari
**Motivazione.** Vogliamo introdurre una *classe di funzioni* che sia un'estensione delle *funzioni classi C in una variabile* ([[Derivata Successiva e Classe C#^dbae48|1]]). Dato che conosciamo il *teorema del differenziale totale* ([[Teorema del Differenziale Totale#^2b4861|2]]), possiamo dare una *definizione ben posta* di classe C di campi scalari.

#Definizione 
> [!def] campi scalari classe $\mathcal{C}^1$
> Si dice che una funzione $f:A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ è *"di classe $\mathcal{C}^1$ in $A$"* se $f$ ammette le *derivate parziali continue* in $A$. In tal caso si scrive
> $$
> f \in \mathcal{C}^1(A)
> $$

# 2. Proprietà Fondamentale di Classe C1
#Corollario 
> [!cor] proprietà delle funzioni di classe C
> Sia $f:A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$. Allora vale la seguente implicazione
> $$
> f \in \mathcal{C}^1 (A) \implies f \text{ differenziabile su } A
> $$

^b0c91a

#Dimostrazione 
**DIMOSTRAZIONE.** ([[#^b0c91a]])
Diretta conseguenza del teorema del differenziale totale ([[Teorema del Differenziale Totale#^2b4861]]). $\blacksquare$

# 3. Definizione Generalizzata di Classe Ck
**Motivazione.** Adesso vogliamo generalizzare tale nozione di *"classe C1"* su *"classi CK"* con $\mathbb{N} \ni K >1$.

#Definizione 
> [!def] campi scalari di classe $\mathcal{C}^{K \in \mathbb{N} \geq 1}$
> Sia $f: A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$, con $A$ aperto. Sia $K \in \mathbb{N}, K\geq 1$.
> Si dice che *"$f$ è di classe $\mathcal{C}^K$"* se $f$ è *dotata di tutte le derivate parziali* fino all'*ordine* $K$ e sono *continue in $A$*.
> 
> In tal caso si scrive
> $$
> f \in \mathcal{C}^K(A)
> $$

^96cf34

#Esempio 
> [!exm] classe C2 di una funzione in tre variabili
> Scrivere $f:\mathbb{R}^3 \longrightarrow \mathbb{R} \in \mathcal{C}^2$ vuol dire
> $$
> \frac{\partial^2 f}{\partial x^2}, \frac{\partial^2 f}{\partial x \partial y}, \ldots, \frac{\partial^2 f}{\partial z^2} \ \text{continue su }A
> $$

