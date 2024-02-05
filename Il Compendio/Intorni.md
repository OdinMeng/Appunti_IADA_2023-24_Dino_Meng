---
data: 2023-10-20
corso: "[[Analisi Matematica I]]"
argomento: Intorni
tipologia: appunti
stato: "1"
---
*Definizione di distanza (con le sue proprietà), intorno centrato aperto di centro $x_0$ e di raggio $r$, intorno di $x_0$; la retta estesa, l'intorno di $+\infty$ e di $-\infty$.*
- - -
# 0. Preambolo, pagine correlate
In questo capitolo studieremo e definiremo delle nomenclature necessarie per studiare i *limiti* ([[Definizione di Limite di funzione]]).
- [[Punti di aderenza e di accumulazione]]
- [[Definizione di Limite di funzione]]
# 1. Distanza euclidea
#Definizione 
> [!def] Definizione 1.1. (Distanza Euclidea).
> Siano $x, y \in \mathbb{R}$, allora definisco la *distanza* (oppure *distanza euclidea*) di $x, y$ il valore 
> $$d(x,y) = | x - y |$$

^f7536a

**FIGURA 1.1.** (*Idea grafica della distanza*)
Graficamente questo corrisponde, appunto, alla distanza tra due punti sulla retta reale.
![[Pasted image 20231022155041.png]]
## Proprietà della distanza euclidea
Possiamo verificare alcune proprietà di questa applicazione ([[Funzioni]]); la prima essendo la proprietà *antiriflessiva*.

#Proposizione
> [!prop] Proposizione 1.1. (Antiriflessività).
> $$\forall x, y \in \mathbb{R}; d(x,y) \geq 0 \land d(x,y) \iff x=y$$

#Proposizione 
> [!prop] Proposizione 1.2. (Proprietà simmetrica).
>  $$\forall x,y \in \mathbb{R}; d(x,y) = d(y,x)$$

#Proposizione 
> [!prop] Proposizione 1.3. (Disuguaglianza Triangolare).
> Analogamente alle disuguaglianze triangolari già viste nei numeri [complessi](Operazioni%20sui%20Numeri%20Complessi) (**PROP. 4.7.**) e col [valore assoluto](Funzioni%20di%20potenza,%20radice%20e%20valore%20assoluto) (**OSS 3.1.1.**) si verifica che $$\forall x,y,z \in \mathbb{R}; d(x,z) \leq d(x,y)+d(y,z)$$
^ff0f13

#Dimostrazione 
**DIMOSTRAZIONE** della *proposizione 1.3.* ([[#^ff0f13]])
Infatti dall'*osservazione 3.1.1.* di [[Funzioni di potenza, radice e valore assoluto]] so che se $$|a+b|\leq|a|+|b|$$può essere applicato con $a=x-y$ e $b=y-z$, così diventa $$|x-z|\leq|x-y|+|y-z| \iff d(x,z) \leq d(x,y) + d(y,z) \ \blacksquare$$

#Osservazione 
> [!oss] Osservazione 1.1. (distanza euclidea sui complessi)
   Noto che questa nozione di *distanza euclidea* può essere anche definita sui numeri complessi $\mathbb{C}$; infatti posso porre $$d(z_1,z_2) = |z_1-z_2|$$dove $|\cdot|$ rappresenta il *modulo* di un numero complesso ([[Operazioni sui Numeri Complessi#^53f86b]]).
   Inoltre scopriamo che questa definizione della distanza euclidea su $\mathbb{C}$ conserva le tre proprietà (**PROP 1.1., 1.2., 1.3.**) appena enunciate. Pertanto è possibile *"far coincidere"* *modulo* e *distanza euclidea* in quanto vi è un *isomorfismo* tra queste due applicazioni.

^03c61c

**FIGURA 1.1.** (*Idea della distanza euclidea su $\mathbb{C}$*)
![[Pasted image 20231022155125.png]]
# 2. Intorno centrato aperto di centro x e di raggio r
#Definizione 
> [!def] Definizione 2.1. (Intorno centrato).
> Sia $x_0 \in \mathbb{R}$ e sia $r \in \mathbb{R}, r> 0$; allora chiamo *"l'intorno centrato aperto di centro $x_0$ e di raggio $r$"* l'intervallo aperto ([[Intervalli#^6d6e94]]) 
> $$]x_0-r, x_0+r[ \ = \{x \in \mathbb{R}: d(x,x_0) < r\}$$
> un altro nome può essere la *palla aperta di centro $x_0$ e di raggio $r$*
> Quindi questo è l'insieme di *tutti i punti di $\mathbb{R}$ che hanno distanza da $x_0$ meno di $r$*.

^ffc6f8

**FIGURA 2.1.** (*Idea di intorno centrato*)
![[Pasted image 20231022155144.png]]

#Osservazione 
> [!oss] Osservazione 2.1. (intorno centrato aperto nei complessi)
   Come fatto nell'*osservazione 1.1.* ([[#^03c61c]]), questa nozione di *intorno centrato aperto* può essere applicato a $\mathbb{C}$ usando la nozione di *modulo*; infatti graficamente questa corrisponde ad una *palla in 2D di centro $z_0$ e di raggio $r$*. (*Figura 2.1.*)

#Osservazione 
> [!oss] Osservazione 2.2. (intorno centrato aperto nello spazio tridimensionale)
Allora si può definire l'*intorno centrato aperto* in $\mathbb{R}^3$ dove definisco $$\forall x,y \in \mathbb{R}^3; d(x,y)=\sqrt{(x_1-y_1)^2+(x_2-y_2)^2+(x_3-y_3)^2}$$
E graficamente questa corrisponde ad una vera *palla*. Letteralmente. (*Figura 2.1.*)

**FIGURA 2.1.** (*Intorno in $\mathbb{C}$, $\mathbb{R}^3$*)
![[Pasted image 20231022155218.png]]

# 3. Intorno
#Definizione 
> [!def] Definizione 3.1. (Intorno di un punto).
> Sia $x_0 \in \mathbb{R}$, chiamo allora l'**intorno di $x_o$** un *qualunque insieme $E$ di $\mathbb{R}$* che contiene una *palla aperta di centro $x_0$ e raggio $r$* ([[#^ffc6f8]]).
^533fec

**FIGURA 3.1.** (*Idea di intorno*)
![[Pasted image 20231022155308.png]]

#Definizione 
> [!def] Definizione 3.2. (Intorno di $\pm\infty$).
> Prendo $\tilde{\mathbb{R}}$ l'*insieme dei reali estesi*, ovvero 
> $$\tilde{\mathbb{R}} := \mathbb{R} \cup \{-\infty, +\infty\}$$
> e definisco *l'intorno di di $+\infty$* un *qualunque sottoinsieme $E \subseteq \mathbb{R}$* che contiene una *semiretta* $]a, +\infty[$; ovvero un insieme *superiormente illimitato* ([[Insiemi limitati, maggioranti, massimo e teorema dell'estremo superiore#^12e552]]) del tipo $]a, +\infty[$.

^4ff870

**FIGURA 3.2.** (*Idea dell'intorno di $\pm \infty$*)
![[Pasted image 20231022155322.png]]
## Esempi
#Esempio 
> [!ex] Esempio 3.1.
> L'intervallo $]3,7[$ è intorno di $3,5$; infatti è possibile prendere $r = 0,5$ e ottenere la *palla aperta di centro $3,5$ e di raggio $0,5$* che equivale a $$]3, 4[$$che infatti è contenuto nell'intervallo $]3, 7[$ (*figura 3.2.*)

**FIGURA 3.2.** (*Esempio grafico*)
![[Pasted image 20231022155336.png]]

#Esempio 
> [!ex] Esempio 3.2.
   Se prendendo l'insieme $$S = \{0\} \cup\{\frac{1}{n}, n \in \mathbb{N}\diagdown\{0\} \}$$e il punto $x_0 = \frac{1}{2}$, scopriamo che $S$ *non* è intorno di $x_0$; infatti prendendo per qualsiasi $r$ non riesco a formare una palla attorno a $x_0$, in quanto $S$ è definita sui numeri naturali che contiene dei *"buchi"*.

#Esempio 
> [!ex] Esempio 3.3. ($\mathbb{R}$ è intorno di +$\infty$?)
   Considerando i *numeri naturali* ([[Numeri Naturali - Sommario]]), ci chiediamo se questo insieme è *intorno di $+\infty$*; la risposta è *no*: esistono degli elementi in $\mathbb{R}$ che non sono contenuti in $\mathbb{N}$, come ad esempio i numeri razionali.
   Tuttavia se consideriamo l'insieme $\mathbb{N} \cup ]100, +\infty[$ allora la risposta è *sì* in quanto si considera un *intervallo* su $\mathbb{R}$.
   Analogo il discorso per gli intervalli di $-\infty$.

