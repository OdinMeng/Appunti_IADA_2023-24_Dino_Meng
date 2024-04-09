---
data: 2023-12-12
corso: "[[Analisi Matematica I]]"
argomento: Teorema della Media Integrale
tipologia: appunti
stato: "1"
capitolo:
---
- - -
*Breve descrizione qui*
- - -
# 0. Prerequisiti e/o voci correlate
- [[Suddivisione di un Intervallo]]
- [[Insiemi limitati, maggioranti, massimo e teorema dell'estremo superiore]]
- [[Funzioni]] (minimo, massimo)
- [[Teoremi sulle funzioni continue]] (di Weierstraß e dei valori medi)
- [[Teorema di Torricelli-Barrow]] (ai fini della dimostrazione)
# 1. Enunciato del teorema
#Teorema 
> [!thm] della media integrale
> Sia $f:[a,b] \longrightarrow \mathbb{R}$ *continua* ([[Definizione di Continuità#^d2f56f]]), pertanto *integrabile secondo Riemann* ([[Integrabilità secondo Riemann#^5455b8]]).
> Allora per *esiste un valore nell'intervallo per cui l'immagine del valore sia uguale all'integrale della funzione diviso per la base*
> $$\exists \xi \in [a,b]: f(\xi) = \frac{1}{b-a}\int_a^b f(t) dt$$
^c2f053

**FIGURA 1.1.** (*Idea*)
![[Pasted image 20231212160620.png]]
# 2. Dimostrazione
#Dimostrazione 
**DIMOSTRAZIONE** del *teorema della media integrale* ([[#^c2f053]])
Innanzitutto tengo conto di una *proprietà di definizione* dell'integrale:
$$\forall \Delta \in \mathcal{D}, s(f, \Delta) \leq \int_a^b f(t) dt \leq S(f ,\Delta)$$
Questo vale in particolare se scelgo la *suddivisione* più banale, ovvero 
$$\Delta= \{a,b\}$$
che è la *meno fine* ([[Suddivisione di un Intervallo#^6c1bae]]) di tutte le suddivisioni possibili.
Cosa succede in questo caso? Vediamo che abbiamo
$$\inf_{[a, b]}f \cdot (b-a) \leq \int_a^b f(t)dt \leq \sup_{[a,b]} f \cdot (b-a)$$
Graficamente se disegno il *rettangolo "più basso" possibile* e quello *"più alto" possibile*, ho che l'*area della funzione* viene *"incastrata"* tra di essi (*figura 2.1.*).
Ma per il *teorema di Weierstraß* ([[Teoremi sulle funzioni continue#^918fc1]]) $f$ ha sia $\min$ che $\max$ dato che essa è *continua* e viene definita su un *insieme chiuso e limitato*; allora $\inf, \min$ e $\sup, \max$ coincidono. Ovvero, definendo $x_m$ il punto di *minimo* e $x_M$ il punto di *massimo*, ho
$$f(x_m) \leq \frac{\int_a^b f(t) dt}{b-a} \leq f(x_M)$$
Infine applico il *teorema dei valori intermedi* ([[Teoremi sulle funzioni continue#^1c6f7c]]) su $[a,b]$ e dunque ho
$$\exists \xi \in  [a,b]: f(\xi)=\frac{1}{b-a}\int_a^b f(t) dt $$
**FIGURA 2.1.**
![[Pasted image 20231212155525.png]]