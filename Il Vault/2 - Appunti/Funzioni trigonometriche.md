---
data: 2023-10-12
corso: "[[Analisi Matematica I]]"
argomento: Funzioni trigonometriche
tipologia: appunti
stato: "1"
---
*Definizione delle funzioni trigonometriche $\sin$, $\cos$; le proprietà di queste funzioni; alcuni valori noti; funzioni inverse $\arcsin$, $\arccos$. Forme di somma e sottrazione di $\sin$ e $\cos$. Funzioni $\tan, \arctan$.*
- - -
# 0. Preambolo
#Osservazione 
> [!rmk] discorso introduttorio
Per ora non abbiamo ancora gli strumenti per poter *rigorosamente* definire le funzioni di *seno* e *coseno*, tuttavia possiamo definirle per ora in questo modo.
Però prima di tutto bisogna fare delle considerazioni.
>
Allora prendo il [piano cartesiano](Coppie%20Ordinate%20e%20Prodotto%20Cartesiano.md) e considero la *circonferenza unitaria* $\Gamma$: $$\Gamma := \{(x,y) \in \mathbb{R}^2: x^2+y^2=1\}$$
e considero l'asse $r_1$ concorde con l'asse $y$ e che *"appoggiamo*" in $(1, 0)$. 
>
Quindi prendo un punto qualsiasi $\alpha \in \mathbb{R}$ dell'asse, lo *"avvolgo"* su $\Gamma$, poi la retta si avvicina man mano all'arco, infine il punto *"finisce"* su $\Gamma$ e ottengo il punto $(c(\alpha), s(\alpha))$
>
Graficamente questo processo rappresenta il seguente (*figura 0.A.*)

**FIGURA 0.A.**
![[Pasted image 20231017172409.png]]

#Osservazione 
> [!rmk] questa definizione è poco rigorosa
Si osserva che in questo processo di *"avvolgimento"* si suppone che la lunghezza del segmento non si cambia mai, in quanto viene solo *"piegato"*; quindi se il segmento $r_1$ è lungo $\alpha$, allora *l'arco* è lungo $\alpha$, che non è banale da misurare. Infatti si deve fare un *procedimento di approssimazione* con segmenti. Questo è il problema di questa definizione *non-rigorosa*.
# 1. Definizione di seno e coseno
#Osservazione 
> [!rmk] prima considerazione
Considerando tutto detto sopra, consideriamo la funzione $$\begin{align}f: &\ \mathbb{R} \longrightarrow \Gamma \\&\ \alpha \mapsto(c(\alpha), s(\alpha)) \end{align}$$Dove $\Gamma$ varia nell'intervallo $[0, 1]$.

Così otteniamo le seguenti funzioni.

#Definizione 
> [!def] seno e coseno
$$\begin{align}\cos: \ &\mathbb{R} \longrightarrow [-1, 1] \\ &\alpha \mapsto \cos(\alpha) \in \Gamma \\ \sin: \ &\mathbb{R} \longrightarrow [-1, 1] \\ &\alpha \mapsto \sin(\alpha) \in \Gamma\end{align}$$
Dove $(\cos\alpha, \sin\alpha)$ rappresenta la posizione del punto dell'*arco piegato* e $\alpha$ rappresenta la *lunghezza dell'arco*. Se $\alpha$ è negativa, allora si orienta l'asso in basso. Graficamente si ha la *figura 1.1.*.
^dd4b35

**FIGURA 1.1.**
![[Pasted image 20231017172419.png]]
# 2. Proprietà
#Proposizione 
> [!prp] $\pi$
Diamo un nome alla *lunghezza della semi-circonferenza unitaria*,  $$(\pi \in \mathbb{R}, \pi \sim 3.14\ldots) $$quindi la *circonferenza* è lunga $2\pi$.

#Proposizione 
> [!prp] Proposizione 2.2. (l'identità fondamentale della trigonometria
> Dato un $\alpha \in \mathbb{R}$, si verifica che $$(\cos\alpha)^2 + (\sin\alpha)^2 = 1$$in quanto entrambi i punti $(\cos\alpha, \sin\alpha)$ appartengono alla circonferenza $\Gamma$; infatti $x^2+y^2 = 1$ è la proprietà caratterizzante di $\Gamma$.

#Proposizione 
> [!prp] seno e coseno sono funzioni periodiche
Le funzioni $\cos$, $\sin$ sono *periodiche*, ovvero che prendendo un $k \in \mathbb{Z}$,  $$\begin{align}&\text{ i. }\cos(\alpha+2k\pi) = \cos\alpha \\ &\text{ii. } \sin(\alpha + 2k\pi) = \sin\alpha \end{align}$$Questo si verifica in quanto $2\pi$ rappresenta un *giro intero*; quindi prendendo un punto $\alpha$ e facendoci un giro intero, arrivo allo stesso punto. 
^189c92

#Proposizione 
> [!prp] seno e coseno sono funzioni pari e dispari
Le funzioni $\cos$, $\sin$ sono rispettivamente delle funzioni *pari* e *dispari*, ovvero che si verificano le seguenti. $$\begin{align}&\cos(-\alpha) = \cos(\alpha) \\ &\sin(-\alpha) = -\sin(\alpha) \end{align}$$Questo discende dal fatto che la *"lunghezza negativa"* rappresenterebbe la stessa lunghezza orientato verso il basso. 
Quindi graficamente lo si può vedere chiaramente.

#Proposizione 
> [!prp] seno e coseno sono "shiftati" tra di loro
Se al posto di aggiungere un *giro intero* aggiungo un *mezzo giro*, ovvero $\pi$, ottengo il suo opposto: $$\begin{align}&\cos(\alpha+\pi) = -\cos(\alpha) \\ &\sin(\alpha+\pi) = - \sin(\alpha)\end{align}$$

#Proposizione 
> [!prp] il coseno è il complemento del seno
Ricorrendoci alla definizione etimologica del *coseno*, ovvero *"complementi sinus"*, notiamo che sottraendo *l'angolo complementare $\frac{\pi}{2}$* da $\alpha$ ottengo $\sin$. Ovvero $$\forall \alpha, \cos(\frac{\pi}{2}-\alpha) = \sin(\alpha)$$
## Riassunto grafico
**FIGURA 2.1.** Graficamente si può riassumere (quasi) tutte le proprietà nel seguente grafico (con i grafici di $\cos$, $\sin$ stessi).
![[Pasted image 20231017172504.png]]

## Alcuni valori noti
Dai risultati della *geometria elementare* sappiamo i seguenti valori noti del seno e del coseno:

| $\alpha$        | $\cos\alpha$ | $\sin \alpha$ |
| --------------- | ----------- | ------------ |
| $0$             |     $1$        |       $0$       |
| $\frac{\pi}{6}$ |       $\frac{\sqrt{3}}{2}$      |        $\frac{1}{2}$      |
| $\frac{\pi}{4}$ |     $\frac{\sqrt 2}{2}$        |       $\frac{\sqrt 2}{2}$        |
| $\frac{\pi}{3}$ |     $\frac{1}{2}$        |     $\frac{\sqrt{3}}{2}$         |
| $\frac{\pi}{2}$                | $0$            |         $1$     |
che verranno dati per noti.

## Forme di somma e di sottrazione
#Osservazione 
> [!rmk] forme di somma e di sottrazione
Consideriamo due angoli: $\alpha, \beta \in \mathbb{R}$. 
Quindi disegniamo il seguente grafico:
![[Pasted image 20231017172608.png]]
>
Dopodiché, analogamente
>
![[Pasted image 20231017172619.png]]
>
Da cui si evince che $$\boxed{\begin{align}&\sin(\alpha \pm \beta) = \sin\alpha \cos\beta \pm sin\beta\cos\alpha \\ &\cos(\alpha \pm \beta) = \cos\alpha\cos\beta \mp \sin\alpha\sin\beta \end{align}}$$
Queste formule saranno molto importanti per le formule di *prostaferesi* e di *Werner*.
## Formule di prostaferesi
*Recuperato dalla lezione del 26.10.2023*
#Osservazione 
> [!rmk] formule di prostaferesi
Voglio calcolare $\sin a + \sin b$. Allora riscrivo le *forme di sottrazione e di addizione*; $$\begin{gather}\sin(\alpha+\beta)=\sin\alpha\cos\beta+\sin\beta\cos\alpha \\ \sin(\alpha-\beta) = \sin\alpha\cos\beta-\sin\beta\cos\alpha \end{gather}$$e li sommo: $$\begin{align}\sin(\alpha+\beta)+\sin(\alpha-\beta) &= \sin\alpha\cos\beta+\sin\beta\cos\alpha-\sin\alpha\cos\beta+\sin\beta\cos\alpha \\ &= 2\sin\beta\cos\alpha\end{align}$$e ponendo $\alpha+\beta = a$, $\alpha-\beta = b$, (dunque $a+b = 2\alpha$ e $a-b=2\beta$) ottengo $$\boxed{\begin{align} \sin a + \sin b = 2\sin\frac{a-b}{2}\cos\frac{a+b}{2}\end{align}}$$ 
Analogo il procedimento per $\cos\alpha + \cos\beta$. 
^5d221c
# 3. Definizione di arcocoseno e arcoseno
#Osservazione 
> [!rmk] $\cos$ può diventare biiettiva
Considero la funzione $\cos$, però con una restrizione al suo *dominio* e *codominio*. $$\begin{align}\cos_{[0, \pi]}: &\ [0, \pi] \longrightarrow [-1, 1] \\ & \ x \mapsto \cos(x) \end{align}$$Questa funzione allora è *biiettiva*; ovvero che sia *suriettiva* che *iniettiva* e *strettamente decrescente*.
>1. Questa è *iniettiva* in quanto considerando tutti gli $x \in [0, \pi]$ si tocca un *solo* punto ad ogni $x$ considerato. Inoltre è *strettamente decrescente* in quanto il valore parte da $\cos0 = 1$ e finisce con $\cos\pi = -1$. 
>2. Per lo stesso motivo di prima $\cos$ è *suriettiva*.

#Definizione 
> [!def] arcocoseno
Pertanto secondo il *teorema dell'esistenza della funzione inversa* la funzione $\cos_{[0, \pi]}$ ha una sua inversa che chiameremo *l'arcocoseno*; $$\arccos := \cos_{[0, \pi]} $$

#Definizione 
> [!def] arcoseno
Analogamente si definisce $\arcsin$ considerando però la restrizione di $\sin_{[-\frac{\pi}{2}, \frac{\pi}{2}]}$.
Quindi $$\arcsin := \sin_{[-\frac{\pi}{2}, \frac{\pi}{2}]}$$
 
 ^07affd

**FIGURA 3.1.** (*Arcoseno e arcocoseno*)
![[Pasted image 20240101142540.png]]
# 4. Funzione tangente e arcotangente
#Definizione 
> [!def] tangente
Definiamo la funzione **tangente** $\tan \alpha$ periodica in come $$\tan: \mathbb{R}\diagdown[\frac{\pi}{2}]_{\equiv \pi} \longrightarrow \mathbb{R}$$come il *rapporto* tra la funzione *seno* e *coseno*, ovvero $$\tan\alpha = \frac{\sin\alpha}{\cos\alpha}$$Notiamo che le funzioni $\sin, \cos$ sono periodiche di $2\pi$; quindi prendendo il rapporto abbiamo che $\tan$ è periodica di $\pi$. 
Osservando i *limiti* ([[Esempi di Limiti di Funzione#^570db1]]) di questa funzione possiamo disegnare il seguente grafico (*figura 4.1.*).

**FIGURA 4.1.** ($\tan$)
![[Pasted image 20231103214312.png]]

#Definizione 
> [!def] arcotangente
Se applico una restrizione della *tangente* in $]-\frac{\pi}{2}, \frac{\pi}{2}[$ allora ho: $$\tan_{|(-\frac{\pi}{2}, \frac{\pi}{2})}: (-\frac{\pi}{2}, \frac{\pi}{2}) \longrightarrow \mathbb{R}; x \mapsto \tan{x}$$e questa diventa *biiettiva*, quindi invertibile, posso definire l'*arcotangente* la sua funzione inversa: $$\arctan := (\tan_{|(-\frac{\pi}{2}, \frac{\pi}{2})})^{-1}$$

**FIGURA 4.2.** ($\arctan$)
![[Pasted image 20231103214329.png]]
