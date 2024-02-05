---
data: 2023-11-27
corso: "[[Analisi Matematica I]]"
argomento: Derivata Successiva e Classe C
tipologia: appunti
stato: "1"
---
*Definizione di derivata seconda, terza, ..., di ordine k; definizione di classe C.*
- - -
# 1. Derivata di ordine k-esimo
#Definizione 
> [!def] Definizione 1.1. (derivata di ordine k-esimo)
> Sia $f: I \longrightarrow \mathbb{R}$, $I$ un *intervallo* ([[Intervalli]]).
> Sia $f$ *derivabile* ([[Derivata e derivabilità#^12c1df]]).
> Allora ha senso considerare la *funzione derivata*
> $$f': I \longrightarrow \mathbb{R}; x \mapsto f'(x) $$
> Ma quindi si può chiedere se la *funzione derivata* è anch'essa *derivabile*; in tal caso chiamo la *derivata* della *funzione derivata* la *derivata seconda* e la indico con
> $$f'' \text{ oppure } f^{(2)}$$
> Per *induzione* ([[Assiomi di Peano, il principio di induzione#^76b850]]) posso definire la derivata di ordine *$k$-esimo* come il seguente:
> $$\begin{gather}f^{(0)} = f \\ f^{(k+1)} = (f^{(k)})', \forall k \in \mathbb{N} \end{gather}$$

# 2. La classe C di una funzione
#Definizione 
> [!def] Definizione 2.1. (classe C di una funzione reale)
> Sia $f$ *derivabile* e sia la sua *funzione derivata* $f'$ anch'essa *derivabile* ([[Definizione di continuità#^d2f56f]]), allora dico che $f$ è di *classe* $\mathcal{C}^1$;
> $$f \in \mathcal{C}^1 $$
> Generalizzando, se $f$ è *derivabile* fino all'ordine $f^{(k)}$; ovvero
> $$f', f'', \ldots, f^{(k)}$$
> sono tutte derivabili, allora $f$ si dice di *classe* $\mathcal{C}^k$.
> $$f \in \mathcal{C}^k $$
> Inoltre se $f$ è *derivabile* per *qualunque* ordine, allora si dice che $f$ è di classe $\mathcal{C}^\infty$;
> $$f \in \mathcal{C}^\infty $$
^dbae48

# 3. Esempi
#Esempio 
> [!ex] Esempio 3.1. (funzione esponenziale)
> Consideriamo la classica funzione *esponenziale* $e^x$ ([[Funzione esponenziale e Logaritmica]]); se consideriamo la sua *derivata* $(e^x)'$, notiamo che è la stessa.
> Allora per *qualunque* ordine viene derivata, questa rimane la stessa; pertanto $e^x$ è *sempre* derivabile.
> $$e^x \in \mathcal{C}^\infty $$

#Esempio 
> [!ex] Esempio 3.2. (funzione potenza)
> Consideriamo la *funzione potenza* $x^n$ ([[Funzioni di potenza, radice e valore assoluto]]); se consideriamo la sua derivata $(x^n)' = nx^{n-1}$, vediamo che fino ad un certo punto (precisamente all'ordine $n+1$-esimo) questa si annulla; però la funzione *costante* è sempre derivabile.
> Allora anche $x^n \in \mathcal{C}^\infty$.

#Esempio 
> [!ex] Esempio 3.3. (funzione seno)
> Consideriamo adesso la *funzione seno* $\sin x$ ([[Funzioni trigonometriche]]); derivando $\sin x$ fino al quarto ordine vediamo che risulta la stessa funzione. Infatti
> $$\begin{align}&(\sin x)' = \cos x \\\implies &(\cos x)' = -\sin x \\\implies &(-\sin x)' = -\cos x \\\implies &(-\cos x)' = \sin x \\\implies &\ldots \end{align}$$
> Allora $\sin x \in \mathcal{C}^{\infty}$.

#Esempio 
> [!es] Esempio-Esercizio 3.4. (funzione valore assoluto per identità)
> Consideriamo la funzione $f(x) = x \cdot |x|$.
> Si può dimostrare che questa è derivabile fino al *primo ordine* $f'(x)$; però $f'$ non è derivabile. La dimostrazione è stata lasciata al lettore per esercizio.
> Allora $x \cdot |x| \in \mathcal{C}^1$.