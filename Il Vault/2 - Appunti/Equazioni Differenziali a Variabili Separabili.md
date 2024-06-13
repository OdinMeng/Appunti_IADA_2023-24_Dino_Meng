---
data: 2024-05-11
corso:
  - "[[Analisi Matematica II]]"
argomento: Equazioni Differenziali a Variabili Separabili
tipologia: appunti
stato: "0"
capitolo: Equazioni Differenziali
---
- - -
*Definizione di ODE a variabile separate (separabili). Metodo di risoluzione per le ODE a variabili separabili.*
- - -
# 0. Voci correlate
- [[Definizioni Relative alle Equazioni Differenziali]]
# 1. Definizione di ODE a variabili separabili
Vediamo una *classe di equazioni differenziali* che possono avere una sua *soluzione esplicita* mediante l'*integrazione*.

#Definizione 
> [!def] equazione differenziale a variabili separabili
> Siano $g,h:I\subseteq \mathbb{R} \longrightarrow \mathbb{R} \in \mathcal{C}^1$ con $I$ un intervallo. Allora l'equazione differenziale
> $$
> y'(x)=g(x)h(y)
> $$
> si dice *"equazione differenziale ordinaria a variabili separate"*.

#Osservazione 
> [!rmk] le equazioni differenziali a variabili separabili formano problemi di Cauchy ben definiti
> Notiamo che con $f(x,y):=g(x)h(y)$ *verificano* le ipotesi del *teorema di Cauchy-Lipschitz*, dunque sappiamo che i *problemi di Cauchy* formati da $f$ sono *ben definiti*.

# 2. Metodo di Risoluzione delle ODE a variabili separabili
Vediamo un suo metodo di risoluzione.

#Teorema 
> [!thm] metodo di risoluzione per i problemi di Cauchy con ODE a variabili separabili
> Sia $(PC)$ il *problema di Cauchy* definito da
> $$
> (PC):\left\{\begin{align}
> & y'(x)=g(x)h(y(x))\\
> & y(x_0)=y_0
> \end{align}\right.
> $$
> Se vale che $h(y_0)=0$, allora la soluzione è immediata, con
> $$
> \boxed{h(y_0)=0 \implies y(x)=y_0}
> $$
> Se invece non vale tale condizione, allora vale che la soluzione è
> $$
> h(y_0)\neq 0 \implies \boxed{y(x)=K^{-1}(G(x)-G(x_0)+K(y_0))}
> $$
> con $G$ una primitiva di $g$ su $[a,b]$ e $K$ una primitiva di $h$ su $y(I)$.
^51e491

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^51e491]]
Per caso $h(y_0)=0$ si considera che si avrebbe
$$
y'(x_0)=g(x_0)h(y_0)=0
$$
da cui per *Lagrange* si ha che $y$ è una *costante*, da cui si ha
$$
y(x_0)=x_0
$$
per soddisfare la condizione iniziale. 
Invece nel caso $h(y_0)\neq0$ bisogna usare ragionamenti più fini: posso affermare che con $y:I\longrightarrow \mathbb{R}$ la soluzione, si ha che $h(y(x))\neq 0, \forall x \in I$ (sennò sarebbe *assurdo*, dal momento che esisterebbe un *"problema di Cauchy traslato con $z(x_1)=y_1=0$"* che ha due soluzioni distinte uguali). Dopodiché posso *dividere* per $h$ (operazione consentita per la supposizione appena fatta), che ci dà
$$
y'(x)=g(x)h(y(x))\iff \frac{y'(x)}{h(y(x))}=g(x)
$$
Adesso possiamo *integrare* ambo i lati su $[x_0,x]$ che ci dà
$$
\int_{x_0}^{x}\frac{y'(t)}{h(y(t))}\ \text{d}t=\int_{x_0}^x g(t) \ \text{d}t
$$
Adesso effettuando la sostituzione di variabili $\boxed{y(t)=s}$ si ha
$$
\int_{x_0}^{x}\frac{y'(t)}{h(y(t))}\ \text{d}t\to\int_{y(x_0)}^{y(x)}\frac{1}{h(s)}\ \text{d}s=\int_{x_0}^x g(t) \ \text{d}t
$$
Adesso sia $G \in \int g$ e $K=\int\frac{1}{h}$ (ovvero abbiamo le loro primitive: esistono dal momento in cui stiamo integrando funzioni continue su compatti), da cui per il *teorema di Torricelli-Barrow* ([[Teorema di Torricelli-Barrow#^ebd157|1]]) si ha
$$
K(y(x))-K(y(x_0))=G(x)-G(x_0)
$$
Poiché $K'(s)=\frac{1}{h(s)}\neq 0$ si ha che $K$ è *iniettiva* (e ovviamente *suriettiva*), dunque invertibile. Allora esplicitiamo $y$ con
$$
y(x)=K^{-1}(G(x)-G(x_0)+K(y_0))
$$
oppure possiamo pensare questa espressione come
$$
y(x)=K^{-1}\left(G(x)|_{x_0}^x + K(y_0)\right)
$$
che è un numero. $\blacksquare$

# 3. Esempio pratico
Per farci capire bene, usiamo un esempio pratico.

#Esempio 
> [!exm] esempio pratico
> Prendiamo il problema di Cauchy
> $$
> (PC):\left\{\begin{align}
> & y'(x)=xy(x) \\
> & y(0)=y_0>0
> \end{align}\right.
> $$
> Abbiamo una *ODE a variabili separate*, con $g(x)=x$ e $h(y(x))=y(x)$. Se abbiamo $h(0)=0$. allora semplicemente $y(x)=0$ è la *soluzione*.
> 
> Invece per caso contrario dobbiamo procedere per la procedura appena descritta. Ovvero prendiamo
> $$
> \int_{x_0}^x \frac{y'(t)}{y(t)}\ \text{d}t = \int_{x_0}^x t \text{ d}t
> $$
> procedendo per sostituzione si ha
> $$
> \int_{y_0}^y \frac{1}{s}\text{ d}s=\int_{x_0}^x t \ \text{d}t
> $$
> Calcolandolo abbiamo
> $$
> \ln|s|\bigg|_{y_0}^y = \frac{t^2}{2}\bigg|_{0}^x \iff \ln|y|=\frac{x^2}{2}+\ln|y_0|
> $$
> Applicando $\exp(\cdot)$ da ambo i lati si ha
> $$
> y=y_0e^{\frac{x^2}{2} }
> $$
> che è la soluzione per il *problema di Cauchy*.


