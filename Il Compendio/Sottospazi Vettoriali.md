---
data: 2023-10-04
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Sottospazi Vettoriali
tipologia: appunti
stato: "0"
---
*Sottospazio vettorali: definizione, esempi, interpretazione geometrica. Alcuni lemmi sui sottospazi vettoriali.*
- - -
# 1. Sottospazio Vettoriale
**DEF 1.** Sia $V$ un $\mathbb{R}$-*spazio vettoriale*; un sottoinsieme $W \subseteq V$ si dice un *sottospazio vettoriale* se valgono le seguenti:
1. Il vettore *nullo* di $V$ appartiene a $W$
2. $\forall v,w \in W$; vale che $v+w \in W$ (*chiusura rispetto alla somma*)
3. $\forall \lambda \in \mathbb{R}$, $\forall v \in W$, vale che $\lambda \cdot v \in W$ (*chiusura rispetto allo scalamento*)

Consideriamo ora l'$\mathbb{R}$-[spazio vettoriale](Spazi%20Vettoriali)  $V_2$, ovvero $$V_2: (\mathbb{R}^2, +, \cdot)$$introdotto in precedenza (**ESEMPIO 2.1.**).
Ora consideriamo il seguente sottoinsieme $W \subseteq V_2$; $$W := \{(x,y) \in V_2: x-3y=0\}$$
Facciamo le seguenti *osservazioni*. 
**OSS 1.1.** In $V_2$ esiste il vettore nullo $(0,0)$; in questo caso il vettore nullo $(0,0)$ vale anche in $W$.
**OSS 1.2.** In $V_2$ è definita una *somma $+$*. Se $v$, $w$ sono due elementi di $W$, allora sono in particolare elementi di $V_2$; dunque $v +w \in V_2$. In aggiunta vale che $v+w \in W$. Infatti: se $v = (v_1, v_2)$ $w=(w_1, w_2)$ allora $$\begin{align}&v \in W \implies v_1-3v_2 = 0 \\ &w \in W \implies w_1 - 3w_2 = 0 \end{align}$$quindi $$(v_1-3v_2) + (w_1-3w_2) = 0 = 0+0 = 0$$ovvero $$(v_1+w_1)-3(v_2+w_2) = 0$$ovvero $(v+w) \in W$
**OSS 1.3.** Infine consideriamo $v \in W$ e $\lambda \in \mathbb{R}$. Se $$\lambda \cdot v \in V_2$$allora vale anche $$\lambda \cdot v \in W$$
Infatti se $v = (v_1, v_2)$, allora $\lambda \cdot v = (\lambda \cdot v_1, \lambda \cdot v_2)$; $$\begin{align}&v \in W \implies v_1-3v_2= 0\\ \text{allora }&\lambda\cdot(v_1-3v_2) = \lambda\cdot 0 = 0 \\ \text{quindi }& (\lambda \cdot v_1)- 3(\lambda \cdot v_2) = 0 \\ \text{ovvero } &\lambda \cdot v \in W\end{align}$$

# 2. Interpretazione geometrica
**ESEMPIO 2.1.** Consideriamo $\mathbb{R}^2$ come l'insieme dei *punti nel piano*, ovvero il classico *piano cartesiano $\pi$*
Definiamo il sottoinsieme $$W := \{(x,y) \in \mathbb{R}^2: x-3y = 0\}$$
Ovviamente $W$ è uno *sottospazio vettoriale* di $\mathbb{R}^2$; notiamo che se rappresentiamo $\mathbb{R}^2$ come l'insieme dei punti nel piano, allora si può rappresentare $W$ come l'insieme dei *punti nella retta $r$*, ove $r: x - 3y = 0 \iff y = \frac{1}{3}x$

![[Pasted image 20231006182940.png]]

**ESEMPIO 2.2.** In $\mathbb{R}^2$ consideriamo il seguente: $$C := \{(x,y) \in \mathbb{R}^2 : x^2+y^2 = 1\}$$
Osserviamo subito che la *proprietà caratterizzante di $C$* non è un'*equazione lineare*; infatti si tratta di un'equazione di secondo grado.
Precisamente nel contesto della *geometria analitica*, $C$ rappresenterebbe la circonferenza $$(x-\alpha)^2+(y-\beta)^2 = \gamma^2$$ove $(\alpha, \beta)$, quindi $(0,0)$, rappresentano le coordinate dell'origine del cerchio e $\gamma$, quindi $1$, il raggio.
Vediamo subito che $C$ *non* è un sottospazio vettoriale di $\mathbb{R}^2$, in quanto $(0,0)$ non appartiene a $C$.

![[Pasted image 20231006182954.png]]

# 3. Formare sottospazi a partire da due sottospazi
**LEMMA 3.1.** Sia $V$ un *K-spazio vettoriale*, siano $U, W \subseteq V$ dei *sottospazi vettoriali* di $V$.
Se voglio avere un *nuovo* sottospazio vettoriale a partire da $U, W$ allora posso prendere la loro *intersezione* ([[Operazioni con gli Insiemi]]). Infatti $$U\cap W$$è *sottospazio vettoriale* di $V$.
**DIMOSTRAZIONE.**
Verifichiamo che $U \cap W$ sia *sottospazio vettoriale di* $V$, quindi che soddisfa le *tre proprietà* elencate in **DEF.1.**.
1. $0 \in (U \cap W)$ è vera perché *per ipotesi* abbiamo che $0$ appartiene sia ad $U$ che $W$, in quanto sono dei sottospazi vettoriali; quindi è un *elemento* comune di questi due insiemi.
2. Possiamo verificare la *chiusura della somma*: infatti $$\begin{gather}\forall v_1, v_2 \in (U \cap W) \implies v_1, v_2 \in U; v_1,v_2 \in W \\\text{per ipotesi}\implies v_1+v_2 \in U; v_1+v_2 \in W \\ \implies (v_1+v_2) \in (U \cap W)\end{gather}$$
3. Ora verifichiamo la *chiusura dello scalamento* con lo stesso procedimento: $$\begin{gather}\forall \lambda \in K, \forall v \in (U \cap W) \implies v \in U; v \in W \\\text{per ipotesi} \implies \lambda v \in U; \lambda v \in W \\ \implies \lambda v \in (U \cap W)\end{gather}  \ \blacksquare$$
La dimostrazione è conclusa.
## Il vuoto
**OSS 3.1.** Purtroppo questa *non* vale per l'unione di due sottospazi vettoriali.
Infatti, avendo $V$ uno spazio vettoriale e $U, W$ i suoi sottospazi vettoriali, *non* è sempre garantito che $$U \cup W$$sia anch'esso uno sottospazio vettoriale. Qui la simmetria si spezza.
**DIMOSTRAZIONE.** Per *"dimostrare"* questa osservazione troviamo alcuni esempi specifici di sottospazi vettoriali per cui non vale *almeno* una delle tre proprietà dello sottospazio vettoriale: scopriremo che non varrà la chiusura della somma per un caso specifico.
**ESERCIZIO: Mostrare che le proprietà 1, 3 valgono comunque**
Considero $U, W \subseteq \mathbb{R}^2$, $$\begin{gather}U = \{(x,y) \in \mathbb{R}^2 : 2x-y = 0\}\\ W = \{(x,y) \in \mathbb{R}^2: x-2y = 0\} \end{gather}$$Per ora mostriamo *algebricamente* che non vale la chiusura della somma per $U \cup W$.
1. Scegliamo alcuni elementi di $U, W$; $$(1,2) \in U; (2, 1) \in W$$
2. Ora li sommiamo $$(1,2)+(2,1) = (3,3)$$
3. Verifichiamo che $$(3,3) \not \in (U \cup W)$$Infatti $$2(3)-3 \neq 0; 3-3(3) \neq 0$$
Volendo si può vedere la situazione graficamente, osservando che $U$ e $W$ *corrispondono* a rette passanti per l'origine e vedendo poi che *vettore libero* $(3,3)$ dato dalla somma di *due vettori* non appartiene alla nessuna delle due rette.
[ GRAFICO DA FARE ]
## Sottospazio somma 
Allora vogliamo trovare un *"surrogato"* per questo vuoto formato dal fatto che $U \cup W$ non sia uno sottospazio.
**DEF 3.1.** (*Sottospazio Somma*)
Sia $V$ un K-spazio vettoriale, siano $U, W$ due sottospazi vettoriali di $V$.
Definiamo dunque il **sottospazio vettoriale somma di $U, V$** come $$U +W := \{u+w: u \in U, w \in W\}$$
**LEMMA 3.2.** $U+W$ è sottospazio vettoriale di $V$.
**DIMOSTRAZIONE.** (*Esercizio lasciato a noi*)
1. *L'appartenenza dell'elemento neutro*
   Verifichiamo che $$0 \in (U+W)$$è vera: infatti basta scegliere $u = 0, w=0 \implies 0+0 = 0$.
2. *Chiusura della somma*$$\begin{align}v_1, v_2 \in (U+W) & \implies v_1 = u_1+w_1, v_2=u_2+w_2 \\v_1+v_2 &= v_1+v_2+w_1+w_2 \\ &= (v_1+v_2)+(w_1+w_2) \\ &= v+w \\ v_1 +v_2 & \in (U+W)\end{align}$$
3. *Chiusura dello scalamento* $$\begin{align}&\lambda \in K; v \in (U+W) \\ &v \in (U+W) \implies v=u+w; u \in U, w \in W \\ &\lambda \cdot v = \lambda u + \lambda w \\ &\text{per ipotesi }\lambda u \in U, \lambda w \in W \\ &\implies \lambda\cdot v \in (U+W)\end{align} \ \blacksquare$$

**LEMMA 3.3.** Con la notazione precisa valgono che $$U \subseteq (U+W) \land W \subseteq (U+W)$$
**DIMOSTRAZIONE.** Mostrare la prima significa mostrare che per ogni elemento $u$ di $U$ vale che $u$ appartiene anche a $U+W$. Analogamente lo stesso discorso vale per $w$ elemento di $W$. $$u \in (U+W)  \implies u = u+w \stackrel{w=0}\implies u= u \implies u \in U$$
**COROLLARIO 3.1.** Vale che $$(U \cup W) \subseteq (U+W)$$inoltre si può dimostrare che $U+W$ è il *più piccolo* sottospazio vettoriale di $V$ che contiene $U \cup W$. 
**DIMOSTRAZIONE.** *Esercizio facoltativo*