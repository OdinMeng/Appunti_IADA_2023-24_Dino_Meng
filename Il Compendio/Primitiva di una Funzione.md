---
data: 2023-12-08
corso: "[[Analisi Matematica I]]"
argomento: Primitiva di una Funzione
tipologia: appunti
stato: "1"
---
*La primitiva di una funzione: definizione, osservazioni.*
- - -
# 1. Definizione di Primitiva di una Funzione
#Definizione 
> [!def] Definizione 1.1. (la primitiva di una funzione)
> Siano $f, F: [a,b] \longrightarrow \mathbb{R}$ due *funzioni di variabile reale*.
> Allora se sussiste il seguente:
> $$\boxed{\forall x \in [a,b], F'(x) = f(x)}$$
> allora $F$ si dice *primitiva* di $f$.
^eb48c4

#Definizione 
> [!def] Definizione 1.2. (funzione primitivabile)
> Sia $f: [a,b] \longrightarrow \mathbb{R}$. Se questa funzione ammette una funzione $F$ primitiva ([[#^eb48c4]]) per cui $F' = f$, allora $f$ si dice *primitivabile*.
^5b45ed

#Definizione 
> [!def] Definizione 1.3. (integrale indefinito di una funzione)
> *Tradizionalmente* si chiama l'insieme delle *primitive* di una funzione $f: [a,b] \longrightarrow \mathbb{R}$ come *"l'integrale indefinito di $f$"* e lo si denota con
> $$\int f(x) \ dx $$
> **NOTA.** Al primo impatto questa definizione *tradizionale* è chiaramente confusionaria in quanto sembra di collegare due argomenti totalmente distaccati tra di loro: da un lato stiamo semplicemente considerando le *primitive* di una funzione, dall'altro degli *integrali* ([[Integrabilità secondo Riemann#^64ad3b]]). Quale sarà mai il collegamento tra di loro, se esiste? Scopriremo questo nesso col *teorema fondamentale del calcolo integrale* ([[Teorema Fondamentale del Calcolo Integrale]]).
# 2. Esempi di primitive funzioni e di funzioni non primitivabili
#Esempio 
> [!ex] Esempio 2.1. (la primitiva della funzione identità)
> Voglio calcolare la *primitiva* della funzione identità $f(x)=x$.
> Un possibile approccio è quello di fare delle *"ipotesi ragionate"* su ciò che possono essere dei *"buoni canditati"*: prendiamo ad esempio $x^2$. Prendendo la sua derivata $(x^2)' = 2x$, vedo che sono vicino (*fuocherello*).
> Allora basta dividere tutto per due e alla fine ottengo
> $$(\frac{x^2}{2})' = x$$
> Pertanto $\frac{x^2}{2}$ per definizione è *primitiva* di $x$.

#Esempio 
> [!ex] Esempio 2.2. (funzioni non primitivabili)
> Vediamo che possono *non* esistere delle funzioni non primitivabili; ovvero delle funzioni delle quali primitive *non* possono essere espresse in *termini di funzioni elementari* (ovvero quelle che conosciamo). Bisognerebbe infatti proprio *"inventare"* nuove funzioni ad-hoc che definiscono delle primitive di funzioni non primitivabili.
> Ad esempio la funzione 
> $$f(x) = \frac{1}{\ln x}$$ 
> non è *primitivabile*.

# 3. Generare altre primitive da una primitiva
#Osservazione 
> [!oss] Osservazione 3.1. (possiamo trovare altre primitive a partire da una)
> Osservo che a partire da una primitiva $F$ di una funzione $f$ (che ovviamente sia *primitivabile*), posso trovare le sue altre primitive: basterebbe aggiunge una costante $c \in \mathbb{R}$, in quanto la *derivata* della costante è $0$.
> Infatti
> $$(F+c)' = F+0 \implies (F+c)' = f$$

#Teorema 
> [!thm] Teorema 3.1. (di struttura delle primitive di una funzione)
> Sia $f: [a,b] \longrightarrow \mathbb{R}$ *primitivabile* ([[#^5b45ed]]).
> Sia $F$ una sua *qualunque* primitiva.
> Allora le *tutte e sole* primitive di $f$ sono del tipo $F+c, c \in \mathbb{R}$.
> (riformulazione). Ovvero una funzione $G$ è *primitiva* di $f$ se e solo se è di forma $F+c$.
^3a574e

#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 3.1.* ([[#^3a574e]])
"$\impliedby$". Questa è banalmente immediata: infatti $(F+c)' = F' = f$.
"$\implies$". Considero $G-F$ per calcolarne la derivata:
$$(G-F)' = G'-F' = f-f = 0 $$
Per il *teorema di Lagrange* ([[Teorema di Lagrange#^ef03c2]]) sappiamo che se $(G-F)' = 0$ su $[a,b]$, allora la funzione $G-F$ è necessariamente una *funzione costante* ([[Conseguenze del teorema di Cauchy e di Lagrange#^19eb72]]). Ma allora
$$G-F  = c \implies \boxed{G = F+c}\  \blacksquare $$
