---
data: 2023-11-01
corso: "[[Analisi Matematica I]]"
argomento: Successione e Sottosuccessione
tipologia: appunti
stato: "1"
---
*Appunto ad-hoc sulle successioni e sulle sottosuccessioni (successioni estratte)*
- - -
# 1. Successione
#Definizione 
> [!def] Definizione 1.1. (successione)
Sia $f$ una funzione del tipo $$f: \mathbb{N} \longrightarrow A$$dove $\mathbb{N}$ è l'insieme dei numeri naturali ([[Struttura dell'insieme dei numeri naturali]]), la chiamiamo (*tradizionalmente*) come una *successione a valori in A* e la indichiamo con $$(a_n)_n$$dove $f(n) = a_n$; ovvero $$(a_n)_n = (a_0, a_1, \ldots, a_n)$$

#Definizione 
> [!def] Definizione 1.2. (successione a variabile reale)
Se $A = \mathbb{R}$, allora avremmo una *successione a valori in $\mathbb{R}$*, oppure una *successione reale*. 
^e6d66f

#Definizione 
> [!def] Definizione 1.3. (successione limitata)
Si definisce una *successione limitata* quando si verifica che $$\exists M >0: \forall n, |a_n|<M$$ ^73b5cc

# 2. Sottosuccessione (successione estratta)
#Definizione 
> [!def] Definizione 2.1. (successione estratta)
Data una funzione $j$ *strettamente crescente* che sia anche una successione a valori in $\mathbb{N}$, ovvero del tipo $$j: \mathbb{N} \longrightarrow \mathbb{N}; k \mapsto n_k$$quindi abbiamo una successione del tipo $$(n_k)_k = (n_0, n_1, \ldots n_k)$$Ora sia $(a_n)_n$ una *successione a valori in A*, con la funzione $f$; ovvero $$f: \mathbb{N} \longrightarrow A$$
Ora consideriamo la *composizione* ([[Funzioni#^a248be]])$$f \circ j:\mathbb{N} \longrightarrow \mathbb{N} \longrightarrow A; k \mapsto n_k \mapsto {a_{n_{k}}} $$Questa la chiamiamo *sotto successione* o *successione estratta* di $$(a_n)_n$$ e la chiamiamo $$(a_{n_{k}})_k$$

#Osservazione 
> [!oss] Osservazione 2.1. (idea del concetto)
*Idea.* L'idea di questo concetto consiste nel *"selezionare"* alcuni elementi di una successione e poi di *"ricompattarli"*, ottenendo così una nuova successione. Consideriamo ad esempio la successione $(a_n)_n$: $$a_0, a_1, a_2, a_3, a_4, \ldots, a_n$$Ora voglio scegliere gli *"indici"* $0, 2, 3, n$; quindi ora ho $$n_0 = 0, n_1=2, n_2=3, n_3 = n$$che va a formare proprio una nuova successione $({n_k})_k$. Ora se considero la successione di prima, considerando però solo gli elementi di $(n_k)_k$, ottengo la nuova successione $$a_{n_0} = a_0 , a_{n_1}=a_2, a_{n_2} = a_3, a_{n_3} = a_n$$Ovvero $$a_0, a_2, a_3, a_n$$

#Osservazione 
> [!oss] Osservazione 2.2. (la monotonia di una sotto successione è una conseguenza)
Osservo che secondo questa *"costruzione"* di una *successione estratta*, la *monotonia crescente* della *"successione degli indici"* $j$ è una semplice conseguenza.