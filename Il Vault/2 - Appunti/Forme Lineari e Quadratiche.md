---
data: 2024-04-15
corso:
  - "[[Analisi Matematica II]]"
argomento: Forme Lineari e Quadratiche
tipologia: appunti
stato: "1"
capitolo: Calcolo Differenziale Multivariata
---
- - -
*Nomenclatura necessaria per la formula di Taylor del secondo ordine: forme lineari e forme quadratiche. Esempi, proprietà e lemma.*
- - -
# 0. Voci correlate
- [[Definizione di Applicazione Lineare]]
- [[Prodotto Scalare in RN]]
# 1. Definizione di Forma Quadratica e Lineare
#Definizione 
> [!def] forma lineare
> Sia $\underline{h}$ un vettore fissato. Un'applicazione lineare $L \in \mathcal{L}(\mathbb{R}^N, \mathbb{R})$ con
> $$
> L(\underline{h})=\sum_{i=1}^N a_ih_i = \langle \underline{a}, \underline{h} \rangle
> $$
> è detta *"forma lineare"*.

#Definizione 
> [!def] forma quadratica
> Un'applicazione $Q: \mathbb{R}^N \longrightarrow \mathbb{R}$ con
> $$
> Q(\underline{h})= \sum^N_{i=1} \sum^N_{j=1}a_{ij}h_jh_i = \langle A\cdot \underline{h}, \underline{h} \rangle
> $$
> dove $A \in M_{N,N}(\mathbb{R})$ è una matrice con $(A)_{ij}=a_ij$ fissata, è detta *"forma quadratica"*.

^a75fd5

#Esempio 
> [!exm] esempi di forme lineari e quadratiche
> Una forma lineare può essere $\underline{h}=(h_1, h_2)$ e quindi
> $$
> L(\underline{h})=L(h_1,h_2)=\langle (a_1, a_2), (h_1, h_2) \rangle = a_1h_1 +a_2h_2
> $$
> Invece una forma quadratica è ad esempio
> $$
> Q(h_1, h_2)=a_{11}h_1^2 + (a_{12}+a_{21})h_2h_1+a_{22}h_2^2 = \begin{pmatrix}a_{11} & a_{12} \\ a_{21} & a_{22} \end{pmatrix}\cdot \begin{pmatrix}h_{1} \\ h_2 \end{pmatrix}
> $$

# 2. Proprietà delle Forme Quadratiche
#Proposizione 
> [!prp] proprietà delle forme quadratiche
> Sia $A \in M_{N,N}(\mathbb{R})$. Si ha che, scegliendo vettori arbitrari $\underline{h}, \underline{k} \in \mathbb{R}^N$ ho le seguenti proprietà.
> i. *"antisimmetria"*
> $$
> \langle A \underline{h}, \underline{k}\rangle = \langle ^{t}A \underline{k}, \underline{h} \rangle
> $$
> ii. *"le forme quadratiche hanno sempre matrici simmetriche"*
> $$
> Q(\underline{h})=\left\langle\frac{1}{2}\left(A+^{t}A\right) \underline{k}, \underline{h}\right\rangle = \langle A_s \underline{k}, \underline{h} \rangle
> $$
> Il secondo punto è dimostrabile con le proprietà del prodotto scalare ([[Prodotto Scalare in RN#^ec85cf|1]]).

#Lemma 
> [!lem] il differenziale delle forme lineari e quadratiche
> Si ha che:
> i. Se ho $\underline{a} \in \mathbb{R}^N$ fissato, allora vale che
> $$
> \forall \underline{h} \in \mathbb{R}^N, \nabla(\langle \underline{a}, \underline{h}\rangle)=\underline{a}
> $$
> ii. Sia un $A \in M_{N,N}(\mathbb{R})$ fissato. Allora ho
> $$
> \nabla(\langle A \underline{h}, \underline{h}\rangle)=2A_s \underline{h}, A_s =\frac{1}{2}(A+^{t}A)
> $$

