---
data: 2023-11-07
corso: "[[Analisi Matematica I]]"
argomento: Secondo teorema di Bolzano-Weierstraß
tipologia: appunti
stato: "0"
---
*Richiami al primo teorema di Bolzano-Weierstraß; interpretazione del medesimo teorema in termini di successioni; enunciato del teorema; dimostrazione del teorema.*
- - -
# 0. Richiamo al primo teorema di B.W.
Richiamiamo il *primo teorema di Bolzano-Weierstraß* in [[Punti di aderenza e di accumulazione]].

#Richiamo
> [!math|{"type":"remark","number":"","setAsNoteMathLink":false,"title":"Primo teorema di BW (richiamo)","label":"primo-teorema-di-bw-richiamo","_index":0}] Richiamo (Primo teorema di BW (richiamo)).
>  
Sia $E \subseteq \mathbb{R}$, $E$ un insieme *infinito* e *limitato*. ([[Insiemi limitati, maggioranti, massimo e teorema dell'estremo superiore]], **DEF 1.3.**)
Allora si verifica il seguente: $$
\exists \xi \in \mathbb{R}: \xi \in \mathcal{D} E
$$ovvero che esista un numero $\xi$ che sia *punto di accumulazione* per $E$. 
^804709
# 1. Enunciato del teorema
*Idea.* Abbiamo appena letto l'enunciato del *primo* teorema di Bolzano-Weierstraß, che viene anche detta come la *"forma insiemistica"* di tale teorema: ora la vogliamo interpretare con le nozioni di *successione*, *successione convergente*, e di *sotto successione*. ([[Successione e Sottosuccessione]])

#Teorema 
> [!math|{"type":"theorem","number":"1.1.","setAsNoteMathLink":true,"title":"Secondo teorema di Bolzano-Weierstraß","label":"secondo-teorema-di-bolzano-weierstra","_index":0}] Teorema 1.1. (Secondo teorema di Bolzano-Weierstraß).
> 
Sia $(a_n)_n$ una *successione reale* e *limitata*  ([[Successione e Sottosuccessione]], **DEF 1.2.**, **DEF 1.3.**)
Allora deve esistere una *sotto successione convergente* $(a_{n_k})_k$ ([[Successione e Sottosuccessione]], **DEF 2.1.**), ovvero deve esistere $$\lim_k a_{n_k} = L \in \mathbb{R}$$
^69cfa9
# 2. Dimostrazione
#Dimostrazione 
`\begin{proof}`@[[#^69cfa9]]
Chiamo $E = \{a_n, n \in \mathbb{N}\}$ l'insieme dei *valori di* $a_n$, ovvero l'insieme immagine della successione $(a_n)_n$.
Ora ci sono due possibilità: che $E$ sia o *finito* o *infinito*. 
1. $E$ è finito: esempi di questo caso può essere la successione costante $a_n = c, c \in \mathbb{R}$ oppure la successione pari-dispari $a_n = (-1)^n$.
   Allora *almeno* un elemento in $E$ è immagine di *infiniti* indici $n$; scelgo allora una sotto successione *opportuna* tale da risultare una successione costante, che è ovviamente convergente. 
   **ESEMPIO 2.1.** Ad esempio per $a_n = (-1)^n$ basta scegliere $(a_{2n})_n$ o $(a_{2n+1})_n$. L'idea è che abbiamo $$1, -1, 1, -1, 1, -1, \ldots$$e scegliamo solo i termini pari o dispari: così abbiamo la *successione estratta* $$1, 1, 1, \ldots, 1 \text{ o }-1, -1, -1, \ldots, -1$$
2. $E$ è infinito: ma comunque la *successione* $(a_n)_n$, per ipotesi, è limitata. Allora $E$ è un insieme *limitato* e *infinito*; qui applico il *primo teorema di Bolzano-Weierstraß* richiamatasi all'inizio. Chiamo dunque il *punto di accumulazione* ([[Punti di aderenza e di accumulazione]], **DEF 2.1.**) per $E$: $\xi \in \mathbb{R}$.
   Allora per definizione in *ogni intorno* di $\xi$ ci sono *infiniti punti* di $E$.
   Ovvero in *ogni intorno di* $\xi$ ci sono *infiniti punti-valori* $a_n$. 
   Ora ci chiediamo se è possibile costruire una sottosuccessione tale che $$\lim_k a_{n_k} = \xi$$
   Allora per avere una risposta consideriamo i seguenti: 
   0. Considero l'intorno $]\xi -1, \xi +1[$ e scelgo $a_{n_0}$ in questo intorno.
   1. Stesso discorso per l'intorno $]\xi-\frac{1}{2}, \xi+\frac{1}{2}[$, con $a_{n_1}$, ma anche tale che $n_1 > n_0$ per conservare l'ordine. Posso farlo in quanto ci sono *infiniti* punti (ovvero valori $a_n$) attorno $\xi$.
   2. Vado avanti così fino all'infinito; ho allora $$a_{n_k} \in (\xi-\frac{1}{2^k}, \xi+\frac{1}{2^k})$$Allora $$|a_{n_k}-\xi| < \frac{1}{2^k} \implies 0<|a_{n_k}-\xi| < \frac{1}{2^k}$$Considerando che $$\lim_n 0 = 0, \lim_n \frac{1}{2^k}=0$$Allora per il *teorema dei due carabinieri* ([[Limite di Successione]], **OSS 1.1.**) ho $$\lim_{k}a_{n_k}-\xi = 0 \implies \boxed{\lim_k a_{n_k}= \xi} \ \blacksquare$$
`\end{proof}`

Graficamente l'idea della dimostrazione è il seguente.
**FIGURA 2.1.** (*Idea della dimostrazione*)
[GRAFICO DA FARE]

