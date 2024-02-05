---
data: 2023-10-24
corso: "[[Analisi Matematica I]]"
argomento: Teoremi sui Limiti di Funzione
tipologia: appunti
stato: "1"
---
*Teoremi sui limiti: unicità del limite, permanenza del segno, teorema del confronto, teorema dei due carabinieri, operazioni con i limiti, limiti infinitesimi e limiti infiniti, forme indeterminate.*
- - -
# 0. Preambolo
In questo capitolo si vuole creare una serie di *strategie* per poter verificare l'esistenza dei limiti senza dover ricorrere a fare dei *calcoli* infiniti in quanto richiesta dalla [[Definizione di Limite di funzione]].
Una di queste strategie consiste proprio enunciare e dimostrare una serie di *teoremi.*
# 1. Unicità del limite
#Teorema 
> [!thm] Teorema 1.1. (dell'unicità del limite)
Sia $$f: E \longrightarrow \mathbb{R}$$poi $x_0 \in \mathbb{\tilde{R}}$ un punto di accumulazione per $E$.
*Tesi.* Poi siano i valori limiti $L_1, L_2 \in \mathbb{\tilde{R}}$ tali che $$\lim_{x \to x_0} f(x) = L_1; \lim_{x \to x_0} f(x)= L_2$$allora $$L_1 = L_2$$
*"Se esiste il limite di una funzione allora essa è unica"*
^8aa5b9

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 1.1.* ([[#^8aa5b9]])
Si procede tramite una dimostrazione per *assurdo*.
Supponiamo dunque $$L_1 \neq L_2$$Allora ci chiediamo se è possibile trovare degli *intorni* ([[Intorni]]) di $L_1, L_2$ che chiameremo $V_1, V_2$ che sono *disgiunti*; ovvero se sono tali che $$V_1 \cap V_2 = \emptyset$$Dato che $L_1$ e $L_2$ sono diversi, da qui discende che la distanza tra $L_1$ e $L_2$ dev'essere maggiore di $0$; quindi possiamo impostare il *raggio* di questi intorni come $$r= \frac{|L_1-L_2|}{3}$$
Allora concludiamo che possono esistere $V_1$ e $V_2$ tali da essere disgiunti tra di loro.
Ora li scegliamo: applicando le definizioni di limite, ovvero $$\begin{align} \lim_{x \to x_0} f(x) = L_1 \iff &\text{per } V_1, \exists U_1 \text{ di }x_0 : \forall x \in E\\ &x \in U_1\diagdown\{x_0\} \implies f(x) \in V_1 \\ \lim_{x \to x_0} f(x)= L_2 \iff & \text{per }V_2,\exists U_2 \text{ di }x_0: \forall x \in E, \\ &x \in U_2 \diagdown\{x_0\} \implies f(x) \in V_2\end{align}$$Dato che $U_1, U_2$ sono *intorni* di $x_0$ che è di accumulazione per $E$ ([[Punti di aderenza e di accumulazione]]) si ha che $$(U_1 \cap U_2)\cap E \neq \emptyset \text{ escludendo }x_0$$Posso scegliere allora un $x$ che sta all'interno nell'intersezione di $U_1$ e $U_2$; ovvero $$x \in ((U_1 \cap U_2) \diagdown \{x_0\})$$e per ipotesi (ovvero che esistono tali limiti) deve valere che esiste un elemento $f(x)$ tale che $$f(x) \in (V_1 \cap V_2)$$il che è assurdo, in quanto $V_1 \cap V_2$ dovrebbe essere un *insieme vuoto*.

#Osservazione 
> [!oss] Osservazione 1.1. (l'utilità dell'unicità del limite alla rovescia)
   Questo teorema è anche utile per dimostrare la *non-esistenza* di un limite: prendendo la *contronominale* di questo teorema. Ovvero se due *restrizioni della stessa funzione* $f$ ([[Definizione di Limite di funzione]], **DEF 3.1.**) hanno limiti diversi $L_1 \neq L_2$, allora il limite *non* esiste.
# 2. Permanenza del segno
#Teorema
> [!thm] Teorema 2.1. (della permanenza del segno)
   Sia $$f: E \longrightarrow \mathbb{R}, E \subseteq \mathbb{R}$$Siano $x_0, L \in \mathbb{\tilde{R}}$, $x_0$ punto di accumulazione per $E$.
   Sia definito il *limite* $$\lim_{x \to x_0}f(x) = L$$
   *Tesi.* Allora supponendo che $L \in (0, +\infty)$ oppure $L = +\infty$, allora è vera che $$\exists \bar{U} \text{ intorno di }x_0: \forall x \in (\bar{U} \cap E)\diagdown \{x_0\}, f(x) > 0$$
   Ovvero a parole stiamo dicendo che se il limite è *positivo*, allora anche la *funzione* è positiva per un intorno opportuno di $x_0$; il segno si *"trasferisce"* dal limite alla funzione. 
^06a2e3

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 2.1.* ([[#^06a2e3]])
Parto dalle definizione del limite, ovvero $$\begin{align}\lim_{x \to x_0}f(x) = L \iff &\ \forall V \text{ di }L, \exists U\text{ di }x_0: \forall x \in E, \\ & \ x \in U\diagdown\{x_0\} \implies f(x) \in V\end{align}$$Per interpretarla nel nostro contesto (ovvero che $L$ è positiva), abbiamo che l'intorno di $L$ può essere $V = (0, +\infty)$, in quanto se è *positiva* allora sarà sicuramente contenuta in quell'intervallo.
Dunque viene verificato che esiste un intorno $U$ tale che $$\forall x \in E, x \in U \diagdown\{x_0\} \implies f(x) > 0$$
#Osservazione 
> [!oss] Osservazione 2.1. (utilità della permanenza del segno "alla rovescia")
   Posso usare questo teorema *"alla rovescia"*, prendendo la *contronominale* dell'enunciato; ovvero se $f(x)$ è sempre *negativo o uguale a zero* ed *il limite esiste*, allora sicuramente $L$ è sempre *negativo o uguale a zero*. $$f(x)\leq 0 \land \exists \lim_{x\to x_0}f(x) \implies L\leq 0$$
# 3. Teorema del confronto
#Teorema 
> [!thm] Teorema 3.1. (del confronto)
Siano $f, g$ funzioni di variabile reale del tipo $$f, g : E \longrightarrow \mathbb{R}, E \subseteq \mathbb{R}$$e $x_0$ un punto di accumulazione per $E$, e $x_0 \in \mathbb{\tilde{R}}$.
*Tesi.* Supponendo che siano vere le seguenti condizioni:
i. Che esista il limite $$\lim_{x \to x_0}f(x) = +\infty$$ii. Che la funzione $g$ dev'essere *sempre* (nel dominio) maggiore o uguale di $f$. $$\forall x \in E\diagdown\{x_0\}, g(x) \geq f(x)$$Allora vale che $$\lim_{x \to x_0}g(x) = +\infty$$
^7c97c5

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema del confronto* ([[#^7c97c5]]) 
Sia ad esempio $x_0 \in \mathbb{R}$, allora abbiamo la seguente definizione di limite: $$\begin{gather}\forall M > 0, \exists \delta > 0: \forall x \in E, \\ 0<|x- x_0 | < \delta \implies f(x)>M \end{gather}$$e considerando che $g(x) \geq f(x)$, abbiamo a maggior ragione che $$\forall x \in E, \\ 0<|x- x_0 | < \delta \implies g(x)\geq f(x)>M $$e considerando la *transitività* della relazione d'ordine $>$ ([[Relazioni]], **DEF 4.**), abbiamo $$\begin{gather}\forall M > 0, \exists \delta > 0: \forall x \in E, \\ 0<|x- x_0 | < \delta \implies g(x)>M \end{gather}$$che è esattamente la definizione di $$\lim_{x \to x_0}g(x) = +\infty \ \blacksquare$$ 
# 4. Teorema dei due carabinieri
#Teorema 
> [!thm] Teorema 4.1. (dei due carabinieri)
Siano $f, g, h$ funzioni del tipo $$f,g,h: E \longrightarrow \mathbb{R}, E \subseteq \mathbb{R}$$e $x_0$ un punto di accumulazione per $E$, $x_0, L \in \mathbb{\tilde{R}}$.
*Tesi.* Supponendo che $$\lim_{x\to x_0}f(x) = \lim_{x \to x_0}h(x) = L$$e che $$\forall x \in E \diagdown\{x_0\}, f(x) \leq g(x) \leq h(x)$$poi volendo possiamo chiamare $f, g$ le *"funzioni carabinieri"*; abbiamo che $$\lim_{x \to x_0}g(x) = L$$
^04916c

**FIGURA 4.1.** (*L'idea del teorema*)
![[Pasted image 20231026220649.png]]

**FIGURA 4.2.** (*Immagine divertente-illustrativa del teorema*)
![[Pasted image 20231223102214.png]]

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema dei due carabinieri* ([[#^04916c]]])
Consideriamo solamente il caso per $x_0 \in \mathbb{R}$.
Per la *definizione del limite*, abbiamo $$\begin{align}\forall \varepsilon > 0, \exists \delta_f &> 0: \forall x \in E, \\0<|x-x_0| < \delta_f &\implies |f(x)-L| < \varepsilon \\  & \implies -\varepsilon < f(x)-L < \varepsilon \\ &\implies L - \varepsilon < f(x) < L+\varepsilon\end{align}$$e analogamente $$ \begin{gather}\forall \varepsilon >0, \exists \delta_h > 0: \forall x \in E,\\ 0<|x-x_0|< \delta_h \implies L-\varepsilon < h(x) < L+\varepsilon\end{gather}$$
Se vogliamo che *entrambe* le espressioni valgano contemporaneamente, dobbiamo scegliere il *minimo* tra i due delta. 
Per capire l'idea di questo ragionamento prendiamo dei numeri: $$(x < 3 \implies x < 4 )\land( x <6 \implies x < 7)$$se voglio essere *sicuro* che valgano entrambe, devo prendere $x < 3$ in quanto così abbiamo la garanzia che anche $x < 6$ sia vera.
Dunque sia $$\delta = \min\{\delta_f, \delta_h\}$$e mettendole assieme, abbiamo $$0 < |x-x_0| < \delta \implies L- \varepsilon < f(x) \leq g(x)  \leq h(x) < L+\varepsilon $$possiamo sfruttare la *transitorietà* di $>$ per ottenere $$0 < |x-x_0| < \delta \implies |g(x)-L| < \varepsilon$$
Riassumendo, abbiamo il seguente: $$\begin{gather}\forall \varepsilon > 0, \exists \delta = \min\{\delta_f, \delta_h\}: \forall x \in E, \\ 0<| x-x_0|<  \delta  \implies |g(x)-L| < \varepsilon\end{gather}$$che è esattamente la *definizione* di $$\lim_{x \to x_0}g(x) = L$$come volevasi dimostrare. $\blacksquare$
# 5. Operazioni con i limiti
Ora presentiamo una serie di proposizioni, raccolte in un unico teorema, e queste ci permettono di fare delle operazioni *tra limiti*.

#Teorema 
> [!thm] Teorema 5.1. (operazioni tra limiti)
Siano $f, g$ funzioni di variabile reale del tipo $$f, g : E \longrightarrow \mathbb{R}, E \subseteq \mathbb{R}, x_0 \in \mathbb{\tilde{R}}$$e $x_0$ un punto di accumulazione per $E$.
*Tesi.* Supponendo che $$\begin{gather}\lim_{x \to x_0}f(x) = l \in \mathbb{R} \\ \lim_{x \to x_0}g(x) = m \in \mathbb{R} \end{gather}$$allora abbiamo le seguenti: $$\begin{align}&\lim_{x\to x_0}(f(x) \pm g(x)) = l+m \\ &\lim_{x \to x_0}(f(x)g(x)) = lm \end{align}$$inoltre se $m \neq 0$, allora $$ \lim_{x \to x_0}(\frac{f(x)}{g(x)}) = \frac{l}{m} $$
^48b492

#Dimostrazione 
**DIMOSTRAZIONE** dei primi due punti del *teorema 5.1.* ([[#^48b492]])
1. Prendiamo la definizione dei limiti $$\begin{gather}\lim_{x \to x_0}f(x) = l  \\ \lim_{x \to x_0}g(x) = m  \end{gather}$$ovvero $$\begin{gather}\forall \varepsilon > 0, \exists \delta_f > 0: \forall x \in E, \\0<|x-x_0|<\delta_f \implies |f(x)-l| < \varepsilon \\\text{ovvero } l-\varepsilon < f(x)< \varepsilon+l\end{gather}$$e analogamente $$\begin{gather}\forall \varepsilon > 0, \exists \delta_g > 0: \forall x \in E, \\0<|x-x_0|<\delta_g \implies |g(x)-m| < \varepsilon \\ \text{ovvero } m-\varepsilon < g(x)< \varepsilon+m \end{gather}$$osserviamo che, in quanto abbiamo definito $\varepsilon$ come un valore *arbitrariamente piccolo*, allora possiamo porre $\varepsilon = \frac{\varepsilon'}{2}$ . 
   Infatti $\varepsilon >0$ risulterà comunque vera, in quanto dividendo un qualsiasi numero infinitamente piccolo otteniamo un numero ancora più piccolo, ma mai zero. Dunque abbiamo i seguenti: $$\begin{gather}0<|x-x_0|<\delta_f \implies|f(x)-l| < \frac{\varepsilon}{2} \\ 0<|x-x_0|<\delta_g \implies|g(x)-m| < \frac{\varepsilon}{2} \end{gather}$$ora scegliendo $\delta = \min\{\delta_f, \delta_g\}$ abbiamo che valgono le seguenti proposizioni e possiamo dunque sommarle (analogo il discorso nella **DIMOSTRAZIONE 4.2.**): abbiamo allora $$\begin{gather}\forall \varepsilon >0, \exists\delta: \forall x \in E, \\ 0<|x - x_0| < \delta \implies m-\frac{\varepsilon}{2} + l-\frac{\varepsilon}{2} < f(x)+g(x) < m+\frac{\varepsilon}{2} + l+\frac{\varepsilon}{2}  \\ \implies (m+l)-\varepsilon < f(x)+g(x) < (m+l)+\varepsilon \\ \implies |f(x)+g(x)| < (m+l)+\varepsilon\end{gather}$$
che è esattamente la definizione del limite 
$$\lim_{x\to x_0}(f(x) \pm g(x)) = l+m$$

2. Qui il ragionamento per dimostrare la tesi diventa più sottile; la dimostrazione richiederà l'uso della *disuguaglianza triangolare* del *valore assoluto* ([[Funzioni di potenza, radice e valore assoluto]], **OSS 3.1.1.**).
   Secondo la definizione del limite, se ho $f(x)g(x) \to lm$ per $x \to x_0$ allora devo ragionare sulla seguente espressione: $$|f(x)g(x)-lm|$$e utilizzando un trucchetto in cui all'interno di questa aggiungo un'espressione equivalente a $0$ (ovvero $-f(x)m + f(x)m \iff 0$), questo diventa $$|f(x)g(x)-lm| \leq|f(x)g(x)-f(x)m+f(x)m-lm|$$ora applicando la *disuguaglianza triangolare* ho: $$\begin{align} |f(x)g(x)-lm| &\leq|f(x)g(x)-f(x)m+f(x)m-lm| \\ &\leq |f(x)g(x)-f(x)m| + |f(x)m-lm| \\ &\leq |f(x)(g(x)-m)|+|m(f(x)-l)| \\ &\leq |f(x)||g(x)-m|+|m||f(x)-l| \end{align}$$Ora ragioniamo su ogni termine del membro destro dell'uguaglianza.
   $|f(x)-l|$ è una quantità destinata a diventare *infinitamente* piccolo, in quanto esso rappresenta la distanza tra la funzione ed il limite; analogo il discorso per $|g(x)-m|$.
   $|m|$ è una costante che viene moltiplicata per un numero che diventa più piccolo, allora anche questa diventa piccola.
   Ora l'unico apparente *"intralcio"* è $|f(x)|$ in quanto non è una costante, *però* quando è vicino a $x_0$ si comporta come una costante in quanto è limitata (dato che ha il limite $l \in \mathbb{R}$).
   Allora tutto il quantitativo al membro destro diventa piccolo a piacimento. $\blacksquare$
# 6. Limiti infiniti e infinitesimi
Notiamo che in **TEOREMA 5.1.** per il quoziente tra limiti abbiamo imposto che $m \neq 0$; infatti se la funzione che sta al denominatore $g(x)$ si avvicina a $0$, il limite si comporterà in un altra maniera. Enunciare quindi i seguenti teoremi per illustrare questi comportamenti.

#Teorema 
> [!thm] Teorema 6.1. (limiti finiti e infinitesimi)
Sia $f: E \longrightarrow \mathbb{R}$, $E \subseteq \mathbb{R}$, $x_0 \in \mathbb{\tilde{R}}$ punto di accumulazione per $E$.
*Tesi.* Allora valgono le seguenti: 
Limite infinitesimo $$\lim_{x \to x_0}f(x) = +\infty \implies\lim_{x \to x_0}\frac{1}{f(x)} = 0$$
Limite infinito $$\lim_{x \to x_0}f(x) = 0\land f(x)>0, \forall x \neq x_0 \implies\lim_{x \to x_0}\frac{1}{f(x)} = +\infty$$
^380b0f

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 6.1.* ([[#^380b0f]])
Dimostriamo solo il *limite infinitesimo*, in quanto la dimostrazione del *limite infinito* è analoga.
Partiamo dalla definizione del limite di $f(x) \to +\infty$; ovvero $$\begin{gather}\forall M >0, \exists \delta >0: \forall x \in E \diagdown\{x_0\} \\0<|x-x_0|<\delta \implies f(x) > M \\ \implies \frac{1}{f(x)}< \frac{1}{M} \\ \text{sia }M = \frac{1}{\varepsilon}, \forall \varepsilon > 0\implies -\varepsilon<0<\frac{1}{f(x)}<\varepsilon  \\ 0<|x-x_0| < \delta \implies |\frac{1}{f(x)}| < \varepsilon\end{gather}$$ovvero la definizione del limite di $$\lim_{x \to x_0}\frac{1}{f(x)} = 0$$
# 7. Forme indeterminate
Ora definiamo delle *forme indeterminate* di alcuni limiti.

#Teorema 
> [!thm] Teorema 7.1. (forme indeterminate)
*Tesi 1.* Sia $$\lim_{x \to x_0}f(x) = +\infty \text{ e } \lim_{x \to x_0}g(x) \neq -\infty$$(la seconda vuol dire che $g$ è inferiormente limitata; ovvero $\exists M>0: \forall x \in E \diagdown \{x_0\}, g(x)>-M$), allora abbiamo che $$\lim_{x \to x_0}f(x)+g(x) = +\infty$$
Analogo il discorso per $$\lim_{x \to x_0}f(x) = -\infty \text{ e }\lim_{x \to x_0}\neq +\infty$$
Escludiamo infatti il caso $-\infty + \infty$ in quanto essa è una *forma indeterminata*. 
*Tesi 2.* Sia $$\lim_{x \to x_0}f(x) = +\infty, \exists \rho>0: \forall x \in E\diagdown\{x_0\}, g(x)\geq \rho > 0$$la seconda espressione vuole dire che $g(x)$ è un'espressione *sempre* positiva di $0$, allora si ha $$\lim_{x \to x_0}f(x)g(x) = +\infty$$e qui escludiamo il caso $+\infty \cdot 0$. 
*Tesi 3 (dalla dispensa).* Sia $$\lim_{x \to x_0}f(x) = 0, \exists M>0: |g(x)| < M$$ovvero la seconda vuol dire che $g(x)$ è *limitata*, allora abbiamo che $$\lim_{x \to x_0}f(x)g(x) = 0$$escludendo i casi $\pm \infty \cdot 0$.
^adc58a

#Dimostrazione 
**DIMOSTRAZIONE** della tesi 1 del *teorema 7.1.* ([[#^adc58a]])
Partiamo dalla definizione del limite di $f$: ovvero $$\begin{gather}\forall K > 0, \exists \delta > 0: \forall x \in E \diagdown\{x_0\} \\ 0<|x-x_0|<\delta \implies f(x) > K\end{gather}$$ma allo stesso tempo abbiamo che $g$ è inferiormente limitata, ovvero $$\exists M>0:\forall x\neq x_0 , g(x) > -M $$allora se scegliamo $K = K + M$ e sommiamo entrambe le espressioni, abbiamo $$0<|x-x_0| < \delta \implies f(x)+g(x) > K$$che è la definizione di $$\lim_{x \to x_0}f(x)+g(x) = +\infty$$
# 8. Limite della funzione composta
#Osservazione 
> [!oss] Osservazione 8.1. (l'idea del concetto)
   Ho una funzione $$f: E \longrightarrow \mathbb{R}$$con $E \subseteq \mathbb{R}$, $x_0, y_0 \in \mathbb{\tilde{R}}$ e $x_0$ di accumulazione per $E$.
   Suppongo che esiste il limite di $f(x) \to y_0$ per $x \to x_0$: $$\lim_{x \to x_0}f(x) = y_0$$
   Ora sia $$g: F \longrightarrow \mathbb{R}$$con $F \subseteq \mathbb{R}$, $y_0$ punto di accumulazione per $F$ e $L \in \mathbb{\tilde{R}}$. Suppongo che esiste il limite di $g(y) \to L$ per $y \to y_0$. Ovvero $$\lim_{y \to y_0}g(y)=L$$Supponendo che l'immagine funzione del dominio sia sottoinsieme del dominio dell'altra funzione, ovvero $f(E) \subseteq F$, e $f(x)=y$ un punto di accumulazione per $f(E)$, ho la situazione nella *figura 8.1.*.
   Allora posso fare la *funzione composita* $g \circ f$ ([[Funzioni]], **DEF 4.**) che mi porta ad un certo punto in $\mathbb{R}$.
   Quindi voglio capire se posso affermare il seguente: $$\lim_{x \to x_0}g(f(x_0)) = L$$

**FIGURA 8.1.** (*Idea del concetto*)
![[Pasted image 20231103222509.png]]

#Teorema 
> [!thm] Teorema 8.1. (del limite della funzione composta)
Siano $$f: E \longrightarrow \mathbb{R}; g: F \longrightarrow \mathbb{R}$$con $y_0, x_0$ punti di accumulazione per (rispettivamente) $E, F$. Poi supponendo che esistono i limiti
$$\lim_{x \to x_0}f(x) = y_0 \ \text{  e }\  \lim_{y \to y_0 }g(y)=L$$e *se* vale una delle due *ipotesi supplementari*; $$\begin{gather}1)\ \forall x \in E\diagdown\{x_0\}, f(x) \neq y_0 \\ 2) \  y_0 \in F, g(y_0)=L\end{gather}$$
allora vale che $$\lim_{x \to x_0}f(g(x)) = L$$
^55caf4

#Dimostrazione 
**DIMOSTRAZIONE (FACOLTATIVA)** del *teorema 8.1.* ([[#^55caf4]]) 
Riscriviamo i limiti $$\lim_{x \to x_0}f(x) = y_0 \ \text{  e }\  \lim_{y \to y_0 }g(y)=L$$secondo la *definizione rigorosa del limite* ([[Definizione di Limite di funzione]], **DEF 2.1.**). Allora abbiamo: $$\lim_{x \to x_0}f(x) = y_0 \iff \begin{gather}\forall U \text{ di }y_0, \exists V \text{ di }x_0: \forall x \in E\diagdown\{x_0\} \\ x \in V \implies f(x)=y \in U \end{gather}$$e $$\lim_{y \to y_0}g(y) = L \iff \begin{gather}\forall W \text{ di }L, \exists U \text{ di }y_0: \forall y \in F \diagdown\{y_0\} \\ y \in U \implies g(y) \in W \end{gather}$$*Concatenando* le due espressioni, otteniamo$$\lim_{x \to x_0}g(f(x)) = L \iff \begin{gather}\forall W \text{ di }L, \exists V \text{ di }x_0: \forall x \in E \diagdown\{x_0\}\\ f(x) \in V \implies g(f(x)) \in W \end{gather}$$però per farlo dobbiamo assicurarci di una *condizione*: ovvero che $$\forall x \in E, x \neq x_0 \implies f(x) = y \in F\diagdown \{y_0\}$$così abbiamo un modo sicuro per garantirci che $$\forall x, x  \in V \implies f(x) \in V$$
Un modo per garantire la suddetta condizione è porre $f(x) \neq y_0, \forall x \neq x_0$.
Allora posso scrivere $$g(f(x)) = g(y) \in W$$
Se invece ci capita che $\exists x': f(x') = y_0$, allora possiamo comunque avvalerci dell'altra ipotesi supplementare ponendo $g(y_0) = L$ e abbiamo dunque $g(f(x')) = g(y_0) = L$, che ovviamente appartiene a $W$. 

#Osservazione 
> [!oss] Osservazione 8.1. (le condizioni supplementari sono solitamente vere)
   Per fortuna nostra le *condizioni supplementari* appena descritte di norma valgono quasi sempre.

#Osservazione 
> [!oss] Osservazione 8.2. (cambio della variabile del limite)
   Possiamo sfruttare questo *teorema* per poter svolgere ciò che chiameremo il meccanismo del *"cambio della variabile del limite"*; questo è un meccanismo non importante, ma importantissimo. Vediamo un esempio in cui entra in gioco questo meccanismo.
## Cambio della variabile del limite
#Esempio 
> [!ex] Esempio 8.a. (di un cambio della variabile del limite)
   Voglio calcolare il limite $$\lim_{x \to 0^+}\frac{\sin{\sqrt{x}}}{\sqrt{x}}$$
*Idea.* L'idea fondamentale consiste nel pensare alla funzione del limite $$x \mapsto \frac{\sin\sqrt{x}}{\sqrt{x}}$$come la *funzione composta*. Ponendo infatti $$x \mapsto \sqrt{x} = y \mapsto \frac{\sin y}{y}$$Di conseguenza dobbiamo trovare il valore per cui tende $y_0$. Dunque $$x \to 0^+ \implies \sqrt{x} = y \to 0^+$$in quanto se $x$ tende a $0$ da destra, allora anche la sua radice tende a $0$ da destra.
Ora verifichiamo se vale *l'ipotesi aggiuntiva*, ovvero se è vera che $$\forall x, x \neq x_0 \implies f(x) \neq 0$$il che è vera, in quanto non c'è nessun numero di cui la radice è $0$, se non $0$ stesso.
Dunque possiamo scrivere il limite iniziale come la *composizione* tra due funzioni, di cui una è la originaria. Allora $$\lim_{x \to 0^+}\frac{\sin\sqrt{x}}{\sqrt{x}} = \lim_{y \to 0^+}\frac{\sin y}{y}$$Ora questo limite è semplicissimo da risolvere, in quanto questo ci riconduce al limite fondamentale $\frac{\sin x}{x}=1, x \to 0$ ([[Esempi di Limiti di Funzione]], **ESEMPIO 6.1.**). Quindi $L =1$.
# 9. Limite della funzione monotona
#Osservazione 
> [!oss] Osservazione 9.1. (carattere "speciale" di questo teorema)
   Osserviamo che fino ad adesso *tutti* i nostri *teoremi* sui limiti di funzione enunciati in questa pagina avevano *l'esistenza di qualche limite* per ipotesi.
   Il teorema che enunceremo sarà *speciale* da questo punto di vista: infatti *non* avrà l'esistenza di un qualche limite per ipotesi, ma ha comunque nella *tesi* l'esistenza del limite.

#Esercizio 
>[!warning] (Per esercizio verificare che se $\sup E \not \in E$ allora $\sup E$ è di accumulazione per $E$.)

#Teorema 
> [!thm] Teorema 9.1. (della funzione monotona)
Sia $$f: E \longrightarrow \mathbb{R}, E \subseteq \mathbb{R}$$e supponiamo che $E$ sia *superiormente limitata* con $\sup E = x_0$ e $x_0 \not \in E$. Oppure analogamente, se $E$ è *inferiormente limitata* allora abbiamo $\inf E = x_0 \not \in E$.
Inoltre è possibile supporre che $x_0 \in \mathbb{\tilde{R}}$, ovvero abbiamo $x_0 = \pm\infty$.
Inoltre sia $f$ una funzione *monotona* crescente o decrescente ([[Funzioni]], **DEF 8.**)
*Tesi.* Allora *esiste* il limite $l$ $$\lim_{x \to x_0}f(x) = l$$ e abbiamo $$l = \begin{cases} \sup(f(E)) \text{ se crescente}\\ \inf(f(E)) \text{ se decrescente}\end{cases}$$
^e5c912

**DIMOSTRAZIONE** del *teorema 9.1.* ([[#^e5c912]])
Dimostriamo il caso per cui supponiamo che $x_0 \in \mathbb{R}$, $f$ sia *crescente* e $\sup(f(E)) = L \in \mathbb{R}$ (in parole il limite *"target"* è un numero reale): si tratta di provare che $$\lim_{x \to x_0}f(x) = L$$
Consideriamo dunque la *proprietà dell'estremo superiore $\sup$* ([[Insiemi limitati, maggioranti, massimo e teorema dell'estremo superiore#^601040]]); $$L =\sup (f(E)) \iff \begin{cases}\forall x \in E, f(x) \leq L \\\forall \varepsilon > 0, \exists \bar{x}: L - \varepsilon < f(\bar{x}) \end{cases}$$
Ora considero un $x \in E: x > \bar{x}$ e applicando la *monotonia della funzione* ho $$x \geq \bar{x} \implies f(x) \geq f(\bar{x})$$Infinite metto le proposizioni assieme, ottenendo $$\begin{gather}\forall \varepsilon>0, \exists \bar{x}: \forall x \in E, \\ \bar{x} \leq x < x_0 \implies L-\varepsilon < f(\bar{x}) \leq f(x) \leq L< L+\varepsilon \\ \implies |f(x)-L| < \varepsilon\end{gather}$$che è esattamente la *definizione* del limite appena enunciato. $\blacksquare$

#Corollario 
> [!cor] Corollario 9.1.
Sia $$f: \ ]a, b[ \ \longrightarrow \mathbb{R}$$$c \in\  ]a, b[$ e $f$ crescente. 
*Tesi.* Allora esistono i limiti$$\lim_{x \to c^-}f(x); \lim_{x \to c^+}f(x)$$e inoltre $$\lim_{x \to c^-}f(x)\leq f(c) \leq \lim_{x \to c^+}f(x)$$
Abbiamo di fatto una situazione situazione del raffigurata nella *figura 9.1.*.
^165965

**FIGURA 9.1.** (*Idea grafica del corollario 9.1.*)
![[Pasted image 20231103222520.png]]

#Osservazione  
> [!oss] Osservazione 9.2. (la definizione di discontinuità di prima specie)
Quindi secondo il **COROLLARIO 9.1.** possiamo avere le due seguenti situazioni; o il *limite destro* ed il *limite sinistro* si coincidono o abbiamo una specie di *"salto"*.
Questo sarà utile quando parleremo della *continuità* e della *discontinuità*, riferendoci in particolare ad un teorema che enuncia, data una funzione monotona crescente, in un punto discontinuo possiamo avere *solo* la discontinuità del tipo *"salto"* ([[Classificazioni di Discontinuità#^006fee]]).
