---
data: 2023-10-25
corso: "[[Analisi Matematica I]]"
argomento: Esercizi sulle funzioni
tipologia: appunti
stato: "0"
---
*Alcuni esercizi misti sulle funzioni*
- - -
# 0. Info
Questo appunto contiene degli esercizi misti sull'argomento delle [[Funzioni]]. Notare che alcuni esercizi potrebbe richiedere già di essere preparati nell'argomento delle *funzioni di variabile reale*, ovvero [[Funzioni di potenza, radice e valore assoluto]] e/o [[Funzioni trigonometriche]].

*Dal 29.11.2023 in poi questa scheda conterrà anche degli esercizi sullo studio delle funzioni, sulla dimostrazione di certe proprietà di alcune funzioni partendo da certe proprietà ipotetiche.*
Pertanto gli esercizi richiederanno anche la conoscenza dei seguenti macroargomenti:
- La Continuità delle Funzioni
- Calcolo Differenziale
# 1. TIPOLOGIA A. DEFINIZIONI MISTE
Qui si propone degli esercizi misti sulle funzioni svolte durante le lezioni dell'A.A. 2023-2024, in cui basta conoscere delle *definizioni*.

**ESERCIZIO 1.a.** Sia $$f: \mathbb{R} \longrightarrow \mathbb{R}; x \mapsto x^2+x-1$$Si determini: $$\begin{gather}f(0), \{f(n), n \in\ \mathbb{N}\}, f([1,2]), f(3x)\\ f \circ f, (f(x))^2, f(x^2), f^{\leftarrow}([2,4])\end{gather}$$Con il grafico della funzione da disegnare.

**ESERCIZIO 1.b.** Sia $$\sin: \mathbb{R} \longrightarrow [-1, 1]$$Determinare $\sin([0, \frac{3}{4}\pi])$.

**ESERCIZIO 1.c.** Data la funzione $\arcsin$, trovare $$\arcsin^{\leftarrow}([0, \frac{1}{2}])$$

**ESERCIZIO 1.d.** Data la funzione $$f(x) = \frac{|x+1|}{x}$$Disegnare $f(x)$ e determinare $$f^{\leftarrow}(]0, +\infty[)$$
# 2. TIPOLOGIA B. STUDIO DI FUNZIONE
*Lezione 26*
#Esercizio 
> [!es] Esercizio B1.
> Si disegni il grafico della funzione
> $$f(x)=\arctan x + \arctan \frac{1}{x}$$
> Studiando il suo dominio, segno, limiti, asintoti e la prima derivata.

#Esercizio 
> [!es] Esercizio B2.
> Si disegni il grafico della funzione
> $$f(x) = \frac{e^{x+1}}{x}$$
> Studiando il suo dominio, segno, i suoi limiti, e la sua derivata prima.
> Inoltre, si dica al variare di $a \in \mathbb{R}$, quante sono le *soluzioni* di
> $$e^{x+1}=ax$$

#Esercizio 
> [!es] Esercizio B3.
> Si disegni il grafico della funzione
> $$f(x) = \frac{x^2+4}{2x-3}$$
> Studiando ciò che è necessario, *evidenziando* i suoi *asintoti obliqui*.

*Lezione 28*
#Esercizio 
> [!es] Esercizio B4.
> Si studi la funzione
> $$f(x) = xe^{-(x+1)}$$
> determinando il suo *dominio*, *segno*, *limiti agli estremi*, *eventuali asintoti*, *prima derivata*, *crescenza/decrescenza*, *eventuali massimi e/o minimi*, *derivata seconda*, *concavità e convessità* ed *eventuali punti di flessi*.

#Esercizio 
> [!es] Esercizio B5.
> Si studi la funzione
> $$f(x) = \ln(x+1) - \arctan(x)$$
> determinando il suo *dominio*, *limiti agli estremi*, *eventuali asintoti*, *derivata prima e il suo segno* e *derivata seconda*.
# 3. TIPOLOGIA C. DIMOSTRAZIONE DELLE PROPRIETA'
*Lezione 22*
#Esercizio 
> [!es] Esercizio C1.
> Sia $f: \mathbb{R} \longrightarrow \mathbb{R}$ una funzione *continua*, con le seguenti proprietà:
> $$f(0)=0; \lim_{x \to +\infty}f(x) = \lim_{x \to -\infty}f(x) = +\infty $$
> Dimostrare che $f$ ha *minimo assoluto*.

#Esercizio 
> [!es] Esercizio C2.
> Sia $f: \mathbb{R} \longrightarrow \mathbb{R}$ una funzione *continua*.
> Supponendo che $f(-1)=1, f(0)=-1, f(1)=1$, provare che $f(x)=0$ ha *almeno* due *soluzioni*.

#Esercizio 
> [!es] Esercizio C3.
> Sia $f: \mathbb{R} \longrightarrow \mathbb{R}$ *continua*.
> Provare che l'insieme delle soluzioni $f(x)=0$, ovvero $f^{\leftarrow}(\{0\})$ è un *insieme chiuso*.

*Lezione 26*
#Esercizio 
> [!es] Esercizio C4.
> Sia $f: \mathbb{R} \longrightarrow \mathbb{R}$ una funzione *derivabile*.
> Supponendo che $f(0)=0, f(1)=1, f(2)=2$, provare la seguente:
> $$\exists \xi_1, \xi_2: \xi_1 \neq \xi_2, f'(\xi_1) = f'(\xi_2) = 1$$

#Esercizio 
> [!es] Esercizio C5.
> Sia $f: \mathbb{R} \longrightarrow \mathbb{R}$ una funzione *derivabile*.
> Sia $\forall x \in \mathbb{R}, f'(x) > \frac{1}{2}$.
> Provare che
> $$\lim_{x \to +\infty}f(x) = +\infty$$
> e che
> $$\lim_{x \to -\infty}f(x) = -\infty$$

#Esercizio 
> [!es] Esercizio C6.
> Sia $f: [-1, 1] \longrightarrow \mathbb{R}$ *continua* su $[-1, 1]$ e *derivabile* su $(-1, 1)$.
> Sia $f(-1) = 1, f(0) = 0, f(1) = \frac{1}{2}$.
> Dimostrare le seguenti tre proposizioni:
> $$\begin{align}1) & \ [0,1] \subseteq f([-1, 1]) \\ 2) & \ \exists \xi_1 \in (-1, 1): f'(\xi_1) = 0 \\ 3) & \ \exists \xi_2 \in (-1, 1): f'(\xi_2) = -\frac{1}{4}\end{align}$$
> 

*Lezione 31*
#Esercizio 
> [!es] Esercizio C7.
> Sia $F$ una funzione *lipschitziana* ([[Funzione Integrale#^2635f6]]), ovvero che vale la seguente condizione:
> $$\exists M>0: \forall x_1, x_2 \in E, |F(x_2)-F(x_1)| \leq M|x_2 - x_1|$$
> Dimostrare che $F$ è *continua*.
^488ad5

