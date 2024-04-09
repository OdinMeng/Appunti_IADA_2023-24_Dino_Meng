---
data: 2024-03-16
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Moto Circolare Uniforme
tipologia: appunti
stato: "0"
capitolo: Cinematica
---
- - -
*Moto circolare uniforme. Approccio geometrico e analitico alla questione quantitativa per l'accelerazione del punto in moto.*
- - -
# 1. Il moto circolare uniforme
#Definizione 
> [!def] moto circolare uniforme
> Supponiamo che un *oggetto* si sta muovendo ad una *velocità costante* $|v|$ (*costante in modulo!*), con la *traiettoria di una circonferenza con raggio $r$* (*figura 1.1.*).
> 
> Questo moto si dice *"moto circolare uniforme"*.

^8b58ac

**FIGURA 1.1.** (*Moto circolare uniforme*)
![[Pasted image 20240316162606.png]]

# 2. Studio geometrico del moto circolare uniforme
#Osservazione 
> [!rmk] e l'accelerazione?
> Vogliamo sapere la *quantità* (nel senso del *modulo*) dell'accelerazione $|\vec{a}|$. Possiamo approcciarci a questo problema nel seguente modo.
> 
> Prendo *due vettori velocità* $\vec{v}(t)$ e $\vec{v}(t+\Delta t)$. Possiamo dunque definire l'incremento della velocità come $\Delta \vec{v} := \vec{v}(t+\Delta t)-\vec{v}(t)$. Di conseguenza, l'accelerazione media diventa $\frac{\Delta \vec{v}}{\Delta t}$; geometricamente si ha la *figura 2.1.*. 
> 
> Adesso osservo che l'angolo $\Delta \theta$ tra i vettori velocità è il medesimo angolo $\Delta \theta$ tra i due segmenti: di conseguenza abbiamo *due triangoli simili*, da cui discende $\Delta \vec{r} = \Delta \vec{v}$.
> 
> Allora, svolgendo i passaggi matematici otteniamo il risultato finale
> $$
> \begin{align}
> &\frac{|\Delta \vec{r}|}{R}=\frac{|\Delta \vec{v}|}{v} \\
> 	\implies& \frac{|\Delta \vec{r}|}{\Delta t}\cdot \frac{1}{R} = \frac{|\Delta \vec{v}|}{\Delta t} \cdot \frac{1}{v} \\
> \implies & |\vec{a}|=\frac{|\vec{v}|}{R}\cdot v\\ \implies &\boxed{|\vec{a}|=\frac{|\vec{v}|^2}{R}}
> \end{align}
> $$
> con l'analisi dimensionale è possibile verificare la correttezza della formula.

**FIGURA 2.1.** (*L'incremento della velocità*)
![[Pasted image 20240316165213.png]]

# 3. Studio analitico del moto circolare uniforme
#Osservazione 
> [!rmk] studio analitico del moto circolare uniforme
> Alternativamente possiamo compiere uno *studio analitico del moto circolare uniforme*, con gli *strumenti della trigonometria*.
> 
> Innanzitutto, dato che stiamo parlando di un *moto uniforme*, è ragionevole descrivere l'angolo come una *funzione lineare in variazione del tempo*, come
> $$
> \theta(t)=\omega t
> $$
> dove $\omega$ è un *fattore di proporzionalità* arbitraria, misurata in Hertz. Può essere infatti definita come *"velocità angolare"*.
> Dopodiché possiamo descrivere il *vettore-posizione* $\vec{r}(t)$ come
> $$
> \vec{r}(t)=x(t)\cdot \hat{i} + y(t)\cdot \hat{j}
> $$
> con
> $$
> \begin{cases}
> x(t)=r\cos(\omega t) \\
> y(t)=r \sin (\omega t)
> \end{cases}
> $$
> Allora questo posso trovare la *velocità* e l'*accelerazione* nella forma vettoriale.
> $$
> \begin{gather}
> \vec{v}(t)=\dot{\vec{r}(t)}=\omega r(-\sin(\omega t)\cdot  \hat{i}+\cos(\omega t)\cdot \hat{j})
> \\ 
> \vec{a}(t)=\ddot{\vec{r}}(t)=\dot{\vec{v}}(t) =-\omega r^2(\cos(\omega t) \cdot \hat{i}+\sin(\omega t)\cdot \hat{j}) = -\omega^2\cdot \vec{r}(t)
> \end{gather}
> $$
> Notare che questo risultato è coerente con l'*approccio geometrico* al moto circolare. Infatti, ponendo $\omega = \frac{|\vec{v}|}{r}$, da cui si ha
> $$
> \vec{a}=\frac{|\vec{v}|}{r^2}
> $$

^22d8e4

#Definizione 
> [!def] velocità angolare
> Si definisce la *velocità angolare* come il *rapporto incrementale tra la differenza dell'angolo e la differenza del tempo*
> $$
> \omega = \frac{\text{d}\theta}{\text{d}t}
> $$
> In particolare si può istanziare questo risultato per $\theta=2\pi$ e $t=T$; ovvero possiamo prendere la *quantità del tempo necessario per compiere un giro intero*
> $$
> \omega = \frac{2\pi}{T}
> $$
> Si osserva che per un *moto circolare uniforme* la quantità $\omega$ è *sempre* costante.

#Teorema 
> [!thm] moto circolare uniforme
> Dato un oggetto che si muovo secondo un *moto circolare uniforme*, le informazioni sulla sua *posizione, velocità e accelerazione* sono date dalle seguenti.
> $$
> \begin{gather}
> \boxed{\vec{r}(t)=r(\cos(\omega t)\hat{i} + \sin(\omega t)\hat{j})} \\
> \boxed{\vec{v}(t)=\omega r (-\sin(\omega t)\hat{i}+\cos(\omega t)\hat{j})} \\
> \boxed{\vec{a}(t)=-\omega^2\cdot \vec{r}(t)}
>  \end{gather}
> $$
^c9252f

**DIMOSTRAZIONE** del [[#^c9252f]]
Basta vedere lo studio analitico del moto circolare uniforme ([[#^22d8e4]]). $\blacksquare$

#Osservazione 
> [!rmk] equazione differenziale
> Si nota che
> $$
> \vec{a}(t)=-\omega^2 \cdot \vec{r}(t)
> $$
> è un'*equazione differenziale del secondo ordine*, del tipo
> $$
> f''(x)+\omega^2 f(x)=0
> $$
> Infatti, una soluzione per questa *equazione differenziale ordinaria* è proprio un'equazione con delle funzioni trigonometriche $\sin$, $\cos$.
