---
data: 2024-03-07
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Strutture Matematiche della Probabilità
tipologia: appunti
stato: "1"
capitolo: Nozioni preliminari per la Probabilità
---
- - -
*Definizioni delle strutture matematiche per la probabilità: algebra, probabilità su un'algebra. Estensioni delle nozioni di algebra e probabilità: sigma-algebra, misura di probabilità su sigma-algebra. Sigma-algebra di Borel in R^N.*
- - -
# 1. Algebra e Probabilità
#Definizione 
> [!def] algebra per un insieme
> Supponiamo di avere un insieme $\Omega$ finito, una famiglia $\mathcal{A}$ non-vuota di sottoinsiemi di $\Omega$ (in genere la famiglia di *tutti i sottoinsiemi* di $\Omega$).
> Se valgono le seguente regole:
> A1. *L'esistenza dell'evento certo e dell'evento impossibile*
> $$
> \Omega, \emptyset \in \mathcal{A}
> $$
> A2. *Chiusura dell'unione e dell'intersezione*
> $$
> A, B \in \mathcal{A} \implies A \cup B \in \mathcal{A} \land A \cap B \in \mathcal{A}
> $$
> A3. *L'esistenza dell'evento opposto (oppure elemento complementare in $\Omega$)*
> $$
> A \in \mathcal{A} \implies \mathcal{C}_\mathcal{A} A \in \mathcal{A}
> $$
> Allora la famiglia $\mathcal{A}$ si dice *algebra*.
^9668b5

#Definizione 
> [!def] eventi elementari, spazio degli eventi elementari, eventi casuali, eventi mutualmente esclusivi
> Si può dare una *nomenclatura* per elementi degli insiemi appena definiti, in particolare nel contesto della *probabilità*.
> 
> Per $\Omega$ può essere definita come lo *spazio degli eventi elementari*, per gli elementi $\omega \in \Omega$ possono essere definiti come *eventi elementari*, invece per gli elementi $A \in \mathcal{A}$ possono essere definiti come *eventi casuali*.
> Se due elementi $A, B \in \mathcal{A}$ hanno intersezione nulla, si dice che sono *eventi mutualmente esclusivi*.

#Definizione 
> [!def] probabilità su un'algebra
> Supponiamo di avere un'*algebra* $\mathcal{A}$ ([[#^9668b5]]). 
> Sia definita una funzione $P$ del tipo
> $$
> P: \mathcal{A} \longrightarrow [0,1]
> $$
> (in realtà si può scegliere un altro intervallo chiuso del tipo $[a,b]$, la scelta di $[0,1]$ è una pura convenzione)
> Se valgono le seguenti:
> P1. *L'evento certo ha la probabilità massima e l'evento nullo ha la probabilità nulla*
> $$
> P(\Omega)=1; P(\emptyset)= 0
> $$
> P2. *Additività*
> Supponendo che $A, B$ siano disgiunti, ovvero tali che $A \cap B = \emptyset$, allora vale che
> $$
> P(A)+P(B) = P(A \cup B)
> $$

#Osservazione 
> [!rmk] la necessità di estendere questi concetti
> Fin'ora abbiamo visto che i concetti di *algebra* e di *probabilità* servono per modellizzare i *spazi probabilistici finiti*, dove l'insieme degli eventi campionari $\Omega$ è *finito* ([[Spazio di Probabilità Finito#^75411d]]). 
> 
> Tuttavia, questo non è *sufficiente* per modellizzare *tutti* i *spazi probabilistici*. Infatti, se volessimo modellizzare i *spazi probabilistici discreti*, ovvero con un insieme $\Omega$ *infinito* (ma comunque *numerabile*!), ci serve estendere il concetto di *algebra* e di *probabilità*.
# 2. σ-Algebra e σ-Probabilità
#Definizione 
> [!def] σ-Algebra su uno spazio campionario
> Una famiglia $\mathcal{A}$ di parti di un insieme $\Omega$ (*che può essere infinito*) si dice *σ-algebra* (dove σ sta per *"numerabile"*) se valgono le seguenti regole.
> σA1. *L'esistenza dell'evento certo e impossibile*
> $$
> \Omega, \emptyset \in \mathcal{A}
> $$
> σA2. *L'esistenza dell'evento opposto*
> $$
> A \in \mathcal{A} \implies \mathcal{C}_{\mathcal A} A \in \mathcal{A}
> $$
> σA3. *Chiusura dell'intersezione e unione infinita*
> $$
> \begin{gather}
> \{\mathcal{A}_1, \ldots, \mathcal{A}_k\}\subset \mathcal{A} \implies \bigcup^{\infty}_{n=1}\mathcal{A}_n, \bigcap^{\infty}_{n=1}\mathcal{A_n} \in \mathcal{A}
> \end{gather}
> $$

#Osservazione 
> [!rmk] il concetto di sigma-algebra è un'estensione di algebra
> Evidentemente *ogni* σ-algebra è anche un'algebra, dal momento che le *regole assiomatiche* del σ-algebra sono una versione *"più forte"* delle regole dell'algebra.
> In particolare le due strutture *coincidono* se $\Omega$ ha un *numero finito* di *elementi*.

#Definizione 
 > [!def] σ-probabilità
 > Sia $\mathcal{A}$ un σ-algebra su $\Omega$. Una *misura di probabilità* (o σ-probabilità) è una funzione $p:\mathcal{A}\longrightarrow [0,1]$ tale che valgano le seguenti regole.
 > σP1. *Gli eventi estremi hanno i valori estremi*
 > $$
 > p(\emptyset)=0, p(\Omega)=1
 > $$
 > σP2. *σ-additività*
 > Se $(A_n)_n \subset \mathcal{A}$ è *una successione di insiemi a due a due disguinti*, allora vale che
 > $$
 > \sum^{+\infty}_{n=1}p(A_n)=p\left(\bigcup^{\infty}_{n=1}A_n\right)
 > $$
 
# 3. σ-Algebra di Borel in R^N
#Osservazione 
> [!rmk] problema preliminare
> Supponiamo di avere una *figura di forma indeterminata* in una *circonferenza* e di voler calcolare la probabilità che, lanciando una freccia casualmente, si colpisce la *figura*. 
> 
> Un buon approccio è quello di approssimare l'intero cerchio con *piccoli rettangoli* e di fare una proporzione tra *piccoli rettangoli appartenente alla figura nera* e tra tutti i *rettangoli disponibili*.
> 
> Vogliamo quindi approssimare questa figura con una *famiglia di rettangoli*, che faremo con la seguente struttura matematica, e allo stesso tempo di *trovare una struttura matematica* che ci permetta di modellizzare questo *problema di natura probabilistica*.

#Definizione 
> [!def] σ-algebra di Borel in 2D
> Definiamo la *σ-algebra di Borel in $\mathbb{R}^2$* come la *più piccola σ-algebra* che *contiene tutti i rettangoli*, cioè
> $$
> \mathcal{B}(\mathbb{R}^2) = \{(a,b) \times (c,d) : a,b,c,d \in \mathbb{R}\}
> $$
> Se chiara dal contesto, indichiamo la *sigma-algebra di Borel* semplicemente come $\mathcal{B}$.

#Definizione 
> [!def] σ-algebra di Borel generalizzata in N
> Si può generalizzare il concetto di *σ-algebra di Borel* in $\mathbb{R}^N$, definendola come la seguente:
> $$
> \mathcal{B}(\mathbb{R}^N)=\left\{\prod^{N}_{k=1}(a_k, b_k): a_k, b_k \in \mathbb{R}\right\}
> $$
> In particolare sarà utile vedere la *σ-algebra di Borel* in $N=3$ come la *σ-algebra* più piccola contenente *parallelepipedi*, in $N=1$ contenente *segmenti*. 
> Con dimensioni più grandi, non sarà più (fisicamente) possibile fare delle *analogie geometriche*, si penserà dunque $N$ come il *numero delle variabili*.

^02b5da


#Proposizione 
> [!prp] analisi di σ-algebra di Borel in 1D
> Iniziamo ad analizzare $\mathcal{B} = \mathcal{B}(\mathbb{R}^1)$. 
> Vediamo che $\mathcal{B}$ contiene le *semirette*, dato che possono essere *espressione* di *unione infinita di segmentini finiti*. Infatti,
> $$
> (a,+\infty) = \bigcup^{\infty}_{k=1}(a,a+k)
> $$
> Allora da ciò discende che i *loro complementari* fanno parte di $\mathcal{B}$, ovvero semirette *chiuse*. Ovvero, intervalli del tipo $(-\infty, a]$ o $[a, +\infty)$.
> Ma allora, considerando l'intersezione di *semirette chiuse*, abbiamo che gli *intervalli chiusi limitati* del tipo $[a,b]$ sono elementi di $\mathcal{B}$! Ma allora anche $(a,b) \in \mathcal{B}$!
> 
> Questa breve analisi vuole dire che *"tutti gli intervalli di ogni tipo fanno parte della σ-algebra di Borel in $\mathbb{R}$*.
