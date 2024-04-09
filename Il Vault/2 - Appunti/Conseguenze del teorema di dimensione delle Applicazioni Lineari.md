---
data: 2023-11-25
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Conseguenze del teorema di dimensione delle Applicazioni Lineari
tipologia: appunti
stato: "1"
---
*Conseguenze (in formi di corollari) del teorema di dimensione ([[Teorema di dimensione per le Applicazioni Lineari]])*
- - -
# 1. Teorema della dimensione delle soluzioni per i sistemi lineari omogenei
**OSS 1.1.** (*Il vuoto colmato*) Ora possiamo finalmente *"colmare"* un vuoto che avevamo lasciato nel capitolo sui *sistemi lineari*, in particolare sul *teorema di dimensione delle soluzioni per i sistemi lineari omogenei*. ([[Teorema di dimensione delle soluzioni di sistemi lineari]]).
- - - 
**RICHIAMO** al *teorema di dimensione delle soluzioni di sistemi lineari*
![[Teorema di dimensione delle soluzioni di sistemi lineari#^b69f0c]]
- - -
Sia dunque $A \in M_{n}(K)$ e consideriamo il *sistema lineare omogeneo*
$$ Ax = 0$$
Allora possiamo interpretare l'insieme delle sue *soluzioni* in termini di *applicazioni lineari*, prendendo la *trasformazione lineare associata alla matrice* $A$ ([[Applicazioni Lineari Notevoli#^fd2d05]]).
Ovvero
$$ W = \{s \in K^n: A\cdot s= 0\} = \{s \in K^n : L_A(s) = 0\} = \ker L_A$$

#Corollario 
>[!cor] Corollario 1.1. (teorema di dimensione delle soluzioni di un sistema lineare omogeneo)
>Sia $A \in M_{n}(K)$, allora la dimensione dello sottospazio vettoriale $W \subseteq K^n$ delle soluzioni del sistema lineare omogeneo associato è uguale a $n - \operatorname{rg}A$
>$$\boxed{\dim W = n - \operatorname{rg} A} $$
^f7c31c

#Dimostrazione 
**DIMOSTRAZIONE** del *corollario 1.1.* ([[#^f7c31c]])
Visto che $W = \ker L_A$, allora per il *teorema di dimensione* ([[Teorema di dimensione per le Applicazioni Lineari#^ccde56]]) sappiamo che  $$\begin{align}&\dim K^n = \dim \ker L_A + \dim \operatorname{im} L_A \\ \implies &n = \dim W + \operatorname{rg}L_A \\ \operatorname{rg}L_A = \operatorname{rg}A\implies &\boxed{\dim W = n- \operatorname{rg}A}\end{align}$$ ^5a0d52

# 2. Suriettività e iniettività in termini di dimensioni
#Corollario 
> [!cor] di caratterizzazione per applicazioni lineari iniettive e suriettive
> Sia $f: V \longrightarrow V'$ un'applicazione lineare ta *spazi vettoriali* di *dimensione finita*.
> Supponiamo che essi hanno la stessa dimensione; $\dim V = \dim V'$
> Allora $f$ è *iniettiva* se e solo se $f$ è *suriettiva*, ovvero, compattando la scrittura, si ha
> $$\boxed{\dim V = \dim V' \implies f \text{ iniettiva} \iff f \text{ suriettiva}}$$
^c9a905

#Dimostrazione 
**DIMOSTRAZIONE** del *corollario 2.1.* ([[#^c9a905]])
"$\implies$": Sia $f$ iniettiva; allora per il *la proposizione 2.1. sul nucleo e l'immagine di un'applicazione lineare* ([[Proposizioni su Nucleo e Immagine#^1a8f27]]), si ha $\ker f = \{0\}$.
Allora, per il *teorema di dimensione* ([[Teorema di dimensione per le Applicazioni Lineari#^ccde56]]) si ha
$$\dim V = \dim \operatorname{im} f + \dim \ker f \implies \dim V =  \dim \operatorname{im} f $$
Pertanto $\operatorname{im} f = V$; dato che $\operatorname{im} f \subseteq V'$, ma $V$ e $V'$ hanno la *stessa dimensione*, si ha che $\operatorname{im} f = V'$ e dunque $f$ è *suriettiva*.
"$\impliedby$": Sia $f$ suriettiva, allora $\operatorname{im} f = V'$; ovvero $\dim \operatorname{im} f = \dim V' = \dim V$ allora per il *teorema di dimensione*,
$$\begin{align}\dim V &= \dim \ker f + \dim \operatorname{im} f \\ &= \dim \ker f + \dim V \\ \dim \ker f &=  0 \implies \ker f = \{0\}\end{align}$$
Ovvero $f$ è *iniettiva*. $\blacksquare$

#Corollario 
> [!cor] invertibilità di un'applicazione lineare iniettiva o suriettiva
> Sia $f: V \longrightarrow V'$, con $\dim V = \dim V'$. Allora
> $$\boxed{f \text{ iniettiva} \iff f \text{ suriettiva} \iff f \text{ biiettiva} \iff f\text{ invertibile}}$$
^a78df6

#Dimostrazione 
**DIMOSTRAZIONE** del *corollario 2.2.* ([[#^a78df6]])
Dimostrazione omessa in quanto basta conoscere il *teorema di invertibilità di una funzione* ([[Funzioni#^7b369f]])