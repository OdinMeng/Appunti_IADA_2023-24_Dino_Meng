---
data: 2023-10-16
corso: "[[Analisi Matematica I]]"
argomento: Operazioni sui Numeri Complessi
tipologia: appunti
stato: "1"
---
*Tutte le operazioni possibili sui numeri complessi: somma componente per componente, moltiplicazione, campo $(\mathbb{R}^2, +, \cdot)$ come $\mathbb{C}$; alcune proprietà di queste operazioni. Complesso coniugato e modulo di un numero complesso $z$; proprietà di queste operazioni, focus sulla disuguaglianza triangolare.*
- - -
# 1. Somma componente per componente
**DEF 1.** Definisco su $\mathbb{R}^2$ l'operazione di **somma componente per componente**: $$(a,b) \dagger (a', b') = (a+a', b+b')$$che da ora in poi lo chiamiamo semplicemente $+$. 

**PROP 1.1.** La *somma componente per componente* gode delle seguenti proprietà:
1. La proprietà associativa; $$(a+b)+((a',b')+(a''+b'')) = ((a,b)+(a',b'))+(a'',b'')$$
2. L'esistenza dell'elemento neutro $0$ $$0:  (0,0);$$
3. L'esistenza dell'elemento opposto $(-a, -b)$; $$(a,b)+(-a,-b) = (0,0)$$
4. La proprietà commutativa $$(a,b)+(a',b') = (a',b') + (a,b)$$

**OSS 1.1.** Allora in questo caso si definisce $(\mathbb{R}^2, +)$ come un *gruppo abeliano*. 

# 2. Moltiplicazione
Ora l'operazione più "peculiare" sarebbe quella di moltiplicazione, in quanto grazie a questa riusciamo a formare il campo dei numeri complessi $\mathbb{C}$.
**DEF 2.** Sia $\circ$ l'operazione della **moltiplicazione**, che viene definita come $$\begin{align}\circ: &\ \mathbb{R}^2 \times \mathbb{R}^2 \longrightarrow \mathbb{R}^2  \\ & \ (\langle a,b\rangle  , \langle a',b'\rangle  ) \mapsto (a,b)\circ(a',b')\\  \end{align}$$dove $$(a,b) \circ (a',b') := (aa'-bb', ab'+ba')$$e d'ora in poi chiameremo $\circ$ come $\cdot$.

**NOTA.** Come visto sopra, personalmente (avvolte) userò la notazione $\langle a, b\rangle$ per rappresentare la coppia dei numeri $(a, b)$; lo faccio per evitare confusione con le parentesi. *Fidatevi, (forse) sarà meglio così (?)*.

**OSS 2.1.** Notiamo che questa definizione di moltiplicazione non è quella che ci si aspetta, di solito; infatti volendo si poteva anche definire la moltiplicazione nel seguente modo: $$(a,b)\circ(a',b') :\stackrel{\text{?}}= (aa', bb')$$
Matematicamente questo avrebbe senso, però si *vorrebbe* che questa moltiplicazione avesse delle *proprietà* che ritroviamo anche in $\mathbb{R}$, in quanto lo scopo di questa costruzione è proprio quella di *"espandere"* la famiglia dei numeri.
Ad esempio, qui non varrebbe la proprietà per cui $(0, 0)$ è *l'elemento nullo*. Infatti $$(1,0) \circ(0,1) = (1*0, 0*1) = (0,0)$$Quindi per questo bisognava trovare un altra definizione.

**TRUCCO PERSONALE.** Visto che potrebbe essere difficile imparare *questa* definizione di moltiplicazione, possiamo *"anticipare"* un argomento (ovvero [[Rappresentazione dei Numeri Complessi]]) rappresentando la coppia $(a, b) = a+ib$ dove $i^2 = -1$. Per *"scoprire"* la nostra definizione facciamo il seguente. $$\begin{align}(a,b) \cdot(a',b') &= (a+ib)(a'+ib') \\ &= aa'+iab'+ia'b-bb' \\ &= (aa'-bb')+i(ab'+a'b) \\ &= (aa'-bb', ab'+a'b) \end{align}$$

**PROP 2.1.** Si può verificare che questa operazione gode delle proprietà, ovvero:
1. La proprietà associativa; $$\langle a,b\rangle   \cdot(\langle a', b'\rangle   \cdot\langle a'', b''\rangle  ) = (\langle a, b\rangle   \cdot \langle a', b'\rangle  ) \cdot \langle a'',b''\rangle  $$
2. L'esistenza dell'elemento neutro $(1,0)$; $$\begin{align}(a,b) \cdot(1,0) &= \langle(a*1-b*0), (a*0)+(b*1)\rangle \\ &= \langle a, b\rangle = (a,b)\end{align}$$
3. L'esistenza dell'elemento reciproco ad ogni elemento non-zero; 
   Se ad ogni $c = (a,b) \neq (0,0)$ considero $$c^{-1} = (\frac{a}{a^2+b^2}, -\frac{b}{a^2+b^2})$$Infatti moltiplicandoli ottengo $$\begin{align} c \cdot c^{-1} &= (\frac{a^2}{a^2+b^2}-\frac{-b^2}{a^2+b^2}, \frac{-ab}{a^2+b^2} + \frac{ab}{a^2+b^2})\\ &= (\frac{a^2+b^2}{a^2+b^2}, 0) = (1, 0) \end{align}$$
4. La proprietà commutativa: $$(a,b) \cdot (a',b') = (a',b')\cdot(a,b)$$
5. La proprietà distributiva: $$\langle a,b\rangle   \cdot (\langle a',b'\rangle   + \langle a'', b''\rangle  ) = (a,b)\cdot(a',b') +(a,b)\cdot(a'',b'')$$
**DIMOSTRAZIONI.** 
1. Per verificare che questa operazione è *associativa*, dobbiamo dimostrare che il *membro destro* dell'uguaglianza è uguale al *membro sinistro*. Ovvero $$\begin{align}\text{sx. }&\langle a,b\rangle   \cdot (\langle a',b'\rangle   \cdot\langle a'', b''\rangle  ) =  \\ &\langle a,b\rangle  \cdot(\langle a'a''-b'b'',a'b''+ a''b' \rangle )= \\ & \langle a(a'a''-b'b'') - b(a'b''+a''b'), a(a'b''+a''b')+b(a'a''-b'b'')\rangle  = \\ &\langle aa'a''-ab'b''-a'bb''-a''bb', aa'b''+aa''b' +a'a''b-bb'b''\rangle  \end{align}$$e poi $$\begin{align}\text{dx. } & (\langle a,b\rangle  \cdot\langle a',b'\rangle )\cdot\langle a'',b''\rangle  = \\ &\langle aa'-bb', ab'+a'b\rangle \cdot\langle a'',b''\rangle = \\ &\langle (aa'-bb')a''-(ab'+a'b)b'', (aa'-bb')b''+(ab'+a'b)a''\rangle  = \\& \langle  aa'a''-a''bb'-ab'b''-a'bb'',  aa'b''-bb'b''+aa''b'+a'a''b\rangle = \\&\langle aa'a''-ab'b''-a'bb''-a''bb', aa'b''+aa''b'+a'a''b-bb'b''\rangle \end{align}$$E vediamo che i membri sono esattamente uguali. $\blacksquare$
2. *La proprietà 2. è già stata dimostrata sopra.*
3. *Stesso valesi per la proprietà 3.*
4. Occorre solo sfruttare le proprietà dei numeri reali $\mathbb{R}$, ovvero $$\begin{align}(a',b')\cdot(a,b) &= (a'a-b'b, a'b + b'a) \\ &= (aa'-bb', ab' + a'b) \\ &= (a,b) \cdot(a',b') \ \blacksquare\end{align}$$
5. Consideriamo entrambi i membri dell'uguaglianza $$\langle a, b\rangle  \cdot(\langle a',b'\rangle +\langle a'',b''\rangle ) = \langle a,b\rangle \cdot\langle a',b'\rangle  + \langle a,b\rangle  \cdot \langle a'',b''\rangle $$Sviluppiamo il membro destro: $$\begin{align} \langle a, b\rangle  \cdot(\langle a',b'\rangle +\langle a'',b''\rangle )  &= \langle a,b\rangle \cdot\langle a'+a'',b'+b''\rangle  \\ &= \langle a(a'+a'')-b(b'+b''), a(b'+b'')+b(a'+a'')\rangle  \\ &= \langle aa'+aa''-bb'-bb'', ab'+ab''+a'b+a''b \rangle  \end{align}$$Ora il membro sinistro: $$ \begin{align}  \langle a,b\rangle \langle a',b'\rangle  + \langle a,b\rangle \langle a'',b''\rangle  &= \langle aa'-bb', ab'+a'b\rangle  + \langle aa''-bb'', ab''+a''b\rangle  \\ &= \langle aa'+aa''-bb'-bb'', ab'+ab''+a'b+a''b\rangle \end{align}$$E vediamo che entrambi i membri, quando sviluppati, sono uguali; dimostriamo così la tesi. $\blacksquare$

**CONCLUSIONE.**
Alla luce di queste proprietà riusciamo proprio a verificare che $$(\mathbb{R}^2, +, \cdot)$$è un [campo](Campi.md), che chiameremo il *campo dei numeri complessi* $\mathbb{C}$.

**OSS 2.2.** Nel campo $\mathbb{C}$ considero i numeri della seguente forma: $$(a, 0) \in \mathbb{C}$$ovvero quelli con la *seconda componente* nulla. Graficamente, questi punti giacciono sull'asse *orizzontale*, che chiameremo *l'asse reale*. 
![[Pasted image 20231017225646.png]]
Allora notiamo che valgono le seguenti: $$\begin{align}&\text{a. } (a,0) \cdot(b,0) = (ab-00, a0+0b) = (ab, 0) \\ &\text{b. }(a,0)+(b,0) = (a+b, 0)\end{align}$$nel senso che questi numeri si comportano come i *numeri reali $\mathbb{R}$*.

**OSS 2.3.** Inoltre, considerando $$(a,0) \cdot(c,d) = (ac-0d, ad+0c) = (ac, ad)$$ovvero che $(a,0)$ si comporta come lo *scalare* che *scala un numero $\mathbb{C}$ componente per componente*. ^d57f49
# 3. Coniugio
**DEF 3.** Sia $z$ un numero $\mathbb{C}$ e lo rappresentiamo come $z = a+ib$ ([[Rappresentazione dei Numeri Complessi]]). Allora definisco il numero **complesso coniugato** $\bar{z}$ come $$\bar{z} = a-ib$$
**DEF 3.1.** Chiamo **coniugio** la funzione $$- : \mathbb{C} \longrightarrow \mathbb{C}; z \mapsto \bar{z}$$dove $\bar{i} = -i$

**PROP 3.1.** Questa funzione ha delle proprietà; presentiamo la prima.
$$\begin{align}\forall z_1, z_2; \overline{z_1+z_2}  = \overline{z_1} + \overline{z_2}\end{align}$$
Graficamente, 
![[Pasted image 20231022151340.png]]
**DIMOSTRAZIONE.** Analiticamente è possibile dimostrare la tesi nel modo seguente.$$\begin{align} \overline{z_1+z_2} &= \overline{(a+ib)+(a'+ib')}\\ &= \overline{(a+a')+i(b+b')} \\ &= (a+a')-i(b+b')\\ &= (a-ib)+(a'-ib') \\ &= \overline{z_1} + \overline{z_2}\  \blacksquare \end{align}$$

**PROP 3.2.** $$\overline{z_1 \cdot z_2} = \overline{z_1} \cdot \overline{z_2}$$
**DIMOSTRAZIONE.** Analogamente, $$\begin{align}\overline{z_1\cdot z_2} &= \overline{(a+ib)(a'+ib')} \\ &= \overline{(aa'-bb')+i(ab'+a'b)} \\ &= aa'-bb'-i(ab'+a'b) \end{align}$$e sviluppando $\overline{z_1}\cdot\overline{z_2}$ otteniamo l'identità $$\begin{align}\overline{z_1} \cdot \overline{z_2} &= \overline{(a+ib)} \cdot \overline{(a'+ib')} \\ &= (a-ib) \cdot(a'-ib') \\ &= aa'-iab'-ia'b+(i^2)bb' \\ &= aa'-bb'-i(ab'+a'b)\end{align}$$che è esattamente uguale all'espressione ottenuta prima; pertanto si considera la tesi vera. $\blacksquare$

**PROP 3.3.** $$\begin{align} \overline{z} = z \  &\iff \text{Im}(z) = 0 \\ &\iff z = \text{Re}(z) \\ &\iff z \in \mathbb{R}\end{align}$$
**PROP 3.4.** Sia $z = a+ib$, allora $$z+\overline{z} = (a+ib)+(a-ib) = 2a = 2\text{Re}(z)$$
# 4. Modulo
Se prendiamo il piano di *Argand-Gauss* ([[Rappresentazione dei Numeri Complessi]]) possiamo vedere dei *punti nel piano*, allora si potrebbe *"misurare"* la distanza di questo punto dall'origine $(0,0)$. 

**DEF 4.** Allora definiamo la il **modulo di $\bar{z}$** come la *distanza dall'origine*; ovvero se $z=a+ib$, allora usando il *teorema di Pitagora* il modulo diventa $\sqrt{a^2+b^2}$.
**DEF 4.1.** Allora definisco la funzione $| \cdot |$; $$\begin{align}| \cdot| : \ &\mathbb{C} \longrightarrow [0, +\infty) \\ &z \mapsto |z|:= \sqrt{\text{Re(z)}^2+\text{Im(z)}^2}\end{align}$$ ^53f86b

**OSS 4.1.** Notiamo che se $z \in \mathbb{R}$, ovvero se $\text{Im}(z) = 0$, allora $$|z| = \sqrt{\text{Re}(z)^2} = |\text{Re}(z)|$$Da nota che a sinistra si ha il *modulo* di $z$, invece a destra si ha il *valore assoluto* ([[Funzioni di potenza, radice e valore assoluto]], **DEF 3.1.**) della parte reale di $z$.

Ora presentiamo alcune proprietà del modulo.
**PROP 4.1.** Per definizione, $$\forall z \in \mathbb{C}, |z| \geq 0; |z| = 0 \iff z=0$$
**PROP 4.2.**
$$|z| \geq |\text{Re}(z)| \land|z| \geq |\text{Im}(z)|$$
*Geometricamente*, questo corrisponde al fatto che *l'ipotenusa* di un triangolo rettangolo è *sempre* più lungo o uguale ad uno dei cateti.

**PROP 4.3.** $$|\overline{z}| = |z|$$ in quanto $-b^2 = b^2, \forall b \in \mathbb{R}$

**PROP 4.4.** $$|z_1 \cdot z_2 | = |z_1||z_2|$$
	**DIMOSTRAZIONE.** Supponendo che $z_1 = a_1+ib_1$, $z_2 = a_2+ib_2'$, allora $$\begin{align}|z_1|\cdot|z_2| &= \sqrt{a_1^2+b_1^2} \cdot \sqrt{a_2^2+b_2^2}\\ &= \sqrt{(a_1^2+b_1^2)(a_2^2+b_2^2)}\\ &= \sqrt{(a_1^2a_2^2+a_1^2b_2^2)+(a_2^2b_1^2+b_1^2b_2^2)} \\ &= \sqrt{(a_1^2a_2^2+b_1^2b_2^2)+(a_1^2b_2^2+a_2^2b_1^2)}\end{align}$$e sviluppando $$\begin{align}z_1\cdot z_2 = a_1a_2-b_1b_2+i(a_1b_2+a_2b_1) \end{align}$$si ha quindi $$\begin{align} |z_1 \cdot z_2| &= |(a_1a_2-b_1b_2)^2+(a_1b_2+a_2b_1)^2 \\ &= |(a_1^2a_2^2-2a_1a_2b_1b_2+b_1^2b_2^2)+(a_1^2b_2^2+2a_1a_2b_1b_2+a_2^2b_1^2)| \\ &= |(a_1^2a_2^2+b_1^2b_2^2)+(a_1^2b_2^2+a_2^2b_1^2)|\end{align}$$dimostrando così che $$|z_1\cdot z_2| = |z_1| \cdot |z_2| \ \blacksquare$$

**PROP 4.5.** $$z \cdot \overline{z} = |z|^2$$
	**DIMOSTRAZIONE.** Supponendo che $z = a+ib$, allora $$z\cdot\bar{z} = (a+ib)(a-ib) = a^2+b^2 = |z|^2$$
	**OSS 4.5.a.** Questa proprietà è utile per trovare l'inversa di $z$; infatti $$z \cdot \frac{\overline{z}}{|z|^2}=\frac{|z|^2}{|z|^2} = 1$$allora concludo che $$z^{-1} = \frac{\overline{z}}{|z|^2} = \frac{a-ib}{a^2+b^2} = \frac{a}{a^2+b^2}+i\frac{-b}{a^2+b^2}$$
 

**PROP 4.7.** *La disuguaglianza triangolare.*
Infine presentiamo la *proprietà fondamentale* del *modulo*. $$\begin{align}&\forall z_1, z_2 \in \mathbb{C}, \\&|z_1+z_2| \leq |z_1|+|z_2| \end{align}$$Che è *simbolicamente* simile alla *disuguaglianza triangolare* del [valore assoluto](Funzioni%20di%20potenza,%20radice%20e%20valore%20assoluto.md) (**OSS 3.1.1.**)
Però in questo contesto (ovvero del campo $\mathbb{C}$) la proprietà è ancora più *geometricamente suggestiva*; infatti usando il *Piano di Argand-Gauss* ([[Rappresentazione dei Numeri Complessi]]), si ha: 
![[Pasted image 20231022151409.png]]
Ovvero che la somma della lunghezza due cateti di un triangolo rettangolo è *sempre* più lunga della lunghezza dell'ipotenusa.
	**DIMOSTRAZIONE.**
	Considero i seguenti: siano $z_1, z_2 \in \mathbb{C}$; allora $$\begin{align}|z_1+z_2|^2 &= (z_1+z_2)\overline{(z_1+z_2)}\\ &= (z_1+z_2)(\overline{z_1}+\overline{z_2}) \\  &= z_1\overline{z_1}+z_1\overline{z_2} + \overline{z_1}z_2 + z_2\overline{z_2} \\ &= |z_1|^2 + z_1\overline{z_2}+ \overline{z_1\overline{z_2}}+|z_2|^2 \\ |z_1+z_2|^2&=|z_1|^2 + 2\text{Re}(z_1\overline{z_2})+|z|^2 \end{align}$$A questo punto mi ricordo che $$|\text{Re}(z)| \leq |z|$$allora $$\begin{align}|z_1|^2 + 2\text{Re}(z_1\overline{z_2})+|z|^2 &\leq |z_1|^2+2|z_1\overline{z_2}|+|z_2|^2  \\ &\leq|z_1|^2+2|z_1||\overline{z_2}|+|z_2|^2 \\ &\leq |z_1|^2+2|z_1||z_2|+|z_2|^2 \\ |z_1+z_2|^2 &\leq (|z_1|+|z_2|)^2 \\|z_1+z_2| &\leq |z_1|+|z_2| \ \blacksquare\end{align}$$
