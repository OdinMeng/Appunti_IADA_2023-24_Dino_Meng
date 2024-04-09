---
data: 2024-02-13
corso: "[[Introduzione alla Fisica]]"
argomento: Richiami di Fisica del Liceo
tipologia: appunti
stato: "1"
capitolo: Ripasso di Fisica Liceale
---
- - -
*Richiami a caso di fisica del liceo.
NOTA BENISSIMO: L'esposizione dei contenuti di fisica sarà ad un livello molto superficiale a quello che si farà in università, dato che stiamo parlando di fisica a livello liceale (in particolare un liceo non-scientifico).*
- - -
# 1. Cinematica
*ARGOMENTI: Definizioni di velocità, accelerazione; moto uniformemente accelerato, legge oraria; energia potenziale, cinetica.*
#Definizione 
> [!def] velocità, accelerazione
> Si definisce la *velocità media* come quella misura ottenuta quando dividiamo lo *spazio* per il *tempo*, ovvero
> $$
> v := \frac{s}{t}[\text{m/s}]
> $$
> Si definisce l'*accelerazione media* in una maniera simile, ovvero come 
> $$
> a := \frac{v}{t}[\text{m/s}^2]
> $$

#Osservazione 
> [!rmk] collegamento con l'analisi matematica
> Notare che è possibile creare un *parallelismo* con l'*analisi matematica*, in particolare con il concetto delle *derivate*.
> Infatti, possiamo definire la *velocità istantanea* e l'*accelerazione istantanea* come le derivate dello *spazio*.
> $$
> v:= \frac{\text{d}s}{\text{d}t}=\dot{s}; a=\frac{\text{d}v}{\text{d}t}=\dot{v}=\ddot{s}
> $$

#Teorema 
> [!thm] moto uniformemente accelerato, legge oraria
> Supponiamo che un *oggetto* si sta muovendo con un'*accelerazione costante*.
> Allora possiamo dedurre le seguenti formule per calcolare la sua *velocità* e la sua *posizione* in un'istante del tempo.
> $$
> \begin{gather}v(t) = v_0+at \\ s(t) = s_0+v_0t + \frac{1}{2}at^2 \end{gather}
> $$
> dove $v_0$, $s_0$ rappresentano la *velocità* / *posizione* iniziale.

#Definizione 
> [!def] energia potenziale, cinetica
> Supponiamo di avere un *oggetto* con una certa massa $m$, che dista dalla terreno per un quantitativo $h$ di spazio.
> Allora definiamo l'*energia potenziale e cinetica* come le quantità
> $$
> \begin{gather}E_p = mgh \\ E_c = \frac{1}{2}mv^2\end{gather}
> $$
> l'energia viene in ogni caso misurata in *Joule* ($[J]$).

#Teorema 
> [!thm] conservazione dell'energia
> Supponiamo di avere un *oggetto* con una certa *energia potenziale* $E_p$ ed *energia cinetica* $E_c$.
> Allora la sua *energia totale* definita come la somma dell'*energia potenziale* e dell'*energia cinetica* è una quantità costante.
> Ovvero,
> $$
> E_t = E_p+E_c=c
> $$

#Corollario 
> [!cor] oggetto in caduta libera
> Supponiamo invece che un *oggetto fermo* si trova in aria, e dista dal *terreno* per un quantitativo $s_0$ di spazio.
> Allora ricaviamo le seguenti formule per calcolare il *tempo necessario affinché l'oggetto raggiunga la terra* e la sua *velocità dato un instante del tempo*:
> $$
> \begin{gather}
> t_f = \sqrt{\frac{2h}{g}}  \\ v(t)=\begin{cases}-gt, t < t_f \\ 0, t \geq t_f\end{cases}
> \end{gather}
> $$

- - -
# 2. Dinamica
*ARGOMENTI: Forza, leggi di Newton; lavoro.*

#Definizione 
> [!def] forza
> Supponiamo di avere un *oggetto* che si muove con un'accelerazione costante $a$.
> Allora si definisce la *forza* come
> $$
> F := ma \ [\text{N}]
> $$
> Viene misurata in *Newton* ($[\text{N}]$).
^8fb64a

#Teorema 
> [!thm] i principi della dinamica / le leggi di Newton
> Enunciamo le famose leggi di Newton.
> 1. *Principio di inerzia*
> "Se la somma delle forze $\sum F$ agenti su un corpo è nullo, allora il corpo rimarrà in quiete o si muoverà con moto uniformemente accelerato."
> 
> 2. *"Principio di proporzionalità*
> Vedere *definizione della forza* ([[#^8fb64a]]); la *forza* agente su un corpo è *proporzionale* alla velocità con cui si muove il corpo.
> 
> 3. *"Principio di azione e di reazione"*
> Supponiamo che un corpo $A$ esercita una forza $F$ sul corpo $B$. Allora il corpo $B$ esercita una *forza contraria* $-F$ sul corpo $A$.
> 

#Osservazione 
> [!rmk] e l'attrito?
> Notiamo che le leggi di Newton non sono chiaramente sufficienti per *modellizzare* il nostro mondo.
> Consideriamo, ad esempio una macchina che si muove a $120 \ \text{km/h}$ in autostrada; se ad un certo punto il conducente decide di lasciare l'acceleratore, allora la macchina inizierà a rallentare, anche se non ci sono delle forze agenti sull'auto!
> 
> In realtà ci sono *sempre* delle forze che agiscono sull'auto; parliamo infatti dell'*attrito*, ovvero quella *forza* che tende a *"rallentare"* un qualsiasi oggetto in moto.
> Ad esempio, consideriamo che dal *contatto* tra la *strada* e le *ruote* si crea l'attrito.
> 
> Questo argomento è collegabile con i *principi della termodinamica*, da una delle quali conseguirebbe che è *impossibile* vivere in un mondo senza attrito, dato che dal *contatto* tra due superfici qualsiasi deve aumentare *sempre* l'entropia.

#Definizione 
> [!def] lavoro
> Supponiamo di esercitare su un'oggetto un quantitativo (scalare) di forza $F$ ($[N]$), e che quest'ultimo oggetto di sposti di un quantitativo $s$ ($[m]$) spazio.
> Allora si definisce il lavoro come la grandezza
> $$
> L := Fs
> $$
> Il lavoro si misura in *Joule* ($[J]$).

- - -
# 3. Fluidostatica
*ARGOMENTI: Pressione, il principio di Pascal, legge di Stevino, legge di Archimede.*

#Definizione 
> [!def] pressione
> Supponiamo di avere un corpo di superficie $A$ (o $S$), su cui si sta esercitando una forza $F$. Si assume che la direzione della forza esercitata è ortogonale (o perpendicolare, o componente normale della forza stessa, in tal caso si scrive $F_\perp$) rispetto alla superficie.
> Allora si definisce la pressione come la grandezza scalare
> $$
> P := \frac{F}{S}
> $$
> La pressione si misura o in Pascal ($[\text{Pa}] = [\text{N/m}^2]$) nella misurazione S.I.; alternativamente ci sono altre misure più popolari per la pressione, tra cui l'atmosfera $[\text{atm}] = 10\text{k}[\text{Pa}]$; il bar $[\text{bar}] = 10^5 [\text{Pa}]$; il millimetro di mercurio, $760 [\text{mmHg}] = 1[\text{atm}]$.

#Teorema 
> [!thm] il principio di Pascal
> In un contenitore di un fluido qualsiasi (gas o liquido), una variazione di pressione $\Delta P$ si trasmette a tutto il fluido e le superfici di contatto.

#Esempio 
> [!exm] esempi del princpio di Pascal
> Come esempi delle applicazioni del principio di Pascal si possono trovare il torchio idraulico, o un semplice palloncino da gonfiare.

#Teorema 
> [!thm] legge di Stevino
> In un recipiente fluido con una certa altezza $h$, la pressione $P$ all'interno di questo fluido cambia al variare della misura $h$, con la seguente formula;
> $$
> P(h) = d_{\text{liq}}\cdot g \cdot h +P_0
> $$
> dove $P_0$ è la pressione esercitata sulla superficie del fluido, $d_\text{liq}$ la densità del liquido e $g$ la costante dell'accelerazione gravitazionale.

#Teorema 
> [!thm] principio di Archimede
> Supponiamo che un corpo di volume $V_S$ entri in un contenitore di un fluido, quindi per la gravità il corpo inizia ad "affondare" nel fluido; allora essa subisce una forza che la spinge nella direzione contraria, che chiameremo la "spinta di Archimede", ed è la grandezza scalare espressa come
> $$
> {F}_A := P_{\text{fs}}
> $$
> dove $P_{\text{fs}}$ è il peso del fluido spostato, calcolata come
> $$
> P_\text{fs} = d_\text{liq} \cdot V_S \cdot g
> $$

#Corollario 
> [!cor] determinare se un corpo galleggia o affonda
> Grazio al principio di Archimede, è possibile determinare se un corpo galleggerà o affonderà quando viene immerso in un fluido.
> Basta infatti calcolare la forza peso del corpo e la densità del corpo, definite come
> $$
> F_g := mg \ ;\ d_S = \frac{m}{V_s} \implies m =d_S V_S \implies F_g = d_SV_S \cdot g
> $$
> Ma allora se confrontiamo la spinta di Archimede con la forza peso del corpo, abbiamo
> $$
> d_{\text{liq}}\cdot V_s \cdot g \sim d_S \cdot V_s \cdot g \implies d_\text{liq} \sim d_S
> $$
> Quindi basterà confrontare la densità del liquido con la densità del corpo: se la densità del corpo è maggiore di quella del liquido, allora il corpo affonda; al contrario se la densità del corpo è minore, allora il corpo galleggia; altrimenti se sono uguali la forza esercitata sul corpo è nulla.

- - -
# 4. Termodinamica
*ARGOMENTI: Calore, Temperatura, Calorimetria. Leggi della termodinamica. Gas perfetti (PV=nRT) come riassunto delle leggi di Boyle; Macchine termiche: Trasformazioni isobare, isocore, isoterme, adiabatiche. Calcolo del lavoro di una trasformazione termodinamica.*

#Definizione 
> [!def] calore
> Si definisce il calore come una grandezza scalare che rappresenta il trasferimento di una certa quantità di energia $E$ tra due o più corpi.
> 
> Nel sistema internazionale questa grandezza viene misurata in Joule ($[J]$); alternativamente si può usare una misura più antiquata, ovvero la caloria ($\text{cal}$).
> Si riporta che $1 \text{cal} = 4.186 \ \text J$.

#Definizione 
> [!def] temperatura di un corpo
> La temperatura è quella grandezza scalare che rappresenta l'energia cinetica di un corpo.
> 
> Ufficialmente si misura la temperatura in Kelvin ($[K]$), partendo dall'"assoluto zero"; tuttavia nella vita quotidiana si usano altre misure, tra cui i gradi centigradi ($[\text {°C}]$) o i Fahrenheit ($[\text F]$).
> Si riporta la seguente uguaglianza di conversione: $-273.15\  \text{°C} = 0\  \text{K}$.

#Osservazione 
> [!rmk] interpretazione microscopica della temperatura
> Si può definire la temperatura di un corpo mediante un'interpretazione microscopica, ovvero concentrandoci sulle singole particelle che costituiscono il corpo; la temperatura, secondo quest'ultima interpretazione, non è altro che la misura dell'agitazione delle particelle, quindi l'energia cinetica.
> Infatti, ricordiamoci la seguente equazione per l'energia cinetica media per una particella di un gas perfetto;
> $$
> \bar{E}_\text{C} = \frac{3}{2}KT
> $$
> dove $K$ è la c.d. costante di Boltzmann, $T$ la temperatura.

#Definizione 
> [!def] capacità termica, calore specifico
> Si definisce la capacità termica di un corpo $C$ come 
> $$
> C := \frac{Q}{\Delta T}
> $$
> Si definisce il calore specifico per un corpo con massa $m$ come
> $$
> c := \frac{C}{m}
> $$

#Definizione 
> [!def] calore latente
> Si definisce il calore latente $Q_L$ come quella quantità di calore $Q$ necessaria per il cambiamento di stato per un corpo; ovvero
> $$
> Q_L := \lambda \cdot m
> $$
> dove $\lambda$ è una costante che varia per corpo in corpo, ed essa viene misurata in $[\text{J/kg}]$.

#Teorema 
> [!thm] la legge fondamentale della calorimetria
> Per calcolare la quantità di calore $Q$ da trasferire ad un corpo e per influire la sua temperatura per un incremento $\Delta T$, si può usare la seguente formula:
> $$
> Q  = m\cdot c \cdot \Delta T
> $$
^6702b5

#Corollario 
> [!cor] determinare l'equilibrio termico tra due corpi
> Possiamo usare il [[#^6702b5]] per determinare l'equilibrio termico tra due corpi.
> 
> Infatti basterà considerare che abbiamo un trasferimento di energia, quindi da un lato abbiamo un corpo che cede del calore, d'altra parte l'altro corpo assorbe quest'ultimo calore. Questi due quantitativi sono legati dall'uguaglianza
> $$
> Q_{ass} = -Q_{ced}
> $$
> Dopodiché basterà esplicitare le formule considerare l'incremento di temperatura come la differenza tra la temperatura finale ed iniziale $T_f - T_i$, e infine isolare l'incognita $T_f$.

#Definizione 
> [!def] macchina termica
> Definiamo una macchina termica come un qualsiasi corpo che accetta una quantità di calore "entrante", dopodiché "converte" una parte di questo calore in lavoro meccanico e infine cede il calore restante.

#Esempio 
> [!exm] esempi di macchine termiche
> Come esempi di macchine termiche possiamo elencare dei buoni casi: il caso più evidente è quello di un'automobile; un altro caso abbastanza chiaro è quello del nostro corpo.

#Teorema 
> [!thm] le leggi della termodinamica
> Enunciamo le tre leggi della termodinamica.
> 1. *"La variazione dell'energia interna di un sistema termodinamico chiuso è uguale alla differenza tra il calore fornito al sistema e il lavoro compiuto dal sistema sull'ambiente"*: ovvero per ogni macchina termica, la quantità di energia è sempre conservata. Con un linguaggio matematico, la si esprime come
> $$
> \Delta U = Q-L
> $$
> 2. *"è impossibile realizzare una trasformazione il cui risultato sia solamente quello di convertire in lavoro meccanico il calore prelevato da un'unica sorgente"*: in parole nostre, l'entropia totale di un sistema (ovvero la quantità che misura il "disordine" di un corpo) può solo aumentare. 
> 3. *"è impossibile raggiungere lo [zero assoluto] con un numero finito di trasformazioni"*.
> $$ $$

#Teorema 
> [!thm] l'equazione dei gas perfetti
> Supponendo che in un recipiente abbiamo un c.d. "gas perfetto", allora la sua pressione, il suo volume, la sua quantità di mole e la sua temperatura è legata dalla seguente equazione:
> $$
> PV = nRT
> $$

#Definizione 
> [!def] trasformazioni termodinamiche
> Definiamo le seguenti trasformazioni termodinamiche, compiute dalle macchine termiche.
> 1. *Trasformazione isobara*: questa è una trasformazione dove non avviene nessun cambiamento di pressione, ed essa rimane quindi costante.
> 2. *Trasformazione isocora*: similmente alle trasformazioni isobare, con le trasformazioni isocore non vi è nessun cambiamento di volume.
> 3. *Trasformazione isoterma*: analogamente nelle trasformazioni isoterme non vi è nessun cambiamento di temperatura.
> 4. *Trasformazioni adiabatiche*: con le trasformazioni adiabatiche non vi è invece nessun scambio di calore con l'ambiente esterno.
> $$
> $$

#Proposizione 
> [!prp] calcolo del lavoro
> Per calcolare il lavoro compiuta da una certa trasformazione termodinamica, è sufficiente considerare il grafico *"p-V"*, ovvero il piano cartesiano $\pi$ dove l'asse delle ascisse rappresenta il volume, e l'asse delle ordinate rappresenta la pressione. 
> 
> Dopodiché, rappresentando le trasformazioni come dei vettori (o delle curve) orientati, per calcolare il lavoro di una trasformazione basta considerare l'area sotto la curva (oppure l'integrale, nei casi più specifici).
> 
> Se abbiamo in particolare una trasformazione adiabatica, basta considerare che il scambio del calore è nullo, ovvero $Q = 0 \ \text J$, ovvero $L = \Delta U$.

#Proposizione 
> [!prp] l'equazione per una trasformazione adiabatica
> Dato che in una *trasformazione adiabatica* nessuna delle variabili dell'equazione $PV = nRT$ rimangono costanti, allora ci servirà trovare un'equazione che lo descriva la trasformazione adiabatica di un gas da un punto $A$ ad un punto $B$.
> 
> Tuttavia, per poter ricavare un'equazione bisognerà risolvere le equazioni differenziali, un argomento piuttosto complicato; pertanto ci limiteremo solo ad enunciare le seguenti equazioni
> $$
> \begin{gather}P_A V_A ^\gamma = P_B V_B ^\gamma\\ T^\gamma_A P^{1-\gamma} _A = T^\gamma_B P^{1-\gamma}_B\end{gather}
> $$
> dove $\gamma$ è il rapporto tra il calore specifico a pressione costante e quello a volume costante ($\gamma = \frac{c_P}{c_V}$), un valore che dipende dalla struttura atomica del gas (calcolabile mediante i strumenti della meccanica quantistica).

- - -
# 5. Le forze nella fisica
*ARGOMENTI: Forza gravitazionale, forza elettrica. Campo gravitazionale, campo elettrico. Definizione di potenziale gravitazionale.*

#Teorema 
> [!thm] la legge di gravitazione universale di Newton
> Due corpi con massa $m$ esercitano sempre tra di loro una forza attrattiva, detta forza gravitazionale, e la quantità di questa forza viene data dalla formula
> $$
> F_G = G\frac{m_1m_2}{r^2}
> $$
> dove $G$ è la costante della gravitazione universale, $m_1$ e $m_2$ le masse dei corpi, $r$ la distanza tra i corpi.

#Teorema 
> [!thm] la forza di Coulomb
> Due particelle con carica $q$ esercitano tra di loro una forza o attrattiva o repulsiva, detta forza elettrica (o di Coulomb), e viene calcolata come
> $$
> F_E = K \frac{q_1q_2}{r^2}
> $$
> dove $K$ è la costante ${(4\pi \varepsilon_0)}^{-1}$.

#Definizione 
> [!def] campo gravitazionale (o elettrico)
> Supponiamo di avere un solo corpo con una massa $m$ (o carica $q$).
> Ora supponiamo di avere un altro corpo, con una massa (o carica) così piccola che è trascurabile, generando quindi nessun tipo di forza: chiameremo questo corpo (o carica) *"di prova"*.
> 
> D'altronde il corpo con la massa $m$ (o carica $q$) genera una forza attrattiva (o anche repulsiva) sul corpo (carica) di prova. 
> Infatti, piazzando questo corpo in un qualsiasi punto dello spazio, possiamo ottenere un *vettore forza*.
> 
> Definiamo dunque il *campo gravitazionale* (o campo elettrico) *generato* da una massa $m$ (o carica $q$) come una funzione che associa una distanza $r$ dal corpo (o dalla carica) ad un quantitativo scalare di forza:
> $$
> \mathcal G(r) =G \frac{m}{r^2} \ \text{analogamente} \ E(r) = K \frac{q}{r^2}
> $$ 

#Osservazione 
> [!rmk] ricavare la costante dell'accelerazione di gravità
> Considerando i principi della dinamica, possiamo ricavare la costante dell'accelerazione di gravità $g$.
> 
> Basterà infatti misurare la forza gravitazionale tra il *nostro corpo* e la *terra*, poi considerare la prima legge di Newton, per cui
> $$
> F = m_1a = G \frac{m_1m_2}{r^2}
> $$
> e infine isolare l'incognita $a$, che diventerà la costante $g$.
> Si nota bene che l'accelerazione della gravità diventa una funzione al variare di $r$; infatti, in realtà la costante dell'accelerazione della gravità varia a seconda dell'altezza (anche se in una maniera trascurabile!)
> $$
> g(h)=G\frac{m}{h^2}
> $$
> dove $m$ è la massa del corpo (attenzione! qui si assume che la massa venga mantenuta costante) e $h$ la distanza dal centro del corpo.
> 
> Link per il grafico di $g(h)$ con le costanti in riferimento al pianeta terra e prendendo in considerazione il raggio medio della terra: 
> https://www.desmos.com/calculator/o1gbg2qktt
>
> <iframe src="https://www.desmos.com/calculator/zwz5zdmmx8?embed" width="500" height="500" style="border: 1px solid #ccc" frameborder=0></iframe>

#Definizione 
> [!def] potenziale gravitazionale
> Si definisce il *potenziale gravitazionale* come quella grandezza scalare, per cui moltiplicandola con la *massa* si ottiene l'energia potenziale per il corpo.
> $$
> E_P = mV \implies V:= \frac{E_P}{m} 
> $$
> Notare bene che in questo contesto l'energia potenziale non si calcola più come il prodotto della massa per l'altezza e l'accelerazione di gravità, dato che non si assume più l'accelerazione come costante.

- - -
# 6. Elettricità e circuiti elettrici
*ARGOMENTI: Definizione di flusso elettrico. Teorema di Gauß per le superfici in un campo elettrico. Definizione analogica di potenziale elettrico (tensione), definizione di intensità di corrente.  Definizione di circuito elettrico. Leggi di Ohm per le resistenze. Composizione di resistenze in parallelo e in serie. Definizione di condensatore, composizione di condensatori in serie e in parallelo. Circuito RC, carica-scarica di un circuito elettrico.* ~~Partitore di tensione e di corrente, condensatore partitivi~~ **(SALTATO)**

#Definizione 
> [!def] flusso elettrico
> Supponiamo di avere una carica $q$ non-nulla, da cui si ha un *campo elettrico* $E$. Supponiamo di prendere una *superficie chiusa* $S$, collocata in un qualunque parte.
> Allora si definisce il *flusso elettrico* come *"quella quantità del campo elettrico che passa attraverso la superficie"*; ovvero il *prodotto scalare* tra $E$ e $S$. 
> Assumendo che questi siano ortogonali,
> $$
> \Phi = E \cdot S
> $$

#Teorema 
> [!thm] Teorema di Gauß
> Supponiamo che una *superficie* $S$ *racchiuda* una quantità di cariche $Q$. 
> Allora il suo flusso totale è calcolabile come
> $$
> \Phi = \frac{Q}{\varepsilon_0}
> $$
> (dove $\varepsilon_0$ è una costante; la permanenza dielettrica nel vuoto)

#Definizione 
> [!def] potenziale elettrico
> Definiamo il *potenziale elettrico* in una maniera analoga alla definizione del potenziale gravitazionale; ovvero una *grandezza scalare* per cui si ottiene l'energia necessaria per spostare una carica $q$ da un certo punto.
> $$
> V := \frac{E_P}{q}
> $$

#Definizione 
> [!def] tensione, differenza di potenziale
> Supponendo che una carica $q$ passi da un punto $A$ ad un punto $B$, si dice la *tensione* o *differenza di potenziale* (d.d.p.) come la differenza del potenziale elettrico tra il punto $B$ e $A$;
> $$
> \Delta V = V_B - V_A
> $$

#Definizione 
> [!def] intensità di corrente
> Supponiamo di sapere che in un *certo punto dello spazio* passi un quantitativo $q$ di cariche sotto un certo arco di tempo $t$; si chiama l'intensità di corrente come il rapporto
> $$
> i := \frac{q}{t}
> $$

#Osservazione 
> [!rmk] collegamento con l'analisi matematica
> Analogamente al concetto della *velocità media*, possiamo considerare l'incremento della carica $\text{d}q$ e del tempo $\text{d}t$ e calcolare la *derivata* della corrente, ottenendo così l'intensità.

#Definizione 
> [!thm] calcolare la potenza conoscendo la tensione e l'intensità di corrente
> Per calcolare la *potenza* (ovvero il quantitativo di energia speso per un periodo di tempo) conoscendo solo la tensione e l'intensità di corrente, è sufficiente fare il seguente calcolo
> $$
> P = V \cdot i
> $$
> Si può giustificare questo risultato sotto un punto di vista dimensionale.

#Definizione 
> [!def] circuito elettrico
> Per *circuito elettrico* si intende un qualsiasi schema con dei *componenti elettrici* connessi tra di loro, di cui sono dotati di alcuni dati: tra cui la tensione, l'intensità di corrente e altre misure specifiche per ogni componente.

#Definizione 
> [!def] resistore, resistenza
> Per *resistore* si intende un componente del circuito elettrico che "fa muovere le cariche" secondo le leggi di Ohm, ovvero imponendo una certa *"resistenza"* (una grandezza scalare). La resistenza si misura in *Ohm* ($[\Omega]$)

#Teorema 
> [!thm] le leggi di Ohm
> 1. *Rapporto tra intensità, resistenza e tensione*
> $$
> V = Ri
> $$
> 2. *"Si calcola la resistenza di un filo elettrico secondo la seguente formula"*
> $$R=\rho \frac{l}{A}$$
> dove $\rho$ è un parametro che dipende dal materiale (e in particolare dalla temperatura! infatti $\rho = \rho_0(1+\alpha \Delta T)$), $l$ la lunghezza del filo e $A$ la superficie dell'area della base.

#Teorema 
> [!thm] le resistenze in serie e in parallelo
> Per calcolare la *resistenza equivalente* per più *resistenze* poste in *serie* (ovvero una dopo l'altra) o in *parallelo* (ovvero una sopra/sotto l'altra), si usano rispettivamente le seguenti formule:
> $$
> \begin{align}
> R_T &= R_1+\ldots+R_n \\
> \frac{1}{R_T} &= \frac{1}{R_1}+\ldots+\frac{1}{R_n}
> \end{align}
> $$

#Definizione 
> [!def] condensatore a facce piane, capacità
> Definiamo un *condensatore a facce piane* come un componente del circuito elettrico formato da due *piastre conduttive* (armature), separate da un *dielettrico* (sostanza non conduttiva): il senso di questo componente elettrico è quello di *"accumulare cariche positive da un lato, negative dall'altro e mantenerle separate per generare un campo elettrico o immagazzinare dell'energia elettrica"*.
> 
> Definiamo la *capacità* come quella misura per cui un condensatore è in grado di *"accumulare"* una certa quantità di carica, proporzionale alla tensione.
> $$
> C = \frac{Q}{V}
> $$
> Da un punto di vista macroscopico, si calcola la capacità con
> $$
> C = \varepsilon_0 \frac{S}{d}
> $$
> dove $S$ è la superficie delle piastre, $d$ la distanza tra queste.

#Teorema 
> [!thm] calcolare l'energia immagazzinata in un condensatore
> Per calcolare l'energia immagazzinata in un condensatore si usa la seguente formula:
> $$
> E = \frac{1}{2}CV^2
> $$

#Teorema 
> [!thm] composizione dei condensatori in serie e in parallelo
> Per calcolare la *capacità equivalente* di più condensatori, disposti in *serie* o in *parallelo* si usano le seguenti formule:
> $$
> \begin{align} \text{In serie}:& \ \frac{1}{C_T} = \sum^n_{i = \min \mathbb N}\frac{1}{C_i}\\  \text{In parallelo}: & \ C_T = \sum^n C\end{align}
> $$

#Definizione 
> [!def] circuito RC
> Si dice un *circuito RC* un qualsiasi circuito che contiene un *resistore* e un *condensatore*.

#Proposizione 
> [!rmk] la carica e scarica di un circuito RC
> Supponiamo di porre una leva in un circuito RC, in particolare *prima della resistenza*.
> 
> Ora immaginiamo che la batteria si carica, con un certo quantitativo di $V$. Adesso chiudiamo il circuito, permettendo alle cariche di muoversi: pertanto si carica il condensatore C finché questa non viene caricata completamente.
> 
> Per studiare il *comportamento* (o l'andamento) della corrente o della tensione in funzione del tempo, sarebbe necessario risolvere un'*equazione differenziale*: si limita dunque a riportare la seguente formula che descrive la tensione di un condensatore inizialmente vuoto:
> $$
> V_C(t)=V(1-e^{-\frac{t}{\tau}})
> $$
> dove $\tau$ è la costante del tempo $\tau=RC\ \text{[s]}$. Tradizionalmente si considera il condensatore carico quando $t = 3\tau$.

- - -
# 7. Elettromagnetismo
*ARGOMENTI: Definizione di campo magnetico. Convenzione di rappresentazione dei vettori 3D sul piano 2D. Forza di Lorentz sulle cariche nel campo magnetico, regola della mano destra per determinare il verso di un prodotto vettoriale. Legge di Biot-Savart per determinare il campo magnetico determinato dalla corrente di elettricità. Interazione magnetica tra due fili di corrente. Cenni alle equazioni di Maxwell, onde elettromagnetiche.*

#Definizione 
> [!def] il campo magnetico
> Si definisce il *campo magnetico* come un campo vettoriale su $\mathbb{R}^3$, in particolare un *campo vettoriale*, per cui le cariche $q$ subiscono un certo quantitativo di forza.
> Si denota un campo magnetico con $B$ o $\vec{B}$, per delineare la sua natura vettoriale.

#Osservazione 
> [!rmk] convenzione di rappresentazione dei 3D campi vettoriali
> Per rappresentare una freccia a tre dimensioni su un piano a due dimensioni, usiamo la seguente convenzione: supponendo di poter "vedere" solo le direzioni di *"sopra"* e *"sotto"*, rappresentiamo la *"profondità"* come il seguente.
> Se va verso *"fuori"*, ovvero dal nostro punto di vista al piano, rappresentiamo questo verso come una croce.
> Se invece va *"dentro"*, ovvero dal piano al nostro punto di vista, allora la rappresentiamo come un semplice punto.
> 
> Da notare che, questa convenzione vuole *"imitare"* le frecce dei vettori in $\mathbb{R}^3$.

#Teorema 
> [!thm] forza di Lorentz
> Per calcolare la forza subita dal campo magnetico $B$ su una qualsiasi carica $q$ che viaggia secondo una direzione $v$, si usa la seguente formula:
> $$
> F_B = q(v \times B)
> $$
> dove $\times$ denota il *prodotto vettoriale*.

#Osservazione 
> [!rmk] formula per la forza di una carica completata
> Ora possiamo *"completare"* la formula per calcolare la forza subita su una carica, che è come segue.
> $$
> F = q(E + v \times B)
> $$

#Proposizione 
> [!prp] la regola della mano destra
> Per calcolare il *verso* di un vettore risultante da un prodotto scalare, si usa la c.d. *"regola della mano destra"*: ovvero si prende la mano destra, e si estende l'*indice*, che rappresenta il vettore $v_1$. Dopodiché si estende il *dito medio*, che rappresenta il vettore $v_2$.
> Infine si estende il *pollice*, che è il verso del prodotto vettoriale $v_1 \times v_2$.
> 
> Nota bene: la regola vale lo stesso sostituendo l'*indice* col *pollice*, il *dito medio* con l'*indice* e il *pollice* col *dito medio*. Questo è dovuto alle proprietà del *prodotto vettoriale*.

#Teorema 
> [!thm] legge di Biot-Savart
> Un filo di corrente $i$ genera un campo magnetico $B$, quantificabile come il seguente.
> $$
> B = \frac{\mu_0i}{2\pi r}
> $$
> Questo risultato è verificabile sperimentalmente, misurando la forza di una carica subita in prossimità di un filo percorso da corrente. Infatti, si tiene conto anche del fatto che in questo caso *le cariche elettriche* si allunano, allunando così la forza elettrica. 
> 
> Il verso del campo magnetico si determina con la *regola del pollice destro*, ovvero prendendo il *pollice* come la direzione della corrente $i$ e *"chiudendo"* la mano con un gesto di rotazione: questa rotazione è proprio il verso di $B$.

#Osservazione 
> [!rmk] interazione magnetica tra due fili di corrente
> Ora prendiamo due fili attraversati dalla corrente $i_1$, $i_2$.
> Troviamo che a seconda dei *versi* delle correnti, questi fili subiscono un'*interazione magnetica*.
> 
> Per dimostrare bene questa cosa, bisogna considerare una carica all'interno di uno dei fili, poi calcolare la sua *forza di Lorentz* subita da entrambi campi magnetici.
> 
> Supponendo che le direzioni delle correnti siano *concorde*, si avrebbe una forza di *attrazione*.
> Altrimenti, nel caso che le direzioni delle correnti siano *discorse*, si avrebbe una forza di *repulsione*.
> 
> Ora prendiamo più fili di corrente (con lo stesso verso) e li arrotoliamo. Dopodiché li mettiamo assieme, formando così un *solenoide*.
> Supponiamo di avere due *solenoidi*: si osserva che se questi due solenoidi hanno la stessa direzione (come ad esempio da *"sinistra a destra"*), questi si attraggono. Altrimenti, si respingono.
> 
> Questo vi sembra familiare? Ebbene sì, questo funziona esattamente come una *calamita*, con un *polo nord* "**N**" da cui si ha la *"sorgente"* del campo vettoriale $B$ e il *polo sud* "**S**" da cui si ha il *"pozzo"* di $B$.

#Teorema 
> [!thm] le Equazioni di Maxwell, cenni
> Le *equazioni di Maxwell* sono le quattro equazioni riassuntive dell'*elettromagnetismo*.
> 
> Queste equazioni sono le seguenti: il *teorema di Gauß* per il campo elettrico e magnetico, la *legge di Faraday-Neumann-Lenz*, la *legge di Ampère-Maxwell*. 
> 
> In un linguaggio matematico, sono le seguenti
> $$
> \begin{gather}
> \Phi(\vec E) = \frac{\sum q}{\varepsilon_0} \\
> \Phi(\vec B) = 0 \\
> \Gamma(\vec E) = -\frac{d\Phi(\vec B)}{dt}\\
> \Gamma(\vec B) = \mu_0 i + \mu_0\varepsilon_0 \frac{d\Phi(\vec E)}{dt}
> \end{gather}
> $$
> Dove $\Phi(x)$, $\Gamma(x)$ rappresentano il *flusso* e la *circuitazione* per un campo vettoriale $x$.
>
>Introducendo un formalismo matematico ancora più articolato (circa da livello di *Analisi Matematica II*), possiamo esprimere le medesime equazioni in *forma integrale* e *differenziale*. 
>$$
>\begin{gather}
>\oint_A \vec E \cdot d \vec A = \frac{q}{\varepsilon_0}; \nabla \cdot \vec E = \frac{\rho}{\varepsilon_0} \\
>\oint_A \vec B \cdot d \vec A = 0; \nabla \cdot \vec B = 0 \\
>\oint_\gamma \vec E \cdot d \vec l = -\frac{d\Phi(\vec B)}{dt}; \nabla \times \vec E = -\frac{\partial \vec B}{\partial t}\\
>\oint_\gamma \vec B \cdot d \vec l = \mu_0(i_c+i_s); \nabla \times \vec B = \mu_0(\vec{j} + \frac{\partial \vec E}{\partial t})
>\end{gather}
>$$
> 
> In parole, queste equazioni esprimono i seguenti concetti.
> 
> *Teorema di Gauß*. Prendendo un campo elettrico, possiamo prendere il suo flusso per una superficie gaussiana ed è può essere un flusso del tipo *entrante* o *uscente* (pozzo o sorgente). Prendendo invece un campo elettrico ed una superficie *chiusa*, allora il flusso è nullo: in parole povere, il campo magnetico ha sempre una forma *solenoidale*, e non esistono i *monopoli magnetici* ([scientificamente ancora una questiona aperta](https://it.wikipedia.org/wiki/Monopolo_magnetico)).
> 
> *Teorema di Faraday-Neumann-Lenz*. Con un cambiamento del *campo magnetico* su un intervallo del tempo, si genera un *campo elettrico* a forma *solenoidale*. Ovvero, dal campo magnetico si *induce* una forza elettrica, di conseguenza della tensione per una carica (detta in termini tecnici *"f.e.m. indotta"*).
> 
> *Teorema di Maxwell-Ampere*. Con la corrente o con una variazione del *campo elettrico* sul tempo, si genera in ogni caso un *campo magnetico* di forma *solenoidale*.

#Corollario 
> [!rmk] le onde elettromagnetiche
> Da notare che da queste quattro equazioni (in particolare le ultime due) possiamo spiegare l'origine delle *onde elettromagnetiche*.
> 
> Prendiamo un qualsiasi filo di corrente: da qui nasce un campo magnetico, per *la legge di Ampère-Maxwell*. Quindi c'è una variazione del campo magnetico. Ma allora, per la legge di *Faraday-Neumann-Lenz*, si ha una forza elettromotrice indotta. Ovvero un'ulteriore variazione del campo elettrico. 
> 
> Ripetendo così l'iterazione, si ha un'effetto di *propagazione* di questi campi di forze sul vuoto, comportando come un'*onda*. Infatti, quest'onda è proprio la c.d. *"onda elettromagnetica"* che viaggia nel vuoto, alla velocità della luce $c$.

- - -
# 8. Relatività
*ARGOMENTI: Velocità della luce come invariante, composizione relativistica delle velocità (trasformazioni di Lorentz), conseguenze della relatività (contrazione dello spazio e dilatazione del tempo).*

#Definizione 
> [!def] la velocità della luce
> Definiamo la *velocità della luce* come quella velocità che viaggia la luce, un'onda elettromagnetica particolare.
> In particolare si vedrà che la velocità della luce nel vuoto è una costante.
> $$
> c = 299 \ 792\  458\  \text{m/s} \approx 3 \cdot 10^8 \ \text{m/s}
> $$

#Teorema 
> [!thm] i postulati della relatività ristretta
> Riportiamo i *postulati della relatività ristretta* (o della relatività speciale), direttamente dalle parole del fisico noto *Albert Einstein*.
> 
> 1. *Il principio di relatività* - *"Tutte le leggi della fisica sono le stesse in tutti i sistemi di riferimento inerziali"*
> Qui Einstein vuole estendere la validità delle leggi in un riferimento inerziale (ovvero senza considerare l'accelerazione) in tutti gli ambiti, dalla dinamica all'elettromagnetismo; l'intenzione di questo postulato è proprio quello di voler trovare delle leggi *universalmente valide*, come voleva il scienziato *Galileo Galilei*.
> 
> 2. *La costanza della velocità della luce* - *"La velocità della luce nel vuoto ha lo stesso valore, $c=3.00 \times 10^8 \text{ m/s}$, in tutti i sistemi di riferimento inerziali, indipendentemente dalla velocità dell'osservatore o dalla velocità sorgente che emette la luce"*
> Notare che sebbene questo postulato sembri un'assurdo, in realtà questa non è altro che una conseguenza del principio di relatività: Einstein vuole estendere la *veridicità universalmente valida* della velocità della luce.

#Osservazione 
> [!rmk] la relatività speciale è un perfezionamento alla dinamica newtoniana
> Citando ulteriori parole del fisico A. Einstein$^{(1)}$, si trova che la *teoria della relatività* è una semplice estensione della meccanica newtoniana: oppure, in un'altra ottica, la meccanica newtoniana è una *approssimazione* della teoria di Einstein, dato che in quest'ultimo modello non vengono considerati le velocità vicine alla luce $c$.
> 
> Come vedremo, con la teoria della relatività speciale avverranno dei fenomeni piuttosto bizzarri e apparentemente controintuitivi.
> 
> $^{(1)}$: *"La teoria della relatività sorse dalla necessità di sanare serie e profonde contraddizioni nella vecchia teoria da cui sembrava non ci fosse via d'uscita. La forza della nuova teoria sta nella consistenza interna e nella semplicità con cui risolve tutte queste difficoltà, usando solo alcune ipotesi molte convincenti [...]"* (A. Einstein e L. Infeld, The Evolution of Physics, New York, Simon and Schuster, 1961, trad. it: L'evoluzione della fisica, B. Boringhieri)

#Corollario 
> [!cor] la composizione relativistica della velocità
> Supponiamo che un corpo $A$ si sta muovendo ad una velocità $v_1$, in *riferimento* al corpo $B$. 
> Adesso supponiamo che il corpo $B$ si sta muovendo ad una velocità $v_2$, in *riferimento* all'*osservatore esterno*.
> Allora per calcolare la velocità del corpo $A$ in riferimento all'osservatore esterno si usa la seguente formula:
> $$
> v_1 \oplus v_2 := \frac{v_1+v_2}{1+\frac{v_1v_2}{c^2}}
> $$
> Si può considerare il numero
> $$
> \frac{v_1v_2}{c^2}
> $$
> come un *coefficiente al variare in* $[-1, 1]$.

#Definizione 
> [!def] coefficiente gamma
> Si definisce il coefficiente gamma come la seguente funzione al variare in $[0, c]$.
> $$
> \gamma := \sqrt{1-\frac{v^2}{c^2}}
> $$
> Notare che il coefficiente gamma è sempre un numero al variare in $[0, 1]$.
> Grafico: https://www.desmos.com/calculator/grjx6k0vmq
> <iframe src="https://www.desmos.com/calculator/grjx6k0vmq?embed" width="500" height="500" style="border: 1px solid #ccc" frameborder=0></iframe>

#Corollario 
> [!cor] la dilatazione del tempo
> Un oggetto si sta muovendo alla velocità $v$ per l'osservatore esterno. Supponendo un incremento del tempo per l'*osservatore esterno* $\Delta t$, l'incremento del tempo per l'oggetto in moto (relativo all'osservatore esterno!) è maggiore o uguale a $\Delta t$ ed si calcola come il seguente:
> $$
> \Delta t' = \frac{\Delta t}{\gamma}
> $$

#Corollario 
> [!cor] la contrazione delle lunghezze
> Un oggetto di lunghezza $s$ (misurata in quiete) si muove ad una velocità $v$ rispetto all'*osservatore esterno*.
> Allora la lunghezza di quest'oggetto misurata dall'*osservatore esterno* è minore o uguale ad $s$ e si calcola come il seguente:
> $$
> s' = \gamma s
> $$
