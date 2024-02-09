---
data: 2024-02-05
corso: "[[Analisi Matematica I]]"
argomento: Definizione di Serie
tipologia: appunti
stato: "1"
capitolo: Serie (cenni)
---
- - -
*Problema preliminare per le serie; definizione di serie; definizione di successione dei termini, di somme parziali, di parziale $n$-esima per una serie. Esempi notevoli di serie.*
- - -
# 0. Osservazione preliminare
#Osservazione 
> [!rmk] problema preliminare
> Supponiamo di avere una *successione* $(a_n)_n$ in $\mathbb{R}$ (o $\mathbb{C}$) ([[Successione e Sottosuccessione#^9feddf]]).
> Voglio trovare un *modo rigoroso* per considerare la *somma* di tutti i termini $(a_n)_n$; si tratta tuttavia di *operazioni infinite*, dunque non posso effettivamente fare la somma. 
> Infatti, procedendo in questo modo si avrebbero dei risultati che *sembrano* degli assurdi, tra cui la c.d. *serie di Ramanujan* ([ulteriori approfondimenti su Wikipedia](https://it.wikipedia.org/wiki/Serie_di_Ramanujan)).
> $$
> 1+2+3+\ldots = -\frac{1}{12} \ (\mathfrak{R})
> $$
> Vogliamo dunque trovare un altro modo per fare le somme dei termini $a_n$, senza dover ricorrere a teorie più speciali. Useremo dunque la *teoria dei limiti*, creando effettivamente un nesso tra la *teoria dei limiti* (per le successioni) con le *serie*.

# 1. Definizioni basilari
#Definizione 
> [!def] Serie
> Sia $(a_n)_n$ una *successione a valori reali* (o complessi).
> Per ogni $n \in \mathbb{N}$ definiamo la *"somma parziale"*
> $$ 
> s_n = \sum_{i=0}^na_i
> $$
> cioè
> $$
> s_0 = a_0 ; s_1 = a_0+a_1 ; \ldots ; s_n = a_n+s_{n-1}= a_0 + \ldots + a_n 
> $$
> Allora definisco la coppia
> $$
> ((a_n)_n, (s_n)_n)
> $$
> come *serie* e la indico come
> $$
> \boxed{((a_n)_n, (s_n)_n) \sim \sum_{n=0}^{+\infty} a_n}
> $$

#Definizione 
> [!def] Successione dei terimini, somme parziali, parziale $n$-esima per una serie
> Data una *serie*
> $$
> ((a_n)_n, (s_n)_n) \sim \sum_{n=0}^{+\infty} a_n
> $$
> Definisco le seguenti:
> - $(a_n)_n$ si dice la *successione dei termini* o il *termine generale* della serie.
> - $(s_n)_n$ si dice la successione *delle somme parziali* o delle *ridotte $n$-esime* della serie
> - $s_n$ si dice successione *parziale* o *ridotta* $n$-esima della serie.
> $$ $$

#Definizione 
> [!def] Resto $k$-esimo della serie
> Data una *serie*
> $$
> ((a_n)_n, (s_n)_n) \sim \sum_{n=0}^{+\infty} a_n
> $$
> posso considerare un qualsiasi numero $k \in \mathbb{N}$ e definire la seguente sotto successione ([[Successione e Sottosuccessione#^502a75]]).
> $$
> (b_k)_k := (a_{n+k})_n
> $$
> ovvero, scegliendo ad esempio $k=3$
> $$
> k=3 \implies (b_k)_k = a_3,a_4, \ldots, a_n, \ldots 
> $$
> La serie
> $$
> \sum^{+\infty}_{n=0}b_n = \sum^{+\infty}_{n=k}a_n 
> $$
> si dice il *resto $k$-esimo della serie* $((a_n)_n, (s_n)_n)$.

# 2. Esempi notevoli di Serie
#Esempio 
> [!exm] Successione costante
> Sia $a_n = 1, \forall n$; allora abbiamo
> $$
> \begin{align}
> &a_0=a_1=\ldots=a_n=1
> \\
> &s_0 = 1; s_1=1+1; \ldots ; s_n=1+1+\ldots+1=n+1
> \end{align}
> $$
> Allora abbiamo
> $$
> \sum^{+\infty}_{n=0}a_n = \sum^{+\infty}_{n=0}1
> $$

#Esempio 
> [!exm] Successione identità
> Sia definita la successione $a_n = n, \forall n$; allora abbiamo la serie
> $$
> \sum^{+\infty}_{n=0} a_n \sim \left((n)_n, (\frac{n(n+1)}{2})_n\right) 
> $$
> Per una derivazione della nomenclatura a destra si provi per *induzione* che
> $$
> 1+2+\ldots+n = \frac{n(n+1)}{2} 
> $$
> 

#Esempio 
> [!exm] Successione binaria
> Sia definita la successione $a_n = (-1)^n$, ovvero del tipo
> $$
> 1, -1, 1, -1,\ldots, 1, -1, \ldots
> $$
> Allora troviamo che 
> $$
> s_n = \begin{cases}1 \text{ se }n \text{ pari} \\ 0 \text{ se } n \text{ dispari}\end{cases} = \frac{(-1)^n+1}{2}
> $$
> Allora
> $$
> \sum^{+\infty}_{n=0}(-1)^n \sim ((a_n)_n, (s_n)_n) = \ldots
> $$

#Esempio 
> [!exm] Serie geometrica di ragione $\rho$
> Sia $\rho \in \mathbb{R}$ (denominata come *ragione*) e definiamo la successione $a_n = \rho^n$.
> Conoscendo la *ridotta della serie geometrica* ([[Esempi di Induzione#^98ba76]]), sappiamo che
> $$ 
> \rho^0+\rho^1+\ldots+\rho^n = \frac{1-\rho^{n+1}}{1-\rho}=s_n
> $$
> Allora abbiamo
> $$
> \sum^{+\infty}_{n=0}\rho^n \sim \left((\rho^n)_n, \left(\frac{1-\rho^{n+1}}{1-\rho}\right)_n\right) 
> $$

#Osservazione 
> [!rmk] Casi $n=0$ e $n=1$
> Osserviamo che data una qualunque successione $(a_n)_n$, tratteremo in modi simili le situazioni in cui $n$ parte da $0$ o da $1$.

#Esempio 
> [!exm] Serie armonica
> Sia $a_n = \frac{1}{n}$. 
> Allora abbiamo la serie
> $$
> \sum^{+\infty}_{n=1}\frac{1}{n} \sim \left(\left(\frac{1}{n}\right)_n, \left(1+\ldots+\frac{1}{n}\right)_n\right)
> $$
> Notare che *non è possibile* trovare una formula che calcoli la *successione ridotta $n$-esima* $1+\ldots+\frac{1}{n}$, dunque è necessario esprimerlo esplicitamente.

#Esempio 
> [!exm] Serie armonica generalizzata
> Sia $\alpha \in [0,+\infty)$. Prendendo la *serie armonica*, indico la *serie*
> $$
> \sum^{+\infty}_{n=1}\frac{1}{n^\alpha}
> $$
> come la *serie armonica generalizzata*.



