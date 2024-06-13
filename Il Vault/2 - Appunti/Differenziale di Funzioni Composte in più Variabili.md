---
data: 2024-04-15
corso:
  - "[[Analisi Matematica II]]"
argomento: Differenziale di Funzioni Composte in più Variabili
tipologia: appunti
stato: "1"
capitolo: Calcolo Differenziale Multivariata
---
- - -
*Generalizzazione della derivazione di funzioni composte $P \to N \to M$: differenziale di funzioni composte in più variabili. Esempi: caso $M=1$, $M=P=1$.*
- - -
# 0. Voci correlate
- [[Proprietà delle derivate]]
- [[Matrice Jacobiana di Funzioni in più Variabili]]
# 1. Il Differenziale della Funzione Composta
**Motivazione.** Dato *due funzioni* che collegano *dimensioni diverse*, dandoci una situazione del tipo $P \stackrel{f}\to N \stackrel{g}\to M$, vogliamo trovare un modo per *collegare* il *differenziale della composta* di questa funzione con le *differenziali* delle *funzioni individuali*.

#Proposizione 
> [!prp] differenziale della funzione composta di funzioni in più variabili
> Siano $g:B \subseteq \mathbb{R}^P \longrightarrow \mathbb{R}^N$ con $B$ aperto e differenziabile in $\underline{u_0}$ e $f:A \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}^M$ con $A$ aperto e differenziabile in $\underline{x_0}$ (per capire con cosa stiamo avendo a che fare vedere la *figura 1.1.*), allora definendo $h=f \circ g$ vale che $h$ è *differenziabile* in $\underline{u_0}$ e vale l'uguaglianza
> $$
> dh_{\underline{u_0}}=df_\underline{x_0} \circ d g_\underline{u_0} $$
> ovvero
> $$
> \underbracket{Jh_\underline{u_0} }_{m \times p} =\underbracket{Jf_\underline{x_0} }_{m \times n} \cdot \underbracket{Jg_\underline{u_0} }_{n \times p}
> $$
> Per esercizio scrivere la forma estesa (non ho voglia di farlo).

^4b8fa5

**FIGURA 1.1.** (*La situazione iniziale*)
![[Pasted image 20240415194732.png]] ^9a40b2

# 2. Esempi del Differenziale della Composta
#Esempio 
> [!exm] caso $M=1$
> Siano $g:\mathbb{R}^P \longrightarrow \mathbb{R}^N$ e $f:\mathbb{R}^N \longrightarrow \mathbb{R}$, entrambi differenziabili. Allora abbiamo $h:=f \circ g : \mathbb{R}^P \longrightarrow \mathbb{R}$. Allora la Jacobiana $Jh$ è una matrice del tipo $M_{1,P}(\mathbb{R})$, ovvero un *vettore* di dimensione $P$. Abbiamo infatti
> $$
> Jh = \left(\frac{\partial h}{\partial u_1}, \ldots, \frac{\partial h}{\partial u_P}\right)=\nabla f \cdot Jg
> $$

#Esempio 
> [!exm] caso scalare
> Sia $M=P=1$, ovvero abbiamo una situazione del tipo $1 \to N \to 1$. Allora qui semplicemente abbiamo
> $$
> Jh = \frac{d}{dt}h
> $$
> che è uno *scalare*.



