---
data: 2023-10-03
corso: "[[Analisi Matematica I]]"
argomento: Coefficiente Binomiale
tipologia: appunti
stato: "1"
---
*Coefficiente binomiale come strumento per risolvere un problema del calcolo combinatorio; regole e teoremi sul coefficiente binomiale; costruzione del triangolo di Tartaglia; teorema di Newton (o del binomio) con dimostrazione. Applicazioni del teorema.*
- - -
# 1. Coefficiente Binomiale
**DEF 1.** Dai risultati del [[Problemi del Calcolo Combinatorio]], sappiamo che $$C^n_k = \binom{n}{k} = \frac{n!}{k!(n-k)!}$$
# 2. Proprietà del coefficiente binomiale
Enunciamo le seguenti proprietà del *coefficiente binomiale* $C^n_k$:
1. $$\binom{0}{0} = 1 $$
2. $$\begin{align}\forall n, & \binom{n}{0}=1 \\ &\binom{n}{n}=1 \end{align} $$
3. **REGOLA DI STIFEL.** Sia $1\leq k \leq (n-1)$, $$\binom{n}{k} = \binom{n-1}{k-1} + \binom{n-1}{k}$$
**DIMOSTRAZIONE FORMALE.**
	Per definizione, $$\begin{align}\binom{n-1}{k-1} + \binom{n-1}{k} &= \binom{n}{m} \\ \frac{(n-1)!}{(k-1)!(n-k)!} + \frac{(n-1)!}{(k)!(n-k-1)!}&=\frac{n!}{k!(n-k)!} \\ (n-1)!(\frac{1}{(k-1)!(n-k)!}+\frac{1}{k!(n-k-1)!})&=\frac{n!}{k!(n-k)!} \end{align}$$
	Osservare la proprietà che consegue dalla *definizione ricorrente del fattoriale* ([[Assiomi di Peano, il principio di induzione]]): $$\forall n, (n+1)! = n!(n+1)$$da ciò implica che $$n! = \frac{(n+1)!}{(n+1)}$$
	Quindi secondo questa logica, si può dire le seguenti: $$(k-1)! = \frac{k!}{k};\ (n-k-1)! = \frac{(n-k)!}{(n-k)};\ n! = (n-1)!n$$
	Allora $$\begin{align}(n-1)!(\frac{1}{(k-1)!(n-k)!}+\frac{1}{k!(n-k-1)!})&=\frac{n!}{k!(n-k)!} \\ (n-1)!(\frac{k}{k!(n-k)!}+\frac{n-k}{k!(n-k)!}) &=(n-1)\frac{n}{k!(n-k)!} \\ \frac{k+n-k}{k!(n-k)!}&=\frac{n}{k!(n-k)!} \\ \frac{n}{k!(n-k)!}&=\frac{n}{k!(n-k)!} \text{ OK } \blacksquare \end{align}$$
**DIMOSTRAZIONE SENZA CALCOLI/TEORICA.** 
	Alternativamente, si potrebbe pensare la *regola di Stifel* nel seguente modo:
	"Voglio contare le contare i sottoinsiemi con $k$ elementi dell'insieme $A$ (ove $|A| = n$); quindi voglio $C^n_k$.
	Ora distinguiamo uno degli elementi di $A$ con un *contrassegno particolare*, come il colore *rosso*; adesso gli insiemi di $k$ elementi si dividono in due.
	Ovvero, l'insieme dei sottoinsiemi che *contengono l'elemento rosso* e l'insieme dei sottoinsiemi che *non contengono l'elemento rosso*.
	Consideriamo l'insieme di *tutti i sottoinsiemi che contengono l'elemento speciale*: devo quindi obbligatoriamente considerare *l'elemento* rosso, tirandolo fuori. Ho quindi da $n$ elementi ne posso scegliere solo $n-1$, in quanto una è stata già scelta, e posso scegliere solo $k-1$ elementi visto che il primo elemento (ovvero il *rosso*) è stato già obbligatoriamente scelto.
	Consideriamo invece l'altro insieme di *tutti i sottoinsiemi che NON contengono l'elemento contrassegnato*: in questo caso si tratta semplicemente di *escludere* l'elemento rosso dalle scelte possibili, dandoci solo $n-1$ scelte su $k$. 
	Pertanto $$\binom{n}{k} = \binom{n-1}{k-1}+\binom{n-1}{k}$$
# 3. Costruzione del triangolo di Tartaglia
Enunciamo di nuovo le 3 regole sopra: $$\begin{align}&1. \ \binom{0}{0}\\&2.\ \binom{n}{0} = \binom{n}{n} = 1 \\ &3. \ \binom{n-1}{k-1} + \binom{n-1}{k} = \binom{n}{k} \end{align}$$
Da queste tre proprietà possiamo rappresentare i *coefficienti binomiali* tramite il c.d. *triangolo di Tartaglia*
## 3.1. Triangolo di Tartaglia
Disponiamo tutti i *coefficienti binomiali* $\binom{x}{y}$, dove la *"colonna"* (a partire dall'alto) rappresenta il numero $x$ e dove la *"riga"* (a partire da sx.) rappresenta il numero $y$. Ad ogni riga rappresentiamo tutti i *coefficienti binomiali* $\binom{x}{y}$ finché $x$ raggiunge $y$ (ovvero $x=y$) $$\begin{align} &\binom{0}{0} \\ &\binom{1}{0} \binom{1}{1} \\ & \binom{2}{0}\binom{2}{1}\binom{2}{2}\\&\binom{3}{0}\binom{3}{1}\binom{3}{2}\binom{3}{3} \\ &\ldots \\ &\binom{x}{0}\binom{x}{1} \ldots\binom{x}{x-1}\binom{x}{x}\end{align}$$
Ora, calcolando tutti i binomi (ricorrendo all'ausilio delle **proprietà del coefficiente binomiale**), otteniamo il seguente triangolo: $$\begin{align} &1 \\ &1\ 1 \\ &1 \ 2 \ 1 \\ &1 \ 3 \ 3 \ 1\end{align}$$Facciamo le seguenti osservazioni: 
**OSS 3.1.1.** Alle *"estremità"* del triangolo risulta sempre il numero $1$, in quanto seconda la **proprietà 2.**, $\forall x, \binom{x}{x} = \binom{x}{0} = 1$
**OSS 3.1.2.** Se sono arrivato alla riga $x$, posso ottenere facilmente tutti gli elementi della prossima riga $x+1$; infatti $\binom{n-1}{k-1} + \binom{n-1}{k} = \binom{n}{k}$. Facendo un'interpretazione "geometrica" si può dire che se sono alla riga $x+1$, allora ottengo l'elemento di questa riga sulla colonna $k$ sommando degli elementi che già conosciamo prima; ovvero $\binom{n-1}{k-1}, \binom{n-1}{k}$. 
Questi sono gli elementi che stanno al di "sopra" e "sopra e sinistra" dell'elemento che vogliamo conoscere.
**ESEMPIO 3.1.2.1.** Per esempio ho $$\begin{align} &1 \\ &1\ 1 \\ &1 \ 2 \ 1 \\ &1 \ 3 \ 3 \ 1\end{align}$$e voglio ottenere gli elementi della riga $4$; in questo caso metto alle "estremità" i numeri $1$ (**OSS 3.1.1.**), poi per calcolare $\binom{4}{x}$ (ovviamente $x \leq 4$) sommo l'elemento che sta sopra con quello che sta sopra e a sinistra. Quindi otteniamo $$1 \ 4 \  6 \ 4 \ 1$$
**OSS. 3.1.3.** Il matematico *B. Pascal* nota il seguente nel suo trattato "Traité du triangle arithmétique": che se prendiamo una riga pari $2n$, allora il numero *"centrale"* della riga è uguale alla sommatoria di tutti i quadrati degli elementi della riga $n$.
Ovvero $$\forall n \in \mathbb{N}, \binom{2n}{n} = \sum^n_{j=0}\binom{n}{j}^2 $$
**ESEMPIO 3.1.3.1.** Prendiamo la riga $8$, $$1\ 8 \ 28 \ 56 \ 70 \ 56 \ 28 \ 8 \ 1 $$ ove l'elemento "centrale" è individuato con $70 = \binom{8}{4}$ e la riga $4$, $$1 \ 4 \ 6 \ 4 \ 1$$Ora vediamo di sommare tutti gli elementi al quadrato:$$1^2+4^2+6^2+4^2+1^2 = 1+16+36+16+1=70 $$
# 4. TEOREMA DEL BINOMIO (o di Newton)
Il *triangolo di Tartaglia* è una costruzione matematica molto importante, in quanto essa può essere sfruttata per sviluppare la potenza di un binomio in $n$ grazie al *teorema del Binomio (o di Newton)*
**TEOREMA 1.** Siano $a, b \in \mathbb{R}$ (volendo anche in $\mathbb{C}$), sia $n \in \mathbb{N}, n \geq 1$, allora $$(a+b)^n = \sum^n_{j=0}\binom{n}{j}a^{n-j}b^{n}$$
**DIM.** Si dimostra questo teorema per [induzione](Assiomi%20di%20Peano,%20il%20principio%20di%20induzione).
	1. Verificare che è vera per $P(1)$: $$(a+b)^1 = \sum_{j=0}^1\binom{n}{j}a^{n-j}b^{j} \iff a+b =\binom{1}{0}a^1b^0+\binom{1}{1}a^0 b^1 \text{ OK}$$
	2. Verificare che, supponendo $P(n)$ allora $P(n) \implies P(n+1)$ è vera. $$\begin{align}(a+b)^n &= \sum^n_{j=0}\binom{n}{j}a^{n-j}b^j \\ (a+b)^n(a+b) &= (a+b)\sum^n_{j=0}\binom{n}{j}a^{n-j}b^j\\ (a+b)^{n+1} &= \sum^n_{j=0}\binom{n}{j}a^{n+1-j}b^j + \sum^n_{j=0}a^{n-j}b^{j+1}\end{align}$$
	3. Adesso "estraiamo" il primo elemento dalla prima sommatoria e l'ultimo elemento dall'altra sommatoria. $$\begin{align}(a+b)^{n+1} &= \sum^n_{j=0}\binom{n}{j}a^{n+1-j}b^j + \sum^n_{j=0}a^{n-j}b^{j+1}\\ &= (a^{n+1})+(b^{n+1}) + \sum^n_{j=1}\binom{n}{j}a^{n+1-j}b^j + \sum^{n-1}_{j=0}a^{n-j}b^{j+1}\end{align}$$
	4. Effettuiamo un "trucco" alla seconda sommatoria, ovvero quella di porre $k = j+1$ (e pertanto $j=0 \implies k=1$) e poi di porre $k = j$, che è possibile in quanto $k$ è una *variabile muta*. $$\begin{align} &(a^{n+1})+(b^{n+1}) + \sum^n_{j=1}\binom{n}{j}a^{n+1-j}b^j + \sum^{n-1}_{j=0}\binom{n}{j}a^{(n+1)-(j+1)}b^{j+1}\\=& \ldots + \sum^n_{j=1}\ldots +\sum^{n-1}_{k=1}\binom{n}{k-1}a^{n+1-k}b^{k} \\ =&\ldots +\sum^n_{j=1}\binom{n}{j}a^{n+1-j}+b^j +\sum^n_{j=1}\binom{n}{j-1}a^{n+1-j}+b^j \\ =&\ldots+\sum^n_{j=1}\binom{n}{j}\binom{n}{j-1}a^{n+1-j}+b^j \\ &\text{Per la regola di Stiefe,} \binom{n}{j}\binom{n}{j-1}=\binom{n+1}{j}\\ =& \ (a^{n+1})+(b^{n+1}) + \sum^{n}_{j=1}\binom{n+1}{j}a^{n+1-j}+b^j\end{align}$$
	5. E riferendosi alla sommatoria presente nell'uguaglianza, se prendiamo $j=0$ e $j=n+1$, allora $$\begin{align}&1.\ \binom{n+1}{0}a^{n+1}+b^0 = 1\cdot a^{n+1} = a^{n+1} \\ &2. \ \binom{n+1}{n+1}a^{n+1-n-1}b^{n+1} = b^{n+1}  \end{align}$$
	e quindi possiamo "rintegrarli" nella sommatoria come l'elemento $0$-esimo e $n+1$-esimo, ottenendo $$ \begin{align}& \sum^{n+1}_{j=0}\binom{n+1}{j}a^{n+1-j}+b^j \\ P(n+1):&\ (a+b)^n = \sum^{n+1}_{j=0}\binom{n+1}{j}a^{(n+1)-j}+b^j \end{align} $$che è ciò che volevamo ottenere. Quindi il teorema è stato così dimostrato. $\blacksquare$

## 4.1. ESEMPI SUL TEOREMA DEL BINOMIO
**ESEMPIO 4.1.1.** Vogliamo calcolare $(a+b)^6$. 
Otteniamo innanzitutto lo sviluppo di $(a+b)^6$ secondo il teorema binomiale: $$\begin{align} &(a+b)^6 = \\ &\binom{6}{0}a^6 + \binom{6}{1}a^5b^1 + \binom{6}{2}a^4b^2 + \binom{6}{3}a^3b^3 + \binom{6}{4}a^2b^4 + \binom{6}{5}a^1b^5 + \binom{6}{6}b^6 \end{align}$$
Ora costruiamo il *triangolo di Tartaglia* fino alla *6*-esima riga, secondo le regole notate in [[#3. Costruzione del triangolo di Tartaglia]]: $$\begin{align}&1\\ &1 \ 1\ \\ &1 \ 2 \ 1\\ &1 \ 3 \ 3 \ 1 \\ & 1 \ 4 \ 6 \ 4 \ 1 \\ &1 \ 5 \ 10 \ 10 \ 5 \ 1 \\ &1 \ 6 \ 15 \ 20 \ 15 \ 6 \end{align}$$
Ora sfruttiamo questo triangolo per poter sostituire tutti i coefficienti binomiali nella forma sviluppata appena scritta. $$\begin{align}&\binom{6}{0}a^6 + \binom{6}{1}a^5b^1 + \binom{6}{2}a^4b^2 + \binom{6}{3}a^3b^3 + \binom{6}{4}a^2b^4 + \binom{6}{5}a^1b^5 + \binom{6}{6}b^6  \\ &\text{diventa}\\ &a^6 + 6a^5b+15a^4b^2+20a^3b^3+15a^2b^4+6ab^5+b^6\end{align}$$
**ESEMPIO 4.1.2.** Calcolare $\sum^n_{j=0} \binom{n}{j}$.
Si può risolvere questo problema in due modi:
1. Se (per definizione) consideriamo il coefficiente binomiale $\binom{n}{j}$ come la cardinalità delle *combinazioni* di un insieme $A$ (ove $|A| = n$) $C^n_j$, ovvero il numero degli sottoinsiemi di $A$ con $j$ elementi, allora possiamo considerare questo problema come il seguente: *"qual è la cardinalità di tutti gli sottoinsiemi di $A$ (quindi da $0$ a $n$ elementi)?"*; dai risultati della [[Teoria degli Insiemi]], sappiamo immediatamente che la risposta è $2^n$.
2. Oppure possiamo semplicemente usare il *teorema del binomio*; ovvero ponendo $a=b=1$, abbiamo $$(1+1)^n = \sum^n_{j=0}\binom{n}{j}a^{n-j}b^j \iff 2^n = \sum^n_{j=0}\binom{n}{j}$$
   dandoci così immediatamente la risposta.

**ESEMPIO 4.1.3.** Calcolare $$\sum^n_{j=0}(-1)^j\binom{n}{j}$$
Se consideriamo il [[#3.1. Triangolo di Tartaglia]], viene che la risposta intuitiva è $0$, in quanto le righe dispari sono simmetriche; quindi "dividendo" quella riga, abbiamo un "lato" positivo e negativo, che sommandoli otteniamo $0$.
Tuttavia questa risposta non è abbastanza rigorosa per essere considerata; infatti per avere una giustificazione più sicura, si deve usare il *teorema del binomio* nel seguente modo. 
Siano $a=-b=1$, ovvero$$\begin{align}(1-1)^n &= \sum^n_{j=0}\binom{n}{j}1^{n-j}(-1)^j \\ 0^n&= \sum^n_{j=0}(-1)^j\binom{n}{j} \\ 0 &= \sum^n_{j=0}(-1)^j\binom{n}{j} \ \blacksquare\end{align}$$