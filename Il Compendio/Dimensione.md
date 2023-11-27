---
data: 2023-11-17
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Dimensione
tipologia: appunti
stato: "1"
---
*Definizione di dimensione, esempi, osservazioni.*
- - -
# 1. Definizione di Dimensione
#Definizione 
> [!def] Definizione 1.1. (dimensione di un spazio vettoriale)
> Sia $V$ un *K-spazio vettoriale*, *finitamente generato*; per definire la *dimensione* di $V$ abbiamo due opzioni.
> Se $V = \{0\}$, dove $0$ rappresenta il *vettore nullo* allora definiamo la *dimensione* di $V$ come il numero $0 \in \mathbb{N}$.
> Altrimenti la definiamo come *il numero di elementi di una sua qualsiasi base*, ovvero la cardinalità della sua base $\mathcal{B}$.
> Inoltre la denotiamo con
> $$\dim_K V \text{ oppure } \dim V \text{ se chiaro}$$
^3a9321

**OSS 1.1.** Per il *teorema sulla cardinalità delle basi* ([[Teoremi sulle Basi#^c61910]]), questa definizione è ben posta.
# 2. Esempi vari
#Esempio 
> [!ex] Esempio 2.1. (esempi misti)
> Consideriamo le *dimensioni* dei seguenti spazi vettoriali:
> $$\begin{align}&\text{i. } \dim \mathbb{R}^2 = 2 \\ &\text{ii. }\dim_K K^2 = 2 \\ &\text{iii. } \dim_K K^n = n \\ &\text{iv. }\dim_K M_{m,n}(K) = m\cdot n \end{align} $$

#Esempio 
> [!ex] Esempio 2.2. (numeri complessi)
> *Nota: questo esempio è tratto dalla dispensa e l'ho riproposta in quanto la si ritiene interessante*
> Ora consideriamo l'insieme dei numeri complessi $\mathbb{C}$ ([[Introduzione ai Numeri Complessi]]), che sappiamo essere un *campo*. 
> Se lo consideriamo come il spazio vettoriale su *se stesso*, allora questa ovviamente ha 
> $$\dim_{\mathbb{C}}\mathbb{C} = 1 \impliedby \mathcal{B} = \{(1,1)\}$$
> Tuttavia, possiamo considerare l'$\mathbb{R}$ spazio vettoriale $\mathbb{C}$, dando a $\mathbb{C}$ un operazione di *scalamento* su $\mathbb{R}$, secondo delle osservazioni ([[Operazioni sui Numeri Complessi#^d57f49]]), e un operazione di *somma componente per componente*: allora in questo caso si ha 
> $$\mathcal{B} = \{0, i\} \implies \dim_\mathbb{R} \mathbb{C} = 2 $$
> Questo esempio è importante per ricordarci che la nozione di $\dim$ non dipende *solo* dal spazio vettoriale in sé, ma anche la *"base d'appoggio"* della base stessa.
# 3. Dimensione di un sottospazio
**OSS 3.1.** Notiamo che il concetto di *dimensione* $\dim$ di un spazio vettoriale $V$ si applica anche ai suoi *sottospazi vettoriali* ([[Sottospazi Vettoriali#^9bcbf2]]) $U \subseteq V$.

#Proposizione 
> [!prop] Proposizione 3.1. (dimensione di un sottospazio vettoriale)
> Sia $V$ un *K-spazio vettoriale*, *finitamente generato*; sia $W \subseteq V$ un *sottospazio vettoriale*. Allora valgono le seguenti:
> $$\begin{align}& 1. \dim W \leq \dim V \\ &2. \dim W = \dim V \iff W = V\end{align}$$
^265196

#Dimostrazione 
**DIMOSTRAZIONE** ([[#^265196]])
*Nota: la dimostrazione è stata lasciata per esercizio, quindi non è detto che sia corretta.*
La dimostrazione segue dal *teorema di completamento della base* ([[Teoremi sulle Basi#^dbffba]]); supponiamo la base di $W$ $\mathcal{B}_W = \{w_1, \ldots, w_k\}$.
Allora sapendo che $W \subseteq V$ deduciamo che $\mathcal{B}_W \subseteq V$ (ovvero tutti gli *elementi della base di* $W$ sono *elementi di* $V$); poiché questi sono anche *linearmente indipendenti*, peri l *teorema di completamento della base* abbiamo $\mathcal{B}_V = \mathcal{B}_W \cup \{\ldots\}$, dove l'insieme a destra rappresenta gli elementi necessari per poter *"completare"* la base.
Pertanto gli elementi dell'insieme che sta a sinistra sarà sempre *maggiore* o uguale agli elementi dell'insieme a destra, in quanto a questo aggiungo o qualcosa o nulla. $\blacksquare$
Supponendo che non ho nessun elemento da *aggiungere* per completare la base, avrei $\mathcal{B}_V = \mathcal{B}_W$. 
Quindi le basi sono le *stesse*, che vuol dire che una base di $W$ è anche di $V$ e viceversa: pertanto $W = V$. $\blacksquare$
# 4. Idea del concetto
*Conclusione.* Con il concetto della *dimensione* per i spazi vettoriali siamo riusciti ad associare ogni *K-spazio vettoriale* finitamente generato ad un numero naturale $\mathbb{N}$; infatti è possibile pensare la *dimensione* come una funzione che dato un certo spazio vettoriale ci manda un numero naturale. Infatti
$$\dim : V(K) \longrightarrow \mathbb{N}  $$
Dopodiché compiremo una azione analoga con le *matrici* mediante il concetto di [[Rango]].