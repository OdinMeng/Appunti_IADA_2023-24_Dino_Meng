---
data: 2024-05-10
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Definizione di Covarianza
tipologia: appunti
stato: "1"
capitolo:
---
- - -
*Definizione di covarianza. Definizione di variabili aleatorie scorrelate. Condizione sufficiente per variabili aleatorie scorrelate.*
- - -
# 0. Voci correlate
- [[Proprietà della Varianza]]
# 1. Definizione di Covarianza
**PREAMBOLO.** Dal calcolo della *covarianza* della somma di *due variabili aleatorie* $X,Y$ ([[Proprietà della Varianza#^b2bc1a]]) abbiamo ottenuto il risultato finale 
$$
\operatorname{var}(X_1+X_2)=\operatorname{var}X_1+\operatorname{var}{X_2}+2(\textcolor{RED}{E[X_1X_2]-E[X_1]E[X_2]})
$$
Notiamo che c'è questa parte in rosso che non è *eliminabile*: questo ci fa dire subito che *non sempre* vale la linearità sulla varianza. Ma cosa ci fa dire questa entità? Cosa significa? Cos'è? Diamone una definizione.

#Definizione 
> [!def] covarianza di due variabili aleatorie
> Date due *discrete variabili aleatorie* $X_1,X_2$ aventi *momento secondo finito*, definiamo la *covarianza* di queste variabili aleatorie come
> $$
> \operatorname{cov}{(X_1,X_2)}:=E[X_1X_2]-E[X_1]E[X_2]
> $$

A seconda del valore assunto dalla *covarianza*, possiamo classificare il comportamento di due variabili aleatorie.

#Definizione 
> [!def] variabili aleatorie scorrelate (o non correlate)
> Date due *variabili aleatorie discrete* $X_1,X_2$ aventi *momento secondo finito*, si dice che queste sono *scorrelate* se vale che la loro covarianza è nulla
> $$
> \operatorname{cov}{(X_1,X_2)}=0
> $$

# 2. Legame tra Variabili Aleatorie Scorrelate e Indipendenti
Poniamo questa osservazione sotto forma di proposizione

#Proposizione 
> [!prp] indipendenza implica scorrelatezza
> Due *variabili aleatorie aventi momento secondo finito* $X_1,X_2$, se queste *sono indipendenti* allora essi sono *scorrelate*. Tuttavia *non* vale il viceversa! 
^2912ab

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^2912ab]]
Basta usare il fatto che con l'*indipendenza* il prodotto *commuta con la media* ([[Proprietà del Valore Medio#^26b472]]). Infatti abbiamo
$$
E[X_1X_2]=E[X_1]E[X_2] \implies E[X_1X_2]-E[X_1]E[X_2]=\operatorname{cov}{(X_1,X_2)}=0
$$
che dimostra la tesi. Per dimostrare che non vale il viceversa, vedere l'esempio a seguito ([[#^e9194c]]). $\blacksquare$

#Esempio 
> [!exm] non vale il viceversa
> Consideriamo una variabile aleatoria tale che
> $$
> P\{X=-1\}=P\{X=0\}=P\{X=1\}
> $$
> Poniamo poi $Y=X^2$, con
> $$
> P\{Y=0\}=\frac{1}{3}, P\{Y=1\}=\frac{2}{3}
> $$
> Dato che $E[X]=0$ e $X^3=X$, abbiamo che la covarianza tra $X,Y$ è nulla:
> $$
> E[XY]=E[X^3]=E[X]=0 \implies \operatorname{cov}{(X,Y)}=0
> $$
> Tuttavia queste non *sono indipendenti*! Infatti supponendo tale ci sarebbe l'assurdo per cui
> $$
> P\{X=1, Y=0\}=P\{X=1, X^3=0\}=0
> $$
> che contraddice col fatto che
> $$
> P\{X=1\}P\{Y=0\}=\frac{1}{9}\neq 0
> $$

^e9194c

