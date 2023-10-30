---
data: 2023-10-24
corso: "[[Analisi Matematica I]]"
argomento: Teoremi sui Limiti di Funzione
tipologia: appunti
stato: "0"
---
*Teoremi sui limiti: unicità del limite, permanenza del segno, teorema del confronto, teorema dei due carabinieri, operazioni con i limiti, limiti infinitesimi e limiti infiniti, forme indeterminate.*
- - -
# 0. Preambolo
In questo capitolo si vuole creare una serie di *strategie* per poter verificare l'esistenza dei limiti senza dover ricorrere a fare dei *calcoli* infiniti in quanto richiesta dalla [[Definizione di Limite di funzione]].
Una di queste strategie consiste proprio enunciare e dimostrare una serie di *teoremi.*
# 1. Unicità del limite
**TEOREMA 1.1.** (*L'unicità del limite*)
Sia $$f: E \longrightarrow \mathbb{R}$$poi $x_0 \in \mathbb{\tilde{R}}$ un punto di accumulazione per $E$.
*Tesi.* Poi siano i valori limiti $L_1, L_2 \in \mathbb{\tilde{R}}$ tali che $$\lim_{x \to x_0} f(x) = L_1; \lim_{x \to x_0} f(x)= L_2$$allora $$L_1 = L_2$$
**DIMOSTRAZIONE 1.1.** Si procede tramite una dimostrazione per *assurdo*.
Supponiamo dunque $$L_1 \neq L_2$$Allora ci chiediamo se è possibile trovare degli *intorni* ([[Intorni]]) di $L_1, L_2$ che chiameremo $V_1, V_2$ che sono *disgiunti*; ovvero se sono tali che $$V_1 \cap V_2 = \emptyset$$Dato che $L_1$ e $L_2$ sono diversi, da qui discende che la distanza tra $L_1$ e $L_2$ dev'essere maggiore di $0$; quindi possiamo impostare il *raggio* di questi intorni come $$r= \frac{|L_1-L_2|}{3}$$
Allora concludiamo che possono esistere $V_1$ e $V_2$ tali da essere disgiunti tra di loro.
Ora li scegliamo: applicando le definizioni di limite, ovvero $$\begin{align} \lim_{x \to x_0} f(x) = L_1 \iff &\text{per } V_1, \exists U_1 \text{ di }x_0 : \forall x \in E\\ &x \in U_1\diagdown\{x_0\} \implies f(x) \in V_1 \\ \lim_{x \to x_0} f(x)= L_2 \iff & \text{per }V_2,\exists U_2 \text{ di }x_0: \forall x \in E, \\ &x \in U_2 \diagdown\{x_0\} \implies f(x) \in V_2\end{align}$$Dato che $U_1, U_2$ sono *intorni* di $x_0$ che è di accumulazione per $E$ ([[Punti di aderenza e di accumulazione]]) si ha che $$(U_1 \cap U_2)\cap E \neq \emptyset \text{ escludendo }x_0$$Posso scegliere allora un $x$ che sta all'interno nell'intersezione di $U_1$ e $U_2$; ovvero $$x \in ((U_1 \cap U_2) \diagdown \{x_0\})$$e per ipotesi (ovvero che esistono tali limiti) deve valere che esiste un elemento $f(x)$ tale che $$f(x) \in (V_1 \cap V_2)$$il che è assurdo, in quanto $V_1 \cap V_2$ dovrebbe essere un *insieme vuoto*.

**OSS 1.1.** (*Tratto dalla dispensa di D.D.S.*) Questo teorema è anche utile per dimostrare la *non-esistenza* di un limite: prendendo la *contronominale* di questo teorema. Ovvero se due *restrizioni della stessa funzione* $f$ ([[Definizione di Limite di funzione]], **DEF 3.1.**) hanno limiti diversi $L_1 \neq L_2$, allora il limite *non* esiste.
# 2. Permanenza del segno
**TEOREMA 2.1.** (*Permanenza del segno*)
Sia $$f: E \longrightarrow \mathbb{R}, E \subseteq \mathbb{R}$$Siano $x_0, L \in \mathbb{\tilde{R}}$, $x_0$ punto di accumulazione per $E$.
Sia definito il *limite* $$\lim_{x \to x_0}f(x) = L$$
*Tesi.* Allora supponendo che $L \in (0, +\infty)$ oppure $L = +\infty$, allora è vera che $$\exists \bar{U} \text{ intorno di }x_0: \forall x \in (\bar{U} \cap E)\diagdown \{x_0\}, f(x) > 0$$Ovvero a parole stiamo dicendo che se il limite è *positivo*, allora anche la *funzione* è positiva per un intorno opportuno di $x_0$; il segno si *"trasferisce"* dal limite alla funzione.

**DIMOSTRAZIONE 2.1.**
Parto dalle definizione del limite, ovvero $$\begin{align}\lim_{x \to x_0}f(x) = L \iff &\ \forall V \text{ di }L, \exists U\text{ di }x_0: \forall x \in E, \\ & \ x \in U\diagdown\{x_0\} \implies f(x) \in V\end{align}$$Per interpretarla nel nostro contesto (ovvero che $L$ è positiva), abbiamo che l'intorno di $L$ può essere $V = (0, +\infty)$, in quanto se è *positiva* allora sarà sicuramente contenuta in quell'intervallo.
Dunque viene verificato che esiste un intorno $U$ tale che $$\forall x \in E, x \in U \diagdown\{x_0\} \implies f(x) > 0$$
**OSS 2.1.** Posso usare questo teorema *"alla rovescia"*, prendendo la *contronominale* dell'enunciato; ovvero se $f(x)$ è sempre *negativo o uguale a zero* ed *il limite esiste*, allora sicuramente $L$ è sempre *negativo o uguale a zero*. $$f(x)\leq 0 \land \exists \lim_{x\to x_0}f(x) \implies L\leq 0$$
# 3. Teorema del confronto
**TEOREMA 3.1.** (*Teorema del confronto*)
Siano $f, g$ funzioni di variabile reale del tipo $$f, g : E \longrightarrow \mathbb{R}, E \subseteq \mathbb{R}$$e $x_0$ un punto di accumulazione per $E$, e $x_0 \in \mathbb{\tilde{R}}$.
*Tesi.* Supponendo che siano vere le seguenti condizioni:
i. Che esista il limite $$\lim_{x \to x_0}f(x) = +\infty$$ii. Che la funzione $g$ dev'essere *sempre* (nel dominio) maggiore o uguale di $f$. $$\forall x \in E\diagdown\{x_0\}, g(x) \geq f(x)$$Allora vale che $$\lim_{x \to x_0}g(x) = +\infty$$
**DIMOSTRAZIONE 3.1.** Sia ad esempio $x_0 \in \mathbb{R}$, allora abbiamo la seguente definizione di limite: $$\begin{gather}\forall M > 0, \exists \delta > 0: \forall x \in E, \\ 0<|x- x_0 | < \delta \implies f(x)>M \end{gather}$$e considerando che $g(x) \geq f(x)$, abbiamo a maggior ragione che $$\forall x \in E, \\ 0<|x- x_0 | < \delta \implies g(x)\geq f(x)>M $$e considerando la *transitività* della relazione d'ordine $>$ ([[Relazioni]], **DEF 4.**), abbiamo $$\begin{gather}\forall M > 0, \exists \delta > 0: \forall x \in E, \\ 0<|x- x_0 | < \delta \implies g(x)>M \end{gather}$$che è esattamente la definizione di $$\lim_{x \to x_0}g(x) = +\infty \ \blacksquare$$ 
# 4. Teorema dei due carabinieri
**TEOREMA 4.1.** (*Dei due carabinieri*)
Siano $f, g, h$ funzioni del tipo $$f,g,h: E \longrightarrow \mathbb{R}, E \subseteq \mathbb{R}$$e $x_0$ un punto di accumulazione per $E$, $x_0, L \in \mathbb{\tilde{R}}$.
*Tesi.* Supponendo che $$\lim_{x\to x_0}f(x) = \lim_{x \to x_0}h(x) = L$$e che $$\forall x \in E \diagdown\{x_0\}, f(x) \leq g(x) \leq h(x)$$poi volendo possiamo chiamare $f, g$ le *"funzioni carabinieri"*; abbiamo che $$\lim_{x \to x_0}g(x) = L$$
![[Pasted image 20231026220649.png]]

**DIMOSTRAZIONE 4.2.** Consideriamo $x_0 \in \mathbb{R}$.
Per la *definizione del limite*, abbiamo $$\begin{align}\forall \varepsilon > 0, \exists \delta_f &> 0: \forall x \in E, \\0<|x-x_0| < \delta_f &\implies |f(x)-L| < \varepsilon \\  & \implies -\varepsilon < f(x)-L < \varepsilon \\ &\implies L - \varepsilon < f(x) < L+\varepsilon\end{align}$$e analogamente $$ \begin{gather}\forall \varepsilon >0, \exists \delta_h > 0: \forall x \in E,\\ 0<|x-x_0|< \delta_h \implies L-\varepsilon < h(x) < L+\varepsilon\end{gather}$$
Se vogliamo che *entrambe* le espressioni valgano contemporaneamente, dobbiamo scegliere il *minimo* tra i due delta. 
Per capire l'idea di questo ragionamento prendiamo dei numeri: $$(x < 3 \implies x < 4 )\land( x <6 \implies x < 7)$$se voglio essere *sicuro* che valgano entrambe, devo prendere $x < 3$ in quanto così abbiamo la garanzia che anche $x < 6$ sia vera.
Dunque sia $$\delta = \min\{\delta_f, \delta_h\}$$e mettendole assieme, abbiamo $$0 < |x-x_0| < \delta \implies L- \varepsilon < f(x) \leq g(x)  \leq h(x) < L+\varepsilon $$possiamo sfruttare la *transitorietà* di $>$ per ottenere $$0 < |x-x_0| < \delta \implies |g(x)-L| < \varepsilon$$
Riassumendo, abbiamo il seguente: $$\begin{gather}\forall \varepsilon > 0, \exists \delta = \min\{\delta_f, \delta_h\}: \forall x \in E, \\ 0<| x-x_0|<  \delta  \implies |g(x)-L| < \varepsilon\end{gather}$$che è esattamente la *definizione* di $$\lim_{x \to x_0}g(x) = L$$come volevasi dimostrare. $\blacksquare$
# 5. Operazioni con i limiti
Ora presentiamo una serie di proposizioni, raccolte in un unico teorema, e queste ci permettono di fare delle operazioni *tra limiti*.
**TEOREMA 5.1.**
Siano $f, g$ funzioni di variabile reale del tipo $$f, g : E \longrightarrow \mathbb{R}, E \subseteq \mathbb{R}, x_0 \in \mathbb{\tilde{R}}$$e $x_0$ un punto di accumulazione per $E$.
*Tesi.* Supponendo che $$\begin{gather}\lim_{x \to x_0}f(x) = l \in \mathbb{R} \\ \lim_{x \to x_0}g(x) = m \in \mathbb{R} \end{gather}$$allora abbiamo le seguenti: $$\begin{align}&\lim_{x\to x_0}(f(x) \pm g(x)) = l+m \\ &\lim_{x \to x_0}(f(x)g(x)) = lm \end{align}$$inoltre se $m \neq 0$, allora $$ \lim_{x \to x_0}(\frac{f(x)}{g(x)}) = \frac{l}{m} $$
**DIMOSTRAZIONE.** Dimostriamo solo le prime due.
1. Prendiamo la definizione dei limiti $$\begin{gather}\lim_{x \to x_0}f(x) = l  \\ \lim_{x \to x_0}g(x) = m  \end{gather}$$ovvero $$\begin{gather}\forall \varepsilon > 0, \exists \delta_f > 0: \forall x \in E, \\0<|x-x_0|<\delta_f \implies |f(x)-l| < \varepsilon \\\text{ovvero } l-\varepsilon < f(x)< \varepsilon+l\end{gather}$$e analogamente $$\begin{gather}\forall \varepsilon > 0, \exists \delta_g > 0: \forall x \in E, \\0<|x-x_0|<\delta_g \implies |g(x)-m| < \varepsilon \\ \text{ovvero } m-\varepsilon < g(x)< \varepsilon+m \end{gather}$$osserviamo che, in quanto abbiamo definito $\varepsilon$ come un valore *arbitrariamente piccolo*, allora possiamo porre $\varepsilon = \frac{\varepsilon'}{2}$ . 
   Infatti $\varepsilon >0$ risulterà comunque vera, in quanto dividendo un qualsiasi numero infinitamente piccolo otteniamo un numero ancora più piccolo, ma mai zero. Dunque abbiamo i seguenti: $$\begin{gather}0<|x-x_0|<\delta_f \implies|f(x)-l| < \frac{\varepsilon}{2} \\ 0<|x-x_0|<\delta_g \implies|g(x)-m| < \frac{\varepsilon}{2} \end{gather}$$ora scegliendo $\delta = \min\{\delta_f, \delta_g\}$ abbiamo che valgono le seguenti proposizioni e possiamo dunque sommarle (analogo il discorso nella **DIMOSTRAZIONE 4.2.**): abbiamo allora $$\begin{gather}\forall \varepsilon >0, \exists\delta: \forall x \in E, \\ 0<|x - x_0| < \delta \implies m-\frac{\varepsilon}{2} + l-\frac{\varepsilon}{2} < f(x)+g(x) < m+\frac{\varepsilon}{2} + l+\frac{\varepsilon}{2}  \\ \implies (m+l)-\varepsilon < f(x)+g(x) < (m+l)+\varepsilon \\ \implies |f(x)+g(x)| < (m+l)+\varepsilon\end{gather}$$che è esattamente la definizione di $\lim_{x\to x_0}(f(x) \pm g(x)) = l+m$.

2. Qui il ragionamento per dimostrare la tesi diventa più sottile; la dimostrazione richiederà l'uso della *disuguaglianza triangolare* del *valore assoluto* ([[Funzioni di potenza, radice e valore assoluto]], **OSS 3.1.1.**).
   Secondo la definizione del limite, se ho $f(x)g(x) \to lm$ per $x \to x_0$ allora devo ragionare sulla seguente espressione: $$|f(x)g(x)-lm|$$e utilizzando un trucchetto in cui all'interno di questa aggiungo un'espressione equivalente a $0$ (ovvero $-f(x)m + f(x)m \iff 0$), questo diventa $$|f(x)g(x)-lm| \leq|f(x)g(x)-f(x)m+f(x)m-lm|$$ora applicando la *disuguaglianza triangolare* ho: $$\begin{align} |f(x)g(x)-lm| &\leq|f(x)g(x)-f(x)m+f(x)m-lm| \\ &\leq |f(x)g(x)-f(x)m| + |f(x)m-lm| \\ &\leq |f(x)(g(x)-m)|+|m(f(x)-l)| \\ &\leq |f(x)||g(x)-m|+|m||f(x)-l| \end{align}$$Ora ragioniamo su ogni termine del membro destro dell'uguaglianza.
   $|f(x)-l|$ è una quantità destinata a diventare *infinitamente* piccolo, in quanto esso rappresenta la distanza tra la funzione ed il limite; analogo il discorso per $|g(x)-m|$.
   $|m|$ è una costante che viene moltiplicata per un numero che diventa più piccolo, allora anche questa diventa piccola.
   Ora l'unico apparente *"intralcio"* è $|f(x)|$ in quanto non è una costante, *però* quando è vicino a $x_0$ si comporta come una costante in quanto è limitata (dato che ha il limite $l \in \mathbb{R}$).
   Allora tutto il quantitativo al membro destro diventa piccolo.
# 6. Limiti infiniti e infinitesimi
Notiamo che in **TEOREMA 5.1.** per il quoziente tra limiti abbiamo imposto che $m \neq 0$; infatti se la funzione che sta al denominatore $g(x)$ si avvicina a $0$, il limite si comporterà in un altra maniera. Enunciare quindi i seguenti teoremi per illustrare questi comportamenti.
**TEOREMA 6.1.** (*Limiti $0$ e $\pm \infty$*)
Sia $f: E \longrightarrow \mathbb{R}$, $E \subseteq \mathbb{R}$, $x_0 \in \mathbb{\tilde{R}}$ punto di accumulazione per $E$.
*Tesi.* Allora valgono le seguenti: 
1. Limite infinitesimo $$\lim_{x \to x_0}f(x) = +\infty \implies\lim_{x \to x_0}\frac{1}{f(x)} = 0$$
2. Limite infinito $$\lim_{x \to x_0}f(x) = 0\land f(x)>0, \forall x \neq x_0 \implies\lim_{x \to x_0}\frac{1}{f(x)} = +\infty$$
**DIMOSTRAZIONE 6.1.**
Dimostriamo solo la 1., in quanto la dimostrazione dell'altra è analoga.
Partiamo dalla definizione del limite di $f(x) \to +\infty$; ovvero $$\begin{gather}\forall M >0, \exists \delta >0: \forall x \in E \diagdown\{x_0\} \\0<|x-x_0|<\delta \implies f(x) > M \\ \implies \frac{1}{f(x)}< \frac{1}{M} \\ \text{sia }M = \frac{1}{\varepsilon}, \forall \varepsilon > 0\implies -\varepsilon<0<\frac{1}{f(x)}<\varepsilon  \\ 0<|x-x_0| < \delta \implies |\frac{1}{f(x)}| < \varepsilon\end{gather}$$ovvero la definizione del limite di $$\lim_{x \to x_0}\frac{1}{f(x)} = 0$$
# 7. Forme indeterminate
Ora definiamo delle *forme indeterminate* di alcuni limiti.
**TEOREMA 7.1.** (*Forme indeterminate*)
*Tesi 1.* Sia $$\lim_{x \to x_0}f(x) = +\infty \text{ e } \lim_{x \to x_0}g(x) \neq -\infty$$(la seconda vuol dire che $g$ è inferiormente limitata; ovvero $\exists M>0: \forall x \in E \diagdown \{x_0\}, g(x)>-M$), allora abbiamo che $$\lim_{x \to x_0}f(x)+g(x) = +\infty$$
Analogo il discorso per $$\lim_{x \to x_0}f(x) = -\infty \text{ e }\lim_{x \to x_0}\neq +\infty$$
Escludiamo infatti il caso $-\infty + \infty$ in quanto essa è una **forma indeterminata**. 
*Tesi 2.* Sia $$\lim_{x \to x_0}f(x) = +\infty, \exists \rho>0: \forall x \in E\diagdown\{x_0\}, g(x)\geq \rho > 0$$la seconda espressione vuole dire che $g(x)$ è un'espressione *sempre* positiva di $0$, allora si ha $$\lim_{x \to x_0}f(x)g(x) = +\infty$$e qui escludiamo il caso $+\infty \cdot 0$. 
*Tesi 3 (dalla dispensa).* Sia $$\lim_{x \to x_0}f(x) = 0, \exists M>0: |g(x)| < M$$ovvero la seconda vuol dire che $g(x)$ è *limitata*, allora abbiamo che $$\lim_{x \to x_0}f(x)g(x) = 0$$escludendo i casi $\pm \infty \cdot 0$.

**DIMOSTRAZIONE 7.1.** Dimostriamo la *tesi 1.*, la *tesi 2.* potrà essere dimostrata in una maniera analoga.
Partiamo dalla definizione del limite di $f$: ovvero $$\begin{gather}\forall K > 0, \exists \delta > 0: \forall x \in E \diagdown\{x_0\} \\ 0<|x-x_0|<\delta \implies f(x) > K\end{gather}$$ma allo stesso tempo abbiamo che $g$ è inferiormente limitata, ovvero $$\exists M>0:\forall x\neq x_0 , g(x) > -M $$allora se scegliamo $K = K + M$ e sommiamo entrambe le espressioni, abbiamo $$0<|x-x_0| < \delta \implies f(x)+g(x) > K$$che è la definizione di $$\lim_{x \to x_0}f(x)+g(x) = +\infty$$
# 8. Limite della funzione composta

# 9. Limite della funzione monotona