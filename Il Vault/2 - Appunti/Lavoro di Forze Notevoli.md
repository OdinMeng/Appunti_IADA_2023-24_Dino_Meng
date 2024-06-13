---
data: 2024-04-18
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Lavoro di Forze Notevoli
tipologia: appunti
stato: "1"
capitolo: Energia e Quantità di Moto
---
- - -
*Lavoro di Forze Notevoli (in particolare variabili). Lavoro della molla. Lavoro della forza peso. Osservazione: il lavoro di queste forze dipendono solo dal punto finale e iniziale.*
- - -
# 0. Voci correlate
- [[Lavoro di Forze Notevoli]]
- [[Forza Elastica]]
- [[Forza Peso e Forza Normale]]
# 1. Lavoro della Forza Elastica
Adesso vogliamo calcolare il lavoro di *alcune forze notevoli*, tra cui la *forza elastica* e la *forza peso*.

#Teorema 
> [!thm] lavoro della forza elastica
> Dati i punti $x_f, x_i$ lavoro compiuto solamente dalla *forza elastica* è quantificabile come
> $$
> \boxed{W= -\frac{k}{2}(x_f^2-x_i^2)}
> $$
^cd168c

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^cd168c]]
Basta usare la *legge di Hooke* e calcolare direttamente l'integrale
$$
\begin{align}
W=\int_i^f \underbracket{\vec{F}_x \cdot \text{d}\vec{r}}_{F_x \parallel \text{d}r} = \int_{x_i}^{x_f}F_x \ \text{d}x &=  \int_{x_i}^{x_f}-kx \text{ d}x \\ &= \left. \frac{kx^2}{2}\right|^{x_f}_{x_i}\\&=-\frac{k}{2}(x_f^2-x_i^2)
\end{align} 
$$
che è il risultato voluto. $\blacksquare$

# 2. Lavoro della Forza Peso
#Teorema 
> [!thm] lavoro della forza peso
> Dato un dislivello $h:=y_f-y_i$, il lavoro della forza peso è
> $$
> \boxed{W=mgh}
> $$
^a6be1e

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^a6be1e]]
Basta calcolare l'integrale
$$
W=\int_i^f \vec{P} \cdot \text{d}\vec{r} = \int_{y_i}^{y_f}mg \text{ d}y = mg(y_f-y_i)=mgh
$$
che è il risultato voluto. $\blacksquare$

#Osservazione 
> [!rmk] le peculiarità del lavoro della forza elastica e della forza peso
> Notiamo che il *lavoro associato* alla *forza elastica* e alla *forza peso* non dipendono in nessun modo dal percorso $\Delta \vec{r}$ effettuato, bensì solo dalle ultime posizioni $f, i$. 
> 
> Vedremo che non è sempre il caso, come col *lavoro compiuto dall'attrito*.
> 
> Formalizzeremo questo concetto con la *nozione* di *forza conservativa e dissipativa*.

^20a03c

# 3. Lavoro dell'Attrito
#Teorema 
> [!thm] il lavoro dell'attrito dinamico
> Dato uno spostamento $s$, il lavoro dato dall'attrito è
> $$
> W=\mu N \cdot s
> $$
> dove $N$ è la *forza normale* e $\mu$ è il *coefficiente di attrito* (dinamico o statico, stessa robaccia).

# 4. Esempi di Applicazione
#Esempio 
> [!exm] la rigidità al variare dell'accelerazione massima
> Supponiamo di avere un carrello di massa $m$ che si *sposta verso* una *molla a riposo* con una velocità $v$. Determinare il *coefficiente* $k$ della molla tale che il moto del carrello non sia troppo brusco, con un'accelerazione limite $a_{\ast}$ (*figura 4.1.*). 
> 
> i. L'idea è quella di considerare il *momento* in cui il carrello causa uno spostamento $x$ alla *molla*, avendo quindi una forza elastica
> $$
> F=-kx
> $$
> da cui, per la *seconda legge di Newton* implica
> $$
> a=-\frac{kx}{m}
> $$
> Dato che voglio avere $\lvert a \rvert \leq a_{\ast}$, mi basta imporre
> $$
> x_{\ast}=\frac{m}{k}a_{\ast}
> $$
> 
> ii. Adesso mi basta usare il *teorema del lavoro-energia cinetica*, da cui ricavo
> $$
> W=\Delta K \implies -\frac{k}{2}(x^2_f -x^2_i)=-\frac{1}{2}mv^2
> $$
> Tratto la $x_f$ come un incognita e con svariati calcoli ottengo
> $$
> x_f =\sqrt{\frac{m}{k} }v
> $$
> iii. Infine impongo
> $$
> x_f \leq x_{\ast} \implies \sqrt{\frac{m}{k}} v \leq \frac{m}{k}a_{\ast}
> $$
> poi con svariati calcoli ottengo il coefficiente $k$
> $$
> \boxed{k \leq \frac{m}{v^2}a^2_{\ast}=m\left(\frac{a_{\ast} }{v}\right)^2}
> $$
> che è il *risultato desiderato*.

**FIGURA 4.1.**
![[Pasted image 20240418211231.png]]
#Esempio 
> [!exm] la montagna russa
> Un carrello, su una *montagna russa* (o americana) percorre un percorso tale da avere un dislivello $h$ dall'altezza iniziale. Determinare la velocità finale.
> 
> i. Bisogna banalmente usare il *teorema L-K* ([[Teorema Lavoro-Energia Cinetica#^544309|1]]). Infatti,
> $$
> \begin{align}
> \bullet\  &W=\Delta K \\
> \implies&mgh = \frac{1}{2}m(v_f^2 -v_i^2) \\
> \implies& \ldots \\ \implies&\boxed{v_f=\sqrt{2g (y_f-y_i)} =\sqrt{2gh} }
> \end{align}
> $$
> che è il risultato voluto.