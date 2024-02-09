---
data: 2023-10-05
corso: "[[Analisi Matematica I]]"
argomento: Assiomi dei Numeri Reali
tipologia: appunti
stato: "1"
---
*Assiomi dei numeri reali $\mathbb{R}$; Il gruppo abeliano $(\mathbb{R}, +)$, il campo $(\mathbb{R}, +, \cdot)$; assiomi fondamentali di $\mathbb{R}$; l'assioma caratterizzante di $\mathbb{R}$ (di Dedekind)* ^9c634c
- - -
# 1. Preambolo
#Osservazione 
> [!rmk] la necessità di costruire un nuovo insieme di numeri
Dopo aver dedotto che i numeri [razionali](Richiami%20sui%20Numeri%20Razionali) non sono abbastanza *"estesi"* per poter rappresentare alcuni numeri (come la misura di $\sqrt{2}$), costruiamo i *numeri reali $\mathbb{R}$* con degli *assiomi* e *definendo* delle *operazioni* di *addizione* e *moltiplicazione*. Nominiamo questi assiomi come *A)*, *M)*, *O)* e *S)*.

#Definizione 
> [!def] il campo dei reali
Definiamo quindi il *campo* $$ (\mathbb{R}, +, \cdot)$$ovvero un insieme dotato di due operazioni che hanno le proprietà elencate qua sotto.
# 2. Assiomi A)
#Assioma
*Esiste un insieme $\mathbb{R}$ in cui viene definita la somma $$+ : \mathbb{R} \times \mathbb{R} \longrightarrow \mathbb{R}; (x,y) \mapsto x+y$$per cui valgono le seguenti proprietà.*
**A1)** La proprietà associativa: $\forall x,y,z \in \mathbb{R}$, $$(x+y)+z = x+(y+z)$$
**A2)** La proprietà commutativa: $\forall x,y \in \mathbb{R}$, $$x+y = y+x$$
**A3)** L'esistenza dell'elemento neutro $0$: $\exists 0 \text{ t.c. }$ $$x+0 = 0+x = x$$
**A4)** L'esistenza dell'elemento opposto: $\forall x \in \mathbb{R}, \exists x' \in \mathbb{R} \text{ t.c.}$ $$x+x' = x'+x = 0$$
*Inoltre si dice che $(\mathbb{R}, +)$ è un gruppo abeliano (dal matematico norvegese Abel).*

# 3. Assiomi M)
#Assioma 
*E' definita in $\mathbb{R}$ un'operazione di prodotto o moltiplicazione per cui:*
**M1)** Proprietà associativa: $\forall x, y, z \in \mathbb{R}$, $$(x)\cdot(y \cdot z) = (x \cdot y) \cdot (z)$$
**M2)** L'esistenza dell'elemento neutro $1$: $\exists 1 (\neq 0) \text{ t.c.}$ $$\forall x, x \cdot 1= 1 \cdot x = x$$
**M3)** L'esistenza dell'elemento opposto: $\forall x \in \mathbb{R}, \exists \tilde{x} \text{ t.c.}$ $$x \cdot \tilde{x} = \tilde{x} \cdot x = 1$$
**M4)** Proprietà commutativa: $\forall x,y,$ $$x \cdot y = y \cdot x$$
# 4. Assioma D)
#Assioma 
*E' possibile individuare una proprietà che collega le operazioni di somma $+$ e prodotto $\cdot$*
**D1)** Proprietà distributiva: $\forall x,y,z,$ $$x\cdot(y+z) = (x\cdot y)+ (x \cdot z)$$
# 5. Assiomi O)
#Assioma 
*In $\mathbb{R}$ è definita una relazione d'ordine totale che chiamo $\leq$ e valgono le seguenti*
**O1)** Compatibilità di $\leq$ dell'ordinamento con la somma: $\forall x, y, z,$ $$x \leq y \implies x+z \leq y+z$$
**O2)** Compatibilità di $\leq$ dell'ordinamento con il prodotto: $\forall x, y, z,$ $$x \leq y \land 0 \leq z \implies x\cdot z \leq y \cdot z$$
# 6. Assioma S) (di Dedekind o di separazione)
#Osservazione 
> [!rmk] la necessità di trovare un "assioma speciale" per i reali
Notiamo che avendo definito $$(\mathbb{R}, +, \cdot, \geq)$$con gli assiomi *A)*, *M)*, *D)* e *O)* questi non possono bastare, in quanto i numeri razionali $\mathbb{Q}$ godono delle stesse proprietà; infatti bisogna definire delle regole speciale, in particolare *l'assioma di Dedekind*, oppure nota come *l'assioma di separazione*.

#Assioma 
**S)** Siano $A, B \subseteq \mathbb{R}$; $A \neq \emptyset \land B \neq \emptyset$ ($A$ e $B$ sono non-vuoti), ^c29076
- supponendo che $\forall a \in A, \forall b \in B, a \leq b$
- allora per l'assioma *S)* $$\exists \xi \in \mathbb{R} \ | \ \forall a \in A, \forall b \in B, a \leq \xi \leq b$$
Ovvero, graficamente, la *figura S.1.*.

**FIGURA S.1.** (*L'assioma di Dedekind*)
![[Pasted image 20231009204435.png]]

#Osservazione 
> [!rmk] Dedekind non vale per $\mathbb{Q}$
Questa proprietà non vale per $\mathbb{Q}$, infatti se definiamo gli insiemi $$\begin{align}& A = \{\forall a \in \mathbb{Q}: a^2 < 2\}\\ &B = \{ \forall b \in \mathbb{Q}: a^2 > 2\}\end{align}$$notiamo che tra $A$ e $B$ c'è un *buco* che non potrà mai essere colmato, in quanto $\sqrt{2} \not \in \mathbb{Q}$. (dimostrazione più rigorosa sul file di Del Santo)
