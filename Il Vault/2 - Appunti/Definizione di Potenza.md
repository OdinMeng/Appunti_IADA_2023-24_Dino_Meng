---
data: 2024-04-20
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Definizione di Potenza
tipologia: appunti
stato: "1"
capitolo: Energia e Quantità di Moto
---
- - -
*Definizione di potenza. Esempio del pompaggio idroelettrico.*
- - -
# 0. Voci correlate
 - [[Definizione di Lavoro]]
# 1. Definizione di Potenza
Andiamo a definire un'altra grandezza importante per la fisica classica.

#Definizione 
> [!def] potenza
> Si definisce operativamente la *potenza* come la *quantità di energia (o lavoro) trasferita nel tempo*. In matematichese, ho la *derivata del lavoro* rispetto al *tempo*.
> $$
> \boxed{P := \frac{\text{d}W}{\text{d}t} }
> $$
> La potenza si misura in *Watt* ($[\text W]$) dove
> $$
> [\text{W}] = [\text {J/S}]
> $$
> Inoltre si nota che da questa definizione possiamo definire un'altra *unità* per l'*energia*, comunemente usata per l'*energia elettrica*: il *kilowattora* $[\text{kWh}]$, dove
> $$
> [\text{kWh}] = 1000[\text W]\cdot 3600 [\text{s}] = 3.6M [\text{J}]
> $$
> Ovvero un *kilowattora* sono *3.6 millioni di Joule*.

# 2. Esempi
#Esempio 
**Il pompaggio idroelettrico.**
Illustriamo questo concetto mediante un *esempio concreto*. Supponiamo di avere un fiume, dove ad un certo punto si casca di un'altezza $h$. Ovvero abbiamo una situazione del tipo
![[Pasted image 20240420213854.png]]
Nella fontana abbiamo messo *un alternatore*, che converte il *lavoro dell'acqua in caduta* in *energia elettrica*. 
Supponiamo i seguenti dati: la densità dell'acqua è di $\rho = 1000 \ \text{kg/m}^3$, il volume della bacinella è $V =9 \ 000 \ 000 \ \text{m}^3$, l'altezza è $h = 100 \text{ m}$. Allora abbiamo che l'*energia potenziale* dell'acqua è
$$
U =\rho V gh = 90 T \ \text{J} = 90 \cdot 10^{12} \ \text{J}
$$
ovvero *novanta tera-joule*! Wow, questo è proprio un sacco di energia convertibile! Ma possiamo convertire tutta questa energia subito? No, sennò saremmo già in grado di illuminare tutte le città possibili.
Infatti, supponendo il *flusso del fiume massimo* del
$$
\Phi_{\ast} = 130 \ \text{m}^3\text{/s}
$$
Allora abbiamo
$$
P_{\ast}=\left|\frac{\text{d}W}{\text{d}t}\right| = \left|\frac{\text{d}U}{\text{d}t}\right| = \frac{\text d }{\text{d}t}(mgh)
$$
Dal momento che l'unica *variabile in tempo* è la *massa* (infatti abbiamo un flusso massimo), poniamo
$$
\frac{\text{d} }{\text{d}t}(mgh) = \frac{\text{d}m}{\text{d}t}(gh) = \rho \frac{\text{d}V}{\text{d}t}gh = \rho \cdot \Phi_\ast \cdot h \approx 1.4 M \text{W}
$$
ovvero possiamo convertire *al più* $1.4$ *megawatt*, ovvero $1.4$ *mega joule* al secondo.

#Esempio 
> [!exm] il motorino elettrico
> Supponiamo che la *potenza massima di un motorino in salita del 30%* sia
> $$
> P_{\nearrow}=3 \ \text{KW}
> $$
> Determinare la *velocità massima* ${v_\ast}$ del motorino elettrico .
> 
> Possiamo considerare la *potenza* come il *cambiamento del potenziale del peso sul tempo*, che a sua volta è il *cambiamento dell'altezza sul tempo*. Ovvero
> $$
> P=\frac{\text{d}U }{\text{d}t}=\frac{\text{d}y}{\text{d}t}mg = v_y mg
> $$
> Allora abbiamo
> $$
> v_y = \frac{P}{mg}\implies \boxed{v_\ast = \frac{P}{mg \sin\theta} } \approx 5.32 \text{ m/s} \to 19 \text{ km/h}
> $$

