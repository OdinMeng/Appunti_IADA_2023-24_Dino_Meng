---
data: 2024-04-23
corso:
  - "[[Analisi Matematica II]]"
argomento: Test del Gradiente
tipologia: appunti
stato: "1"
capitolo: Ottimizzazione in più variabili
---
- - -
*Condizione necessaria per punti di estremo relativo (o noto come test del gradiente, oppure teorema di Fermat generalizzato). Dimostrazione.*
- - -
# 0. Voci correlate
- [[Definizione di Estremo per una Funzione in più variabili]]
- [[Teorema di Fermat]]
# 1. Test del Gradiente
Come *primo approccio* ai problemi di *ottimizzazione*, consideriamo una *condizione necessaria* per i punti di *estremo relativo*. Questo teorema sarà noto come il *test del gradiente*, oppure il *teorema di Fermat generalizzato* (infatti questo teorema sarà analoga alla sua controparte unidimensionale, [[Teorema di Fermat#^8ab68b|1]]).

#Teorema 
> [!thm] test del gradiente o teorema di Fermat
> Sia $f:E \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ una funzione *differenziabile* ([[Differenziale di Funzioni in più Variabili#^0791fa|1]]). 
> Sia $\underline{x_0}$ un punto *interno* del dominio $E$ (ovvero in matematichese si dice $\underline{x_0} \in E^\circ$) ([[Topologia in RN#^3a70fb|2]]). 
> 
   Vale che *se* il punto $\underline{x_0}$ è un *estremo relativo*, allora il suo *gradiente* è nullo.
>   $$
 >  \nabla f(\underline{x_0})=\underline{0}
 >  $$
^249814

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^249814]]
Introduco la funzione 
$$
g(t)=f(\underline{x_0}+t\underline{e_1})
$$
con $\underline{e_1}$ il membro della base canonica $\mathcal{E}$. 
Notiamo subito che $g(t=0)$ è un *estremo relativo*. Infatti, per $t>0$ ho che la funzione deve *"distanziarsi"* dall'estremo, in un modo o l'altro. Quindi per il teorema di Fermat ho
$$
g'(0)=0
$$
Per la *differenziazione della composta* ([[Differenziale di Funzioni Composte in più Variabili#^4b8fa5|1]]) possiamo scrivere
$$
g'(\underline{x_0})=\langle \nabla f(\underline{x_0}+t\underline{e_1}), \underline{e_1}\rangle = \frac{\partial f}{\partial x_1}(\underline{x_0}+t\underline{e_1})
$$
possiamo scrivere pure
$$
g'(0)=\langle\nabla f(\underline{x_0}), \underline{e_1} \rangle=\frac{\partial f}{\partial x_1}(\underline{x_0})=0
$$
Ripetendo il ragionamento per tutti i vettori $\underline{e_i} \in \mathcal{E}$ segue la tesi. $\blacksquare$

**I punti critici.** Questo teorema ci prepara per dare una definizione *ben posta* dei *punti critici*, come nel caso unidimensionale: il teorema di Fermat ci dà tutti i poteri effettivi per definire i punti stazionari.