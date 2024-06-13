---
data: 2024-04-22
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Moto Armonico Smorzato
tipologia: appunti
stato: "1"
capitolo: Oscillazioni
---
- - -
*Modello tipico del moto armonico smorzato. Definizione di Moto Armonico Smorzato mediante la sua equazione differenziale. Classificazione delle oscillazioni smorzato al variare dei parametri: sottosmorzamento, sovrasmorzamento e smorzamento critico.*
- - -
# 0. Voci correlate
- [[Resistenza dei Fluidi]]
- [[Forza Peso e Forza Normale]]
# 1. Modello Tipico delle Oscillazioni Smorzate
**MODELLO TIPICO.** Per parlare del *moto armonico smorzato*, presentiamo il suo *"modello tipico"*: ovvero un modello che presenta un'*equazione differenziale* che *"caratterizzi"* le oscillazioni smorzate.
Come modello prendiamo il seguente. Supponiamo di attaccare un oggetto ad una molla da un lato, poi ad un pistone con olio dall'altro. Inoltre supponiamo di avere una compressione (o estensione) della molla con $\Delta x \neq 0$.
![[Pasted image 20240422192842.png]]
Quindi le *forze in gioco* sono le seguenti: la tensione $\vec{T}$, la forza elastica $\vec{F}_x$ e l'attrito vistoso $\vec{F}_a$.
Quindi prendendo le *sole componenti orizzontali* (o verticali, tanto l'andazzo è lo stesso) abbiamo
$$
\left(\sum \vec{F}\right) \cdot \hat{i} \to k\Delta x  -\xi v_x = ma_x
$$
Notiamo che valgono le seguenti uguaglianze:
$$
\omega^2 = \frac{k}{m}; \gamma= -\frac{b}{m^2}
$$
(dove $\omega$ è la *pulsazione* e $\gamma$ una *costante definita ad hoc*)
Abbiamo dunque un'equazione differenziale differenziale del tipo
$$
\frac{\text{d} ^2 x}{\text{d}t^2}+2\gamma \frac{\text{d}x}{\text{d}t}+\omega^2 x = 0
$$
che è proprio l'*equazione* del *moto armonico smorzato*. Procediamo dunque con la definizione formale.

#Definizione 
> [!def] moto armonico smorzato
> Se un *modello fisico* fornisce una *grandezza fisica* $x$ che presenti la seguente equazione differenziale:
> $$
> \boxed{x'' + 2\gamma x' + \omega^2 x=0}
> $$
> allora si dice che abbiamo un *"moto armonico smorzato"*.
^58c547

#Esempio 
> [!exm] esempi di moti armonici smorzati non correlati al modello tipico
> Ci sono altri *modelli fisici* che presentano il *moto armonico smorzato*, che non abbiamo tanto da fare col nostro modello appena presentato. 
> 
> Si può parlare ad esempio del *circuito RLC*, in cui vi è una *resistenza*, un *induttore* e un *condensatore*. Vedere la figura sottostante.

**FIGURA 1.1.** (*Circuito RLC*)
![[circuito-rlc.jpg]]

# 2. Classificazione di Moti Armonici Smorzati
Notiamo che le *soluzioni dell'equazione differenziale* date nella *definizione* ([[#^58c547|1]]) presentano *soluzioni diverse* a seconda dei *parametri* $\omega^2$ e $\gamma$. In particolare prendiamo nota dei parametri $\omega^2, \gamma^2$. Adesso andiamo a vedere quali sono i casi.

## 2.1. Sotto Smorzamento
#Definizione 
> [!def] sotto smorzamento
> Se lo *"smorzamento"* è piccolo, allora ho *oscillazioni* con *piccole diminuzioni*: ovvero abbiamo che vale
> $$
> \omega^2 > \gamma^2 \implies \omega > \gamma
> $$
> Allora abbiamo la *soluzione dell'equazione differenziale* data da
> $$
> \boxed{x(t)=Ae^{-\gamma t}\cos(\omega_st+\varphi)}
> $$
> con $\omega_s:=\sqrt{\omega^2 - \gamma^2}$, che è una costante che *"sparisce col tempo"*. Inoltre le *curve* $\pm Ae^{-\gamma t}$ si dicono *inviluppo*.

**FIGURA 2.1.** (*Sotto smorzamento*)
![[Pasted image 20240422194341.png]]

## 2.2. Sovra Smorzamento
#Definizione 
> [!def] sovra smorzamento
> Se invece abbiamo che lo *"smorzamento"* è troppo forte, allora non abbiamo più *oscillazioni*, bensì una curva esponenziale negativa. Ovvero, avendo
> $$
> \omega < \gamma
> $$
> allora abbiamo la soluzione
> $$
> \boxed{x(t)=e^{-\gamma t} \left(Ae^{-ct}+Be^{ct}\right)}
> $$
> con $c:=\sqrt{\gamma^2-\omega^2}$.

**FIGURA 2.2.** (*Sovra smorzamento*)
![[Pasted image 20240422194604.png]]

## 2.3. Smorzamento Critico
#Definizione 
> [!def] smorzamento critico
> Se invece si ha
> $$
> \omega = \gamma
> $$
> ovvero abbiamo uno *"smorzamento equilibrato"*, allora si ha la soluzione
> $$
> \boxed{x(t)=e^{-\gamma t}\left(A+Bt\right)}
> $$

**FIGURA 2.3.** (*Smorzamento critico*)
![[Pasted image 20240422194857.png]]

# 3. Conclusione
Per dare un'idea qualitativa di questi *smorzamenti*, diamo il grafico di tutte e tre le funzioni.

**FIGURA 2.4.** (*Riassunto dei smorzamenti*)
![[Pasted image 20240422195109.png]]
