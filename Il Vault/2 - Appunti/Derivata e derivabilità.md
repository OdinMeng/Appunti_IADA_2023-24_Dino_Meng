---
data: 2023-11-22
corso: "[[Analisi Matematica I]]"
argomento: Derivata e derivabilità
tipologia: appunti
stato: "1"
---
*Definizione di derivata, derivabilità in un punto, derivabilità generale, funzione derivata.*
- - -
# 1. Derivata
#Definizione 
> [!def] derivata di una funzione relativa ad un punto
> Sia $f: I \longrightarrow \mathbb{R}$, $x_0 \in I$.
> Sia $R_{x_0}^{f}(x)$ il *rapporto incrementale* ([[Rapporto Incrementale#^ccc58b]]).
> Allora definisco la *derivata* di $f$ in $x_0$ il *limite* ([[Definizione di Limite di funzione#^0f845a]]) del rapporto incrementale con $x$ che tende a $x_0$.
> $$f'(x) = \lim_{x \to x_0} R_{x_0}^{f}(x) = \lim_{x \to x_0}\frac{f(x)-f(x_0)}{x-x_0} $$
> Naturalmente si definisce tale *se* tale limite esiste.
^478a87

#Osservazione 
> [!rmk] interpretazione geometrica della derivata
Come precedentemente osservato in [[Rapporto Incrementale#^c7cbf0]], la *derivata in un punto* ha la sua interpretazione geometrica. Ovvero questa è semplicemente la *pendenza* della *retta tangente* in un punto: infatti se prendendo due punti sulla funzione, di cui una *"mobile"* e l'altra *"fissa"*, poi facendo avvicinare il punto mobile a quello fisso, noteremo che la retta secante dei due punti si *"convergerà"* ad una retta sola (ovviamente supponendo che esista).

^ec396f

**FIGURA 1.1.** (*Interpretazione geometrica di derivata*)
![[Pasted image 20231122161016.png]]
# 2. Derivabilità
#Definizione 
> [!def] derivabilità in un punto
> Sia $f: I \longrightarrow \mathbb{R}, x_0 \in I$.
> Se *esiste finito* la *derivata* ([[#^478a87]]) 
> $$f'(x) = \lim_{x \to x_0} R_{x_0}^{f}(x) \in \mathbb{R}$$
> Allora $f$ si dice *derivabile nel punto* $x_0$. 
^6e7606

#Definizione 
> [!def] derivabilità di una funzione
> Sia $f: I \longrightarrow \mathbb{R}$ *derivabile* ([[#^6e7606]]) in *ogni* punto del suo dominio $I$, allora $f$ si dice *derivabile* (e basta).
^12c1df

#Osservazione 
> [!rmk] collegamento derivata-derivabilità e continuità
Notiamo che queste due definizioni *"seguono"* lo schema delle definizioni di *continuità* ([[Definizione di Continuità#^ddf65d]], [[Definizione di Continuità#^d2f56f]])
# 3. Funzione derivata
#Definizione 
> [!def] funzione derivata
> Sia $f: I \longrightarrow \mathbb{R}$ *derivabile*.
> Chiamo la *funzione derivata* la funzione 
> $$f: I \longrightarrow \mathbb{R}; x \mapsto f'(x) $$
^ae9417
