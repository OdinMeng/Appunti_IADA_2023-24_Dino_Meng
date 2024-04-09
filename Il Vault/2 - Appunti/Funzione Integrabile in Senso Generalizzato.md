---
data: 2024-03-05
corso:
  - "[[Analisi Matematica II]]"
argomento: Funzione Integrabile in Senso Generalizzato
tipologia: appunti
stato: "1"
capitolo: Fondamenta degli Integrali Generalizzati
---
- - -
*Definizione caso-per-caso di funzione integrabile in senso generalizzato su un intervallo. Esempi notevoli di funzioni integrabili in senso generalizzato. Definizione di integrale generalizzato convergente e divergente.*
- - -
# 1. Definizione di Integrale Improprio
#Definizione 
> [!def] funzione integrabile in senso generalizzato
> Per definire una *funzione integrabile in senso generalizzato* distinguiamo tre casi diversi per tipologie diverse dell'intervallo $J$.
> A. *Intervallo aperto a destra*
> Sia $J = [a,b)$ dove $b \in \mathbb{R} \cup \{+\infty\}$. Sia $f: J \longrightarrow \mathbb{R}$. Si dice che $f$ è *integrabile in senso generalizzato su* $J$ se *esiste* il limite
> $$
> \lim_{x \to b^{-} }\int_a^x f(t) \ \text{d}t := \int_a^b f(t) \ \text{d}t
> $$
> B. *Intervallo aperto a sinistra*
> Sia $J=(a,b]$ dove $a \in \mathbb{R} \cup \{-\infty\}$. Sia $f: J \longrightarrow \mathbb{R}$. Si dice che $f$ è *integrabile in senso generalizzato su* $J$ se *esiste* il limite
> $$
> \lim_{x \to a^{+} }\int_x^b f(t) \ \text{d}t := \int_a^b f(t) \ \text{d}t
> $$
> C. *Intervallo aperto*
> Sia $J = ]a, b[$ dove $a, b \in \mathbb{\tilde{R} }$. Sia $f: J \longrightarrow \mathbb{R}$ *localmente integrabile* su $J$.
> Si dice che $f$ è *integrabile in senso generalizzato* su $J$ se esiste un numero $c \in J$ tale che $f$ sia integrabile in senso generalizzato su $(a, c]$ e su $[c, a)$. Inoltre si pone
> $$
> \int_a^b f(t) \text{ d}t := \int_a^c f(t) \text{ d}t + \int_c^b f(t) \text{ d}t
> $$
^90340b

#Definizione 
> [!def] integrale improprio divergente e convergente
> Riprendendo le definizioni *A* e *B* della *funzione integrabile in senso improprio* ([[#^90340b]]), se il *limite* esiste ma *non è finito*, allora l'integrale si dice *"divergente"*. Altrimenti se il limite esiste allora si dice che è *"convergente"*.

#Osservazione 
> [!rmk] la definizione di integrale improprio su un insieme aperto la stessa
> Riprendendo la definizione *C* della *funzione integrabile in senso improprio* ([[#^90340b]]), la definizione dell'integrale improprio rimane uguale, indipendentemente dal valore $c$ scelto.

# 2. Esempi di integrali impropri
#Esempio 
> [!exm] esempio dell'integrale improprio semiaperto
> Vogliamo calcolare l'integrale improprio
> $$
> \int_0^1 \frac{1}{\sqrt{1-x} } \text{ d}x
> $$
> Prima di tutto prendiamo l'intervallo di definizione come $J = [0, 1)$, dal momento che per $x=1$ la funzione integranda non è più definita.
> Adesso calcoliamo la primitiva della funzione integranda.
> $$
> \int \frac{1}{\sqrt{1-x} } \text{ d}x = -2 \int \frac{1}{2u} \text{ d}u \ni -2 \sqrt{u} =-2\sqrt{1-x}
> $$
> Infine calcoliamo il limite
> $$
> \lim_{x \to 1^{-} }(-2 \sqrt{1-x})\bigg|_{0}^{x} = -2(\sqrt{1-x} -1) = 2
> $$
> Allora
> $$
> \int_0^1 \frac{1}{\sqrt{1-x} }\text{ d}x = 2
> $$

#Esempio 
> [!exm] esempio dell'integrale improprio su una semiretta
> Vogliamo valutare l'integrale
> $$
> \int_{-\infty}^0 e^x \text{ d}x
> $$
> Prima di tutto poniamo $J=(-\infty, 0]$. 
> Il calcolo della primitiva è banale, dal momento che $(e^x)' = e^x$, andiamo quindi a calcolare il limite
> $$
> \lim_{t \to -\infty}\int_t^0 e^x \text{ d}t = \lim_{t \to -\infty}e^x\bigg|_{t}^{0} = e^0-e^t = 1-e^t = 1
> $$
> Allora
> $$
> \int_{-\infty}^0 e^x \text{ d}x = 1
> $$

#Esempio 
> [!exm] integrale improprio sulla retta reale
> Vogliamo valutare l'integrale
> $$
> \int_{-\infty}^{+\infty}\frac{1}{1+x^2} \text{ d}x 
> $$
> Preliminarmente osserviamo che la primitiva della funzione integranda è l'*arcotangente*. Adesso scegliamo $c=0$, dato che disegnando il grafico notiamo una simmetria in $x=0$.
> Ora basta valutare i limiti
> $$
> \lim_{t \to +\infty}\int_{-t}^0 f(x) \text{ d}x + \int_0^{t}f(x) \text{ d}x = \pi
> $$
