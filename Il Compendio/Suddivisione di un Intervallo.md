---
data: 2023-12-05
corso: "[[Analisi Matematica I]]"
argomento: Suddivisione di un Intervallo
tipologia: appunti
stato: "1"
---
*Breve descrizione qui*
- - -
# 0. Prerequisiti e/o concetti correlati
- Nozione di intervallo: [[Intervalli]]
- Operazioni tra insiemi: [[Operazioni con gli Insiemi]]
# 1. Definizione di Suddivisione di un Intervallo
#Definizione 
> [!def] Definizione 1.1. (suddivisione di un'intervallo chiuso e limitato)
> Sia $[a,b]$ un *intervallo chiuso e limitato* ([[Intervalli#^a1a838]]), chiamo la *suddivisione* di $[a,b]$ un *insieme finito di punti* dentro $]a, b[$ che contiene sia $a$ che $b$.
> Lo denotiamo con il simbolo $\Delta$ e lo definiamo formalmente come
> $$\Delta = \{a=x_0 < x_1 < x_2 < \ldots < x_n = b\}$$
> L'idea grafica viene raffigurata nella *figura 1.1.*.

^318045

**FIGURA 1.1.** (*Concetto grafico di suddivisione*)
![[Pasted image 20231205175851.png]]

#Definizione 
> [!def] Definizione 1.2. (l'insieme di tutte le suddivisione)
> Indico l'insieme di *tutte le suddivisioni* di $[a, b]$ con
> $$\mathcal{D}$$

^379a7b

# 2. Relazioni tra le suddivisioni
#Definizione 
> [!def] Definizione 2.1. (finezza della suddivisione)
> Siano $\Delta_1$, $\Delta_2$ delle *suddivisioni*, dico che la suddivisione $\Delta_1$ è *più fine* di $\Delta_2$ se vale la seguente relazione:
> $$\Delta_1 \supseteq \Delta_2$$
> L'idea grafica viene raffigurata nella *figura 2.1.*.

^6c1bae

**FIGURA 2.1.** (*Concetto grafico della finezza*)
![[Pasted image 20231205180536.png]]

**TRUCCO MNEMONICO.** Come *"trucchetto mnemonico"* si può *"trasformare"* il simbolo di *essere contenuto in* a *essere minore* di; ovvero $\Delta_1$ è più fine di $\Delta_2$ se $\Delta_1 \geq \Delta_2$, ovvero $\Delta_1 \supseteq \Delta_2$. Infatti l'idea di base della *finezza* consiste nel fatto che una suddivisione ha *"più elementi"* (anche se non necessariamente) dell'altra. Inoltre si vede che i simboli $\supseteq, \geq$ sono *graficamente* "simili".

#Osservazione 
> [!oss] Osservazione 2.1. (l'insieme delle suddivisioni è un reticolo)
> Supponiamo di avere *due suddivisioni* $\Delta_A$ e $\Delta_B$; nessuna di queste due dev'essere più fine dell'altra (ad esempio potrebbe avere elementi diversi).
> Possiamo comunque prendere una *suddivisione più fine* tra le due? Invece la *suddivisione meno fine*?
> La risposta è sì, se consideriamo l'*unione* e l'*intersezione* tra queste due suddivisioni: prendendo *"l'unione"* comprendi tutti gli elementi sia di $\Delta_A$ che di $\Delta_B$; quindi $\Delta_{A \cup B}$ è necessariamente *più fine* di entrambe.
> Per quanto riguarda invece *l'intersezione*, questa prende *solo* gli elementi in comuni: ovvero, nel *"caso peggiore"* si prenderebbero solo gli estremi $a, b$. Allora in questo caso *entrambe* le suddivisioni $\Delta_A$, $\Delta_B$ sono più fine di $\Delta_{A \cap B}$.
> Riassumendo, abbiamo
> $$\boxed{\Delta_{A \cup B} \supseteq \Delta_{A}, \Delta_{B}\ || \  \Delta_A, \Delta_B \supseteq \Delta_{A \cap B}}$$
> Infatti si può dire che le *relazioni tra le suddivisioni* $\Delta$ determina il fatto che *l'insieme delle suddivisioni* $\mathcal{D}$ forma un *reticolo* (da approfondire, [[Reticolo]]).
> L'idea di questa osservazione viene raffigurata nella *figura 2.2.*.

^64461d

**FIGURA 2.2.** (*L'idea delle relazioni tra suddivisioni*)
![[Pasted image 20231205181822.png]]