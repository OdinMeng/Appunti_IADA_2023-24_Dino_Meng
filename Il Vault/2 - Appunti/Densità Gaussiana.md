---
data: 2024-05-12
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Densità Gaussiana
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Assolutamente Continue
---
- - -
*Densità gaussiana (o normale). Definizione di densità standard, densità di parametri $\mu$ e $\sigma$. Esempi qualitativi di gaussiane con parametri. Proposizione: la somma di gaussiane indipendenti forma una gaussiana.*
- - -
# 0. Voci correlate
- [[Variabile Aleatoria Assolutamente Continua]]
# 1. Densità Gaussiana Standard
#Definizione 
> [!def] densità gaussiana standard
> Diciamo che una *variabile aleatoria* $X$ ha *densità gaussiana standard* se la sua densità è
> $$
> f(x)=\frac{1}{\sqrt{2\pi} }e^{-\frac{x^2}{2} }
> $$
> e lo indichiamo come $\mathcal{N}(0,1)$ (vedremo perché lo parametrizziamo con $0,1$).

^eb19d3

Si dimostra che $\mathcal{N}(0,1)$ è integrabile con $\int_\mathbb{R}f=1$, ma i nostri strumenti non sono sufficienti per dimostrarlo (infatti l'integrale $\int e^{-x^2} \ \text{d}x$ non è esprimibile in termini di funzioni elementari; si usa l'integrazione in più variabili per dimostrare che effettivamente il suo integrale è $\sqrt{\pi}$).

#Teorema 
> [!thm] funzione di ripartizione, media e varianza della gaussiana standard
> Abbiamo che per la *gaussiana standard* $\mathcal{N}(0,1)$ valgono le seguenti.
> 
> i. *Funzione di ripartizione*
> $$
> F(t)=\frac{1}{\sqrt{2\pi} }\int_{-\infty}^t e^{-\frac{x^2}{2} }\text{d}x
> $$
> ii. *Media*
> $$
> \begin{gather}
> E[X]=\frac{1}{\sqrt{2\pi} }\underbracket{\int_{\mathbb{R} }xe^{-\frac{x^2}{2} }\ \text{d}x}_{\text{dispari} } = 0 \\
> E[X^2]=\frac{1}{\sqrt{2\pi} }\int_{\mathbb{R} }x^2e^{-\frac{x^2}{2} }\text{d}x =\underbracket{\left.-\frac{xe^{-\frac{x^2}{2} } }{\sqrt{2\pi}}\right|_{-\infty}^{+\infty}}_{0}+\underbracket{\frac{1}{\sqrt{2\pi} }\int_{\mathbb{R}}e^{-\frac{x^2}{2} }\ \text{d}x}_{1}=1
> \end{gather}
> $$
> iii. *Varianza*
> $$
> \operatorname{var}{X}=E[X^2]-E[X]^2=1^2
> $$

# 2. Densità Gaussiana Generale
#Definizione 
> [!def] densità gaussiana con parametri
> Diciamo che una *variabile aleatoria* $X$ ha *densità gaussiana di parametri $\mu \in \mathbb{R}$ e $\sigma>0$*, se la sua densità è
> $$
> \boxed{f(x)=\frac{1}{\sqrt{2\pi \sigma^2} } e^{-\frac{1}{2}\left(\frac{x-\mu}{\sigma}\right)^2 } }
> $$
> e la indichiamo con $\mathcal{N}(\mu, \sigma^2)$.

Adesso vediamo un trucchetto utile per i calcoli con la *gaussiana generale*.

#Osservazione  
> [!rmk] relazione tra la gaussiana standard e generale
> Notiamo che con le notazioni appena applicate, ci dev'essere qualcosa in comune tra la *gaussiana standard* e la *gaussiana generale*. In questo caso vogliamo trovare un modo per far *ricondurre* la gaussiana generale alla gaussiana standard.
> 
> Ricordo preliminarmente che per *trasformazioni lineari* di *variabili aleatorie assolutamente continue* rimangono *variabili aleatorie assolutamente continue*, con densità
> $$
> g(x)=f\left(\frac{x-\beta}{\alpha}\right)\frac{1}{|\alpha|}
> $$
> ([[Variabile Aleatoria Assolutamente Continua#^c13554|1]]). 
> 
> Allora prendendo $Y \sim \mathcal{N}(\mu, \sigma^2)$ e $X \sim \mathcal{N}(0, 1)$ posso scrivere
> $$
> Y=\sigma X+\mu
> $$
> Per convincerti di questo scrivere la legge $g$.

#Teorema 
> [!thm] funzione di ripartizione, media e varianza della gaussiana generale
> Siano $X \sim \mathcal N(\mu, \sigma^2)$ e $Y \sim \mathcal{N}(0,1)$ e $F(t)$ la sua funzione di ripartizione. Allora valgono le seguenti formule.
> 
> i. *Funzione di ripartizione*
> $$
> G(t)=\frac{1}{\sqrt{2\pi\sigma^2} }\int_{-\infty}^t e^{ {-\frac{1}{2} } \left(\frac{x-\mu}{\sigma}\right)^2} \text{d}x =F\left(\frac{t-\mu}{\sigma}\right) 
> $$
> ii. *Media*
> $$
> E[X]=E[\sigma X+\mu]=\sigma E[X]+\mu=\mu
> $$
> iii. *Varianza*
> $$
> \operatorname{var}{Y}=\operatorname{var}{(\sigma X+\mu)}=\sigma^2\operatorname{var}X=\sigma^2
> $$

# 3. Studio Qualitativo di Gaussiane Generali
Prendiamo il seguente grafico, che rappresenta le *densità gaussiane* aventi parametri diversi.
![[fig0.png]]
Diamo un una breve e veloce *analisi qualitativa*.

**BLU, ROSSO E GIALLO.** Qui tutti i parametri $\mu$ sono settati in $0$. Infatti, notiamo che sono tutti *"centrati"* proprio nel punto $0$.

**BLUE E GIALLO.** Nelle due curve notiamo una grandissima differenza tra i loro picchi. Infatti, differiscono del parametro $\sigma$ di *molto!* Più grande è la $\sigma$, più si appiattisce (quindi si distribuisce lungo la retta); invece più piccola è, più si concentra sul punto di concentrazione (ovvero il valor medio $\mu$). Notiamo che per $\sigma \to 0$ ottengo una *variabile aleatoria discreta*, con $p\{X=\mu\}=1$ e $p\{X \neq \mu\}=0$. Questa è infatti il *delta di Dirac*.

# 4. Somma di Gaussiane
#Proposizione 
> [!prp] la somma di gaussiane
> Siano $X_1,\ldots, X_n$ delle *variabili aleatorie indipendenti* con densità gaussiana $\mathcal{N}(\omega_k, \sigma^2_k)$.
> 
> Sia $X:=\sum_k X_k$. Allora vale che $X$ è una *v.a. gaussiana* con densità
> $$
> X \sim \mathcal{N}\left(\sum_{k=1}^n \mu_k , \sum_{k=1}^n \sigma^2_k\right)
> $$
^643559

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^643559]]
Segue dal calcolo *diretto della densità* (si risparmiano i conti dettagliati, per fare tutto bene bisogna andare per induzione) ([[Variabile Aleatoria Assolutamente Continua#^edc8f8]]). Facciamo comunque una breve nota sui parametri: dato che stiamo supponendo l'indipendenza, abbiamo che
$$
E[X]=\sum_k E[X_k], \operatorname{var}X = \sum_k \operatorname{var}X_k
$$
Questo ci conferma che i parametri sono proprio le loro *rispettive somme*. $\blacksquare$
