---
data: 2023-11-25
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Teorema di dimensione per le Applicazioni Lineari
tipologia: appunti
stato: "1"
---
*Teorema di dimensione per le applicazioni lineari: enunciato, dimostrazione ed esempi.*
- - -
# 1. Enunciato
#Teorema 
> [!thm] Teorema 1.1. (di dimensione per le applicazioni lineari)
> Sia $f: V \longrightarrow V'$ un'*applicazione lineare* ([[Definizione di Applicazione Lineare#^9b39f9]]) tra due *spazi vettoriali di dimensione finita*.
> Allora vale che
> $$ \dim V = \dim \operatorname{ker} f + \dim \operatorname{im} f$$
> Alternativamente, usando la definizione di *rango* ([[Rango#^d641ff]]) per un'applicazione lineare si può scriverla come
> $$\boxed{\dim V = \dim \operatorname{ker} f + \operatorname{rg} f}$$
^ccde56
# 2. Dimostrazione
#Dimostrazione 
**DIMOSTRAZIONE** del *teorema di dimensione per le applicazioni lineari* ([[#^ccde56]])
Fissiamo la *dimensione* di $V$ $\dim V = n$.
Fissiamo ora una *base* di $\operatorname{ker} f$; sia dunque $\mathcal{B}_{\ker f} = \{v_1, \ldots, v_k\}$.
Allora $\dim \operatorname{ker} f = k$. Ora per costruzione sappiamo che $v_1, \ldots, v_k$ sono *linearmente* indipendenti, dunque per il *teorema di estensione* ([[Teoremi sulle Basi#^dbffba]]) possiamo *"estendere"* la *base* del nucleo di $f$ ad essere una base di $V$. Ovvero
$$ \mathcal{B}_V = \mathcal{B}_{\ker f} \cup \{v_{k+1}, \ldots, v_n\} = \{v_1, \ldots, v_k, v_{k+1}, \ldots,v_n\}$$
Se riusciamo a dimostrare che la base di $\operatorname{im} f$ è la parte con cui abbiamo *"estesa"* la base di $\ker f$, allora abbiamo dimostrato il teorema in quanto si avrebbe
$$ k + (n-k) = k$$
Allora dimostriamo che
$$\mathcal{B}_{\operatorname{im} f} = \{f(v_{k+1}), \ldots, f(v_n)\}$$
Ovvero che tali elementi sono *linearmente indipendenti* e *sistemi di generatori per $\operatorname{im} f$*
- *Linearmente indipendenti* 
Supponiamo che esista una loro combinazione lineare nulla:
  $$a_{k+1}f(v_{k+1})+\ldots+a_n f(v_n) = 0 $$
Dato che $f$ è una *applicazione lineare*, possiamo manipolarla da formare
  $$f(a_{k+1}v_{k+1}+\ldots+a_nv_n) = 0 $$
Pertanto $a_{k+1}v_{k+1}+\ldots+a_n v_n \in \ker f$. Quindi
  $$a_{k+1}v_{k+1}+\ldots+a_nv_n = b_1v_1 + \ldots + b_k v_k $$
In quanto $v_1, \ldots, v_k$ è *base* per $\ker f$ (ovvero un elemento qualsiasi di $\ker f$ è esprimibile in forma di combinazione lineare degli elementi della base).
Allora otteniamo la *combinazione lineare nulla* di $v_1, \ldots, v_n$
$$-b_1v_1-\ldots-b_kv_k + a_{k+1}v_{k+1}+\ldots+a_nv_n = 0 $$
che sappiamo essere *unica* in quanto $v_1, \ldots, v_n$ è *base* di $V$, dunque linearmente indipendente.
Quindi l'unica possibilità è che tutti i coefficienti $b_i$ e $a_i$ siano uguali a $0$.
Dunque abbiamo dimostrato che $f(v_{k+1}), \ldots, f(n)$ sono *linearmente indipendenti*
- *Sistema di generatori per $V$*:
Dall'osservazione sul *teorema di struttura delle applicazioni lineari* ([[Teorema di struttura per Applicazioni Lineari#^8fd96a]]) abbiamo visto che le immagini di elementi di basi per $V$ formano un *sistema di generatori* per $\operatorname{im} f$; dunque $f(v_1), \ldots, f(v_n)$ è un *sistema di generatori* per $\operatorname{im} f$.
D'altro canto abbiamo appena visto che $v_1, \ldots, v_k \in \ker f$, allora per definizione $f(v_1), \ldots, f(v_k)$ sono sicuramente tutti nulli.
Allora *"rimangono"* solo gli elementi da $k+1$ esimo.
Formalizzando il linguaggio, abbiamo
$$\begin{align}& \operatorname{im} f = \operatorname{span}(f(v_1), \ldots, f(v_n)) = \operatorname{span}(f({v_{k+1}}), \ldots, f(v_n))\\ \implies & \dim \operatorname{im} f = \dim \operatorname{span}(f(v_{k+1}, \ldots, f(v_n))) = n-k\end{align}$$
Ricostruendo tutto da capo, abbiamo
$$\mathcal{B}_V = \mathcal{B}_{\ker f} \cup \mathcal{B}_{\operatorname{im} f} \implies n = k + (n-k) =  \boxed{n = n} \ \blacksquare$$

# 3. Esempi
#Esempio 
> [!ex] Esempio 3.1. (esempio di una trasformazione 3D a 4D)
> Supponiamo $f: \mathbb{R}^3 \longrightarrow \mathbb{R}^4$ un'*applicazione lineare*.
> Allora sicuramente sappiamo che $f$ non potrà essere *suriettiva*: infatti per il teorema appena enunciato e dimostrato, sappiamo che
> $$\dim \mathbb{R}^3 = \dim \ker f + \dim \operatorname{im} f $$
> Quindi
> $$3 = \dim \ker f + \dim \operatorname{im} f \implies \dim \operatorname{im} f= 3 - \dim \ker f \leq 3$$
> Allora sappiamo che gli elementi delle immagini saranno *al massimo* di dimensione $3$, mentre la dimensione di $\mathbb{R}^4 = 4$. 
