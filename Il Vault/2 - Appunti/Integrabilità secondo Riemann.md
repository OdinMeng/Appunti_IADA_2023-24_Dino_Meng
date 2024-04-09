---
data: 2023-12-05
corso: "[[Analisi Matematica I]]"
argomento: Integrabilità secondo Riemann
tipologia: appunti
stato: "1"
---
*Definizione di funzione integrabile secondo Riemann; teorema di caratterizzazione di funzione integrabile: enunciato e dimostrazione.*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Somma inferiore e superiore per una Funzione]]
- [[Esempi di Funzioni Integrabili]]
- [[Tipologie di Funzioni Integrabili]]
# 1. Definizione di Integrabilità secondo Riemann
#Definizione 
> [!def] integrabilità di una funzione secondo Riemann
> Sia $f: [a,b] \longrightarrow \mathbb{R}$ *limitata*.
> Si dice che $f$ è *"integrabile secondo Riemann"* se vale che
> $$\boxed{\sup_{\Delta \in \mathcal{D}}s(f, \Delta) = \inf_{\Gamma \in \mathcal{D}}S(f, \Gamma)}$$
^5455b8

#Definizione 
> [!def] integrale di Riemann di una funzione su un intervallo
> ISia $f: [a, b] \longrightarrow \mathbb{R}$ *integrabile secondo Riemann*.
> Allora il valore per cui vale la relazione di definizione
> $$\sup_{\Delta \in \mathcal{D}}s(f, \Delta) = \inf_{\Gamma \in \mathcal{D}}S(f, \Gamma)$$
> lo chiamo *integrale di Riemann di $f$ sull'intervallo $[a, b]$* e lo denoto come
> $$\sup_{\Delta \in \mathcal{D}}s(f, \Delta) = \inf_{\Gamma \in \mathcal{D}}S(f, \Gamma) = \boxed{\int_{[a, b]}f = \int_{a}^{b}f(x)\  dx}$$
^64ad3b

#Definizione 
> [!def] l'insieme delle funzioni integrabili secondo Riemann
> Indico l'*insieme delle funzioni integrabili secondo Riemann sull'intervallo $[a, b]$* con la seguente notazione
> $$\mathcal{R}([a, b])$$
# 2. Teorema di caratterizzazione delle funzioni integrabili
#Osservazione 
> [!rmk] la necessità di una strategia per verificare l'integrabilità
> Notiamo che secondo la nostra *definizione* dell'integrabilità di una funzione, diventa molto difficile verificare se delle funzioni $f$ siano effettivamente *integrabili* o meno; infatti bisogna fare delle *verifiche infinite* per vedere se l'estremo superiore delle somme inferiori coincida effettivamente con l'estremo inferiore delle somme superiori.
> Allora si propone il seguente teorema per *"semplificarci"* la vita trovando un modo per raggirare questi *"calcoli infiniti"*.

#Teorema 
> [!thm] condizione necessaria e sufficiente per l'integrabilità secondo Riemann
> Sia $f:[a,b] \longrightarrow \mathbb{R}$ *limitata*.
> Allora $f$ è *integrabile secondo Riemann* se e solo se vale che
> $$\boxed{\begin{gather}\forall \varepsilon >0, \exists \Delta \in \mathcal{D}: \\ S(f, \Delta)-s(f, \Delta) < \varepsilon \end{gather}}$$
> Ovvero, per ogni $\varepsilon$ piccolo a piacere possiamo trovare una *suddivisione* $\Delta$ tale che la differenza tra la *somma superiore* e la *somma inferiore* di $f$ relativa a $\Delta$ è minore di $\varepsilon$; ovvero la somma delle *"aree intermedie"* diventa piccolo a piacere.
> Questo ci ricorda infatti la nozione di *limite* secondo *Cauchy* ([[Definizione di Limite di funzione#^0f845a]]): abbiamo un valore *piccolo a piacere* a cui dobbiamo associare un *valore*.
^92bcfb

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 2.1.* ([[#^92bcfb]])
"$\implies$": Supponiamo $f$ *integrabile secondo Riemann*.
Allora esiste un valore reale
$$\sup s(f, \Delta) = \inf  S(f, \Delta) = \int_{[a,b]}f = \int f \text{ (scrivo per compattezza)}$$
Allora, per la *seconda proprietà* dell'estremo superiore e inferiore ([[Insiemi limitati, maggioranti, massimo e teorema dell'estremo superiore#^601040]]), valgono che
$$\begin{cases}\forall \varepsilon >0, \exists \bar{\Delta}: \int f - \frac{\varepsilon}{2}< s(f, \bar{\Delta})  \\ \forall \varepsilon >0, \exists \tilde{\Delta}: \int f + \frac{\varepsilon}{2}> S(f, \tilde{\Delta})\end{cases}$$
Ma allora prendendo *l'unione delle due suddivisioni* $\Gamma = \bar{\Delta} \cup \tilde{\Delta}$ vale che
$$\begin{cases}s(f, \Gamma) > s(f, \bar{\Delta}) > \int f -\frac{\varepsilon}{2} \\ S(f, \Gamma) < S(f, \tilde{\Delta}) < \int f + \frac{\varepsilon}{2}\end{cases}$$
Ora manipolo la prima espressione, moltiplicando per $-1$, per ottenere
$$-s(f, \Gamma) \cancel{< S(f, \tilde{\Delta})}<-\int f + \frac{\varepsilon}{2}$$
Allora sommo $-s(f, \Gamma) < -\int f + \frac{\varepsilon}{2}$ con $S(f, \tilde{\Delta}) < \int f + \frac{\varepsilon}{2}$ per ottenere
$$\boxed{S(f, \Gamma)-s(f, \Gamma) < \varepsilon}$$
che è esattamente la *tesi*.
"$\impliedby$": (*Idea*) Supponiamo per assurdo che vale la *condizione di caratterizzazione* e che non valga la *tesi*; ovvero supponiamo che la *somma superiore* è sempre lontana dalla *somma inferiore*. Ovvero
$$\sup s(f, \Delta) < \inf S(f, \Gamma)$$
Ma allora basta fissare 
$$\varepsilon = \frac{1}{4}(\inf s - \sup S)$$
Si vede che non ci sarà *mai* un $\Delta \in \mathcal{D}$ che renda vera la *condizione di caratterizzazione*, che è un assurdo. $\blacksquare$
