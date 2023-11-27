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
**DEF 1.1.** Sia $n \in \mathbb{N} \diagdown \{0\}$; definiamo quindi la **funzione potenza $n$-esima** come $$p_n : [0, +\infty) \longrightarrow[0, +\infty); x \mapsto p_n(x) = x^n$$
Si riporta un grafico di alcune funzioni potenza $p_n$.
![[Pasted image 20231017172817.png]]

**OSS 1.1.** Si nota che $$\begin{align} &\forall x \in [0, 1): p_1(x)>p_2(x) > \ldots > p_n(x) \\ &\forall x \in (1, +\infty): p_1(x) < p_2(x) < \ldots < p_{n}(x)  \end{align}$$
**OSS 1.2.** Si vede dal grafico che la funzione è *strettamente crescente*, ovvero se prendiamo $x_1, x_2 \in E$ (dominio) ove $x_2 > x_1$, allora sicuramente abbiamo $$p_n(x_2) > p_n(x_1)$$
	**DIMOSTRAZIONE.** 
	Prendiamo ad esempio $p_2$; abbiamo innanzitutto$$0 \leq x_1 < x_2$$allora li moltiplichiamo per $x_1$ e $x_2$, ottenendo $$\begin{cases} x_1 < x_2x_1 \\ x_1x_2 < x_2^2 \end{cases}$$quindi $$0 \leq x_1^2 < x_2^2 \iff p_2(x_1) < p_2(x_2), \forall x_1, x_2$$
>[! warning] Notare che questa dimostra che è vera solo per $p_2$; sarebbe da dimostrare che è vera anche per $p_n$ (forse si va per induzione? boh, vedrò o chiederò al prof qualcosa)

**OSS 1.3.** Notiamo che la *funzione potenza* $p_n$ (o $x^n$) è *biiettiva* ([[Funzioni]], **DEF 3.3.**), ovvero è sia *suriettiva* che *iniettiva*.
	**DIMOSTRAZIONE.**
	Per dimostrare che è iniettiva basta riosservare quanto visto in **OSS 1.2.**; ovvero che la funzione è strettamente crescente.
	Dopodiché la funzione è anche suriettiva in quanto una conseguenza del[l'assioma di separazione S)](Assiomi%20dei%20Numeri%20Reali).

# 2. Funzione radice
**OSS 2.1.** Dall'**OSS 1.3.** abbiamo notato che la *funzione potenza* $p_n(x)$ è *biiettiva*; pertanto per il *teorema dell'esistenza della funzione inversa* ([[Funzioni]], **TEOREMA 1.**) esiste una funzione inversa che definiremo.

**DEF 2.1.** Definiamo la **funzione radice $n$-esima** $p_n^{-1}$ $$p_n^{-1}: [0, +\infty) \longrightarrow [0, +\infty); x^n \mapsto x$$
Graficamente questo equivale a *"scambiare le assi"* del grafico della funzione, oppure di *"cambiare la prospettiva da cui si guarda il grafico"*, ovvero
![[Pasted image 20231017172834.png]]
# 3. Valore assoluto
**DEF 3.1.** Sia il **valore assoluto** una *funzione* $$| \cdot | : \mathbb{R} \longrightarrow \mathbb{R}; x \mapsto|x|=\begin{cases}x: x\geq0 \\-x: x < 0\end{cases}$$Ad esempio, il grafico di $| x |$  si rappresenta nel modo seguente:
![[Pasted image 20231017172853.png]] ^169d3f

**OSS 3.1.1.** Notare che $$\sqrt{x^2} = |x|$$
## 3.1. Proprietà, disuguaglianza triangolare
**OSS 3.1.1.** Si può osservare alcune proprietà del *valore assoluto*, ovvero:
1. Sia $a \geq 0$, $x \in \mathbb{R}$, allora $$|x| \leq a \iff -a \leq x \leq a$$
	**DIMOSTRAZIONE.**
	Posso considerare due casi, ovvero
	$x \geq 0$: abbiamo quindi $|x| = x$, pertanto $$\begin{cases}|x| \leq a \implies x \leq a \\ x \geq 0 \implies x \geq-a\end{cases} \longrightarrow -a \leq x \leq a $$
	$x \leq 0$: abbiamo quindi $|x| = -x$ e il discorso è analogo: $$\begin{cases} |x| \leq a \implies -x \leq a \iff x \geq -a \\x \leq 0 \implies x \leq a\end{cases} \longrightarrow -a \leq x \leq a$$$\blacksquare$

2. Prendendo le stesse premesse di prima, abbiamo $$|x| \geq a \iff x \leq -a \land x \geq a$$
3. **LA DISUGUAGLIANZA TRIANGOLARE.** 
   Siano $x, y \in \mathbb{R}$, allora abbiamo $$|x + y | \leq |x| + |y|$$
   **DIMOSTRAZIONE.**
   Se abbiamo da un lato
   $$-|x| \leq x \leq  |x|$$e $$-|y| \leq y \leq |y| $$allora sommandoli si avrebbe $$-(|x|+|y|)\leq x+y \leq|x| + |y|$$che per la prima proprietà equivale a dire $$|x+y| \leq |x| + |y|$$
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