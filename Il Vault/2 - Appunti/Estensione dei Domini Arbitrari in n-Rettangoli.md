---
data: 2024-06-02
corso:
  - "[[Analisi Matematica II]]"
argomento: Estensione dei Domini Arbitrari in n-Rettangoli
tipologia: appunti
stato: "1"
capitolo: Calcolo Integrale in più Variabili
---
- - -
*Considerazione preliminare per integrazione in più variabile su domini arbitrari: prolungamento delle funzioni con domini arbitrari.*
- - -
# 0. Voci correlate
- [[Integrazione di Riemann su n-rettangoli]]
# 1. Integrazione su Domini Arbitrari
#Definizione 
> [!def] prolungamento della funzione
> Sia $f:E \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ una *funzione limitata*. Definiamo $f_\circ: \mathbb{R}^N \longrightarrow \mathbb{R}$ come il suo *prolungamento del suo dominio* come
> $$
> f_\circ(\underline{x})=\left \{
> \begin{align}
> & f(\underline x), \underline x \in E \\ &0, \underline x \not \in E \iff \underline x \in \mathcal{C}_{\mathbb{R}^N}(E)
> \end{align}
> \right.
> $$

**FIGURA 1.1.** (*L'idea del prolungamento della funzione*)
![[Pasted image 20240602172426.png]]

#Definizione 
> [!def] integrabilità su domini arbitrari
> Sia $E \subseteq \mathbb{R}^N$ tale che esista un *n-rettangolo* $R$ che contenga $E$. Ovvero, $\exists R \sim \times_{i=1}^N [a_i,b_i]: E \subseteq R$.
> 
> Se vale che $f_\circ \in \mathcal{R}(R)$ (ovvero la funzione prolungata $f_\circ$ è *integrabile* sul rettangolo $R$), allora si dice che $f$ è *integrabile su $E$* e si pone
> $$
> \int_E f  := \int_R f_\circ
> $$

Per poter parlare bene dell'integrale $\int_R f_\circ$, ci servirà prima parlare un po' di *misura* ([[Cenni alla Misura di Peano-Jordan]]).