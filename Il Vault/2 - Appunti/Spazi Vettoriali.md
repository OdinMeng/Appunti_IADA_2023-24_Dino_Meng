---
data: 2023-10-03
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Spazi Vettoriali
tipologia: appunti
stato: "1"
---
*Definizione di $\mathbb{R}$-spazio vettoriale, gli 8 assiomi dei spazi vettoriali. L'utilità di spazi vettoriali; esempi di spazi vettoriali.*
- - -
# 1. Definizione di spazio vettoriale e vettore
Cerchiamo di astrarre quanto visto in [[Vettori Liberi]] e [[Operazioni sui vettori liberi]].

#Definizione 
> [!def] spazio vettoriale sul campo K
> Un *$\mathbb{K}$-spazio vettoriale* (o *spazio vettoriale su $\mathbb K$*, dove $\mathbb{K}$ è un campo ([[Campi#^d808b4]])) è un insieme $V$, dotato di due operazioni definiti come: $$\begin{align}&+: V \times V \longrightarrow V;\  (u,v) \mapsto u+v \\ &\ \ \cdot : \mathbb{R} \times V \longrightarrow V; \ (\lambda, v) \mapsto \lambda\cdot v \end{align}$$tali per cui $\forall \lambda, \mu \in \mathbb{R}$ e $\forall u,v,w \in V$ sono soddisfatte le seguenti proprietà: $$\begin{align}&\text{v}_1: (u+v)+w = u+(v+w) \\ &\text{v}_2: u+v = v+u \\&\text{v}_3: \exists0 \in V \ | \ 0+v=v+0=v \\ &\text{v}_4: \exists-v\in V \ | \ v+(-v) = (-v)+v = 0\\ &\text{v}_5:\lambda\cdot(u+v) = \lambda u + \lambda v  \\ &\text{v}_6: (\lambda+\mu)\cdot u = \lambda\cdot u + \mu \cdot u \\ &\text{v}_7: (\lambda\cdot\mu)\cdot v = \lambda\cdot(\mu \cdot v)\\&\text{v}_8: 1\cdot v = v\end{align}$$
Inoltre uno *spazio vettoriale* può essere anche definito con la seguente *terna*: $$(V, +, \cdot)$$
^7e2c4e

#Definizione 
> [!def] l'elemento neutro di un spazio vettoriale
>  Chiamiamo l'elemento $0$ della $\text{v}_3$ l'elemento *neutro*. In alternativa si può denominarla come $0_V$, in riferimento al spazio vettoriale $V$.

#Osservazione 
> [!rmk] $1$ non verrà chiamato come l'elemento neutro
> Notare che nella $\text{v}_8$ non chiameremo $1$ *l'elemento neutro* per ragioni di convenzione, particolarmente per quanto riguarda l'algebra astratta. Infatti, per essere definito tale, si dovrebbe trattare di una *moltiplicazione interna in $V$* (ovvero del tipo $\pi: V \longrightarrow V$)

#Proposizione 
> [!prp] $V_2$ è un $\mathbb{R}$-spazio vettoriale
Ciò che abbiamo visto fino ad ora ci mostra che $V_2$ (ovvero l'insieme dei vettori liberi nel piano ([[Vettori Liberi]])) è un $\mathbb{R}$-spazio vettoriale.

#Definizione 
> [!def] vettore
Sia $V$ un $\mathbb{K}$-spazio vettoriale; gli elementi $v \in V$ si dicono *vettori*.
**! ATTENZIONE !** Si nota immediatamente che questa definizione del *vettore* non deve necessariamente corrispondere alla nostra idea di un *vettore libero*. ^74efce

# 2. Conseguenze immediate delle 8 "v"
#Proposizione 
> [!prp] l'unicità di $0$ 
L'assioma $\text{v}_3$ garantisce che *esiste* almeno un vettore neutro $0$ tali che certe proprietà vengono soddisfatte; però ciò che *NON* garantisce è l'unicità del vettore neutro $0$. Potrebbe esistere un altro vettore *neutro* che possiamo chiamare $0'$.
Però $0'$ non esiste e lo dimostreremo.

**DIMOSTRAZIONE** dell'*unicità di $0_V$*
Voglio dimostrare che se $V$ è un $\mathbb{R}$-spazio vettoriale, allora l'elemento neutro $0$ è unico.
Supponiamo quindi che esistano due elementi neutri: $0$ e $0'$; mostreremo che con questa supposizione deve necessariamente valere $0 = 0'$, quindi da questo seguirà la tesi.
Per ipotesi, $\forall v \in V$, $$\begin{align}&A. 0+v \stackrel{\text{v}_3}= v+0 = v \\ &B. 0'+v \stackrel{\text{v}_3}= v+0' = v\end{align}$$
In $A.$ scegliamo $v = 0'$; allora $$0+0' = 0'+0= 0'$$
In $B.$ scegliamo invece $v = 0$; allora $$0'+0 = 0 + 0' = 0$$
Quindi notiamo che $$0 = 0+0' = 0'$$per la proprietà transitiva dell'uguaglianza, $0 = 0'$. $\blacksquare$

#Proposizione 
> [!prp] $0 \in \mathbb K$ è l'elemento nullo dello scalamento
La proposizione $$0 \cdot v = 0$$sembra ovvia e banale, come ci suggerirebbe la notazione; però in realtà non lo è veramente, in quanto associamo due concetti *diversi*; da una parte abbiamo lo *scalamento* del vettore $v$ per $\lambda = 0$, dall'altra abbiamo il *vettore neutro* $0$.
Quindi vogliamo dimostrare che se $V$ è un spazio vettoriale su $\mathbb{R}$, allora per ogni $v \in V$ sussiste la proposizione.

**DIMOSTRAZIONE** della *proposizione 2.2.* 
Per dimostrare la tesi, supponiamo che $v \in V$ e quindi abbiamo che: $$\begin{align}0\cdot v &= (0+0)\cdot v \stackrel{\text{v}_6}=0\cdot v + 0\cdot v \\ 0\cdot v &=0\cdot v + 0\cdot v\\ (0\cdot v) + (-(0 \cdot v)) &= (0 \cdot v) +(-(0 \cdot v)) + (0 \cdot v)\\ 0 &= 0 \cdot v \\ 0\cdot v &= 0 \ \blacksquare\end{align}$$

#Osservazione 
> [!rmk] c'è ancora qualcosa da dimostrare
Notare che in questi passaggi abbiamo fatto un *assunto* che non è dato per scontato; ovvero che il vettore opposto $-v$ è unico ad ogni vettore $v$. Infatti questo assunto è ancora da *dimostrare* (che è necessario per non invalidare questa dimostrazione).

#Proposizione 
> [!prp] l'elemento opposto è l'elemento scalato per $-1$
Anche la proposizione  $$(-1)\cdot v = -v$$sembra intuitiva, ma in realtà non è dato *per scontato* secondo gli assiomi $\text{v}$; infatti da un lato abbiamo lo *scalamento* di un vettore, invece dall'altro abbiamo il *vettore opposto del vettore $v$*. 
Quindi vogliamo dimostrare che se $V$ è un spazio vettoriale su $\mathbb{R}$, allora per ogni vettore $v \in V$ vale la proposizione appena enunciata.

**DIMOSTRAZIONE** della *proposizione 2.3.* 
Per dimostrare la tesi, utilizziamo la proprietà $\text{v}_3$, ovvero $$v + (-v) = -v + v = 0$$e dimostriamo la seconda uguaglianza, assumendo che $-v = (-1)\cdot v$; $$(-1)\cdot v + (1)\cdot v \stackrel{\text{v}_6}=(-1+1)\cdot v = 0\cdot v = 0$$

# EXCURSUS. Il senso della definizione dei spazi vettoriali
#Osservazione 
> [!rmk] il senso di definire e studiare i spazi vettoriali
Si nota che in questa pagina non abbiamo veramente imparato qualcosa di nuovo; come il filosofo *F. Nietzsche* criticherebbe l'uomo che produce la *definizione di un mammifero* poi per riconoscere un *cammello* come un *mammifero*$^{(1)}$, non abbiamo veramente scoperto nulla di nuovo: infatti abbiamo solo dato *definizioni* poi per riconoscerle, ad esempio abbiamo definito lo *spazio vettoriale* e abbiamo riconosciuto $V_2$ come uno spazio vettoriale.
>
In realtà il discorso del filosofo tedesco non varrebbe qui: abbiamo dato questa definizione di spazio vettoriale per un motivo ben preciso, ovvero quello di *astrarre, "abs-trahĕre"*. Astrarre nel senso che togliamo l'aspetto *"accidentale"* dei vettori geometrici, concentrandoci invece sull'aspetto *"sostanziale"*.
>
Infatti dopo potremmo vedere che esistono molti insiemi che sono dei *spazi vettoriali*; se dimostro che un certo insieme $A$ è uno spazio vettoriale, allora le proprietà $\text{v}_n$ saranno sicuramente vere.
- - -
$^{(1)}$*"Se io produco la definizione di un mammifero e poi dichiaro, alla vista di un cammello: guarda, un mammifero! certo con questo una verità viene portata alla luce, ma essa è di valore limitato, mi pare; in tutto e per tutto essa è antropomorfica e non contiene un solo singolo punto che sia «vero in sé», reale e universalmente valido, al di là della prospettiva dell’uomo."* (Su verità e menzogna in senso extramorale, 1896, Friedrich Nietzsche)
- - -

# 3. Esempi di spazi vettoriali

#Esempio 
> [!exm] $\mathbb{R}$
Consideriamo $V = \mathbb{R}$; con l'usuale definizione di *somma* $+$ e *moltiplicazione* $\cdot$, si verifica che anche $\mathbb{R}$ è uno $\mathbb{R}$-spazio vettoriale.

#Esempio 
> [!exm] $V_2$
Consideriamo $V = \mathbb{R} \times \mathbb{R}$, ovvero $$V = \{(a,b): a \in \mathbb{R}, b\in\mathbb{R}\}$$con le operazioni $$\begin{align}&(a,b)+(c,d) := (a+c,b+d)\\ &\lambda\cdot(a,b) := (\lambda\cdot a, \lambda\cdot b)\end{align}$$allora $V=\mathbb{R}^2$ è uno *spazio vettoriale*.

#Esempio 
> [!exm] $\mathbb{R}^n$
Generalizziamo l'[[#ESEMPIO 2.1. Coppie ordinate $V_2$]]; ovvero definiamo $$V= \mathbb{R}^n =\{(a_1,a_2,\ldots,a_n): a_1,a_2,\ldots,a_n \in \mathbb{R}\}$$$V$ è l'insieme delle *$n$-uple ordinate dei numeri reali*, con le operazioni $$\begin{align}+:&\  V \times V \longrightarrow V;\ \\&  ((a_1,a_2,\ldots,a_n), (b_1,b_2,\ldots,b_n)) \mapsto (a_1+b_1,\ldots,a_n+b_n)\\ \cdot :&\  \mathbb{R}\times V \longrightarrow V; \\ & \lambda\cdot(a_1,a_2,\ldots,a_n) \mapsto (\lambda\cdot v_1, \lambda\cdot v_2, \ldots, \lambda \cdot v_n) \end{align}$$
$(V, +, \cdot)$ è uno spazio vettoriale su $\mathbb{R}$.

#Esempio 
> [!exm] $\mathcal{F}$, l'insieme delle funzioni reali
Consideriamo l'insieme delle [funzioni di variabile reale](Funzioni.md) ([[Funzioni#^dcc989]]), ovvero $$V = \{\text{funzioni }f: A\subseteq\mathbb{R} \longrightarrow B \subseteq\mathbb{R}\}$$con le operazioni $$\begin{align}&+: V \times V \longrightarrow V;\  (f,g) \mapsto f+g \\ &\ \ \cdot : \mathbb{R}\times V \longrightarrow V; \ (\lambda, f) \mapsto \lambda\cdot f \end{align}$$

#Osservazione 
> [!rmk] chiarimenti sul comportamento della sommo a dello scalamento
Qui è importante chiarire il comportamento della *somma*, in quanto per noi non risulta immediatamente intuibile. Siano $f, g$ funzioni, quindi $$f+g = h$$ove $$h: \mathbb{R} \longrightarrow \mathbb{R}$$data dalla seguente: se $a \in \mathbb{R}$, allora $$h(a) = (f+g)(a) := f(a)+g(a)$$
>
Lo stesso discorso vale per lo *scalamento*; $$\begin{align}&\lambda\cdot f = F\\ & F: \mathbb{R} \longrightarrow\mathbb{R}\end{align}$$ove per ogni $a$ reale,$$F:= \lambda\cdot (f(a))$$

#Osservazione 
> [!rmk] la "funzione nulla"
 Vogliamo trovare la *funzione nulla*, ovvero la *funzione* che appartiene a $V$ e gioca lo stesso ruolo di $0$. La funzione la chiamiamo $O$ e si definisce come $$O : \mathbb{R} \longrightarrow\ \mathbb{R}, \ x \mapsto 0$$infatti, se definiamo $f: \mathbb{R} \longrightarrow \mathbb{R}$, allora $$(f+O): \mathbb{R} \longrightarrow\mathbb{R}, \ x \mapsto f(x)+0 = f(x)$$
Abbiamo visto che $\forall x \in \mathbb{R}$, $$(f+O)(x) = f(x)$$pertanto $$O+f=f; f+O=f$$quindi abbiamo verificato che $O$ è *l'elemento neutro* dello *spazio vettoriale* $(V, +, \cdot)$.
