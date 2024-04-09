---
data: 2024-03-07
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Spazio Finito di Probabilità
tipologia: appunti
stato: "1"
capitolo: Nozioni preliminari per la Probabilità
---
- - -
*Definizione e proprietà dello spazio di probabilità finito. Regole per la modellizzazione di uno spazio probabilistico finito.*
- - -
# 0. Voci Correlate
- [[Strutture Matematiche della Probabilità]]
# 1. Definizione di Spazio di Probabilità Finito
#Definizione 
> [!def] spazio di probabilità finito
> Sia $\Omega$ un *insieme finito*, sia $\mathcal{A}$ un'*algebra* e sia $P:\mathcal{A}\longrightarrow[0,1]$ una *probabilità*.
> Allora la terna $(\Omega, \mathcal{A}, P)$ si dice *spazio di probabilità finito*.

^75411d

# 2. Proprietà dei spazi di probabilità finiti
#Proposizione 
> [!prp] prime proprietà dei spazi di probabilità finiti
> Uno spazio di probabilità $(\Omega, \mathcal{A}, P)$ gode delle seguente proprietà.
> SP1. (*Subadditività*)
> Siano $A_1, \ldots, A_n \in \mathcal{A}$ degli eventi *a due a due disgiunti* (ovvero tali che $A_i \cap A_j = \emptyset$ per qualsiasi $i,j$ scegliamo). Allora vale la relazione
> $$
> \sum_{k=1}^{n}P(A_k)=P\left(\bigcup_{k=1}^{n}A_k\right)
> $$
> Se *non* sono disgiunti, allora vale che
> $$
> \sum_{k=1}^n P(A_k) \geq P\left(\bigcup^n_{k=1}A_k\right)
> $$
> SP2. (*La somma della probabilità di due eventi*)
> $$
> \forall A,B \in \mathcal{A}, P(A)+P(B) = P(A \cup B) + P(A \cap B)
> $$
> SP3. (*Monotonia della probabilità*)
> Si ha la probabilità della sottrazione degli eventi $P(A \diagdown B)=P(A)-P(B)$ per $A, B \in \mathcal{A}$ tali che $B \subseteq A$.
> Vale che $P(A \diagdown B) \geq 0$, di conseguenza $B \subseteq A \implies P(B) \leq P(A)$; ovvero se un'*evento minore* è *"contenuto"* in un *"evento maggiore"*, allora l'evento maggiore è più probabile (o ugualmente) dell'evento minore. 

#Osservazione 
> [!rmk] interpretazione intuizionistica della SP2
> Vediamo di dare un senso alla SP2, ovvero l'enunciato
> $$
> P(A)+P(B) = P(A\cup B) + P(A \cap B)
> $$
> Qui stiamo *sommando* due eventi che non sono necessariamente *mutualmente esclusivi*; quindi sommando le loro probabilità rischiamo di avere una specie die *"eccesso"*, che in questo caso è rappresentato da $A \cap B$. Infatti, $A \cap B$ sostanzialmente vuol dire l'evento in cui accadono sia $A$ che $B$.
> 
> Questo è perfettamente in *linea* con l'analogia della *probabilità* come la *misurazione degli eventi*: misurando la lunghezza di due blocchi che condividono una parte, si ha un'eccesso.

#Proposizione 
> [!prp] il complementare dell'evento è calcolabile in un modo
> Dato che $\mathcal{A}$ è un'*algebra*, se $A \in \mathcal{A}$ allora $\mathcal{C}_\Omega A \in \mathcal{A}$.
> In particolare vale la relazione
> $$
> P(\mathcal{C}_\Omega A)=1-P(A)
> $$

# 3. Esempi
#Esempio 
> [!exm] il dado
> Vogliamo modellizzare lo *spazio di probabilità finito* per un dado D6 (ovvero in gergo *"geek"*, a sei facce). Assumiamo che il dado non sia truccato. Prendiamo allora
> $$
> \Omega = \{1,2,3,4,5,6\}
> $$
> e $\mathcal{A}$ la *famiglia di tutti i sottoinsiemi di* $\Omega$.
> 
> Prima di tutto sappiamo subito due cose:
> 1. La probabilità che non esca nessun numero è $0$, ovvero *impossibile*.
> 2. La probabilità che esca un qualsiasi numeri di $\Omega$ è $1$, ovvero *certo*.
> E invece per gli altri eventi? Dal momento che abbiamo assunto che il dado sia *bilanciato*, ovvero le probabilità che escano un singolo numero abbiamo lo stesso *"peso"*, abbiamo
> $$
> P(1)+P(2)+\ldots+P(6)=1 \implies P(1)=\ldots=P(6)=\frac{1}{6}
> $$
> 
> Ora abbiamo tutti gli strumenti per calcolare la probabilità di ogni evento casuale.
> Numeri pari? Basta prendere $P(\{2,4,6\}) = P(2)+P(4)+P(6)$. Numeri dispari? Ragionamento analogo.

# 4. Regole per modellizzare uno Spazio di Probabilità
#Osservazione 
> [!rmk] ci sono regole precise per modellizzare spazi probabilistici
> Notiamo che quando si modellizza uno *spazio probabilistico*, usiamo implicitamente dei *principi fondamentali* che possono essere usati per tutti le situazioni. Ora ne vediamo alcune.

#Proposizione 
> [!prp] trovare gli insiemi di riferimento
> Scegliamo l'insieme finito $\Omega$ come l'insieme che contiene tutti gli *eventi elementari*, ovvero tutti i *singoli esiti possibili*, del tipo $\Omega = \{\omega_1, \ldots, \omega_n\}$.
> Scegliamo adesso una *stringa* $\Delta$ come un insieme di *numeri* del tipo $\Delta=\{\alpha_1, \ldots, \alpha_n\}$ tali che la *somma di tutti i numeri della stringa* sia $1$. Ovvero $\sum_{1<i\leq n}\alpha_i= 1$.
> 
> Notiamo benissimo che la scelta dei numeri $\alpha_1, \ldots, \alpha_n$ è completamente *arbitraria*! L'unica condizione è che la *somma* di tutti questi numeri faccia $1$.

#Proposizione 
> [!prp] estensione della probabilità su eventi casuali
> Adesso parliamo della *funzione probabilità* $p:\mathcal{A}\longrightarrow[0,1]$. 
> Prima di tutto poniamo
> $$
> p(\{\omega_k\})=\alpha_k, \forall k \in \{1, \ldots, n\}
> $$
> Ovvero associamo la *probabilità dell'evento elementare* $k$-esimo al valore $k$-esimo della stringa $\Delta$.
> Adesso vogliamo estendere la definizione di *probabilità sugli eventi casuali*, ovvero il restante degli elementi di $\mathcal{A}$. 
> Poniamo un qualsiasi elemento $A \in \mathcal{A}$ come un *sottoinsieme qualsiasi non-vuoto* di $\Omega$, dunque
> $$
> p(A) = \sum_{\omega \in A}p(\{\omega\})
> $$
> ovvero come la *"somma di tutti i singoli eventi elementari"*.
> Poniamo infine $p(\emptyset)=0$.

#Proposizione 
> [!prp] altre conseguenze
> Da queste regole elementari appena poste, seguono altre regole derivate.
> Ad esempio si ha $p(\Omega)=1$, dal momento che stiamo sommando *tutti* gli elementi di $\Delta$, che per costruzione deve essere $1$.
> Inoltre si verifica che se due eventi $A, B$ sono *mutualmente esclusivi*, allora la probabilità che accada *una di queste* è la loro somma individuale. Ovvero
> $$
> A\cap B = \emptyset \implies p(A\cup B)=p(A)+p(B)
> $$
> Questa viene verificata dal momento che possiamo *"unire le sommatorie"*
> $$
> \sum_{\omega \in A}p(\omega)+\sum_{\omega \in B}p(\omega) = \sum_{\omega \in (A \cup B)}p(\omega)
> $$
