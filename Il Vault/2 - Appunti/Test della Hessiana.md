---
data: 2024-04-23
corso:
  - "[[Analisi Matematica II]]"
argomento: Test della Hessiana
tipologia: appunti
stato: "1"
capitolo: Ottimizzazione in più variabili
---
- - -
*Breve descrizione qui*
- - -
# 0. Voci correlate
- [[Segno di una Matrice]]
- [[Punto Critico per una Funzione in più variabili]]
# 1. Preambolo
**Recap.** Dal *teorema della classificazione dei punti critici* ([[Punto Critico per una Funzione in più variabili#^7f84d0|1]]) abbiamo che nei *punti critici* abbiamo due *"sottoinsiemi"* di punti: gli *estremi relativi* e i *punti di sella*. Ovvero abbiamo la situazione del tipo
![[Pasted image 20240423224705.png|450]]
Tuttavia questo non ci basta. Vogliamo sviluppare degli strumenti per *distinguere* i *punti critici* a seconda della sua natura: dato un punto critico, voglio sapere se è un *estremo relativo* (in particolare di minimo o di massimo) o se è un *punto di sella*.

**L'idea.** L'idea è questa: prendiamo lo *sviluppo in serie di Taylor al secondo ordine* di una funzione ([[Formula di Taylor del Secondo Ordine#^efc16b|1]]). Sia $\underline{h}:=\underline{x}-\underline{x_0}$.
$$
f(\underline{x_0}+\underline{h})-f(\underline{x_0})=\textcolor{red}{\langle \nabla f(\underline{x_0}),\underline{h}\rangle} + \frac{1}{2}\langle Hf(\underline{x_0})(\underline{h}),\underline{h}\rangle+ \textcolor{red}{o\left(\lVert\underline{h} \rVert^2\right)}
$$
Possiamo cancellare alcune parti di questa equazione (quelle sottolineate in rosso). Prima di tutto sappiamo che $\underline{x_0}$ è un punto critico, quindi possiamo già cancellare il prodotto scalare $\langle \nabla f(\underline{x_0}), \underline{h} \rangle=0$. Inoltre, il termine $o\left(\lVert\underline{h} \rVert^2\right)$ va a zero, quindi possiamo renderlo *"trascurabile"* nel senso di $o\left(\lVert\underline{h} \rVert^2\right) \to 0$. Infine abbiamo che rimane solo la parte
$$
f(\underline{x_0}+\underline{h})-f(\underline{x_0})\simeq\frac{1}{2}\langle Hf(\underline{x_0})(\underline{h}),\underline{h}\rangle
$$
Adesso, nel caso negativo della hessiana, supponiamo 
$$
\langle Hf_{\underline{x_0}}(\underline{h}), \underline{h} \rangle \leq m \lVert\underline{h}\rVert^2, m>0
$$
così possiamo studiare bene la matrice hessiana $H$. Nel caso unidimensionale avrei
$$
f''(x_0)(x-x_0)(x-x_0)=f''(x_0)h^2 \leq mh^2 \implies f''(x_0)\leq m
$$
Come studiamo la matrice $H$? Pensando all'equivalente unidimensionale, ho che se $f''(x)$ è *positivo* allora ho un *minimo locale*; se ho invece $f''(x)$ *negativo* allora ho un *massimo locale*. Vedremo che in caso generalizzato avremo una situazione simile.

# 2. Test della Hessiana
#Teorema 
> [!thm] test della Hessiana
> Sia $f:E \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ *due-volte differenziabile* su $\underline{x_0} \in E^\circ$ e $\nabla f(\underline{x_0}) =\underline{0}$. 
> 
> Si ha che:
> $$
> \begin{gather}
> Hf_{\underline{x_0} }>0 \implies f(\underline{x_0}) \ \text{minimo relativo} \\
> Hf_{\underline{x_0} } < 0 \implies f(\underline{x_0}) \ \text{massimo relativo} \\ Hf_{\underline{x_0} } \ \text{indefinita} \implies \underline{x_0} \ \text{di sella} \\ 
> Hf_\underline{x_0} \underbracket{\leq}_{\text{o }\geq} \ x_0 \implies \text{non posso dire nulla}
> \end{gather}
> $$

