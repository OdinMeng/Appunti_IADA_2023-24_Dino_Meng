---
data: 2024-05-12
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Funzione di Ripartizione per Variabili Aleatorie Assolutamente Continue
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Assolutamente Continue
---
- - -
*Definizione di funzione di ripartizione. Proprietà della funzione di ripartizione: comportamento asintotico, dalla funzione di ripartizione si ricava la densità.*
- - -
# 0. Voci correlate
- [[Variabile Aleatoria Assolutamente Continua]]
# 1. Definizione di Funzione di Ripartizione
Come abbiamo visto in [[Variabile Aleatoria Assolutamente Continua]], abbiamo che
$$
p\{X=x\}=0
$$
Dunque definendo $q(x)$ nello stesso modo per il caso discreto, avremo sempre $0$ (che è inutile). Conviene dunque introdurre il concetto di *funzione di ripartizione*, che va a *"sostituire"* $q(x)$.

#Definizione 
> [!def] funzione di ripartizione di una v.a. assolutamente continua
> Data una variabile aleatoria $X$ avente densità $f$, chiameremo la sua *funzione di ripartizione* (di $X$) la funzione $F:\mathbb R \longrightarrow [0,1]$ definita come l'integral-funzione
> $$
> F(t):=p\{X\leq t\}=\int_{]-\infty, t]}f
> $$

Ricaviamo immediatamente il suo *comportamento asintotico*.

#Proposizione 
> [!prp] comportamento asintotico della funzione di ripartizione
> Si ha che la funzione di ripartizione $F$ gode dei seguenti limiti.
> $$
> \lim_{t \to -\infty}F(t)=0 \land \lim_{t \to +\infty}F(t)=1
> $$
> Poiché si avrebbe gli intervalli di definizione $(-\infty,-\infty)=\emptyset$ e $(-\infty,+\infty)=\mathbb{R}$.

# 2. Proprietà della Funzione di Ripartizione
#Teorema 
> [!thm] ricavare la funzione di ripartizione dalla densità e viceversa
> Sia $f$ continua definita su un intervallo limitato. Allora per il *teorema fondamentale del calcolo* ([[Teorema Fondamentale del Calcolo Integrale#^99ef41|1]]) si ha che la sua integral-funzione (in particolare la *funzione di ripartizione*) $F$ è *derivabile* con
> $$
> F'=f
> $$
> scegliendo $C=0$, per evitare traslazioni in verticale e per mantenere la *monotonia*.
> 
> Il teorema vale lo steso per $f$ continua *ad eccezione di un numero finito di punti* $x_1<\ldots<x_n$: in questo caso $F$ è derivabile negli intervalli per cui $f$ è continua.
> 
> Inoltre vale il viceversa: se $F$ associata a $X$ è *derivabile con derivata continua* a tratti, allora la densità di $X$ è $f=F'$.
