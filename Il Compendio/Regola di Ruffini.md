---
data: 2023-12-03
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Regola di Ruffini
tipologia: appunti
stato: "1"
---
*Appunto ad-hoc sulla regola di Ruffini per linearizzare delle equazioni di grande grado*
- - -
# 1. Teorema di Ruffini
#Teorema 
> [!thm] di Ruffini
> (*nota: enunciato preso da Wikipedia*)
> Un polinomio $P(x)$ è divisibile per $(x-a)$ *se e solo* se il resto è nullo e quindi $P(a) = 0$.

^af4d5f

# 2. Proposizioni preliminari
#Teorema 
> [!prp] divisibilità di un polinomio
> (*nota: enunciati presi dal foglio ottavo di M. Gallet*)
> Sia $p$ un polinomio a coefficienti interi di grado $n$, ovvero del tipo
> $$p = a_n x^n + a_{n-1} x^{n-1} + \ldots + a_1 x + a_0; a_i \in \mathbb{Z}, \forall i \in \{0, \ldots, n\}$$
> Allora valgono i seguenti:
> - Un numero $r \in \mathbb{Q}$ si dice *radice di* $p$ se vale che $p(r) = 0$.
> - Possiamo considerare l'insieme di *"candidati"* delle *radici* di $p$ come il seguente:
>   $$R = \{s, t \in \mathbb{Q}: \frac{s}{t}\}$$
>   dove $s, t$ devono essere *primi tra di loro* (ovvero la frazione dev'essere ridotta ai minimi termini) e $s$ è un numero che *divide* $a_0$, invece $t$ un numero che *divide* $a_n$.
> - Dunque per il *teorema di Ruffini* se $r$ è radice per $p$ allora si può scrivere $p$ come
>   $$p = (x-r) \cdot q$$
>   dove $q$ è *un altro polinomio*.
# 3. Regola di Ruffini
#Osservazione 
> [!rmk] regola di Ruffini
> Considerando le proposizioni preliminari appena enunciate, vogliamo trovare $q$ mediante la *regola di Ruffini* (oppure nota come l'*algoritmo della divisione sintetica*).
> Creiamo quindi una *tabella* con $3$ righe e $n$ colonne: poniamo la *"prima riga"* con i coefficienti $a_n$ del polinomio $p$.
> Dopodiché nella *"seconda riga"* a sinistra inseriamo $r$ (ovvero la radice).
> Infine creiamo una *"terza riga vuota"* per mettere i risultati.
> Adesso siamo pronti per eseguire la divisione secondo la *regola di Ruffini*: per il primo termine $a_n$ basta *"portare giù"* questo numero sulla *"terza riga"*; dopodiché moltiplichiamo questo numero per $r$ (ovvero il numero a sinistra) e lo poniamo sulla *"seconda riga"* della *"prossima colonna"*. 
> Successivamente si passa al prossimo termine $a_{n-1}$; lo aggiungiamo per il numero *"sottostante"* (ovvero il numero considerato nel passo precedente) e lo mettiamo sulla *"terza riga"*. Ripetiamo ricorsivamente questa procedura finché arriviamo al termine noto $a_0$.
> Se tutto è andato bene, allora $a_0$ dovrebbe risultare $0$.
> Alla fine si ottiene una *"catena di coefficienti"* con $n$ numeri (incluso lo $0$!).
> Consideriamo alla $r$ come il polinomio di $n$ grado con i coefficienti appena ottenuti. Ma l'ultimo coefficiente $a_0$ si annulla, quindi in realtà $r$ sarebbe di $n-1$ grado.

**FIGURA 3.1.** (*Idea grafica*)
![[Pasted image 20231203123907.png]]
## Canzone rap sulla regola di Ruffini
> [!rmk] Osservazione 3.2.
> Si condivide (per pura goliardia) la canzone rap sulla regola di Ruffini realizzata da Lorenzo Baglioni.
> https://www.youtube.com/watch?v=kePx7biRTR4
# 4. Utilità
Questo è utile per linearizzare polinomi di grado $n$; ci servirà per risolvere dei *polinomi caratteristici* della applicazioni lineari ([[Polinomio Caratteristico di una Applicazione Lineare]]).