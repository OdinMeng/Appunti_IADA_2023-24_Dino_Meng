---
data: 2023-11-11
corso: "[[Analisi Matematica I]]"
argomento: Definizione di continuità
tipologia: appunti
stato: "1"
---
*Definizione puntuale e "globale" della continuità di una funzione. Esempi di funzioni continue*
- - -
# 0. Osservazione preliminare
#Osservazione 
> [!oss] Osservazione 0.a. (osservazione preliminare)
Sia $E \subseteq \mathbb{R}$ e $x_0 \in E$. Da notare che ciò implica che $x_0 \in \mathbb{R}$; quindi $x_0$ in questo caso è un numero.
Allora abbiamo due possibilità:
>1. $x_0$ è di accumulazione per $E$ ([[Punti di aderenza e di accumulazione]], **DEF 2.1.**) 
>2. $x_0$ non è di accumulazione per $E$ (ovvero un punto isolato)
>$$$$
# 1. Definizione puntuale e globale
#Definizione
> [!def] Definizione 1.1. (Funzione continua per un punto)
> Siano $E\subseteq \mathbb{R}$, $x_0 \in E$ e $f : E \longrightarrow \mathbb{R}$: ovvero $f$ è una funzione che ha per dominio $E$, $x_0$ un punto del dominio.
> Allora $f$ si dice *funzione continua nel punto $x_0$* se si verifica uno dei due casi:
> **CASO 1.** $x_0$ è un punto isolato per $E$ (la possiamo considerare una specie di *"caso speciale"*)
> **CASO 2.** $x_0$ è un punto di accumulazione e si verifica il limite 
> $$\lim_{x\to x_0\in\mathbb{R}}f(x) = f(x_0) \in \mathbb{R}$$
> Usando la nozione $\varepsilon-\delta$ del limite, avremmo 
> $$\begin{gather}\forall \varepsilon>0 ,\exists \delta > 0: \forall x \in E\\|x-x_0|<\delta \implies |f(x)-f(x_0)|<\varepsilon\end{gather}$$
^ddf65d

#Osservazione 
> [!oss] Osservazione 1.1. (il secondo caso è interessante)
Il *CASO 2.* è la parte interessante della definizione della continuità: stiamo sostanzialmente dicendo che $f$ è continua in $x_0$ se esiste il limite per $x \to x_0$ e il limite è proprio il valore della funzione. 

#Osservazione 
> [!oss] Osservazione 1.2. (differenza tra continuità e limite)
Notiamo che in questa definizione c'è una differenza dalla definizione originaria del limite: infatti la prima parte che rappresenta l'intorno $\delta$ di $x_0$ sarebbe 
$$0<|x-x_0|<\delta$$
però in questa definizione l'abbiamo tolta, perché $x_0$ appartiene al dominio, quindi è possibile avere $x=x_0 \implies f(x) = f(x_0)$, di conseguenza $|f(x)-f(x_0)|=0$; quindi in questo caso non escludiamo più che $x-x_0 = 0, f(x)-f(x_0)=0$. 
Inoltre questa "eccezione" è utile in quanto possiamo comprendere il *CASO 1.*, ovvero quando $x_0$ è un punto isolato: infatti questo significa che esiste un intorno di $x_0$ che contiene solo se stesso.

**FIGURA 1.1.** (*l'idea grafica della continuità*)
![[Pasted image 20231220174414.png]]

Ora presentiamo la definizione *"globale"* della funzione, che è una semplice estensione della definizione di prima: al posto del singolo punto ci mettiamo un insieme di punti.

#Definizione 
> [!def] Definizione 1.2. (Funzione continua su un insieme)
> Sia $f:E \longrightarrow \mathbb{R}$
> Se $f$ è *continua* in tutti i punti di $E$, allora $f$ si dice *continua* (e basta).
^d2f56f

# 2. Esempi di funzioni continue e discontinue
#Esempio
> [!ex] Esempio 2.1. (Funzione Constante).
> Sia 
> $$\begin{align}f:& \  \mathbb{R} \longrightarrow \mathbb{R}\\ &\ x \mapsto c\end{align}$$
> Allora $f$ è continua, in quanto 
> $$\forall x_0 \in \mathbb{R}, \lim_{x \to x_0}c=c$$
> Infatti basta scegliere un qualsiasi valore $\delta$ per qualsiasi $\varepsilon$.

#Esempio 
> [!ex] Esempio 2.2. (Funzione identità).
> $$\text{id}: \mathbb{R} \longrightarrow \mathbb{R}; x \mapsto x$$
> La funzione $\text{id}$ è *continua*: basta scegliere $\varepsilon = \delta$.
^3405fe

#Esempio 
> [!ex] Esempio 2.3. (Funzione Potenza).
> $$p_n: \mathbb{R} \longrightarrow \mathbb{R}; x \mapsto x^n$$
> La funzione $x^n$ è *continua*, infatti è possibile dimostrare che
> $$\lim_{x \to x_0}x^n = x_0^n$$
> mediante gli [[Esempi di Limiti di Funzione]].
^dfa8a1

#Esempio 
> [!ex] Esempio 2.4. (Funzione Radice).
> $$\sqrt[n]{\ }: [0, +\infty[ \longrightarrow \mathbb{R}; x\mapsto \sqrt[n]{x}$$
> Anche questa funzione è *continua*, anche se per adesso facciamo finta di conoscere 
> $$\forall x_0 \in (0, +\infty), \lim_{x \to x_0}\sqrt[n]{x} = \sqrt[n]{x_0}$$
> mediante dei teoremi sulle funzioni inverse che definiremo in seguito.

#Esempio 
> [!ex] Esempio 2.5. (Funzione Seno).
> $$\sin: \mathbb{R} \longrightarrow [-1,1]; x \mapsto \sin x$$
> In [[Esempi di Limiti di Funzione]] abbiamo dimostrato che $$\lim_{x \to x_0}\sin x = \sin x_0$$
> quindi la funzione seno $\sin$ è *continua*.

#Esempio 
> [!ex] Esempio 2.6. (Funzione Esponenziale).
> $$\exp : \mathbb{R} \longrightarrow ]0, +\infty[; x \mapsto e^x$$
> Questa è *continua* in quanto $$\lim_{x \to x_0}e^x = e^{x_0}$$
> ed è il figlio del fatto che $$\lim_n \sqrt[n]{x} = 1$$

#Esempio 
> [!ex] Esempio 2.7. (Funzione di Heaviside).
> Definiamo 
> $$\text{H}: \mathbb{R} \longrightarrow \mathbb{R}$$
> dove 
> $$\text{H}(x):= \begin{cases}0 \text{ se }x \leq 0\\ 1 \text{ altrimenti} \end{cases}$$
> Allora la funzione $\text{H}$ *non* è *continua*: infatti il limite 
> $$\lim_{x \to 0}\text{H}(x)$$
> non esiste, visto che da destra tende a $1$ e da sinistra a $0$. 
> Infatti questa è una funzione *discontinua* e definiamo questo tipo di *discontinuità* come la discontinuità *"salto"* oppure *"di prima specie"*.

#Osservazione 
> [!oss] Osservazione 2.7. (la funzione di Heaviside è continua altrove)
Notare che la funzione di Heaviside $\text{H}(x)$ è comunque *continua* in tutti gli altri punti diversi da $0$.

**NOTIZIE STORICHE.** Oliver Heaviside (_1850-1925_) è stato una figura significativa nella storia della matematica. La sua carriera era inizialmente legata a una compagnia che gestiva le allora innovative linee telegrafiche. Allora, il giovane Heaviside, dotato di una mente autodidatta e una passione per la matematica, utilizzò le sue competenze per sviluppare concetti che avrebbero avuto un impatto duraturo nel suo campo, in particolare nell'ambito dell'elettricità. Una delle sue pietre miliari fu lo studio delle equazioni differenziali con coefficienti discontinui, tra cui la funzione appena menzionata, che avrebbe dimostrato grande rilevanza nella teoria elettrica.
*(Paragrafo rielaborato da ChatGPT)*

**FIGURA 2.7.** (*funzione di Heaviside*)
![[Pasted image 20231220174619.png]]

> [!ex] Esempio 2.8. (Funzione di Dirichlet).
> $$D: [0,1] \longrightarrow [0,1]; x \mapsto D(x):\begin{cases}1 \text{ se }x \in \mathbb{Q} \\ 0 \text{ altrimenti}\end{cases}$$
> Questa è una funzione *discontinua* in quanto non esiste il limite 
> $$\lim_{x \to x_0}D(x)$$
> per nessun valore di $x_0$ per la densità di $\mathbb{Q}$ in $\mathbb{R}$ ([[Conseguenze dell'esistenza dell'estremo superiore#^e279b1]]); vale anche il viceversa con la densità degli irrazionali nei razionali. Allora $D$ è *discontinua* in ogni punto del suo dominio.
