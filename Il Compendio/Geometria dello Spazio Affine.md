---
data: 2023-12-13
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Geometria dello Spazio Affine
tipologia: appunti
stato: "1"
capitolo: Geometria del Piano e dello Spazio
---
- - -
*Geometria dello Spazio Affine: tutti i sottospazi possibili; equazioni per la retta nello spazio; determinare una retta nello spazio da due punti; equazioni del piano; determinare un piano da tre punti non allineati; determinare se tre punti sono allineati o meno; condizioni di coincidenza e di parallelismo per le rette e gli spazi; condizioni di complanarità tra due rette*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Definizione di Sottospazio Affine]]
- [[Definizione di Equazioni Cartesiane e Parametriche di uno Sottospazio Affine]]
- [[Passaggio tra Equazioni Cartesiane e Parametriche di uno Sottospazio Affine]]
- [[Posizione Reciproca di Sottospazi Affini]]
# 1. I sottospazi dello Spazio
#Definizione 
> [!def] Definizione 1.1. (punto, retta, piano)
> Sia $S \subseteq \mathbb{A}^3_\mathbb{R}$ un *sottospazio affine* ([[Definizione di Sottospazio Affine#^e4d250]]), allora $S$ può essere identificata con una delle seguenti:
> - $\dim S = 0$; $S$ si dice *punto*;
> - $\dim S = 1$; $S$ si dice *retta*;
> - $\dim S = 2$; $S$ si dice *piano*;
> - $\dim S = 3$; allora $S$ è il spazio affine $\mathbb{A}^3_\mathbb{R}$ stesso.
> $$ $$
# 2. Equazioni della retta nello spazio
#Teorema 
> [!thm] Teorema 2.1. (equazioni parametriche e cartesiane della retta nello spazio)
> Sia $S \subseteq \mathbb{A}^3_\mathbb{R}$ una *retta* (ovvero con $\dim S = 2$), passante per il punto $Q = (q_1, q_2, q_3) \in \mathbb{A}^3_\mathbb{R}$ e di giacitura $W = \operatorname{span}\begin{pmatrix} l \\ m \\ n\end{pmatrix}$. 
> Allora abbiamo le seguenti equazioni parametriche e cartesiane per descrivere $S$;
> - *Equazioni parametriche*
> $$\boxed{\begin{cases}x = q_1 + lt \\ y = q_2 + mt \\ z = q_3 + nt\end{cases}}$$
> - *Equazioni cartesiane*
> $$\boxed{\begin{cases}y-q_2 = \frac{m}{l}(x-q_1) \\ z-q_3 = \frac{n}{l}(x-q_1) \end{cases}}$$
> (vale solo se $l \neq 0$; altrimenti si deve considerare un altro parametro $m, n \neq 0$)

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 2.1.*
La dimostrazione è stata omessa, in quanto il ragionamento è completamente analogo a quello presentato nella derivazione delle equazioni parametriche e cartesiane per una retta in $\mathbb{A}^2_\mathbb{R}$ ([[Geometria del Piano Affine#^ff21d0]]). $\blacksquare$
# 3. Determinare rette nello spazio da due punti
#Teorema 
> [!thm] Teorema 3.1. (equazioni della retta passante per due punti)
> Siano $Q, R \in \mathbb{A}^3_\mathbb{R}$ due *punti distinti nello spazio*, con $P = (q_1, q_2, q_3)$ e $R = (r_1, r_2, r_3)$.
> Allora per questi due punti pasa *una ed una sola* retta e le sue equazioni sono le seguenti.
> - *Equazioni parametriche*
> $$\boxed{ \begin{cases}x = q_1 + (r_1-q_1)t \\ y = q_2 + (r_2-q_2)t \\ z = q_3 + (r_3-q_3)t \end{cases} }$$
> - *Equazioni cartesiane*
> $$\boxed{ \begin{cases}y-q_2 = \frac{r_2-q_2}{r_1-q_1}(x-q_1) \\ z-q_3 = \frac{r_3-q_3}{r_1-q_1}(x-q_1) \end{cases} }$$
> (questo vale solo se $r_1 \neq q_1$; altrimenti bisogna considerare casi diversi)

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 3.1.*
Omessa per le stesse ragioni della *dimostrazione del teorema 3.2.*. $\blacksquare$
# 4. Equazioni del piano nello spazio
#Teorema 
> [!thm] Teorema 4.1. (equazioni del piano nello spazio)
> Siano $v_1, v_2 \in \mathbb{R}^3$ dei *"vettori di direzione"* linearmente indipendenti, dove
> $$v_1 = \begin{pmatrix}l_1 \\ m_1 \\ n_1 \end{pmatrix} \ ; v_2 = \begin{pmatrix}l_2 \\ m_2 \\ n_2 \end{pmatrix}  $$
> sia $Q = (q_1, q_2, q_3) \in \mathbb{A}^3_\mathbb{R}$ un *punto nello spazio*.
> Allora un *piano* $S$ passante per $Q$ e di giacitura $W = \operatorname{span}(v_1, v_2)$ ha le seguenti equazioni:
> - *Equazioni parametriche*
> $$\boxed{\begin{cases}x = q_1+t_1l_1 + t_2l_2 \\ y = q_2 + t_1m_1 + t_2m_2 \\ z = q_3 + t_1n_1 + t_2n_2 \end{cases}}$$
> - *Equazione cartesiana*
> $$\boxed{(m_1n_2-n_1m_2)(x-q_1) + (m_1l_2 - l_1m_2)(y-q_2) + (l_1m_2 - m_1l_2)(z-q_3) = 0}$$

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 4.1.*
La derivazione delle equazioni parametriche è stata omessa; invece sarà utile riflettere sulla derivazione dell'equazione cartesiana.
Pigliamo la matrice
$$A = \begin{pmatrix} l_1 & l_2 & x-q_1 \\ m_1 & m_2 & y-q_2 \\ n_1 & n_2 & z-q_3 \end{pmatrix}$$
Per ipotesi iniziali sappiamo che $\operatorname{rg}(A)$ dev'essere *almeno* $2$, dato che le prime due colonne sono linearmente indipendenti. Tuttavia sappiamo che il range può essere *al massimo* $2$, dato che la terza colonna è linearmente dipendente dalle prime due. 
Di conseguenza, da questi fatti discerne che $\operatorname{rg}(A) = 2$; di conseguenza per le *condizioni di invertibilità del determinante* ([[Teoremi sul determinante#^2d0019]]), $A$ non è invertibile, ergo $\det A = 0$. Di conseguenza possiamo usare la *definizione di Sarrus* del determinante ([[Determinante#^5b8f2c]]) e ottenere l'equazione finale. $\blacksquare$
# 5. Determinare l'allineamento di tre punti
#Teorema 
> [!thm] Teorema 5.1. (criteri di allineamento di tre punti nello spazio)
> Siano $P, Q, R \in \mathbb{A}^3_\mathbb{R}$ tre *punti nello spazio*.
> Allora, per determinare se questi siano *"allineati"* o meno possiamo adoperare uno dei criteri:
> i. Determinare le rette passanti per $P, Q$ e $P, R$ e vedere se siano *coincidenti* o meno;
> ii. Determinare la retta $P, Q$ e vedere se il punto $R$ ci appartenga o meno;
> iii. Verificare la *dipendenza lineare* tra i vettori $\sigma(P, Q)$ e $\sigma(P, R)$.
> (*Figura 5.1.*)

**FIGURA 5.1.** (*L'idea grafica dei criteri*)
![[Pasted image 20240114165402.png]]
# 6. Determinare un piano da tre punti nello spazio
#Osservazione 
> [!oss] Osservazione 6.1. (per tre punti passa un solo piano)
> Come osservato con la *geometria del piano affine* ([[Geometria del Piano Affine#^9a91b2]]), per due punti distinti passa una e sola retta.
> Parimenti, per *tre punti* passa *un solo piano*, se questi punti *non sono allineati*.
> Ora vediamo di derivare l'equazione di questo piano.

#Teorema 
> [!thm] Teorema 6.1. (l'equazione del piano passante per tre punti)
> Siano $P, Q, R \in \mathbb{A}^3_\mathbb{R}$ dei *punti distinti e non allineati* del tipo $P = (p_1, p_2, p_3), Q = (q_1, q_2, q_3), R = (r_1, r_2, r_3)$.
> Allora esiste *uno e solo piano* $S$ passante per $P, Q, R$ ed è descritto dalle seguenti equazioni:
> - *Equazioni parametriche*
> $$\boxed{S: \begin{cases}x = q_1 + (r_1-p_1)t_1 + (q_1-p_1)t_2 \\ y = q_2 + (r_2-p_2)t_1 + (q_2-p_2)t_2 \\ z = q_3 + (r_3-p_3)t_1 + (q_3-p_3)t_2 \end{cases}}$$
> - *Equazioni cartesiane*
> $$\boxed{S : (z-q_3)-\frac{\alpha_3}{\alpha_1}(x-q_1)-\frac{\beta_3-\frac{\alpha_3}{\alpha_1}\beta_1}{\beta_2 - \frac{\alpha_2}{\alpha_1}\beta_1}(y-q_2)+\frac{\alpha_2}{\alpha_1}(x-q_1)=0}$$
> con $\alpha_n = r_n-p_n, \beta_n = q_n-p_n$

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 6.1.*
Per questa derivazione scegliamo a piacere due applicazioni lineari $\sigma$ tra *due punti*; nel caso dell'enunciato abbiamo scelto $v_1 = \sigma(P, Q)$ e $v_2 = \sigma(P, R)$. Dato che i tre punti *non* sono allineati, allora sicuramente $v_1, v_2$ saranno *linearmente indipendenti*; di conseguenza, definendo il sottospazio vettoriale $W = \operatorname{span}(v_1, v_2)$, abbiamo proprio la *giacitura* del piano.
Da qui in poi sarà semplice determinare le equazioni parametriche e cartesiane per $S$. $\blacksquare$
# 7. Condizioni di parallelismo e di incidenza tra retta e spazio
#Teorema 
> [!thm] Teorema 7.1. (condizioni di parallelismo e di incidenza tra una retta e un spazio)
> Sia $S \subseteq \mathbb{A}^3_\mathbb{R}$ di giacitura $W$ un *piano* e sia $S' \subseteq \mathbb{A}^3_\mathbb{R}$ di giacitura $W$ una *retta*.
> Allora $S \parallel S'$ (sono paralleli) *se e solo se* $W' \subset W$ (infatti è impossibile che si verifichi $W \subseteq W'$).
> Infatti, se $W = \operatorname{span}(w_1, w_2)$ e $W' = \operatorname{span}(w')$, allora la condizione di parallelismo è
> $$\operatorname{rg}(w_1, w_2, w') = 2$$
> 
> Invece sono *incidenti* e si incontrano in un *solo punto* se e solo se il sistema lineare
> $$\begin{pmatrix}w_1 & w_2 \end{pmatrix}t = \begin{pmatrix}w' \end{pmatrix}$$
> è *compatibile* con un'unica soluzione; ovvero
> $$\operatorname{rg}\begin{pmatrix}w_1 & w_2 & w' \end{pmatrix} = 3$$
> Per calcolare tale punto bisogna risolvere il *sistema lineare* costituito dalle *equazioni cartesiane* per $S, S'$.

**FIGURA 7.1.** (*Teorema 7.1.*)
![[Pasted image 20240114174916.png]]

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 7.1.*
Omessa (è già stata fornita una dimostrazione parziale nell'enunciato).
# 8. Condizioni di parallelismo e di incidenza tra due spazi
#Teorema 
> [!thm] Teorema 8.1. (condizioni di parallelismo e di incidenza per due spazi)
> Siano $S, S' \subseteq \mathbb{A}^3_\mathbb{R}$ due *piani*, rispettivamente di giacitura $W, W'$.
> Allora $S \parallel S'$ se e solo se $W = W'$ ($W \subseteq W' \land W' \subseteq W$)
> 
> Oppure *non* sono paralleli se $S' \cap S$ si *intersecano* lungo una retta; per determinare tale retta bisogna determinare la soluzione generica al sistema lineare formata dalle equazioni cartesiane per $S, S'$.

**FIGURA 8.1.** (*Teorema 8.1.*)
![[Pasted image 20240114175248.png]]
# 9. Condizioni di complanarità tra due rette
#Definizione 
> [!def] Definizione 9.1. (rette complanari)
> Due *rette* $r, s \subseteq \mathbb{A}^3_\mathbb{R}$ si dicono *complanari* se esiste un *piano* $\pi \subseteq \mathbb{A}^3_\mathbb{R}$ tale che $r, s \subseteq \pi$.

#Teorema 
> [!thm] Teorema 9.1. (condizione necessaria e sufficiente di complanarità)
> Due rette $r, s \subseteq \mathbb{A}^3_\mathbb{R}$ sono *complanari* se e solo se accade una delle due condizioni:
> - le rette sono *incidenti*
> - le rette sono *paralleli* o *coincidenti*
> 
> In particolare, $r, s$ sono *complanari* e *distinte* allora esiste un *unico* piano $\pi$ che contenga $r, s$.
^a52715

**FIGURA 9.1.** (*Definizione 9.1., teorema 9.1.*)
![[Pasted image 20240108222544.png]]

#Dimostrazione 
**DIMOSTRAZIONE** (*parziale*) del *teorema 9.1.* ([[#^a52715]])
Questa dimostrazione si articolerà solo nella dimostrazione del *solo* verso $\Uparrow$, ovvero "se le rette sono *incidenti* o *paralleli* (ovvero *non sghembi*), allora le rette sono complanari".
Supponiamo dunque che $r, s$ siano dei *sottospazi affini* rispettivamente passanti per $Q, Q'$ e di giacitura $\operatorname{span}(v), \operatorname{span}(v')$.
In primo luogo vediamo il caso in cui $r, s$ sono *incidenti*.
Allora per le *condizioni di incidenza* per due rette (???), $v, v'$ sono *linearmente indipendenti*; quindi possiamo scegliere la *giacitura* di $\pi$ come $\operatorname{span}(v, v')$ e questo sottospazio affine sarà passante per $Q, Q'$.
In secondo luogo supponiamo che $r, s$ siano *parallele*.
Ma $r \parallel s \implies \operatorname{span}(v) = \operatorname{span}(v')$; allora se imponiamo un'ulteriore condizione, ovvero $r \neq s$, allora esiste un *unico* piano $\pi$ tale che $r, s \subseteq \pi$. Per ottenere la *giacitura* di $\pi$, possiamo scegliere $v$ o $v'$, ma non entrambe dal momento che questi due vettori sono *linearmente dipendenti*. 
Scegliamo pertanto il vettore $\sigma(Q, Q')$ che è *non-nullo* in quanto $r \neq s$ e *linearmente indipendente* dai vettori $v, v'$ (*altrimenti ci sarebbe un assurdo!*).
In definitiva, il piano $\pi$ è il piano passante per $Q, Q'$ e di giacitura $\operatorname{span}(v, \sigma(Q, Q'))$. ^a1282f

#Osservazione 
> [!oss] Osservazione 9.1. (ottenere descrizioni di $\pi$)
> Vediamo che la *dimostrazione* al *teorema 9.1.* ([[#^a1282f]]) è una dimostrazione *"costruttiva"*, dato che ci dà proprio le formule per descrivere $\pi$. 
> Si illustra questa osservazione col seguente esempio.

#Esempio 
> [!ex] Esempio 9.1.
> Consideriamo le *rette* nello *spazio*
> $$r: \begin{cases}x=1+t \\ y=2-t \\ z=t\end{cases} ;  s: \begin{cases}x = 2\tau \\ y= 3-2\tau \\ z=1+2\tau \end{cases}$$
> Prima di tutto osserviamo che per definizione $r, s$ sono rispettivamente di giacitura $$\operatorname{span}\left(\begin{pmatrix}1 \\ -1 \\ 1 \end{pmatrix}\right), \operatorname{span}\left(\begin{pmatrix}2 \\ -2 \\ 2 \end{pmatrix}\right)$$
> Inoltre i due vettori *"di direzione"* (ovvero della giacitura) sono *linearmente dipendenti*. Da ciò discende, per le condizioni di parallelismo, le che le rette sono *parallele*.
> 
> Ora verifichiamo se è possibile che $r = s$; prendiamo il punto $Q = (0, 3, 1) \stackrel{\tau = 0}\in s$. Allora supponendo $r=s$, da ciò si verificherebbe $(0, 3, 1) \in r$. Tuttavia facendo dei conti veloci vediamo immediatamente che il sistema
> $$\begin{cases}1+t=0 \\ 2-t=3 \\ t=1 \end{cases}$$
> è *incompatibile*, dunque qui si ottiene un *assurdo*. Pertanto $r \neq s$.
> 
> Allora l'unico piano è quello passante per $(0, 3, 1)$ e di giacitura
> $$\operatorname{span}\left(\begin{pmatrix}1 \\ -1 \\ 1 \end{pmatrix}, \begin{pmatrix}0-1 \\ 3-2 \\ 1-0 \end{pmatrix}\right) = \operatorname{span}\left(\begin{pmatrix}1 \\ -1 \\ 1 \end{pmatrix}, \begin{pmatrix}-1 \\ 1 \\ 1\end{pmatrix}\right)$$
> Si ottiene immediatamente l'equazione parametrica
> $$\pi : \begin{cases}x = u-v \\ y=3-u+v \\ z=1+u+v\end{cases}$$
> Dopodiché, se la si ritiene opportuna, possiamo convertirla in un'equazione cartesiana, che è data da
> $$\det \begin{pmatrix}1 & -1 & x \\ -1 & 1 & y-3 \\ 1 & 1 & z-1 \end{pmatrix} = 0$$

#Osservazione 
> [!oss] Osservazione 9.2. (e se le rette sono sghembe?)
> Come visto nel *teorema 9.1.* ([[#^a52715]]), se due *rette sono sghembe*, allora sicuramente *non* sono *complanari*. Tuttavia possiamo osservare che vale invece un'altra implicazione: esistono due *piani* $\pi_r, \pi_s$ che sono *paralleli tra di loro*, uno di cui passante per $r$ e l'altro per $s$.
> La giacitura di tali piani è $\operatorname{span}(v, v')$.

#Osservazione 
> [!oss] Osservazione 9.3. (parametrica o cartesiana?)
> Osserviamo infine che nella *generalità* dei casi, conviene usare le *equazioni parametriche* quando trattiamo di *rette paralleli*, se invece trattiamo di *rette incidenti* allora conviene usare le *equazioni cartesiane*.
