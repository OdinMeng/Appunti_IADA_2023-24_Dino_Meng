---
data: 2024-04-22
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Urti
tipologia: appunti
stato: "1"
capitolo: Energia e Quantità di Moto
---
- - -
*Gli urti: introduzione, proprietà fondamentale degli urti. Le categorie degli urti: elastico, anelastico e parzialmente elastico. Esempio di urto: il pendolo ballistico*
- - -
# 0. Voci correlate
- [[Quantità di Moto]]
- [[Energia Cinetica]]
# 1. Introduzione agli Urti
**GLI URTI.** Gli urti sono dei *fenomeni* fondamentali per la *fisica moderna*: spaziamo da *oggetti a particelle*. Ad esempio, abbiamo degli *interi laboratori di fisica* che sono fatti per *studiare gli scontri tra particelle*! (Per chi non ne fosse a corrente, so parlando della *CERN*).

Adesso che abbiamo *definito* la *quantità di moto*, abbiamo un modo per studiarle. Infatti, dato che *non ci interessa* cosa succede durante l'urto, bensì solo l'*input* (la situazione iniziale) e l'*output* (il risultato), possiamo usare perfettamente queste nozioni.
![[Pasted image 20240422213028.png|500]]

# 2. Proprietà fondamentale degli Urti
Per studiare gli *urti*, enunciamo la seguente proprietà.

#Proposizione 
> [!prp] la proprietà fondamentale degli urti
> *Prima* e *dopo* un *urto*, la *quantità di moto* dei corpi coinvolti viene *sempre conservata*. 
> 
> Infatti, (quasi) *mai* ho delle *forze esterne* durante gli urti; questo perché i *tempi di interazione* sono molto brevi rispetto all'effetto delle forze esterne. Quindi, se esistono, sono *al più* trascurabili.

# 3. Classificazione degli Urti
Adesso *classifichiamo* alcune tipologie di urti.

#Definizione 
> [!def] urto elastico
> Supponiamo di avere un urto tra $j$ oggetti puntiformi in un sistema $\Sigma$. Allora definiamo le seguenti.
> 
> i. L'urto si dice *elastico* se vengono conservate *entrambe* la *quantità di moto* e l'*energia cinetica*. Ovvero, se vale
> $$
> \sum_{j \in \Sigma}K_{j,i} = \sum_{j \in \Sigma}K_{j,f} \land \sum_{j \in \Sigma}\vec{p}_{j,i}=\sum_{j \in \Sigma}\vec{p}_{j,f}
> $$
> - Come esempi di *urti elastici* possiamo parlare delle *palle da biliardo*, oppure il *pendolo di Newton*.
>   
> $$
> $$

#Definizione 
> [!def] urto anelastico 
> i. L'urto si dice *anelastico* se i *corpi "si incollano"*, ovvero se *viene conservata la quantità del moto* ma non *l'energia cinetica*, con la condizione che la *velocità finale* di ambi i corpi siano lo stesso.
> $$
> \sum_{j \in \Sigma}\vec{p}_{j,i}=\sum_{j \in \Sigma}\vec{p}_{j,f} \land \left\{\begin{align}  & \vec{p}_{1,f} = m_1 \vec{v}_f \\ &\vec{p}_{2,f} = m_2 \vec{v}_f \\ & \vdots\end{align}\right. \ \text{con } \vec{v}_f \in \mathbb{R}^2
> $$
> - Esempi: *scontro tra automobili, come tamponamento*
> - L'energia è dissipata nel *"fondere il nuovo corpo"*
>   
> ii. L'urto si dice *parzialmente elastico* se una parte dell'energia viene dispersa, la velocità finale non è la stessa.

# 4. Il pendolo ballistico
Adesso forniamo un *esempio pratico* di urto (in particolare *anelastico*).

#Esempio 
> [!exm] il pendolo balistico
> Un *proiettile* di massa $m$ a velocità $v$ si sta dirigendo verso un *corpo* $M$ appeso al soffitto con due fili ideali. Con l'urto il corpo si sposta in altezza di misura $h$ (*figura 4.1.*). Determinare la velocità del proiettile.
> 
> Notiamo che:
> 1) L'urto è *anelastico*, dato che il proiettile entra nel corpo e si *"fondano"*
> 2) Ci sono due passi: una in cui il *proiettile entra nel corpo grande* e l'altra in cui la massa si sposta come un tutt'uno
> 
> Sul primo momento posso *usare la conservazione della quantità del moto*, dato che non ho ancora forze esterne in azione (come la *tensione*).
> $$
> \vec{p}_{m,i}+\underbracket{\vec{p}_{M,i} }_{0}=\vec{p}_{m,f}+\vec{p}_{M,f}
> $$
> Troviamo che
> $$
> \vec{p}_{m,i}=\vec{p}_{\Sigma}=m\vec{v}
> $$
> Possiamo far corrispondere questa quantità di moto all'*energia cinetica* in qualsiasi momento, visto che la quantità di moto si conserva sempre.
> $$
> K_{\Sigma}=\frac{p_{\Sigma}^2}{2(m+M)}
> $$
> 
> Sul secondo momento posso ancora usare la *conservazione dell'energia*, dato che sono appena *uscito* dall'urto (quindi tutte le dissipazioni dovute sono finite). Quindi ho
> $$
> K_i = \frac{p^2_{\Sigma}}{2(m+M)} =U_{P,f}=(M+m)gh
> $$
> Allora abbiamo
> $$
> m^2v^2 = 2(m+M)^2gh
> $$
> che ci dà il risultato
> $$
> \boxed{v=\frac{M+m}{m}\sqrt{2gh} }
> $$

**FIGURA 4.1.** (*Il pendolo ballistico*)
![[Pasted image 20240422215609.png]]
