---
data: 2023-11-16
corso: "[[Analisi Matematica I]]"
argomento: Continuità delle funzioni varie
tipologia: appunti
stato: "1"
---
*Vari teoremi sulla continuità di certi tipi di funzioni: funzioni monotone, iniettive, surgettive, bigettive (dunque invertibili).*
- - -
# 1. Funzione monotona e suriettiva
#Teorema 
> [!thm] continuità della funzione strettamente monotona e suriettiva
> Sia $f: I \longrightarrow J$, $I, J$ degli intervalli, $f$ *strettamente monotona* e *suriettiva* ([[Funzioni#^6068af]], [[Funzioni#^3fb408]]).
> Allora $f$ è *continua*.

#Dimostrazione 
**DIMOSTRAZIONE** (*Teorema 1.1.*)
*Nota: questa è solo una idea della dimostrazione*
Prendo un punto $x_0 \in I$, inoltre supponiamo che $x_0$ sia un *punto interno* per $I$ ([[Punti interni, esterni e di frontiera#^c78831]]).
Allora abbiamo la situazione in *figura 1.1.*: da qui posso evincere che esistono i *limiti destri e sinistri* di $x \to x_0^{\pm}$ ([[Definizione di Limite di funzione#^406c13]]) e che
$$ \lim_{x \to x_0^-}f(x) \leq f(x_0) \leq \lim_{x \to x_0^+}f(x)$$(inoltre questa proposizione è direttamente ricavata da [[Teoremi sui Limiti di Funzione#^165965]])
Supponendo *per assurdo* che il limite destro e sinistro sono diversi (dandoci così una discontinuità del primo ordine), avremmo una specie di *"buco"* nella funzione immagine $J$; tuttavia è assurdo in quanto contraddirebbe con la supposizione iniziale di $f$ *suriettiva*.
Di conseguenza abbiamo l'unica possibilità
$$ \lim_{x \to x_0^-}f(x) = f(x_0)= \lim_{x \to x_0^+}f(x) \implies f \text{ continua} \ \blacksquare$$
**FIGURA 1.1.** (*Idea della situazione*)
![[Pasted image 20231220200231.png]]
## Funzione strettamente crescente e suriettiva
#Corollario 
> [!cor] continuità della funzione strettamente crescente e suriettiva
> Sia $f: I \longrightarrow J$, $I,J$ *intervalli*, $f$ *strettamente crescente* e *suriettiva*.
> Allora $f, f^{-1}$ sono *continue*.

#Esempio 
> [!exm] Funzione esponenziale e logaritmica
> Questo teorema è utile per poter dimostrare la continuità di certe funzioni: infatti ad esempio sappiamo che $\exp$ è *continua*, *strettamente crescente* e *suriettiva* per $]0, +\infty[$: di conseguenza $\exp^{-1} = \log$ è anch'essa *continua*.
# 2. Funzione iniettiva e continua
#Teorema 
> [!thm] monotonia della funzione iniettiva e continua
> Sia $f: I \longrightarrow J$ una funzione *continua* e *iniettiva*.
> Allora $f$ è *strettamente crescente*.

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 2.1.*
*Nota: questa è solo una idea della dimostrazione*
Dimostriamo la *contronominale* della tesi; ovvero supponendo che $f$ sia *non* strettamente crescente dobbiamo dimostrare che $f$ non è *iniettiva*.
Allora abbiamo la situazione in *figura 2.1.*: ci possono essere tre (o più) punti in cui la funzione inizia a *"cambiare direzione"*, cambiando dalla tendenza di crescere a quella di decrescere (e viceversa).
Per il *teorema dei valori intermedi* ([[Teoremi sulle funzioni continue#^1c6f7c]]), sappiamo che ci sono almeno *due* soluzioni $\xi_1, \xi_2$ tali che per un valore fissato $f(x_0) \in J$ si ha $f(x) = f(x_0)$.
Infatti possiamo prendere un *"ramo"* crescente e un ramo *"decrescente"* e applicare il *teorema dei valori intermedi* a ciascuno.
Se esistono allora due numeri che, per una funzione, ci danno lo stesso numero, allora $f$ non è *iniettiva*. $\blacksquare$

**FIGURA 2.1.** (*Idea della situazione*)
![[Pasted image 20231220200947.png]]
# Funzione continua e invertibile
#Corollario 
> [!cor] continuità dell'inversa della funzione continua e invertibile
> Sia $f: I \longrightarrow J$ *continua* e *invertibile*.
> Allora $f^{-1}$ è *continua*.

