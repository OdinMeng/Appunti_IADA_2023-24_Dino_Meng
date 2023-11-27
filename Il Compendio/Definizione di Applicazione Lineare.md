---
data: 2023-11-24
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Definizione di Applicazione Lineare
tipologia: appunti
stato: "0"
---
*Definizione base di applicazione lineare. Esempi.*
- - -
# 0. Preambolo
**OSS 0.a.** (*Aree di indagine della matematica*) La matematica è una materia che studia principalmente due temi: da un lato lo studio di certi *determinate* entità matematiche, come le *matrici*, i *vettori*, i *sistemi lineari* e i *spazi vettoriali*.
Dall'altro lato, la matematica si occupa anche di collegare questi oggetti studiati mediante le *funzioni* ([[Funzioni]]); tra poco studieremo delle funzioni che in oggetto prendono dei *spazi vettoriali* ([[Spazi Vettoriali]]), evidenziando la loro complessità e ricchezza, dovute al fatto che i *spazi vettoriali* sono sostanzialmente degli insiemi con più restrizioni.
# 1. Definizione di Applicazione Lineare
#Definizione 
> [!def] Definizione 1.1. (applicazione lineare da V a V primo)
> Siano $V, V'$ due *K-spazi vettoriali* ([[Spazi Vettoriali#^7e2c4e]]).
> Chiamo una *funzione* ([[Funzioni#^e8c03b]]) del tipo
> $$(V, V', f) \sim f: V \longrightarrow V' $$
> una *applicazione lineare* se valgono due condizioni:
> A1. (*Additività*) *"L'immagine della somma è la somma delle immagini"*
> $$\forall v_1, v_2 \in V, f(v_1+v_2) = f(v_1)+f(v_2) $$
> A2. (*Omogeneità*) *"L'immagine dello scalamento è lo scalamento dell'immagine"*
> $$\forall v \in V,  f(\lambda v) = \lambda f(v)$$

^9b39f9

**OSS 1.1.** (*Operazioni stesse ma diverse*) Notiamo che nelle proprietà A1. e A2. (additività e omogeneità) abbiamo l'associazione tra due operazioni diverse; a sinistra abbiamo la somma (*scalamento*) definita in $V$, d'altro lato abbiamo una *"altra"* somma (*scalamento*) definita in $V'$. Per essere più precisi sarebbe preferibile scrivere
$$f(v_1+v_2) = f(v_1) \oplus f(v_2)$$
e
$$ f(\lambda\cdot v) = \lambda \odot f(v)$$
dove $+, \cdot$ sono definite in $V$ e invece $\oplus, \odot$ in $V'$.
# 2. Esempi di Applicazione Lineari
#Esempio 
> [!ex] Esempio 1.1. (Esempio di applicazione lineare da 2D a 1D)
> Sia $f: \mathbb{R}^2 \longrightarrow \mathbb{R}$ una funzione dove
> $$f\left(\begin{pmatrix}x \\ y \end{pmatrix}\right) = x+2y$$
> Allora per verificare che $f$ sia a tutti gli effetti un'*applicazione lineare*, proviamo l'additività e l'omogeneità di $f$.
> In un colpo solo la verifichiamo scrivendo
> $$\begin{align}f\left(\lambda\cdot\left(\begin{pmatrix}x_1 \\ y_1 \end{pmatrix}+\begin{pmatrix} x_2 \\ y_2\end{pmatrix}\right) \right) &= f\left(\begin{pmatrix}\lambda x_1+\lambda x_2)\\\lambda y_1+\lambda y_2) \end{pmatrix} \right) \\ &= (\lambda x_1 + \lambda x_2) + 2(\lambda y_1 + \lambda y_2) \\ &= \lambda(x_1 + 2 y_1) + \lambda( x_2 + 2y_2) \\ &= f\left(\lambda\begin{pmatrix}x_1 \\ y_1 \end{pmatrix}\right) + f\left(\lambda\begin{pmatrix}x_2 \\ y_2 \end{pmatrix}\right)\end{align}$$

