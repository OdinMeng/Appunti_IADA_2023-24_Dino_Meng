---
data: 2023-11-25
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Proposizioni su Nucleo e Immagine
tipologia: appunti
stato: "1"
---
*Prime proprietà del nucleo e dell'immagine ([[Definizione di Nucleo e immagine]]) di un'applicazione lineare: ker, im sottospazi vettoriali di V e V'; f iniettiva allora ker è il più piccolo possibile, f suriettiva allora im è il codominio.*
- - -
# 1. Nucleo e immagine come sottospazi vettoriali
#Proposizione 
> [!prp] nucleo e immagine sono sottospazi vettoriali
> Sia $f: V \longrightarrow V'$ un'*applicazione lineare* ([[Definizione di Applicazione Lineare#^9b39f9]]).
> Allora $\ker f$ è *sottospazio vettoriale* di $V$; $\operatorname{im}f$ è *sottospazio vettoriale* di $V'$.
^d0ed96

#Dimostrazione 
**DIMOSTRAZIONE** della *proposizione 1.1.* ([[#^d0ed96]])
Prima dimostro che $\ker f$ è *sottospazio vettoriale* di $V$ verificando le tre proprietà dello sottospazio vettoriale ([[Sottospazi Vettoriali#^9bcbf2]]).
1. (*elemento nullo appartiene a ker*) Considero $f(0)$ e vedo che valgono le seguenti:
   $$f(0) = f(0+0) \implies f(0)=f(0)+f(0) \implies f(0)=0  $$
   Allora $0 \in \ker f$.
2. (*chiusura della somma in V*) Siano per ipotesi $v_1, v_2 \in \ker f$; allora seguono che
   $$f(v_1) = 0 \land f(v_2) = 0 $$
   Pertanto
   $$f(v_1)+f(v_2) = 0+0 \implies f(v_1+v_2) = 0 \implies v_1+v_2 \in \ker f $$
3. (*chiusura dello scalamento in V*) Siano per ipotesi $v \in \ker f$ e $\lambda \in K$; allora segue che
   $$f(v) = 0 $$
   Allora
   $$\lambda f(v) = \lambda \cdot 0 \implies f(\lambda v) = 0 \implies \lambda v \in \ker f $$
Ora consideriamo l'immagine $\operatorname{im}$.
1. (*elemento nullo appartiene all'immagine*) Abbiamo appena dimostrato che
   $f(0)= 0$; pertanto $0 \in \operatorname{im} f$.
2. (*chiusura della somma in V'*) Siano per ipotesi $v_1', v_2' \in \operatorname{im} f$. Allora valgono che
   $$\exists v_1, v_2 \in V: f(v_1)=v_1'  \land f(v_2)=v_2'$$
   Allora segue che
   $$f(v_1)+f(v_2) = v_1' + v_2' \implies f(v_1+v_2) = v_1'+v_2' \implies (v_1+v_2) \in \operatorname{im}f $$
3. (*chiusura dello scalamento in V'*) Sia per ipotesi $v' \in \operatorname{im} f$ e $\lambda \in K$. Allora vale che
   $$\exists v \in V: f(v) = v' $$
   Allora
   $$\lambda \cdot f(v) = \lambda \cdot v' \implies f(\lambda v) = \lambda v' \implies \lambda v' \in \operatorname{im} f \ \blacksquare$$

# 2. Relazione tra iniettività-suriettività e nucleo-immagine
#Proposizione 
> [!prp] Proposizione 2.1.
> Sia $f: V \longrightarrow V'$ un'*applicazione lineare*. Siano $\ker f$ e $\operatorname{im} f$ rispettivamente il *nucleo* e l'*immagine* di $f$.
> Allora valgono che
> i. $f$ è *iniettiva* ([[Funzioni#^cc92ef]]) se e solo se $\ker f = \{0\}$ (ovvero il *nucleo* di $f$ è il più piccolo possibile. 
> ii. $f$ è *suriettiva* ([[Funzioni#^6068af]]) se e solo se $\operatorname{im} f = V'$ (ovvero l'immagine di $f$ coincide col codominio $V'$).
^1a8f27

#Dimostrazione 
**DIMOSTRAZIONE** della *proposizione 2.1.* ([[#^1a8f27]])
Dimostriamo la i. della proposizione. 
1. "$\implies$": Sia $f$ *iniettiva*. Allora $f(v_1) = f(v_2) \iff v_1=v_2$.
   Supponendo che $f(v_1) = 0$ per un $v_1$ qualsiasi; però $\ker$ è un *sottospazio vettoriale*, quindi $0 \in \ker f$. 
   Allora $f(0) = f(v_1) \implies v_1 = 0$. Pertanto $0$ è l'*unico* elemento tale che la sua immagine risulta $0$.
2. "$\impliedby$": Sia $\ker f = \{0\}$. Allora consideriamo $v_1, v_2 \in V: f(v_1) = 0; f(v_2) = 0$.
   Allora
   $$f(v_1) = f(v_2) \implies f(v_1)-f(v_2) = 0 \implies f(v_1-v_2) = 0 $$
   Allora $v_1-v_2 \in \ker f$ e $0 \in \ker f$ in quanto $\ker f$ è *sottospazio vettoriale*, allora
   $$f(v_1-v_2)=f(0) \implies v_1=v_2 \ \blacksquare $$
La ii. della proposizione è quasi una *tautologia* ([[Tautologia]]), in quanto abbiamo una specie di *"parafrasi"* per il concetto della suriettività. Pertanto non è necessaria una dimostrazione formale per questa parte.