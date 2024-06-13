---
data: 2024-04-23
corso:
  - "[[Analisi Matematica II]]"
argomento: Teorema di Weierstraß Generalizzato
tipologia: appunti
stato: "1"
capitolo: Ottimizzazione in più variabili
---
- - -
*Condizione sufficiente per l'esistenza di un minimo e massimo di una funzione in più variabili: il teorema generalizzato di Weierstraß.*
- - -
# 0. Voci correlate
- [[Teoremi sulle funzioni continue]]
# 1. Teorema di Weierstraß Generalizzato
Generalizziamo il *teorema di Weierstraß* ([[Teoremi sulle funzioni continue#^918fc1|1]]) su più variabili.

#Teorema 
> [!thm] di Weierstraß, generalizzato
> Se $f:K \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ è *continua* su $K$ con $K$ *compatto* (ovvero chiuso e limitato) per $\mathbb{R}^N$, allora
> $$
> \exists x_{\ast},x_{\bullet} \in K: x_{\ast}=\min_{E}f, x_{\bullet}=\max_{E}f
> $$
> ovvero esistono sia *il minimo* che il *massimo* della funzione.

^cd4d7c

Tuttavia, la compattezza del dominio potrebbe sembrare troppo *restrittiva* (ed effettivamente potrebbe esserlo: potrei avere insiemi illimitati). Quindi troviamo una *"versione più debole"* che ci garantisca comunque l'esistenza di uno dei due punti $x_{\ast}, x_{\bullet}$. Parleremo in particolare di *coercitività* (o *anticoercitività*) ([[Funzione Coerciva#^219eda|1]]) e la sua proprietà fondamentale ([[Funzione Coerciva#^74d787|2]]).