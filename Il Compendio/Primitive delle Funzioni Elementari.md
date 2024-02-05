---
data: 2023-12-12
corso: "[[Analisi Matematica I]]"
argomento: Primitive delle Funzioni Elementari
tipologia: appunti
stato: "1"
capitolo:
---
- - -
*Tabella delle primitive delle funzioni elementari.*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Primitiva di una Funzione]]
- [[Tabella delle derivate]]
# 1. Tabella delle Primitive delle Funzioni Elementari
Prendiamo la *tabella delle derivate delle funzioni* e la *"leggiamo al contrario"*:

|            $f$             |           $G \in \int f$           |
|:--------------------------:|:----------------------------------:|
|           $$0$$            |        $$C \in \mathbb{R}$$        |
|           $$1$$            |               $$x$$                |
|          $$x^n$$           | $$\frac{x^{n+1}}{n+1}, n \neq -1$$ |
|      $$\frac{1}{x}$$       |       $$\ln -x-, x \neq 0$$        |
|          $$e^x$$           |              $$e^x$$               |
|         $$\sin x$$         |            $$- \cos x$$            |
|        $$ \cos x$$         |            $$ \sin x$$             |
| $$\frac{1}{\sqrt{1-x^2}}$$ | $$\arcsin x$$ oppure $$\arccos x$$ |
| $$\frac{1}{\sqrt{1+x^2}}$$ |           $$\arctan x$$            |

#Osservazione 
> [!oss] Osservazione 1.1. (l'arcoseno e l'arcocoseno sono la stessa cosa in questo contesto)
> Notiamo che per la frazione $\frac{1}{\sqrt{1-x^2}}$ abbiamo *due primitive* ammissibili: questo al primo impatto può sembrare strano, ma in una seconda analisi (matematica) vedremo che questa situazione ha perfettamente senso!
> 
> Consideriamo infatti la funzione
> $$f(x) = \arcsin x + \arccos x$$
> Che è definita in $[-1, 1]$ dato che entrambe sono definite in tale intervallo.
> La calcoliamo in $0$ (ricordandoci delle definizioni! [[Funzioni trigonometriche#^07affd]]):
> $$f(0)=\arcsin 0 + \arccos 0 = 0+\frac{\pi}{2}$$
> Calcoliamo la *derivata* di $f$:
> $$f'(x) = \frac{1}{\sqrt{1-x^2}} - \frac{1}{\sqrt{1-x^2}} = 0$$
> Ma per una *conseguenza del teorema di Lagrange* ([[Conseguenze del teorema di Cauchy e di Lagrange#^19eb72]]), $f$ dev'essere una funzione *costante*, di conseguenza deve valere
> $$\frac{\pi}{2}=\arcsin x + \arccos x \implies -\arccos x = \arcsin x + \frac{\pi}{2}$$
> Quindi vediamo che queste funzioni *sono* effettivamente le stesse, solo che una è traslata dell'altra. Poi, come osserveremo nel contesto del *calcolo integrale*, questo li rende effettivamente uguali.

#Osservazione 
> [!oss] Osservazione 1.2.
> Per comodità chiamo l'*insieme delle primitive* di $f$ come $\int f(x) dx$, ovvero *"l'integrale indefinito"* di $f(x)$; inoltre indico un *qualsiasi* elemento di $\int f(x) dx$ come $F(x)+c$.
