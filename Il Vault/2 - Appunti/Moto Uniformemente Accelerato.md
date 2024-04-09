---
data: 2024-03-09
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Moto Uniformemente Accelerato
tipologia: appunti
stato: "1"
capitolo: Cinematica
---
- - -
*Il moto uniformemente accelerato: legge oraria per moto con accelerazione costante, derivazione della formula*
- - -
# 1. Legge oraria per il moto uniformemente accelerato
#Teorema 
> [!thm] legge oraria per il moto uniformemente accelerato
> Supponiamo che l'accelerazione $a$ in cui si muove un corpo sia *costante*.
> Allora si trova che la sua legge oraria è
> $$
> \boxed{x(t)=x_0+v_0t +\frac{1}{2}at^2}
> $$
> dove $x_0$, $v_0$ sono (rispettivamente) la *posizione* e la *velocità* iniziale.
> Qualitativamente la legge oraria viene raffigurata come nella *figura 1.1.*.
^aec25f

**FIGURA 1.1.** (*Il grafico della legge oraria*)
![[Pasted image 20240309172137.png]]

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^aec25f]]
Partiamo da
$$
a(t)=a
$$
Vogliamo trovare la velocità di tale corpo. Per farlo, dobbiamo risolvere l'*equazione differenziale*
$$
\dot{v}=a(t) =a
$$
Con un *procedimento metodico*, ovvero con l'*integrazione* si ottiene
$$
\frac{\text{d}v}{\text{d}t}=a \implies \text{d}v = a \cdot \text{d}t \implies \int \text{d}v = a \int \text{d}t \implies \boxed{v(t)=at+C}
$$
dove $C$ è la *costante dell'integrazione indefinita*. Per trovare tale costante si può fare certe scelte, come ad esempio supporre che $v(t_0)=v_0$ per cui si ha
$$
v(t_0)=v_0=at_0+C \implies C = v_0-at_0
$$
Allora si ha
$$
v(t)=a(t-t_0)+v_0
$$
Per il prossimo passaggio, poniamo $t_0=0$ per semplicità.
Ora vogliamo risolvere l'equazione differenziale
$$
\frac{\text{d}x}{\text{d}t}=v(t) \implies x(t)=\int v(t) \ \text{d}t = \int (v_0+ at) \text{ d}t
$$
Compiendo l'opportuna scelta di porre $x(0)=x_0$, si ha
$$
\boxed{x(t)=x_0+v_0t+\frac{1}{2}at^2}
$$
che è la legge voluta. $\blacksquare$

# 2. L'incremento dello spazio in funzione della velocità iniziale
#Corollario 
> [!cor] l'incremento dello spostamento in funzione della velocità
> Supponiamo che un corpo uniformemente accelerato stia movendo ad un'accelerazione *fissata* $a$. Se il corpo parte dal punto $x_0$ con una velocità iniziale $v_0$, allora *l'incremento della posizione del corpo* è *proporizionale* all'*incremento del quadrato della velocità*. Ovvero,
> $$
> \boxed{x-x_0 = \frac{v^2-v^2_0}{2a}}
> $$
> Qui si ha infatti una descrizione del *moto uniformemente accelerato*, con il *"tempo rimosso"* (ovvero indipendentemente dal tempo trascorso).
^0eb22d

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^0eb22d]]
Abbiamo le leggi orarie
$$
v(t)=at + v_0; x(t)=x_0+v_0t+\frac{1}{2}at^2
$$
Vogliamo cercare di *"rimuovere il tempo"* da queste equazioni. Poniamo dunque
$$
t = \frac{v-v_0}{a}
$$
e vale per la prima equazione. Adesso lo sostituiamo per la seconda equazione e abbiamo
$$
\begin{align}
x&=x_0+v_0\left(\frac{v-v_0}{a}\right)-\frac{1}{2}a\left(\frac{v-v_0}{a}\right)^2
\\ &= x_0+ \frac{v\cdot v_0}{a}-\frac{v_0^2}{a}+\frac{1}{2a}(v^2-2v\cdot v_0 + v_0^2) 
\\&=x_0+\frac{v^2+v_0^2}{2a}-\frac{v_0^2}{a} \\ &= x_0+\frac{v^2-v_0^2}{2a}
\\ x-x_0&= \frac{v^2-v_0^2}{2a}
\end{align}
$$
che è la tesi. $\blacksquare$

#Osservazione 
> [!rmk] la distanza di frenata
> Questa formula è particolarmente utile per calcolare la *"distanza di frenata"* di un'oggetto, con un'accelerazione (*costante!!!*) negativa. Ponendo infatti la *"velocità finale"* $v^2=0$, si ha $-v_0^2 = 2ad$ (dove $d=x-x_0$) e quindi
> $$
> d=-\frac{v_0^2}{2a}
> $$
> Dato che $a$ è *negativa*, la quantità $d$ sarà sicuramente *positiva*.
^4b82f4
