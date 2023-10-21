---
data: 2023-10-20
corso: "[[Analisi Matematica I]]"
argomento: Insiemi aperti e chiusi
tipologia: appunti
stato: "0"
---
*Definizione di insieme aperto e chiuso.*
- - -
# 1. Insieme aperto
**DEF 1.1.** Sia $A \subseteq \mathbb{R}$; l'insieme $A$ si dice **aperto** se e e solo se *tutti i suoi punti sono punti interni all'insieme stesso* ([[Punti interni, esterni e di frontiera]], **DEF 1.1.**); ovvero se $$\forall x_0 \in A, \exists r>0 : (x_0 - r, x_0 + r) \subseteq A$$
**OSS 1.1.** Osservo che l'insieme $A$ è aperto *se e solo se* $A = A^{\circ}$.
## Esempi
**ESEMPIO 1.1.** Considero *l'intervallo aperto* ([[Intervalli]], **DEF 1.4.**) $$(2, 3)$$voglio sapere se questo è *insieme aperto*; scegliendo un qualunque punto $x$ all'interno di questo intervallo, allora posso sicuramente trovare un intorno in $x$ tale per cui contiene *solo* elementi di $(2,3)$. Infatti se scelgo $r$ come la *distanza minima* tra $x$ e ciascun estremo, scopro che l'*intorno centrato aperto* di questo raggio ([[Intorni]]) contiene *solo* punti di $E$ (dunque esso è *sottoinsieme* di $E$).
Formalizzando questo ragionamento, ho $$\forall x, 2<x<3; r=\min(d(x,2),d(x,3))$$
**ESEMPIO 1.2.** Ora considero l'insieme $$E = \{1\} \cup [2, 3)$$che *non è aperto*, in quanto considerando $x_0 = 1$ trovo che questo elemento (o punto) non è *interno* a $E$. Analogo il discorso per $x_0 = 2$.

# 2. Intervallo chiuso
**DEF 2.1.** Considerando un insieme $C \subseteq \mathbb{R}$, si dice che esso è **chiuso** se il suo *complemento* è *aperto*. Ovvero se $\mathcal{C}_{\mathbb{R}}C$ è aperto.

## Esempi
**ESEMPIO 2.1.** Consideriamo *l'intervallo chiuso* ([[Intervalli]], **DEF 1.1.**) $$C = [2, 5]$$Considerando il suo complemento $$\mathcal{C}_{\mathbb{R}}C = (-\infty, 2) \cup (5, +\infty)$$vediamo che questo insieme (il complemento) è *aperto*; infatti ad ogni punto $x_0$ del complemento vediamo che è possibile definire un $r$ tale che l'*intorno centrato aperto* di questo raggio sia sottoinsieme di $\mathcal{C}_{\mathbb{R}}C$.
Infatti definendo $r$ come $$r = \begin{cases}d(2,x_0) \text{ per }x_0<2 \\ d(5,x_0) \text{ per }x_0 > 5\end{cases}$$sicuramente troviamo che tutti i punti $x_0$ sono interni al complemento di $C$.
Graficamente questo ragionamento corrisponde a 
[ GRAFICO DA FARE]