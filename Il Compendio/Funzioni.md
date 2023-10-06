---
data: 2023-10-01
corso: "[[Analisi Matematica I]]"
argomento: Funzioni
tipologia: appunti
stato: "1"
---
*Funzioni - Definizione base, esempi, definizione di immagine, funzione suriettiva, iniettiva; funzione composta; l'immagine di un pezzo di dominio; funzione inversa, teorema sulle funzioni inverse.*
- - -
# DEF 1. Funzione
Siano,
- $A, B$ due [insiemi](Teoria%20degli%20Insiemi)
- $f$ una *"legge"*, ovvero una specie di [predicato](Predicati%20e%20Quantificatori), oppure una [relazione](Relazioni) speciale che ad ogni valore di $A$ associa *uno e uno solo* valore di $B$;
	- Cioè se $x \in A$, allora $\exists ! y \in B$ (si legge esiste solo un valore di $y$ in $B$) è associato a $x$ ($f(x)=y$)
**DEF 1.** La terna $(A, B, f)$ viene definita come **funzione**.
	**SUBDEF 1.1.** L'insieme $A$ si dice il **dominio** della *funzione*,
	**SUBDEF 1.2.** L'insieme $B$ si dice il **codominio** della *funzione*,
	**SUBDEF 1.3.** La *"legge"* $f$ è una **regola** che ad ogni elemento $x$ del *dominio* $A$ associa uno e uno solo elemento $y$ del *codominio* $B$.

**DEFINIZIONE ESPLICITA.** 
Con la scrittura compatta la terna può essere definita *esplicitamente* anche mediante la seguente notazione. $$f:A \mapsto B$$
**ESEMPIO 1.1.**
Siano $A=\{\text{Persone in quest'aula}\}$, $B=\{\text{Comuni italiani}\}$ e $f: x \mapsto \text{comuni di residenza}$; allora si rappresenta il grafico della funzione $(A, B, f)$ nel seguente modo:
![[Pasted image 20231001210256.png]]

**DEF 1.1.**
In questo corso si studieranno le cosiddette *funzioni di reale variabile*, ovvero le funzioni $f: A \mapsto B$, con $A, B \subseteq \mathbb{R}$.

**OSS 1.1** Secondo questa definizione di *funzione*, le sue proprietà non cambiano solamente per la legge $f$, ma anche per gli *insiemi* $A,B$.

**OSS 1.2.** Si osserva il seguente grafico:
![[Pasted image 20231001210310.png]]
Si nota che la parte *rossa* è funzione, invece la parte *verde* non lo è, in quanto ci sono più elementi di $B$ associati ad un elemento di $A$; quindi si parte da un valore $a_n$ e tutti devono avere un solo corrispondente $b_n$.

# DEF 2. Valore immagine
Sia $f: A \mapsto B$ una funzione.
Se $x \in A$, il valore $f(x) \in B$ viene definita come il **valore immagine di $x$**, una specie di proiezione.

## DEF 2.1. L'insieme immagine
Riprendendo i presupposti di prima, si definisce l'insieme di tutti i *valori immagine* come **l'insieme immagine** e lo si indica con $$f(A)$$
**ESEMPIO 2.1.1.** Siano $A = \mathbb{N}, B = \mathbb{N}$, $f(n)=2n$. $f(\mathbb{N}) = \{0,2,4,\ldots\} = \mathbb{P}$ (l'insieme dei numeri pari);
	**OSS 2.1.1.1.** Si nota che $f(A) \subseteq B$.
Ecco il grafico della funzione $f$; 
![[Pasted image 20231001210325.png]]

# DEF 3. Funziona suriettiva e iniettiva
## DEF 3.1. Funzione suriettiva (o surgettiva)
Se $$f(A) = B$$Allora la funzione $f$ si dice **suriettiva** (oppure come lo chiamano i pisani, **surgettiva**).

**ESEMPIO 3.1.** La funzione $f(n) = 2n$ (tratto dall'**ESEMPIO 2.1.1.**) *non* è *surgettiva* se si definisce $A= \mathbb{N}$; invece lo è se si definisce $A = \mathbb{P}$.

## DEF 3.2. Funzione iniettiva (o ingettiva)
Siano $$f: A \mapsto B; x_1,x_2 \in A$$Supponendo che $$x_1\neq x_2 \implies f(x_1) \neq x_2$$Allora si dice che la funzione $f$ è **iniettiva** (oppure in pisano **ingettiva**).

**ESEMPIO 4.1.** Siano $$\begin{align}A &=[0,\infty)\\B&=[0,\infty) \\ f&:x\mapsto x^2 \end{align}$$(dove la notazione $[0, \infty)$ indica tutti i numeri $\forall x \in \mathbb{R}: x\geq 0$). La funzione $f(x)$ è *suriettiva*, in quanto $\forall y \geq 0, \exists x \geq 0: x^2=y$. Inoltre è anche *iniettiva*.
	**DIM.** Si dimostra che $f$ è iniettiva; se $0 \leq x_1 < x_2$, (quindi $x_1 \neq x_2$) allora moltiplicando da ambo le parti per $x_1$ e per $x_2$, si ottengono: $$\begin{align}\text{I. } &0 \leq x_1 < x_2 \\ &x_1^2 < x_1x_2 \\ \text{II. }&0 \leq x_1 < x_2 \\ &x_1x_2 < x_2^2 \\ &\text{Pertanto}\\x_1^2<x_2^2 \iff f(x_1) &< f(x_2) \implies f(x_1)\neq f(x_2) \blacksquare\end{align}$$

**ESEMPIO 4.2.** Riprendendo la medesima funzione $f: x \mapsto x^2$ dall'**ESEMPIO 4.1.**, però cambiando gli insiemi $A, B = \mathbb{R}$, la funzione $f$ non è più *né suriettiva né iniettiva*;
	**DIM.** Si dimostra che non è suriettiva prendendo un valore $y = f(x) = -1$; si dimostra che $\nexists x : x^2=-1$ (guardando il grafico), pertanto $-1 \notin f(\mathbb{R})$.
	Dopodiché si dimostra che non è neanche iniettiva tramite un *controesempio*; prendiamo $x_1 = -1, x_2 = 1$ (quindi $x_1\neq x_2$) e i *valori immagini* di $x_1, x_2$ sono $f(-1) = -1^2 = 1$, $f(1) = 1^2 = 1$, pertanto $f(-1) = f(1)$. $\blacksquare$

## DEF 3.3. Funzione biiettiva
Se una funzione $f: A \mapsto B$ è sia *iniettiva* e sia *suriettiva*, allora si dice che $f$ è **biiettiva**

# DEF 4. Funzione composta
Siano $$\begin{align} &f: A \mapsto B\\&g: B \mapsto C \end{align}$$
Si definisce $g \circ f$ la **funzione composita** *"$g$ dopo $f$"*.$$\begin{align}&g\circ f:A\mapsto C\\&x \mapsto g(f(x)) \end{align}$$Si illustra la **funzione composita** tramite il seguente diagramma:
![[Pasted image 20231001210342.png]]

**ESEMPIO 5.1.** Siano $$\begin{align} f: \mathbb{R} \mapsto \mathbb{R},&\space g: \mathbb{R} \mapsto \mathbb{R}\\f:x\mapsto x^2 &,\space g:y\mapsto y+2\end{align}$$Allora $$\begin{align}(g \circ f)(x) &= g(f(x)) = g(x^2) = x^2+2\\ (f \circ g)(x) &= f(g(x)) = f(x+2) = (x+2)^2 \end{align}$$
	**OSS 5.1.1.** Ovviamente da questo esempio si nota che *non è sempre vero* che $f\circ g = g \circ f$.

# DEF 5. L'immagine di un pezzo del dominio
Sia $f: A \mapsto B$, $A' \subseteq A$; allora si definisce$$f(A') = \{f(x): x \in A'\}$$come **l'immagine di un pezzo del dominio $A$.**

**ESEMPIO 6.1.** Si rappresenta il grafico della funzione $f: \mathbb{R} \mapsto \mathbb{R}$, $f: x \mapsto x^2+3$. Si vuole trovare (e rappresentare) $f([1,2])$. 
![[Pasted image 20231001210354.png]]
Dal grafico si evince chiaramente che $f([1,2]) = [4,7]$.

# DEF 6. La funzione inversa
Sia $$f: A \mapsto B$$Supponiamo che esista una funzione $g:B \mapsto A$, tale che$$\begin{align}&g\circ f=\text{id}_A:A\mapsto A \\ &f\circ g = \text{id}_B: B \mapsto B\end{align}$$, ove la funzione d'identità su un insieme $A$ viene rappresentata da $\text{id}_A: x\mapsto x$, si dice che la funzione $g$ è la **funzione inversa di $f$**.
Si illustra la funzione inversa di $f$ con un diagramma.
![[Pasted image 20231001210403.png]]
# TEOREMA 1. L'esistenza della funzione inversa $f^-1$
Una funzione $f: A \mapsto B$ ha la sua inversa $$f^-1: B \mapsto A$$**se e solo se** è *biettiva*, ovvero se è entrambi *iniettiva* e *suriettiva*.
