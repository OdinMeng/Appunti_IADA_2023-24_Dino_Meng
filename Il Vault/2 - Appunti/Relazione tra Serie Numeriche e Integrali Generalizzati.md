---
data: 2024-03-08
corso:
  - "[[Analisi Matematica II]]"
argomento: Relazione tra Serie Numeriche e Integrali Generalizzati
tipologia: appunti
stato: "1"
capitolo: Serie Numeriche
---
- - -
*Nesso tra serie numeriche e integrali generalizzati. Definizione di funzione scalino per una serie. Teorema di equivalenza tra serie e integrali.*
- - -
# 0. Voci correlate
- [[Definizione di Serie]]
- [[Carattere di una Serie]]
- [[Funzione Integrabile in Senso Generalizzato]]
# 1. Definizione di funzione scalino
#Definizione 
> [!def] funzione scalino per una serie
> Data una *serie* $\sum a_n$ si definisce la *funzione scalino* $a:[0, +\infty) \longrightarrow \mathbb{R}$ come 
> $$
> a(x):=a_n, \forall x \in [n-1, n)
> $$
> Graficamente prendiamo il la successione dei termini generali della serie $(a_n)_n$, e ad ogni termine $a_k$ si associa ogni numero reale tra $[k-1,k)$ su $a_k$ (*figura 1.1.*).

**FIGURA 1.1.** (*L'idea della funzione scalino*)
![[Pasted image 20240308184414.png]]

#Osservazione 
> [!rmk] l'integrabilità della funzione scalino
> Data una qualsiasi serie $\sum a_n$, la sua funzione scalino $a(\cdot)$ è *localmente integrabile* su $[0, +\infty)$ e l'integrale viene valutata come
> $$
> \int_0^n a(x) \ \text{d}x = a_1+a_2+\ldots+a_n = s_n
> $$
> Questa osservazione ci permetterà di vedere più chiaramente il *nesso* tra questa funzione inventata *"ad-hoc"* e le *serie*.

# 2. Teorema di relazione tra le serie e gli integrali
#Teorema 
> [!thm] di relazione tra le serie e gli integrali
> Sia $\sum a_n$ una *serie* e $a(x)$ la sua *funzione scalino associata*.
> Allora sono equivalenti:
> 1. *Convergenza*
> $$
> \sum_{n=1}^{+\infty} a_n =s \in \mathbb{R} \iff \lim_{x \to +\infty}\int_0^x a(t) \text{ d}t =: \int_0^{+\infty}a(t) \text{ d}t = s
> $$
> 2. *Divergenza*
> $$
> \sum_{n=1}^{+\infty}a_n = \pm \infty \iff \int_0^{+\infty}a(t) \text{ d}t = \pm \infty
> $$
^7ac160

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^7ac160]]
Dimostriamo il primo punto.
"$\impliedby$": Basta osservare che la funzione scalino $a$ è *integrabile localmente* su $[0, +\infty)$ e in particolare *in senso generalizzato* per ipotesi. Allora vale che
$$
\int_0^n a(t) \text{ d}t =s_n \implies \lim_n \int_0^n a(t) \text{ d}t= \lim_n s_n = s
$$
"$\implies$": Si suppone che la serie vale 
$$
\sum_{n=1}^{+\infty} a_n = s
$$
Allora considero che per ogni $x \in [n, n+1)$ vale la relazione
$$
\int_0^x a(t) \text{ d}t = \int_0^n a(t) \text{ d}t + \underbracket{\int_n^x a(t) \text{ d}t}_{\text{rimane costante}}
$$
Da cui, per definizione di $a(x)$, discende
$$
\int_0^x a(t) \text{ d}t = s_n + a_{n+1}(x-n) \implies \lim_n s_n + \underbracket{a_{n+1}}_{\to 0} \ \underbracket{(x-n)}_{\leq 1} = s+0=s
$$
dato che $\lim_n a_n = 0$ ([[Teoremi Generali sulle Serie#^79c14a]]).
Ora dimostriamo il secondo punto.
"$\impliedby$": Si fa un conto analogo alla dimostrazione del primo punto, ovvero considerando che
$$
\int_0^n a(t) \text{ d}t = s_n
$$
"$\implies$": Supponiamo che la serie sia divergente positivamente:
$$
\sum_{n=1}^{+\infty}a_n = +\infty
$$
Come fatto prima, consideriamo che per un qualsiasi $x \in [n, n+1)$. Supponiamo pure che l'ultimo termine della serie sia non negativa ($a_{n+1}\geq 0$).
Allora vale che
$$
\int_0^x a(t) \text{ d}t = \int_0^n a(t)\text{ d}t +\int_n^x a(t) \text{ d}t
$$
Ovvero
$$
\int_0^{+\infty}a(t) \text{ d}t = \lim_n \int_0^n a(t) \text{ d}t + \int_n^x a_{n+1} =s_n + a_{n+1}(x-n) \leq s_n+a_{n+1}=s_{n+1}
$$
Da cui, per il teorema del confronto ([[Teoremi sugli Integrali Impropri#^e3ccfc]]) si ha la divergenza dell'integrale.
In maniera analoga, supponendo $s_{n+1} \leq 0$ (ovvero includendo i casi in cui il termine $a_{n+1}$ sia negativa) si ha
$$
s_{n+1} \leq \int_0^x
 a(t) \text{ d}t \leq s_n$$
 Quindi, in una maniera definitiva si ha
 $$
 \min\{s_{n}, s_{n+1}\} \leq \int_0^x a(t) \text{ d}t \leq \max\{s_n, s_{n+1}\}, \forall n \in \mathbb{N}
 $$
 Ovvero, usando il teorema del confronto
 $$
 \lim_{x \to +\infty}\int_0^x a(t) \text{ d}t = +\infty \ \blacksquare
 $$