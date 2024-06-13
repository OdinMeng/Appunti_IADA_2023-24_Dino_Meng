---
data: 2024-05-15
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Microstati di un Sistema Termodinamico
tipologia: appunti
stato: "1"
capitolo: Termodinamica
---
- - -
*Considerazione preliminare per l'entropia: microstati di un sistema termodinamico. Visione probabilisitca dei microstati. Definizione di molteplicità di un sistema. Corollario: microstati dell'espansione libera di Joule.*
- - -
# 0. Voci correlate
- [[Espansione Libera di Joule]]
- [[Eventi Indipendenti]]
# 1. Problema Fondamentale
Per le considerazioni di questa pagina, poniamo il seguente problema.

**PROBLEMA.** (*Il demone di Maxwell*)
Supponiamo di avere una scatola con delle particelle dentro, e dividerla in due parti uguali, $V_1$ e $V_2$. Definiamo le seguenti configurazioni.
*Configurazione A.* Tutte le particelle si trovano nel volume $V_1$
*Configurazione B.* Tutte le particelle si trovano nel volume $V_2$
![[Pasted image 20240515173846.png|500]]
Qual è la probabilità di trovarsi la *configurazione A* e la *configurazione B*?

Prima di dare le risposte, definiamo le seguenti quantità
#Definizione 
**DEFINIZIONE.** (*Microstato, molteplicità*)
Si dice *microstato* l'insieme delle *posizioni* e delle *velocità* di un *sistema termodinamico*. 
Si dice *molteplicità* la somma di tutti i *microstati possibili* per un *sistema termodinamico*, e la si indica con $\Omega$.

# 2. Risposta Probabilistica
Una prima risposta è quella di dire che la collocazione delle *posizioni* e delle *velocità* sono tutte indipendenti. Allora si ha che sono esattamente uguali, dandoci
$$
p(A)=p(B)
$$
Tuttavia c'è un problema con questa risposta: sembra estremamente controintuitiva. Infatti ci sembra più naturale che la *seconda configurazione* sia più naturale della prima!
Questa risposta è quasi equivalente a dire che *"la probabilità di trovarsi $1,2,3,4,5,6$ al lotto è uguale a quella di trovarsi dei numeri qualsiasi"*.
![[Pasted image 20240515174446.png|500]]
C'è qualcosa che non stiamo considerando. Ovvero la *molteplicità*, la quantità degli microstati.

# 3. Risposta Termodinamico
Consideriamo questo problema da un *punto di vista termodinamico*. Prima di tutto formuliamo la *probabilità di una configurazione* $A_\ast$ come la quantità
$$
p(A_\ast)=\frac{1}{\Omega}
$$
Adesso prendiamo l'*espansione libera di Joule*. Partiamo da $V=V_1$ e la espandiamo a $V_1 \to V_2$. 
Consideriamo il caso in cui abbiamo *una sola particella*: chiamo $\Omega(1)$ la molteplicità iniziale in funzione del numero delle particelle, $\Omega_0$ la molteplicità per una particella in $V_1$ e $\Omega_0'(N)$ la molteplicità finale.
![[Pasted image 20240515180103.png]]
In questo caso abbiamo $\Omega_1 = \Omega_0$. Quando effettuiamo la trasformazione, abbiamo che la *molteplicità aumenta* proporzionalmente al rapporto di volume aumentato. Ovvero $\Omega_0 \to \frac{V_2}{V_1}\Omega_0$, dandoci
$$
\Omega_0'= \frac{V_2}{V_1}\Omega_0
$$
Adesso generalizzando su $N\in \mathbb N$, ho
$$
\Omega_N=\Omega_0^N \implies \Omega'_{0,N} = \left(\frac{V_2}{V_1}\Omega_0\right)^N
$$
Quindi infine abbiamo
$$
p(A)= \frac{1}{\Omega_N}, p(B)=\frac{1}{\Omega_{0}'}
$$
che ci dà il risultato finale
$$
\boxed{p(A)=\frac{1}{\Omega_0^N}\leq \underbracket{\left(\frac{V_2}{V_1}\right)^N}_{>1}\frac{1}{\Omega_0^N} = p(B) }
$$
Quindi con l'aumentare di $\Delta V$ (lo scarto tra i volumi), la possibilità di trovare $B$ diventa sempre più grande.

Adesso siamo pronti per dare l'idea dell'*entropia*