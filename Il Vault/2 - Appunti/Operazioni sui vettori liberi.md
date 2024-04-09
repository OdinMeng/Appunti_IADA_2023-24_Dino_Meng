---
data: 2023-10-03
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Operazioni sui vettori liberi
tipologia: appunti
stato: "1"
---
*Operazioni sui vettori liberi: somma, scalamento; proprietà di queste operazioni, proprietà asssociativa.*
- - -
# DEF 1. Somma di due vettori liberi
Dati due [[Vettori Liberi]] $\vec{u}, \vec{v}$, definiamo la loro **somma** $\vec{u}+\vec{v}$ nella maniera seguente:
1. Si sceglie un rappresentante $\overrightarrow{AB}$ per $\vec{u}$ 
2. Per la **PROP. 2.1.** ([[Vettori Liberi]]), si può sempre scegliere un vettore applicato in $\vec{v}$ tale che il suo punto iniziale sia $B$, ovvero un vettore applicato $\overrightarrow{BC} \in \vec{v}$, ovvero $\vec{v} = [\overrightarrow{BC}]$.
3. Definiamo infine $$\vec{u}+\vec{v} := [\overrightarrow{AB}+\overrightarrow{BC}] = [\overrightarrow{AC}]$$
**PROP. 1.1.** Si sceglie arbitrariamente un rappresentante per $\vec{u}$; tuttavia secondo il passaggio 3. si nota che *indipendentemente* dal vettore scelto iniziale, si raggiunge sempre allo stesso risultato finale; ovvero la classe di equipollenza $[\overrightarrow{AC}]$
	**DIM.** Si vuole dimostrare che si raggiunge sempre allo stesso risultato finale, indipendentemente dal vettore iniziale scelto.
	Ripercorriamo i passaggi definiti in **DEF 3.1.** con delle leggere variazioni;
	1. Si scelgono due distinti rappresentanti per $\vec{u}$, ovvero $$\overrightarrow{AB}, \overrightarrow{A'B'} \in \vec{u};\overrightarrow{AB}\neq\overrightarrow{A'B'} $$
	2. Si scelgono i corrispettivi rappresentanti di $\vec{v}$, tali che i loro punti iniziali coincidano con i punti finali dei vettori-rappresentanti di $\vec{u}$;$$\overrightarrow{BC},\overrightarrow{B'C'} \in \vec{v}; \overrightarrow{BC}\neq\overrightarrow{B'C'} $$
	3. Ora, per definizione in **DEF 3.1.**, la somma di $\vec{u}+\vec{v}$ viene $$\vec{u}+\vec{v} = [\overrightarrow{AB}+\overrightarrow{BC}] = [\overrightarrow{A'B'}+\overrightarrow{B'C'}] \iff [\overrightarrow{AC}] = [\overrightarrow{A'C'}] = \vec{w} $$Da qui si evince che *indipendentemente* dai punti di applicazione $A$ e $A'$ scelti, si arriva **sempre** allo stesso risultato; ovvero il *vettore-risultante* $\vec{w}$.
		La definizione quindi è *ben posta*, ovvero *non* dipende dal rappresentante scelto.

**OSS 1.1.** Rigorosamente parlando, la *somma* è una [funzione](Funzioni.md), ovvero la si scrive come $$\begin{align}+ :&\space V_2 \times V_2 \longrightarrow V_2 \\ &\space (\vec{u}, \vec{v}) \mapsto \vec{u}+\vec{v}\end{align}$$ove $V_2$ rappresenta l'insieme dei vettori liberi.

**OSS 1.2.** Se definiamo il *vettore libero nullo* come $\vec{0} := [\overrightarrow{AA}]$, allora notiamo che questo comporta come il numero $0$ rispetto alla *somma in $\mathbb{R}$*. Infatti, $$\begin{align}&\vec{0}+\vec{v} = [\overrightarrow{AA}] + [\overrightarrow{AB}] = [\overrightarrow{AB}] = \vec{v} \\ &\vec{v}+\vec{0} = [\overrightarrow{AB}] + [\overrightarrow{BB}] = [\overrightarrow{AB}] = \vec{v} \end{align}$$
# DEF 2. Moltiplicazione di un vettore per uno scalare
Analogamente si definisce lo *scalamento* come l'operazione della moltiplicazione di un vettore per uno *scalare* (ovvero numero reale $\mathbb{R}$);
Se $\lambda \in \mathbb{R}$, $\vec{v} \in V_2$, allora possiamo definire $\lambda \cdot \vec{v}$;$$\vec{v} = [\overrightarrow{AB}] \implies\lambda\cdot\vec{v} := [\lambda \cdot\overrightarrow{AB}]$$Di cui $\lambda \cdot \overrightarrow{AB}$ è stata già definita in [[Vettori Liberi]] (**DEF 3.2.**).
**OSS 2.1.** Anche in questo caso la *moltiplicazione di un vettore per uno scalare* è una definizione *ben posta*.

**OSS 2.2.** Anche in questo caso la moltiplicazione di un vettore per uno scalare è una *funzione*, allora $$\begin{align}\cdot :&  \ \mathbb{R} \times V_2 \longrightarrow V_2 \\ & \ (\lambda, \vec{v}) \mapsto \lambda \cdot \vec{v}\end{align}$$
**OSS 2.3.** Si nota che $$1\cdot\vec{v} = \vec{v} $$
**ATTENZIONE!** La **moltiplicazione di un vettore per uno scalare** NON va confusa con il *prodotto scalare*; si trattano di due operazioni completamente diverse, in quanto con la moltiplicazione di un vettore per uno scalare si ottiene un altro vettore; invece per il *prodotto scalare* si ottiene un altro vettore.
# DEF 3. Proprietà delle operazioni sui vettori liberi
**OSS 3.1.** Si nota entrambe le operazioni $+$, $\cdot$ sono [suriettive](Funzioni.md) (**DEF 3.1.**), ovvero che a partire da due vettori è possibile raggiungere qualsiasi vettore; infatti se si considerano gli *elementi neutri* di queste operazioni (ovvero $0$ per $+$; $1$ per $\cdot$), possiamo prendere un qualsiasi rappresentante $\overrightarrow{AB}$ di $\vec{v}$ e metterli in funzione con questi elementi neutri, riotteniamo il medesimo vettore.

## 3.1. Proprietà della somma $+$
1. **PROPRIETA' ASSOCIATIVA.** $\forall \vec{u}, \vec{v}, \vec{w}$, $$(\vec{u}+\vec{v})+\vec{w} = \vec{u}+(\vec{v}+\vec{w})$$
2. **PROPRIETA' COMMUTATIVA.** $\forall \vec{u}, \vec{v}$, $$\vec{u}+\vec{v} = \vec{v}+\vec{u}$$
3. **L'ESISTENZA DELL'ELEMENTO NEUTRO.** $\forall \vec{v}$, $$\vec{0}+\vec{v}=\vec{v}+\vec{0}=\vec{v}$$
4. **L'ESISTENZA DELL'ELEMENTO OPPOSTO** $\forall \vec{v}, \exists \vec{w}:$ $$\vec{v}+\vec{w} = \vec{w}+\vec{v} = \vec{0}$$
	**OSS. 3.1.1.** Tale elemento $\vec{w}$ si denota con $-\vec{v}$ e definiamo la *sottrazione* $$\vec{v}+(-\vec{v}) := \vec{v}-\vec{v} = 0$$
	Se $\vec{v} = [\overrightarrow{AB}]$, allora $-\vec{v} = [\overrightarrow{BA}]$.

## 3.2. Proprietà dello scalamento
1. $\forall \vec{v}$, $$1 \cdot \vec{v} = \vec{v}$$
2. $\forall \vec{v}$, $$(-1)\cdot\vec{v} = -\vec{v}$$
3. $\forall \lambda, \mu \in \mathbb{R}$ e $\forall \vec{v}$, $$(\lambda\mu)\cdot\vec{v} = \lambda\cdot(\mu\cdot\vec{v})$$
	**OSS 3.2.1.** Notare che questa proprietà non è banale, al contrario di quello che si può pensare; infatti nella prima si definisce una singola operazione tra un reale $\gamma = \lambda\mu$ e un vettore $\vec{v}$, invece nella seconda si definiscono due moltiplicazioni tra uno reale e un vettore.

4. $\forall \lambda\mu\in\mathbb{R}$ e $\forall\vec{u},\vec{v}$, $$\begin{align}&1. \ (\lambda+\mu) \cdot\vec{v} = \lambda\vec{v}+\mu\vec{v}\\&2. \ \lambda\cdot(\vec{u}+\vec{v}) = \lambda\cdot\vec{u}+\lambda\cdot\vec{v}\end{align}$$ 