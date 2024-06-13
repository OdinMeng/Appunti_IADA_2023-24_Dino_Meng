---
data: 2024-04-15
corso:
  - "[[Analisi Matematica II]]"
argomento: Regole di Differenziazione per Campi Scalari
tipologia: appunti
stato: "1"
capitolo: Calcolo Differenziale Multivariata
---
- - -
*Regole di differenziazione (relative al gradiente) per campi scalari. Teorema di Schwarz.*
- - -
# 0. Voci correlate
- [[Gradiente di Campi Scalari]]
- [[Proprietà delle derivate]]
# 1. Regole di Differenziazione
**Motivazione.** Vogliamo rendere il gradiente $\nabla f$ ([[Gradiente di Campi Scalari#^c35d56|1]]) una specie di *"sostituto"* della *derivata* per funzione di una variabile reale: infatti, entrambe rappresentano delle *differenziali* per funzioni, per la formula del gradiente ([[Gradiente di Campi Scalari#^824f3e|2]]). Introduciamo dunque delle *regole* per calcolare i *gradienti* in una maniera più sistematica e meccanica, che sono simili alle *regole per derivazione in una variabile* ([[Proprietà delle derivate#^fd716f|3]]).

#Teorema 
> [!thm] regole di differenziazione per campi scalari
> Siano $f, g:A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ differenziabili su $A$. Allora valgono le seguenti regole.
> i. La somma puntuale $f+g$ è differenziabile in $A$ con
> $$
> \nabla (f+g)=\nabla f + \nabla g
> $$
> ii. Il prodotto puntuale $f \cdot g$ è differenziabile in $A$ con
> $$
> \nabla (f\cdot g)=f \cdot \nabla g + g \cdot \nabla f
> $$
> iii. Se $g$ non si annulla in nessun punto del dominio, allora la divisione puntuale $f / g$ è differenziabile con
> $$
> \nabla\left(\frac{f}{g}\right)=\frac{g \nabla f- f \nabla g}{g^2}
> $$
^e718cf

**DIMOSTRAZIONE** del [[#^e718cf]]
Omessa: sono conti noiosi e non ci interessano. $\blacksquare$
