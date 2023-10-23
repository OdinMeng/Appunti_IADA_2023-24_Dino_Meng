---
data: 2023-10-23
corso: "[[Analisi Matematica I]]"
argomento: Punti di aderenza e di accumulazione
tipologia: appunti
stato: "0"
---
*Definizione di punto di aderenza e di accumulazione. La chiusura e il derivato di un insieme. Primo teorema di Bolzano-Weierstraß.*
- - -
# 1. Punti di aderenza (o di chiusura)
**DEF 1.1.** Sia $E \subseteq \mathbb{R}$, $x_0 \in \mathbb{R}$.
$x_0$ si dice **punto di chiusura (o di aderenza)** per $E$ se è vera la seguente: $$\forall r>0: ((x_0-r, x_0+r)\cap E)\neq \emptyset$$Ovvero in ogni *palla/intorno centrato di $x_0$* ([[Intorni]], **DEF 2.1.**) dev'esserci *almeno* un elemento di $E$.
**SUBDEF 1.1.1.** L'insieme dei *punti di chiusura* dell'insieme $E$ si dicono la **chiusura (o aderenza) di $E$**, scritto come $\overline{E\ }$.

**ESEMPIO 1.1.**
Consideriamo l'insieme $E = (1, 2)$ e voglio trovare gli elementi di $\overline{E\ }$.
Per farlo è possibile disegnare il grafico di $E$, poi *"testare"* ogni elemento della retta $\mathbb{R}$ per vedere quali sono i potenziali elementi di $\overline{E\ }$.
[ GRAFICO DA FARE ]
Si evince che:
1. I numeri $0, \frac{1}{2}$ *non* sono *punti di aderenza* per $E$, in quanto è possibile individuare *almeno* un intorno fuori da $E$ (ovvero che non contenga elementi di $E$).
2. 1 è un *punto di aderenza*, in quanto per tutti gli intorni in $x_0$ abbiamo sempre almeno un elemento di $E$; infatti si deve sempre *"andare a destra"*, *"entrando"* in $E$. Analogo il discorso per $2$.
In conclusione è possibile individuare $$\overline{E\ } = [1, 2]$$
**OSS 1.1.** Osserviamo che per ogni insieme è vera che $$E \subseteq \overline{E \ }$$
**ESEMPIO 1.2.** 
Considero l'insieme $$E = \{\frac{1}{n}, n \in \mathbb{N} \diagdown \{0\}\}$$poi voglio trovare le seguenti: $\overline{E \ }, E^{\circ}, \partial E$.
1. $\overline{E \ } = E \cup \{0\}$ e $\partial E = E \cup \{0\}$; a questi insiemi aggiungiamo il numero $0$ in quanto *per l'Archimedeità di $\mathbb{R}$* ([[Conseguenze dell'esistenza dell'estremo superiore]], **TEOREMA 3.1.**) è sempre possibile trovare un $n$ tale che$$\forall \varepsilon > 0, \exists n :0 <\frac{1}{n}< \varepsilon$$ 
2. $E^{\circ} = \emptyset$; infatti $E$ è definita tramite gli $\mathbb{N}$, che presenta dei *"buchi"* in $\mathbb{R}$. 

**ESEMPIO 1.3.**
Voglio studiare l'insieme dei *numeri razionali* $\mathbb{Q}$ ([[Richiami sui Numeri Razionali]]).
1. Sicuramente $$\overline{\mathbb{Q}} = \mathbb{Q} \cup \mathbb{R} = \mathbb{R}$$per la *densità di $\mathbb{Q}$ in $\mathbb{R}$* ([[Conseguenze dell'esistenza dell'estremo superiore]], **TEOREMA 4.1.**). Ovvero da ciò consegue che prendendo un punto $q_0 \in \mathbb{Q}$, è possibile trovare sempre dei numeri razionali per qualsiasi *intorno* con $r >0$. Infatti $$\forall r > 0, \exists a \in \mathbb{Q}: q_0+r>a>q$$
2. I punti di frontiera $\partial \mathbb{Q}$ è anch'esso $\mathbb{R}$ per motivi analoghi.
3. Per *l'assioma di Dedekind* ([[Assiomi dei Numeri Reali]], **ASSIOMA S)** ) sappiamo che tra un numero razionale $q_0$ e un altro numero (in questo caso prendiamo $q_0 + r,  \forall \varepsilon >0$) dev'esserci un numero *irrazionale* che non appartiene a $\mathbb{Q}$; allora non ci sono dei *punti interni* ([[Punti interni, esterni e di frontiera]], **DEF 1.1.**).

## 1.1. Proprietà della chiusura
**TEOREMA 1.1.** Possiamo enunciare le seguenti proprietà per la *chiusura* di $E$.
Sia $E \subseteq \mathbb{R}$, allora sono vere che:
1. $\overline{E \ }$ è un *insieme chiuso*. Infatti blablabla... [DA RECUPERARE]
2. $\overline{E \ }$ è *il più piccolo chiuso* che contiene $E$. Non ho capito, centra qualcosa con le relazioni d'ordine??? [ DA RECUPERARE ]
3. $E\text{ è chiuso} \iff \overline{E} = E$

# 2. Punti di accumulazione
[ DA FARE ]