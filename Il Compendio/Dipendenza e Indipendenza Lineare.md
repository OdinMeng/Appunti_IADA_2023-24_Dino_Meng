---
data: 2023-11-02
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Dipendenza e Indipendenza Lineare
tipologia: appunti
stato: "1"
---
*Definizione di dipendenza o indipendenza lineare per degli elementi di uno spazio vettoriale.*
- - -
# 1. Dipendenza lineare
#Definizione 
> [!def] Definizione 1.1. (dipendenza lineare di vettori)
Sia $V$ un K-spazio vettoriale, siano $v_1, \ldots, v_n$ elementi (o vettori) di $V$ ([[Spazi Vettoriali]]).
Allora gli *elementi/vettori* $v_1, \ldots, v_n$ si dicono **linearmente dipendenti** se possiamo scrivere il vettore nullo $0 \in V$ come la *combinazione lineare* ([[Combinazione Lineare]]) di $v_1, \ldots, v_n$ in cui *non* tutti i coefficienti $\lambda_i$ in $K$ sono nulli. Ovvero $$0 = \lambda_1 v_1 + \ldots + \lambda_n v_n: \exists \lambda_i \neq 0$$

#Proposizione 
> [!prop] Proposizione 1.1. (definizione 'alternativa' di dipendenza lineare)
Sia $V$ un K-spazio vettoriale, siano $v_1, \ldots, v_n \in V$. Allora questi *vettori* $v_1, \ldots, v_n$ sono *linearmente dipendenti* se e solo se *uno di essi può essere scritto come combinazione lineare di altri vettori*.
Equivalentemente, se e solo se$$\exists j \in \{1, \ldots, n\}: v_j \in \text{span}(v_1, \ldots, v_{j-1}, v_{j+1}, \ldots, v_n)$$

**NOTAZIONE.** Per poter compattare la scrittura sopra si può scrivere $$(v_1, \ldots, v_{j-1}, v_{j+1}, \ldots, v_n)$$come $$(v_1, \ldots, \hat{v}_j, \ldots, v_n)$$e il *"cappello"* su $v_j$ vuol dire che lo escludiamo dalla n-upla.

#Dimostrazione 
**DIMOSTRAZIONE** della *proposizione 1.1.* 
Dimostro che vale l'implicazione da ambi i lati in quanto abbiamo un enunciato del tipo "se e solo se".
" $\implies$ ": Suppongo che $v_1, \ldots, v_n$ siano *linearmente* dipendenti. Allora $$\begin{align} \exists \lambda_i \neq 0, i\in\{1, \ldots, n\}:& \ \lambda_1v_1 + \ldots + \lambda_n v_n = 0\\ \implies & \ -\lambda_i v_i = \lambda_1v_1 + \ldots +\lambda_nv_n \\ \implies & \ v_i = \frac{(\lambda_1v_1+\ldots+\lambda_nv_n)}{-\lambda_i} \\ \implies & \ v_i = -\frac{\lambda_1}{\lambda_i}v_1 + \ldots +(-\frac{\lambda_n}{\lambda_i}v_n) \\ \implies & \ v_i \in \operatorname{span} (v_1, \ldots, \hat{v}_j, \ldots, v_n)\end{align}$$
" $\impliedby$ ": Suppongo che $\exists i \in \{1, \ldots, n\}: v_i \in \operatorname{span}(v_1, \ldots, \hat{v}_j, \ldots, v_n)$. Allora $$\begin{align} v_i &= \mu_1v_1 + \ldots + \mu_{i-1}v_{i-1}+\mu_{i+1}v_{i+1}+\ldots+\mu_nv_n \\ 0 &= \mu_1 v_1 + \ldots + \mu_{i-1}v_{i-1}-v_i+\mu_{i+1}v_{i+1}+\ldots+\mu_nv_n \\ &\implies \exists \lambda_i  = -1 \neq 0 : \mu_1v_1 + \ldots  + \mu_n v_n = 0\end{align}\  \blacksquare$$
# 2. Indipendenza lineare
Ora siamo pronti per definire l'*indipendenza lineare*.

#Definizione 
> [!def] Definizione 2.1. (vettori linearmente indipendenti)
Sia $V$ un K-spazio vettoriale, $v_1, \ldots, v_n$ dei vettori di $V$.
Dichiamo che questi vettori $v_1, \ldots, v_n$ sono **linearmente indipendenti** se *non* sono *linearmente dipendenti*. 
Equivalentemente, $v_1, \ldots, v_n$ sono *linearmente indipendenti* se e solo se *l'unico modo di scrivere $0$ è quello di porre tutti i coefficienti $\lambda_i = 0$*
Alternativamente, $$\lambda_1 v_1+\ldots+\lambda_nv_n = 0 \implies \lambda_1=\lambda_2=\ldots=\lambda_n=0$$ 
^3782e8

#Esempio 
> [!ex] Esempio 2.1. (esempio su $\mathbb{R}^2$)
Considero in $V = \mathbb{R}^2$ i seguenti vettori: $$v_1 = \begin{pmatrix} 1 \\ 0\end{pmatrix}\ | \ v_2 = \begin{pmatrix}0 \\ 1 \end{pmatrix} \ | \ v_3 = \begin{pmatrix}1 \\ 1 \end{pmatrix}$$Vale che $v_1, v_2, v_3$ sono *linearmente dipendenti* dal momento che $$v_3 = 1v_1 +1v_2$$Invece vale che $v_1, v_2$ sono *linearmente indipendenti* in quanto se suppongo $$\lambda_1v_1 + \lambda_2v_2 = \begin{pmatrix}0 \\ 0 \end{pmatrix}$$allora vale che $$\begin{pmatrix}\lambda_1 \\ \lambda_2  \end{pmatrix} = \begin{pmatrix}0 \\ 0 \end{pmatrix} \implies \lambda_1 = \lambda_2 = 0 $$In parole l'*unico* modo di scrivere il *vettore nullo* come la *combinazione lineare di $v_1,v_2$* è quello di porre $\lambda_1 = \lambda_2 = 0$.
