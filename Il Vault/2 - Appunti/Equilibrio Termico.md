---
data: 2024-05-14
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Equilibrio Termico
tipologia: appunti
stato: "1"
capitolo: Termodinamica
---
- - -
*Osservazione: equilibrio termodinamico. Legge fondamentale della calorimetria, conservazione dell'energia termica per calore specifico uguale e diverso.*
- - -
# 0. Voci correlate
- [[Capacità Termica e Calore Specifico]]
- [[Definizione di Temperatura]]
# 1. Legge fondamentale della calorimetria
Vediamo un risultato pratico della *calorimetria*.

#Teorema 
> [!thm] legge fondamentale della calorimetria
> Si calcola la *variazione dell'energia interna* in funzione della *variazione della temperatura* come
> $$
> \boxed{\Delta U = mc \Delta T}
> $$
> con $m$ la massa, $c$ il *calore specifico per massa* ([[Capacità Termica e Calore Specifico#^d8154b|1]]).
^886c25

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^886c25]]
Abbiamo per definizione
$$
\Delta U = C_V \Delta T
$$
Usando la *definizione di calore specifico per massa si ha* $C= mc$, che ci dà la tesi finale
$$
\Delta U = mc \Delta T
$$
$\blacksquare$

# 2. Equilibrio Termico
Per considerare l'*equilibrio termico*, vediamo il seguente problema.

**PROBLEMA.** Due corpi a contatto, *in un sistema isolato*, con *temperature e masse diverse* $m_1, T_1$ e $m_2,T_2$ causano a vicenda una variazione della temperatura. Come si determina la *temperatura finale comune* $T_f$?
![[Pasted image 20240514203840.png]]

#Teorema 
> [!thm] equilibrio termico, conservazione dell'energia termica
> La soluzione al problema appena data è
> $$
> \boxed{T_f = \frac{m_1 c_1 T_{1} + m_2c_2 T_2}{m_1c_1 + m_2c_2} }
> $$
> In particolare per *calore specifico uguale* si ha
> $$
> \boxed{c_1=c_2=c \implies T_f = \frac{m_1 T_1 + m_2 T_2}{m_1+m_2} }
> $$
^50934a

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^50934a]]
Consideriamo che *siamo in un sistema isolato*, ovvero siamo privi di dissipazioni. Ovvero $\Delta E=0$. Adesso considerando i *cambiamenti di energia interna* dei corpi, abbiamo che sono uguali e opposte (infatti devono rendere la variazione dell'energia totale nulla)
$$
\Delta U_1 = -\Delta U_2
$$
Adesso esplicitiamo tutto usando la *legge fondamentale della calorimetria* ([[#^886c25]]), in particolare le differenze di temperatura $\Delta T_1$ e $\Delta T_2$
$$
m_1 c_1(T_f - T_1)=m_2c_2(T_f - T_2)
$$
Adesso si tratta di isolare $T_f$, e facendo due calcoli semplici e banali si ottiene la tesi
$$
T_f = \frac{m_1 c_1 T_{1} + m_2c_2 T_2}{m_1c_1 + m_2c_2}
$$
Per vedere il caso $c_1=c_2=c$, provate a raccogliere tutto per $c$ e vedere cosa succede. $\blacksquare$
