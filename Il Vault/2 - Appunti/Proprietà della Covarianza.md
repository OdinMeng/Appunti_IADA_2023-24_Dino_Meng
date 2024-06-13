---
data: 2024-05-10
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Proprietà della Covarianza
tipologia: appunti
stato: "1"
capitolo:
---
- - -
*Proprietà della covarianza. Simmetria, bilinearità e stima.*
- - -
# 0. Voci correlate
- [[Definizione di Covarianza]]
- [[Proprietà della Varianza]]
# 1. Simmetria, bilinearità e condizione necessaria per varianza nulla
#Proposizione 
> [!prp] prime proprietà della covarianza
> La covarianza gode delle proprietà della *simmetria* e *bilinearità*. Ovvero, date $X,Y$ delle variabili aleatorie aventi momento secondo finito e dati dei parametri $a,b \in \mathbb{R}$ abbiamo
> $$
> \begin{align}
> & \operatorname{cov}{(X,Y)}=\operatorname{cov}{(Y,X)} \\
> & \operatorname{cov}{(aX+bY, Z)}=a\operatorname{cov}{(X,Z)}+b\operatorname{cov}{(Y,Z)}
> \end{align}
> $$
> Inoltre abbiamo una *condizione sufficiente* per la *nullità della covarianza*. Infatti
> $$
> \operatorname{var}{X}=0 \implies \operatorname{cov}{(X,Y)}=0
> $$
^47fe13

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^47fe13]]
Le prime due si dimostrano direttamente mediante per *definizione*. La terza si dimostra usando una della proprietà della varianza ([[Proprietà della Varianza#^b15349]]), ovvero che la varianza è nulla se e solo se vale
$$
p\{X=E[X]\}=1
$$
poiché l'evento $\{X=E[X]\}$ è equivalente a $\{X-E[X]=0\}$ ed è incluso in $\{(X-E[X])(Y-E[Y])=0\}$ (la seconda parte non ci interessa, perché tanto la prima parte è tutta $\Omega$), abbiamo
$$
p\{(X-E[X])(Y-E[Y])=0\}=1
$$
Dunque, considerando $Z$ la variabile aleatoria $Z:=(X-E[X])(Y-E[Y])$ e applicandoci la stessa proprietà si ha
$$
E[Z]=0 \iff E[(X-E[X])(Y-E[Y])]=:\operatorname{cov}{(X,Y)}=0
$$
che prova la tesi. $\blacksquare$

#Osservazione 
> [!rmk] la covarianza delle stesse variabili aleatorie
> Se prendiamo la *covarianza* di due stesse variabili aleatorie, ovvero calcoliamo $\operatorname{cov}{(X,X)}$ otteniamo la varianza stessa. Infatti con i calcoli si dimostra che
> $$
> \operatorname{cov}{(X,X)}=\operatorname{var}(X)
> $$

# 2. Stima della Covarianza
Enunciamo una proprietà utile, dal punto di vista numerico (ovvero una versione *quantitativa* della terza proprietà)

> [!prp] la stima della covarianza
> Siano $X,Y$ delle *v.a. discrete aventi secondo momento finito*. Allora vale la stima
> $$
> \left|\operatorname{cov}{(X,Y)}\right|\leq \sigma_x \sigma_y = \sqrt{\operatorname{var}{X}\operatorname{var}{Y}}
> $$

# 3. Applicazione delle Proprietà
#Osservazione 
> [!rmk] la generalizzazione della varianza delle somme
> Per generalizzare il risultato sulla varianza delle somme ([[Proprietà della Varianza#^b2bc1a|1]]) basta considerare raggruppare *tutti* i termini in *due gruppi* e poi considerare le loro covarianze (per far ciò bisognerà usare la proprietà della covarianza!). Ad esempio abbiamo
> $$
> \operatorname{var}(\textcolor{RED}{X+Y}+\textcolor{MAGENTA}{Z})= \operatorname{var}{(X+Y)}+\operatorname{var}{Z}+2\operatorname{cov}{(X+Y,Z)}
> $$
> da cui, sfruttando la bilinearità, si ha
> $$
> \ldots=\operatorname{var}{X}+\operatorname{var}{Y}+\operatorname{var}{Z}+2(\operatorname{cov}{(X,Y)}+\operatorname{cov}{(X,Z)}+\operatorname{cov}(Y,Z))
> $$
> Possiamo generalizzare il risultato per induzione su $N$, con la formula
> $$
> \operatorname{var}{\left(\sum_{n=1}^N X_n\right)}=\sum_{n=1}^N\operatorname{var}{X_n}+\sum_{(k,j)\in \{1,\ldots,N\}^2: k\neq j}\operatorname{cov}{(X_k,X_j)}
> $$
> Notare che sulla seconda espressione non ci serve prendere la metà dato che la covarianza gode la proprietà della *riflessività*.

