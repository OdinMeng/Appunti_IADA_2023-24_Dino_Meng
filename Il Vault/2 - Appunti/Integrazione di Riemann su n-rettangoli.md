---
data: 2024-05-25
corso:
  - "[[Analisi Matematica II]]"
argomento: Integrazione di Riemann su n-rettangoli
tipologia: appunti
stato: "1"
capitolo: Calcolo Integrale in più Variabili
---
- - -
*Integrazione di Riemann su $n$-rettangoli: definizione di Riemann-integrabilità su $\mathbb{R}^N$, l'integrale. Osservazione: funzione limitata non implica Riemann-integrabile (Dirichlèt generalizzato). Teorema: condizione sufficiente per Riemann-integrabilità. Proprietà delle funzioni Riemann-integrabili.*
- - -
# 0. Voci correlate
- [[Integrabilità secondo Riemann]]
- [[Proprietà delle Funzioni Integrabili Secondo Riemann]]
# 1. Definizione di Riemann-Integrabilità su $\mathbb{R}^N$
#Definizione 
> [!def] Riemann-integrabilità su $\mathbb{R}^N$
> Sia $f:R \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ limitata con $R$ un $N$-rettangolo. Sia $\sigma$ la classe delle sue suddivisioni inferiori e $\Sigma$ quelle superiori.
> 
> Allora se vale l'uguaglianza
> $$
> \sup \sigma = \inf \Sigma
> $$
> si dice che $f$ è *Riemann-integrabile* su $R$ e la quantità dell'uguaglianza si dice l'*integrale* e lo si denota con
> $$
> \sup \sigma = \inf \Sigma = \boxed{\int_R f \iff \int\ldots \int_R f(x_1,\ldots, x_N) \ \text{d}x_1 \ldots \text{d}x_N}
> $$
> 
> Inoltre si denota la *classe delle funzioni Riemann-integrabili su $R$* come
> $$
> f \in \mathcal{R}(R)
> $$

#Esempio 
> [!exm] caso bidimensionale e tridimensionale
> Nella maggior parte dei casi faremo calcoli per $N \in \{2,3\}$. Quindi definiremo gli integrali secondo la *base canonica*, ovvero come
> $$
> \int_R f \to \iint_R f(x,y) \ \text{d}x \text{ d}y \ \vee \  \iiint_R f(x,y,z) \ \text{d}x \ \text{d}y \ \text{d}z
> $$

#Osservazione 
> [!rmk] la funzione di Dirichlet generalizzata
> Notiamo che *non tutte le funzioni limitate su $N$-rettangoli* debbono essere *Riemann-integrabili*. Infatti definiamo la *funzione di Dirichlet* ([[Esempi di Funzioni Integrabili#^fa5879]]) sull'$N$-rettangolo $R$.
> $$
> D(\underline{x}):=\left \{
> \begin{align}
> & 1, \underline{x} \in R \cap \mathbb{Q}^N \\ & 0, \underline{x} \not \in R \cap \mathbb{Q}^N
> \end{align}
> \right.
> $$
> Ho che
> $$
> \forall \delta \in \Delta (R), S(\delta, D)= m_N(R) ; s(\delta, D)=0
> $$
> Ovvero l'*estremo inferiore* è sempre raggiunto in $0$, per qualsiasi suddivisione scelgo; invece l'*estremo superiore* raggiunge sempre $1$. Allora $D \not \in \mathcal{R}(R)$. $\blacksquare$

# 2. Condizioni sufficienti per Riemann-integrabilità
Dall'osservazione precedente, abbiamo la necessità di trovare delle *condizioni sufficienti* per la *Riemann-integrabilità* delle funzioni.

#Teorema 
> [!thm] le funzioni continue sono Riemann-integrabili
> Data un campo scalare $f:R \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ limitata con $R$ rettangolo, abbiamo l'implicazione
> $$
> f \in \mathcal{C}^0(R) \implies f \in \mathcal{R}(R)
> $$
> Ovvero le continue sono Riemann-integrabili.
^871741

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^871741]]
Omessa. La dimostrazione si basa sul caso unidimensionale ([[Tipologie di Funzioni Integrabili#^dd4f09]]), per passare a $N \in \mathbb{N}$ bisogna procedere su induzione. $\blacksquare$

# 3. Proprietà delle funzioni Riemann-integrabili
Troviamo delle proprietà delle funzioni *Riemann-integrabili*.

#Proposizione 
> [!prp] proprietà delle funzioni Riemann-integrabili
> Sia $f,g:R \subseteq \mathbb{R}^N \longrightarrow \mathbb{R} \in \mathcal{R}(R)$. Allora valgono le seguenti proprietà.
> 
> i. *linearità*: per parametri reali $\alpha, \beta \in \mathbb{R}$ vale che
> $$
> \int_R (\alpha f+ \beta g)=\alpha \int_Rf + \beta \int_R g
> $$
> ii. *monotonia*
> $$
> f > g \iff \int_R f > \int_R g
> $$
> iii. *valore assoluto*
> $$
> \left|f \right| \in \mathcal{R}(R), \left|\int_R f\right| \leq \int_R |f|
> $$
> iv. *prodotto*
> $$
> f \cdot g \in \mathcal{R}(R)
> $$

