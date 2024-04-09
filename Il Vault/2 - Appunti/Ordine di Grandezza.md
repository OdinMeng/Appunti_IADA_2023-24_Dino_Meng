---
data: 2024-03-04
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Ordine di Grandezza
tipologia: appunti
stato: "1"
capitolo: Introduzione alla Fisica
---
- - -
*Definizione, scopo e notazione degli ordini di grandezza. Problemi alla Fermi.*
- - -
# 1. Definizione e scopo degli Ordini di Grandezza
#Definizione 
> [!def] ordine di grandezza
> Prendiamo un *numero* $n$. L'*ordine di grandezza* di $n$ è la potenza di $10$ più vicina.

#Esempio 
> [!exm] notazione scientifica
> Prendiamo ad esempio il numero $6\ 317 \ 000 \text{ km}$. Con la definizione appena enunciata, l'ordine di grandezza di questo numero è $10^6$ e possiamo quindi riscriverla come
> $$
> 6,317 \times 10^6 \text{ km}
> $$
> Questo modo generale di scrivere i numeri si dice *notazione scientifica*

#Osservazione 
> [!rmk] lo scopo degli ordini di grandezza
> Lo scopo degli ordini di grandezza è quella di poter fare *calcoli veloci approssimativi*; basta infatti prendere un numero, il suo numero di grandezza e da lì sarà sufficiente fare moltiplicazioni tra potenze di $10$.
>
> Un caso particolare di queste applicazioni sono i c.d. *problemi "alla Fermi"* (Fermi fu un fisico noto), dove si vuole calcolare *velocemente* una quantità approssimativa usando questi principi; altrimenti bisognerebbe avere molti dati.
> Molto stranamente, questo metodo è in grado di poter darci una *buona* approssimazione per la quantità desiderata: infatti, il fisico E. Fermi (da cui traiamo il titolo della tipologia del problema) calcolò l'energia rilasciata da un'esplosione nucleare con una buona approssimazione, lasciando dei pezzetti di carta e considerando la forza della spinta subiti da questi straccetti di carta!

# 2. Esempi di Problemi alla Fermi
#Esempio 
> [!exm] il pacemaker
> Un ingegnere deve fabbricare un pacemaker. Quanti battiti deve poter poter fare questo pacemaker, assumendo che non malfunzioni?
> 
> Prendiamo il seguente approccio: una prima osservazione è quella che mediamente si fa un *battito al secondo*.
> Dopodiché prendiamo la durata della vita media come 100 anni.
> Infine consideriamo che in un anno ci sono *circa* $\pi \cdot 10^7$ secondi.
> Quindi, facendo le somme abbiamo
> $$
> 1 \cdot 100 \cdot \pi \cdot 10^7 \approx 3 \cdot 10^9 \text{ battiti}
> $$

#Esempio 
> [!exm] i capelli
> Quanti capelli si ha sulla testa?
> 
> *Nota: questo è un mio svolgimento di questo esercizio*
> Prendiamo preliminarmente in considerazione la superficie di una semisfera, ovvero
> $$
> S_c = 2 \pi r ^2
> $$
> Prendiamo $\bar r  = 10 \text{ cm}$ (ovvero il raggio medio di una testa sarebbe di dieci centimetri).
> Adesso consideriamo la densità media dei capelli in un centimetro quadrato; prendiamo $\bar \rho = 100 \text{ capelli/cm}^2$ 
> Facendo i conti, abbiamo
> $$
> 2 \cdot \pi \cdot 10^2 \cdot 100 \approx 6 \cdot 10^4 \text{ capelli}
> $$

