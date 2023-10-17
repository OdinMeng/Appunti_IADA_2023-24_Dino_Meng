---
data: 2023-10-12
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Sistemi di generatori
tipologia: appunti
stato: "1"
---
*Breve definizione di combinazione lineare; Matrice come combinazione lineare di sistemi di generatori, indipendenza lineare*
- - -
# 0. Combinazione lineare
**DEF 0.** Per **combinazione lineare** si intende *l'espressione* per cui prendo una serie di *vettori* $\text{v}_i$ dall'$\mathbb{R}$*-spazio vettoriale $V$* ([[Spazi Vettoriali]], **DEF 1.**, **DEF 1.1.**), scalo ciascuna di essa per uno scalare $\lambda_i$ e li sommo; quindi stiamo parlando di $$\lambda_1\text{v}_1 + \lambda_2 \text{v}_2 + \cdots + \lambda_{n}\text{v}_{n}$$
# 1. Sistemi di generatori
Consideriamo una *matrice $2 \times 2$* ([[Matrice]], **DEF 1.**), $A$. Consideriamo $$A = \begin{pmatrix}3&1\\-2&4 \end{pmatrix}$$
Ora consideriamo 4 matrici $2 \times 2$ *"speciali"*, ovvero $$E = \begin{pmatrix} 1&0\\0&0\end{pmatrix}; \ F = \begin{pmatrix} 0&1 \\0&0\end{pmatrix}; \ G = \begin{pmatrix}0&0\\1&0 \end{pmatrix}; H=\begin{pmatrix}0&0\\0&1 \end{pmatrix} $$infatti queste matrici hanno *tutte* le *entrate* nulle ($0$), fuorché una, la quale uguale ad uno ($1$).

Consideriamo allora la seguente *combinazione lineare* di queste quattro matrici:$$3E + F - 2G + 4H$$che secondo dei calcoli diventa proprio $A$, ovvero $$\begin{pmatrix} 3&1\\-2&4 \end{pmatrix}$$
Si può ripetere questa costruzione, qualsiasi sia matrice $A$; infatti se $$A = \begin{pmatrix}a&b\\c&d \end{pmatrix}$$
allora $$A = aE +bF+cG + dH$$
**DEF 1.** In questo diciamo che $E, F, G, H$ sono un **sistema di generatori** di $M_2(\mathbb{R})$.

**OSS 1.1.** Notiamo che questo ragionamento può essere formulato allo stesso modo per qualsiasi insieme di *matrici* $M_{m,n}(\mathbb{R})$: abbiamo quindi "dimostrato" il seguente:
**PROP 1.1.** Se consideriamo l'insieme delle *matrici* $M_{m,n}(\mathbb{R})$ che sono costruite nel seguente modo: *esse hanno tutte le entrate nulle $0$ fuorché una, la quale uguale ad $1$*; allora tale insieme è **un sistema di generatori** per $M_{m,n}(\mathbb{R})$.

# 2. Indipendenza lineare
Considerando ancora le *matrici quadrate $2 \times 2$*, ne consideriamo la *matrice nulla* $$0 = \begin{pmatrix}0&0\\0&0 \end{pmatrix}$$che può essere scritta come la combinazione lineare (considerando $E,F,G,H$ come i *sistemi di generatori di $M_2(\mathbb{R})$*): $$\begin{pmatrix}0&0\\0&0 \end{pmatrix} = 0E + 0F + 0G+0H$$Si vede che non c'è nessun altro modo di ottenere la *matrice nulla*, se non di impostare ogni *coefficiente* $0$. Infatti $$eE + fF +gG+ hH = \begin{pmatrix}e&f\\g&h \end{pmatrix} = \begin{pmatrix}0&0\\0&0 \end{pmatrix}$$quindi affinché valga la sovrastante, $(e,f,g,h) = (0,0,0,0)$.

**DEF 2.** In questo caso diciamo che queste quattro matrici sono **linearmente indipendenti**; ovvero che *l'unico modo di ottenere la matrice nulla mediante la combinazione lineare di queste matrici* è quella di imporre tutti i coefficienti nulli.
Questi ragionamenti possono essere formulati (e generalizzati) anche per *matrici* $m \times n$.

**OSS 2.1.** Se ho $$A = \begin{pmatrix}1&1\\1&1\end{pmatrix}; \ B = \begin{pmatrix}2&2\\2&2 \end{pmatrix}$$allora la per ottenere $0$ (la matrice nulla) è necessaria fare la seguente combinazione lineare: $$-1 \cdot A + (-\frac{1}{2})B$$e i coefficienti non sono nulli; pertanto $A, B$ *non* sono linearmente indipendenti.


