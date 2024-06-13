---
data: 2024-05-10
corso:
  - "[[Analisi Matematica II]]"
argomento: Studio Qualitativo dei Problemi di Cauchy
tipologia: appunti
stato: "1"
capitolo: Equazioni Differenziali
---
- - -
*Strumenti vari per lo studio qualitativo dei problemi di Cauchy: lemma di prolungabilità (o fuga da un compatto), corollario del teorema di Cauchy-Lipschitz (soluzioni uniche non si intersecano): definizione di equilibri, teorema dell'asintoto.*
- - -
# 0. Voci correlate
- [[Teorema di Cauchy-Lipschitz]]
- [[Esistenza locale e globale delle soluzioni ai Problemi di Cauchy]]
# 1. Equilibri dei Problemi di Cauchy
#Corollario 
> [!cor] relazione tra problemi di Cauchy aventi condizione iniziale diversi
> Siano $(PC_1)$ e $(PC_2)$ due *problemi di Cauchy ben posti*
> $$
> (PC_1):\left\{\begin{align}
> & y'(x)=f(x,y(x)) \\
> & y(x_0)=y_0
> \end{align}\right.
> $$
e
> $$
> (PC_2):\left\{\begin{align}
> & y'(x)=f(x,y(x)) \\
> & y(x_0)=\tilde{y_0} \neq y_0
> \end{align}\right.
> $$
> Se $y_1(t)$ e $y_2(t)$ sono *soluzioni distinte* dei *problemi di Cauchy* (rispettivamente per $(PC_1)$, $(PC_2)$), allora l'intersezione dei loro grafici è nulla
> $$
> G(y_1)\cap G(y_2)=\emptyset
> $$
> Ovvero $y_1$, $y_2$ *non si incontrano mai*.
^da450c

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^da450c]]
Si dimostra per assurdo. Supponendo che esista un punto $(t_0,y_0) \in G(y_1) \cap G(y_2)$, posso considerare il *problema di Cauchy* definito sul dato iniziale $(t_0, y_0)$ che dà due soluzioni $y_1,y_2$ e ciò contraddice *Cauchy-Lipschitz* ([[Teorema di Cauchy-Lipschitz]]). $\blacksquare$

#Definizione 
> [!def] equilibrio di un Problema di Cauchy
> Sia $(PC)$ un *problema di Cauchy* ben posto, con *dati iniziali al variare* $(x_0,y_0) \in A$. Si dice *"equilibrio"* una funzione una retta del tipo $y=c \in \mathbb{R}$ che risolve il problema di *Cauchy* in $(x_0, y_0)$.
> 
> In altre parole, le soluzioni aventi *dati iniziali diversi* non possono mai *"attraversare"* l'equilibrio.

# 2. Teorema dell'Asintoto
Enunciamo un teorema utile per *valutare* il comportamento asintotico delle soluzioni.

#Teorema 
> [!thm] teorema dell'asintoto
> Sia $u:I=[a,+\infty)\longrightarrow \mathbb{R} \in \mathcal{C}^1(I)$, con $a \in \tilde{\mathbb{R} }$.
> 
> Supponendo *che esistano i limiti*
> $$
> \lim_{t \to +\infty}u(t)=l, \lim_{t\to+\infty}u'(t)=m
> $$
> con $l,m \in \tilde{\mathbb{R} }$, abbiamo l'implicazione
> $$
> l < +\infty \implies m=0
> $$
> o prendendo la sua contronomiale abbiamo
> $$
> m \neq 0 \implies l =+\infty
> $$

^add98e

# 3. Studio Qualitativo di Equazioni Differenziali
Diamo un *modello* per lo *studio qualitativo* di equazioni differenziali ordinarie, in particolare quelle *ben poste*.

#Esempio 
**ESEMPIO 3.1.** (*Studio qualitativo di un problema di Cauchy*)
Come esempio prendiamo l'equazione differenziale
$$
y'(x)=xy(x)
$$
1. **Dominio**
Prima di tutto studiamo il *dominio* della funzione $f$, in particolare definita su $I \times \mathbb{R}$, dove $I$ è il dominio della soluzione $y(x)$. In questo caso si vede banalmente che $I$ è la retta reale $\mathbb{R}$ ($I=\mathbb{R}$).
2. **Buona Posizione**
Dopodiché vediamo *com'è fatta* questa funzione $f$. In questo caso, $f$ soddisfa le *condizioni del teorema di Cauchy Lipschitz*, dal momento che $f$ è continua e la derivata $f_y=x$ lo è pure.
3. **Dominio della soluzione**
Adesso vediamo il *dominio* della soluzione al problema di Cauchy. Abbiamo variati strumenti, tra cui il *teorema dell'esistenza globale* ([[Esistenza locale e globale delle soluzioni ai Problemi di Cauchy#^637b48]]) o la *fuga dal compatto* ([[Esistenza locale e globale delle soluzioni ai Problemi di Cauchy#^1c9a26]]).
In questo caso vediamo che $f$ è *sublineare*, infatti
$$
\forall K \Subset \mathbb{R}^2, |f|\leq \left|\max_K x y(x)\right|= \underbracket{\alpha}_{\max _K}|y(x)|+\underbracket{\beta}_{0}
$$
Dato che $f$ è definita su $\mathbb R \times \mathbb R$, la soluzione è definita su tutta $\mathbb{R}$.
4. **Equilibri del problema di Cauchy**
Dimenticandoci di eventuali condizioni iniziali, cerchiamo di trovare soluzioni a
$$
y'=xy
$$
ponendo $y=c \in \mathbb{R}$ una *costante*, che implica
$$
0=x\cdot c \implies c=0
$$
Abbiamo dunque $y=0$ un *equilibrio* della soluzione. Ovvero se una *soluzione* parte da $0$, rimane costante; se parte *sopra* rimane sopra, se sotto rimane sotto.
Questo diventa più utile se conosciamo *più punti di equilibrio*, in tal modo di poter *"incastrare"* la funzione $y$ in un *"rango"* di valori.
5. *Segno e flessione della funzione*
Qui abbiamo che il segno di $f'$ è *positiva* nel *primo* e nel *terzo quadrante* (ovvero $(+,+)$ e $(-,-)$).
Inoltre siamo in grado di prendere la seconda derivata $y''$, dal momento che abbiamo $y \in \mathcal{C}^1 \implies y' \in \mathcal{C}^1$ (se è derivabile il termine generale $y$, allora lo è pure $y'$). Possiamo dunque prendere
$$
y''=(x\cdot y(x))'=y(x)+xy(x)=y(x)(1+x^2)
$$
Come prima, abbiamo lo stesso segno di $y(x)$ (ovvero è positiva nei positivi, negativa nei negativi).
6. **Simmetria della funzione**
Vogliamo verificare se la *soluzione* $y$ sia simmetrica o meno (in particolare pari o dispari). Per far questo, consideriamo il *problema di Cauchy* posto come
$$
(PC):\left\{\begin{align}
& y'(x)=f(x,y(x)) \\
& y(0)=y_0
\end{align}\right.
$$
e poniamo $z(x)=y(-x)$ (o $-y(-x)$ se dobbiamo dimostrare che è *dispari*). L'idea è quella di verificare che *sia* $z(x)$ che $y(x)$ risolvono $(PC)$, dunque per *Cauchy-Lipschitz* sono uguali ($y=z$). Questo è il caso: infatti abbiamo
$$
(PC):\left\{\begin{align}
&  z'(x)=-y'(-x)=-(-x)y(-x)=xz(x)\\
& z(0)=y(-0)=y_0
\end{align}\right.
$$
come volevasi dimostrare. 
7. **Limiti della soluzione**
In alcuni casi è utile determinare il *comportamento asintotico* dei limiti della soluzione. In questo caso ci avvaliamo dell'*teorema dell'asintoto* ([[#^add98e]]), per dire se la funzione tende a un valore finito o infinito. In questo caso abbiamo che il limite della sua derivata $\lim_\infty y'=+\infty\neq 0$, da cui si ha $\lim_{\infty}y = +\infty$. Utile per controllare se tutto ciò appena ottenuto è *consistente* con gli *equilibri determinati*, che *limitano* la soluzione $y$. $\blacksquare$

**FIGURA 3.1.** (*Risultati del primo studio qualitativo*)
![[Pasted image 20240511153546.png|650]]
