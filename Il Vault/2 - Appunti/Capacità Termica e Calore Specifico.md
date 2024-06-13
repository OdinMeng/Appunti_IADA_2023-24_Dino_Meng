---
data: 2024-05-14
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Capacità Termica e Calore Specifico
tipologia: appunti
stato: "1"
capitolo: Termodinamica
---
- - -
*Definizione di capacità termica (quantità estensiva), calore specifico per mole e per massa (quantità intensiva). Tabella di valori. Teorema dell'equipartizione dell'energia. Esempio: caso $N=2$.*
- - -
# 0. Voci correlate
- [[Definizione di Temperatura]]
- [[Energia Cinetica Media di una Molecola]]
# 1. Capacità Termica
Definiamo delle *quantità* della *calorimetria*.

#Definizione 
> [!def] capacità termica
> Si definisce la *capacità termica* come la *variazione dell'energia interna* dovuta alla *variazione di temperatura*. A *volume costante*, si definisce come
> $$
> C_V = \left(\frac{\Delta U}{\Delta T}\right)_V = \left(\frac{\partial U}{\partial T}\right)_V
> $$
> Si definisce in una maniera analoga a *pressione costante*, $C_P$.
> 
> Inoltre si definisce la *capacità termica* come una *"quantità intensiva"*, ovvero che *dipende dalla quantità di materia*. Infatti ne vediamo un caso specifico

#Corollario 
> [!cor] capacità termica di un gas monoatmico
> Secondo la *teoria cinetica dei gas*, si ha la *capacità termica a volume costante* $C_V$ viene calcolata come
> $$
> \boxed{C_V} = \frac{3}{2}Nk_B = \boxed{\frac{3}{2}nR}
> $$

# 2. Calore Specifico
Adesso proviamo a *"togliere la quantità di materia"* dalla definizione di capacità termica

#Definizione 
> [!def] calore specifico per mole e per massa
> Si definisce il *calore specifico per mole* come la *capacità termica* divisa per il numero di *mole*. Ovvero
> $$
> \boxed{c_V = \frac{C_V}{n}}\land \boxed{c_P = \frac{C_P}{n} }
> $$
> analogamente si definisce il *calore specifico per massa* come
> $$
> c=\frac{C_V}{m}
> $$
> Tuttavia questa non è importante, si considera spesso il *calore specifico per mole*.

^d8154b

#Corollario 
> [!cor] caso monoatomico
> Si ha per *gas monoatomici* che
> $$
> \boxed{c_V = \frac{3}{2}R }
> $$

 Adesso vediamo una *relazione* per *calore specifico*. Per ora la lasciamo così, la giustificheremo con le *trasformazioni termodinamiche* (e col *primo principio della termodinamica*): [[Trasformazione Isobara]]

#Teorema 
> [!thm] relazione di Mayer
> Per i gas vale che
> $$
> \boxed{c_V-c_P = R}{}
> $$

^922961

# 3. Tabelle
Vediamo un caso pratico

#Esempio 
> [!exm] tabelle di valori per alcuni elementi
> Si riporta la seguente *tabella di valori* per il *calore specifico a volume costante*, la *massa molare* e la *costante dei gas* calcolata (*tabella 1.1.*).
> 
> Da notare che per i *primi quattro elementi* il valore calcolato a destra è proprio $\frac{3}{2}R$, che è proprio il suo *calore specifico*!

**TABELLA 1.1.**

| Elemento | $C_V$   | $\text{g/mol}$ | $\text{J/(K mol)}$ |
| -------- | ------- | -------------- | ------------------ |
| Elio     | $3115$  | $4.003$        | $12.47$            |
| Neon     | $617.9$ | $20.18$        | $12.46$            |
| Argon    | $312.2$ | $39.99$        | $12.46$            |
| Xeno     | $94.97$ | $131.29$       | $12.46$            |
# 4. Teorema dell'equipartizione dell'energia
Vediamo un modo per stimare il suo *calore specifico a volume costante*, a seconda della quantità delle mole che ha.

#Teorema 
> [!thm] equipartizione dell'energia
> Dato un sistema termodinamico in equilibrio, si ha che ciascun grado di libertà contribuisce, *in media*, della seguente quantità di *energia*
> $$
> \frac{1}{2}Nk_B T \iff \frac{1}{2}RT
> $$
> Ovvero
> $$
> c_V = \frac{\lambda}{2}R
> $$
> con $\lambda$ i *gradi di libertà*.

#Corollario 
> [!cor] caso $N=2$
> Consideriamo un *gas biatomico*. Allora abbiamo che:
> i. Abbiamo tre *tipi di traslazioni*, che ci danno *tre* gradi di libertà. Quindi abbiamo $\frac{3}{2}R$
> ii. Abbiamo *due assi di rotazione* (non consideriamo lungo la *retta tangente in verticale*, dato che non avrebbe senso). Abbiamo potenzialmente $\frac{2}{2}R$
> iii. Abbiamo una *vibrazione* possibile. Ovvero *potenzialmente due gradi di libertà*, dato che abbiamo sia il *potenziale elastico* che l'*energia cinetica* associata alla vibrazione. Ovvero $\frac{2}{2}R$
> In totale si ha
> $$
> \frac{3}{2}R\leq c_V \leq \frac{7}{2}R
> $$
> Per dire se ci sono effettivamente gli *effetti di rotazione, vibrazione, eccetera...* o meno, bisogna usare la *meccanica quantistica*.

