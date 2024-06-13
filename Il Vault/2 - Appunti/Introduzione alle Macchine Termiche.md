---
data: 2024-05-23
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Introduzione alle Macchine Termiche
tipologia: appunti
stato: "1"
capitolo: Termodinamica
---
- - -
*Generalità sulle macchine termiche: idea principale, macchina di Papin. Definizione di macchina termica. Convenzioni di rappresentazione grafica delle macchine termiche. Diagramma PV/TS delle macchine termiche. Definizione di rendimento $\eta$ per le macchine termiche.*
- - -
# 0. Voci correlate
- [[Definizioni Relative alla Termodinamica]]
- [[Diagramma TS]]
- [[Diagramma PV]]
- [[Definizione di Calore e Lavoro Termodinamico]]
# 1. Idea delle Macchine Termiche
Conoscendo le *trasformazioni termodinamiche*, possiamo *"combinarle"* in un modo tale da formare i *cicli termodinamici*. Prima di darne la definizione vediamo un esempio, che potrebbe darci l'*idea intuitiva* delle macchine termiche.

#Esempio 
**ESEMPIO.** (*Macchina a vapore di Papin*)
Supponiamo di avere un *contenitore* con dell'*acqua* e un *pistone*, collegato mediante carrucole ad un blocco. Allora effettuiamo la seguente procedura.
1. *Riscaldare il sistema, con una fiamma posto sotto il contenitore*: così la aumenta la *pressione*, causando uno *spostamento* del pistone finché viene bloccato ad un certo punto.
![[Pasted image 20240523193324.png|250]]
2. *Bloccare il pistone, e lasciare il vapore a raffreddare*: con delle fessure posto in alto, faccio scappare l'aria calda, diminuendo così la *pressione*.
![[Pasted image 20240523193555.png|250]]
3. *Togliere il blocco e far cadere il pistone*: passaggio autoesplicativo: il pistone cade dato che abbiamo la forza di gravità è una pressione atmosferica maggiore di quella interna. In questo caso, dato che abbiamo la *forza di tensione* ([[Forza Tensione#^94ea84]]), il lavoro effettuato da questa caduta viene *trasmessa* al corpo collegato; compiendo così un *lavoro* $W$
![[Pasted image 20240523193649.png|350]]
4. *Ripetere*
![[Pasted image 20240523193728.png]]

# 2. Definizione di Macchina Termica
#Definizione 
**DEFINIZIONE** (*Macchina termica*)
Si dice *macchina termica* un *sistema* che trasforma del *calore entrante* $Q_{\text{in} }$ in lavoro $W$. Inoltre è *ciclico* (ovvero lo stato iniziale e finale del sistema lo stesso).

**CONVENZIONE.** (*Rappresentazione delle macchine termiche*)
Abbiamo due modi per rappresentare una *macchina termica*. Vediamone entrambi
![[Pasted image 20240523194122.png]]
Si preferisce la *seconda convenzione*, dato che *rende meglio* la conservazione dell'energia ([[Primo Principio della Termodinamica#^9fdbb7]]). Inoltre per convenzione abbiamo *sempre* $Q_\text{in}, Q_\text{out}, W \geq 0$ (in particolare scegliamo il *lavoro* come quello *compiuto dal gas*).

#Osservazione 
**OSSERVAZIONE.** (*Si può anche rappresentare il flusso d'entropia*)
In questo caso si può anche rappresentare il *flusso di entropia*, che è una *"freccia parallela"*.
Vedremo col *ciclo di Carnot* ([[Ciclo di Carnot]]) come gestire questa rappresentazione.

# 3. Grafico di una Macchina Termica
Adesso vogliamo *qualitativamente* rappresentare una macchina termica (ovvero i suoi processi). Come primo approccio possiamo usare il *digramma PV* ([[Diagramma PV]]).

#Esempio 
**ESEMPIO.** (*Diagramma PV di una macchina termica*)
Prendiamo il seguente *diagramma PV*, che potrebbe rappresentare una macchina termica.
![[Pasted image 20240523195508.png|500]]
Abbiamo che il *suo lavoro netto* (ovvero compiuto dal gas) è la somma degli integrali (in realtà si tratterebbe di una sottrazione, dato che ho lavoro positivo e negativo) ([[Diagramma PV#^760d9c]])
$$
W_{\text{net} }=\int_1^2 P \ \text{d}V + \int_2^1 P \text{ d}V
$$
Rappresentiamo quest'integrale come l'*integrale curvilineo*
$$
W_\text{net}=\oint P \ \text{d}V
$$

#Esempio 
**ESEMPIO.** (*Diagramma TS di una macchina termica*)
In questo caso abbiamo il seguente *diagramma TS*.
![[Pasted image 20240523195522.png|500]]
Abbiamo che il *calore entrante* è rappresentato dall'integrale
$$
Q_\text{in}=Q_{AB}=\int_A^B T \ \text{d}S
$$
analogamente il *calore uscente* è
$$
Q_\text{out}=Q_{BA}=\int_B^A T \ \text{d}S
$$
Allora il *calore netto* ([[Diagramma TS#^d37ca6]]) è
$$
Q_\text{net}=\oint T \ \text{d}S
$$

#Osservazione 
**OSSERVAZIONE.** (*Il lavoro ricavato da un diagramma PV è lo stesso del diagramma TS*)
Notiamo di avere una *struttura ciclica*, che implica l'*energia interna* rimane sempre la stessa durante il cammino. Ovvero ho
$$
\oint \text{d}U=0
$$
Per il *primo principio della termodinamica* ho
$$
\oint \text{d}U=\oint T \text{ d}S - \oint P \text{ d}V=0
$$
Allora ho 
$$
\boxed{ \oint T \text{ d}S=\oint P \ \text{d}V = W_\text{net} }
$$
Ovvero che $W_\text{net}=Q_\text{net}$. Questo vale per i *cicli termodinamici*, e si rivelerà utile per l'*ottimizzazione* delle macchine termine. Per parlare di questo tema, introduciamo il *concetto di rendimento*.

# 4. Rendimento di una Macchina Termica
Voglio definire una *quantità fisica* che renda l'idea del rapporto *"benefit/cost"*.

#Definizione 
> [!def] rendimento termico di una macchina termica
> Data una *macchina termica* con $Q_\text{in}$, $Q_\text{out}$ e $W$, si definisce il *rendimento* come la seguente quantità
> $$
> \eta = \frac{W}{Q_\text{in} }=\frac{Q_\text{in} - Q_\text{out} }{Q_\text{in} }=1-\frac{Q_\text{out} }{Q_\text{in} }
> $$
> Noto che per il *secondo principio della termodinamica* ho
> $$
> \sup \eta = 1 , \min \eta = 0
> $$
> In particolare $\eta \ll 1$ (ovvero è *molto lontana* da $1$).

^dbc885

