---
data: 2024-03-28
corso:
  - "[[Analisi Matematica II]]"
argomento: Curve e Superfici Parametriche
tipologia: appunti
stato: "1"
capitolo: Struttura di R^N
---
- - -
*Definizione di curva parametrica, esempio del spirale. Superfici parametriche: definizione. Esempi: parametrizzazione di un cilindro e di una sfera.*
- - -
# 0. Voci correlate
- [[Definizione di RN]]
- [[Definizione di Funzione in più variabili]]
# 1. Curve Parametriche
#Definizione 
> [!def] curva parametrica
> Si definisce *curva parametrica* come una *funzione in più variabili* $f$ con $N=1$ e $M=2$ ([[Definizione di Funzione in più variabili|1]]); ovvero una funzione del tipo
> $$
> f: \mathbb{R} \longrightarrow \mathbb{R}^2
> $$

#Osservazione 
> [!rmk] convenzione di rappresentazione delle curve parametriche
> Per rappresentare una *curva parametrica*, si potrebbe usare lo *spazio in tre dimensioni*. Tuttavia, per convenzione usiamo un *piano in due dimensioni*, dove le coordinate $x_1,x_2$ rappresentano le *"posizioni"* della funzione $f(x)$.

^bb0c40

**FIGURA 1.1.** (*Esempio qualitativo di una curva parametrica*)
![[Pasted image 20240328123006.png]]

#Esempio 
> [!exm] la circonferenza-spirale
> Sia $f:[0, 2\pi]\longrightarrow \mathbb{R}^2$ una *curva* definita come
> $$
> f(t)=\left(\cos t, \sin t\right), 0 \leq t \leq 2\pi
> $$
> allora $f(E)$ è una *circonferenza* con la convenzione di rappresentazione appena enunciata ([[#^bb0c40|1]]); tuttavia, estendendolo con una dimensione aggiuntiva $t$ e il dominio alla retta reale $E=\mathbb{R}$ si vede che è una spirale (*figura 1.2.*).

^fafcf9

**FIGURA 1.2.**
![[Pasted image 20240328123549.png]]

# 2. Superfici parametriche
#Definizione 
> [!def] superficie parametrica
> Si dice *superficie parametrica* una funzione $f$ in più variabili da $N=2$ a $M=3$, ovvero del tipo
> $$
> f: E \subseteq \mathbb{R}^2 \longrightarrow \mathbb{R}^3
> $$

#Esempio 
> [!exm] il cilindro
> Prendiamo
> $$
> f:[0, 2\pi]\times [-1,2] \longrightarrow (\cos u, \sin u, v)
> $$
> ovvero
> $$
> f(u,v)=(\cos u, \sin u, v)
> $$
> Per rappresentare questa funzione è utile prendere un valore $v$ *fissato*. e vedere come si comporta $f$. Vediamo, come nell'esempio della circonferenza ([[#^fafcf9|1]]), che la funzione si comporta come una *circonferenza* estesa per il valore $v$. Di conseguenza, ho un *cilindro* (*figura 2.1.*).

**FIGURA 2.1.** (*Il cilindro*)
![[Pasted image 20240328124257.png]]

#Esempio 
> [!exm] la parametrizzazione di una sfera
> Nell'esempio precedente abbiamo dedotto la superficie da una funzione. Adesso facciamo il contrario; da una superficie deduciamo la funzione.
> 
> Prendiamo una sfera centrata nell'origine $O=(0,0,0)$ e con raggio $R$. 
> Sia fissato un punto $P(x,y,z)$ sulla sfera; si vede immediatamente nel il segmento $OP$ (con lunghezza $R$) c'è un angolo $\varphi$. Di conseguenza, possiamo parametrizzare la coordinata $z$ del punto con $z=R\cos \varphi$. 
> 
> Adesso prendiamo la *proiezione* di questo punto sul piano $(x,y)$, che chiameremo $Q(x,y,z)$. Allora abbiamo che il segmento $OQ=R\sin \varphi$, dato che abbiamo un *triangolo rettangolo*.
> 
> Dopodiché osserviamo che tra il segmento $OQ$ e l'asse $x$ c'è un angolo $\theta$.
> 
> Infine, effettuando ulteriori proiezioni, basta prendere le coordinate $x,y$ in funzione del punto $Q$; per le regole della trigonometria abbiamo semplicemente
> $$
> x=R\sin\varphi \cos \theta, y=R \sin \varphi \sin \theta
> $$
> 
> Infine otteniamo la funzione definita su $[0, \pi] \times [0, 2\pi[$ 
> $$
> f(\varphi, \theta)=(R\sin\varphi\cos\theta, R \sin\varphi\sin \theta, R \cos \varphi)
> $$

**FIGURA 2.2.** (*La sfera*)
![[Pasted image 20240328125933.png]]
