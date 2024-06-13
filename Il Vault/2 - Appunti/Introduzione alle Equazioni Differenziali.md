---
data: 2024-05-08
corso:
  - "[[Analisi Matematica II]]"
argomento: Introduzione alle Equazioni Differenziali
tipologia: appunti
stato: "1"
capitolo: Equazioni Differenziali
---
- - -
*Introduzione alle equazioni differenziali: discorso introduttivo (applicazioni pratiche). Esempio della dinamica delle popolazioni: modello di Malthus, modello di Vermulst (o logistico).*
- - -
# 1. Discorso Introduttivo
**LA MODELLISTICA CON LE EQUAZIONI DIFFERENZIALI.** Molti fenomeni sono *modellizzati* secondo le regole della *matematica*. In particolare le *equazioni differenziali*, che sono delle *equazioni funzionali che presentano delle relazioni tra la funzione e le sue derivate*. 
Infatti, alla soluzione di tali equazioni si può ricondurre lo *studio* di molti problemi *fisici e meccanici*: tutto riduce a risolvere *certe equazioni differenziali*. 
Ad esempio, con la *meccanica newtoniana* possiamo studiare il *moto di un qualsiasi sistema meccanico*, usando le leggi di Newton (per ulteriori approfondimenti vedere la pagina [[Kolmogorov Equazioni Differenziali]])
Adesso vediamo un *esempio biologico* (per altri esempi vedere la pagina [[Esempi di Equazioni Differenziali]]).

# 2. La Dinamica delle Popolazioni
Abbiamo una popolazione in un *ambiente isolato* e vogliamo capire la sua *dinamica* della *crescita*. I seguenti modelli descriveranno tale dinamica

#Esempio 
**MODELLO.** (*Di Malthus o modello geometrico*)
Supponiamo inoltre di avere *infinite risorse* e di chiamare $p(t)$ il numeri di *individui* per un istante tempo $t$. 
Allora abbiamo che $p(t)$ dipende *solamente* dal tasso di crescita: chiamiamo $\mu, \nu$ i tassi di *crescita* e di *mortalità*. Da ciò ricaviamo l'equazione per l'incremento
$$
p(t+\text{d}t)-p(t)=\mu p(t) \text{d}t - \nu p(t)\text{d}t
$$
Effettuando delle semplificazioni otteniamo l'equazione
$$
\frac{p(t+\text{d}t)-p(t)}{\text{d}t}=(\mu-\nu)p(t)
$$
passando per il limite $\text{d}t \to 0$, otteniamo l'equazione differenziale
$$
\boxed{p'(t)-(\mu-\nu)p(t)=0}
$$
da cui ricaviamo la soluzione
$$
\boxed{p(t)=e^{(\mu-\nu)t} }
$$
Ovvero ho il grafico
![[Pasted image 20240508173742.png]]

#Esempio 
**MODELLO.** (*Di Vermulst, o logistico*)
Supponiamo di avere invece delle *risorse limitate* (condizione più realistica, ma vedremo che complica di più le cose). Allora in questo caso ricaviamo l'equazione per l'incremento, tenendo conto degli individui precedenti $\varepsilon$.
$$
p(t+\text{d}t)+p(t)=(\mu+\nu)p(t)\text{d}t-\varepsilon p(t)p(t)\text{d}t
$$
Da cui ricaviamo, passando il limite per $\text{d}t \to 0$,
$$
\boxed{p'(t)-(\mu-\nu)p(t)-\varepsilon p^2(t)=0}
$$
In questo caso diventa più difficile dare una soluzione esplicita (che comunque esiste!), che ha il grafico di una *sigmoide*.
![[Pasted image 20240508174215.png]]

**Nota.** (*Approccio pratico*)
Da un lato possiamo *modellizzare* fenomeni mediante delle equazioni differenziali, *conoscendo* certi parametri.
Tuttavia rendiamo ben nota che esiste anche *un altro approccio*, quello contrario: assumo *vero* il modello e provo a stimare i *parametri* di $p(t)$ attuale per poi confrontarlo col modello (così da confermare che il modello sia effettivamente vero). Questo è stato fatto per l'*epidemia* del *COVID-19*.
