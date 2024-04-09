---
data: 2023-10-12
corso: "[[Analisi Matematica I]]"
argomento: Funzioni di potenza, radice e valore assoluto
tipologia: appunti
stato: "1"
---
*Definizioni di funzione potenza $p_n$ e radice $p_n^{-1}$. Definizione del valore assoluto $| \cdot |$; disuguaglianza triangolare. Alcuni esercizi generali.*
- - -
# 1. Funzione potenza
#Definizione 
> [!def] funzione potenza n-esima
Sia $n \in \mathbb{N} \diagdown \{0\}$; definiamo quindi la *funzione potenza $n$-esima* come $$p_n : [0, +\infty) \longrightarrow[0, +\infty); x \mapsto p_n(x) = x^n$$
Si riporta un grafico di alcune funzioni potenza $p_n$ (*figura 1.1.*).

 ^2b25ba

**FIGURA 1.1.**
![[Pasted image 20231017172817.png]]

#Osservazione 
> [!rmk] l'ordinamento delle potenze n-esime
Si nota che $$\begin{align} &\forall x \in [0, 1): p_1(x)>p_2(x) > \ldots > p_n(x) \\ &\forall x \in (1, +\infty): p_1(x) < p_2(x) < \ldots < p_{n}(x)  \end{align}$$

#Proposizione 
> [!prp] la potenza è strettamente crescente
Si vede dal grafico che la funzione è *strettamente crescente*, ovvero se prendiamo $x_1, x_2 \in E$ (dominio) ove $x_2 > x_1$, allora sicuramente abbiamo $$p_n(x_2) > p_n(x_1)$$
^0aedc2

**DIMOSTRAZIONE** della *proposizione 1.1.* ([[#^0aedc2]])
Prendiamo ad esempio $p_2$; abbiamo innanzitutto$$0 \leq x_1 < x_2$$allora li moltiplichiamo per $x_1$ e $x_2$, ottenendo $$\begin{cases} x_1 < x_2x_1 \\ x_1x_2 < x_2^2 \end{cases}$$quindi $$0 \leq x_1^2 < x_2^2 \iff p_2(x_1) < p_2(x_2), \forall x_1, x_2$$

#Proposizione 
> [!prp] la potenza è biiettiva
Notiamo che la *funzione potenza* $p_n$ (o $x^n$) è *biiettiva* ([[Funzioni#^d193b2]]), ovvero è sia *suriettiva* che *iniettiva*.

^f020e9

**DIMOSTRAZIONE** della *proposizione 1.2.* ([[#^f020e9]])
Per dimostrare che è iniettiva basta riosservare quanto visto nella *proposizione 1.1.*; ovvero che la funzione è strettamente crescente.
Dopodiché la funzione è anche suriettiva in quanto una conseguenza del[l'assioma di separazione S)](Assiomi%20dei%20Numeri%20Reali.md). $\blacksquare$

# 2. Funzione radice
#Osservazione 
> [!rmk] la funzione potenza è biettiva, pertanto invertibile
Dalla *proposizione 1.2.* abbiamo notato che la *funzione potenza* $p_n(x)$ è *biiettiva*; pertanto per il *teorema dell'esistenza della funzione inversa* ([[Funzioni#^7b369f]]) esiste una funzione inversa, la *"radice"*, che definiremo.

#Definizione 
> [!def] funzione radice n-esima
Definiamo la **funzione radice $n$-esima** $p_n^{-1}$ $$p_n^{-1}: [0, +\infty) \longrightarrow [0, +\infty); x^n \mapsto x$$
Graficamente questo equivale a *"scambiare le assi"* del grafico della funzione, oppure di *"cambiare la prospettiva da cui si guarda il grafico"*, ovvero la *figura 2.1.*.

**FIGURA 2.1.**
![[Pasted image 20231017172834.png]]
# 3. Valore assoluto
#Definizione 
> [!def] il valore assoluto
Sia il *valore assoluto* una *funzione* $$| \cdot | : \mathbb{R} \longrightarrow \mathbb{R}; x \mapsto|x|=\begin{cases}x: x\geq0 \\-x: x < 0\end{cases}$$Ad esempio, il grafico di $| x |$  si rappresenta nella *figura 3.1.*. 
^169d3f

**FIGURA 3.1.**
![[Pasted image 20231017172853.png]] 

#Osservazione 
> [!rmk] nesso tra potenza, radice e valore assoluto
> Notare che $$\sqrt{x^2} = |x|$$
## Proprietà del valore assoluto, disuguaglianza triangolare
#Teorema 
> [!thm] prima condizione necessaria e sufficiente del valore assoluto
Sia $a \geq 0$, $x \in \mathbb{R}$, allora $$|x| \leq a \iff -a \leq x \leq a$$
^e39752

**DIMOSTRAZIONE** del *teorema 3.1.* ([[#^e39752]])
Posso considerare due casi, ovvero
$x \geq 0$: abbiamo quindi $|x| = x$, pertanto $$\begin{cases}|x| \leq a \implies x \leq a \\ x \geq 0 \implies x \geq-a\end{cases} \longrightarrow -a \leq x \leq a $$
$x \leq 0$: abbiamo quindi $|x| = -x$ e il discorso è analogo: $$\begin{cases} |x| \leq a \implies -x \leq a \iff x \geq -a \\x \leq 0 \implies x \leq a\end{cases} \longrightarrow -a \leq x \leq a$$$\blacksquare$

#Teorema 
> [!thm] seconda condizione necessaria e sufficiente
Prendendo le stesse premesse di prima, abbiamo $$|x| \geq a \iff x \leq -a \land x \geq a$$

#Teorema 
> [!thm] la disuguaglianza triangolare
Siano $x, y \in \mathbb{R}$, allora abbiamo $$|x + y | \leq |x| + |y|$$
^5bd8b3

**DIMOSTRAZIONE** del *teorema 3.3.* ([[#^5bd8b3]])
Se abbiamo da un lato
$$-|x| \leq x \leq  |x|$$e $$-|y| \leq y \leq |y| $$allora sommandoli si avrebbe $$-(|x|+|y|)\leq x+y \leq|x| + |y|$$che per la prima proprietà equivale a dire $$|x+y| \leq |x| + |y| \ \blacksquare$$
   
# 4. Esercizi misti
Presentiamo degli esercizi, ovvero *equazioni* ([[Equazioni e soluzione]]) o *disequazioni* contenenti queste funzioni appena presentate.

**ESERCIZIO 4.1.** Determinare $$3x+5=0$$
**ESERCIZIO 4.2.** Disegnare il grafico di $$f(x) = 3x+5$$con $f: \mathbb{R} \longrightarrow \mathbb{R}$.

**ESERCIZIO 4.3.** Risolvere $$ x^2 -2x - 3 = 0$$

**ESERCIZIO 4.4.** Disegnare $$f: \mathbb{R}\longrightarrow\mathbb{R}; x \mapsto x^2-2x-3 $$
**ESERCIZIO 4.5.** Risolvere $$\frac{x^2-2x+3}{x-3} \geq 0$$
**ESERCIZIO 4.6.** Risolvere $$\sqrt{x+1} \geq 3x+2$$
**ESERCIZIO 4.8.** Risolvere $$\frac{x-3}{2x+1} > \frac{x-1}{x+1}$$
**ESERCIZIO 4.8.** Risolvere $$\sqrt{6x+1} \geq 3-2x$$
**ESERCIZIO 4.9.** Risolvere $$|x+4| < 8$$
**ESERCIZIO 4.10.** Risolvere $$|\frac{2x+1}{x^2-4} | \geq 1$$
**ESERCIZIO 4.11.** Risolvere $$|x+1| \geq |x-1|$$