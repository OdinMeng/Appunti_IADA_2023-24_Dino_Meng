---
data: 2024-01-26
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Strutture Algebriche
tipologia: appunti
stato: "1"
capitolo:
---
- - -
*Elementi di algebra: strutture algebriche; semigruppo, monoide, gruppo abeliano, anello commutativo e/o unitario, campo. (tratto da Algebra Lineare ed Elementi di Geometria, F. Bottacin)*
- - -
# 1. Struttura algebrica
Partiamo dalla struttura di base.

#Definizione 
> [!def] struttura algebrica
> Sia $A$ un *insieme numerico*, sia $*$ un'operazione interna per $A$, ovvero del tipo
> $$*: A \times A \longrightarrow A$$
> Allora la coppia $(A, *)$ si dice *struttura algebrica*.
# 2. Semigruppo, monoide, gruppo
Ora andiamo ad *"arricchire"* la struttura algebrica.

#Definizione 
> [!def] semigruppo
> Sia $(A, *)$ una *struttura algebrica*. Allora $(A, *)$ si dice *semigruppo* se l'operazione $*$ gode della *proprietà associativa*, ovvero
> $$\forall a, b, c \in A, (a*b)*c = a*(b*c)$$

#Definizione 
> [!def] monoide, gruppo
> Sia $(B, +)$ una *struttura algebrica*. 
> i. Se $+$ è munito di un'*elemento neutro*, ovvero se
> $$\exists 0^+_B \in B: \forall b \in B, b+0^+_B=b \vee 0^+_B+b=b$$
> allora $(B, +)$ si dice *monoide*.
> ii. Se vale anche che *ogni elemento di $B$ è invertibile*, ovvero
> $$\forall b \in B, \exists -b \in B: b+(-b) = (-b)+b = 0^+_B$$
> allora $(B, +)$ si dice *gruppo*. 

#Definizione 
> [!def] abeliano
> Sia $(B, +)$ una *struttura algebrica* o un *semigruppo* o un *monoide* o un *gruppo*.
> Allora se $+$ gode della *proprietà commutativa*, allora $(B, +)$ si dice *abeliano*.
# 3. Anello, campo
Diamo le ultime *"decorazioni"* a queste strutture algebriche, fornendole di un'altra operazione che gode di altre proprietà.

#Definizione 
> [!def] anello
> Sia $(C, §)$ un *gruppo abeliano*; sia $(C, °)$ un *semigruppo*.
> Allora si definisce $(C, §, °)$ un *anello*
> Inoltre se $°$ gode della *proprietà commutativa*, allora l'anello si dice *commutativo/abeliano*; se $°$ ha un'elemento neutro allora l'anello si dice *unitario*.

#Definizione 
> [!def] campo
> Sia $(D, \$, £)$ un *anello unitario*, con gli elementi di neutri delle operazioni $\$$ e $£$ distinti.
> Se *ogni elemento dell'insieme $D$* è invertibile, a parte l'elemento neutro per $£$, allora $D$ si dice *campo*.
> 
# 4. Schema riassuntivo
**FIGURA 4.1.** (*Schema riassuntivo delle strutture algebriche*)
![[Pasted image 20240126175047.png]]