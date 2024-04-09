---
data: 2024-03-16
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Moti Relativi
tipologia: appunti
stato: "1"
capitolo: Cinematica
---
- - -
*Moti relativi. Il grande navilio di Galilei. Regole per determinare rapporti tra due sistemi di riferimento diversi. Definizione di sistema inerziale.*
- - -
# 1. L'osservazione del gran navilio di Galilei
#Osservazione 
> [!rmk] l'osservazione di Galilei
> Nella prima metà del diciassettesimo secolo, il noto scienziato Galileo Galilei fece una notevole osservazione$^{(1)}$. 
> 
> Supponiamo che una barca stia muovendo ad una velocità $v$. Su questa barca stiamo facendo cadere una palla, che si muove come un *oggetto in caduta libera* ([[Caduta Libera e Moto del Proiettile#^066799]]). Quindi, da un osservatore *all'interno della barca* vede che la palla cade normalmente.
> 
> Tuttavia, per un *osservatore esterna dalla barca*, è tutto diverso. Infatti, la palla *"acquisisce"* il movimento della barca, conferendogli un *moto parabolico* (*figura 1.1.*).
> 
> Questa osservazione è importante, dal momento che pone le *fondamenta* per i *moti relativi*. Vedremo come si potrà *formalizzare* le nozioni di *sistema di riferimento* e come poter porre in rapporto *due sistemi di riferimento* diversi.

**FIGURA 1.1.** (*L'osservazione galileiana*)
![[Pasted image 20240316191949.png]]

- - -
$^{(1)}$ *In realtà si tratta di un'osservazione ancora più ampia e complessa, per approfondire vedere il testo sul 'Gran Navilio' ([[Il Gran Navilio]])*
- - -
# 2. Leggi per i sistemi di riferimento
#Definizione 
> [!def] sistema di riferimento
> Sia $O_A$ un *punto sul piano* $\mathbb{R}^2$. Allora si dice *"Sistema di riferimento $A$"* come il *piano cartesiano* formato dall'asse $X_A$ e dall'ascissa $Y_A$.

^cc670c

**FIGURA 2.1.** (*Illustrazione grafica dei sistemi di riferimento*)
![[Pasted image 20240316192827.png]]

#Proposizione  
> [!prp] relazione tra i sistemi di riferimento
> Sia $P$ un punto fissato, $\vec{r}_{PA}$ (e $\vec{r}_{PB}$) il segmento tra l'origine del sistema di riferimento $A$ (e $B$), sia $\vec{r}_{BA}$ il segmento tra l'origine di $B$ e $A$. Allora vale che
> $$
> \boxed{\vec{r}_{PA}=\vec{r}_{PB}+\vec{r}_{BA}}
> $$
> ovvero *"P secondo A = P secondo B + B secondo A"*
> Prendendo le derivate, valgono pure
> $$
> \boxed{\begin{gather}\vec{v}_{PA}=\vec{v}_{PB}+\vec{v}_{BA} \\ \vec{a}_{PA}=\vec{a}_{PB}+\vec{a}_{BA}\end{gather}}
> $$
^aae7a2

#Dimostrazione 
**DIMOSTRAZIONE** della [[#^aae7a2]]
Basta osservare che $\vec{r}_{PA}$ non è altro che la somma dei vettori $\vec{r}_{BA}$ e $\vec{r}_{PB}$. (*figura 2.2.*) $\blacksquare$

**FIGURA 2.2.** (*Illustrazione grafica della [[#^aae7a2]]*)
![[Pasted image 20240316193130.png]]
# 3. Sistemi di riferimento inerziali
#Definizione 
> [!def] sistema di riferimento inerziale
> Siano $A, B$ due *sistemi di riferimento*. Questi si dicono *sistemi di riferimento inerziali* se vale che
> $$
> \vec{a}_{BA} = 0\ \frac{\text{m}}{\text{s}^2}
> $$

