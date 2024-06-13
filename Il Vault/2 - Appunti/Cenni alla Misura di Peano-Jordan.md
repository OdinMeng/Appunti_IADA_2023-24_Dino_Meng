---
data: 2024-06-02
corso:
  - "[[Analisi Matematica II]]"
argomento: Insieme Misurabile secondo Peano-Jordan
tipologia: appunti
stato: "1"
capitolo: Calcolo Integrale in più Variabili
---
- - -
*Cenni alla teoria della misura di Peano-Jordan: definizione di misurabilità, proprietà della misura, caratterizzazione degli misurabili. Insiemi misurabili compatti e insiemi compatti misurabili trascurabili. Applicazioni alla teoria di integrazione in più variabili.*
- - -
# 1. Misurabilità di Peano-Jordan
#Definizione 
> [!def] misurabilità secondo Peano-Jordan e misura
> Sia $E \subseteq \mathbb{R}^N$ *limitata*. Si dice che $E$ è *misurabile secondo Peano-Jordan* se la *funzione caratteristica* $\chi_E$ è integrabile su $E$, ovvero $\chi_E \in \mathcal{R}(E)$. 
> 
> In tal caso si dice $m_N(E)$ la *misura* di $E$ e la si pone come
> $$
> m_N(E):=\int_E \chi_E =\int_E 1
> $$
> Inoltre la *classe delle funzioni misurabili secondo Peano-Jordan* in un sottoinsieme di $X$ si denota con $\mathcal{M}(X)$

^1b7399

#Osservazione 
> [!rmk] casi di insiemi non misurabili
> Abbiamo casi di *insiemi non misurabili*. Come esempio si può prendere
> $$
> E:=\left(\mathbb{Q}^N \cap \bigtimes^{N}_{i=1} [0,1]\right)
> $$
> Ovvero l'insieme dei razionali in un $n$-rettangolo del tipo $[0,1] \times \ldots \times [0,1]$: questa è una specie di *"insieme di Dirichlet"* generalizzata su $\mathbb{R}^N$.

#Teorema 
> [!thm] di caratterizzazione degli misurabili
> Sia $E \subseteq \mathbb{R}^N$ un insieme limitato. Allora vale l'equivalenza
> $$
> E \in \mathcal{M}(\mathbb{R}^N) \iff m_N(\partial E)=0
> $$

# 2. Proprietà della Misura di Peano-Jordan
#Proposizione 
> [!prp] proprietà della misura di Peano-Jordan
> Sia $m_N$ la *misura di Peano-Jordan* su sottoinsiemi di $\mathbb{R}^N$. Allora vale che:
> 
> i. Se $R$ è un *n-rettangolo* ([[Definizione di n-rettangolo#^1fa155]]), allora vale che essa è misurabile secondo Peano-Jordan e che
> $$
> m_N(R)=\prod^N_{i=1}(b_i-a_i)
> $$
> (stiamo facendo *"base per altezza"*, in sostanza).
> ii. $\emptyset$ è *misurabile secondo Peano-Jordan* e vale che la sua misura è nulla: $m_N(\emptyset)=0$.
> iii. *Chiusura della misurabilità rispetto all'unione, intersezione e sottrazione*
> $$
> A,B \in \mathcal{M}(\mathbb{R}^N)\implies \left \{
> \begin{align}
> & A \cap B, A \cup B, A \diagdown B\in \mathcal{M}(\mathbb{R}^N)\\ 
>  &m_N(A \cup B)=m_N(A)+m_N(B)-m_N(A \cap B)
>  \\ 
>  &m_N(A \diagdown B)=m_N(A)-m_N(A \cap B)
> \end{align}
> \right.
> $$
> iv. *Chiusura della misurabilità rispetto all'ordinamento*
> $$
> A,B \in \mathcal{M}(\mathbb{R}^N), A \subseteq B \implies m_N(A) \leq m_N(B)
> $$

# 3. Insiemi Compatti Misurabili
#Definizione 
> [!def] insieme compatto misurabile
> Un insieme $E$ *compatto* in $X$ e *misurabile in* $X$ si dice *compatto-misurabile* in $X$. Ovvero se
> $$
> \mathcal{M}(X) \ni E  \Subset X
> $$
^325d78

#Teorema 
> [!thm] condizione sufficiente per l'integrabilità di un insieme
> Si ha che per un $\mathcal{M}(\mathbb{R}^N) \ni E \Subset \mathbb{R}^N$ *compatto misurabile* e per una *funzione continua* $f:E \longrightarrow \mathbb{R}$, questa è *integrabile* su $R$. Ovvero
> $$
> f:\mathcal{M}(\mathbb{R}^N) \ni E \Subset \mathbb{R}^N \longrightarrow \mathbb{R} \in \mathcal{C}^0(E) \implies f \in \mathcal{R}(E)
> $$

#Osservazione 
> [!rmk] gli insiemi compatti non sono sempre misurabili
> Non è garantita l'implicazione $K \Subset X \implies K \in \mathcal{M}(X)$. Infatti, proponiamo il seguente caso *unidimensionale* su $X=\mathbb R$.
> 
> Sia $\mathbb{Q}:=\{q_1, q_2, \ldots, q_n, \ldots \}$. Definendo l'aperto
> $$
> A=\bigcup^{\infty}_{i=1}B\left(q_i,\frac{1}{2^{i+2}}\right)
> $$
> ho il suo *complementare* $C=\mathbb{R} \diagdown A$ chiuso. Adesso, prendendo il compatto $K=C \cap [0,1] \Subset \mathbb{R}$, si può dimostrare che $K$ è *compatto* ma *non* misurabile secondo *Peano-Jordan*. Infatti abbiamo che la misura della sua frontiera è non-nulla:
> $$
> m_1 (\partial K)\neq 0 \implies K \not \in \mathcal{M}(\mathbb R)
> $$

# 4. Insiemi Compatti Trascurabili
#Definizione 
> [!def] insieme trascurabile secondo Peano-Jordan
> Un insieme si dice *trascurabile secondo Peano-Jordan* (o semplicemente *trascurabile*) se ha misura nulla, ovvero $m_N(T)=0$.

#Teorema 
> [!thm] integrabilità degli insiemi con parti trascurabili
> Sia $E \subseteq \mathbb{R}^N$ un insieme limitato con $T\subset E: m_N(T)=0$ (ovvero $T$ trascurabile), poi siano definite le funzioni $f:E \longrightarrow \mathbb{R} \in \mathcal{R}(E)$, $g:E \longrightarrow \mathbb{R}$ con $f,g$ limitate tali che
> $$
> \forall x \in E \diagdown T, f(x)=g(x)
> $$
> (ovvero le funzioni sono *uguali* sulle parti non trascurabili).
> 
> Allora $g \in \mathcal{R}(E)$ e vale che gli integrali sono gli stessi:
> $$
> \int_E f = \int_E g
> $$

L'idea del teorema appena osservato è di poter *estendere* l'integrazione su più insiemi (tra cui, ad esempio $f_\circ$). Ad esempio voglio integrare $f$ sul disco $D$; se ho $g$ definita sull'aperto $D^\circ$ tale che $g=f$ e $m_2(\partial D)=0$, allora posso trattare gli integrali ugualmente $\int_D f = \int_{D^\circ} g$.
