---
data: 2024-05-13
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Definizione Microscopica di Pressione
tipologia: appunti
stato: "1"
capitolo: Termodinamica
---
- - -
*Definizione microscopica di pressione, basata sulla teoria cinetica dei gas. Corollario: caso monoatomico per l'energia interna.*
- - -
# 0. Voci correlate
- [[Modello della Teoria Cinetica dei Gas]]
# 1. Calcoli per Definizione Microscopica della Pressione
Conoscendo il *modello della teoria cinetica dei gas*, vogliamo capire come si definisce la pressione. Deriviamo questa definizione con delle considerazione e con dei calcoli.

**MODELLO.** (*Pressione microscopica*)
Poniamoci una serie di domande.
1. *Cosa succede quando una particella colpisce una parete?*
Ci immaginiamo che la particella è un corpo avente massa $m$ e la parete un corpo con una *"massa infinita"* $M \to +\infty$ (questo è dovuto al fatto che con l'urto la *parete non si muove*). Allora quello che succede è che la pallina cambia *solo la direzione orizzontale*.
![[Pasted image 20240513215630.png|500]]
Dunque abbiamo la *variazione della quantità di moto* come
$$
\Delta p = -2m v_x
$$
Adesso vogliamo capire la *quantità di tempo* impiegato per raggiungere la parte. Considerando la *superficie* $A$ proiettata sulla parte, e la distanza $d$ normale alla parete.
![[Pasted image 20240513215819.png|500]]
Così si ha la variazione di volume $\Delta V = Ad$. Per rispondere alla nostra domanda, basta considerare le *componenti orizzontali*: abbiamo dunque
$$
\Delta t = \frac{d}{v_x}
$$
2. *Quante molecole di particelle abbiamo in questo volume?*
Semplice, basta considerare la variazione di volume appena ottenuta, dandoci
$$
N \frac{\Delta V}{V}=N \frac{Ad}{V}
$$
3. *Quanti urti al secondo si ha con la parete?*
Per semplicità consideriamo *solo* le particelle con la stessa velocità $v$. Dunque abbiamo
$$
N\frac{Ad}{V}\frac{1}{\Delta t}=N\frac{A}{V}v_x = \xi
$$
4. *Calcolo finale*
Adesso siamo pronti per il calcolo finale. In totale considero la *forza media esercitata dalla parete* come la *quantità di moto* per la *quantità di urti al secondo effettuati*, che è
$$
F=\Delta p \cdot \xi = -2mv_xN\frac{A}{V}v_x=-\frac{2mNA}{V}v_x^2
$$
Però ci secca dover conoscere la *velocità di tutte le particelle*, scegliamo dunque $v_x = \overline{v}_x$ (ovvero la sua media), che ci dà
$$
\overline{F}=-\frac{2mNA}{V}\overline{v}_x^2
$$
Considerando che *circa* solo il $50\%$ delle particelle hanno una componente $v_x$ positiva, possiamo dividere per due;
$$
\boxed{\overline{F}=-\frac{mNA}{V}\overline{v}_x^2}
$$
Dopodiché si generalizza tutto, generalizzando prima la componente $x$ del vettore-velocità, ponendo
$$
\overline{v}^2 = \overline{v}_x^2 +\overline{v}_y^2+ \overline{v}_z^2 = 3 \overline{v}_x^2
$$
Adesso dividendo per l'area si ottiene la pressione
$$
\overline{P}=-\frac{mN}{3V}\overline{v}^2
$$
Notando che la frazione $\frac{mN}{V}$ ci dà la *densità* (infatti è massa totale su volume), abbiamo
$$
\boxed{\overline{P}=\frac{1}{3} \rho \overline{v}^2}
$$
che finisce il problema. $\blacksquare$

#Definizione 
> [!def] pressione microscopica
> Si definisce la *pressione microscopica* di un gas come
> $$
> \overline{P}=\frac{1}{3}\rho \overline{v}^2
> $$

#Osservazione 
> [!rmk] la velocità quadratica media
> Facciamo un breve addendum sulle medie. Come *"sostituti"* per la velocità media è utile utilizzare la *radice della velocità quadratica media* (*"root mean square"*), ovvero
> $$
> v_{\text{rms} }:=\sqrt{\overline{v}^2}=\sqrt{\frac{1}{N}\sum_i  v_i^2}
> $$
> Questo è utile, dato che in questo modo possiamo ricavare la velocità
> $$
> P=\frac{1}{3}\rho \overline{v}^2 \to v_{\text{rms} }=\sqrt{\frac{3P}{\rho} }
> $$

# 2. Caso Monoatomico
Ricordando l'*energia* per i *gas monoatomici* ([[Modello della Teoria Cinetica dei Gas#^b85bcf]]), abbiamo i seguenti risultati

#Corollario 
> [!cor] caso monoatomico
> Per *gas monoatomici* valgono i seguenti.
> i. *Energia interna*
> $$
> U=\sum_i \frac{1}{2}mv_i^2 = \frac{1}{2}Nm\overline{v}^2
> $$
> ii. *Energia interna, altra equazione*
> $$
> PV=\frac{2}{3}U
> $$
^7818a0

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^7818a0]]
Si dimostra la seconda equazione. Si tratta di fare dei semplici calcoli, usando la definizione di pressione e il punto *i.*:
$$
PV=\frac{mNV}{3V}\overline{v}^2=\frac{2}{3}\underbracket{\frac{1}{2}Nm\overline{v}^2}_{U} =\frac{2}{3}U 
$$
che dimostra la tesi. $\blacksquare$
