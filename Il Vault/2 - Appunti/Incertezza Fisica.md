---
data: 2024-03-06
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Incertezza Fisica
tipologia: appunti
stato: "1"
capitolo: Introduzione alla Fisica
---
- - -
*Incertezza fisica: espressione dei risultati con un livello di incertezza, cifre significative. Fonti dell'incertezza fisica: precisione e accuratezza. Incertezza statistica: media, varianza e formula per calcolare l'incertezza. Propagazione delle incertezze.*
- - -
# 1. Esprimere l'incertezza fisica
Nella fisica si sempre ha a che fare con *l'incertezza*: questa si verifica soprattutto con la *misurazione* fisica dei corpi. Per scrivere una *misurazione* con un margine di errore si usa la seguente notazione.
$$
L = 1.82 \pm 0.02 \ m; M=3.5 \pm 0.1 \ kg
$$
Quindi separiamo ogni numero in *due parti*: la *misura* e l'*incertezza*. Come nel primo esempio, si ha
$$
L = \underbracket{1.82}_{\text{misura}} \pm \underbracket{0.01}_{\text{incertezza}} \ m
$$
**Cifre significative.** Alternativamente possiamo usare (e lo faremo spesso) le *cifre significative* per indicare il *livello di precisione* di una misurazione. Questa funziona semplicemente prendendo le *"cifre di cui siamo confidenti"*, o *"cifre di cui siamo precise"*.
Ad esempio
$$
L=1.82 \ m
$$
ha *tre* cifre significative, ed equivale a
$$ 
L = 1.82 \pm 0.01 \ m
$$
Quando si ha il *prodotto* o la *divisione* tra due cifre significative, si tiene il numero *più basso delle cifre significative*.
$$
(1.1 \ m) \cdot (3.45 \ m) = \cancel{3.795} 3.8  \ m^2
$$
Quando si ha invece la *somma* o la *sottrazione* tra due cifre significative, si tiene il *numero più basso dei decimali*.
$$
1.1 \ m - 0.12  \ m = \cancel{0.98} 1.0 \ m
$$
# 2. Fonti dell'incertezza fisica
Principalmente abbiamo *tre fonti* di *incertezza fisica*.
1. *Risoluzione strumentale.* Questa incertezza proviene dallo *strumento di misurazione*: ad esempio se misuriamo la lunghezza di un corpo con un *righello* segnato in *centimetri*, notiamo che ci sono dei spazietti ad ogni tacca che segna il centimetro. Questo vuoto rappresenta l'errore detto "risoluzione strumentale".
2. *Errori casuali (o incertezze statistiche).* Questi errori dipendono invece da una molteplicità di fattori di cui non si sanno bene, tuttavia sappiamo che le *variazioni* rappresentate da quest'errore si distribuiscono in un certo modo. Lo vedremo con degli approfondimenti sull'*incertezza statistica*.
3. *Errori sistematici.* Questa tipologia di errore succede costantemente con ogni misurazione.
Notare che le *prime due tipologie di errori* incidono sulla *precisione* della misurazione, ovvero *"in che modo sono distribuiti questi errori"*, l'ultimo incide invece sull'*accuratezza*, ovvero *"da quanto si discostano dal valore voluto"* (*figura 2.1.*).

**FIGURA 2.1.** (*Illustrazione grafica dei concetti di accuratezza e precisione*)
![[precision_accuracy.png]]

# 3. Incertezza statistica
Ora cerchiamo di vedere in una maniera dettagliata l'*incertezza statistica*.
Quando misuriamo *molte volte* una grandezza, otteniamo spesso *diversi risultati*, che però sono in qualche modo *"vicini tra di loro"*, dove spostandoci al centro abbiamo *"una densità maggiore di misure"*.
Chiamiamo $N$ il numero di misurazioni.
Definiamo la *media* $\langle x \rangle$ *su $N$ misure* come il valore
$$
\langle x \rangle:= \frac{1}{N}\sum_{n \in N}x_n
$$
Definiamo invece la *varianza* $\operatorname{var}{(x)}$ o lo *scarto quadratico medio* come il numero
$$
\operatorname{var}{(x}) := \frac{1}{N}\left[\sum_{n \in N}(x_n - \langle x\rangle)^2\right]
$$
Graficamente si possono illustrare le ultime due misure come nella *figura 3.1.*.
Adesso si definisce il numero $\sigma$ come
$$
\sigma := \sqrt{\operatorname{var}{(x)}}
$$
Con la *statistica* si dimostra che l'*incertezza* misurata è
$$
\Delta X = \frac{\sigma}{\sqrt{N}}
$$
Ovvero il risultato sarà
$$
X = X \pm \Delta X
$$

**FIGURA 3.1.** (*Media e varianza*)
![[Pasted image 20240307200536.png]]
# 4. Propagazione delle incertezze
**IDEA.** Voglio trovare un modo per *"trasferire gli errori"*. Ovvero, partendo da una misurazione con delle incertezze voglio ottenere una sua misurazione derivata, tenendo conto di questi errori.

**ESEMPIO.** (*la superficie di un quadrato*)
Prendiamo la superficie di un quadrato, ovvero $A=L^2$. Supponendo di avere $L=3.0 \pm 0.2 \ cm$, voglio trovare un modo per determinare $A$ tenendo conto dell'*errore*.
In genere dipende dal *tipo di errore*, ma come buon riferimento prendiamo in considerazione l'*errore statistico*.
Rappresentiamo l'area della superficie come una *funzione al variare della lunghezza*, ovvero $A(L) = L^2$. Ora ne disegniamo il grafico (*figura 4.1.*). Posso dunque considerare $3.0 \pm 0.2 \ cm$ come l'*intorno del numero* $3.0$ con raggio $\delta=0.2$; dunque posso calcolare $A(L-\delta)$ e $A(L+\delta)$.
Per rendere più semplici le cose, cerchiamo di *linearizzare* la funzione mediante lo sviluppo delle funzioni di Taylor ([[Formula di Taylor#^947c8a]]), con $n=1$.
Abbiamo dunque
$$
A(L\pm\delta) \approx A(L)\pm\frac{dA}{dL}\delta
$$
(*nota che per fare bene le cose si dovrebbe distinguere il caso in cui consideriamo l'intorno destro e sinistro*)
Ora voglio calcolare l'errore $\Delta A$ considerando la relazione
$$
A \pm \Delta A = A(L\pm \delta)
$$
Quindi per trovare $\Delta A$ faccio la somma $A + \Delta A - (A - \Delta A) = 2 \Delta A$.
$$
2 \Delta A = 2 \frac{dA}{dL}\delta \implies \Delta A = \frac{dA}{dL}\delta
$$
Ovvero abbiamo
$$
\Delta A = 2L \cdot \delta = 6 \cdot 0.2 = 1.2
$$
Quindi possiamo scrivere
$$
A = 9 \pm 1 \ cm^2
$$

**FIGURA 4.1.** (*"L'idea è questa"*)
![[Pasted image 20240307201632.png]]

**CASO GENERALIZZATO.** Ora vediamo alcune formule generali per calcolare la *propagazione delle incertezze*.
Per una funzione ad una variabile $f(x)$, dove abbiamo una *misura* e una *grandezza derivata* si calcola l'incertezza $\Delta f$ come
$$
f(x) \longrightarrow\Delta f = \left|\frac{df}{dx} \right| \Delta x
$$
Per una funzione a due variabili $f(x,y)$ si ha
$$
f(x,y) \longrightarrow \Delta f = \sqrt{\left(\frac{\partial f}{\partial x}\right)^2 \Delta x^2 + \left(\frac{\partial f}{\partial y}\right)^2 \Delta y^2}
$$
oppure in certi casi rari si può usare anche
$$
\Delta f = \left|\frac{\partial f}{\partial x}\right|\Delta x + \left|\frac{\partial f}{\partial y}\right|\Delta y
$$

**ESEMPI DEL CASO GENERALIZZATO.** Supponiamo di avere una misurazione del tipo
$$
f=ax+by
; g=x^m y^n
$$
Allora le loro incertezze sono
$$
\begin{gather}
\Delta f = \sqrt{a^2\Delta x^2 + b^2 \Delta y^2}
\\
\Delta g = \sqrt{(mx^{m-1}y^n \Delta x)^2 + (ny^{n-1}x^m\Delta y)^2}
\end{gather}
$$

**L'INCERTEZZA RELATIVA.** Notare che per $\Delta g$ sia $mx^{m-1}y^n$ che $ny^{n-1}x^m$ sono espressioni del tipo $\frac{\cdot f}{\cdot}$. Allora si può prendere la loro *incertezza relativa* definita come
$$
\frac{\Delta f}{f}
$$
e in questo caso ho
$$
\frac{\Delta g}{g} = \sqrt{\left(m \frac{\Delta x}{x}\right)^2 + \left(n\frac{\Delta y}{y}\right)^2}
$$
