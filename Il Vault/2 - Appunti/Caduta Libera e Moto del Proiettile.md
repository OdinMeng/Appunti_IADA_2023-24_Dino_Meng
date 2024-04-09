---
data: 2024-03-12
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Caduta Libera e Moto del Proiettile
tipologia: appunti
stato: "0"
capitolo: Cinematica
---
- - -
*Casi particolari della Cinematica Puntiforme: la caduta libera di un corpo e il moto di un proiettile.*
- - -
# 1. Caduta Libera
#Osservazione 
> [!rmk] la legge dei gravi
> Si osserva che *tutti i corpo* cadono con la *medesima accelerazione*, con
> $$
> \vec{a}=-g \hat{j}, g \approx 9.8 \ \frac{\text{m}}{\text{s}^2}
> $$
> Questo vale *indipendentemente* dalla loro *massa*. 
> 
> Questo fenomeno è noto come la *"caduta dei gravi"*, osservata dal padre del metodo scientifico Galileo Galilei nella seconda metà del sedicesimo secolo.

#Teorema 
> [!thm] la caduta libera di un corpo
> Dall'osservazione della *caduta dei gravi*, possiamo applicare la *modellizzazione della cinematica* in questa situazione.
> 
> In questo caso abbiamo quindi un corpo che si muove alla velocità
> $$
> \vec{v}(t)=-gt \cdot \vec{j} + \vec{v_0}
> $$
> In particolare, prendendo la *sola componente verticale*,
> $$
> v_y(t)=-gt+ v_{0y}
> $$
> Per quanto riguarda la sua *legge oraria*, si ha
> $$
> y(t)=y_0+y_{0y}t -\frac{1}{2}gt^2
> $$
> Quindi l'andamento della sua *posizione* è esattamente una *parabola* direzionata verso il basso (*figura 1.1.*).
^066799

**DIMOSTRAZIONE** del [[#^066799]]
Segue direttamente dalla *legge oraria per il moto uniformemente accelerato* ([[Moto Uniformemente Accelerato#^aec25f]]). $\blacksquare$

#Corollario 
> [!cor] l'altezza massima raggiunta dal corpo
> Se vogliamo studiare il *massimo* della sua posizione (ovvero la sua altezza massima raggiunta), basta considerare la *legge oraria per il moto uniformemente accelerato generalizzato dal tempo* ([[Moto Uniformemente Accelerato#^0eb22d]]). Ovvero,
> $$
> y_M = y_0 + \frac{v_{0y}^2}{2g}
> $$
> Ovviamente questa vale *solo se* $v_0$ è *positiva*; se invece è negativa, il punto massimale coincide con il punto di partenza.

**FIGURA 1.1.** (*L'andamento di un corpo in caduta libera*)
![[Pasted image 20240312195729.png]]

# 2. Moto di un proiettile
#Osservazione 
> [!rmk] notizie storiche sul moto del proiettile
> Lo studio del *moto del proiettile* ritiene una buona *importanza storica*, in particolare per le *guerre* e le *battaglie*: si vuole spiegare e descrivere accuratamente la *traiettoria* dei proiettili.
> 
> In particolare, viene studiato inizialmente nel 340 A.C. dal filosofo greco *Artistotele*, che parla di un *"moto naturale"* e di un *"moto forzato"*: il moto naturale consisterebbe nella *caduta*, e il moto forzato nella *spinta orizzontale*. La domanda che si pone *Aristotele* e quella del perché i proiettili vengano effettivamente forzati.
> 
> Dopodiché, il filosofo greco Filipono (https://it.wikipedia.org/wiki/Giovanni_Filopono) (490-570 A.C.) parla di un *"impeto"*, che è importante in quanto costituisce le fondamenta del concetto di *quantità di moto*. 
> 
> Infine la risposta venne *"data"* dallo scienziato *Galileo Galiei*, che al posto di dare *subito spiegazioni*, si è impiegato ad *osservare* e *misurare*.

#Teorema 
> [!thm] il moto di un proiettolo
> Supponiamo che un corpo si sta muovendo ad un'accelerazione
> $$
> \vec{a} = -g \cdot \hat{j}
> $$
> Con una velocità iniziale
> $$
> \vec{v_0}=v_{0x}\cdot \hat{i} + v_{0y} \cdot \hat{j}
> $$
> Allora segue che
> $$
> \begin{gather}
> \boxed{\vec{v}(t)=v_{0x}\cdot \hat{i} + (v_{0y}-gt)\cdot \hat{j}} \\
> \boxed{\vec{r}(t) = (x_0+v_{0x}t)\cdot \hat{i} + (y_0+v_{0y}t-\frac{1}{2}gt^2)}
> \end{gather}
> $$
> Allora il *moto del proiettile* non è altro che una *parabola orientata verso il basso*.
^77ebe8

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^77ebe8]]
Segue direttamente dalla *formula di un corpo in caduta libera* ([[#^066799]]) e dal *moto uniformemente accelerato* ([[Moto Uniformemente Accelerato#^aec25f]]). $\blacksquare$

**FIGURA 2.1.** (*Descrizione quantitativa di un moto del proiettile*)
![[Pasted image 20240312201914.png]]

#Osservazione 
> [!rmk] i dati disponibili a noi
> Prima di procedere con ulteriori calcoli, osserviamo che *tradizionalmente* con un problema del genere (ovvero il calcolo della traiettoria di un proiettile) ci vengono dati solo *due dati*: il modulo della velocità iniziale $|v_0|$ e l'angolo della *"sparata"* $\theta$.
> 
> Sarà quindi importante ricordarci le seguenti formule per *"scomporre"* il *modulo della velocità iniziale* nelle sue singole componenti $v_{0y}, v_{0x}$.
> $$
> \begin{cases} 
>v_{0x}=|v_0|\cos\theta \\ v_{0y}=|v_0|\sin \theta
> \end{cases}
> $$
> Questo discende dai *risultati della trigonometria* ([[Funzioni trigonometriche#^dd4b35]]).

#Corollario 
> [!cor] altezza massima e gitatta di un proiettile
> Adesso vogliamo calcolare l'*altezza massima* raggiunto da un proiettile, sparato con una velocità di $v_0$ ad angolo $\theta$.
> $$
> y_M = y_0+\frac{|v_0|^2}{2g}\sin^2\theta
> $$
> Per quanto riguarda invece la *gittata del proiettile* (ovvero la distanza orizzontale percorsa da un corpo), si ha, supponendo che non c'è nessun dislivello tra l'altezza iniziale e finale,
> $$
> R = \frac{|v_0|^2 \sin(2\theta)}{g}
> $$
^4de10a

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^4de10a]]
*N.B. La dimostrazione di questo risultato (o il ragionamento che sta dietro) è più importante dell'enunciato!*
Per calcolare l'*altezza massima*, basta pensare che si tratta di una situazione di *"frenatura"* in cui il corpo sta *"frenando verticalmente"* con una decelerazione di $g$: allora si ha la tesi.
Per quanto riguarda invece la *gittata*, vogliamo fare un ragionamento completo. Prendiamo innanzitutto i valori conosciuti: $|\vec{v}_0|$, $\theta$, $y_f=0$, $|\vec{v}_y(t_f)| = -v_{y}(t_0)$. L'ultimo *"valore conosciuto"* deriva dal fatto che la *"velocità finale è opposta della velocità iniziale"*: per convincerci di questo è sufficiente disegnare il grafico della parabola e *"immaginare"* le tangenti nei zeri (*figura 2.2.*). Abbiamo dunque abbastanza dati per calcolare l'*istanza del tempo in cui il proiettile ricade a terra*, che è sufficiente per calcolare il dato voluto $R$.
$$
\begin{cases}v_y(t_f)&=v_{y0}-g t_f = -v_{y0} \\ & \implies t_f = \frac{2v_{y0}}{g} \end{cases}
$$
da cui discende il risultato finale
$$R = v_{x}(t_f)=2\frac{v_{0x}v_{0y}}{g} = \ldots = \boxed{\frac{|v_0|^2\sin(2\theta)}{g}}$$
che è la tesi. $\blacksquare$

**FIGURA 2.2.** (*L'esperimento mentale*)
![[Pasted image 20240314200129.png|650]]

