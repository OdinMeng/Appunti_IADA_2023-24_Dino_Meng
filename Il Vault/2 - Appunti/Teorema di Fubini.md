---
data: 2024-05-25
corso:
  - "[[Analisi Matematica II]]"
argomento: Teorema di Fubini
tipologia: appunti
stato: "1"
capitolo: Calcolo Integrale in più Variabili
---
- - -
*Teorema di Fubini (caso bidimensionale). Enunciato.*
- - -
# 0. Voci correlate
- [[Integrazione di Riemann su n-rettangoli]]
# 1. Teorema di Fubini
**IDEA.** Voglio ricondurre gli integrali *multipli* al *caso unidimensionale*; in particolare voglio *"iterare"* gli iterali singoli.

#Teorema 
> [!thm] di Fubini
> Sia $f: [a_1, b_1] \times [a_2, b_2] = R\subseteq \mathbb{R^2} \longrightarrow \mathbb{R} \in \mathcal{R}(R)$. Posta la restrizione $f_{|\bar{x}}: [a_2,b_2] \longrightarrow \mathbb{R}$ come
> $$
> \forall \bar{x} \in [a_1, b_1] \to f_{|\bar{x}}:=f(\overline{x}, y)=f(y)
> $$
> Allora vale che integrando, l'integrale di $f_{|\bar x}$ al variare di $y$, al variare di $x$ otteniamo lo stesso valore del doppio integrale $\iint_R f$. Ovvero
> $$
> \boxed{\iint_R f(x,y) \ \text{d}x \ \text{d}y=\int_{a_1}^{b_1} \left(\int_{a_2}^{b_2} f(x,y) \ \text{d}y\right) \ \text{d}x }
> $$
^78e23f

#Osservazione 
> [!rmk] scambiando le variabili di integrazione il teorema vale ugualmente
> Notiamo che scambiando gli estremi di integrazione $[a_1, b_1] \to [a_2, b_2]$ e la variabile d'integrazione $\text{d}x \to \text{d}y$ il teorema vale ugualmente. Ovvero non vale l'ordine con cui facciamo gli *integrali iterati*.
> 
> Quindi scegliere bene l'ordine con cui facciamo gli integrali iterati! In certi casi abbiamo degli integrali *difficili*, negli altri ci semplifichiamo le vite.

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^78e23f]]
Omessa, poiché geometricamente intuitiva.$\blacksquare$
