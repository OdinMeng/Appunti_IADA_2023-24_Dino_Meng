---
data: 2023-12-08
corso: "[[Analisi Matematica I]]"
argomento: Proprietà delle Funzioni Integrabili
tipologia: appunti
stato: "1"
---
*Tutte le proprietà elementari delle funzioni integrabili: operazioni tra funzioni integrabili, confronto tra funzioni integrabili, pezzo di un integrale, convenzione di notazione degli integrali.*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Integrabilità secondo Riemann]]
- [[Suddivisione di un Intervallo]]
- [[Somma inferiore e superiore per una Funzione]]
- [[Funzioni di potenza, radice e valore assoluto]] (valore assoluto)
- [[Spazi Vettoriali]]
- [[Definizione di Applicazione Lineare]]
- - -
# 1. Integrali delle operazioni con funzioni
#Proposizione 
> [!prp] l'integrale di due funzioni sullo stesso intervallo
> Siano $f, g$ delle *funzioni integrabili secondo Riemann* sull'intervallo $[a, b]$ ([[Integrabilità secondo Riemann#^5455b8]]). Allora
> $$f+g \in \mathcal{R}([a,b]); \int_a^b (f+g)(t) \ dt = \int_a^b f(t) \ dt + \int_a^b g(t) \ dt$$
^b48600

#Dimostrazione 
**DIMOSTRAZIONE** della *proposizione 1.1.* ([[#^b48600]])
Una *dimostrazione* che costituirà come la *"base di ragionamento"* delle proposizioni a venire è la seguente (infatti non dimostreremo le altre proposizioni, daremo una semplice idea grafica).
Consideriamo innanzitutto la *condizione necessaria e sufficiente per l'integrabilità* delle funzioni $f, g$ ([[Integrabilità secondo Riemann#^92bcfb]]).
Ovvero, fissando un $\varepsilon >0$ ho
$$\begin{align}&1. \ \exists \Delta \in \mathcal{D}: S(f, \Delta)-s(f, \Delta) < \frac{\varepsilon}{2}  \\ &2. \ \exists \Gamma \in \mathcal{D}: S(f, \Gamma)-s(f, \Gamma) < \frac{\varepsilon}{2}\end{align}$$
Ora considero l'*unione delle suddivisioni* $\Delta \cup \Gamma$, che comporta una *suddivisione più fine* sia di $\Gamma$ che di $\Delta$ ([[Suddivisione di un Intervallo#^6c1bae]]).
Però in ogni caso vale che la differenza tra la *somma superiore e inferiore* è comunque *"contenuta"* in $\frac{\varepsilon}{2}$; questo vale sia per $f$ che $g$ relativa alla suddivisione $\Delta \cup \Gamma$.
Infatti quando prendiamo una suddivisione più fine, la *somma inferiore* tende ad *"alzarsi"*, invece la *somma superiore* tende ad *"abbassarsi"* ([[Suddivisione di un Intervallo#^64461d]]).
$$S(f, \Delta \cup \Gamma)-s(f, \Delta \cup \Gamma) < \frac{\varepsilon}{2}$$
e analogamente
$$S(g, \Delta \cup \Gamma)-s(g, \Delta \cup \Gamma) < \frac{\varepsilon}{2}$$
Inoltre chiamo l'unione delle suddivisioni come $\Delta \cup \Gamma = \Phi$ per comodità; adesso sommo le due precedenti disequazioni termine per termine e abbiamo il seguente:
$$S(f,\Phi)+S(g, \Phi) -(s(f, \Phi)+s(g, \Phi)) < \varepsilon$$
Ora osservo che la *somma superiore* della *somma delle due funzioni* è sempre *minore o uguale* alla *somma delle somme superiori delle funzioni* considerate separatamente, ovvero
$$S(f+g, \Phi) \leq S(f, \Phi) + S(g, \Phi)$$
Infatti, da un lato abbiamo un *"solo"* estremo superiore da cui prendere, dall'altro ne abbiamo due. 
Inoltre l'osservazione appena effettuata vale lo stesso anche per *la somma inferiore*:
$$s(f+g, \Phi) \leq s(f, \Phi)+s(g, \Phi)$$
Allora, combinandoli insieme ottengo
$$S(f+g, \Phi)-s(f+g, \Phi) < \varepsilon$$
che è proprio la *condizione necessaria e sufficiente di integrabilità* per la funzione $f+g$ relativo all'intervallo $\Phi$. $\blacksquare$

#Proposizione 
> [!prp] l'integrale dello scalamento di una funzione
> Sia $f$ una funzione *integrabile secondo Riemann* su $[a,b]$ e sia $\lambda$ uno *"scalare"* (ovvero numero) in $\mathbb{R}$.
> Allora vale che $\lambda \cdot f$ è *integrabile* e che il suo *integrale* è il seguente.
> $$\lambda \cdot f \in \mathcal{R}([a, b]); \int_a^b (\lambda\cdot f)(t)\ dt = \lambda \int_a^b f(t) \ dt$$
## L'integrabilità delle funzioni in termini di algebra lineare
#Osservazione 
> [!rmk] le funzioni integrabili costituiscono uno sottospazio vettoriale
> Notiamo che le proprietà appena enunciate sono molto *simili* a delle medesime proprietà per cui si definiscono enti certi matematici.
> Parliamo infatti dei *spazi vettoriali* (in particolare dei *sottospazi vettoriali*): infatti, se consideriamo $\mathcal{F}$ come l'*insieme delle funzioni* e la dotiamo delle operazioni di *somma interna* e dello *scalamento esterno su* $\mathbb{R}$, allora $\mathcal{F}$ è un $\mathbb{R}$-*spazio vettoriale*. ([[Spazi Vettoriali#^7e2c4e]])
> 
> Per le proprietà appena viste, vediamo che chiaramente l'*insieme delle funzioni integrabili* $\mathcal{R}$ non è solo un *sottoinsieme* di $\mathcal{F}$, ma è pure *sottospazio vettoriale*: vale infatti che la *"funzione nulla"* $0: \mathbb{R} \longrightarrow {0}$ è *integrabile* e le *proposizioni 1.1., 1.2.* sono esattamente la *chiusura della somma e dello scalamento*. ([[Sottospazi Vettoriali#^9bcbf2]])
> 
> Inoltre, la *dimensione* ([[Dimensione#^3a9321]]) dell'insieme $\mathcal{R}$ è *infinita* in quanto l'insieme $\mathcal{F}$ è *infinitamente generata*.

#Osservazione 
> [!rmk] l'applicazione lineare integrale
> Inoltre, definendo l'*"applicazione integrale"* (*non è il miglior termine che possiamo usare, ma ahimè*) come quella funzione in cui inseriamo una funzione integrabile e otteniamo il suo integrale, vediamo che questa costituisce un'*applicazione lineare*. Vale infatti l'additività e l'omogeneità. ([[Definizione di Applicazione Lineare#^9b39f9]])
> $$\begin{align}\int_a^b: & \ \mathcal{R}([a,b]) \longrightarrow \mathbb{R} \\ & \ f \mapsto \underset{[a,b]}\int f\end{align}$$
# 2. Confronto tra gli integrali delle funzioni integrabili
#Proposizione 
> [!prp] l'integrale di una funzione grande è più grande dell'integrale di una funzione piccola
> Siano $f,g$ delle *funzioni* definite su $[a,b]$. Siano inoltre $f, g \in \mathcal{R}([a,b])$. Valga che $\forall x \in [a,b], f(x) \geq g(x)$. (ovvero una funzione sta sempre in *"alto"* dell'altro)
> Allora vale che
> $$\underset{[a,b]}\int f \geq \underset{[a,b]} \int g$$

**FIGURA 2.1.** (*Idea intuitiva della proposizione 2.1.*)
![[Pasted image 20231208133614.png]]

#Proposizione 
> [!prp] l'integrale del valore assoluto di una funzione è più grande dell'integrale della funzione
> Sia $f$ una funzione definita su $[a, b]$. Sia $f \in \mathcal{R}([a, b])$.
> Allora $|f| \in \mathcal{R}([a,b])$ e vale che
> $$\left|\int_b^a f(t) \ dt \ \right| \leq \int_b^a |f(t)| \ dt$$
> Idealmente a sinistra abbiamo che *consideriamo l'area totale*, dove comunque le *"parti negative"* vengono sottratte alle *"parte positive"*. Invece a destra abbiamo che le *"parti negative"* diventano *"positive"*, dunque abbiamo la somma delle solo *"parti positive"*.

^cd03da

**FIGURA 2.2.** (*Idea grafica della proposizione 2.2.*)
![[Pasted image 20231208135243.png]]
# 3. Partizione di un'integrale
#Proposizione 
> [!prp] la partizione di un'integrale
> Sia $f \in \mathcal{R}([a,b])$ e sia $c \in \ ]a,b[$ (punto *interno*).
> Allora considerando la *restrizione* di $f$ in $[a,c]$ e $[c, b]$ abbiamo che
> $$\begin{gather} f_{|[a,c]} \in \mathcal{R}([a,c]); f_{|[c,b]} \in \mathcal{R}([c,b]) \\ \underset{[a,c]}\int f + \underset{[c,b]}\int f = \underset{a,b}\int f \end{gather}$$
> Graficamente quest'idea corrisponde a prendere *l'area* sotto la curva, prendere un punto $c$ per lui la *dividiamo* e vediamo che la somma delle due aree tagliate è l'area intera totale.

^157e15

**FIGURA 3.1.** (*Idea grafica della proposizione 3.1.*)
![[Pasted image 20231208140432.png]]
# 4. Convenzione di scrittura degli integrali
> [!prp] Convenzione di scrittura per gli integrali
> Si propone la seguente convenzione per scrivere gli integrali, in particolare per quanto riguarda gli *intervalli* di definizione.
> Siano $a,b,c \in \mathbb{R}$ dei numeri disposti in *qualsiasi modo*; possiamo avere $a<b<c$, $a<c<b$, e così via...
> Allora se abbiamo l'integrale
> $$\int_a^b f(t) \ dt$$
> Possiamo *"scambiare"* il pedice e l'apice cambiando il segno; ovvero
> $$\boxed{\int_a^b f(t) \ dt = -\int_b^a f(t) \ dt}$$
> Notiamo inoltre che con questa convenzione valgono comunque tutte le *proprietà* enunciate, in particolare la *proposizione 3.1.*. Infatti possiamo *"giocare con i segni"* per ottenere ciò che vogliamo.
