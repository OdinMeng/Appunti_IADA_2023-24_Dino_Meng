---
data: 2024-05-18
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Modellizzazione del Tempo d'Attesa senza Usura
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Assolutamente Continue
---
- - -
*Modellizzazione dei fenomeni che coinvolgono il tempo d'attesa, senza usura. Esempio del meteorite. Sistemi senza usura: sistema in serie. Sistema in parallelo. Sistema a scorta (con usura).*
- - -
# 0. Voci correlate
- [[Densità Esponenziale]]
- [[Densità Gamma]]
# 1. Esempio Preliminare
Adesso vogliamo *modellizzare* i fenomeni che coinvolgono dei *tempi d'attesa fino all'arrivo del primo "successo"*. Questo ci vagamente ricorda della densità *geometrica* ([[Densità Geometrica#^1351b1]]), solo che siamo nel *caso continuo*. Come vedremo, la *"controparte continua"* della densità geometrica è la densità *esponenziale*.

#Esempio 
**ESEMPIO.** (*Il meteorite*)
La quantità di tempo che passa prima che un piccolo meteorite precipiti nel deserto del Sahara è modellizzata con una v.a. $X \sim \mathcal{E}\left(\frac{1}{\lambda}\right)$ con media $\lambda$ giorni.
Per calcolare la probabilità che il meteorite caschi nell'intervallo di tempo $p\{t_1 \leq X \leq t_2\}$ si calcola l'integrale
$$
p\{t_1 \leq X \leq t_2\}=\int_{t_1}^{t_2}\lambda e^{-\lambda x}\ \text{d}x = e^{\lambda t}\bigg |_{t_1}^{t_2}
$$
Notiamo la *densità esponenziale* gode l'assenza di memoria. Ovvero scegliendo un opportuno incremento del tempo $T$, sapendo che in tale incremento non è successo nulla, si ha
$$
p\{t_1+T \leq X \leq t_2+T | X \geq T\}=p\{t_1 \leq X \leq t_2\}
$$

#Osservazione 
> [!rmk] l'usura è un aspetto significativo 
> Quindi osserviamo che *non tutti i fenomeni* che coinvolgono dei *tempi d'attesa* possono essere modellizzate con l'esponenziale $\mathcal{E}$. Infatti, se questo fenomeno coinvolge anche l'*usura*, non ha più senso questo modello.
> 
> Nei casi dell'*usura*, di solito la probabilità che qualcosa si *"guasti"* (o accade) diventa più alta col passare del tempo. Ovvero
> $$
> p\{X > T+t | X> T\} < p\{X > t\}
> $$

# 2. Sistemi Senza Usura
Vediamo dei modelli particolari *senza usura*.

**MODELLO.** (*Sistema in serie*)
Vogliamo calcolare il tempo di vita $X$ di un sistema costituito da *$N$ elementi* posti in *serie*.
Supponiamo ogni elemento $X_k$ sia indipendente dagli altri e che è rappresentata dalla legge $X_k \sim \mathcal{E}{(\lambda_k)}$. Poiché i *componenti sono posti in serie*, prendiamo la vita dell'elemento *più breve* (perché se se ne guasta uno, il sistema non va più). Allora
$$
X=\min\{X_1, \ldots, X_N\}
$$
Da cui si ha
$$
p\{X \geq t\} = p\{X_1, \ldots, X_N \geq t\} = \prod_{1\leq i\leq N}p\{X_i \geq t\}=e^{-(\sum_{1 \leq i \leq N} \lambda_i)t}
$$
Deduciamo che la sua *funzione di ripartizione* è
$$
F(t) = p\{X\leq t\}=1-e^{-(\sum _i \lambda_i )t}
$$
Derivando questa funzione otteniamo
$$
F'(t)=\sum_{1 \leq i \leq N}\lambda_i e^{-(\sum_i \lambda_i)t} \sim \mathcal{E}(\lambda = \Sigma_i \lambda_i)
$$
Ovvero $X$ è una *esponenziale* con $\lambda = \sum_i \lambda_i$. Da questo segue che la sua media è
$$
E[X]=\frac{1}{\lambda}=\frac{1}{\sum_i \lambda_i} < E[X_k], \forall k
$$
Quindi aggiungendo più componenti accorciamo la sua vita. In particolare, assumendo che tutte le $X_k$ abbiano la stessa vita media $E[X_k]=\eta$, abbiamo
$$
E[X]=\frac{\eta}{N}
$$

**MODELLO.** (*Sistema in parallelo*)
Prendiamo il *"contrario"* del sistema in *serie*: al posto di porre i componenti $X_k$ in serie, li poniamo in *parallelo*. Allora abbiamo
$$
X = \max\{X_1 ,\ldots, X_N\}
$$
In questo caso si ha
$$
p\{X \leq t\}=p\{X_1,\ldots,X_N \leq t\}=\prod_{1\leq i \leq N}p\{X_i \leq t\}=\prod_{1 \leq i \leq N}(1-e^{-\lambda_i t})
$$
Per trovarci la *densità* di $X$ basta derivare quest'espressione, dato che abbiamo che fare con la *funzione di ripartizione* $F(t):=p\{X \leq t\}$. Comunque si ha a che fare con una *densità esponenziale*, quindi il *sistema ha memoria*.

Supponendo per semplicità che tutti i parametri $\lambda_1=\ldots=\lambda_3=\lambda$ sono le stesse, abbiamo che la densità vale (inoltre siamo nel caso $N=3$, altrimenti i calcoli diventano troppo contosi)
$$
f(x)=3 \lambda (1-e^{-\lambda t} )^2 e^{-\lambda t}
$$
Posto $\eta:=E[X_k]$, abbiamo $E[X]=\frac{11}{6} \eta$.


# 3. Sistemi Con Usura
Vediamo un caso particolare per *l'usura*.

**MODELLO.** (*Sistema a scorta*)
Supponiamo di avere un *sistema* costituito da $N$ elementi identici, che vanno fatto funzionare *uno alla volta*. Ovvero quando si guasta uno, viene sostituto da un altro, e così via finché tutte sono guaste.
Prendendo $X_k \sim \mathcal{E}(\lambda)$, e i componenti sono tutti indipendenti, allora il tempo di vita $X$ del sistema è la sua somma
$$
X:=\sum^{n}_{k=1}X_k
$$
Ovvero abbiamo una *variabile aleatoria del tipo gamma* ([[Densità Gamma#^7c962a]]), precisamente $X \sim \Gamma(n, \lambda)$. Qui non si tratta più di una *densità esponenziale*, bensì una *densità gamma* che non gode più dell'assenza di memoria. In questo caso l'usura viene rappresentata dal *numero di componenti già guastati*.
