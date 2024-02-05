---
data: 2023-12-13
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Geometria del Piano Affine
tipologia: appunti
stato: "1"
capitolo: Geometria del Piano e dello Spazio
---
- - -
*Cenni alla geometria del piano affine: tutti i sottospazi affini possibili; le rette nel piano, equazioni cartesiane e parametriche; generare retta da due punti; condizioni di coincidenza e parallelismo per due rette.*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Definizione di Sottospazio Affine]]
- [[Definizione di Equazioni Cartesiane e Parametriche di uno Sottospazio Affine]]
- [[Passaggio tra Equazioni Cartesiane e Parametriche di uno Sottospazio Affine]]
- [[Posizione Reciproca di Sottospazi Affini]]
# 1. I sottospazi del Piano
#Definizione 
> [!def] Definizione 1.1. (punto, retta e piano)
> Sia $\mathbb{A}^2_\mathbb{R}$ un *spazio affine* ([[Spazio Affine su K#^30176a]]).
> Allora, prendendo un *sottospazio affine* $S$ tale che $\dim S \leq 2$, ho *tre* possibilità:
> 1. $\dim S = 0$; allora $S$ rappresenta un *punto* del piano.
> 2. $\dim S = 1$; allora $S$ è una *retta*.
> 3. $\dim S = 2$; allora $S$ *coincide* con il suo spazio affine $\mathbb{A}^2_\mathbb{R}$.
>    
> In questa pagina ci concentreremo particolarmente sulle *rette*.
# 2. Equazioni parametriche e cartesiane per le rette
#Teorema 
> [!thm] Teorema 2.1. (equazioni parametriche e cartesiane per le rette sul piano)
> Sia $S$ una *retta* su $\mathbb{A}^2_\mathbb{R}$, passante per $Q = (q_1, q_2)$ e di giacitura $W = \operatorname{span}(\begin{pmatrix}l \\ m \end{pmatrix})$.
> Allora $S$ può essere rappresentate mediante le seguenti forme:
> 1. *Equazione parametrica* ([[Definizione di Equazioni Cartesiane e Parametriche di uno Sottospazio Affine#^3babd4]])
> $$\boxed{S : \begin{cases}x = q_1+tl \\ y = q_2 + tm \end{cases}}, t \in \mathbb{R}$$
> 2. *Equazione cartesiana* 
> $$\boxed{S: m(x-q_1) = l(y-q_2)}$$
^e0f881

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 2.1.* ([[#^e0f881]])
1. *Equazione parametrica*
Per generare l'equazione parametrica è sufficiente considerare il *teorema di struttura delle soluzioni di un sistema lineare arbitrario* ([[Teoremi sui Sistemi Lineari#^49a263]]). Infatti, consideriamo $S$ come l'insieme dei punti $P=(x,y)$ che rappresentano una soluzione del tipo $s = \tilde{s} + s_0$, dove $\tilde{s}$ viene *"rappresentata"* dai punti di $Q$ e $s_0$ da $W$.
2. *Equazione cartesiana*
Se un punto generico $P = (x,y)$ appartiene a $S$, allora $(x,y)$ è *soluzione* all'equazione parametrica
$$S: \begin{cases}x = q_1+tl \\ y = q_2 + tm \end{cases}, t \in \mathbb{R}$$
Ovvero, svolgendo delle manipolazioni abbiamo
$$S: \begin{cases}x-q_1 = tl \\ y-q_2 = tm \end{cases}, t \in \mathbb{R}$$
Allora il punto $(x-q_1, y-q_2)$ è soluzione del sistema, quindi *linearmente dipendente* dal vettore $\begin{pmatrix}l \\ m \end{pmatrix}$.
Ora consideriamo la matrice completa
$$A = \begin{pmatrix}l & x-q_1 \\ m & y-q_2 \end{pmatrix}$$
Per definizione il *rango* dev'essere necessariamente $\operatorname{rk} A = 1$. Ma allora, per il *teorema di Rouché-Capelli* e delle considerazioni ulteriori sul nesso tra rango e determinante di una matrice ([[Teoremi su Rango#^4dbbdd]]), il *determinante* $\det A$ dev'essere nullo.
Ovvero, per *definizione* del *determinante* di una matrice $M_2(\mathbb{R})$, abbiamo l'equazione
$$m(x-q_1) - l(y-q_2) = 0 \implies m(x-q_1) = l(y-q_2) \ \blacksquare$$
# 3. Determinare equazioni per le rette dati due punti
#Osservazione 
> [!oss] Osservazione 3.1. (richiamo dalla geometria elementare)
> Dalla *geometria elementare euclidea* sappiamo che per due *punti distinti* nel *piano* passa *una ed una sola* retta. Graficamente, questo enunciato è banale; infatti, possiamo collegare due punti distinti con una *"riga dritta"* in un unico modo.
> Però ora vediamo di procedere con un *enunciato rigoroso*, seguito da una *dimostrazione rigorosa*.

^9a91b2

#Teorema 
> [!thm] Teorema 3.1. (equazione parametrica e cartesiana della retta tra due punti distinti)
> Siano $Q, R$ *punti distinti* nel *piano* $\mathbb{A}^2_\mathbb{R}$.
> Ovvero, siano $Q = (q_1, q_2)$ e $R = (r_1, r_2)$, con $q_1 \neq r_1 \land q_2 \neq r_2$.
> Allora la *retta* $S \subset \mathbb{A}^2_\mathbb{R}$ è determinata dalla seguente equazione parametrica:
> $$\boxed{S : \begin{cases}x=q_1+(r_1-q_1)t \\ y=q_2+(r_2-q_2)t\end{cases}}$$
> In particolare, $S$ è determinata anche dalla seguente equazione cartesiana:
> $$\boxed{S : (x-q_1)(r_2-q_2)=(r_1-q_1)(y-q_2)}$$
> Inoltre se sussiste che $r_1-q_1 \neq 0$, allora l'equazione cartesiana è equivalente a
> $$\boxed{S : y = q_2 + \frac{r_2-q_2}{r_1-q_1}(x-q_1)}$$
^8ce632

#Osservazione 
> [!oss] Osservazione 3.1. (il significato della condizione supplementare per l'equazione cartesiana)
> Notiamo che possiamo ottenere l'equazione cartesiana più *"elegante"* se è vera la condizione per cui $r_1-q_1 \neq 0$. 
> Questa condizione, in termini geometrici, vuol dire che la *retta* passante per i due punti non è *verticale*; infatti, $r_1-q_1 \neq 0 \implies r_1 \neq q_1$.
> Allora, ciò significa che $Q, R$ *non* sono verticalmente allineati.

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 3.1.* ([[#^8ce632]])
Partiamo considerando che se $S$ è la retta che contiene sia $Q, R$, allora per definizione vale che $Q \in S \land R \in S$.
Ora calcoliamo il *vettore* $\sigma(Q, R)$. Sicuramente questo vettore soddisfa la seguente proprietà:
$$\sigma(Q, R) = \overrightarrow{QR} = \begin{pmatrix}r_1-q_1 \\ r_2-q_2 \end{pmatrix} \neq \begin{pmatrix} 0 \\ 0\end{pmatrix}$$
Infatti questo vale per le *ipotesi iniziali*.
Quindi $\sigma(Q, R)$ è il *"vettore di direzione"* che *"collega"* i punti $Q, R$, ovvero la giacitura di $S$.
Così abbiamo abbastanza informazioni per ottenere le equazioni *cartesiane* e *parametriche* con le formule date nel *teorema 2.1.* ([[#^e0f881]]). $\blacksquare$ ^ff21d0
# 4. Condizioni di incidenza e di parallelismo per due rette
#Osservazione 
> [!oss] Osservazione 4.1. (richiamo dalla geometria euclidea)
> Dalla *geometria elementare* ci ricordiamo che, se ho due rette allora ho le seguenti possibilità: che siano *parallele*, *coincidenti* o *incidenti*. 
> In particolare, sono *parallele* se e solo se le rette sono *identiche* o *non hanno punti in comune*; sono *incidenti* se hanno un solo punto in comune.
> Però, ora vediamo di *"tradurre"* questo postulato in termini nostri. Effettuiamo questa transizione dalla *geometria elementare* alla formulazione *affine* della geometria.

#Teorema 
> [!thm] Teorema 4.1. (condizioni di parallelismo e di incidenza per due rette)
> Siano $r, s \subset \mathbb{A}^2_\mathbb{R}$ due *rette*, rispettivamente passanti per $(q_1, q_2)$ e $(q_1', q_2')$ e di giacitura $W = \operatorname{span}\begin{pmatrix}l \\ m \end{pmatrix}$, $W' = \operatorname{span}\begin{pmatrix}l' \\ m' \end{pmatrix}$.
> Allora $r, s$ sono *parallele* se e solo se hanno la *stessa giacitura*, in particolare *non* sono coincidenti se il sistema lineare
> $$\begin{cases}lt - l'\tau = q_1' - q_1 \\ mt - m'\tau = q_2' - q_2 \end{cases}$$
> è *incompatibile*.
$$ \boxed{\operatorname{rg}\begin{pmatrix}l & -l' \\ m & -m'\end{pmatrix} \neq \operatorname{rg}\begin{pmatrix} l & -l' & q_1' - q_1 \\ m & -m' & q_2' - q_2\end{pmatrix}} $$
> 
> Inoltre $r, s$ sono *incidenti* (ma *non coincidenti*) se e solo se il sistema lineare
> $$\begin{pmatrix}l & -l' \\ m & -m' \end{pmatrix}\begin{pmatrix}t \\ \tau \end{pmatrix} = \begin{pmatrix}q_1' - q_1 \\ q_2' - q_2 \end{pmatrix}$$
> ha la sua *matrice dei coefficienti* rango massimo ($2$), ovvero *compatibile con un'unica soluzione*.
> $$\boxed{\operatorname{rg}\begin{pmatrix}l & -l' \\ m & -m'\end{pmatrix} = 2}$$
^a10a3d

#Osservazione 
> [!oss] Osservazione 4.2. (la generalizzazione del concetto di parallelismo e di incidenza)
> Notiamo che queste condizioni di *parallelismo* e di *incidenza* non sono altro che una *generalizzazione* del concetto delle *posizioni reciproche tra sottospazi* ([[Posizione Reciproca di Sottospazi Affini]]), in questo caso abbiamo applicato queste definizioni allo spazio affine $\mathbb{A}^2_\mathbb{R}$.

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 4.2.* ([[#^a10a3d]])
- *Condizioni di parallelismo*
Partiamo dal presupposto che $r \neq s$ (infatti altrimenti la dimostrazione sarebbe banale; se le rette sono le stesse, allora sono coincidenti, ergo paralleli) e che *non* abbiamo punti in comune.
Allora $r, s$ hanno *equazioni parametriche* del tipo
$$ r: \begin{cases} x = q_1 + lt \\ y = q_2 + mt \end{cases} \ ; s : \begin{cases}x = q_1' + l'\tau \\ y= q_2' + m'\tau \end{cases}$$
Osserviamo che dire $r, s$ *non hanno punti in comune* equivale a dire che *non esistono* $\bar{t}, \bar{\tau}$ tali che
$$ \begin{cases}q_1 + l\bar t = q_1' + l' \bar \tau \\ q_2 + m \bar t = q_2' + m'\bar \tau \end{cases} \implies \begin{cases}l \bar t - l' \bar \tau = q_1'  - q_1 \\ m \bar t - m' \bar \tau = q_2' - q_2 \end{cases}$$
Ma allora se *non esistono* tali coefficienti, allora ciò equivale a dire che il sistema lineare appena costruito è *incompatibile*.
Ma allora per il *teorema di Rouché-Capelli* ([[Teorema di Rouché-Capelli#^95c688]]), il rango della *matrice dei coefficienti* e della *matrice completa* devono essere diversi.
Dato che nessuna di queste matrici è la matrice nulla, il rango dev'essere di minimo $1$. Ma al massimo il rango può essere $2$ per $A$, o $2$ per $A | b$; pertanto l'unica possibilità è che
$$\operatorname{rg} A = 1; \operatorname{rg}(A|b) = 2$$
Ma allora se la matrice dei coefficienti
$$A = \begin{pmatrix}l, -l' \\ m, -m' \end{pmatrix}$$
ha *rango $1$*, allora i due *vettori-colonna* devono essere linearmente dipendenti. Ma allora se sono linearmente dipendenti, il loro $\operatorname{span}$ devono essere gli stessi.
Pertanto,
$$\operatorname{span}\begin{pmatrix}l \\ m \end{pmatrix} = \operatorname{span} \begin{pmatrix}l' \\ m' \end{pmatrix} \implies W = W'$$ ^22a5f4
- *Condizioni di incidenza*
Ora consideriamo il caso in cui $r, s$ sono *distinte tra di loro* e *non parallele*. Ovvero, supponendo che $W \neq W'$, ovvero i vettori
$$\begin{pmatrix}l \\ m \end{pmatrix}, \begin{pmatrix}l' \\ m' \end{pmatrix}$$
sono *linearmente indipendenti*. Inoltre notiamo che ovviamente da ciò discende che
$$\begin{pmatrix}l \\ m \end{pmatrix}, \begin{pmatrix}-l' \\ -m' \end{pmatrix}$$
sono *linearmente indipendenti*.
Ora, come fatto prima, consideriamo il sistema lineare nelle variabili $t, \tau$ e capiamo se questa è *compatibile* o meno.
$$\begin{pmatrix}l & -l' \\ m & -m' \end{pmatrix}\begin{pmatrix}t \\ \tau \end{pmatrix} = \begin{pmatrix}q_1' - q_1 \\ q_2' - q_2 \end{pmatrix}$$
Dato che i vettori-colonna della matrice dei coefficienti sono *linearmente indipendenti*, abbiamo che il suo rango è *massimo*: pertanto, per il *teorema di caratterizzazione del rango* ([[Teoremi su Rango#^4dbbdd]]) questa è *invertibile*; pertanto per il *teorema di Cramer* ([[Teoremi sui Sistemi Lineari#^97243e]]) questo sistema ammette un'*unica soluzione*, che è data dalla sua *inversa* moltiplicata per i coefficienti $b$.
# 5. Esercizi misti
#Esercizio 
> [!es] Esercizio 5.1.
> Siano $Q, P$ i punti $(1,0)$ e $(3, 4)$. Trovare la retta $S$ passante per $Q, R$, sia in forma parametrica che cartesiana.
