---
data: 2024-03-24
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Applicazioni della Dinamica
tipologia: appunti
stato: "1"
capitolo: Dinamica
---
- - -
*Applicazioni della dinamica a situazioni realistiche: distanza di frenatura; angolo critico su una superficie angolata; ...*
- - -
# 0. Voci correlate
- [[Definizione di Massa e di Forza]]
- [[Principi della Dinamica]]
- [[Attrito Statico e Dinamico]]
- [[Resistenza dei Fluidi]]
- [[Forza Elastica]]
- [[Forza Gravitazionale]]
- [[Forza Elettromagnetica]]
# 1. Distanza di Frenatura (attrito dinamico)
#Osservazione 
> [!rmk] la distanza di frenatura dato l'attrito
> Precedentemente siamo riusciti a calcolare la *distanza di frenatura* di un'automobile, data una velocità iniziale $v_0$ e un'accelerazione negativa ([[Moto Uniformemente Accelerato#^4b82f4|1]]).
> Adesso generalizziamo questa situazione con l'attrito.
> 
> Prendiamo le componenti della forza di un'automobile in movimento:
> $$
> \sum \vec{F} = m \vec{a} \implies \vec{F}_g + \vec{N} + \vec{F}_d = m \vec{a}
> $$
> Separando le forze per componenti, abbiamo che
> $$
> \left\{ \begin{align} &\hat{j}: -mg =N \\ &\hat{i}: \vec{F}_d = \mu_d N = - m\mu_dg = m a_x \implies -\mu_d g = a_x \end{align}\right.
> $$
> abbiamo ottenuto che $a_x = -\mu_d g$. Adesso, richiamo la formula per lo scarto dei quadrati delle velocità ([[Moto Uniformemente Accelerato#^0eb22d|2]]):
> $$
> v^2-v_0^2 = 2a(x-x_0)
> $$
> Allora, dato che $v=0$ (la velocità finale è nulla) segue che abbiamo
> $$
> a_x = -\frac{v_0^2}{2d}
> $$
> Pertanto ottenere il risultato finale
> $$
> \frac{v_0^2}{2d}=\mu_d g \implies \boxed{d = \frac{v_0^2}{2g\mu_d }}
> $$
> Da notare che anche con l'attrito la *distanza* aumenta con un'andamento quadratico in funzione della velocità; questo è uno dei tanti motivi per imporre i *limiti di velocità*.

# 2. Angolo critico di un oggetto sul piano inclinato (attrito statico)
#Osservazione 
> [!rmk] l'angolo critico
> Prendiamo un oggetto su un piano inclinato ([[Il Piano Inclinato#^1f4f59|1]]). Considerandoci l'attrito, la forza attrito cambia al variare dell'angolazione $\theta$; esiste un certo *"angolo critico"* $\theta_c$ tale che l'accelerazione $|\vec{a}|$ diventa sufficientemente grande per far spostare l'oggetto, facendo attivare l'*attrito dinamico*.
> 
> Vogliamo determinare tale $\theta_c$ al variare del coefficiente $\mu_s$ ([[Attrito Statico e Dinamico#^ff0cbd|2]]). Innanzitutto prendiamo la prima legge di Newton, per cui quando l'oggetto è fermo abbiamo che la somma di forze è
> $$
> \vec{F}_s + \vec{N}+m \vec{g} = 0 
> $$
> Adesso prendiamo il modulo di $|\vec{F}_s|$;
> $$
> \left|\vec{F}_s\right| = mg \sin \theta \leq \mu_s N = \mu_s mg \cos \theta
> $$
> Allora otteniamo immediatamente il risultato
> $$
> \frac{\sin \theta}{\cos \theta} \leq \mu_s \implies \tan\theta \leq \mu_s
> $$
> (*Nota bene: il coefficiente $\mu_s$ NON rientra nella definizione dell'attrito, bensì è semplicemente un "valore limite"*)
> Quindi sappiamo che l'angolo massimale $\theta_c$ che soddisfi l'equazione sopra è
> $$
> \boxed{\theta_c = \arctan \mu_s }
> $$

#Osservazione 
> [!rmk] metodo sperimentale per misurare l'attrito statico
> Possiamo usare l'equazione sopra *"al contrario"*, ovvero sapendo l'angolo determiniamo il coefficiente $\mu_s$.

# 3. Angolo stabile del drone (flusso laminare)
#Osservazione 
> [!rmk] l'angolo stabile di un drone
> Supponiamo di avere un *drone* come nella *figura 3.1.*. Supponiamo di avere il *flusso laminare* ([[Resistenza dei Fluidi#^c7aa98|1]]). Allora vogliamo conoscere l'angolo $\theta$ tale che questo drone possa muoversi con una *velocità costante* $v$.
> 
> Disegniamo prima di tutto il *diagramma di corpo libero*, che è come nella *figura 3.2.*. Adesso, usando la seconda e la prima legge di Newton, ricaviamo che la forza risultante è *nulla*. Ovvero,
> $$
> \sum \vec{F} = \vec{F}_s + \vec{F}_g + \vec{F}_R = 0
> $$
> Prendendo le singole componenti, abbiamo
> $$
> \left\{ \begin{align}& \hat{i} : -bv + \sin \theta \left|\vec{F}_s \right| = 0 \\ &\hat{j}: -mg+ \cos \theta \left|\vec{F}_s\right| = 0 \end{align}\right.
> $$
> Allora abbiamo
> $$
> \tan \theta = \frac{bv}{mg}
> $$
> dandoci il risultato finale
> $$
> \boxed{\theta = \arctan \left(\frac{bv}{mg}\right)}
> $$

**FIGURA 3.1.** (*Situazione iniziale*)
![[Pasted image 20240325171813.png]]

**FIGURA 3.2.** (*Diagramma di corpo libero*)
![[Pasted image 20240325171830.png]]

# 4. Velocità terminale di un paracadutista (flusso turbolente)
#Osservazione 
> [!rmk] la velocità terminale di un oggetto in caduta libera
> Riprendiamo il problema dell'oggetto in *caduta libera* ([[Caduta Libera e Moto del Proiettile#^066799|1]]). Adesso consideriamo la *resistenza dell'aria*, in particolare con un *flusso turbolento* ([[Resistenza dei Fluidi#^20c98f|2]]).
> 
> Allora, sapendo che ad un certo punto l'oggetto si muove con una *velocità costante* (detta *velocità terminale*), abbiamo dunque accelerazione $\vec{a}$ nulla. Possiamo usare i principi della dinamica, per cui
> $$
> \sum \vec{F} = \vec{F}_g + \vec{F}_R = 0 \implies \vec{F}_R = -\vec{F}_g
> $$
> Allora da questo segue che
> $$
> \begin{align}
> \frac{1}{2}\rho A C_d v^2 &= mg \\
> \end{align}
> $$
> che ci dà il risultato finale
> $$
> \boxed{v = \sqrt{\frac{2mg}{\rho A C_D} } }
> $$

#Osservazione 
> [!rmk] la dipendenza dalla massa
> Qui osserviamo che, a differenza dall'attrito statico e dinamico, abbiamo un fattore che *dipende* dalla massa $m$.

# 5. Strada inclinata in curva (forza centripeta)
#Osservazione 
> [!rmk] strada inclinata in curva
> Supponiamo che una *strada* sia *inclinata in curva*, con un raggio $R$ e un'angolazione $\theta$ (*figura 5.1.*). Conoscendo il raggio $R$ e la velocità $v$ dell'auto, vogliamo conoscere l'angolo $\theta$.
> 
> Prendendo un pezzo della curva e disegnandoci il diagramma di corpo libero dell'auto sulla curva (*figura 5.2.*), otteniamo che
> $$
> \left\{\begin{align}&\hat{i}: N \sin \theta = \frac{mv^2}{R} \\ &\hat{j}: N \cos \theta = mg\end{align} \right.
> $$
> Allora abbiamo
> $$
> \boxed{\tan \theta = \frac{v^2}{Rg} }
> $$
> che è il risultato desiderato.

**FIGURA 5.1.** (*Situazione iniziale*)
![[Pasted image 20240325183926.png]]

**FIGURA 5.2.** (*Diagramma di corpo libero*)
![[Pasted image 20240325183944.png]]

# 6. Spostamento di un oggetto su una molla al variare della massa (forza elastica)
#Osservazione 
>[!rmk] spostamento di un oggetto su una molla
>Supponiamo di avere una *molla*, su cui attacchiamo un'oggetto di *massa* $m$ con *estensione* $x$. Adesso attacco all'oggetto con un *altro oggetto* con massa $M$ (*figura 6.1.*). 
>
>L'estensione $x$ cambia o no? Se sì, qual è lo scarto $\Delta x$ tra la nuova posizione $x'$ e la posizione originaria $x$?
>
>Usiamo le nozioni sulla *forza elastica* per scoprire le risposte.
>Prima di tutto disegno il *diagramma del corpo libero* di entrambi i corpi, rappresentando il primo corpo come $1$ e il secondo come $2$; così scopriamo che
>$$
>\left\{\begin{align}&\vec{F}_{x1}+\vec{F}_{g1}=0 \\ &\vec{F}_{x2}+\vec{F}_{g2}=0 \end{align}\right. \implies kx=mg \land k(x+\Delta x)=(m+M)g
>$$
>Allora segue che
>$$
>\Delta x = \frac{Mg}{k}
>$$

**FIGURA 6.1.** (*Problema*)
![[Pasted image 20240402200937.png]]

# 7. Velocità necessaria per orbitare la terra (forza gravitazionale)
#Osservazione 
> [!rmk] superman che corre sulla terra
> Il supereroe *Superman* sta correndo attorno la terra con una velocità piuttosto alta (trascurando eventuali attriti). Vogliamo sapere la *velocità necessaria* per il supereroe per poter *orbitare la terra*, alzandosi un po' (quantità di spazio trascurabile a $0$).
> 
> L'unica forza di cui conosciamo è la *forza gravitazionale* data da
> $$
> F_g=G\frac{m\cdot m_T}{r_T^2}
> $$
> vogliamo far *coincidere* la *forza gravitazionale* con la *forza centripeta*. Sappiamo che quest'ultima è data da
> $$
> F_c = m\frac{v^2}{R}
> $$
> allora otteniamo la formula finale
> $$
> v=\sqrt{\frac{G m_T}{r_T} }=\sqrt{gr_T}
> $$
> in questo caso abbiamo $v \simeq 28 \ 000 \ \frac{\text{km} }{\text{h} }$.
> 
> Per calcolare il periodo dell'orbita basta considerare che $\omega = \frac{r_T}{v}$ e quindi
> $$
> T=\frac{2\pi}{\omega}=2\pi \frac{v}{r_T}=2\pi \sqrt{\frac{r_T}{g} } \simeq 84 \cdot 60 \ \text{s}
> $$

**FIGURA 7.1.** (*Problema*)
![[Pasted image 20240402212511.png]]

# 8. Elettrone sparato in un condensatore (forza elettrica)
#Osservazione 
> [!rmk] carica sparata verso un condensatore
> Supponiamo di *sparare* una *carica qualsiasi* $q$ ad una velocità $\vec{v}$, verso un *circuito elettrico* collegato ad un *condensatore a facce piane*, che a sua volta genera il campo elettrico $\vec{E}$ (in particolare dalla sua differenza di potenziale d.d.p.).
> 
> Vogliamo determinare la sua *accelerazione* al variare di $q$.
> 
> Prima di tutto prendiamo il *campo elettrico* in riferimento al solo versore $\hat{j}$ (dato che il campo elettrico prodotto da un condensatore punta solo ad un verso).
> $$
> \vec{E}=E \cdot \hat{j}
> $$
> Adesso prendiamo la *forza elettrica* della particella
> $$
> \vec{F}=q\vec{E} = m\vec{a}
> $$
> Allora abbiamo
> $$
> \boxed{\vec{a}=\frac{q}{m}\vec{E}}
> $$
> Ovvero
> $$
> a\cdot \hat{j} =\frac{qE}{m}\cdot \hat{j}
> $$
> Notiamo che la particella si comporta come il *moto di un proiettile* ([[Caduta Libera e Moto del Proiettile#^77ebe8|1]]).

**FIGURA 8.1.** (*La carica-proiettile*)
![[Pasted image 20240402220633.png]]
