---
data: 2023-10-23
corso: "[[Analisi Matematica I]]"
argomento: Primo Teorema di B-W
tipologia: appunti
stato: "1"
capitolo:
---
- - -
*Enunciato e dimostrazione del primo teorema di Bolzano-Weierstraß*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Punti di aderenza e di accumulazione]]
- [[Conseguenze dell'esistenza dell'estremo superiore]]
- [[Successione e Sottosuccessione]]
# 1. Enunciato del primo teorema di Bolzano-Weierstraß
Enunciamo uno dei teoremi più noti dell'*analisi matematica*, che ci garantisce l'esistenza di un punto di accumulazione in $\mathbb{R}$ per una categoria di insiemi.

#Teorema 
> [!thm] Primo teorema di Bolzano-Weierstraß.
> Sia $E \subseteq \mathbb{R}$, $E$ un insieme *infinito* e *limitato*. ([[Insiemi limitati, maggioranti, massimo e teorema dell'estremo superiore#^c0a632]]) 
> Allora si verifica il seguente: 
> $$\exists \xi \in \mathbb{R}: \xi \in \mathcal{D} E$$
> ovvero che esista un numero $\xi$ che sia *punto di accumulazione* per $E$. 
^8417b2

#Dimostrazione 
**DIMOSTRAZIONE** del *primo teorema di Bolzano-Weierstraß* ([[#^8417b2]])
Se $E$ è un insieme *limitato* allora per il *teorema dell'esistenza dell'estremo superiore e inferiore* ([[Insiemi limitati, maggioranti, massimo e teorema dell'estremo superiore#^55bb5a]]) esistono $$a_0 = \inf(E); b_0 = \sup(E)$$ovvero $a_0, b_0 \in \mathbb{R}$ e tali per cui $E \subseteq [a_0, b_0]$. 
Allora considero $c_0$ il *punto medio tra $a_0$ e $b_0$*; ora considero i due intervalli $$[a_0, c_0];[c_0, b_0]$$(*figura 2.1.*)
Inoltre *almeno* uno di questi intervalli devono essere *infiniti*, in quanto se supponessimo per assurdo che entrambi gli intervalli fossero finiti, allora la loro unione sarebbe anch'essa finita.
Tenendo questo in considerazione, scegliamo uno di questi. Ora chiamo questo intervallo $[a_1, b_1]$, dove $a_1 = c_0$ oppure $b_1 = c_0$, a seconda dell'intervallo scelto.
Quindi otteniamo una *successione di intervalli inscatolati, limitati, infiniti e dimezzati* ([[Intervalli]]) $$(I_n)_n$$
La *forma forte del teorema di Cantor* ([[Conseguenze dell'esistenza dell'estremo superiore#^78d038]]) ci dice che facendo l'intersezione di tutti questi intervalli otteniamo un $\xi$. 
Ora voglio trovare un *intorno* di $\xi$ che contenga un qualunque insieme *infinito* $[a_n, b_n]$. Ovvero voglio verificare che $$\exists r > 0: [a_n, b_n] \subseteq (\xi-r, \xi+r)$$
Allora la condizione è $$r > d(a_n,b_n)=\frac{b_0-a_0}{2^n}$$il che è possibile in quanto ricordandomi che $$\frac{b_0-a_0}{n} \geq \frac{b_0-a_0}{2^n}$$e tenendo conto *l'Archimedeità di $\mathbb{R}$* ([[Conseguenze dell'esistenza dell'estremo superiore#^d95d40]]) la condizione sopra citata è totalmente possibile visto che $$\exists \bar{n}: 0<\frac{b_0-a_0}{2^\bar{n}} \leq \frac{b_0-a_0}{\bar{n}} < r$$Abbiamo quindi che l'intorno in $\xi$ di raggio $r$ contiene l'insieme infinito $[a_\bar{n}, b_\bar{n}]$, di conseguenza anche l'intorno stesso è infinito; dato che contiene infiniti punti di $E$, per il *teorema di caratterizzazione* dei punti di accumulazione ([[#^622755]]), $\xi$ è *punto di accumulazione* per $E$. $\blacksquare$

**FIGURA 1.1.** (*Idea grafica del primo passaggio*)
![[Pasted image 20231103215430.png]]