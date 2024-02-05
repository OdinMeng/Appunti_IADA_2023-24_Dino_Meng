---
data: 2023-11-13
corso: "[[Analisi Matematica I]]"
argomento: Trucchetti per Limiti
tipologia: appunti
stato: "1"
---
*Lista di "trucchetti" utili per valutare limiti: modi di manipolare espressioni algebriche, proprietà, …, etc.*
- - -
# Trucco 1. Divide et impera
#Osservazione 
> [!oss] Osservazione 1.1. (divide et impera)
> Dai *teoremi sui limiti* ([[Teoremi sui Limiti di Funzione#^48b492]]) sappiamo che se vale che
> $$\lim_{x \to x_0} f(x) = l, \lim_{x \to x_0} g(x) = m$$
> allora valgono che
> $$\lim_{x \to x_0} f(x)+g(x) = l+m; \lim_{x \to x_0} f(x)g(x) = lm; \lim_{x \to x_0}\frac{f(x)}{g(x)}=\frac{l}{m}$$
> Allora possiamo sfruttare questo teorema per *"scomporre"* dei limiti piuttosto complessi in limiti più semplici da valutare. Infatti non stiamo facendo altro che applicare questo esatto teorema.

#Osservazione 
> [!oss] Osservazione 1.2. (attenzione!)
> Bisogna stare attenti che in certi casi non si può applicare questa tecnica! 
> In particolare non lo si applica quando abbiamo certi casi.
> 1. Uno dei limiti non esistono (allora in questo caso il limite in generale potrebbe non esistere)
> 2. Uno dei limiti sono infiniti (bisogna vedere la "gerarchia degli infiniti")
> 3. Li separo ma non li valuto "contemporaneamente" (si otterranno dei risultati sbagliati!)
> $$$$
# Trucco 2. Sfruttare gli elementi neutri delle operazioni
#Osservazione
> [!oss] Osservazione 2.1. (elementi neutri delle operazioni)
> Notiamo che possiamo sfruttare i c.d. *elementi neutri* delle operazioni, ovvero dei *numeri* che "non vanno ad influire" sul risultato di un'espressione algebrica.
> Per la somma $+$ l'elemento neutro è $0$; infatti $\forall x \in \mathbb{R}, x+0 =x$.
> Invece per il prodotto $\cdot$ l'elemento neutro è $1$; infatti $\forall x \in \mathbb R , x \cdot 1 = x$.
> 
> Possiamo sfruttarli in particolare per *"trasformare"* delle espressioni algebriche in limiti notevoli, oppure per *"sbarazzarci"* delle situazioni *"scomode"*.

#Osservazione 
> [!oss] Osservazione 2.2. (razionalizzare espressioni con le radici)
> Questo primo trucchetto può essere già declinato nella tecnica della *"razionalizzazione"*; ovvero se abbiamo in una frazione (o senza) delle espressioni in cui compaiono delle *radici* 
> 
> $\sqrt{\cdot}$, allora potrebbe essere una buona idea quella di sfruttare la seguente tecnica.
> Sapendo che $(a+b)(a-b) = a^2-b^2$, allora possiamo avere
> $$\sqrt{a}-b = \frac{a-b^2}{\sqrt{a}+b}$$
# Trucco 3. Sfruttare i limiti notevoli
#Osservazione 
> [!oss] Osservazione 3.1. (sfruttare limiti notevoli)
> Come accennato prima, possiamo sfruttare il trucchetto appena citato per *"trasformare"* limiti complessi in dei limiti che assomigliano a dei limiti notevoli.
> Teniamo in mente che i limiti notevoli sono i seguenti.
> $$\boxed{\begin{gather}\lim_{f(x) \to 0}\frac{\sin f(x)}{f(x)} = 1 \\ \lim_{f(x) \to 0} \frac{\cos(1+ f(x))}{f(x)} = 1\\ \lim_{f(x) \to 0}\frac{e^{f(x)}-1}{f(x)} = 1 \end{gather}}$$

#Esempio 
> [!ex] Esempio 3.1. (esempio specifico)
> Come esempio specifico sfruttiamo il *secondo limite notevole* presentato prima.
> Supponiamo di avere un limite del tipo
> $$\lim_{f(x) \to 1}\frac{\cos(f(x))}{g(x)}$$
> Allora posso sfruttare il *trucco 2.* aggiungendo $+1-1$ all'espressione all'interno del *coseno* per farlo *"assomigliare"* al secondo limite notevole, poi moltiplichiamo per $1 = \frac{f(x)-1}{f(x)-1}$.
> Riepilogando,
> $$\lim_{f(x) \to 1}\frac{\cos(f(x))}{g(x)} \rightarrow \frac{\cos(1+f(x)-1)}{g(x)} \rightarrow \underbrace{\frac{\cos(1+(f(x)-1))}{f(x)-1}}_{\to 1} \cdot \frac{f(x)-1}{g(x)}$$
> Ovvero
> $$\lim_{f(x) \to 1}\frac{\cos(f(x))}{g(x)} = \lim_{f(x) \to 1 } \frac{f(x)-1}{g(x)}$$
# Trucco 4. Gerarchizzare gli infiniti
#Osservazione 
> [!oss] Osservazione 4.1. (la "gerarchia" degli infiniti)
> Osservando i *limiti notevoli* possiamo costruire la seguente "gerarchia degli infiniti", dove certi infiniti sono più "grandi" degli altri.

**LA GERARCHIA DEGLI INFINITI**
- *1. l'esponenziale*
L'infinito più "grande" è quello *esponenziale*; infatti
   $$\lim_{x \to +\infty}\frac{e^x}{f(x)} = +\infty$$
se $f(x)$ non è esponenziale (in tal caso bisogna confrontare le basi delle esponenziali, e *"vince"* la base più grande).

- *2. potenza*
L'infinito che appare più comunemente ma è più *"debole"* dell'esponenziale è la *potenza*; la potenza più *"forte"* è quella a partire dal grado più alto.
Se abbiamo *"scontri"* tra potenze di gradi diversi, è conveniente raccogliere tutte le potenze per il *grado massimo* e poi di effettuare delle eventuali cancellazioni.

- *3. logaritmo*
L'infinito più *"debole"* è quella *logaritmica*; infatti
$$\lim_{x \to +\infty}\frac{\ln x}{f(x)}=0$$
Se $f(x)$ non è *logaritmica* o una *costante* o è *limitata*. In tali casi il logaritmo *"vince"* e abbiamo $L = +\infty$.

- *4. costanti, funzioni limitate*
Se abbiamo *costanti* o in particolare delle *funzioni limitate*, allora questi non vanno neanche considerati per la gerarchia degli infiniti. Infatti questi vengono *"assorbiti"* dagli eventuali $0$ o $\pm \infty$, se ci sono nel limite.
# Trucco 5. Sfruttare l'esponenziale
#Osservazione 
> [!oss] Osservazione 5.1. (l'esponenziale)
> Possiamo sfruttare la seguente identità per l'esponenziale:
> $$\boxed{f(x)^{g(x)} = e^{g(x) \ln f(x)}}$$
> Dopodiché si andrà a studiare il limite per
> $$\lim_{x \to x_0}g(x) \ln f(x) = L$$
> Infine per valutarla in
> $$e^L$$
# Trucco 6. Sfruttare identità algebriche e/o trigonometriche
#Osservazione 
> [!oss] Osservazione 6.1. (identità algebriche)
> Rendiamo note le seguenti identità algebriche.
> $$\boxed{\begin{gather}(a^2-b^2) = (a+b)(a-b) \\ (a^n-b^n) = (a-b)(\sum_{i=0}^{n-1}a^i b^{n-1-i})\end{gather}}$$

#Osservazione 
> [!oss] Osservazione 6.2. (identità trigonometriche)
> Rendiamo note le seguenti identità trigonometriche.
> $$\boxed{ \begin{gather}\sin^2 x + \cos^2 x = 1  \\ \sin 2x = 2 \sin x \cos x \\ \cos 2x = \cos^2 x - \sin^2 x \\ \sin(a+b) = \sin a \cos b + \sin b \cos a \\ \cos(a+b) = \cos a \cos b - \sin a \sin b\end{gather} }$$
