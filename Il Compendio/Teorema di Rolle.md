---
data: 2023-11-23
corso: "[[Analisi Matematica I]]"
argomento: Teorema di Rolle
tipologia: appunti
stato: "1"
---
*Teorema di Rolle: enunciato, dimostrazione e interpretazione grafica.*
- - -
# 1. Enunciato del teorema di Rolle
#Teorema 
> [!thm] di Rolle
> Sia $f: [a, b] \longrightarrow \mathbb{R}$, sia $f$ *continua* su $[a,b]$ e *derivabile* su $]a, b[$. 
> Sia inoltre $f(a) = f(b)$. Riassumendo ho la situazione in *figura 1.1.*.
> Allora si verifica che
> $$\boxed{\exists \xi \in \ ]a, b[\ : f'(\xi) = 0} $$
^2d8bff

**FIGURA 1.1.** (*Situazione grafica delle supposizioni*)
![[Pasted image 20231123165756.png]]
# 2. Dimostrazione
#Dimostrazione 
**DIMOSTRAZIONE** del *teorema di Rolle* ([[#^2d8bff]])
Prima di dimostrare il teorema a tutti gli effetti, svolgo la seguente osservazione preliminare.
- - -

#Osservazione 
> [!rmk] osservazione preliminare alla dimostrazione del teorema di Rolle
Notiamo che $f$ è *continua* per tutto il suo dominio, quindi per il *teorema di Weierstraß* ([[Teoremi sulle funzioni continue#^918fc1]]) sappiamo che *esistono* almeno un *massimo* e *minimo* di $f$ ([[Funzioni#^e1ab12]]).

- - -
Ora distinguo due casi, dove *"posiziono"* questi punti di $\max$ e $\min$ precedentemente osservati:
1. Tutti i punti di *massimo* e *minimo* assoluto sono agli estremi, dunque gli stessi: allora in questo caso se il massimo assoluto è lo stesso del minimo assoluto di una funzione allora si tratta di una *funzione costante* del tipo $f(x) = c \in \mathbb{R}$.
   Però calcolandone la derivata $(c)' = 0$ troviamo che la proposizione 
   $$f'(x) = 0 $$
   è *sempre* vera nel suo dominio. 
2. Almeno uno fra *massimo* e/o *minimo* assoluto della funzione è *punto interno* a $[a, b]$ ([[Punti interni, esterni e di frontiera#^c78831]]). Dunque chiamo quel punto $\xi$.
   Però sapendo che $f$ è *non-costante*, *derivabile*, *continua* e il punto scelto è *interno*, allora per il *teorema di Fermat* ([[Teorema di Fermat#^8ab68b]]) trovo che
   $$f'(\xi) = 0 \ \blacksquare$$

# 3. Interpretazione geometrica (dimostrazione grafica)
#Osservazione 
> [!rmk] interpretazione grafica della dimostrazione del teorema di Rolle
 Si nota che è possibile dare una buona interpretazione grafica a questo teorema; anzi è addirittura possibile dare una dimostrazione *grafica* considerando i casi disegnati nella dimostrazione.

**FIGURA 3.1.** (*Disegno*)
![[Pasted image 20231123171135.png]]
