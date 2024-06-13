---
data: 2024-05-26
corso:
  - "[[Calcolo delle Probabilità]]"
argomento: Densità di Student
tipologia: appunti
stato: "1"
capitolo: Variabili Aleatorie Assolutamente Continue
---
- - -
*Densità di Student ad $n$ gradi di libertà: definizione operativa, proprietà: comportamento asintotico, convergenza in legge.*
- - -
# 0. Voci correlate
- [[Densità Chi Quadro]]
- [[Densità Gaussiana]]
# 1. Definizione di Densità di Student
#Definizione 
> [!def] densità di Student
> Siano $X \sim \mathcal{N}(0,1)$ e $Y \sim \chi^2(n)$ due *variabili aleatorie indipendenti*. Sia posta la variabile aleatoria
> $$
> T = \sqrt{n}\frac{X}{\sqrt{Y} }
> $$
> Allora la densità associata a $T$ si dice *"densità di Student ad $n$ gradi di libertà"*, e lo si indica con $\boxed{t(n)}$.
> 
> La si può scrivere esplicitamente come
> $$
> t(n)(s)=c_n \left(1+\frac{s^2}{n}\right)^{-\frac{n+1}{2} }
> $$
> con $c_n$ un coefficiente reale e $s \in \mathbb{R}$ un parametro.

#Osservazione 
> [!rmk] la buona posizione della definizione
> La definizione è ben posta. Infatti essendo $Y$ definita solamente sulla *semiretta positiva* (altrimenti ho misura nulla), ho $p\{T \leq 0\}=0$.

# 2. Proprietà della Student
#Proposizione 
> [!prp] comportamento asintotico della Student
> Sia $X \sim t(n)$. Allora per $n$ grande ho la *convergenza in legge*
> $$
> \lim_n X = \mathcal{N}(0,1)
> $$
^0a3b02

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^0a3b02]]
Prendiamo la definizione esplicita della T-student.
$$
t(n)(s)=c_n \left(1+\frac{s^2}{n}\right)^{-\frac{n+1}{2} }
$$
Passando al limite ho:
$$
\begin{gather}
\lim_n \left(1+\frac{s^2}{n}\right)^{- \frac{n+1}{2} }=e^{-\frac{s^2}{2} } \\
\lim_n c_n = \frac{1}{\sqrt{2\pi } }
\end{gather}
$$
così ho
$$
\lim_n t(n)(s)=\frac{1}{\sqrt{2\pi } }e^{-\frac{s^2}{2} }
$$
che è proprio la definizione della densità gaussiana per $\mu=0$ e $\sigma^2=1$ ([[Densità Gaussiana#^eb19d3]]).

Da dove salta fuori questa densità? Cosa ne facciamo? Vedremo che questa ha legami particolari con la chi quadro $\chi^2$.

#Proposizione 
> [!prp] rappresentazione della varianza e media campionaria con la t-Student
> Siano date $X_1, \ldots, X_n$ variabili aleatorie *indipendenti* e con *densità gaussiana* $\mathcal{N}(\mu, \sigma^2)$. Allora abbiamo che
> $$
> \boxed{\sqrt{n}\frac{\overline{X_n} -\mu}{\sqrt{s^2_n} }\sim t(n-1) }
> $$
^aaceb2

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^aaceb2]]
Prima di tutto *normalizziamo* la media campionaria $\overline{X}_n \sim \mathcal{N}\left(\mu, \frac{\sigma^2}{n}\right)$, da cui ho
$$
\frac{\overline{X}_n -\mu}{\frac{\sigma}{\sqrt{n} } }\sim \mathcal{N}(0,1)
$$
Per quanto visto sulla *varianza campionaria* e sulla *densità Chi quadro*, ho
$$
\frac{(n-1)s_n^2}{\sigma^2}\sim \chi^2 (n-1)
$$
poiché $s_n$ e $\overline{X}_n$ sono indipendenti, posso moltiplicare e dividere per ottenere l'espressione finale
$$
\sqrt{n}\frac{\overline{X}_n -\mu}{\sqrt{s_n^2} }=\sqrt{n-1}\frac{\frac{\overline{X}_n - \mu}{\frac{\sigma}{\sqrt{n}} }  \sim \mathcal{N}(0,1)}{\sqrt{\frac{(n-1)s_n^2}{\sigma^2}\sim \chi^2(n-1) } } \sim t(n-1)
$$
e la tesi segue per la definizione di $t(n)$. $\blacksquare$
