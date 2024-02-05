---
data: 2023-12-02
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Proposizioni su Autospazi
tipologia: appunti
stato: "1"
---
*Proposizioni (teoremini) autospazi. L'autospazio di un autovalore è spazio vettoriale; vettori appartenenti ad autospazi diversi sono linearmente indipendenti.*
- - -
# 1. Autospazio di un qualsiasi autovalore è sottospazio vettoriale
#Proposizione 
> [!prop] Proposizione 1.1. (l'autospazio di un qualsiasi autovalore è sottospazio vettoriale del dominio/codominio)
> Sia $f: V \longrightarrow V$ un'*applicazione lineare* ([[Definizione di Applicazione Lineare#^9b39f9]]) con $\dim V = n$.
> Sia $\lambda \in K$ un *autovalore* di $f$ ([[Definizione di Autovalore, Autovettore, Autospazio#^1098ea]]).
> Allora $\operatorname{Aut}{\lambda}$ è *sottospazio vettoriale di V* ([[Sottospazi Vettoriali#^9bcbf2]]).

#Dimostrazione 
**DIMOSTRAZIONE** della *proposizione 1.1.*
Verifichiamo le *tre proprietà caratterizzanti* di sottospazi vettoriali.
1. $0 \in \operatorname{Aut}{\lambda}$: per *l'osservazione 3.1. relativa agli autospazi* ([[Definizione di Autovalore, Autovettore, Autospazio#^4d3c9b]]), il vettore nullo $0$ è elemento di qualsiasi autospazio.
2. Sia $v \in V$, $\mu \in K$; $v \in \operatorname{Aut}{\lambda}$. Allora per ipotesi $f(v) = \lambda \cdot v$. Considero $\mu \cdot v$; 
   $$f(\mu \cdot v) = \mu \cdot f(v) = \mu \cdot \lambda \cdot v = \lambda \cdot (\mu \cdot v) \implies \mu \cdot v \in \operatorname{Aut}{\lambda}$$
3. Siano $v_1, v_2 \in V$. Siano $v_1, v_2 \in \operatorname{Aut}{\lambda}$. Allora, per ipotesi sono vere che
   $$f(v_1) = \lambda v_1; f(v_2) = \lambda v_2$$
   Ma allora
   $$f(v_1+v_2)=f(v_1)+f(v_2) = \lambda v_1+\lambda v_2 = \lambda(v_1+v_2)$$
   Il che implica
   $$v_1+v_2 \in \operatorname{Aut}{\lambda}$$
# 2. Due vettori appartenenti a due autospazi distinti sono linearmente indipendenti
#Proposizione 
> [!prop] Proposizione 2.1. (due elementi di autospazi distinti sono linearmente indipendenti)
> Sia $f: V \longrightarrow V$ un'*applicazione lineare* con $\dim V = n$.
> Siano $\lambda, \mu$ *autovalori distinti* di $f$.
> Siano $v_1 \in \operatorname{Aut}{\lambda}$ e $v_2 \in \operatorname{Aut}{\mu}$.
> Supponendo che $v_1 \neq v_2 \neq 0_V$, allora $v_1$ e $v_2$ sono vettori *linearmente indipendenti* ([[Dipendenza e Indipendenza Lineare#^3782e8]]).
^529f85
