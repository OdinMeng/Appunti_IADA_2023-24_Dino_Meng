---
data: 2024-05-27
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Irraggiamento
tipologia: appunti
stato: "1"
capitolo: Termodinamica
---
- - -
*L'irraggiamento: modello tipico (il corpo nero). Distribuzione di Planck: legge di Wien, legge di Stefan-Boltzmann. Esempio tipico: bilancio energetico tra corpi. Esempi: corpo umano, irraggiamento solare, temperatura media della terra dovuta all'irraggiamento solare.*
- - -
# 0. Voci correlate
- [[Mezzi di Trasmissione del Calore]]
# 1. Fisica del Corpo Nero
**MODELLO.** (*Il corpo nero*)
Per parlare di *irraggiamento*, supponiamo di avere un *corpo* che è in grado di *assorbire ed emettere* tutte le frequenze della luce. Questa caratteristica è *quantitativamente* descritta dalla *distribuzione di Planck*, che associa la *frequenza dell'onda* con l'*energia elettromagnetica*.
$$
\phi (\nu)=\frac{2 \pi h \nu^3}{c^3}\left(e^{\frac{h\nu}{k_B T} }-1\right)^{-1}
$$
![[Intensity-distribution-as-defined-by-Plancks-law.png]]

Enunciamo una serie di *caratteristiche qualitative della distribuzione di Planck*.

#Teorema 
> [!thm] di Wien, di Stefan-Boltzmann
> Sia data $\phi(\nu)$ la *distirbuzione di Planck*. Allora:
> i. *Legge di Wien*
> Il massimo $\nu_\max$ è raggiunto in
> $$
> \boxed{\nu_\max} \simeq 2.82 \cdot \frac{k_B T}{h}= \boxed{5.87 \cdot 10^{10}\cdot   T}
> $$
> ii. *Legge di Stefan-Boltzmann*
> Il flusso del raggiamento è calcolato come
> $$
> \boxed{\Phi = \sigma T^4}
> $$
> con $\sigma \simeq 5.67 \cdot 10^{-8} \text{ W/(m}^2\text{ K}^4\text{)}$ la *costante di Stefan*.
> In particolare, per ottenere $\dot Q$, si moltiplica il flusso per la superficie:
> $$
> \boxed{\dot Q = \Phi \cdot S = \sigma T^4 S}
> $$

# 2. Bilancio Energetico
#Esempio 
**ESEMPIO.** (*Bilancio Energetico*)
Supponiamo di avere due *corpi*, $A$ e $B$ tali che il *corpo A* sia *"incluso"* nel *corpo B* (ovvero $A \subset B$), con temperature $T_A, T_B$. 
![[Pasted image 20240527231546.png]]
Vogliamo calcolare il *calore netto trasmesso al corpo $A$ sul tempo* $\dot Q_\text{NET}$. Partendo da ciò che conosciamo, abbiamo:
$$
\begin{gather}
\dot Q_\text{ass} = S_A \sigma T_A^4 \\
\dot Q_\text{ced} = -S_A \sigma T_B^4
\end{gather}
$$
Allora il *calore netto* è la loro semplice somma (o sottrazione), che è
$$
\boxed{\dot Q_\text{A, NET}=S_A \sigma \left(T_A^4 - T_B^4\right)}
$$
