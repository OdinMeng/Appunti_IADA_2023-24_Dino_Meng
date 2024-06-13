---
data: 2024-05-19
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Legame tra Densità Esponenziale e Geometrica
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Assolutamente Continue
---
- - -
*Breve osservazione sulla variabile aleatoria esponenziale: legame con la geometrica.*
- - -
# 0. Voci correlate
- [[Densità Esponenziale]]
- [[Densità Geometrica]]
# 1. Esponenziale alla Geometrica
Ricordiamo che entrambe le *densità esponenziale* e *geometrica* godono dell'*assenza di memoria* ([[Densità Esponenziale#^a8b79c]], [[Densità Geometrica#^50d562]]). Come mai? C'è un legame tra queste due? Veramente, non riesco a dormire la notte per questa domanda...

A parte gli scherzi, esiste un legame matematico tra queste due. Partiamo dal legame che *lega* l'esponenziale *alla* geometrica.

#Osservazione 
> [!rmk] la geometrica è una discretizzazione dell'esponenziale
> Partiamo dalla densità geometrica $X \sim \mathcal{E}(\lambda)$. Si ha che questa non è altro che una *versione continua* della densità geometrica $\text{Geo}(q)$. 
> 
> Infatti, prendendo la composizione $Y:=\left \lfloor{X}\right \rfloor$, abbiamo che per $k \in \mathbb{N}$ la sua densità è
> $$
> p\{Y=k\}=p\{k \leq X < k+1\} =F(k+1)-F(k)=\ldots=e^{-\lambda k}(1-e^{\lambda})
> $$
> Ovvero abbiamo $\operatorname{Geo}{(1-e^{-\lambda})}$.

# 2. Geometrica alla Esponenziale
Si può fare anche un ragionamento all'inverso.

#Osservazione 
> [!rmk] l'esponenziale è una fit della geometrica
> Inversamente si ha che *l'esponenziale* è una specie di *"fit"* per la *geometrica*: ovvero abbiamo un grafico con dati *discreti*, che diventano *continue* con una funzione che li *"fitta"*. 
> 
> Data una *successione di variabili aleatorie geometriche* $(Y_n)_n$ con $Y_i \sim \operatorname{Geo}{(q_i)}$, con $\lim_n q_n \to 0$, si prende $\lim_n s_n \to 0$ una successione tale che $\lim_n \frac{q_n}{s_n} \to \lambda \in (0,+\infty)$. 
> 
> Ponendo $X_n := s_n Y_n$ si ha che $X_n$ *converge in legge* ad un'esponenziale $X \sim \mathcal{E}(\lambda)$. Infatti la sua densità è
> $$
> \begin{align}
> p\{X_n \leq x\}=p\left\{Y_n \leq \frac{x}{s_n} \right\}&= p\left\{Y_n \leq \left\lfloor\frac{x}{s_n} \right\rfloor\right\}\\ &= 1-p\left\{Y_n > \left\lfloor\frac{x}{s_n} \right\rfloor\right\} \\
> &= 1- (1-q_n)^{\left \lfloor\frac{x}{s_n} \right \rfloor}
> \\
> \lim_n\implies ''&= 1-(1-\lambda s_n)^{\frac{x}{s_n} }\to 1-e^{-\lambda x}
> \end{align}
> $$
> che prova $X_n \to X$.

