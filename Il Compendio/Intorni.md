---
data: 2023-10-20
corso: "[[Analisi Matematica I]]"
argomento: Intorni
tipologia: appunti
stato: "0"
---
*Definizione di distanza (con le sue proprietà), intorno centrato aperto di centro $x_0$ e di raggio $r$, intorno di $x_0$; la retta estesa, l'intorno di $+\infty$ e di $-\infty$.*
- - -
# 0. Preambolo
In questo capitolo studieremo e definiremo delle nomenclature necessarie per studiare i *limiti*.

# 1. Distanza euclidea
**DEF 1.1.** Siano $x, y \in \mathbb{R}$, allora definisco la **distanza** (oppure **distanza euclidea**) di $x, y$ il valore $d(x,y) = | x - y |$
Graficamente questo corrisponde, infatti, alla distanza tra due punti sulla retta reale.
[ GRAFICO DA FARE ]

## Proprietà della distanza euclidea
**PROP 1.1.** Possiamo verificare alcune proprietà di questa applicazione ([[Funzioni]]); la prima essendo $$\forall x, y \in \mathbb{R}; d(x,y) \geq 0 \land d(x,y) \iff x=y$$
**PROP 1.2.** Proprietà simmetrica $$\forall x,y \in \mathbb{R}; d(x,y) = d(y,x)$$
**PROP 1.3.** *Disuguaglianza triangolare*; analogamente alle disuguaglianze triangolari già viste nei numeri [complessi](Operazioni%20sui%20Numeri%20Complessi) (**PROP. 4.7.**) e col [valore assoluto](Funzioni%20di%20potenza,%20radice%20e%20valore%20assoluto) (**OSS 3.1.1.**) si verifica che $$\forall x,y,z \in \mathbb{R}; d(x,z) \leq d(x,y)+d(y,z)$$
**DIMOSTRAZIONE DI PROP 1.3.** Infatti dall'**OSS 3.1.1.** di [[Funzioni di potenza, radice e valore assoluto]] so che se $$|a+b|\leq|a|+|b|$$può essere applicato con $a=x-y$ e $b=y-z$, così diventa $$|x-z|\leq|x-y|+|y-z| \iff d(x,z) \leq d(x,y) + d(y,z) \ \blacksquare$$
**OSS 1.1.** Noto che questa nozione di *distanza euclidea* può essere anche definita sui numeri complessi $\mathbb{C}$; infatti posso porre $$d(z_1,z_2) = |z_1-z_2|$$dove $|\cdot|$ rappresenta il *modulo* di un numero complesso ([[Operazioni sui Numeri Complessi]], **DEF 4.** o **DEF 4.1.**).
Graficamente, questo corrisponde a 
[GRAFICO DA FARE ]
Inoltre scopriamo che questa definizione della distanza euclidea su $\mathbb{C}$ conserva le tre proprietà (**PROP 1.1., 1.2., 1.3.**) appena enunciate. Pertanto è possibile scambiare *modulo* e *distanza euclidea* in quanto vi è un *isomorfismo* tra queste due applicazioni.

# 2. Intorno centrato aperto di centro x e di raggio r
**DEF 2.1.** Sia $x_0 \in \mathbb{R}$ e sia $r \in \mathbb{R}, r> 0$; allora chiamo **"l'intorno centrato aperto di centro $x_0$ e di raggio $r$"** l'*intervallo aperto* ([[Intervalli]], **DEF 1.4.**) $$]x_0-r, x_o+r[ \ = \{x \in \mathbb{R}: d(x,x_0) < r\}$$che graficamente corrisponde a 
[GRAFICO DA FARE]
ovvero la **palla aperta di centro $x_0$ e di raggio $r$**

ovvero l'insieme di *tutti i punti di $\mathbb{R}$ che hanno distanza da $x_0$ meno di $r$*.

**OSS 2.1.** Analogamente a **OSS 1.1.**, questa nozione di *intorno centrato aperto* può essere applicato a $\mathbb{C}$ usando la nozione di *modulo*; infatti graficamente questa corrisponde ad una *palla 2-dimensionale di centro $z_0$ e di raggio $r$*.
[ GRAFICO DA FARE ]

**OSS 2.2.** Allora si può definire l'*intorno centrato aperto* in $\mathbb{R}^3$ dove definisco $$\forall x,y \in \mathbb{R}^3; d(x,y)=\sqrt{(x_1-y_1)^2+(x_2-y_2)^2+(x_3-y_3)^2}$$
E graficamente questa corrisponde ad una vera *palla*. Letteralmente.
[ GRAFICO DA FARE ]

# 3. Intorno
**DEF 3.1.** Sia $x_0 \in \mathbb{R}$, chiamo allora l'**intorno di $x_o$** un *qualunque insieme $E$ di $\mathbb{R}$* che contiene una *palla aperta di centro $x_0$ e raggio $r$* (**DEF 2.1.**).
Graficamente,
[ GRAFICO DA FARE ]

**DEF 3.2.** Prendo $\tilde{\mathbb{R}}$ l'*insieme dei reali estesi*, ovvero $$\tilde{\mathbb{R}} := \mathbb{R} \cup \{-\infty, +\infty\}$$e definisco **l'intorno di $+\infty$** un *qualunque sottoinsieme $E \subseteq \mathbb{R}$* che contiene una *semiretta* $]a, +\infty[$; ovvero un insieme di tutti i numeri sopra un certo valore $a$.
[ GRAFICO DA FARE ]
## Esempi
**ESEMPIO 3.1.** L'intervallo $]3,7[$ è intorno di $3,5$; infatti è possibile prendere $r = 0,5$ e ottenere la *palla aperta di centro $3,5$ e di raggio $0,5$* che equivale a $$]3, 4[$$che infatti è contenuto nell'intervallo $]3, 7[$.
Graficamente,
[ Grafico da fare ]

**ESEMPIO 3.2.** Se prendendo l'insieme $$S = \{0\} \cup\{\frac{1}{n}, n \in \mathbb{N}\diagdown\{0\} \}$$e il punto $x_0 = \frac{1}{2}$, scopriamo che $S$ *non* è intorno di $x_0$; infatti prendendo per qualsiasi $r$ non riesco a formare una palla attorno a $x_0$, in quanto $S$ è definita sui numeri naturali che contiene dei *"buchi"*.

**ESEMPIO 3.3.** Considerando i *numeri naturali* ([[Numeri Naturali - Sommario]]), ci chiediamo se questo insieme è *intorno di $+\infty$*; la risposta è *no*: esistono degli elementi in $\mathbb{R}$ che non sono contenuti in $\mathbb{N}$, come ad esempio i numeri razionali.
Tuttavia se consideriamo l'insieme $\mathbb{N} \cup ]100, +\infty[$ allora la risposta è *sì* in quanto si considera un *intervallo* su $\mathbb{R}$.
Analogo il discorso per gli intervalli di $-\infty$.

