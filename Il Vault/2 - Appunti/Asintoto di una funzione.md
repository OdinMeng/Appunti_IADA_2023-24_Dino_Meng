---
data: 2023-11-27
corso: "[[Analisi Matematica I]]"
argomento: Asintoto di una funzione
tipologia: appunti
stato: "1"
---
*Definizione di asintoto di una funzione.*
- - -
# 0. Argomenti propedeutici
Per capire il *concetto* di *asintoto* di una funzione è necessario aver presente prima i seguenti argomenti:
- Funzione a variabile reale: [[Funzioni#^dcc989]]
- Limite di funzione: [[Definizione di Limite di funzione]]
# 1. Definizione di asintoto
#Definizione 
> [!def] asintoto orizzontale
> Sia $f$ una *funzione a variabile reale*.
> Se esiste il *limite* 
> $$\lim_{x \to \pm \infty}f(x) = c \in \mathbb{R} $$
> Allora $y = c \in \mathbb{R}$ è un *asintoto orizzontale* a $\pm \infty$.

**FIGURA 1.1.** (*Idea grafica*)
![[Pasted image 20231127220412.png]]

#Definizione 
> [!def] asintoto verticale
> Se invece esiste il limite
> $$\lim_{x \to x_0^{\pm}} f(x) = \pm \infty $$
> allora $x = x_0$ è un *asintoto verticale*.

**FIGURA 1.2.** (*Idea grafica*)
![[Pasted image 20231127220530.png]]

#Definizione 
> [!def] asintoto obliquo
> Se invece $\exists m, q \in \mathbb{R}$ tali che
> $$\lim_{x \to \pm \infty} f(x) - (mx + q) = 0 $$
> Allora la retta
> $$r: y = mx+q $$
> è *asintoto obliquo* a $\pm \infty$.
> Ovvero graficamente si vedrà che *"a lungo andare verso l'infinito la funzione segue la traiettoria della retta"*.

^74920d

**FIGURA 1.3.** (*Idea grafica*)
![[Pasted image 20231127220721.png]]
# 2. Tecnica per "testare" asintoti obliqui
#Proposizione 
> [!prp] tecnica per "trovare" asintoti obliqui
> Se abbiamo una funzione che presenta limite della forma
> $$\lim_{x \to + \infty}f(x) = + \infty$$
> Allora sarà opportuno provare a vedere se questa presenta un *asintoto obliquo*.
> *"L'algoritmo"* per trovare questo consiste in due passi:
> 1. Vedere se esiste il seguente limite; in tal caso calcolarlo e chiamare il tale limite $m$.
>    $$ \lim_{x \to +\infty}\frac{f(x)}{x} = m \in \mathbb{R}$$
> 2. Se il primo step è andato a buon fine, allora vedere se esiste finito il seguente limite; in tal caso calcolarlo e chiamarlo $q$.
>    $$\lim_{x \to +\infty}f(x)-mx = q \in \mathbb{R} $$
> Se è tutto andato a buon fine, allora abbiamo l'*asintoto obliquo*
> $$ y = mx + q$$

^8bab7e

