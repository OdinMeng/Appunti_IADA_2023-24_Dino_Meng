---
data: 2023-11-23
corso: "[[Analisi Matematica I]]"
argomento: Teorema di Cauchy
tipologia: appunti
stato: "1"
---
*Teorema di Cauchy: enunciato e dimostrazione. Osservazione grafica (da vedere dopo aver visto quella di Lagrange)*
- - -
# 1. Enunciato del teorema di Cauchy
#Teorema 
> [!thm] Teorema 1.1. (di Cauchy)
> Siano $f, g: [a,b] \longrightarrow \mathbb{R}$ *continue* in $[a, b]$ ([[Definizione di continuità#^ddf65d]]), *derivabili* in $]a, b[$ ([[Derivata e derivabilità#^6e7606]]).
> Sia inoltre $\forall x \in \ ]a, b[\ , g'(x) \neq 0$. (*ipotesi supplementare*)
> Allora vale che
> $$\boxed{\exists \xi \in \ ]a, b[\ : \frac{f'(\xi)}{g'(\xi)}=\frac{f(b)-f(a)}{g(b)-g(a)}} $$ 
^0c9255
# 2. Dimostrazione
#Dimostrazione 
**DIMOSTRAZIONE** del *teorema di Cauchy* ([[#^0c9255]])
Prima di tutto *"do un senso"* all'ipotesi supplementare: provo dunque $g(b)-g(a) \neq 0$.
Infatti supponendo che, per assurdo, se fosse tale allora per il *teorema di Rolle* ([[Teorema di Rolle#^2d8bff]]) avrei un $\xi$ per cui si annullerebbe $g'(\xi)$. Infatti si avrebbe la divisione per una quantità che è uguale a $0$.
Pertanto è necessario che $g'(x) \neq 0 \implies g(b) \neq g(a)$.
Ora considero una funzione che chiameremo *"phi grande"* $\Phi$:
$$\Phi(x) = f(x)(g(b)-g(a))-g(x)(f(b)-f(a)) $$
Quindi considerandola scopro le seguenti.
- Il dominio di $\Phi$ è lo stesso di $f, g$.
- $\Phi$ è *continua* in $[a, b]$ in quanto si tratta di una *sottrazione* tra funzioni continue ([[Teoremi sulle funzioni continue#^41a8ec]]).
- $\Phi$ è *derivabile* in $]a, b[$ per motivo analogo di prima ([[Proprietà delle derivate#^fd716f]]).
Dato che $\Phi$ è continua, posso calcolare $\Phi(a)$ e $\Phi(b)$.
1. $\Phi(a)$ diventa
   $$\begin{align}\Phi(a) &= f(a)(\ldots)-g(a)(\ldots) \\ &= f(a)g(b) - f(a)g(a) - f(b)g(a) + f(a)g(a) \\ &= f(a)g(b) - f(b)g(a) \end{align} $$
1. $\Phi(b)$ diventa invece
   $$\begin{align}\Phi(b) &= f(b)(\ldots)-g(b)(\ldots) \\ &= f(b)g(b)-f(b)g(a) -f(b)g(b) + f(a)g(b) \\ &= f(a)g(b) - f(b)g(a)\end{align}$$
Ora scopro che
$$\Phi(b) = \Phi(a) $$
Quindi per il *teorema di Rolle* ([[Teorema di Rolle#^2d8bff]]) ho
$$\exists \xi \in\  ]a, b[ \  : \Phi(\xi) = 0 $$

Ora considero la sua derivata $\Phi'$ e la *"calcoliamo"* in $\xi$. Svolgendo i conti ottengo
$$\begin{align} \Phi'(x) &= \left(f(x)(g(b)-g(a))\right)'-\left(g(x)(f(b)-f(a)\right)' \\ &= f'(x)(g(b)-g(a))-g'(x)(f(b)-f(a)) \\ \implies \Phi'(\xi) &= f'(\xi)(g(b)-g(a))-g'(\xi)(f(b)-f(a)) = 0 \\ &=\boxed{\frac{f'(\xi)}{g'(\xi)} = \frac{f(b)-f(a)}{g(b)-g(a)}} \ \blacksquare\end{align}$$

#Osservazione 
> [!oss] Osservazione 2.1. (anche se non vale l'ipotesi aggiuntiva il teorema di Cauchy vale fino ad un certo punto)
Se nel *teorema di Cauchy* ([[#^0c9255]]) supponessimo di *non* far valere l'ipotesi aggiuntiva $g'(x)\neq 0$, allora si potrebbe comunque dire che
$$\boxed{\exists \xi \in \ ]a, b[ \ : f'(\xi)(g(b)-g(a)) = g'(\xi)(f(b)-f(a))} $$
# 3. Interpretazione grafica
*Nota: qui si consiglia fortemente prima di leggere l'interpretazione grafica del teorema di Lagrange ([[Teorema di Lagrange]]) per poter capire bene questa osservazione.*

#Osservazione 
> [!oss] Osservazione 3.1. (interpretazione grafica del teorema di Cauchy)
**OSS 3.1.** (*Interpretazione grafica*) Con il *teorema di Lagrange* abbiamo visto che la sua interpretazione grafica consiste nell'intravedere che esiste un punto per il quale la sua tangente è parallela alla retta secante di $a,b$ ([[Teorema di Lagrange#^a12a1e]]).
Ora ci chiediamo come sarebbe possibile interpretare il *teorema di Cauchy* da un punto di vista grafico.
>
Immaginiamo innanzitutto che $f, g$ siano delle *leggi orarie* ([[Introduzione al Calcolo Differenziale#^56240d]]) che vivono in $[a, b]$.
Ora immaginiamo di *"appiattire"* la funzione $f$, *"distorcendo"* la funzione $g$: quindi disegniamo una specie di piano cartesiano in cui la retta delle ascisse viene rappresentata da $f(x)$, la retta della ordinate invece da $g(x)$.
>
Immaginandoci questo piano, posizioniamo il punto $A: (f(a), g(a))$ e l'altro punto $B : (f(b), g(b))$.
Possiamo disegnare una specie di *funzione* che parte da $A$ e finisce in $B$: però in realtà non si tratta di una vera funzione in quanto non vi è nessun nesso tra $f$ e $g$, quindi questa linea può comportarsi come vuole.
>
Ora immagino il vettore $\overrightarrow{AB}$ ([[Vettori Applicati#^8447d6]]) come il *"vettore di spostamento"* e il *"vettore velocità"* rappresentato da
$$\overrightarrow{P}: (f'(\xi), g'(\xi))$$
ovvero prendendo un qualsiasi punto della *linea* disegnata prendo la sua tangente.
Allora per il *teorema di Cauchy* sappiamo che
$$f'(\xi)(g(b)-g(a))=g'(\xi)(f(b)-f(a)) $$
Allora considerando la matrice quadrata 2x2 $M_2(\mathbb{R})$ ([[Matrice#^a95650]])
$$A = \begin{pmatrix}f(b)-f(a) & g(b)-g(a) \\ f'(\xi) & g'(\xi) \end{pmatrix} $$
Ora prendendo il *determinante* ([[Determinante#^2bb1d4]]) sappiamo che per *Cauchy* abbiamo
$$ \det A = 0$$
Di conseguenza abbiamo la *condizione di parallelismo* ([[Geometria del Piano Affine#^a10a3d]]) per i vettori $$\overrightarrow{AB} \parallel \overrightarrow{P} $$
^30644e

**FIGURA 3.1.** (*Idea dell'interpretazione geometrica*)
![[Pasted image 20231123183001.png]]

#Osservazione 
> [!oss] Osservazione 3.2. (Cauchy vale in $\mathbb{R}^3$?)
Vedere [[Conseguenze del teorema di Cauchy e di Lagrange]] in quanto la ritengo una pagina più appropriata per contenere tale informazione. Vedere l'*osservazione 1.2.*.
