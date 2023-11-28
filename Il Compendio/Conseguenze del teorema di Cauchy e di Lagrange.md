---
data: 2023-11-23
corso: "[[Analisi Matematica I]]"
argomento: Conseguenze del teorema di Cauchy e di Lagrange
tipologia: appunti
stato: "1"
---
*Conseguenze che discendono dai teoremi di Cauchy e Lagrange: conseguenze pratiche e conseguenze di natura "matematica".*
- - -
# 1. Considerazioni Pratiche e Quotidiane
## Lagrange e il sistema "Tutor"
**OSS 1.1.** (*Il sistema Tutor*) Dal 2004 è stato introdotto il cosiddetto sistema *"Tutor"* sulle autostrade italiane, al fine di determinare se stiamo rispettando le limitazioni di velocità o meno. 
Il sistema *Tutor* consiste nel seguente: lungo l'autostrada si fissano piazzano due telecamere, tra le quali c'è una distanza $s$. Allora queste fotocamere fotografano le nostre automobili e registrano i seguenti dati: la targa del veicolo e l'istante del tempo in cui siamo stati ripresi. L'idea di questo sistema viene raffigurato nella *figura 1.1.*
Quindi una volta passate entrambe le telecamere, le autorità hanno dei dati per determinare una misura importante: la nostra *velocità media* ([[Introduzione al Calcolo Differenziale#^190e60]]). 
Infatti loro hanno
$$v_m = \frac{s}{t_2-t_1} = R^{x}_{t_2}(t_1)$$
Ipotizziamo di aver infranto la legge e di aver superato ad un certo punto la velocità massima $130 \text{ km/h}$, ricevendo così una multa. Tuttavia, notiamo qualcosa: una parte del testo afferma che secondo il *codice della strada* (CdS) la *velocità istantanea* non può essere superata di $130 \text{ km/h}$: quindi c'è un errore! Loro hanno semplicemente misurato la nostra *velocità media*, non quella *istantanea*!
Allora presentiamo un ricorso al giudice per farci annullare la muta; inaspettatamente il giudice si rivela di essere un esperto di matematica e richiama il *teorema di Lagrange* ([[Teorema di Lagrange#^ef03c2]]), affermando che se la nostra velocità media $v_m$ ha ad un certo punto superato il limite, allora c'è almeno un istante di tempo $t_\xi$ tale che la velocità istantanea misurata è maggiore del limite previsto.
Ovvero
$$v_m = \frac{x(t_2)-x(t_1)}{t_2-t_1} > 130 \ \implies \exists t_\xi \in ]t_2, t_1[: x'(t_\xi)= v(t_\xi) >130$$
Quindi, alla fine niente ricorso per noi.

**FIGURA 1.1.** (*Idea grafica del sistema Tutor*)
![[Pasted image 20231126005623.png]]
## Cauchy nel nostro spazio tridimensionale
**OSS 1.2.** (*Interpretazione geometrica di Cauchy in R^3*)
Dall'interpretazione geometrica di Cauchy in $\mathbb{R}^2$ ([[Teorema di Cauchy#^30644e]]) vediamo due *punti* nello spazio, la retta secante di questi due punti e per *Cauchy* vediamo che almeno c'è almeno un punto per cui il suo *"vettore velocità"* è parallela a questa retta secante.
Ora ci chiediamo il seguente: *"come funzionerebbe in $\mathbb{R}^3$?"*
Allora in questo caso immaginiamo una situazione simile, solo che ci immaginiamo una mosca che gironzola da un punto iniziale $a$ fino ad un punto finale $b$, e la retta secante tra $a$ e $b$ sarebbe la *"pendenza"*. La situazione verrà raffigurata nella *FIGURA 1.2.*.
Varrebbe comunque il *teorema di Cauchy* qua? La risposta è *no*.
Infatti se ragioniamo sulle *strade*, vediamo che spesso le strade di montagne tendono ad avere molte curve e tornanti; queste servono infatti a *"diminuire"* la pendenza dal punto di partenza fino alla montagna! Infatti, se *Cauchy* valesse anche qui, saremmo tutti costretti ad un certo punto di salire il passo con la stessa *"pendenza"* della *"retta"* che collegherebbe il punto di partenza fino alla destinazione.
Un caso più eclatante è quello delle *scale a chiocciola*; infatti queste rendono possibile per noi di salire verticalmente da un punto all'altro senza dover affrontare pendenze incamminabili.
I gradini di queste scale servono ad *"appiattire"* la pendenza; l'idea di questo concetto viene raffigurato in *figura 1.3.*. ^f90862

**FIGURA 1.2.** (*Idea della situazione*)
![[Pasted image 20231126010338.png]]

**FIGURA 1.3.** (*Scale a chiocciola*)
![[Pasted image 20231126011128.png]]
# 2. Considerazioni "Astratte"
## Derivate nulle e funzioni costanti
#Teorema 
> [!thm] Teorema 2.1. (derivata nulla è sempre una costante)
> Suppongo $f: I \longrightarrow \mathbb{R}$, $f$ *derivabile* in $I$ ([[Derivata e derivabilità#^478a87]]).
> Supponendo che $\forall x \in I, f'(x) = 0$ allora si ha che $f(x) = c \in \mathbb{R}$.
> $$\boxed{f'(x) = 0 \implies f(x) = c \in \mathbb{R}}$$ 
^19eb72

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 2.1.* ([[#^19eb72]])
Dimostriamo questo teorema con *Lagrange* ([[Teorema di Lagrange#^ef03c2]]) e usando il ragionamento *per assurdo*.
Partiamo supponendo $f'(x) = 0$.
Ora supponiamo, per assurdo, che $f$ sia una funzione *non costante*; ovvero ci sono due punti $x_1, x_2 \in I$ tali che le loro immagini sono diverse.
$$\exists x_1, x_2 \in I: f(x_1) \neq f(x_2)$$
Ora posso applicare il *teorema di Lagrange* sull'intervallo $[x_1, x_2]$; questo è ammissibile in quanto abbiamo $f$ *derivabile* su $I$, pertanto $f$ è anche *continua* su $I$ ([[Proprietà delle derivate#^dac6dc]]). Inoltre $[x_1, x_2] \subseteq I$. 
Allora per il *teorema di Lagrange*,
$$\exists \xi \in \ ]x_1, x_2[\ : f'(\xi) = \frac{f(x_2)-f(x_1)}{x_2-x_1}$$
Tuttavia notiamo che il numeratore non può essere mai $0$ in quanto per ipotesi $f(x_1), f(x_2)$ sono diverse e analogamente neanche il denominatore può essere mai $0$.
Allora si avrebbe $f'(\xi) \neq 0$; però questo è impossibile in quanto questo contraddirebbe con la tesi $f'(\xi) = 0$.

**OSS 2.1.** (*Intervallo come condizione*) Notiamo che per essere vero questo teorema, $I$ deve essere definita su un *intervallo*, perché senno avrei dei *"buchi"* su cui la funzione può compiere dei *"salti"*.
## Crescenza e derivate
#Teorema 
> [!thm] Teorema 2.2. (la derivata positiva significa funzione crescente)
> Sia $f: I \longrightarrow \mathbb{R}$ *derivabile*.
> Allora $f$ è *crescente* su $I$ se e solo se la sua derivata è positiva;
> $$\boxed{f \text{ crescente su } I \iff \forall x \in I, f'(x) \geq 0}$$
^45aa1e

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 2.2.* ([[#^45aa1e]])
"$\implies$": Supponiamo $f$ *crescente* su $I$. Allora fissando $x_0 \in I$, posso considerare il *rapporto incrementale* $R_{x_0}^f(x)$;
$$R_{x_0}^f(x) = \frac{f(x)-f(x_0)}{x-x_0}$$
Però visto che $f$ crescente sappiamo che se $x > x_0$, allora $f(x) \geq f(x_0)$; invece se $x < x_0$ allora $f(x) \leq f(x_0)$. Pertanto in entrambi i casi abbiamo la divisione di due *segni concordi*, quindi il rapport incrementale sarà sempre positivo per $x \neq x_0$.
Quindi $R^f_{x_0}(x) \geq 0$.
Prendendo il limite
$$\lim_{x \to x_0}R^f_{x_0}(x)$$possiamo usare la *permanenza del segno* ([[Teoremi sui Limiti di Funzione#^06a2e3]]) *"alla rovescia"* per dire che anche il *limite* del rapporto incrementale, che non è altro che la *derivata* $f'(x_0)$, è sempre *positiva*.
Pertanto abbiamo verificato che
$$f \text{ crescente} \implies R^{f}_{x_0}(x) \geq 0 \implies f'(x) \geq 0$$

"$\impliedby$": Sia la derivata $f'(x)$ *sempre* positiva, per $\forall x \in I$.
Allora per assurdo suppongo che $f$ *non* sia crescente: ovvero abbiamo una situazione in cui almeno due punti non sono *"più alti dell'altro"*.
$$\exists x_1, x_2 \in I: x_1 < x_2 \implies f(x_1) > f(x_2)$$
Allora posso applicare il *teorema di Lagrange* ([[Teorema di Lagrange#^ef03c2]]) sull'intervallo $[x_1, x_2]$ per trovare l'assurdo come priva: infatti 
$$\exists \xi \in \ ]x_1, x_2[\ : \frac{f(x_1)-f(x_2)}{x_1-x_2}$$
e per ipotesi questa frazione è *negativa*, in quanto abbiamo la moltiplicazione di due segni *discordi*. Però questo è assurdo in quanto all'inizio abbiamo supposto $f'(x)$ sempre positiva.
