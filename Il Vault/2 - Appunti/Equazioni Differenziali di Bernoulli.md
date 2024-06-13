---
data: 2024-05-16
corso:
  - "[[Analisi Matematica II]]"
argomento: Equazioni Differenziali di Bernoulli
tipologia: appunti
stato: "1"
capitolo: Equazioni Differenziali
---
- - -
*Equazioni differenziali non-lineari di Bernoulli: definizione, metodo di risoluzione.*
- - -
# 0. Voci correlate
- [[Equazioni Differenziali Lineari del primo ordine]]
- [[Definizioni Relative alle Equazioni Differenziali]]
# 1. Definizione di Equazione Differenziale di Bernoulli
Se *non* abbiamo *equazioni differenziali lineari*, possiamo comunque tentare di *"salvarci"* facendoli ricondurre al caso *lineare*.

#Definizione 
> [!def] equazione differenziale di Bernoulli
> Un'*equazione differenziale ordinaria del primo ordine* si dice *di Bernoulli* se abbiamo un'equazione del tipo
> $$
> (\text{B}) \ \ y'(x)=a(x)y(x)+b(x)y(x)^{\gamma}
> $$
> 
 dove $\gamma \in \mathbb{R} \diagdown\{0, 1\}$ (se lo fossero, non avrebbe considerare tale *ODE*; sarebbe lineare), e $a,b : I \longrightarrow \mathbb{R} \in \mathcal{C}^0(I)$ (ovvero delle funzioni continue su $I$).

#Teorema 
> [!thm] riduzione delle Bernoulli alle lineari
> L'equazione differenziale *di Bernoulli* $(B)$ è riconducibile al caso lineare, ponendo $z(x)=y(x)^{1-\gamma}$:
> $$
> z'(x)=(1-\gamma)(a(x)z(x)+b(x))
> $$
^16c57b

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^16c57b]]
*Importante ricordarsi il passaggio fondamentale!*
Si prende la $(\text{B})$ e lo si moltiplica per $y(x)^{-\gamma}$, dandoci
$$
\begin{align}
y'(x)y(x)^{-\gamma}&=a(x)y(x)y(x)^{-\gamma}+b(x)y(x)^0 \\
y'(x)y(x)^{-\gamma}&=a(x)y(x)^{1-\gamma}+b(x)
\end{align}
$$
Noto che a sinistra ho una derivata del tipo $(y(x))^\lambda \stackrel{\frac{\text{d} }{\text{d}x} }\to \lambda y'(x)y^{\lambda-1}$, ottenendo $(1-\gamma)y'(x)y(x)^{-\gamma}=[(y(x))^{1-\gamma}]'$. 
$$
\frac{ [(\textcolor{red}{y(x)^{1-\gamma} })]^{'} }{1-\gamma}=a(x)\textcolor{red}{y(x)^{1-\gamma} }+b(x) 
$$
Adesso sostituisco la parte in rosso $y(x)^{1-\gamma}$ definendo ad-hoc la funzione $z(x):=y(x)^{1-\gamma}$, ottenendo la lineare
$$
\frac{z'(x)}{1-\gamma}=a(x)z(x)+b(x)
$$
Rinormalizzando segue la tesi. $\blacksquare$

**NOTA!** Qualora dovessimo risolvere una *Bernoulli*, ricordiamoci che una volta ottenuta la soluzione su $z$ devo comunque *riportare* questa soluzione alla forma originale $y$!
