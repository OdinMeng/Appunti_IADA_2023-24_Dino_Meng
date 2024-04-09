---
data: 2024-03-25
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Integrazione Numerica
tipologia: appunti
stato: "0"
capitolo: indefinito
---
- - -
*I limiti dell'analisi cinematica: impossibilità di risolvere alcune equazioni differenziali. Metodi dell'integrazione numerica per approssimare le soluzioni alle equazioni differenziali: il metodo di Eulero.*
- - -
# 1. Il limite dell'analisi cinematica
#Osservazione 
> [!rmk] il limite dell'analisi cinematica
> Notiamo che con un moto *uniformemente accelerato* è possibile ricavare la velocità $\vec{v}$ e la posizione $\vec{r}$ risolvendo delle *equazioni differenziali lineari*.
> 
> Tuttavia, questa non è sempre possibile; dai principi della dinamica sappiamo che
> $$
> \vec{a}=\frac{\vec{F} }{m}
> $$
> che rende difficile certi problemi. Infatti, l'integrale
> $$
> \vec{v} = \int \frac{\vec{F}}{m} \ \text{d}t
> $$
> diventa impossibile in certi casi.
> 
> Ad esempio, se ho la *caduta libera con una resistenza d'aria in forma turbolento* ([[Resistenza dei Fluidi#^20c98f|1]]), ho l'accelerazione
> $$
> a_y = -g + \frac{F_R}{m} = -g + \underbracket{\frac{1}{2m}\rho A C_D}_{:=\alpha} v^2
> $$
> dandoci così l'equazione differenziale
> $$
> \ddot a_y = -g + \alpha \dot a^2
> $$
> che è *difficile da risolvere* (in questo caso comunque possibile). Il fatto è che andando avanti con la teoria della fisica, queste equazioni differenziali diventano *più difficili da risolvere*, in certi casi diventa anche impossibile.
> 
> Allora, per contrastare questo problema usiamo gli strumenti dell'*informatica moderna* per far eseguire degli algoritmi, al fine di *approssimare le soluzioni delle funzioni* mediante l'*integrazione numerica*.
> Uno dei metodi che vedremo è il *metodo di Eulero*.

# 2. Metodo di Eulero
#Teorema 
> [!thm] metodo di eulero
> Supponiamo di conoscere le funzioni $\vec{v}(t)$ e $\vec{a}(t)$ al variare del tempo e supponiamo di fissare delle condizioni iniziali, come ad esempio
> $$
> \left\{\begin{align}& \vec{r}_0 = (0,0) \ \text{m}\\ &\vec{v}_0 = (5,5) \ \text{m}/\text{s} \end{align}\right.
> $$
> Allora posso prendere un *intervallo arbitrariamente piccolo del tempo* $\Delta t \to 0$; possiamo approssimare la funzione posizione $\vec{r}(t+\Delta t)$ come segue.
> $$
> \vec{r}(t+\Delta t)\simeq \vec{r}(t)+\vec{v}(t)\Delta t + \frac{1}{2}\vec{a}(t) \Delta t^2
> $$
> Posso quindi partire dalle condizioni iniziali, applicare l'intervallo $\Delta t \to 0$ e ottenere il valore del *"prossimo step"* $\vec{r}(t+\Delta t)$. Andando avanti, ottengo un numero sufficiente di dati per ottenere il grafico approssimativo della soluzione.

#Esempio 
> [!exm] esempio
> Per un esempio vedere il notebook del prof. Pierre Thibault (https://github.com/pierrethibault/intro-fisica/blob/main/numerical_integration/Euler_integration.ipynb).