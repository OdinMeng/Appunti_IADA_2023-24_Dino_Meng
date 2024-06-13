---
data: 2024-05-11
corso:
  - "[[Analisi Matematica II]]"
argomento: Equazioni Differenziali Lineari
tipologia: appunti
stato: "0"
capitolo: Equazioni Differenziali
---
- - -
*Equazioni differenziali lineari: definizione di ODE lineare del primo ordine completa e omogenea. Struttura delle ODE lineari del primo ordine, metodo di risoluzione per le soluzioni particolari.*
- - -
# 0. Voci correlate
- [[Definizioni Relative alle Equazioni Differenziali]]
- [[Definizione di Applicazione Lineare]]
- [[Teoremi sui Sistemi Lineari]]
# 1. Definizione di ODE lineare del primo ordine
Diamo un po' di nomenclature.

#Definizione 
> [!def] Equazione differenziale ordinaria lineare del primo ordine
> Siano $a,b:I \subseteq \mathbb{R} \longrightarrow \mathbb{R} \in \mathcal{C}^0$ con $I$, aperto. Allora le equazioni di forma
> $$
> \begin{gather}
> (\ast) \ y'(x)=a(x)y(x)+b(x) \\
> (\ast\ast) \ y'(x)=a(x)y(x)
> \end{gather}
> $$
> L'equazione $(\ast)$ si definisce *ODE lineare del primo ordine completa*, invece $(\ast\ast)$ è un'*ODE lineare del primo ordine omogenea*.

#Esempio 
> [!exm] esempi
> L'equazione differenziale ordinaria lineare del primo ordine
> $$
> y'(x)=\cos(x)y(x)+x^3
> $$
> è *completa*.
> 
> Invece l'equazione differenziale
> $$
> y'(x)=\cos(x)y(x)
> $$
> è *omogenea*.

#Teorema 
> [!thm] le ODE lineari qualsiasi ammettono soluzioni uniche
> I *problemi di Cauchy* definiti mediante *equazioni differenziali ordinarie lineari del primo ordine* ammettono sempre *soluzioni uniche* definite *globalmente* su $I$.
^236800

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^236800]]
Si tratta di usare i teoremi a disposizione per dimostrare l'*esistenza unica* e la *definizione globale*. 
$\exists!$: Si applica banalmente il *teorema di Cauchy-Lipschitz* ([[Teorema di Cauchy-Lipschitz#^a5ca9d]]), dal momento che abbiamo $a,b,y$ continue da cui discende che $f$ è continua. Inoltre la derivata parziale $f_y$ è $a$ stessa, che è continua.
$I$: Banalmente si usa il fatto che $f$ è *lineare*, dunque definita *globalmente* ([[Esistenza locale e globale delle soluzioni ai Problemi di Cauchy#^637b48]]). Infatti, si ha $\alpha=\max_{K \Subset I}a(x)$ e $\beta=\max_{K \Subset I}b(x)$. $\blacksquare$

# 2. Struttura delle ODE lineari del primo ordine
#Definizione 
> [!def] operatore lineare di un'ODE lineare
> Si definisce l'*operatore lineare* di un'*equazione differenziale ordinaria lineare* del tipo
> $$
> y'(x)=a(x)y(x)+b(x)
> $$
> come l'*applicazione lineare* $L\in \mathcal{L}[\mathcal{C}^1(I);\mathcal{C}^0(I)]$  (ovvero manda *funzioni derivabili con derivate continue* in *funzioni continue*) definita mediante l'operazione
> $$
> L(y(x)):=y'(x)-a(x)y(x)
> $$
> In altre parole *valuta* lo scarto tra $y'(x)$ e la parte lineare $a(x)y(x)$ di una soluzione.

#Osservazione 
> [!rmk] $L$ è lineare
> Si ha che $L$ è lineare, dunque
> $$
> L(\alpha y_1(x)+\beta y_2(x))=\alpha L(y_1(x))+\beta L(y_2(x))
> $$

#Definizione 
> [!def] l'insieme delle soluzioni generale e omogenea
> Possiamo definire i seguenti spazi.
> i. le soluzioni appartengono a $L^{-1}(\{b\})$.
> $$
> y'(x)=a(x)y(x)+b(x) \iff L(y)=b \iff \boxed{y \in L^{-1}(\{b\}):=S_b}
> $$
> ii. caso $b=0$, $\ker L$: definiamo l'insieme delle *soluzioni all'omogenea* come
> $$
> y \in S_0 \iff L^{-1}(\{0\})=\ker L
> $$

#Teorema 
> [!thm] di struttura delle soluzioni per le equazioni differenziali lineari
> L'insieme $S_b\equiv L^{-1}(\{b\})$ è costituito da *tutte e sole* le funzioni $y$ del tipo
> $$
> y(x)=\bar{y}(x)+z(x)
> $$
> Dove $\bar{y}$ è una *soluzione particolare della completa* e $z$ è una *generica soluzione* dell'omogenea $\ker L$. In altre parole si ha
> $$
> \boxed{S_b = \bar{y}+ \ker L}
> $$ 

Si nota che questo teorema è estremamente simile al *teorema di struttura per le soluzioni ai sistemi lineari* ([[Teoremi sui Sistemi Lineari#^1ce15f]]). Adesso vogliamo trovare *come sono fatte* le soluzioni $\bar{y}$ e $z$.

#Teorema 
> [!thm] di struttura delle soluzioni per le equazioni differenziali lineari omogenee
> L'insieme $S_0=\ker L$ forma uno *spazio vettoriale* con $\dim S_0=1$ (ovvero abbiamo che è costituita da *una* funzione).
> Risulta che la sua generica soluzione è
> $$
> z(x) \in \ker L =\left\{c \in \mathbb{R}: ce^{A(\cdot)}\right\}
> $$
> dove $A(\cdot)$ è la *primitiva di* $a(\cdot)$, ovvero $A \in \int a$.
^106c24

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^106c24]]
"$\impliedby$": Proviamo che se definiamo $z(x):=ce^{A(x)}$ allora questa risolve l'ODE omogenea. Derivandolo abbiamo
$$
z'(x)=cA'(x)e^{A(x)}= a(x)\cdot ce^{A(x)}=a(x)z(x)
$$
come volevasi dimostrare.
"$\implies$": Proviamo che se $z(x)$ risolve $S_0$, allora verifica l'equazione. Procediamo dunque *per costruzione*:
$$
z'(x)-a(x)z(x)=0 \implies e^{-A(x)}z'(x)-e^{-A(x)}a(x)z(x)=0
$$
Abbiamo che quest'ultima equazione rappresenta una derivata di $z(x)e^{-A(x)}$. Allora
$$
\frac{\text{d} }{\text{d}x}\left(z(x)e^{-A(x)}\right)=0
$$
Dunque per *Lagrange* abbiamo che questa è costante, ovvero abbiamo
$$
z(x)e^{-A(x)}=c \implies z(x)=ce^{A(x)}
$$
che prova la tesi. $\blacksquare$

Adesso completiamo il quadro trovando una *soluzione particolare* per la completa.

#Teorema 
> [!thm] di struttura delle soluzioni particolari di un'ODE completa
> Una *soluzione particolare* della completa è data da
> $$
> \bar{y}(x)=\int_{x_0}^{x}e^{A(x)-A(t)}b(t) \ \text{d}t
> $$
> con $x_0 \in I$ fissato.
^7973f1

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^7973f1]]
Si tratta di usare un trucco, per cui pensiamo $c$ come una *variabile* $c(x)$ (anche se in realtà sarebbe una costante). Adesso una soluzione che abbia una struttura del tipo
$$
\bar {y}(x)=c(x)e^{A(x)}
$$
Suppongo $c \in \mathcal{C}^1$ e impongo che sia la soluzione all'ODE completa
$$
\bar{y}(x)=c'(x)e^{A(x)}+c(x)a(x)e^{A(x)}\equiv a(x) \textcolor{red}{\bar{y}(x)}+b(x)=a(x)\textcolor{red}{c(x)e^{A(x)} }+b(x)
$$
Quindi abbiamo
$$
c'(x)e^{A(x) }+c(x)a(x)e^{A(x)}=a(x)c(x)e^{A(x)}+b(x)
$$
da cui possiamo cancellare $c(x)a(x)e^{A(x)}$. Abbiamo dunque
$$
c'(x)e^{A(x)}=b(x)
$$
Adesso si tratta semplicemente trovare questa $c(x)$ calcolando l'integrale
$$
c(x)=\int_{x_0}^x b(t)e^{-A(t)}\ \text{d}t
$$
Ovvero abbiamo
$$
\overline{y}(x)=c(x)e^{A(x)} \implies \bar{y}(x)=\int_{x_0}^x b(t)e^{A(x)-A(t)} \ \text{d}t
$$
che prova la tesi. $\blacksquare$

# 3. Soluzione di un'ODE lineare
#Corollario 
> [!cor] la soluzione generica di un'ODE lineare
> La generica soluzione di un'equazione differenziale ordinaria lineare completa è data da
> $$
> \boxed{y(x)=Ce^{A(x)}+\int_{x_0}^x e^{A(x)-A(t)}b(t) \text{ d}t}
> $$
> con $x_0 \in I$ fissato, $C \in \mathbb{R}$ qualsiasi e $A \in \int a$.
^b8f181

#Esempio 
> [!exm] problema di Cauchy lineare
> Col problema di Cauchy associata ad un'ODE lineare completa
> $$
> (PC):\left\{\begin{align}
> & y'(x)=a(x)y(x)+b(x)\\
> & y(x_0)=y_0
> \end{align}\right.
> $$
> Abbiamo che l'*unica* soluzione al $(PC)$ è rappresentata da
> $$
> \boxed{y(x)=y_0e^{A(x)-A(x_0)} + \int_{x_0}^x e^{A(x)-A(t)}b(t) \text{ d}t}
> $$
> (per trovare questa equazione abbiamo trovato la costante $C$ come $C=y_0 e^{-A(x_0)}$, ponendo $y_0=Ce^{A(x)}$)
