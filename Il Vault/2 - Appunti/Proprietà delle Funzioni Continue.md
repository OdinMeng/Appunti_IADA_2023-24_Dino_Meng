---
data: 2024-03-28
corso:
  - "[[Analisi Matematica II]]"
argomento: Proprietà delle Funzioni Continue
tipologia: appunti
stato: "1"
capitolo: Struttura di R^N
---
- - -
*Proprietà delle funzioni continue in più variabili: funzioni continue mandano insiemi connessi in insiemi connessi; teorema dei zeri per i campi scalari; permanenza del segno per i campi scalari; teorema della compattezza; teorema di Weierstraß su più variabili.*
- - -
# 0. Voci correlate
- [[Teoremi sulle funzioni continue]]
- [[Insiemi compatti in R]]
- [[Topologia in RN]]
# 1. Funzioni mandano insiemi connessi in insiemi connessi
#Teorema 
> [!thm] funzioni continue mandano connessi in connessi
> Se $f:C \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ è *continua*, allora vale l'implicazione
> $$
> C \text{ connesso} \implies f(C) \text{ connesso}
> $$
^089885

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^089885]]
Siano $y_1, y_2 \in f(C)$. Per ipotesi devono esistere $\underline{x_1}, \underline{x_2}$ tali che $f(\underline{x_1})=y_1$ e $f(\underline{x_2})=y_2$.
Ma allora, dato che $C$ è connesso, dev'esistere un percorso $\gamma$ tale che $\gamma(0)=\underline{x_0}$ e $\gamma(1)=\underline{x_1}$. Adesso basta considerare la funzione composta
$$
\boxed{\tilde{\gamma}=f \circ \gamma}
$$
e si ha infatti
$$
\tilde{\gamma}(0)=f(\gamma(0))=f(\underline{x_0})=y_1
$$
e analogamente
$$
\tilde{\gamma}(1)=y_1
$$
che prova $f(C)$ connesso. $\blacksquare$

# 2. Teorema dei zeri per campi scalari
#Teorema 
> [!thm] dei zeri, per campi scalari
> Sia $f:E\subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ *continua* con $E$ *connessa*.
> Allora, se esistono due punti $\underline{x}, \underline{y} \in E$ tali che $f(\underline{x})f(\underline{y})<0$ (ovvero sono di *segni discordi*), allora esiste un punto $\underline{\xi} \in E$ tale che $f(\underline{\xi}) = 0$.
> $$
> \exists \underline{x},\underline{y} \in E: f(\underline{x})f(\underline{y})<0 \implies \exists \underline{\xi} \in E: f(\underline{\xi})=0
> $$
^5a2817

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^5a2817]]
Idea: basta prendere il percorso $\gamma^{\underline{x} }_{\underline{y} }$ e applicare il *teorema dei zeri* per le funzioni di variabile reale ([[Teoremi sulle funzioni continue#^8b33e1]]).
La dimostrazione completa è stata omessa. $\blacksquare$

# 3. Permanenza del segno per campi scalari
#Corollario 
> [!cor] permanenza del segno, per campi scalari continui
> Sia $f:E\subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ *continua* con $E$ *connessa*.
> Se $f$ *non si annulla mai*, allora $f$ dev'essere a segno permanente.
> Ovvero,
> $$
> \forall \underline{x} \in E, f(\underline{x})\neq 0 \implies \forall \underline{x_1},\underline{x_2} \in E, f(\underline{x_1})f(\underline{x_2})>0
> $$
^954982

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^954982]]
La tesi di questo corollario è semplicemente la contronominale del *teorema dei zeri per i campi scalari* ([[#^5a2817]]). $\blacksquare$

# 4. Teorema della compattezza
#Teorema 
> [!thm] della compattezza
> Sia $f:K \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}^M$ *continua*.
> Vale che se $K$ è *compatto*, allora $f(K)$ è *compatto*.
^1926c3

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^1926c3]]
Omessa. Per vedere la dimostrazione del caso $N=M=1$, leggere la pagina [[Teoremi sulle funzioni continue#^e156c6]]. $\blacksquare$

# 5. Teorema di Weierstraß
#Teorema 
> [!thm] di Weierstraß
> Se $f:K \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}^M$ è *continua* e $K$ è *compatto*, allora vale che $f$ ammette un *minimo* e un *massimo*;
> $$
> \exists \min_{\underline{x} \in K}f(\underline{x})\land \exists \max_{\underline{x} \in K}f(\underline{x})
> $$
^1bb47a

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^1bb47a]]
Omessa. Per la dimostrazione del caso $N=M=1$, vedere la pagina [[Teoremi sulle funzioni continue#^918fc1]]. $\blacksquare$
