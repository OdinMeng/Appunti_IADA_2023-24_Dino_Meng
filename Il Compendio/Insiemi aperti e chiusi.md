---
data: 2023-10-20
corso: "[[Analisi Matematica I]]"
argomento: Insiemi aperti e chiusi
tipologia: appunti
stato: "1"
---
*Definizione di insieme aperto e chiuso. Teorema sugli insiemi aperti e chiusi.*
- - -
# 1. Insieme aperto
#Definizione 
> [!math|{"type":"definition","number":"1.1.","setAsNoteMathLink":true,"title":"Insieme Aperto","label":"insieme-aperto"}] Definizione 1.1. (Insieme Aperto).
> Sia $A \subseteq \mathbb{R}$; l'insieme $A$ si dice **aperto** se e e solo se *tutti i suoi punti sono punti interni all'insieme stesso* ([[Punti interni, esterni e di frontiera#^c78831]]); ovvero se 
> $$\forall x_0 \in A, \exists r>0 : (x_0 - r, x_0 + r) \subseteq A$$

#Osservazione 
> [!oss] Osservazione 1.1. (condizione necessaria e sufficiente per l'essere aperto di un insieme)
Osservo che l'insieme $A$ è aperto *se e solo se* $A = A^{\circ}$.
## Esempi di insiemi aperti
#Esempio 
> [!ex] Esempio 1.1.
Considero *l'intervallo aperto* ([[Intervalli#^6d6e94]]) $$(2, 3)$$voglio sapere se questo è *insieme aperto*; scegliendo un qualunque punto $x$ all'interno di questo intervallo, allora posso sicuramente trovare un intorno in $x$ tale per cui contiene *solo* elementi di $(2,3)$. Infatti se scelgo $r$ come la *distanza minima* tra $x$ e ciascun estremo, scopro che l'*intorno centrato aperto* di questo raggio ([[Intorni]]) contiene *solo* punti di $E$ (dunque esso è *sottoinsieme* di $E$).
Formalizzando questo ragionamento, ho $$\forall x, 2<x<3; r=\min(d(x,2),d(x,3))$$
Graficamente questo ragionamento corrisponde alla *figura 1.1.*

**FIGURA 1.1.** (*Esempio 1.1.*)
![[Pasted image 20231022160204.png]]

#Esempio 
> [!ex] Esempio 1.2.
Ora considero l'insieme $$E = \{1\} \cup [2, 3)$$che *non è aperto*, in quanto considerando $x_0 = 1$ trovo che questo elemento (o punto) non è *interno* a $E$. Analogo il discorso per $x_0 = 2$.

# 2. Insieme chiuso
#Definizione 
> [!math|{"type":"definition","number":"2.1.","setAsNoteMathLink":false,"title":"Insieme Chiuso","label":"insieme-chiuso"}] Definizione 2.1. (Insieme Chiuso).
> Considerando un insieme $C \subseteq \mathbb{R}$, si dice che esso è *chiuso* se il suo *complemento* è *aperto*. Ovvero se $\mathcal{C}_{\mathbb{R}}C$ è aperto.
^36f40d
## Esempi di insiemi chiusi
> [!ex] Esempio 2.1.
**ESEMPIO 2.1.** Consideriamo *l'intervallo chiuso* ([[Intervalli]], **DEF 1.1.**) $$C = [2, 5]$$Considerando il suo complemento $$\mathcal{C}_{\mathbb{R}}C = (-\infty, 2) \cup (5, +\infty)$$vediamo che questo insieme (il complemento) è *aperto*; infatti ad ogni punto $x_0$ del complemento vediamo che è possibile definire un $r$ tale che l'*intorno centrato aperto* di questo raggio sia sottoinsieme di $\mathcal{C}_{\mathbb{R}}C$.
Infatti definendo $r$ come $$r = \begin{cases}d(2,x_0) \text{ per }x_0<2 \\ d(5,x_0) \text{ per }x_0 > 5\end{cases}$$sicuramente troviamo che tutti i punti $x_0$ sono interni al complemento di $C$.
Graficamente questo ragionamento corrisponde alla *figura 2.1.*.

**FIGURA 2.1.** (*Esempio 2.1.*)
![[Pasted image 20231022160230.png]]

# 3. Teoremi sugli insiemi aperti e chiusi
#Teorema 
> [!thm] Teorema 3.1. (Proprietà degli insiemi aperti).
>  Abbiamo le seguenti proposizioni:
>  1. Gli insiemi $$\emptyset, \mathbb{R}$$
>  sono *insiemi aperti*
>  2. L'*unione* ([[Operazioni con gli Insiemi]]) di due *insiemi aperti* è sicuramente un *insieme aperto*. 
>  3. L'*intersezione* ([[Operazioni con gli Insiemi]]) di due *insiemi aperti* è sicuramente un *insieme aperto*.
> $$ $$
^63081b

#Teorema 
> [!thm] Teorema 3.2. (Proprietà degli insiemi chiusi).
> Abbiamo invece le stesse proposizioni per gli insiemi chiusi:
> 1. Gli insiemi $$\emptyset, \mathbb{R}$$
> sono *insiemi chiusi*
> 2. L'*unione* ([[Operazioni con gli Insiemi]]) di due *insiemi chiusi* è sicuramente un *insieme chiuso*.
> 3. L'*intersezione* ([[Operazioni con gli Insiemi]]) di due *insiemi chiusi* è sicuramente un *insieme chiuso*.
> $$ $$

#Osservazione 
> [!oss] Osservazione 3.1. (basta dimostrare solo uno dei due teoremi)
Notiamo che se dimostriamo almeno uno di questi due teoremi, allora si ha automaticamente dimostrato l'altro teorema, in quanto la *definizione dell'insieme chiuso* ([[#^36f40d]]) ci suggerisce che le stesse proprietà valgono. 
Infatti, la definizione dell'insieme chiuso si basa sulla definizione dell'insieme aperto, tenendo però conto del complementare dell'insieme; perciò basta tenere conto delle leggi di *De Morgan* ([[Logica formale - Sommario]]).

**DIMOSTRAZIONE** del *teorema 3.1.* ([[#^63081b]])
1. L'insieme vuoto $$\emptyset$$non ha *nessun elemento*; per verificare se questo insieme vuoto è *aperto*, bisognerebbe allora verificare che *tutti* gli elementi di questo insieme gode della proprietà necessaria. Pertanto si può pensare che tutti gli elementi (ovvero nessuno) di questo insieme può godere *tutte* le proprietà che si vuole.
   Altrimenti è possibile pensare in termini di insiemi complementari.
   
   Per quanto riguarda l'insieme dei numeri reali $$\mathbb{R}$$e prendendo un elemento $x_0 \in \mathbb{R}$ allora si trova automaticamente che $$\forall r>0, (x_0-r, x_0+r) \subseteq \mathbb{R}$$è verificata.

1. Sia $$\{A_i, i \in I\}$$un insieme di *insiemi aperti*. Per un insieme del genere vedere *esempio 3.2.*.
   Allora considero un $$x_0 \in \bigcup_{i \in I}A_i$$Allora da ciò discende che esiste un $\bar{i}$ tale che il punto $x_0$ appartenga all'insieme aperto $A_\bar{i}$, ovvero $$x_0 \in A_\bar{i}$$Allora è vero che esiste una *palla aperta* ([[Intorni#^ffc6f8]]) che venga contenuta in quell'insieme aperto. Ovvero $$x_0 \in A_{\bar{i}} \implies \exists r>0: (x_0-r, x_0+r) \subseteq A_\bar{i}$$Ma allora ciò implica che $$\exists r > 0: (x_0-r, x_0+r) \subseteq \bigcup_{i \in I}A_i$$
3. Siano $A_1$ e $A_2$ due insiemi aperti; scelgo allora un $x_0 \in (A_1 \cap A_2)$. Quindi ciò vuol dire che $$x_0 \in (A_1 \cap A_2) \implies\begin{cases}x_0 \in A_1 \implies \exists r_1 > 0: (x_0-r_1, x_0+r_1)\subseteq A_1\\x_0 \in A_2 \implies \exists r_2 > 0: (x_0 - r_2, x_0 + r_2) \subseteq A_2 \end{cases}$$Poi scegliendo $r$ il minimo tra $r_1$ e $r_2$, ovvero $$r = \min(r_1, r_2)$$
   Allora ho che $$(x_0 -r, x_0+r) \subseteq(A_1 \cap A_2)$$il che vuol dire l'intersezione tra $A_1$ e $A_2$ è aperto. $\blacksquare \ \blacksquare \  \blacksquare$

#Osservazione 
> [!oss] Osservazione 3.2. (l'intersezione infinita tra insiemi aperti non è un aperto)
Però questo *non* vuol dire che l'*intersezione infinita* tra insiemi aperti debba essere necessariamente *aperta*: infatti si propone il seguente controesempio.

#Esempio 
> [!ex] Esempio 3.1. (controesempio per l'osservazione 3.2.)
Considero la *successione di intorni* $$(I_n)_n: I_n = (1-\frac{1}{n}, 2+\frac{1}{n})$$e vediamo che l'intervallo $I_n$ è aperto per ogni $n$. 
Inoltre gli intervalli $(I_n)_n$ sono *inscatolati* ([[Intervalli#^66568f]]).
Disegnando il grafico (*lasciato al lettore per esercizio*) notiamo che se prendiamo l'intersezione di tutti gli intervalli $$\bigcap_nI_n$$i numeri compresi tra $1, 2$ stanno sicuramente all'interno di questo intervallo, come si può evincere dal grafico; invece per la *proprietà di Archimede* ([[Conseguenze dell'esistenza dell'estremo superiore#^d95d40]]), per ogni numero che sta fuori da $[1, 2]$, esiste un intervallo $I_n$ che non lo include; ovvero $$\begin{align}\forall \varepsilon > 0,\exists n \in \mathbb{N}:& \ 1-\varepsilon \not\in I_n \\ & \ 2+\varepsilon  \not \in I_n\end{align}$$(*la dimostrazione completa è lasciata al lettore*)
Allora si può concludere che $$\bigcap_nI_n = [1, 2]$$
che *non* è un *insieme aperto*.

#Esempio 
> [!ex] Esempio 3.2. (famiglia di insiemi aperti)
> Un insieme del tipo presentato nella dimostrazione può essere $$\{(1-\frac{1}{n}, 1+\frac{1}{n}; n \in \mathbb{N} \diagdown\{0\}\}$$
