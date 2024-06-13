---
data: 2024-04-21
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Moto Armonico
tipologia: appunti
stato: "1"
capitolo: Oscillazioni
---
- - -
*Definizione di moto armonico. Corollari: la cinematica, la dinamica e l'energia del moto armonico.*
- - -
# 0. Voci correlate
- [[Velocità e Accelerazione di un Corpo Puntiforme]]
- [[Forza Elastica]]
- [[Energia Cinetica]]
- [[Energia Potenziale]]
- [[Conservazione dell'Energia]]
# 1. Definizione di Moto Armonico
**Preambolo.** Nella natura abbiamo molte *"cose che oscillano"*: parliamo di musica (infatti ambiamo le *onde d'aria* che *vibrano*), di casi classici come il *pendolo*, fino persino alla *elettronica*, col c.d. *circuito LC*.
Per studiare la natura di questi moti, partiamo dalla *"soluzione"*: ovvero la *definizione matematica* del moto armonico.

**Figura 1.1.** (*Circuito LC*)
![[circuito-lc.jpg]]

#Definizione 
> [!def] moto armonico
> Una *quantità fisica* che presenta un'equazione del tipo
> $$
> \boxed{ x(t)=\textcolor{RED}{A}\cos(\textcolor{GREEN}{\omega} t + \textcolor{BLUE}{\varphi})}
> $$
> (si può anche sostituire il coseno $\cos$ col seno $\sin$) si dice *"moto armonico"*. Componiamo le componenti di quest'equazione in ogni sua parte:
> 	-  $A$ si dice *"ampiezza"*; questo determina la *"estensione massima"* del moto armonico.
> 	- $\omega$ si dice *"pulsazione"*; attenzione a non confonderlo con la *frequenza*! Con la pulsazione si considera il *periodo* $2 \pi$. Infatti vale che $\omega = 2\pi f$ 
> 	- $\varphi$ si dice *"fase"*, che determina la *"posizione iniziale"* e rappresenta lo *spostamento* del moto ondulatorio nel tempo. Infatti vale che $\cos(\omega t + \phi)=\cos(\omega(t-t_0))$.
> 	- La quantità di tempo per cui partiamo da un punto $x(t_0)$ e arriviamo allo stesso punto $x(t_1)$ si dice *"periodo"* $T$.   
>
>   Graficamente ho la *figura 1.2.*.

**FIGURA 1.2.** (*Il moto oscillatorio*)
![[Pasted image 20240421215636.png]]

Adesso iniziamo ad applicare le *nozioni di fisica classica* su questo tipo di moto.

# 2. La Cinematica del Moto Armonico
Iniziamo dalla *cinematica*, derivando la *velocità* e l'*accelerazione* del moto oscillatorio. Inoltre faremo una nota sulla *"equazione differenziale caratteristica"* del moto oscillatorio.

#Corollario 
> [!cor] la cinematica del moto armonico
> Se $x(t)$ è un *moto oscillatorio* con i suoi dovuti coefficienti, allora vale che:
> i. La velocità del moto armonico è
> $$
> v(t)=-\omega A \sin(\omega t + \varphi)
> $$
> ii. L'accelerazione del moto armonico è
> $$
> a(t)=-\omega^2 A \cos(\omega t +\varphi)=-\omega^2 x(t)
> $$

#Osservazione 
> [!rmk] osservazione sull'accelerazione
> Notiamo che
> $$
> a(t)=-\omega^2x(t)
> $$
> è un'equazione differenziale.
> 
> Infatti *un modelli fisico qualsiasi* che presenta un'equazione differenziale del tipo
> $$
> \boxed{ f'' + \omega^2 f=0 }
> $$
> si dice che presenta un *"moto armonico"*.

# 3. La Dinamica del Moto Armonico
Adesso proseguiamo con le forze. Che la forza sia con te!

#Corollario 
> [!cor] la dinamica del moto armonico
> Si può rappresentare il *moto oscillatorio* nella dinamica col seguente *"modello tipico"*: la *forza elastica* rappresentata con la *legge di Hooke* ([[Forza Elastica#^890382|1]]).
> 
> Infatti qui abbiamo l'equazione differenziale
> $$
> \sum F \longrightarrow m a =-kx
> $$
> Da cui abbiamo i seguenti risultati.
> $$
> \boxed{ \begin{gather}a = -\frac{kx}{m} \\ \omega = \sqrt{\frac{k}{m} } \end{gather} }
> $$

**FIGURA 3.1.** (*Modello tipico del moto armonico*)
![[Pasted image 20240402195846.png|300]]

#Osservazione 
> [!rmk] la pulsazione è indipendente dall'ampiezza
> Notiamo che la formula
> $$
> \omega = \sqrt{\frac{k}{m} } 
> $$
> ci fa capire che la *pulsazione* $\omega$ è completamente indipendente dall'*ampiezza*. Questo è dovuto al fatto che abbiamo *modelli idealizzati*. 
> 
> Ad esempio, vedremo che per *modellizzare* pendoli prendiamo sempre piccoli angoli $\theta \to 0$. 

# 4. L'Energia del Moto Armonico
Per ultimo consideriamo l'*energia* del moto armonico.

#Corollario 
> [!cor] energia cinetica, potenziale e totale del moto armonico
> Supponiamo di avere un *moto armonico*, in assenza di *forze esterne* o *forze interne dissipative*. Allora vale che:
> i. L'energia potenziale associata $U$ è
> $$
> \boxed{U=\frac{1}{2}k\textcolor{RED}{x^2}=\frac{1}{2}kA^2 \cos^2(\omega t + \varphi)}
> $$
> ii. L'energia cinetica associata $K$ è
> $$
> \boxed {K=\frac{1}{2}m\textcolor{red}{v^2} = \frac{1}{2}m\omega^2 A^2 \sin^2 (\omega t + \varphi) }
> $$
> Pertanto da questi risultati segue che abbiamo la *conservazione* dell'energia: infatti abbiamo la costante
> $$
> E=U+K \implies \underbracket{\ldots}_{k=m\omega^2} \implies \boxed{E=\frac{1}{2}kA^2}
> $$

**FIGURA 4.1.** (*L'andamento dell'energia del moto armonico*)
![[Pasted image 20240421222512.png]]
