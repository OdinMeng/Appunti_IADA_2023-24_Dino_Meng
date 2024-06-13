---
data: 2024-05-26
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Densità Chi Quadro
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Assolutamente Continue
---
- - -
*Densità chi quadro $\chi^2$: definizione operativa, proprietà. Legame con la varianza campionaria.*
- - -
# 0. Voci correlate
- [[Definizione di Varianza e Deviazione Standard]]
- [[Densità Gamma]]
# 1. Definizione di Densità $\chi^2$
#Definizione 
> [!def] densità chi quadro $\chi^2$
> Siano $X_1, \ldots, X_N$ delle *variabili aleatori indipendenti* con *densità gaussiana standard*, ovvero $X_i \sim \mathcal{N}(0,1)$.
> 
> Ponendo $Y=\sum_k^N X_k^2$, si definisce la sua densità come la *densità del $\chi$ quadrato ad $N$ gradi di libertà*, e lo si indica con $\chi^2(N)$.

#Osservazione 
> [!rmk] buona posizione della sua definizione
> Abbiamo che $\chi^2$ è *sempre una densità di una variabile aleatoria assolutamente continua*. Infatti, come calcolato precedentemente ([[Trasformazione delle Variabili Aleatorie Assolutamente Continue#^80e8ba]]), abbiamo che il quadrato della gaussiana standard è
> $$
> g(t)=\Gamma(0.5, 0.5)
> $$
> Questo significa che $\chi^2(1)=\Gamma(0.5, 0.5)$.
> 
> Dopodiché possiamo generalizzare su $N \in \mathbb{N}$, dal momento che conosciamo le regole per *calcolare la somma di densità gamma* ([[Densità Gamma#^565afe]]), ovvero $\sum_k^N \Gamma(0.5,0.5)=\Gamma\left(\sum_n^K 0.5, 0.5\right)$ ovvero abbiamo
> $$
> \boxed{\chi^2(N)=\Gamma\left(\frac{N}{2}, \frac{1}{2}\right)}
> $$

# 2. Proprietà della Chi Quadro
Dato che la chi quadro non è altro che una *gamma* con dei parametri speciali, possiamo calcolare tranquillamente la sua media e varianza (oppure possiamo farlo anche tenendo conto del fatto che abbiamo gaussiane standard).

#Proposizione 
> [!prp] media e varianza del chi quadro
> Abbiamo che
> $$
> \begin{gather}
> E\left[\chi^2 (N)\right] = N  \\ \operatorname{var}{\chi^2 (N) } =2N
> \end{gather}
 > $$
^ba892d

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^ba892d]]
Ci sono due modi per dimostrarlo. La prima è quella di conoscere il *comportamento* della media e varianza di una $\Gamma$, ovvero $X \sim \Gamma(\alpha,\lambda) \to E[X] = \frac{\alpha}{\lambda}, \operatorname{var}X = \frac{\alpha}{\lambda^2}$ ([[Densità Gamma#^c78182]]). Oppure per la media $E[\chi^2]$ è sufficiente considerare che $X_k \sim \mathcal{N}(0,1)$, dunque $E[X_k]=0$ e $\operatorname{var}{X_k}=1$, da cui abbiamo $E[\chi^2(N)]=\sum_k^N E[X_k^2]=N$. $\blacksquare$

Adesso vediamo come si comporta questa densità rispetto alla somma.
#Proposizione 
> [!prp] comportamento del chi quadro rispetto alla somma
> Se $Y_1 \sim \chi^2(N_1)$ e $Y_2 \sim \chi^2(N_2)$ sono indipendenti, allora si ha che
> $$
> Y_1+Y_2 = \chi^2(N_1+N_2)
> $$
^0de7a3

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^0de7a3]]
Questo è dovuto al fatto che $\chi^2(N) = \Gamma(0.5N, 0.5)$, e sfruttando il *comportamento della somma delle v.a. gamma indipendenti* ([[Densità Gamma#^565afe]]), si ha
$$
\chi^2 (N_1)+\chi^2(N_2)=\Gamma(0.5(N_1+N_2), 0.5)=\chi^2(N_1+N_2)
$$
che è la tesi. $\blacksquare$

Vediamo un approccio pratico per approssimare questa densità con la normale.

#Proposizione 
> [!prp] approssimazione di una chi quadro con una normale
> Per $\boxed{n>30}$ si ha che $\chi^2(N)$ è approssimabile con una *di tipo gaussiano*.
> 
> Infatti, se $(X_n)_n$ è una successione di *v.a. del tipo* $\chi^2(1)$, allora si avrebbe $Y_n = \sum_k^N X_k \sim \chi^2(N)$, da cui ricavo
> $$
> Y_n \simeq Y \sim \mathcal{N}(N, 2N)
> $$
> Di conseguenza possiamo approssimare la sua funzione di ripartizione con $\phi$ come
> $$
> p\{Y_n \leq x\} \simeq \phi\left(\frac{x-n}{\sqrt{2n} }\right)
> $$

# 3. Legame con la Varianza Campionaria
Va bene, tutto apposto. Però, perché abbiamo definito una densità del genere? Adesso vediamo.

#Definizione 
> [!def] varianza campionaria
> Data una successione $(X_n)_n$ di *variabili aleatorie* su uno medesimo spazio di probabilità $(\Omega, \mathcal A, p)$, si definisce la *varianza campionaria* come la variabile aleatoria
> $$
> \boxed{s_n^2 := \frac{1}{n-1}\sum^n_{k=1}(X_k - \overline{X_n})^2}
> $$
> con $\overline{X_n}$ la *media campionaria* di $(X_n)_n$ ([[Legge dei Grandi Numeri#^fa1850]]). 

Adesso vediamo il *legame* che collega $\chi^2$ con $s^2$.

#Proposizione 
> [!prp] proprietà fondamentale del chi quadro
> Sia $(X_n)_n$ una *successione di variabili aleatorie indipendenti* tutte con la medesima *distribuzione gaussiana* $\mathcal{N}(\mu, \sigma^2)$. Allora valgono che:
> i. la somma della successione normalizzata diventa un chi quadro
> $$
> \sum_{k=1}^N \left(\frac{X_k-\mu}{\sigma}\right)^2 \sim \chi^2 (N)
> $$
> ii. la somma della successione normalizzata con la media campionaria diventa la varianza campionaria, che diventa il qui quadro
> $$
> \sum^N_{k=1}\left(\frac{X_k-\overline{X_N} }{\sigma}\right)^2 = (N-1)\frac{s_N^2}{\sigma^2}=\chi^2 (N-1)
> $$
> iii. $s_n^2$ e $\overline{X}_n$ sono tra loro indipendenti
^ab735e

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^ab735e]]
*Nota: dimostrazione parziale*
i. Segue dal fatto che l'argomento della sommatoria $\frac{X_k-\mu}{\sigma}$ non è altro che la densità gaussiana rinormalizzata, dunque la tesi segue dalla definizione di $\chi^2$.
ii. Omessa, però si osserva che differisce dal punti i., in quanto compiendo la sottrazione $X_n-\overline{X_n}$ mi sbarazzo di un grado di libertà, in particolare dove ho $X_N - \overline{X_N} = 0$ (infatti queste due variabili aleatorie *non* sono indipendenti tra di loro). Dopodiché la tesi segue similmente.
iii. Omessa. $\blacksquare$

# 4. Esempio Pratico
#Esercizio 
> [!exr] esercizio sulla densità chi quadro
> Una ditta confeziona kiwi. Dallo storico è noto che la *varianza delle dimensioni del frutto* è $\sigma^2 = 1.26 \ \text{cm}^2$. Dovendo fornire frutti con simili dimensioni, la ditta scarta una partita di frutti se la *varianza campionaria* di $40$ pezzi scelti *supera* $2$ (ovvero $s_{40}^2 \geq 2$).
> 
> Assumendo che la *dimensione* segua una *legge normale* con $\sigma^2$ appena riportata sopra, qual è la probabilità che *una partita venga scartata*?
^8831ad

**SVOLGIMENTO.** ([[#^8831ad]])
Modellizziamo $X_1, \ldots, X_{40}$ le *dimensioni dei pezzi misurati*. Per ipotesi possiamo modellizzarli con $X_i \sim \mathcal{N}(\mu, \sigma^2)$. Ne conosciamo solo il $\sigma^2$, ma va comunque bene. Per il punto *ii.* sulla densità, possiamo calcolare la *varianza campionaria rinormalizzata* come
$$
\frac{(40-1) s^2_{40} }{(1.26)^2} \sim \chi^2 (40-1)=\chi^2 (39)
$$
Inoltre, dato che $n=40>30$, possiamo approssimare $\chi^2(39) \simeq \mathcal{N}(39, 78)$.
Allora abbiamo
$$
p\{s^2_{40} > 2\}=p\left\{ {\frac{39s_{40}^2 }{1.26^2} }> 61.9\right\}= 1- p\left\{ \chi^2(39)\leq 61.9\right\} \simeq 0.011
$$
$\blacksquare$