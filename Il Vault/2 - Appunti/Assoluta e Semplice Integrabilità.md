---
data: 2024-03-05
corso:
  - "[[Analisi Matematica II]]"
argomento: Assoluta e Semplice Integrabilità
tipologia: appunti
stato: "1"
capitolo: Fondamenta degli Integrali Generalizzati
---
- - -
*Definizione di assoluta e semplice integrabilità in senso generalizzato. Teorema dell'assoluta integrabilità in senso improprio.*
- - -
# 1. Definizione di Assoluta e Semplice Integrabilità
#Definizione 
> [!def] assoluta e semplice integrabilità in senso generalizzato
> Sia $f:J \longrightarrow \mathbb{R}$ localmente integrabile sul dominio.
> Si dice che $f$ è *"assolutamente integrabile in senso generalizzato"* se $|f|$ è *integrabile in senso generalizzato*.
> Altrimenti si dice che $f$ è *"semplicemente integrabile in senso generalizzato"* se $f$ è *integrabile in senso generalizzato* ma $|f|$ *non* lo è.

#Osservazione 
> [!rmk] il senso delle definizioni
> Vediamo che abbiamo dato due definizioni di *integrabilità in senso generalizzato*: una assoluta e l'altra semplice. Esiste un legame tra le funzioni *assolutamente integrabili* e le funzioni *integrabili* (ovviamente sempre in senso improprio!)? Sono equivalenti? Oppure solo una implica l'altra? Ma allora la nozione di funzione semplicemente integrabile ha senso? Ora vedremo col teorema dell'assoluta integrabilità.

# 2. Teorema dell'Assoluta Integrabilità
#Teorema 
> [!thm] dell'assoluta integrabilità
> Sia $f:J \longrightarrow \mathbb{R}$ una *funzione assolutamente integrabile in senso generalizzato sul dominio*.
> Allora anche $f$ è *integrabile in senso generalizzato sul dominio* e vale la relazione
> $$
> \left|\int_J f \ \right| \leq \int_J |f|
> $$
^f594aa

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^f594aa]]
Si considera la relazione
$$
0 \leq |f(x)|-f(x) \leq 2|f(x)|
$$
Applico il *criterio del confronto per gli integrali generalizzati* ([[Teoremi sugli Integrali Impropri#^e3ccfc]]): se $2|f(x)|$ è *integrabile in senso improprio*, allora lo sarà pure $|f(x)|-f(x)$. Da ciò discende che lo è pure $f(x)$; infatti, definendo per costruzione $f(x):=|f(x)|-[|f(x)|-f(x)]$, si ottiene questo risultato.
Inoltre per ottenere la relazione enunciata dalla tesi, si considera la seguente disuguaglianza.
$$
\begin{align}-|f(x)| \leq f(x) \leq |f(x)| &\implies -\int_J |f| \leq \int_J f \leq \int_J f \\ &\implies \left|\int_J f \ \right| \leq \int_J |f|\end{align}
$$
che è proprio l'enunciato della tesi. $\blacksquare$

# 3. Esempi di Assoluta e Semplice Integrabilità
#Esempio 
> [!exm] funzione assolutamente integrabile
> La funzione
> $$
> f(x)=\frac{\sin x}{x^2}
> $$
> è *assolutamente integrabile* sull'intervallo $J=[1, +\infty)$. Infatti basta usare il teorema del confronto con $g(x)=x^{-2}$. Considerando il suo *valore assoluto* si ha infatti
> $$
> \left|\frac{\sin x}{x^2}\right| \leq \frac{|\sin x|}{x^2} \leq \frac{1}{x^2}
> $$
> Dato che il membro destro della disuguaglianza è proprio una *funzione campione* ([[Integrali Impropri Notevoli#^84083f]]), sappiamo che questa è *integrabile in senso generalizzato*, dunque il valore assoluto $|f(x)|$ è *integrabile in senso generalizzato*, ovvero $f(x)$ è *assolutamente integrabile in senso generalizzato*.

#Esempio 
> [!exm] funzione semplicemente integrabile
> La funzione
> $$
> f(x)=\frac{\sin x}{x}
> $$
> è invece *semplicemente integrabile* su $[1, +\infty)$.
> Per dimostrarlo bene, bisogna dimostrare che il suo valore assoluto non è integrabile, confrontandola con una funzione $g(x)$ per cui $|f(x)| \geq g(x)$. In questo caso basta scegliere
> $$
> g(x)=\frac{\sin^2 x}{x}
> $$
> Ora basta provare che $g(x)$ non è integrabile, da cui *per il teorema del confronto* $|f(x)|$ non è *integrabile*. Per farlo, bisogna usare l'identità trigonometrica
> $$
> \sin^2(x) = \frac{1-\cos(2x)}{2}
> $$
> Invece per motivi analoghi al motivo precedente, la funzione $f(x)$ senza il valore assoluto è integrabile.
