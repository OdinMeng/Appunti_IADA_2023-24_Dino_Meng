---
data: 2023-10-12
corso: "[[Analisi Matematica I]]"
argomento: Funzioni trigonometriche
tipologia: appunti
stato: "1"
---
*Definizione delle funzioni trigonometriche $\sin$, $\cos$; le proprietà di queste funzioni; alcuni valori noti; funzioni inverse $\arcsin$, $\arccos$. Forme di somma e sottrazione di $\sin$ e $\cos$.*
- - -
# 0. Preambolo
Per ora non abbiamo ancora gli strumenti per poter *rigorosamente* definire le funzioni di *seno* e *coseno*, tuttavia possiamo definirle per ora in questo modo.
Però prima di tutto bisogna fare delle considerazioni.
Ovvero prendo il [piano cartesiano](Coppie%20Ordinate%20e%20Prodotto%20Cartesiano) (**ESEMPIO 2.1.**) e considero la *circonferenza unitaria* $\Gamma$: $$\Gamma := \{(x,y) \in \mathbb{R}^2: x^2+y^2=1\}$$
e considero l'asse $r_1$ concorde con l'asse $y$ e che *"appoggiamo*" in $(1, 0)$. 
Quindi prendo un punto qualsiasi $\alpha \in \mathbb{R}$ dell'asse, lo *"avvolgo"* su $\Gamma$, poi la retta si avvicina man mano all'arco, infine il punto *"finisce"* su $\Gamma$ e ottengo il punto $(c(\alpha), s(\alpha))$

Graficamente questo processo rappresenta il seguente.
![[Pasted image 20231017172409.png]]

**OSS 0.1.** 
Si osserva che in questo processo di *"avvolgimento"* si suppone che la lunghezza del segmento non si cambia mai, in quanto viene solo *"piegato"*; quindi se il segmento $r_1$ è lungo $\alpha$, allora *l'arco* è lungo $\alpha$, che non è banale da misurare. Infatti si deve fare un *procedimento di approssimazione* con segmenti. Questo è il problema di questa definizione *non-rigorosa*.
# 1. Definizione di seno e coseno
Considerando tutto detto sopra, consideriamo la funzione $$\begin{align}f: &\ \mathbb{R} \longrightarrow \Gamma \\&\ \alpha \mapsto(c(\alpha), s(\alpha)) \end{align}$$Dove $\Gamma$ varia nell'intervallo $[0, 1]$.

Così otteniamo le seguenti funzioni:
**DEF 1.** $$\begin{align}\cos: \ &\mathbb{R} \longrightarrow [-1, 1] \\ &\alpha \mapsto \cos(\alpha) \in \Gamma \\ \sin: \ &\mathbb{R} \longrightarrow [-1, 1] \\ &\alpha \mapsto \sin(\alpha) \in \Gamma\end{align}$$
Dove $(\cos\alpha, \sin\alpha)$ rappresenta la posizione del punto dell'*arco piegato* e $\alpha$ rappresenta la *lunghezza dell'arco*. Se $\alpha$ è negativa, allora si orienta l'asso in basso. Graficamente, 
![[Pasted image 20231017172419.png]]
# 2. Proprietà
**PROP 2.1.** Diamo un nome alla *lunghezza della semi-circonferenza unitaria*,  $$(\pi \in \mathbb{R}, \pi \sim 3.14\ldots) $$quindi la *circonferenza* è lunga $2\pi$.

**PROP 2.2.** Dato un $\alpha \in \mathbb{R}$, si verifica che $$(\cos\alpha)^2 + (\sin\alpha)^2 = 1$$in quanto entrambi i punti $(\cos\alpha, \sin\alpha)$ appartengono alla circonferenza $\Gamma$; infatti $x^2+y^2 = 1$ è la proprietà caratterizzante di $\Gamma$.

**PROP 2.3.** Le funzioni $\cos$, $\sin$ sono *periodiche*, ovvero che prendendo un $k \in \mathbb{Z}$,  $$\begin{align}&\text{ i. }\cos(\alpha+2k\pi) = \cos\alpha \\ &\text{ii. } \sin(\alpha + 2k\pi) = \sin\alpha \end{align}$$Questo si verificai n quanto $2\pi$ rappresenta un giro intero; quindi prendendo un punto $\alpha$ e facendoci un giro intero, arrivo allo stesso punto.

**PROP 2.4.** Le funzioni $\cos$, $\sin$ sono rispettivamente delle funzioni *pari* e *dispari*, ovvero che si verificano le seguenti. $$\begin{align}&\cos(-\alpha) = \cos(\alpha) \\ &\sin(-\alpha) = -\sin(\alpha) \end{align}$$Questo in quanto, come detto prima in **DEF 1.**, la *"lunghezza negativa"* rappresenterebbe la stessa lunghezza orientato verso il basso. Quindi graficamente lo si può evincere chiaramente.

**PROP 2.5.** Se al posto di aggiungere un *giro intero* aggiungo un *mezzo giro*, ovvero $\pi$, ottengo il suo opposto: $$\begin{align}&\cos(\alpha+\pi) = -\cos(\alpha) \\ &\sin(\alpha+\pi) = - \sin(\alpha)\end{align}$$

**PROP 2.6.** Ricorrendoci alla definizione etimologica del *coseno*, ovvero *"complementi sinus"*, notiamo che sottraendo *l'angolo complementare $\frac{\pi}{2}$* da $\alpha$ ottengo $\sin$. Ovvero $$\forall \alpha, \cos(\frac{\pi}{2}-\alpha) = \sin(\alpha)$$
## 2.1. Riassunto grafico
Graficamente si può riassumere (quasi) tutte le proprietà nel seguente grafico (con i grafici di $\cos$, $\sin$ stessi).
![[Pasted image 20231017172504.png]]

## 2.2. Alcuni valori noti
Dai risultati della *geometria elementare* sappiamo i seguenti valori noti del seno e del coseno:

| $\alpha$        | $\cos\alpha$ | $\sin \alpha$ |
| --------------- | ----------- | ------------ |
| $0$             |     $1$        |       $0$       |
| $\frac{\pi}{6}$ |       $\frac{\sqrt{3}}{2}$      |        $\frac{1}{2}$      |
| $\frac{\pi}{4}$ |     $\frac{\sqrt 2}{2}$        |       $\frac{\sqrt 2}{2}$        |
| $\frac{\pi}{3}$ |     $\frac{1}{2}$        |     $\frac{\sqrt{3}}{2}$         |
| $\frac{\pi}{2}$                | $0$            |         $1$     |
che verranno dati per noti.

## 2.3. Forme di somma e di sottrazione
Consideriamo due angoli: $\alpha, \beta \in \mathbb{R}$. 
Quindi disegniamo il seguente grafico:
![[Pasted image 20231017172608.png]]
![[Pasted image 20231017172619.png]]
Da cui si evince che $$\begin{align}&\sin(\alpha \pm \beta) = \sin\alpha \cos\beta \pm sin\beta\cos\alpha \\ &\cos(\alpha \pm \beta) = \cos\alpha\cos\beta \mp \sin\alpha\sin\beta \end{align}$$
Queste formule saranno molto importanti per le formule di *prostaferesi* e di *Werner*.

# 3. Definizione di arcocoseno e arcoseno
**OSS 3.1.** Considero la funzione $\cos$, però con una restrizione al suo *dominio* e *codominio*. $$\begin{align}\cos_{[0, \pi]}: &\ [0, \pi] \longrightarrow [-1, 1] \\ & \ x \mapsto \cos(x) \end{align}$$Questa funzione allora è *biiettiva* ([[Funzioni]], **DEF 3.3.**); ovvero p sia *suriettiva* che *iniettiva* e *strettamente decrescente*.
1. Questa è *iniettiva* in quanto considerando tutti gli $x \in [0, \pi]$ si tocca un *solo* punto ad ogni $x$ considerato. Inoltre è *strettamente decrescente* in quanto il valore parte da $\cos0 = 1$ e finisce con $\cos\pi = -1$. 
2. Per lo stesso motivo di prima $\cos$ è *suriettiva*.

**DEF 3.1.** 
Pertanto secondo il *teorema dell'esistenza della funzione inversa* ([[Funzioni]], **TEOREMA 1.**) la funzione $\cos_{[0, \pi]}$ ha una sua inversa che chiameremo **l'arcocoseno**; $$\arccos := \cos_{[0, \pi]} $$
**DEF 3.2.**
Analogamente si definisce $\arcsin$ considerando però la restrizione di $\sin_{[-\frac{\pi}{2}, \frac{\pi}{2}]}$.
Quindi $$\arcsin := \sin_{[-\frac{\pi}{2}, \frac{\pi}{2}]}$$
Ecco alcuni grafici delle funzioni $\arccos$, $\arcsin$.
![[Pasted image 20231017172546.png]]