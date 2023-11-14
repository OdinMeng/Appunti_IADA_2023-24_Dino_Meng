---
data: 2023-09-27
corso: "[[Analisi Matematica I]]"
argomento: Nozione Primitiva di Insieme
tipologia: appunti
stato: "1"
---
*Nozione primitiva di insieme, metodi di rappresentazione di un insieme, la questione dell'insieme vuoto $\emptyset$, sottoinsiemi.* 
- - -
# Nozione primitiva dell'insieme
Una *nozione primitiva* (ovvero una definizione, un concetto che viene dato per saputo) della matematica è l'*insieme*.
*L'insieme* equivale a ciò che riferiamo come un'aggregazione, una famiglia, un gruppo, oppure un ente che contiene oggetti (chiamati *elementi*) che condividono qualche caratteristica.
Per dire che un *elemento* appartiene ad un certo *insieme*, si usa la seguente notazione. $$ a \in A \text{ si legge come "a appartiene ad A"}$$
## Rappresentazione degli insiemi
**OSS.** Si può rappresentare un insieme nei seguenti due modi:
1. Mediante la *forma estensiva*, ovvero quella di elencare tutti gli elementi uno per uno.
2. Con la *forma intensiva*, ovvero quella di fissare un insieme *"universo"* (ambiente) e poi di caratterizzare gli elementi con una certa *proprietà*

**ESEMPIO DI 1.** Un insieme rappresentato mediante la forma estensiva è la seguente: $$A={1,2,3}$$
**ESEMPIO DI 2**. Un insieme rappresentato tramite la forma intensiva è l'insieme dei numeri pari $A$, $$A=\{n\in\mathbb{N}: \exists k\in\mathbb{Z} : n=2k\}$$In questo caso la l'insieme universo è $\mathbb{N}$ (ovvero i numeri naturali) e la proprietà caratterizzante è che deve esiste un numero intero $k$, tale che se moltiplicato per $2$ risulta $n$.
Per esempio il numero $4$ è pari in quanto esiste il numero intero $2$ a cui se moltiplicato $2$ viene fuori $4$. $4 = 2*2$ 
Alternativamente 3 non è pari in quanto non si può trovare nessun numero intero $k$ a cui se si moltiplica $2$ viene fuori $3$. $1*2 = 2, 2*2=4, ?*2=3$ 
## Uguaglianza degli insiemi
Secondo questa nozione primitiva due insiemi vengono considerati *uguali* se hanno gli stessi elementi; per esempio scriviamo $$A=\{a,b,c\}=\{b,a,c\}$$**OSS.** Notiamo subito che qui non conta l'ordine, a contrario di altri oggetti matematici, che potrebbero essere come le [coppie ordinate](Coppie%20Ordinate%20e%20Prodotto%20Cartesiano).

In una notazione più rigorosa, si dice che due insiemi $A$ e $B$ sono uguali se e solo se valgono entrambe le seguenti condizioni: $$\begin{align}&\forall a,a\in A\implies a\in B\\&\forall b, b\in B \implies b \in A \end{align} $$
# Sottoinsieme
Osservando da [[#Uguaglianza degli insiemi]], se vale solo una delle condizioni, che in questo caso prendiamo $\forall a,a\in A\implies a \in B$, allora si può riscriverla come la seguente: $$A \subseteq B \text{ si legge come "A contenuto in B" o "A è sottoinsieme di B"}$$Prestando questa notazione, si può riscrivere $A=B$ come $A \subseteq B \land B \subseteq A$; $$A=B \iff A\subseteq B \land B\subseteq A $$
## L'esistenza dell'insieme vuoto
**OSS.** Nella matematica è conveniente far esistere un insieme speciale **senza** elementi, ovvero l'insieme vuoto; indicato con $\emptyset$.

**PROPOSIZIONE 1.** Esiste solo un insieme vuoto; non possono esistere due o più insieme vuoti.
**DIMOSTRAZIONE.** Non possono esistere due o più insieme vuoti in quanto due insiemi $A$ e $B$ si differiscono per degli elementi che hanno; però questo non può essere per due insiemi vuoti. Questo perché, per definizione, questi insiemi vuoti non hanno elementi.

**PROPOSIZIONE 2.** L'insieme vuoto è contenuto in tutti gli insiemi; $$\forall A, \emptyset \subseteq A$$
## Insieme delle parti di un insieme 
**DEF.** Si definisce *l'insieme delle parti* di un certo insieme $A$ come l'*insieme di tutti i sottoinsiemi di A*. Nella teoria degli insiemi, si dà che questa esiste. 
Viene denotata come $$\mathcal{P}(A) \text{ si legge come "l'insieme delle parti di }A\text{"}$$
**ESEMPIO.** Sia $A=\{a,b,c\}$, costruire $\mathcal{P}(a)$.
	**DEF.** Si definiscono i *sottoinsiemi propri* le seguenti: $\emptyset, \{a\} \{b\}, \{c\}, \{a,b\}, \{a,c\}, \{b,c\}$; ovvero gli insiemi appartenenti a $\mathcal{P}(a)$ e non uguale ad $A$.
	Quindi un *sottoinsieme proprio* si definisce tale quando valgono entrambe le condizioni: $A_i \subset A \land A_i \neq A \text{ ove }A_i \text{ rappresenta un sottoinsieme proprio di A}$
L'insieme della parti è formato dall'insieme stesso e dai sottoinsiemi propri di $A$; pertanto $$\mathcal{P}(a) = \{\emptyset, \{a\} \{b\}, \{c\}, \{a,b\}, \{a,c\}, \{b,c\}, \{a,b,c\}\}$$ 
**ESERCIZIO 1.** Se $A$ ha $n$ elementi, quanti elementi ha $\mathcal{P}(a)$?
**SOLUZIONE-CONGETTURA.** $\mathcal{P}(a)$ ha $2^n$ elementi
**DIMOSTRAZIONE.** La seguente dimostrazione è strutturata in 4 passi.
1. Si definisce come esempio l'insieme $A=\{a,b,c,d\}$, quindi $n=4$.
2. Ora si rappresenta un sottoinsieme di $A$ mediante la codificazione in *binario*; ovvero quella di porre ogni elemento dell'insieme $A$ in una posizione $j$ e di segnare, se non presente $0$; se presente $1$
**ESEMPIO 1.** L'insieme vuoto $\emptyset$ viene rappresentato come $0$.
**ESEMPIO 2.** Il numero $1010$ rappresenta $\{a,c\}$
3. Ora se si vuole contare il numero di tutti i sottoinsiemi, si può partire dal numero $0$, che sarebbe il primo sottoinsieme fino ad arrivare il sottoinsieme $1111$; tuttavia si deve considerare il sottoinsieme vuoto $\emptyset$, pertanto il numero totale di sottoinsiemi diventa $1111+1$, che in binario eguaglia a $10000$.
4. Traducendo $10000_2$ al sistema decimale, esso diventa $2^4$, e il numero $4$ coincide con $n$. $\blacksquare$

