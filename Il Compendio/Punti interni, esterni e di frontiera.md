---
data: 2023-10-20
corso: "[[Analisi Matematica I]]"
argomento: Punti interni, esterni e di frontiera
tipologia: appunti
stato: "1"
---
*Definizioni di punti interni, punti interni e punti di frontiera. Esempi.*
- - -
# 0. Preambolo
Questo argomento presuppone la conoscenza dell'argomento di [[Intervalli]].
# 1. Punto interno
#Definizione 
> [!def] Definizione 1.1. (Punto interno ad un insieme, l'insieme dei punti interni).
> Sia $E \subseteq \mathbb{R}$ e $x_0 \in \mathbb{R}$, si definisce $x_0$ *punto interno* a $E$ se viene verificato che 
> $$\exists r > 0 : ]x_0-r, x_o+r[\  \subseteq E$$
> ovvero se esiste un *intorno* di $x_0$ che è contenuto in $E$ ([[Intorni]], **DEF 3.1.**).
> Inoltre chiamo *l'insieme dei punti interni a $E$* come $E^{\circ}$. 
^c78831
## Esempio di punto interno
#Esempio 
> [!ex] Esempio 1.1. 
> Sia $$E = \{1\} \cup [2, 3)$$e voglio trovare *l'insieme dei punti interni* $E^{\circ}$.
   Per farlo devo innanzitutto disegnare il grafico di $E$ per poter capire come procedere (*figura 1.1.*).
   Ora *"provo"* ogni numero fissando $x_0$ il numero scelto.
   Scegliendo $x_0 = 1$ vedo chiaramente che non è *punto interno*, in quanto è impossibile che esista un intorno centrato a raggio r ad esso.  
   Scegliendo $x_0 = 2$ vedo che neanche questo è un *punto interno*; non riesco a definire un intorno centrato tale che a *"sinistra"* di $2$ c'è un punto appartenente a $E$. 
   Però scegliendo $x_0 = 2.001$ è possibile; infatti posso definire un intorno di $x$ con $r = 0.001$. 
   Analoghi i discorsi per $x_0 =3$ e $x_0 = 2.999$
   Concludo allora che $$E^{\circ} = (2, 3)$$

**FIGURA 1.1.** (*Esempio 1.1.*)
![[Pasted image 20231022155526.png]]
# 2. Punto esterno
#Definizione 
> [!def] Definizione 2.1. (Punto esterno ad un insieme).
> Un punto $x_0 \in \mathbb{R}$ si dice *esterno ad un insieme* $E \subseteq \mathbb{R}$ se è *interno* al complementare di $E$, ovvero $\mathcal{C}_{\mathbb{R}}E$ ([[Operazioni con gli Insiemi#^080cd5]]).
> Quindi 
> $$x_0 \text{ è esterno} \iff \exists r >0: (x_0-r, x_0 + r) \subseteq \mathcal{C}_{\mathbb{R}}E$$
## Esempio di punto esterno
**ESEMPIO 2.1.** Considerando l'esempio di prima con $$E = \{1\} \cup [2, 3)$$ora vogliamo trovare *l'insieme di tutti i punti esterni*. Allora usando lo stesso grafico di prima, faccio esattamente i stessi procedimenti di prima considerando però il *complemento di $E$*, ovvero tutti i punti che non appartengono ad $E$. 
Usando la stessa procedura nell'*esempio 1.1.*, troviamo che $$\{\text{punti esterni di }E\} = (-\infty, 1) \cup(1,2) \cup(3, + \infty)$$

**FIGURA 2.1.** (*Esempio 2.1.*)
![[Pasted image 20231022155547.png]]
# 3. Punti di frontiera
#Definizione 
> [!def] Definizione 3.1. (Punto di frontiera per un insieme, insieme dei punti di frontiera).
> Un punto $x_0 \in \mathbb{R}$ si dice *di frontiera per* $E$ se questo punto *non è ne interno ne esterno ad* $E$. 
> Inoltre definiamo *l'insieme dei punti di frontiera* di $E$ come
> $$\{\text{punti di frontiera per }E\} :=\partial E$$
> e si legge come *"delta storto E"*

#Osservazione 
>[!oss] Osservazione 3.1. (significato logico della definizione punto di frontiera)
   Questa definizione equivale a negare la proposizione 
   $$[\exists r > 0: (x_0-r, x_0+r)\subseteq E] \vee [\exists r'>0: (x_0-r', x_0+r')  \subseteq \mathcal{C}E]$$
   Allora secondo le *leggi di De Morgan* e delle regole della logica formale ([[Logica formale - Sommario]]) questo diventa 
   $$[\forall r >0, (x_0-r, x_0+r) \not\subseteq E] \land [\forall r'>0, (x_0-r', x_0+r') \not\subseteq \mathcal{C}E]$$
   Inoltre, dato che 
   $$A \not\subseteq B \iff A \cap \mathcal{C}_{U}B \neq \emptyset$$
   ovvero che un insieme $A$ non è sottoinsieme di $B$ se e solo se l'intersezione tra $A$ e il complemento di $B$ non è vuota (ovvero ha almeno *un elemento*), questo diventa
   $$[\forall r >0, (x_0 - r, x_0+r) \cap \mathcal{C}E \neq \emptyset] \land [\forall r' > 0, (x_0 - r', x_0+r') \cap E \neq \emptyset]$$
   In definitiva l'essere *punto di frontiera* per $E$ equivale a soddisfare il seguente predicato: 
   "*Ogni* intorno di $x_0$ deve contenere *sia* punti di $E$ e il suo complemento $\mathcal{C}_\mathbb{R}E$".
## Esempi misti e di punti di frontiera
#Esempio 
> [!ex] Esempio 3.1.
Considerando lo stesso esempio di prima, ovvero $$E = \{1\} \cup [2, 3)$$vogliamo trovare $\partial E$.
Procedendo con lo stesso disegno, cerchiamo di *"provare"* ogni punto per trovare elementi di $\partial E$.
$x_0 = 0$; Questo non è elemento di $\partial E$, in quanto posso facilmente trovare un intorno che contenga *solo* elementi del complemento di $E$.
$x_0 = 1$; Provando a considerare ogni intorno di $x_0$ trovo che deve per forza dev'esserci un punto sia in $E$ che nel suo complemento.
$x_0 = 2$; Stesso discorso analogo di prima.
$x_0 = 3$; Di nuovo lo stesso discorso.
$x_0 = 2,5$; Qui invece è possibile trovare un intorno che contenga *solo* punti di $E$. Ad esempio un intorno centrato in $2,5$ con raggio $r=0,1$.

**FIGURA 3.1.** (*Esempio 3.1.*)
![[Pasted image 20231022155603.png]]

#Esempio 
> [!ex] Esempio 3.2.
   Consideriamo finalmente dei casi diversi da quelli esaminati prima. Sia $$E = \mathbb{Q} \cap (1,2)$$ovvero tutti i numeri *razionali* compresi tra *1, 2* esclusi.
Scopro le seguenti:
$E^{\circ} = \emptyset$; infatti in questo insieme *non* vi ci sono punti interni, in quanto l'*assioma di separazione*  non vale in $\mathbb{Q}$ ([[Assiomi dei Numeri Reali]], **S)**, **OSS 6.2.** ); quindi ci sono sempre dei *"buchi"* tra due numeri razionali, ovvero dei numeri irrazionali. Infatti è possibile dimostrare che i numeri irrazionali sono *densi* in $\mathbb{R}$.
$\partial E = [1, 2]$; qui si verifica un fenomeno strano, ovvero che si verifica che $\partial E$ è più *"grande"* di $E$ stessa. 
Questo si verifica perché, da un lato abbiamo la *densità di $\mathbb{Q}$ in $\mathbb{R}$* ([[Conseguenze dell'esistenza dell'estremo superiore]], **TEOREMA 4.1.**); infatti se considero un punto $q_0$ in $\mathbb{Q}$ e considero gli *"estremi"* del suo intorno $(q_0 - r, q_0 +r)$ allora tra $q_0 -r$ e $q_0 + r$ dev'esserci almeno un numero razionale. 
Però allo stesso tempo, come visto prima, i numeri irrazionali sono *densi* in $\mathbb{R}$; di conseguenza se ci sono sia dei numeri razionali (appartenenti a $E$) che dei irrazionali (appartenenti al complemento di $E$) allora vediamo che tutti i punti di $E$ (gli estremi inclusi) sono *punti di frontiera*.

**FIGURA 3.2.** (*Esempio 3.2.*)
![[Pasted image 20231022155622.png]]