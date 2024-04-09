---
data: 2024-03-24
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Il Piano Inclinato
tipologia: appunti
stato: "0"
capitolo: Dinamica
---
- - -
*Caso specifico della dinamica: il piano inclinato.*
- - -
# 0. Voci Correlate
- [[Definizione di Massa e di Forza]]
- [[Forza Peso e Forza Normale]]
- [[Attrito Statico e Dinamico]]
- [[Diagramma di Corpo Libero]]
- [[Funzioni trigonometriche]]
# 1. Il Piano Inclinato senza Attrito
#Osservazione 
> [!rmk] il piano inclinato, osservazione preliminare
> Vogliamo studiare il *piano inclinato*. Ovvero, abbiamo un *blocco* con massa $m$ su un *piano inclinato* (*figura 1.1.*). Prima di modellizzare questa situazione, facciamo delle considerazioni preliminari.
> 
> Innanzitutto ci chiediamo *cosa vogliamo sapere*: supponiamo di conoscere l'angolo $\theta$ dell'angolo, la massa $m$ e l'accelerazione gravitazionale $\vec{g}$. Allora, è naturale chiederci *come calcolare* l'*accelerazione* parallela al piano $|\vec{a}|$ della forza risultante (che non è nulla) e la *forza normale* $|\vec{N}|$.
> 
> Adesso pensiamo ai casi limiti. Se $\theta=0$, abbiamo un *piano perfettamente normale*; quindi l'accelerazione è nulla, invece la forza normale è massimale. Al contrario abbiamo $\theta=\frac{\pi}{2}$; poiché in questo caso si ha una *caduta libera*, la *forza normale* è non-esistente (se si assume di ignorare forze di attrito).
> Pertanto, possiamo concludere di avere qualcosa a che fare con le *funzioni trigonometriche* $\sin$ e/o $\cos$ ([[Funzioni trigonometriche#^dd4b35|1]]).
> 
> Disegniamo adesso il *diagramma del corpo libero* (*figura 1.2.*) ([[Diagramma di Corpo Libero#^e5976d|2]]). Per procedere, bisognerà effettuare delle *scelte nel sistema di riferimento*.

^1f4f59

**FIGURA 1.1.** (*Situazione preliminare*)
![[Pasted image 20240324165756.png]]

**FIGURA 1.2.** (*Diagramma di corpo libero*)
![[Pasted image 20240324170508.png]]

#Proposizione 
> [!prp] ver. 1
> Osserviamo che $\vec{a}$ è ortogonale a $\vec{N}$.
> 
> Scegliamo il seguente sistema di riferimento: invece di scegliere la base standard $\mathcal{E}^2=(\hat{i}, \hat{j})$, facciamo la seguente scelta. Prendiamo $\hat{i}'$ come l'asse *parallela* al vettore $\vec{a}$ e prendiamo $\hat{j}'$ come l'asse *parallela* alla normale $\vec{N}$. Ovviamente questi devono essere versori quindi devono avere norma unitaria e avere il prodotto scalare nullo.
> Inoltre, richiamando la definizione di prodotto scalare ho
> $$
> \hat{j} \cdot \hat{j}' = \cos \theta
> $$
> e
> $$
> \hat{j} \cdot \hat{i}' = \sin \theta
> $$
> 
> Adesso procediamo con la nostra modellizzazione; le leggi della fisica valgono lo stesso.
> Scomponiamo le forze in vettori; ovvero con
> $$
> \vec{a}=a_x \hat{i}+a_y\hat{j}=\vec{a} \hat{i}'
> $$
> e 
> $$
> \vec{N}=N_x\hat{i}+N_y\hat{j}=\vec{N}\hat{j}'
> $$
> Usando la *seconda legge di Newton* ho
> $$
> \vec{F}_g + \vec{N}=m\vec{a}
> $$
> Ricordandomi che posso effettuare il *cambiamento di base* moltiplicando una qualsiasi forza con i versori $\hat{i}'$ o $\hat{j}'$, ho le coordinate della forza risultante $\sum \vec{F}$
> $$
> \sum F \to \left\{ \begin{align} & \hat{i}' : \vec{F}_g \cdot \hat{i}' = -mg\sin \theta = m \vec{a} \\ &\hat{j}': \vec{F}_g \cdot \hat{j}' + N = -mg \cos \theta + N = 0 \end{align} \right. 
> $$
> (*la componente $\hat{j}'$ è nulla per vincolo geometrico; infatti il corpo non può "cadere o salire sotto o sopra il piano"*)
> Infine, ottengo i valori
> $$
> \boxed{
> \begin{gather}
> \vec{a}= -g \sin \theta \cdot \hat{i}'
>\\
> \vec{N} = mg \cos \theta \cdot \hat{j}'
> \end{gather}}
> $$
> che sono sufficienti per fornire il *modulo delle forze*.

#Proposizione 
> [!prp] ver 2.
> Omessa (materiale disponibile su Moodle)
