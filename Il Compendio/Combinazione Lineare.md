---
data: 2023-11-02
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Combinazione Lineare7
tipologia: appunti
stato: "0"
---
*Definizione di combinazione lineare di un K-spazio vettoriale; definizione di $\operatorname{span}$; definizione di sistema di generatori per uno sottospazio vettoriale.*
- - -
# 1. Definizione di Combinazione Lineare
**DEF 1.1.** (*Combinazione lineare*)
Sia $V$ un *K-spazio vettoriale* ([[Spazi Vettoriali]], **DEF 1.**), siano $$\text{v}_1, \ldots ,\text{v}_n \in V$$degli elementi di $V$. Alternativamente possiamo pensare questi elementi come il sottoinsieme $S \subseteq V$.
Allora definiamo **combinazione lineare** un qualsiasi *vettore* ([[Spazi Vettoriali]], **DEF 1.1.**) della forma $$\lambda_1 \text{v}_1 + \ldots +\lambda_n \text{v}_n$$dove $\lambda_i \in K, \forall i \in \{1, \ldots, n\}$. 

**ESEMPIO 1.1.** In $\mathbb{Q}^2$ considero $$q_1 = (1,0); q_2 = (\frac{1}{2}, \frac{1}{2}); q_3 = (1,2)$$Una *combinazione lineare* di $S = (q_1, q_2, q_3)$ può essere ad esempio $$\frac{3}{4}q_1-\frac{12}{7}q_2+15q_3$$
# 2. L'insieme delle combinazioni lineari span
Ora voglio considerare l'*insieme* delle combinazioni lineari.
**DEF 2.1.** *Span di S*
Sia $V$ un K-spazio vettoriale e sia $S = (\text{v}_1, \ldots, \text{v}_n)$. 
Allora chiamo lo **span** di $S$ o di $\text{v}_1, \ldots, \text{v}_n$ come l'**insieme di tutte le combinazioni lineari di tale sottoinsieme $S$**: $$\operatorname{span}(\text{v}_1, \ldots, \text{v}_n) := \{\lambda_1\text{v}_1 + \ldots + \lambda_n \text{v}_n : \lambda_1, \ldots, \lambda_n \in K\}$$oppure in forma compatta $$\operatorname{span}(S) := \{\sum_{i=1}^n \lambda_i \text{v}_i: i \in \{1, \ldots, n\}, \lambda_i \in K\}$$
**LEMMA 2.1.** Lo span di un qualunque $S = \{v_1, \ldots, v_n\}$ è *sottospazio vettoriale* di $V$ ([[Sottospazi Vettoriali]]).
**DIMOSTRAZIONE.** Verifichiamo le tre proprietà fondamentali dello sottospazio vettoriale.
1. *L'appartenenza dell'elemento 0*
   Verifichiamo che $0$ può essere espresso come una *combinazione lineare* ponendo tutti i *coefficienti* $\lambda_i = 0$. 
2. *Chiusura della somma*
   Siano $u, w \in \operatorname{span}{(v_1, \ldots, v_n)}$. Allora per ipotesi abbiamo $$u = \sum_{i=1}^n \lambda_i v_i \ | \ w = \sum_{i = 1}^n \mu_i v_i$$Allora sommandoli abbiamo $$u+ w = \sum_{i = 1}^n (\lambda_i+\mu_i)v_i \implies u+w \text{ è combinazione lineare}$$
3. *Chiusura dello scalamento*
   Sia $\lambda \in K$, $w \in \operatorname{span}{(v_1, \ldots, v_n)}$. Allora $$\lambda \cdot w = \lambda \sum_{i=1}^n \mu_i v_i = \sum_{i=1}^n (\lambda\mu_i) v_i \in \operatorname{span}{(v_1, \ldots, v_n)} \ \blacksquare$$ 
# 3. Sistema di generatori
**DEF 3.1.** Sia $V$ un K-spazio vettoriale, $U \subseteq V$ un qualunque sottospazio vettoriale di $V$.
Un *insieme di elementi* $\{u_1, \ldots, u_n\} \subseteq U$ si dice un **sistema di generatori di/per $U$** se *ogni vettore* $u \in U$ è una *combinazione lineare dell'insieme di elementi stesso*; equivalentemente $$\{u_1, \ldots, u_n\} \text{ è sistema di generatori} \iff U = \operatorname{span}(\{u_1, \ldots, u_n\})$$ovvero se *ogni* vettore di $U$ è una combinazione lineare di quell'insieme di elementi, allora quell'insieme è un *sistema di generatori*.

**ESEMPIO 3.1.** Consideriamo $V = \mathbb{R}^2$, $U = \mathbb{R}^2$ (ovvero $V = U$) e i vettori $$u_1 = (1,0)\ | \ u_2 = (0,1)$$Vale che $\{u_1, u_2\}$ è un *sistema di generatori* per $U$. 
Infatti dato un vettore $(a, b) \in U$ abbiamo $(a,b) = a(1,0) + b(0,1) = au_1 + bu_2$.
Notiamo inoltre che se definiamo $$u_3 = (1,1)$$allora anche $\{u_1, u_2, u_3\}$ è un *sistema di generatori per* $U$.

**OSS 3.1.** Osserviamo che se $\{u_1, \ldots, u_n\}$ è un *sistema di generatori per* $U$ allora $$\forall u \in U, \{u_1, \ldots, u_n, u\}$$anche questo è un *sistema di generatori* per $U$.
In parole, dato un *sistema di generatori* per un certo sottoinsieme allora possiamo aggiungerci qualsiasi elemento del sottoinsieme, dandoci comunque un altro *sistema di generatori* per lo stesso sottoinsieme.
Da questo discende che la definizione di *sistema di generatori* presenta in sé molta flessibilità e variabilità; tuttavia secondo una specie di *"legge meta-matematica"*, troppa flessibilità è un segno di un ente matematico meno forte.
Infatti introdurremmo un po' di *"rigidità"* con le *basi* ([[Base]]).