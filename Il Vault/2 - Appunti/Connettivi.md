---
data: 2023-09-25
corso: "[[Analisi Matematica I]]"
argomento: Connettivi
tipologia: appunti
---
*Connettivi: cosa sono, quali useremo...*
- - -
# Connettivi
Il connettivo, nella logica formale, viene usato per comporre una nuova [[Proposizioni]] partendo da quelle già esistenti. 
Un connettivo viene caratterizzato da una tabella di verità, che descrive ogni valore di ogni proposizione.
Studieremo i seguenti connettivi: la [[#^negazione]], la [[#^congiunzione]], la [[#^disgiunzione]], l'[[#^implicazione]] e la [[#^doppiaimplicazione]]

## Negazione
^negazione
La **negazione** è l'unico connettivo **unario** (che prende SOLO una proposizione) di cui studieremo. 
Viene indicata con $\neg q$, e viene letta come *"non q"*
La sua tavola della verità è la seguente:

| $p$ | $\neg p$ |
| -- | -- |
| $V$ | $F$ |
| $F$ | $V$ | 
## Congiunzione
^congiunzione
La congiunzione tra due proposizioni viene indicata con $p \wedge q$  e si legge come *"p e q"*
La tavola della verità associata è la seguente:

| $p$ | $q$ | $p \wedge q$ | 
| :-: | :-: | :-: | 
| V | V | V |
| V | F | F |
| F | V | F | 
| F | F | F |
## Disgiunzione
^disgiunzione
La disgiunzione di due proposizioni viene indicata con $p \vee q$ e si legge come *"p oppure q"*. Tuttavia, nella lingua italiana vi è un'ambiguità nell'uso della congiunzione "o": può avere due significati diversi, che sono quella esclusiva (in latino *aut*) e quella inclusiva (in latino *vel*).
Nella matematica si preferisce usare $\vee$ per indicare la disgiunzione *vel*, ma esiste anche $\veebar$ per indicare quella *aut*.
La tavola della verità di $p \vee q$ è la seguente.

| $p$ | $q$ | $p \vee q$ | 
| :-: | :-: | :-: | 
| V | V | V |
| V | F | V |
| F | V | V |
| F | F | F |
### Osservazione 1.
Quando due tabelle della verità, associate ad una proposizione l'una, danno gli stessi valori della verità, si dice che queste proposizioni sono equivalenti.
**ESEMPIO 1.** Ricavare le tavole della verità di $\neg (p \wedge q)$ e di $\neg p \vee \neg q$.
Si ricava la tavola della prima proposizione, ovvero $\neg (p \wedge q)$.

| $p$ | $q$ | $p \wedge q$ | $\neg(p \wedge q)$ |  
| :-: | :-: | :-: | :-: |
| V | V | V | F |
| V | F | F | V | 
| F | V | F | V |
| F | F | F | V |
Ora l'altra tavola. ($\neg p \vee \neg q$)

| $p$ | $q$ | $\neg p$ | $\neg q$ | $\neg p \vee \neg q$ |   
| :-: | :-: | :-: | :-: | :-: |
| V | V | F | F | F | 
| V | F | F | V | V |
| F | V | V | F | V |
| F | F | V | V | V |
Si nota che $\neg (p \wedge q)$ e $\neg p \vee \neg q$ ci danno i stessi valori, pertanto  $\neg (p \wedge q) = \neg p \vee \neg q$. (Leggi di De Morgan)
Lo stesso discorso vale per $\neg (p \vee q) = \neg p \wedge \neg q$.
## Implicazione materiale
^implicazione
L'implicazione viene indicata come $p \implies q$ e si legge come *p implica q*.
Prima di poter considerare la sua tavola della verità associata, è necessario fare delle considerazioni di natura linguistica sull'implicazione. 
Prendiamo le proposizioni $p:$Piove e $q:$Prendo l'ombrello: se l'implicazione $p \implies q$ fosse vera, allora significherebbe che se piove allora prendo l'ombrello: pertanto è vera per $p = V$ e $q=V$. 
Ora vediamo di negare l'implicazione $p \implies q$. Se non è vero che se piove, allora prendo l'ombrello, allora ciò vorrebbe dire che non è vero che piove e prendo l'ombrello allo stesso tempo: quindi, in un certo senso, $\neg(p \implies q)$ equivale a $\neg p \wedge q$.
Pertanto se si nega ambe le parti, $\neg \neg(p \implies q) = p \implies q = \neg (\neg p \wedge q) = Legge\space Di \space De \space Morgan =p\vee \neg q$
Si conclude che $(p \implies q) = (p \wedge \neg q)$
Quindi la tavola della verità associata è la seguente.

| $p$ | $q$ | $p \implies q$ | 
| :-: | :-: | :-: | 
| V | V | V |
| V | F | F |
| F | V | V |
| F | F | V |
## Doppia implicazione
^doppiaimplicazione
La doppia implicazione viene indicata come $p \iff q$ e si legge come *"p se e solo se q"* oppure come *"p è equivalente a q"*.
La sua tavola associata è la seguente.

| $p$ | $q$ | $p \iff q$ | 
| :-: | :-: | :-: | 
| V | V | V |
| V | F | F |
| F | V | F |
| F | F | V |
**ESEMPIO 1.** Consideriamo le proposizioni p e q:
- p: in un triangolo 2 lati sono uguali
- q: in un triangolo 2 angoli sono uguali
Nel caso di un triangolo isoscele, $p \iff q$ in quanto sono necessarie entrambi le condizioni.

### Osservazione 2.
Si osserva che la doppia implicazione non è che altro la congiunzione di due implicazioni, ovvero $(p \implies q) \wedge (q \implies p)$. Ciò diventa utile per dimostrare teoremi, in quanto ci permette di dividere il problema in due parti e si può verificare le due implicazioni singolarmente.


