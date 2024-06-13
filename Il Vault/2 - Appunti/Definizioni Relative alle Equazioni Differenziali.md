---
data: 2024-05-08
corso:
  - "[[Analisi Matematica II]]"
argomento: Definizioni Relative alle Equazioni Differenziali
tipologia: appunti
stato: "0"
capitolo: Equazioni Differenziali
---
- - -
*Terminologia e definizioni relative alle equazioni differenziali. Equazione differenziale generale, equazione differenziale ordinaria (ODE/EDO), equazione differenziale alle derivate parziale (PDE), l'ordine di un'equazione differenziale, forma normale di un'ODE, funzione incognita, funzione soluzione e problema di Cauchy.*
- - -
# 0. Voci correlate
- [[Introduzione alle Equazioni Differenziali]]
# 1. Classificazioni di Equazioni Differenziali
**Idea.** Per definire *"equazione differenziale"* lo pensiamo come un *legame funzionale* tra una funzione e le sue derivate: qualche (o tutte) le derivate compaiono in una qualche combinazione. Per fare ciò usiamo la nozione di *funzione in più variabili*.

#Definizione 
> [!def] equazione differenziale ordinaria, incognita, ordine e soluzione
> Siano $F:A \subseteq X^{N+2} \longrightarrow X$ e $f:A \subseteq X \longrightarrow X$ delle funzioni. $F, f$ formano un'*equazione differenziale ordinaria* se tra di queste vi è un legame del tipo
> $$
> F(t, f(t), f'(t),\ldots, f^{(N)}(t))=0
> $$
> In tal caso $f$ si dice *incognita*, $N$ l'*ordine* (affinché sia $f^{(N)}(t) \neq 0$). Inoltre si dice *soluzione* una funzione $g:X \longrightarrow X$ che soddisfi l'uguaglianza sopra.
> 
> Nota: di solito (e quasi sempre) si prende $X=\mathbb{R}$.

#Definizione 
> [!def] equazione differenziale alle parziale derivate
> Se invece abbiamo che la funzione incognita ha *più variabili*, allora abbiamo un'equazione differenziale alle derivate parziali. Non ne parleremo.

^40a675

#Definizione 
> [!def] equazione differenziale autonoma
> Se l'equazione dell'equazione differenziale *non* dipende dal parametro $t$ in alcun modo, allora si dice che è *autonoma*.

#Esempio 
> [!exm] esempi di equazioni differenziali
> Le equazioni
> $$
> \begin{gather}
> (a) \ \ y'(x)=3y(x) \\ (b) \ \ y(x)-3y^2(x)=0
> \end{gather}
> $$
> sono entrambe *equazioni differenziali*. Notiamo che sono espresse in *forme diverse* e sono entrambe *autonome*.

# 2. ODE in forma normale
#Definizione 
> [!def] forma normale di un'ODE
> Siano $F, f$ delle funzioni che esprimono l'equazione differenziale
> $$
> F(t, f(t), f'(t),\ldots, f^{(N)}(t))=0
> $$
> Se è *possibile esplicitare* l'equazione in $f^{(N)}(t)$, allora si può scrivere
> $$
> f^{(N)}(t)=F(t, f'(t), \ldots, f^{(N-1)}(t), 0)
> $$
> e tale forma si dice *normale*. Se non è possibile esplicitare l'equazione differenziale in tale modo, l'ODE si dice *"non-normale"*.

# 3. ODE scalare del primo ordine in forma normale
Ci soffermiamo su *una categoria* delle *ODE*, ovvero *scalare e del primo ordine in forma normale*.

#Definizione 
> [!def] ODE scalare del primo ordine in forma normale, soluzione
> Sia $F:E \subseteq \mathbb{R}^2 \longrightarrow \mathbb{R}$ e $f:\mathbb{R}\longrightarrow\mathbb{R}$. 
> Un'*equazione differenziale scalare del primo ordine in forma normale* è del tipo
> $$
> f'(x)=F(x,f(x))
> $$
> Una soluzione $y:I \subseteq \mathbb{R} \longrightarrow \mathbb{R}$ di questo tipo di equazione differenziale è quando soddisfa le seguenti condizioni
> i. $y$ è derivabile in $I$ (nel suo dominio)
> ii. $(x,y(x)) \in E, \forall x \in I$ (ovvero otteniamo ancora un'equazione differenziale definibile)
> iii. $y'(x)=f(x,y(x)), \forall x \in I$ (la soluzione soddisfa l'uguaglianza nel dominio)

Notiamo che data un'equazione differenziale, possiamo avere una *classe infinita* di equazioni che risolvono tale equazione differenziale. Per avere un'*unica soluzione* poniamo condizioni più forti: ovvero la *condizione iniziale*.

# 4. Problema di Cauchy
Adesso definiamo una delle *categorie di equazioni differenziali* più importanti.

#Definizione 
> [!def] problema di Cauchy e una sua soluzione
> Siano $f: E \subseteq \mathbb{R}^2 \longrightarrow \mathbb{R}$, $(x_0,y_0) \in E$ e $y:\mathbb{R} \longrightarrow \mathbb{R}$. L'espressione $PC$ definita come
> $$
> (PC):\left\{
> \begin{align}
> & y'(x)=f(x,y(x)) \ \ \textcolor{RED}{(\text{ODE})} \\
> & y(x_0)=y_0 \ \ \textcolor{RED}{\text{(condizione iniziale)}}
> \end{align}
> \right.
> $$
> si dice *"problema di Cauchy"*.
> 
> Si dice che $y:I \subseteq \mathbb{R}$ è una *soluzione del problema di Cauchy* se vale che
> i. $y$ risolve $y' = f(x,y)$
> ii. $x_0 \in I$ e soddisfa $y(x_0)=y_0$

^3ec5ac

**OBBIETTIVI.**
Con i problemi di Cauchy vorremmo risolvere i seguenti problemi:
1. $(\exists)$ Voglio determinare condizioni necessarie per capire l'*esistenza* della/e soluzione/i
2. $(!)$ Voglio determinare, se esiste, l'*unicità* della soluzione
3. La *stabilità* (dipendenza continua sui dati): se approssimo un problema di Cauchy con $z \to y$, come si propaga l'*errore* su $y_0$?
4. Lo studio *qualitativo* delle soluzioni
	- Infatti di solito *non* ho soluzioni esplicite. Consideriamo ad esempio l'*equazione di Riccati*, che per certi parametri $a>0$ l'equazione differenziale $y' + ay^2 = x^2$ non ha soluzione che può essere espressa in *funzioni elementari*.
	- Potrei comunque ottenere delle *inforzioni qualitative* sulla soluzione; parliamo di *asintoti*, *limiti*, *dominio*, eccetera...
5. Il *metodo delle* risoluzioni delle *equazioni differenziali*; ce ne sono un sacco, che variano a seconda della *tipologia* dell'*ODE*.
