---
data: 2024-03-25
corso:
  - "[[Analisi Matematica II]]"
argomento: Topologia di R^N
tipologia: appunti
stato: "1"
capitolo: Struttura di R^N
---
- - -
*Trasposizione teorica delle definizioni della topologia della retta reale su R^N.*
- - -
# 0. Voci correlate
- [[Definizione di RN]]
- [[Definizione di Spazio Metrico]]
- [[Intorni]]
- [[Punti interni, esterni e di frontiera]]
- [[Insiemi aperti e chiusi]]
- [[Punti di aderenza e di accumulazione]]
# 1. Preambolo
#Osservazione 
> [!rmk] preambolo
> Conoscendo le *definizioni della topologia della retta reale*, possiamo espandere queste definizioni in $\mathbb{R}^N$. Parleremo quindi di *sfere aperte e chiuse*, *intorni*, *insiemi chiusi e chiusure di insiemi*, *punti interni*, *interni degli insiemi e insiemi aperti*, *punti di frontiera*, *frontiera di insiemi*, *insiemi limitati*.

# 2. Sfere aperte e chiuse di punti, intorni di punti
#Definizione 
> [!def] sfera aperta e chiusa
> Sia $\underline{x_0} \in \mathbb{R}^N$, sia $r>0$ un numero qualunque.
> Si dice *"sfera aperta centrata* in $\underline{x_0}$ *con raggio* $r$*"* l'insieme
> $$
> B(\underline{x_0}, r) = \left\{\underline{x} \in \mathbb{R}^N: d(\underline{x}, \underline{x_0}) < r\right\}
> $$
> oppure *"sfera chiusa centrata in* $\underline{x_0}$ *con raggio* $r$*"* l'insieme
> $$
> B[\underline{x_0}, r] = \left\{\underline{x} \in \mathbb{R}^N : d(\underline{x}, \underline{x_0}) \leq r\right\}
> $$ 

^9372d5

#Definizione 
> [!def] intorno di un punto-vettore
> Si dice *"intorno di* $\underline{x_0} \in \mathbb{R}^N$*"* un insieme $\mathcal{U}(\underline{x_0}) \subseteq \mathbb{R}^N$ tale che contenga una *sfera qualunque* di $\underline{x_0}$. Ovvero,
> $$
> \mathcal{U}(\underline{x_0}) \supseteq B(\underline{x_0}, r)
> $$

^10f5d2

**FIGURA 2.1.** (*Illustrazione grafica di un intorno*)
![[Pasted image 20240325202241.png]]

# 3. Punti di accumulazione e chiusura di un insieme
#Definizione 
> [!def] punto di accumulazione e derivato di un insieme
> Sia $\underline{x_0} \in \mathbb{R}^N$ e sia $E \subseteq \mathbb{R}^N$.
> Il punto-vettore $\underline{x_0}$ si dice *"punto di accumulazione per $E$"* se vale che in *ogni intorno di* $\underline{x_0}$ *esiste un punto di $E$ che non sia $x_0$*. Ovvero,
> $$
> \forall \mathcal{U}(\underline{x_0}) , \exists \underline{\tilde{x} }\in\left(\mathcal{U}(\underline{x_0})\cap E\right): \underline{\tilde{x} }\neq \underline{x_0} 
> $$
> Altrimenti, se vale la negazione allora si dice che è un *punto isolato*.
> 
> L'insieme degli punti di accumulazione per $E$ si dice *"derivato di $E$"* e la si denota con $\mathcal D E$

#Definizione 
> [!def] chiusura di un insieme e insieme chiuso
> Sia $E \subseteq \mathbb{R}^N$. Si dice *la chiusura di* $E$ l'insieme definita come
> $$
> \overline{E\ }:= E \cap \mathcal{D} E
> $$
> 
> L'insieme $E$ si dice *chiuso* se vale che $E = \overline{E \ }$.

# 5. Punto interno, interno e insieme aperto
#Definizione 
> [!def] punto interno per un insieme
> Sia $E \subseteq \mathbb{R}^N$. Un punto $\underline{x_0} \in \mathbb{R}^N$ si dice *"interno a $E$"* se vale che $E$ è *intorno* di $\underline{x_0}$. Ovvero, prendendo un intorno qualsiasi $\mathcal{U}=\mathcal{U}(\underline{x_0})$ si ha che $\mathcal{U} \cap E \neq \emptyset$.

^b4d155

#Definizione 
> [!def] interno di un insieme e insieme aperto
> Sia $E \subseteq \mathbb{R}^N$. Si dice *"interno di $E$"* come l'insieme dei *punti interni* ad $E$. Ovvero,
> $$
> \mathop E\limits^ \circ := \{\underline{x} \in \mathbb{R}^N: \underline{x} \ \text{interno a }E\}
> $$
> In particolare un insieme si dice aperto se vale che $E = \mathop E\limits^ \circ$.

^3a70fb

# 6. Punti di frontiera e frontiera
#Definizione 
> [!def] punti di frontiera
> Sia $E \subseteq \mathbb{R}^N$.
> Un punto $\underline{x_0} \in \mathbb{R}^N$ si dice *"punto di frontiera per $E$"* se vale che $\underline{x_0}$ non è *né interno né esterno ad $E$*. Ovvero,
> $$
> \forall \mathcal{U}=\mathcal{U}(\underline{x_0}), \left\{ \begin{align}&\exists \underline{x} \in (\mathcal{U} \cap E) \\ &\exists \underline{x}' \in (\mathcal{U} \cap \mathcal{C}_{\mathbb{R}^N}E) \end{align} \right.
> $$

#Definizione 
> [!def] frontiera di un insieme
> Si dice *"frontiera di un insieme* $E \subseteq \mathbb{R}^N$*"* come l'insieme dei punti di frontiera per $E$. Viene denotata con $\partial E$.

#Esempio 
> [!exm] esempio di frontiera di un insieme
> Sia l'insieme $E$ definita come segue:
> $$
> E = \left\{\underline{x} \in \mathbb{R}^2: 4 \leq x_1^2 + x_2^2 < 9\right\}
> $$
> La frontiera di $E$ sono le *"circonferenze che delimitano l'insieme $E$"*.
> $$
> \partial E = \left\{\underline{x} \in \mathbb{R}^2 : x_1^2+x_2^2 =4 \vee x_1^2+x_2^2 = 9\right\}
> $$

# 7. Insiemi limitati
#Definizione 
> [!def] insieme limitato
> Un insieme $E \subseteq \mathbb{R}$ si dice *limitato* se esistono:
> - Un punto $\underline{x_0} \in \mathbb{R}^N$
> - Un raggio $R>0$
> Tali che esista una *sfera* $B(\underline{x_0}, R)$ che contenga $E$. Ovvero,
> $$
> \exists \underline{x_0} \in \mathbb{R}^N, R>0: B(\underline{x_0}, R)\supseteq E
> $$

# 8. Insiemi Connessi
#Definizione 
> [!def] insieme connesso per archi in $\mathbb{R}^N$
> Si dice che un insieme $C \subseteq \mathbb{R}^N$ è *"connesso per archi"* se vale la condizione
> $$
> \begin{gather}
> \forall \underline{x},\underline{y} \in C, \exists \gamma:[0,1] \longrightarrow C\in \mathcal{C}^0:   \\ \gamma(0)=\underline{x}, \gamma(1)=\underline{y}
> \end{gather}
> $$
> In parole, questa condizione vuol dire che *"se prendo due punti distinti dell'insieme connesso, allora deve esistere almeno un cammino (o una curva parametrica continua) che inizia col primo punto e finisce col secondo punto"*.

**FIGURA 8.1.** (*Insieme connesso e non connesso*)
![[Pasted image 20240328144741.png]]

#Osservazione 
> [!rmk] gli intervalli sono insiemi connessi
> Osservare che gli *intervalli* su $\mathbb{R}$ sono insiemi connessi.

# 9. Insiemi Compatti
#Definizione 
> [!def] insieme compatto in $\mathbb{R}^N$
> Un insieme $K \subseteq \mathbb{R}^N$ si dice *compatto* se vale che *ogni successione* $(x_n)_n$ a valori in $K$ ha una sua *sotto successione* $(x_{n_k})_k$ convergente ad un punto $\underline{x} \in K$.

#Teorema 
> [!thm] di Heine-Borel
> Un insieme $K \subseteq \mathbb{R}^N$ gode della seguente equivalenza.
> $$K \text{ compatto} \iff K \text{ chiuso e limitato} $$
