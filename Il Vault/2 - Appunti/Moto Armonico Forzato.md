---
data: 2024-04-22
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Moto Armonico Forzato
tipologia: appunti
stato: "1"
capitolo: Oscillazioni
---
- - -
*Moto armonico forzato: modello tipico, definizione e soluzione all'equazione differenziale. Definizione di risonanza.*
- - -
# 0. Voci correlate
- [[Forza Elastica]]
- [[Resistenza dei Fluidi]]
# 1. Modello Tipico del Moto Armonico Forzato
**Modello Tipico.** Come *modello tipico* del moto armonico forzato presentiamo il seguente.
Un blocco avente massa $m$ è attaccato ad una *molla* con costante elastica $k$, che a sua volta è attaccato ad un *motore* che genere una forza: per farci capire, questo motore genera un'*oscillazione forzata*. 
Dopodiché dall'altro lato lo stesso blocco $m$ è attaccato ad un *pistone* in un cilindro d'olio (o qualsiasi sostanza viscosa).
![[Pasted image 20240422201412.png]]
Quindi le forze in gioco sono tre: la forza elastica, l'attrito viscoso e la forza periodica causata dal motore. Quindi prendendo la sommatoria delle forze, abbiamo
$$
\left(\sum \vec{F}\right)\hat{i} \to ma=-kx-bv+F_0\cos(\omega_Et)
$$
quindi abbiamo l'equazione differenziale
$$
\frac{\text{d}^2x}{\text{d}t^2}=-\frac{k}{m}x-b\frac{\text{d}x}{\text{d}t}+F_0\cos (\omega_E t)
$$
Ovvero abbiamo l'equazione del *moto armonico smorzato* con un *termine noto non-lineare*.

# 2. Definizione di Moto Armonico Forzato e Risonanza
#Definizione 
> [!def] moto armonico forzato
> Un modello fisico che presenta *una grandezza* $x(t)$ con l'equazione differenziale
> $$
> \boxed{\frac{\text{d}^2x}{\text{d}t^2}+2\gamma\frac{\text{d}x}{\text{d}t}+\omega^2 x=F_0\cos (\omega_E t)}
> $$
> si dice *"moto armonico forzato"*.

#Teorema 
> [!thm] soluzione al moto armonico forzato
> Una quantità $x(t)$ che determina un *moto armonico forzato* presenta la soluzione
> $$
> \boxed{x(t)=A_0\cos(\omega_E t+\varphi_E)}
> $$
> dove le seguenti costanti sono definite come:
> $$
> A_0=\frac{\frac{F_0}{m} }{\sqrt{(\omega^2_E-\omega^2)+4\gamma^2\omega^2_E} }
> $$
> e
> $$
> \tan(\varphi_E)=\frac{2\gamma\omega_E}{\omega^2-\omega_E^2}
> $$
> Osserviamo che per $\omega \to \omega_E$ (in realtà ci sarebbero altri costanti d'intralcio, quindi non è una perfetta corrispondenza uno ad uno, quindi indicherò questo comportamento con $'\leadsto'$), raggiungo $\max A_0(\omega_E)$ 
> 
> Inoltre, notiamo che per $\omega \to +\infty$ (a parole, la pulsazione naturale diventa più grande) ho che gli effetti di $\omega \leadsto \omega_E$ diventano sempre più piccoli.

**FIGURA 2.1.** (*Moto armonico forzato*)
![[Pasted image 20240422202748.png]]

#Definizione 
> [!def] risonanza di un moto armonico forzato
> Supponiamo che una quantità $x(t)$ sia un *moto armonico forzato*.
> Se vale che
> $$
> \boxed{\omega_E=\omega}
> $$
> allora ho la *"risonanza"*, da cui ho l'ampiezza del moto $A_0$ massimale.
