---
data: 2023-10-09
corso: "[[Analisi Matematica I]]"
argomento: Conseguenze dell'esistenza dell'estremo superiore
tipologia: appunti
stato: "1"
---
*Alcuni importanti dei numeri reali $\mathbb{R}$ come conseguenza del teorema dell'esistenza dell'estremo superiore, numeri naturali $\mathbb{N}$ come sottoinsieme di $\mathbb{R}$, proprietà di Archimede, "$\frac{1}{n}$ diventa piccolo quanto si vuole", densità di $\mathbb{Q}$ in $\mathbb{R}$. Intervalli chiusi, limitati, inscatolati e dimezzati; teorema di Cantor, forma forte del teorema di Cantor*
- - -
# 0. Preambolo
Osservando [[Insiemi limitati, maggioranti, massimo e teorema dell'estremo superiore]], notiamo che per qualunque insieme *superiormente limitato* deve esistere un *estremo superiore*. Da questo discendono a cascata una serie di proprietà (o teoremi) importanti.
Richiamiamo dunque il seguente teorema:
#Richiamo 
> [!math|{"type":"remark","number":"0.a.","setAsNoteMathLink":false,"title":"Esistenza di $\\sup$","label":"esistenza-di-sup"}] Richiamo 0.a. (Esistenza di $\sup$).
> Sia $A \subseteq \mathbb{R}$, $A \neq \emptyset$, e $A$ *superiormente limitato*.
> Allora 
> $$\exists \xi \in \mathbb{R}: \xi \text{ è estremo superiore di }A; \xi = \sup A$$
# 1. $\mathbb{N}$ è superiormente illimitato
#Teorema 
> [!math|{"type":"theorem","number":"1.1.","setAsNoteMathLink":false,"title":"$\\mathbb{N}$ è superiormente illimitato","label":"mathbbn--superiormente-illimitato"}] Teorema 1.1. ($\mathbb{N}$ è superiormente illimitato).
> $\mathbb{N}$ è superiormente illimitato. Ovvero *non è superiormente limitato*.
Infatti nei numeri reali $\mathbb{R}$ possiamo trovare i numeri naturali $\mathbb{N}$. 
^8eb65a

#Dimostrazione 
`\begin{proof}`@[[#^8eb65a]]
	Per assurdo suppongo che esista un $M \in \mathbb{R}$ maggiorante di $\mathbb{N}$ tale che $$\forall n \in \mathbb{N}, n \leq M$$
	Quindi $\mathbb{N}$ è sia non vuoto che superiormente limitato. Da ciò (secondo il teorema dell'esistenza dell'estremo superiore) discende che esista il superiore estremo $\xi$; $$ \exists \xi \in \mathbb{R}: \xi = \sup(\mathbb{N}) $$Ora applico la *proprietà (2) degli estremi superiori con $\varepsilon = 1$; ovvero* $$\exists \bar{n} \in \mathbb{N} : \bar{n} > \xi -1$$
	Ma allora $$\bar{n} + 1 > \xi = \sup(\mathbb{N})$$il che è assurdo in quanto si troverebbe un numero che supera l'*estremo superiore*.
`\end{proof}`
# 2. Proprietà di Archimede; Archimedeità di $\mathbb{R}$
#Teorema 
> [!math|{"type":"theorem","number":"2.1.","setAsNoteMathLink":false,"title":"Archimedeità di $\\mathbb{R}$","label":"archimedeit-di-mathbbr"}] Teorema 2.1. (Archimedeità di $\mathbb{R}$).
> Siano $\varepsilon, M \in\mathbb{R}$ ove $\varepsilon > 0$, $M > 0$ (l'idea sarebbe che $\varepsilon$ è un numero *arbitrariamente piccolo*, $M$ invece un numero *arbitrariamente grande*), allora vale la seguente: 
> $$\exists \bar{n} \in \mathbb{N}: \bar{n} \cdot \varepsilon > M$$
> Ovvero prendendo un piccolo arbitrariamente piccolo $\varepsilon$ e possibile farlo sommare $\bar{n}$ volte e superare il numero arbitrariamente grande $M$. 
^d95d40

**FIGURA 2.1.** (*Rappresentazione grafica della proprietà di Archimede*)
![[Pasted image 20231011161506.png]]

#Dimostrazione 
`\begin{proof}`@[[#^d95d40]]
**DIMOSTRAZIONE.** 
	Suppongo (per assurdo) che questo teorema non è vero; ovvero negandolo, abbiamo $$\forall n \in \mathbb{N}, n \cdot \varepsilon < M$$ovvero non saremo mai in grado di superare $M$.
	Allora definendo $E$ l'insieme di tutti i numeri *"ottenuti"* sommando $\varepsilon$ a se stesso $n$ volte, $$E = \{\forall n \in\mathbb{N},n \cdot \varepsilon\}$$questo è *superiormente limitato* per supposizione (anche non vuoto).
	Sia allora $$\xi = \sup E$$Applico la seconda proprietà dell'*estremo superiore $\xi$*, con $\varepsilon$ quello inserito nella ipotesi, ovvero $$\exists \bar{n}: \bar{n} \cdot \varepsilon > \xi - \varepsilon$$ma allora consegue che $$\varepsilon(1+\bar{n}) > \xi$$che implicherebbe l'esistenza di un numero moltiplicato per $\varepsilon$ che supera $\xi = \sup E$, il che è un assurdo.
`\end{proof}`

## $\frac{1}{n}$ diventa piccolo quanto si vuole
#Corollario
> [!math|{"type":"corollary","number":"2.1.","setAsNoteMathLink":false,"title":"$\\frac{1}{n}$ diventa piccolo","label":"frac1n-diventa-piccolo"}] Corollario 2.1. ($\frac{1}{n}$ diventa piccolo).
> Sia $\varepsilon > 0$ (un numero piccolo). 
> Allora 
> $$\exists \bar{n} \in \mathbb{N}: 0 < \frac{1}{\bar{n}} < \varepsilon$$
> ovvero prendendo un numero arbitrariamente *piccolo*, deve esistere un $\frac{1}{n}$ che sarà ancora più *piccolo* del numero piccolo scelto.
^16a1fe

#Dimostrazione 
`\begin{proof}`@[[#^16a1fe]]
	Considero *la proprietà di Archimede* (**TEOREMA 2.1.**) ove fisso $\varepsilon > 0$ e $M = 1$.
	Pertanto, $$\exists \bar{n}\in \mathbb{N}: \varepsilon \cdot \bar{n} > 1 ( > 0)$$Ora, dividendo per $\bar{n}$ da ambo le parti $$\varepsilon > \frac{1}{\bar{n}}>0$$
`\end{proof}`
# 3. Densità di $\mathbb{Q}$ in $\mathbb{R}$
#Teorema 
> [!math|{"type":"theorem","number":"3.1.","setAsNoteMathLink":false,"title":"Densità dei razionali nei reali","label":"densit-dei-razionali-nei-reali"}] Teorema 3.1. (Densità dei razionali nei reali).
> Si dice che $\mathbb{Q}$ è *denso* in $\mathbb{R}$, ovvero siano $a, b \in \mathbb{R}$ con $a < b$, allora esiste $q \in \mathbb{Q}$ tale che 
> $$a < q < b$$
> quindi tra due numeri reali $a, b$ possiamo sempre trovarci un numero razionale.
^e279b1

#Dimostrazione 
`\begin{proof}`@[[#^e279b1]]
	Per la dimostrazione tratteremo di tre casi distinti; ovvero
	1. Quando $a < 0 < b$ non c'è nulla da dimostrare, in quanto abbiamo già $q = 0$.
	2. Quando $a < b < 0$ allora possiamo invertire i segni, ottenendo il seguente grafico: 
![[Pasted image 20231011161525.png]]
		Quindi $q = - \frac{k}{n}$, che troveremo, va bene.
	3. Quando $0 < a < b$, l'unico caso da trattare:
	   Innanzitutto chiamo la distanza tra i due punti $\varepsilon = b-a$ (e per forza dev'essere maggiore di $0$, in quanto $b > a > 0$).
	   Dopodiché, usando il **TEOREMA 3.1.**, abbiamo che $$0 < \frac{1}{n} < \varepsilon = b-a$$
	   Ora, per il *principio di Archimede* (**TEOREMA 2.1.**), abbiamo (con $\varepsilon = \frac{1}{n}$ e $M = a$) che $$\exists k : \frac{k}{n} > a$$
	Quindi, aggiungendo $a$ da tutte le parti e considerando l'ultimo punto ho, $$a < \frac{k}{n} < b$$e sicuramente so che non può essere che $\frac{k}{n}>b$ in quanto $\frac{1}{n} < b-a$. (ovvero il salto per arrivare a $b$ sarebbe troppo *"grande"*)
	Graficamente, ![[Pasted image 20231011161541.png]]
`\end{proof}`
# 4. Teorema di Cantor
Considerando gli [intervalli chiusi, limitati, inscatolati e dimezzati](Intervalli), abbiamo il seguente teorema.
## Forma debole
#Teorema 
> [!math|{"type":"theorem","number":"4.1.","setAsNoteMathLink":false,"title":"Teorema di Cantor, forma debole","label":"teorema-di-cantor-forma-debole"}] Teorema 4.1. (Teorema di Cantor, forma debole).
> Sia $(I_n)_n$ una successione di intervalli *chiusi, limitati e inscatolati*; allora l'intersezione di tutti gli intervalli è non-vuota.
> $$\bigcap_n I_n \neq \emptyset$$
^a981ea

**OSS 5.1.1.** Tutti gli intervalli si rappresentano graficamente nel seguente modo:
![[Pasted image 20231011161612.png]]

**OSS 5.1.2.** Notiamo che il fatto che gli intervalli *debbono essere chiusi* è una condizione necessaria al **TEOREMA 5.1.**; infatti troviamo un *controesempio* per cui non vale il **TEOREMA 5.1.** quando consideriamo insiemi *aperti* o *illimitati*.
	**ESEMPIO 5.1.2.1.**
	Consideriamo gli intervalli $$I_0 = \ ]0, 1] \ ;\  I_1 = \ ]0, \frac{1}{2}\ ;\  \ldots \ ;\  I_n =\  ]0, \frac{1}{n+1}]$$
	Che graficamente viene rappresentato come
![[Pasted image 20231011161624.png]]
	Notiamo che l'intersezione di tutti gli intervalli in questo caso viene $\emptyset$; $$\bigcap _n I_n = \emptyset$$
	**DIMOSTRAZIONE.**
	Consideriamo i seguenti due casi:
	1. Se $x \leq 0$, allora $x$ automaticamente non sta all'interno di nessun intervallo $I_n$.
	2. Se $x>0$, allora per la *proprietà di Archimede* (**TEOREMA 2.1.**) $$\exists n \in\ \mathbb{N}: x > \frac{1}{n+1}>0$$allora $x$ sta al dì fuori dell'intervallo $$x \not \in \  ]0, \frac{1}{n+1}]$$
	Pertanto non ci sono elementi comuni, rendendo l'intersezione di tutti gli intervalli l'insieme vuoto $\emptyset$.
	- - -
	**ESEMPIO 5.1.2.2.** Consideriamo ora degli intervalli *illimitati* (ovvero *non limitati*); di nuovo il teorema non vale.
	Ho $$I_n = [n, +\infty[$$
	Che graficamente viene rappresentato mediante
![[Pasted image 20231011161642.png]]
	Supponiamo di scegliere un punto $x$ nell'intorno $I_n$ (ovvero $\geq 0$); allora per *la proprietà di Archimede* (**TEOREMA 2.1.**) esisterà un intorno $I_{n+1}$ che lo supera.
	Quindi se ad ogni punto $x \geq 0$ fissiamo un intorno $I_x$ vi è sempre un intorno $I_{k}$ che supera quel punto fissato; pertanto l'intersezione di tutti gli insiemi è $\emptyset$. $$\bigcap_n I_n = \emptyset$$

#Dimostrazione 
`\begin{proof}`@[[#^a981ea]]
Consideriamo gli insiemi $A$ come gli *"estremi sinistri"* e $B$ come gli *"estremi destri"*.
$$\begin{align} &A = \{a_n, n \in \mathbb{N}\} \\ &B = \{b_n, n \in \mathbb{N}\} \end{align}$$
Inoltre ho $$\begin{align}\forall n, \forall m;\ & a_n \leq b_m\\ & b_m \geq a_n\end{align}$$
**SUBDIMOSTRAZIONE.**
	Se si vuole verificare la "proprietà" appena enunciata, allora si può considerare due casi:
	1. $n \leq m$; si avrebbe $[a_m, b_m] \subseteq [a_n, b_n]$; che graficamente equivale a 
![[Pasted image 20231011161656.png]]
	pertanto è intuibile che $b_m \geq a_n$.
	2. $n > m$; si avrebbe in questo caso $[a_n, b_n] \subseteq [a_m, b_m]$ che graficamente equivale a 
![[Pasted image 20231011161706.png]]
	stesso discorso di prima; intuibile che $b_m \geq a_n$.

Ora chiamo $\alpha = \sup A$, il quale è garantito in quanto $A$ è *limitato superiormente* (infatti abbiamo dalla proprietà appena enunciata abbiamo che $b_m$ è il *maggiorante* di $a_n$)
Dato che abbiamo il *minorante* dei *maggioranti di $A$* (ovvero $\alpha$), da qui segue che $B$ è *inferiormente limitato*. (oppure dato che $a_n \leq b_m \iff b_m \geq a_n$)
Allora chiamo $\beta = \inf B$ e ho $$\beta \geq \alpha$$
Graficamente ho
![[Pasted image 20231011161719.png]]
Io ho quindi $$[\alpha, \beta] \subseteq [a_n, b_n] ,\forall n$$Allora $$[\alpha, \beta] \subseteq \bigcap_n I_n \implies \bigcap_n I_n \neq \emptyset$$
Anzi, sapendo dalla [seconda proprietà degli estremi superiori (o estremi inferiori)](Insiemi%20limitati,%20maggioranti,%20massimo%20e%20teorema%20dell'estremo%20superiore) abbiamo che se scegliamo un $x = \alpha - \varepsilon$ (per un $\varepsilon>0$), allora esiste un $a_n$ tale che $a_n > x$; di conseguenza $x$ sta al di fuori dell'intervallo $[a_n, b_n]$; analogamente se scegliamo un $y = \beta + \eta$ (per un $\eta > 0$), allora esiste un $b_n$ tale che $y > b_n$,
Graficamente,
![[Pasted image 20231011161734.png]]
Di conseguenza $$x, y \not \in [a_n, b_n]$$
Pertanto si può sicuramente affermare che $$\bigcap_n I_n = [\alpha, \beta]$$
`\end{proof}`
## Forma forte
#Teorema 
> [!math|{"type":"theorem","number":"4.2.","setAsNoteMathLink":false,"title":"Teorema di Cantor, forma forte","label":"teorema-di-cantor-forma-forte"}] Teorema 4.2. (Teorema di Cantor, forma forte).
> Sia $(I_n)_n$ una successione di intervalli *chiusi, limitati, inscatolati e dimezzati*; allora l'intersezione di tutti gli intervalli deve contenere un unico punto $\xi$; 
> $$\exists \xi \in \mathbb{R}: \bigcap_n I_n = \{\xi\}$$
^78d038

#Dimostrazione 
`\begin{proof}`@[[#^78d038]]
La *forma debole dello stesso teorema* ([[#^a981ea]]) mi dice che $$\bigcap_n I_n = [\alpha, \beta]$$dove $\alpha$ è l'estremo superiore degli *"estremi sinistri"* $a_n$ e $b$ l'estremo inferiore degli *"estremi destri"* $b_n$. 
Ora, considerando che gli insiemi sono pure *dimezzati*, so che (**OSS 3.1.2.1.**, [[Intervalli]]):
$$\begin{align}b_n - a_n &= \frac{b_{n-1}-a_{n-1}}{2}\\ &= \frac{b_{n-2}-a_{n-2}}{2^2} \\ \ldots &\text{andando avanti finchè si raggiunge }n \ldots\\ &=\frac{b_0-a_0}{2^n}\end{align}$$
Ora mi ricordo che $n \leq 2^n$ (che può essere dimostrata per *induzione*)
Allora si può *"maggiorare"* l'espressione di prima, ovvero$$a_n-b_n=\frac{b_0-a_0}{2^n} \leq \frac{b_0-a_0}{n}$$ovviamente ricordandosi di cambiare il verso in quanto i numeri li troviamo al denominatore. 
Ora, supponendo per assurdo che $\alpha < \beta$ ovvero nel senso che l'intervallo $[\alpha, \beta]$ ha più di un elemento, allora avremmo che $$\forall n,\frac{b_0-a_0}{n} \geq b_n-a_n \geq \beta-\alpha>0$$ovvero $$\forall n, \frac{b_0-a_0}{n} \geq \beta-\alpha > 0$$
che però per **TEOREMA 3.1.** è impossibile, ovvero nel caso che abbiamo ora stiamo descrivendo che esiste un punto $\beta - \alpha$ maggiore di $0$ che non è raggiungibile da $\frac{b_0-a_0}{n}$(quando invece è vero che tutti i punti $>0$ sono raggiungibili da tale espressione).
Quindi, per assurdo, raggiungiamo alla conclusione che $$\beta = \alpha$$ovvero abbiamo l'intorno $$[\beta, \beta] \text{ o }[\alpha, \alpha]$$che comprende solo il punto $\xi$.
`\end{proof}`
