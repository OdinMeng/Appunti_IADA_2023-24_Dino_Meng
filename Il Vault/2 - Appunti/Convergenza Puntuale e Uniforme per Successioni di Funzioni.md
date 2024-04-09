---
data: 2024-03-13
corso:
  - "[[Analisi Matematica II]]"
argomento: Convergenza Puntuale e Uniforme per Successioni di Funzioni
tipologia: appunti
stato: "1"
capitolo: Successioni e Serie di Funzioni
---
- - -
*Definizione di convergenza puntuale e uniforme per successioni di funzioni. Esempi di funzioni puntualmente e uniformemente convergenti. Teorema di caratterizzazione della convergenza uniforme. Interpretazione geometrica della convergenza uniforme.*
- - -
# 1. Definizioni di Convergenza Puntuale e Uniforme
#Definizione 
> [!def] convergenza puntuale di una successione di funzioni
> Sia $(f_n)_n$ una *successione di funzioni*, in particolare del tipo
> $$
> f_n: E \longrightarrow \mathbb{R}
> $$
> (ovvero di *variabile reale*). Si dice che $(f_n)_n$ *converge puntualmente sul dominio* $E$ *ad una funzione* $f:E \longrightarrow \mathbb{R}$, se vale che *per ogni punto del dominio esiste il limite* $\lim_n f_n(x)=f(x)$. Ovvero, alla *"Cauchy"*, se vale la condizione
> $$
> \begin{gather}
> \forall x \in E, \forall \varepsilon >0, \exists \bar{n}=\bar{n}(\varepsilon,x): \\ n \geq \bar n \implies |f_n(x)-f(x)| \leq \varepsilon
> \end{gather}
> $$

#Osservazione 
> [!rmk] la nozione di convergenza puntuale dipende dal punto
> Come potrebbe suggerire il nome della *"convergenza puntuale"*, questo tipo di *convergenza* dipende dal punto $x \in E$ scelto. Infatti, la notazione $\bar{n}(\varepsilon, x)$ vuole *enfatizzare* il fatto che il valore limite $\bar n$ dipende dal punto $x$ scelto.
>  
> Se vogliamo invece *"liberarci"* da questa scelta, dobbiamo vedere la nozione di *convergenza uniforme*.

#Definizione 
> [!def] convergenza uniforme di una successione di funzioni
> Sia $(f_n)_n$ una *successione di funzioni a variabile reale*, ovvero del tipo $f_n: E \longrightarrow \mathbb{R}$. 
> Si dice che $(f_n)_n$ *converge uniformemente alla funzione* $f: E \longrightarrow \mathbb{R}$ se vale che
> $$
> \begin{gather}\forall \varepsilon>0, \exists \bar{n}=\bar{n}(\varepsilon): \forall x \in E,\\ n \geq \bar{n} \implies |f_n(x)-f(x)| \leq \varepsilon\end{gather}
> $$

#Osservazione 
> [!rmk] il legame tra convergenza puntuale e uniforme
> Si nota che la *convergenza uniforme* impone una *condizione più forte* della *convergenza puntuale*. Infatti, una *successione di funzioni uniformemente convergente* è anche una *successione di funzioni puntualmente convergente*.

# 2. Teorema di caratterizzazione della convergenza uniforme
#Teorema 
> [!thm] di caratterizzazione della convergenza uniforme
> Sia $(f_n)_n$ una *successione di funzioni*. Sono equivalenti:
> $$
> \begin{gather}
> (f_n)_n \text{ converge uniformemente a } f:E \longrightarrow \mathbb{R} \\
> \Updownarrow \\
> \lim_n \left(\sup_{x \in E}  \left|f_n(x)-f(x) \right|\right)=0
> \end{gather}
> $$
^223541

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^223541]]
Questa dimostrazione sull'equivalenza (dato che ci troviamo in uno *spazio metrico*)
$$
\forall x \in E, |f_n(x)-f(x)| \leq \varepsilon \iff \sup_{x \in E}\left|f_n(x)-f(x) \right| \leq \varepsilon
$$
Ovvero se il limite tende ad annullarsi. $\blacksquare$

#Osservazione 
> [!rmk] il vantaggio del teorema
> Il *vantaggio principale* di questo teoremino è l'*eliminazione* del quantificatore $\forall$; infatti basta controllare l'*estremo superiore* dello *scarto* $|f_n(x)-f(x)|$. 

#Osservazione 
> [!rmk] l'interpretazione geometrica di convergenza uniforme
> Vogliamo capire cosa *vuol dire* che una *successione di funzioni* è *uniformemente convergente* ad una funzione $f(x)$. 
> 
> Supponiamo che una *successione di funzioni* $(f_n)_n$ sia *uniformemente convergente* verso $f$. Possiamo dunque disegnare la funzione $f(x)$. Prendiamo dunque le sue funzioni traslate $(f-\varepsilon)(x)$ e $(f+\varepsilon)(x)$; il significato della *convergenza uniforme* è che ad un certo numero $\bar{n} \in \mathbb{N}$ in poi, le funzioni $f_n$ saranno *sempre* contenute nell'intervallo $f-\varepsilon, f+\varepsilon$ (*figura 2.1.*).

**FIGURA 2.1.** (*Interpretazione geometrica della convergenza uniforme*)
![[Pasted image 20240313194526.png]]

# 3. Esempi di Successioni di Funzioni Convergenti
#Esempio 
> [!exm] successione puntualmente convergente
> Sia $f_n(x)$ definita come
> $$
> f_n(x)=\frac{nx}{1+n|x|}=\begin{cases}\frac{nx}{1+nx}, x>0 \\ 0, x=0 \\ \frac{nx}{1-nx}, x<0 \end{cases}
> $$
> Vogliamo controllare la *convergenza puntuale* di questa successione di funzioni.
> 
> Per approcciarci a questo problema, dividiamo le casistiche.
> Sia $x>0$. Allora prendo il limite
> $$
> \lim_n \frac{nx}{1+nx}=1
> $$
> Analogamente per $x=0$, la successione converge a $f(x)=0$ e per $x<0$ a $f(x)=-1$. Dunque la successione converge a $f(x)$ definita come
> $$
> f(x)=\begin{cases}1, x>0 \\ 0, x=0\\-1, x<0\end{cases}
> $$
> Dunque sicuramente $(f_n)_n(x)$ converge puntualmente verso $f(x)$. Ovvero, abbiamo il grafico in *figura 3.1.*

**FIGURA 3.1.** (*Grafico delle successioni*)
![[Pasted image 20240313192105.png]]

#Esempio 
> [!exm] funzione puntualmente convergente all'iperbola
> Sia $f_n:[0,1] \longrightarrow \mathbb{R}$ definita come
> $$
> f_n(x)= \begin{cases}n^2x, 0 \leq x \leq \frac{1}{n} \\ \frac{1}{x}, \frac{1}{n}<x\leq 1\end{cases}
> $$
> Questa successione di funzioni converge puntualmente a $f(x)=\frac{1}{x}$. Infatti, supponendo un $x>0$ *vicino a* $0$, ci sarà sempre un numero $\bar{n} \in \mathbb{N}$ tale che $0<\frac{1}{\bar{n} }<x$ ([[Conseguenze dell'esistenza dell'estremo superiore#^16a1fe]]). Allora esisterà sempre un $\bar{n}$ tale che valga il limite la funzione cade sulla *seconda parte* $\frac{1}{x}$. Dunque ho il limite
> $$ 
> \lim_n f_n(x)=\frac{1}{x}
> $$
> Questo si visualizza nella. *figura 3.2.*.

**FIGURA 3.2.** (*Visualizzazione della successione di funzioni per $n=10$, scalata per $k=0.186$*)
![[Untitled.png|500]]

#Esempio 
> [!exm] funzione non uniformemente convergente
> Vogliamo vedere un caso di una funzione *non uniformemente* convergente, ma solo *puntualmente convergente*. 
> Prendiamo $f_n(x)=x^n$, con $E=(0, 1)$. Questa è chiaramente *puntualmente convergente*, dal momento che $\lim_n f_n(x)=0$. 
> Adesso verifichiamo la *convergenta uniforme* di questa funzione. Prendiamo prima di tutto l'estremo superiore dei scarti $f_n(x)-f(x)$;
> $$
> \sup_{0<x<1}|f_n(x)-f(x)|=\sup_{0<x<1}|x^n-0| = \sup_{0<x<1}x^n = 1^n
> $$
> Adesso, prendendo il limite ho
> $$
> \lim_n 1^n = 1
> $$
> che ci dice che questa funzione *non* è *uniformemente convergente*.
> 
> Infatti, questa plottando questa successione di funzioni, troviamo che questa è *compatibile* con l'*interpretazione geometrica della convergenza uniforme*; ad un certo punto le funzioni $f_n(x)$ salgono sempre in una maniera *"incontrollabile"* verso $1$ (*figura 3.3.*)

**FIGURA 3.3.** (*Funzione non uniformemente convergente*)
![[Untitled-1.png|450]]



