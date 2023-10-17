---
data: 2023-10-16
corso: "[[Analisi Matematica I]]"
argomento: Operazioni sui Numeri Complessi
tipologia: appunti
stato: "0"
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
3. *La proprietà 2. è già stata dimostrata sopra.*
4. *Stesso valesi per la proprietà 3.*
5. Occorre solo sfruttare le proprietà dei numeri reali $\mathbb{R}$, ovvero $$\begin{align}(a',b')\cdot(a,b) &= (a'a-b'b, a'b + b'a) \\ &= (aa'-bb', ab' + a'b) \\ &= (a,b) \cdot(a',b') \ \blacksquare\end{align}$$
6. [ DA VERIFICARE ] (se riesco a trovare la voglia di farlo)

**CONCLUSIONE.**
Alla luce di queste proprietà riusciamo proprio a verificare che $$(\mathbb{R}^2, +, \cdot)$$è un [campo](Campi), che chiameremo il *campo dei numeri complessi* $\mathbb{C}$.

**OSS 2.2.** Nel campo $\mathbb{C}$ considero i numeri della seguente forma: $$(a, 0) \in \mathbb{C}$$ovvero quelli con la *seconda componente* nulla. Graficamente, questi punti giacciono sull'asse *orizzontale*, che chiameremo *l'asse reale*. 
![[Pasted image 20231017225646.png]]
Allora notiamo che valgono le seguenti: $$\begin{align}&\text{a. } (a,0) \cdot(b,0) = (ab-00, a0+0b) = (ab, 0) \\ &\text{b. }(a,0)+(b,0) = (a+b, 0)\end{align}$$nel senso che questi numeri si comportano come i *numeri reali $\mathbb{R}$*.

**OSS 2.3.** Inoltre, considerando $$(a,0) \cdot(c,d) = (ac-0d, ad+0c) = (ac, ad)$$ovvero che $(a,0)$ si comporta come lo *scalare* che *scala un numero $\mathbb{C}$ componente per componente*.

# 3. Coniugio

# 4. Modulo
