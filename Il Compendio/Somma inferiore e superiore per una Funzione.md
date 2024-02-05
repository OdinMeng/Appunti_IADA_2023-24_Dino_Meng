---
data: 2023-12-05
corso: "[[Analisi Matematica I]]"
argomento: Somma inferiore e superiore per una Funzione
tipologia: appunti
stato: "1"
---
*Definizione di somma inferiore e superiore per una funzione relativa ad una suddivisione; osservazioni preliminari per l'integrazione secondo Riemann.*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Suddivisione di un Intervallo]]
- [[Integrabilità secondo Riemann]]
# 1. Definizione di somma inferiore e superiore
#Definizione 
> [!def] Definizione 1.1. (somma inferiore per una funzione relativa ad una suddivisione)
> Sia $f: [a, b] \longrightarrow \mathbb{R}$ *limitata* (ovvero l'immagine $f([a, b])$ è *limitata*).
> Prendo una *suddivisione* ([[Suddivisione di un Intervallo#^379a7b]]) qualsiasi $\Delta$.
> Chiamo la *somma inferiore per $f$ relativa a $\Delta$* come il seguente:
> $$\boxed{s(f, \Delta) = \sum_{i=1}^{n}(x_i-x_{i-1})\inf_{x \in [x_{i-1}, x_i]}f(x)}$$
> Ovvero *graficamente* (figura 1.1.) questa significa la *somma delle aree di tutti i rettangolini composti dai punti della suddivisione*; ovvero la prima parte $x_i-x_{i-1}$ vuol semplicemente dire la *base* del rettangolino; invece $\inf{f(x)}$ è l'*altezza* "approssimata per difetto".

^1ff0a9

**FIGURA 1.1.** (*Concetto grafico di somma inferiore*)
![[Pasted image 20231205183854.png]]

#Definizione 
> [!def] Definizione 1.2. (somma superiore per una funzione relativa ad una suddivisione)
> Sia $f: [a, b] \longrightarrow \mathbb{R}$ *limitata*, sia $\Delta$ una suddivisione del dominio.
> Analogamente alla definizione della *somma inferiore per $f$ relativa a $\Delta$* ([[#^1ff0a9]]), definisco la *somma superiore per $f$ relativa a $\Delta$* come la stessa, solo che al posto di *"approssimare"* per difetto prendendo $\inf$, approssimo per *eccesso* prendendo $\sup$;
> $$\boxed{S(f, \Delta) = \sum_{i=1}^{n}(x_i-x_{i-1})\sup_{x \in [x_{i-1}, x_i]}f(x)}$$

**FIGURA 1.2.** (*Idea grafica della somma superiore*)
![[Pasted image 20231205184405.png]]
# 2. Osservazioni sulle somme superiori e inferiore
Queste osservazioni vengono effettuate al fine di comprendere meglio il concetto di *integrabilità secondo Riemann* ([[Integrabilità secondo Riemann]]).
Come *"presupposto"* di queste osservazioni facciamo la seguente:
#Osservazione 
> [!oss] Osservazione 2.1. (prima osservazione)
> Ogni volta che prendo una suddivisione $\Delta \in \mathcal{D}$, posso calcolare sia la *somma superiore* $S(f, \Delta)$ ed *inferiore* $s(f, \Delta)$ relativa ad essa; ci poniamo le seguenti domande. (*osservazioni 2.2., 2.3., 2.4.*)

#Osservazione 
> [!oss] Osservazione 2.2. (la somma inferiore è sempre più piccolo della somma superiore)
> Qual è la relazione tra $s(f, \Delta)$ e $S(f, \Delta)$?
> Dato che sia la *somma inferiore* e *superiore* sono definiti dalla stessa *"base"* $x_i - x_{i-1}$, allora l'unica parte per cui differiscono è *"l'altezza"*; da un lato abbiamo $\inf f$ e dall'altro abbiamo $\sup f$. 
> Ma allora, per definizione un *estremo inferiore* di $f$ è sempre più piccolo di qualsiasi valore di $f$, incluso l'*estremo superiore* di $f$ che a sua volta è più grande di qualsiasi valore di $f$.
> Allora si evince che
> $$\boxed{s(f, \Delta) \leq S(f, \Delta)}$$
> Lo stesso vale anche se abbiamo funzioni che hanno *valori negativi*, in quanto le aree *"contano negativamente"*.

^fd1845

#Osservazione 
> [!oss] Osservazione 2.3. (la somma inferiore e superiore di suddivisioni più fini)
> Osserviamo che aggiungendo ad una qualsiasi suddivisione $\Delta$ un elemento questa diventa più *fine* ([[Suddivisione di un Intervallo#^6c1bae]]), in quanto stiamo sostanzialmente facendo una unione di un elemento con un insieme.
> Allora supponendo $\Delta_1 \supseteq \Delta_2$, ci chiediamo quale sia la relazione tra le loro *somme inferiori*.
> Possiamo ragionare *graficamente* (figura 2.3.): aggiungendo un *"pezzo di suddivisione"* in più, abbiamo una specie di nuovo *"contributo"* da parte di questo elemento aggiunto.
> Allora si evince che
> $$\boxed{s(f, \Delta_1) \geq s(f, \Delta_2)}$$
> Analogamente si evince pure che
> $$\boxed{S(f,\Delta_1) \leq S(f, \Delta_2)}$$
> in quanto abbiamo dei *"pezzettini"* tolti (figura 2.3.).
^80234e

**FIGURA 2.3.** (*Idea grafica delle somme superiori inferiori di suddivisioni più fini delle altre*)
![[Pasted image 20231205185842.png]]

#Osservazione 
> [!oss] Osservazione 2.4. (la relazione tra somma inferiore e superiore di suddivisioni qualsiasi)
> Siano $\Delta_1$, $\Delta_2$ delle *suddivisioni* qualsiasi.
> Quale sarà mai la relazione tra la *somma inferiore* per $\Delta_1$ e la *somma superiore* per $\Delta_2$;
> $$s(f, \Delta_1) \ ? \ S(f, \Delta_2)$$
> Intuitivamente si può pensare che la *somma inferiore* sarà sempre piccola di una *somma superiore* per suddivisioni qualsiasi; infatti la somma superiore *"contiene"* sempre la *somma inferiore* (*figura 2.4.*). 
> 
> Infatti questa sembra una sorta di *"panino"*, dove le linee delineate dalla somma superiore è la fetta di pane superiore; la parte in mezzo la carne; la parte sotto sono le linee delineate dalla somma inferiore. (*forse non consiglio di usare questa analogia all'orale*)
> 
> Infatti, ricordandoci delle osservazioni fatte sulle *suddivisioni* ([[Suddivisione di un Intervallo#^64461d]]) possiamo prendere *l'unione* delle suddivisioni, maggiorarlo per la *suddivisione inferiore* di $\Delta_1$, poi maggioriamo a sua volta l'unione con la *somma superiore* dell'unione (per *osservazione 2.2.* [[#^fd1845]]), che a sua volta la maggioriamo con la *somma superiore* di $\Delta_2$ (*osservazione 2.3.*, [[#^80234e]]).
> 
> Ovvero, in termini matematici questo equivale a
> $$s(f, \Delta_1) \leq s(f, \Delta_1 \cup \Delta_2) \leq S(f, \Delta_1 \cup \Delta_2) \leq S(f, \Delta_2)$$
> Quindi, alla fine possiamo affermare che la *somma inferiore* di una qualsiasi suddivisione è *sempre minore o uguale* di una *somma superiore* di un'altra qualsiasi suddivisione. Ovvero la seguente proposizione.

#Proposizione 
> [!prop] Proposizione 2.1. (relazione tra somma inferiore e superiore)
> Se $f$ è *limitata*, allora le *somme inferiore* sono sempre *minori o uguali* alla somma *superiore*.
> $$\boxed{\sup_{\Delta \in \mathcal{D}}s(f, \Delta) \leq \inf_{\Gamma \in \mathcal{D}}S(f, \Gamma)}$$

**FIGURA 2.4.** (*Intuizione grafica della proposizione 2.1.*)
![[Pasted image 20231205192557.png]]