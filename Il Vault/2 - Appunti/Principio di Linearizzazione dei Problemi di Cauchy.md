---
data: 2024-05-11
corso:
  - "[[Analisi Matematica II]]"
argomento: Principio di Linearizzazione dei Problemi di Cauchy
tipologia: appunti
stato: "1"
capitolo: Equazioni Differenziali
---
- - -
*Motivazione per le equazioni differenziali lineari: principio di linearizzazione dei problemi di Cauchy. Espansione della soluzione con Taylor al secondo grado.*
- - -
# 0. Voci correlate
- [[Formula di Taylor]]
- [[Formula di Taylor del Secondo Ordine]]
# 1. Principio di Linearizzazione
**IDEA.** Supponiamo di avere $y'=f(x,y)$ equazione differenziale. Possiamo considerare il suo *approssimante lineare* $\bar{f} \in \mathcal{L}$ (ovvero è una funzione *lineare*, [[Definizione di Applicazione Lineare#^9b39f9]]). In particolare voglio che questa si approssimi verso $f$, con un comportamento del tipo
$$
\bar{f}\to f
$$
In particolare faremo questa *linearizzazione* con l'*espansione di Taylor* ([[Formula di Taylor]])

#Osservazione 
> [!rmk] principio di linearizzazione
> Sia $(PC)$ il *principio di Cauchy* definito come
> $$
> (PC):\left\{\begin{align}
> & y'(x)=f(x,y(x)) \\
> & y(x_0)=y_0
> \end{align}\right.
> $$
> con $f \in \mathcal{C}^1(A)$, con $A$ aperto. Adesso prendiamo il *problema di Cauchy linearizzato* definito come
> $$
> (\overline{PC}):\left\{\begin{align}
> & z'(x)=\bar f(x,y(x)) \\
> & z(x_0)=y_0
> \end{align}\right.
> $$
> Allora abbiamo $\bar{f}(x,y)$ definito mediante l'*espansione di Taylor* al *primo ordine* ([[Gradiente di Campi Scalari#^e0195b|1]]), con
> $$
> \bar{f}(x,y)=f(x_0,y_0)+f_x(x_0,y_0)(x-x_0)+f_y(x_0,y_0)(y-y_0)
> $$
> Lo riscriviamo in termini di $\alpha y, \beta x, \gamma$:
> $$
> \bar{f}(x,y)=\alpha y+\beta x+ \gamma
> $$
> Dunque abbiamo 
> $$
> (\overline{PC}):\left\{\begin{align}
> & z'(x)=\bar f(x,y(x))=\alpha y +\beta x+\gamma \\
> & z(x_0)=y_0
> \end{align}\right.
> $$
> Questa approssimazione funzione per valori vicini, $(x,y) \to (x_0,y_0)$.

#Osservazione 
> [!rmk] stima dell'errore
> Possiamo dare pure una *stima dell'errore* di quest'approssimazione. Infatti possiamo considerare le *espansioni di Taylor* di $y,z$ al *secondo ordine* ([[Formula di Taylor del Secondo Ordine#^efc16b|1]]). 
> $$
> \left\{
> \begin{align}
> & y(x)=p_{2,x_0}(x)+\varepsilon(x)|x-x_0|^2 \\ & 
> z(x)=p_{2,x_0}(x)+\eta(x)|x-x_0|^2
> \end{align}
> \right.
> $$
> Abbiamo la stima
> $$
> \left|y(x)-z(x)\right|=|\varepsilon(x)-\eta(x)||x-x_0|^2
> $$
> Notiamo che questa stima è un *o-piccolo* di $|x-x_0|^2$ ([[Introduzione al Calcolo Differenziale in più variabili#^afd891|2]]), ovvero questa decresce infinitamente con $x \to x_0$

# 2. Esempio di Linearizzazione
#Esempio 
> [!exm] esempio di linearizzazione
> Supponiamo di avere il problema di Cauchy definito come
> $$
> (PC):\left\{\begin{align}
> & y'(x)=e^{y(x)} \\
> & y(0)=0
> \end{align}\right.
> $$
> Possiamo linearizzare col principio di linearizzazione appena osservato, abbiamo dunque
> $$
> e^{y(x)}\leadsto e^{y_0}+y = 1+y
> $$
> Dunque abbiamo il problema linearizzato come segue
> $$
> (\overline{PC}):\left\{\begin{align}
> & z'(x)=1+z \\
> & z(0)=0
> \end{align}\right.
> $$
> Vedremo che un problema del genere sarà *banalissimo da risolvere*, dandoci la soluzione esplicita
> $$
> z(x)=e^{x}-1
> $$
> Notiamo che $(PC)$ rimarrebbe comunque *risolvibile* col metodo delle *variabili separate*, dandoci la soluzione
> $$
> y(x)=-\ln(1-x)
> $$

**FIGURA 2.1.** (*Stima tra le funzioni*)
![[Pasted image 20240511195912.png|500]]
