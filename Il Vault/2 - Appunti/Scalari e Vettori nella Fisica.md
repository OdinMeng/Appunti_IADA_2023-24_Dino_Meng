---
data: 2024-03-09
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Scalari e Vettori nella Fisica
tipologia: appunti
stato: "1"
capitolo: Introduzione alla Fisica
---
- - -
*Fondamenta del calcolo vettoriale per la fisica: nozione di scalare, vettore, versore. Definizione di prodotto scalare, proprietà del prodotto scalare.*
- - -
# 1. Definizione di scalare e di vettore
**SCALARE.** Si definisce uno *scalare* come una *grandezza* specificata da un *numero* e da un'*unità*. Come esempi di *scalari* si hanno la *lunghezza* e la *massa*.
**VETTORE.** Si definisce un *vettore* come una *quantità* definita da *più valori* e *più medesime unità*. Alternativamente un *vettore* può essere caratterizzato da *un valore*, *una direzione* e *un verso*.

# 2. Vettori
**LA RAPPRESENTAZIONE DEI VETTORI.** Geometricamente si può rappresentare un *vettore sul piano* come una semplice *"freccia"*, che parte dall'origine e va verso ad un punto $(v_x, v_y, v_z)$ (*figura 2.1.*). Scriveremo dunque
$$
\vec{v}=(v_x, v_y, v_z)
$$
**LE DIFFERENZE DAI PUNTI.** Anche questa definizione dei vettori fa *assomigliare* i vettori ai *punti* sullo spazio, notiamo che comunque ci sono delle differenze: i vettori hanno più proprietà.
Ad esempio non si può definire una nozione di *lunghezza* per un punto; oppure non si può definire la *somma* per *due punti*.
**LE OPERAZIONI CON I VETTORI.** Possiamo definire le due operazioni per i vettori: scalamento e somma.
*Scalamento.* Si ha uno *"scalamento"* quando si tenta di moltiplicare uno scalare per un vettore. Quindi viene definita come
$$
a \cdot \vec{v} = (a v_x, av_y, av_z)
$$
Notiamo che se lo scalare $a$ è *adimensionale* (ovvero, se non munita di dimensioni) allora si ha una *compressione* o *allungamento* di $\vec{v}$. Particolarmente, se $a<0$ allora si ha un cambiamento nel *verso* del vettore.
*Somma tra i vettori.* Possiamo definire la somma tra due vettori con la *regola del parallelogrammo* oppure con la *regola punta-coda*. Matematicamente, la somma tra vettori viene definita come
$$
\vec{u}+\vec{v}=(u_x+v_x, u_y+v_y, u_z+v_z)
$$

**FIGURA 2.1.** (*Vettore in 3D*)
![[Pasted image 20240309151334.png]]

**FIGURA 2.2.** (*La regola del parallelogrammo*)
![[Pasted image 20240309151445.png]]

**MODULO E DIREZIONE.** Si definisce il *modulo* di un vettore come la sua *lunghezza geometrica*; la indichiamo come
$$|\vec{v}| = v$$
In termini delle componenti, si ha
$$
|\vec{v}|=\sqrt{\sum_i^N(v _i)^2}
$$

# 3. Versori
**VERSORE.** Definiamo un *versore* come un *vettore* che ha *modulo unitario*, ovvero tale che
$$
|\vec{n}|=1 \implies \frac{\vec{v}}{|v|}=\vec{n}, \forall \vec{v}
$$
I versori possono essere denotati anche come
$$
\vec{n} \to \hat{n}
$$
Ora vediamo che ci sono dei *versori particolarmente utili*.
**VERSORI STANDARD.** Definiamo i *"versori standard"* come
$$
\begin{cases}
\hat{i}=(1,0,0)\\
\hat{j}=(0,1,0)\\
\hat{k}=(0,0,1)
\end{cases}
$$
Vediamo che un *qualsiasi vettore* è espressione unica del tipo
$$
\vec{v}=(v_x, v_y, v_z)=v_x \hat{i}+v_y \hat{j}+v_z \hat{k}
$$
(questo risultato discende dallo studio dell'*Algebra Lineare*) ([[Definizione di Base#^128180]]).

# 4. Prodotto Scalare
**PRODOTTO SCALARE.** Definiamo il *prodotto scalare* come un'operazione che associa *due vettori* con *uno scalare*. Ovvero,
$$
\vec{u}\cdot \vec{v}:=\sum^N_{i=0}u_i v_i
$$
**OSSERVAZIONI.** Poniamo una serie di osservazioni su quest'operazione.
*Definizione del modulo.* Con questa operazione si può definire il *modulo* di un vettore in un altro modo. Infatti,
$$
|\vec{v}|=\sqrt{\vec{v} \cdot \vec{v}}
$$
*Ortonormalità dei versori.* Notiamo che i versori $\hat{i},\hat{j},\hat{k}$ sono *ortonormali*; ovvero che valgono
$$
\begin{cases}\hat{i}^2 = \hat{j}^2 = \hat{k}^2 = 1 \\ \hat i \cdot \hat j = \hat i \cdot \hat k = \ldots = \hat k \cdot \hat j = 0\end{cases}
$$
([[Ortogonalità e ortonormalità#^ac24ad]])
*Estrazione delle singole componenti.* Dato un vettore $\vec{v}$, possiamo estrarre un suo *singolo componente* moltiplicando per un versore. Ad esempio,
$$
v_x = \vec v \cdot \hat i ; v_y = \vec v \cdot \hat j; v_z = \vec v \cdot \hat k
$$
Questo sarà utile per effettuare il *cambiamento delle basi*.
*Legame con l'angolo.* Notiamo che se definiamo $\theta$ come l'angolo compreso tra $\vec{u}, \vec{v}$ allora il prodotto scalare diventa
$$
\vec{u} \cdot \vec{v} = |\vec{u}||\vec{v}|\cos\theta
$$
(per una dimostrazione vedere [[Norma, versore e angolo#^52f57f]])