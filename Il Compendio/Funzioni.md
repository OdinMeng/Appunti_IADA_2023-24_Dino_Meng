---
data: 2023-10-01
corso: "[[Analisi Matematica I]]"
argomento: Funzioni
tipologia: appunti
stato: "1"
---
*Tutto sulle funzioni: dalla definizione di base alle proprietà specialissime.*
- - -
# 1. Definizione generale di Funzione
#Definizione 
> [!def] funzione
Siano,
>$A, B$ due [insiemi](Teoria%20degli%20Insiemi)
>$f$ una *"legge"*, ovvero una specie di [predicato](Predicati%20e%20Quantificatori), oppure una [relazione](Relazioni) speciale che ad ogni valore di $A$ associa *uno e uno solo* valore di $B$; cioè se $x \in A$, allora $\exists ! y \in B$ (si legge esiste solo un valore di $y$ in $B$) è associato a $x$ ($f(x)=y$)
   Allora la terna $(A, B, f)$ viene definita come *funzione*.

#Definizione 
> [!def] dominio, codominio e legge
L'insieme $A$ si dice il *dominio* della *funzione*.
L'insieme $B$ si dice il *codominio* della *funzione*.
La *"legge"* $f$ è una *regola* che ad ogni elemento $x$ del *dominio* $A$ associa uno e uno solo elemento $y$ del *codominio* $B$. 
^e8c03b

#Definizione 
> [!def] scrittura esplicita di una funzione
Con la scrittura compatta la terna può essere definita *esplicitamente* anche mediante la seguente notazione. $$f:a \in A \mapsto b \in B$$

#Esempio 
> [!exm] Esempio 1.1.
Siano $A=\{\text{Persone in quest'aula}\}$, $B=\{\text{Comuni italiani}\}$ e $f: x \mapsto \text{comuni di residenza}$; allora si rappresenta il grafico della funzione $(A, B, f)$ nella *figura 1.1.*.

**FIGURA 1.1.** (*Esempio 1.1.*)
![[Pasted image 20231001210256.png]]

#Definizione 
> [!def] funzione di reale variabile
In questo corso si studieranno le cosiddette *funzioni di reale variabile*, ovvero le funzioni $f: A \mapsto B$, con $A, B \subseteq \mathbb{R}$. 
^dcc989

#Osservazione 
> [!rmk] la definizione di funzione non dipende solo dalla legge
Secondo questa definizione di *funzione*, le sue proprietà non cambiano solamente per la legge $f$, ma anche per gli *insiemi* $A,B$.

#Osservazione 
> [!rmk] esempio di funzione e di non-funzione
Si osservi la *figura 1.2.*.
>
Si nota che la parte *rossa* è definibile come funzione, invece la parte *verde* non lo è, in quanto ci sono più elementi di $B$ associati ad un elemento di $A$; quindi si parte da un valore $a_n$ e tutti devono avere un solo corrispondente $b_n$.

**FIGURA 1.2.** (*Osservazione 1.2.*)
![[Pasted image 20231001210310.png]]

# 2. L'immagine di una funzione
#Definizione 
> [!def] valore immagine di un punto di una funzione
Sia $f: A \mapsto B$ una funzione.
Se $x \in A$, il valore $f(x) \in B$ viene definita come il *valore immagine di $x$*, una specie di *"proiezione"* del valore del dominio. 
^ee4c92

#Definizione 
> [!def] l'insieme immagine di una funzione
Riprendendo i presupposti di prima, si definisce l'insieme di tutti i *valori immagine* come *l'insieme immagine* e lo si indica con $$f(A)$$

#Esempio 
> [!exm] Esempio 2.1. 
Siano $A = \mathbb{N}, B = \mathbb{N}$, $f(n)=2n$. Allora dalle definizioni appena date abbiamo $f(\mathbb{N}) = \{0,2,4,\ldots\} = \mathbb{P}$ (l'insieme dei numeri pari);
^35d8bd

#Osservazione 
> [!rmk] l'insieme immagine è sempre sottoinsieme del codominio
Si nota che $\boxed{f(A) \subseteq B}$.

**FIGURA 2.1.** (*Esempio 2.1.*)
![[Pasted image 20231001210325.png]]

# 3. Iniettività, suriettività e biiettività
## Funzione suriettiva (o surgettiva)
#Definizione 
> [!def] funzione suriettiva
Se $$f(A) = B$$Allora la funzione $f$ si dice *suriettiva* (oppure come lo chiamano i pisani, *surgettiva*). 
^6068af

#Esempio 
> [!exm] Esempio 3.1.
La funzione $f(n) = 2n$ (tratto dall'*esempio 2.1.*, [[#^35d8bd]]) *non* è *surgettiva* se si definisce $A= \mathbb{N}$; invece lo è se si definisce $A = \mathbb{P}$.

## Funzione iniettiva (o ingettiva)
#Definizione 
> [!def] funzione iniettiva
Siano $$f: A \mapsto B; x_1,x_2 \in A$$Supponendo che $$x_1\neq x_2 \implies f(x_1) \neq x_2$$Allora si dice che la funzione $f$ è *iniettiva* (oppure in pisano *ingettiva*). 
^cc92ef

#Esempio 
> [!exm] Esempio 3.2.
Siano $$\begin{align}A &=[0,\infty)\\B&=[0,\infty) \\ f&:x\mapsto x^2 \end{align}$$(dove la notazione $[0, \infty)$ indica tutti i numeri $\forall x \in \mathbb{R}: x\geq 0$). La funzione $f(x)$ è *suriettiva*, in quanto $\forall y \geq 0, \exists x \geq 0: x^2=y$. Inoltre è anche *iniettiva*.
>
Infatti si dimostra che $f$ è iniettiva; se $0 \leq x_1 < x_2$, (quindi $x_1 \neq x_2$) allora moltiplicando da ambo le parti per $x_1$ e per $x_2$, si ottengono: $$\begin{align}\text{I. } &0 \leq x_1 < x_2 \\ &x_1^2 < x_1x_2 \\ \text{II. }&0 \leq x_1 < x_2 \\ &x_1x_2 < x_2^2 \\ &\text{Pertanto}\\x_1^2<x_2^2 \iff f(x_1) &< f(x_2) \implies f(x_1)\neq f(x_2) \blacksquare\end{align}$$

#Esempio 
> [!exm] Esempio 3.2.
Riprendendo la medesima funzione $f: x \mapsto x^2$ dall'*esempio 3.1.* e cambiando gli insiemi $A, B = \mathbb{R}$, la funzione $f$ non è più *né suriettiva né iniettiva*.
>
Lo si dimostra che non è suriettiva prendendo un valore $y = f(x) = -1$; si dimostra che $\nexists x : x^2=-1$ (guardando il grafico), pertanto $-1 \notin f(\mathbb{R})$.
>
Dopodiché si dimostra che non è neanche iniettiva tramite un *controesempio*; prendiamo $x_1 = -1, x_2 = 1$ (quindi $x_1\neq x_2$) e i *valori immagini* di $x_1, x_2$ sono $f(-1) = -1^2 = 1$, $f(1) = 1^2 = 1$, pertanto $f(-1) = f(1)$. $\blacksquare$

## Funzione biiettiva
#Definizione 
> [!def] funzione biiettiva
Se una funzione $f: A \mapsto B$ è sia *iniettiva* e sia *suriettiva*, allora si dice che $f$ è *biiettiva* (o *"bigettiva"* in pisano).
^d193b2

# 4. Funzione composta
#Definizione 
> [!def] funzione composta
Siano $$\begin{align} &f: A \mapsto B\\&g: B \mapsto C \end{align}$$
Si definisce $g \circ f$ la *funzione composita*, letta come *"$g$ dopo $f$"*.
$$\begin{align}&g\circ f:A\mapsto C\\&x \mapsto g(f(x)) \end{align}$$
Si illustra la *funzione composita* tramite il seguente diagramma (*figura 4.1.*).

^a248be

**FIGURA 4.1.** (*Definizione 4.1.*)
![[Pasted image 20231001210342.png]]

#Esempio 
> [!exm] Esempio 4.1.
Siano $$\begin{align} f: \mathbb{R} \mapsto \mathbb{R},&\space g: \mathbb{R} \mapsto \mathbb{R}\\f:x\mapsto x^2 &,\space g:y\mapsto y+2\end{align}$$Allora $$\begin{align}(g \circ f)(x) &= g(f(x)) = g(x^2) = x^2+2\\ (f \circ g)(x) &= f(g(x)) = f(x+2) = (x+2)^2 \end{align}$$

#Osservazione 
> [!rmk] $f \circ g \neq g \circ f$
Ovviamente da questo esempio si nota che *non è sempre vero* che $f\circ g = g \circ f$.
# 5. L'immagine di un pezzo del dominio
#Definizione 
> [!def] l'immagine di un pezzo del dominio
Sia $f: A \mapsto B$, $A' \subseteq A$; allora si definisce$$f(A') = \{f(x): x \in A'\}$$come *l'immagine di un pezzo del dominio $A$*.

#Esempio 
> [!exm] rappresentazione grafica
 Si rappresenta il grafico della funzione $f: \mathbb{R} \mapsto \mathbb{R}$, $f: x \mapsto x^2+3$. Si vuole trovare (e rappresentare) $f([1,2])$. 
Dal grafico si evince chiaramente che $f([1,2]) = [4,7]$.

**FIGURA 6.1.** (*Esempio 6.1.*)
![[Pasted image 20231001210354.png]]

# 6. La funzione inversa
#Definizione 
> [!def] funzione inversa
Sia $$f: A \mapsto B$$Supponiamo che esista una funzione $g:B \mapsto A$, tale che$$\begin{align}&g\circ f=\text{id}_A:A\mapsto A \\ &f\circ g = \text{id}_B: B \mapsto B\end{align}$$, ove la funzione d'identità su un insieme $A$ viene rappresentata da $\text{id}_A: x\mapsto x$, si dice che la funzione $g$ è la *funzione inversa di $f$*.
Si illustra la funzione inversa di $f$ con un diagramma (*figura 6.1.*).

**FIGURA 6.1.** (*Definizione 6.1.*)
![[Pasted image 20231001210403.png]]

#Teorema 
> [!thm] condizione necessaria e sufficiente per l'esistenza della funzione inversa $f^-1$
Una funzione $f: A \mapsto B$ ha la sua inversa $$f^-1: B \mapsto A$$ *se e solo se* è *biettiva*, ovvero se è sia *iniettiva* che *suriettiva*. 
^7b369f
# 7. L'insieme contro immagine di una funzione
#Definizione 
> [!def] insieme contro / pre - immagine di una funzione
Sia $$f: A \longrightarrow B$$ove $\tilde{A} \subseteq A, \tilde{B} \subseteq B$. 
Allora definisco *l'insieme contro immagine* (o *pre-immagine*) di $f$ $$f^{\leftarrow}(\tilde{B}) = \{x \in A: f(a) \in \tilde{B}\}$$ovvero gli elementi di $A$ tali per cui le loro immagini $f(a)$ appartengono all'insieme $\tilde{B}$. 
# 8. Monotonia di una funzione
#Definizione 
> [!def] monotonia di una funzione
Sia $$f : A \longrightarrow B$$e diciamo che questa sia *monotona* se sussistono una delle seguenti condizioni:
$$\begin{align}&\text{i. }\forall x, y \in A; x \leq y \implies f(x)\leq y\\ &\text{ii. }\forall x, y \in A; x < y \implies f(x)< y \\ &\text{iii. }\forall x, y \in A; x \leq y \implies f(x)\geq y \\ &\text{iv. }\forall x, y \in A; x <y \implies f(x) > y\end{align} $$
^3fb408

#Definizione 
> [!def] funzione strettamente/non crescente o decrescente
> In particolare, 
>- se sussiste la *i.*, allora la funzione è *crescente*;
>- invece per la *ii.*, la funzione si dice *strettamente crescente*.
>- Analoghi i discorsi per *iii, iv.* in cui diciamo che la funzione è *decrescente o strettamente decrescente*.
>$$$$

#Osservazione 
> [!rmk] la "corretta" pronuncia del termine
> Si nota che il termine *"monotònono"*, usata per per indicare che la funzione rispetta la condizione delineata dalla *definizione 8.1.*, viene pronunciata ponendo l'accento sulla terza *o*! Infatti con l'altra maniera di pronunciare, *"monòtono"*, questo termine acquisisce un significato completamente diverso, che a sua volta può portare un'accezione negativa.
# 9. Parità o disparità di una funzione
#Definizione 
> [!def] funzione pari o dispari
Siano $A, B \subseteq \mathbb{R}$, sia $A$ *simmetrico rispetto all'origine* (ovvero $\forall x \in A, -x \in A)$.
>
Sia la funzione $f$ $$f: A \longrightarrow B$$e la chiamo:
> - Una funzione *pari* se $$f(x) = f(-x)$$
> - Una funzione *dispari* se $$f(x) = -f(-x)$$

#Esempio 
> [!exm] esempio di funzioni pari o dispari
Osserviamo la funzione [potenza](Funzioni%20di%20potenza,%20radice%20e%20valore%20assoluto) ([[Funzioni di potenza, radice e valore assoluto#^2b25ba]]) $p_n(x)$.
La definizione appena data da noi ci *"suggerisce"* che per $n$ pari, $p_n$ è una funzione pari; similmente $p_n$ è dispari se $n$ è dispari (*figura 9.1.*).

**FIGURA 9.1.** (*Esempio 9.1.*)
![[Pasted image 20231025224442.png]]

# 10. Periodicità di una funzione
#Definizione 
> [!def] funzione periodica
Sia $T > 0$ un numero, $A \subseteq \mathbb{R}$ tale che $$\forall k \in \mathbb{Z}, \forall x \in A; x + Tk \in A$$
Sia ora una funzione $f$ del tipo $$f: A \longrightarrow \mathbb{R}$$è *periodica* se è vera che $$\boxed{\forall x, k; f(x) = f(x+Tk)}$$

#Esempio 
> [!exm] le funzioni trigonometriche sono periodiche
Le *funzioni trigonometriche* sono periodiche: infatti secondo la *proposizione 2.3. sulle funzioni trigonometriche* ([[Funzioni trigonometriche#^189c92]]), abbiamo $T = 2\pi$. Ovvero $$\sin(x) = \sin(x+2\pi k), \forall k \in \mathbb{Z}$$analogo il discorso per $\cos$.

**FIGURA 10.1.** (*Esempio 10.1.*)
![[Pasted image 20231025225605.png]]

# 11. Massimo e minimo assoluto di una funzione
#Definizione 
> [!def] Punto di massimo e minimo assoluto 
Sia $f: E \longrightarrow \mathbb{R}$, $x_0 \in E$.
Allora definiamo $x_0$ punto di *massimo assoluto* se abbiamo
$$\forall x \in E, f(x) \leq f(x_0)$$
Alternativamente è punto di *minimo assoluto* se abbiamo
$$\forall x \in E, f(x) \geq f(x_0)$$
^e1ab12

#Definizione 
> [!def] massimo e minimo di una funzione
> Se $x_0$ è *punto di massimo* (minimo) *assoluto*, allora il *valore immagine* ([[#^ee4c92]]) $f(x_0)$ si dice *massimo* (minimo) *assoluto* della funzione.
> $$\max f, \min f$$

#Osservazione 
> [!rmk] ci possono essere più punti di massimo ma solo un massimo
**ATTENZIONE!** Notiamo che se possiamo avere più di uno *punti di massimo* (minimo), ci ricordiamo che il *massimo* (minimo) della funzione è l'*immagine* del punto: dunque in quanto tale può esistere un unico *valore massimo* dell'insieme immagine $f(E)$.

#Esempio 
> [!exm] Esempio 11.1. Funzione $\sin$
> Sia $f(x) = \sin{x}$.
> Allora sappiamo che i *punti di massimo* di $\sin$ è costituita dalla classe di equivalenza 
> $$\left[\frac{\pi}{2}\right]_{\equiv 2\pi}$$
> Analogamente i *punti di minimo* di $\sin$ sono
> $$\left[-\frac{\pi}{2}\right]_{\equiv 2\pi}$$
> Tuttavia il *massimo* e *minimo* di $\sin$ sono $-1, 1$; infatti
> $$-1 \leq \sin x \leq 1, \forall x \in \mathbb{R}$$

L'illustrazione di questo esempio mediante grafici è lasciato al pubblico per *esercizio*.

#Esempio 
> [!exm] Esempio 11.2. Funzione con dominio ristretto
> Guardiamo alla funzione $x_{|[0,1[}$, ovvero una funzione del tipo
> $$f : [0, 1[ \ \longrightarrow \mathbb{R}$$
> Notiamo che $f$ *non* ha *massimo*, perché $f([0, 1[) = [0, 1[$ dunque $f(E)$ non ha $\max$ (anche se resta che esiste $\sup$). 
> Invece $f$ ha minimo con $f(0) = 0$.

Anche questo esempio è lasciato al pubblico da illustrare per *esercizio*.

> [!exr] Esercizio 11.3. Funzione $\frac{1}{x}$
> Si lascia al lettore verificare se $\frac{1}{x}$ ha *massimo* e/o *minimo* per il suo *dominio*.

# 12. Massimo e minimo relativo di una funzione
#Definizione 
> [!def] max, min relativo
Sia $f: E \longrightarrow \mathbb{R}$, $E \subseteq \mathbb{R}$, $x_0 \in E$.
Allora $x_0$ è *punto di massimo (minimo) relativo* se vale che
$$\exists r>0: \forall x \in \ ]x_0-r, x_0+r[ \ \cap E, f(x) \leq f(x_0) \ (f(x) \geq (x_0)) $$
^f3e49c

**FIGURA 12.1.** (*Idea del concetto*)
![[Pasted image 20231122210444.png]]

# 13. Asintoto di una funzione (argomento avanzato)
Consultare la pagina [[Asintoto di una funzione]].
# 14. Classe C di una funzione (argomento avanzato)
Consultare la pagina [[Derivata Successiva e Classe C]]
