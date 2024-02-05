---
data: 2023-11-06
corso: "[[Analisi Matematica I]]"
argomento: Funzione esponenziale e Logaritmica
tipologia: appunti
stato: "1"
---
*Definizione della funzione esponenziale su N; prime proprietà dell'esponenziale; estensione della definizione a Z; ulteriori proprietà; estensione a Q; ulteriori proprietà e limiti notevoli; definizione dell'esponenziale sui reali R; proprietà finali. Invertibilità di $\exp$, funzione logaritmica; proprietà di $\log$.*
- - -
# 1. Funzione esponenziale
In questa parte definiremo la *funzione esponenziale* partendo dalla definizione *"basilare"* su $\mathbb{N}$, poi espandiamo l'insieme su cui definiamo questa funzione fino a $\mathbb{R}$. Ovviamente per semplificare lo studio si proporrà poi la definizione *"generale"* riassunta.
## L'esponenziale sui naturali
#Definizione 
> [!def] Definizione 1.1. (definizione induttiva dell'esponenziale)
Consideriamo il numero $$a \in (1, +\infty)$$possiamo definire *l'esponenziale* come $$a^n := \underbrace{a\cdot \ldots \cdot a}_{n\text{ volte}}$$

#Proposizione 
> [!prop] Proposizione 1.1. (le prime proprietà dell'esponenziale sui naturali)
Allora con questa definizione abbiamo le seguenti proprietà.$$\begin{aligned} &a^{n_1} \cdot a^{n_2} = a^{n_1 + n_2} \\ & (a^{n_1})^{n_2} = a^{n_1 \cdot n_2} \\ & n_1 < n_2 \implies a^{n_1}<a^{n_2}\\ & 1 < a_1 < a_2 \implies a_1^n < a_2^n \\ &\lim_n a^n = +\infty\end{aligned}$$ 
^df6840
## L'esponenziale sugli interi
#Definizione 
> [!def] Definizione 1.2. (l'esponenziale sui numeri interi)
Ora voglio dare un significato a $$a^m, m \in \mathbb{Z}$$Allora la definisco come $$a^m := \begin{cases}a^m \text{ se }m \in \mathbb{N} \\ \frac{1}{a^{-m}} \text{ se }m \in \mathbb{Z} \text{ e }m <0 \end{cases}$$

#Proposizione 
> [!prop] Proposizione 1.2. (ulteriori proprietà dell'esponenziale)
Con questa definizione continuano a valere le proprietà date nella *proposizione 1.1.*, in particolare: $$\begin{aligned}&a^{m_1}\cdot a^{m_2} = a^{m_1 + m_2} \\ & (a^{m_1})^{m_2} = a^{m_1 \cdot m_2} \\ &m_1 < m_2 \implies a^{m_1} < a^{m_2} \\ & 1 < a_1 < a_2 \implies a_1^m < a_2^m \\ & \lim_{m \to +\infty}a^m = +\infty \\ \text{Novità: }&\lim_{m \to -\infty}a^m = 0\end{aligned}$$
## L'esponenziale sui razionali
#Definizione 
> [!def] Definizione 1.3. (l'esponenziale sui numeri razionali)
Ora voglio dare un significato a $$a^p , p \in \mathbb{Q}$$allora posso rappresentare $p$ come frazione ([[Richiami sui Numeri Razionali]]), ovvero come $$p = \frac{m}{n}, m \in \mathbb{Z}; n\in\mathbb{N}\diagdown\{0\}$$Ora posso definire $$a^p := a^{\frac{m}{n}}= \sqrt[n]{a^m}$$

#Osservazione 
> [!oss] Osservazione 1.1. (l'esponenziale rimane unico per un qualsiasi $p \in \mathbb Q$)
Con questa definizione sembra che ci possa essere il seguente problema: se un numero razionale $p$ può essere rappresentata in modi diversi, ad esempio $$2 = \frac{2}{1}=\frac{4}{2}$$non è possibile che $a^p$ può avere risultati diversi; ovvero è possibile che $$p = \frac{m_1}{n_1}=\frac{m_2}{n_2}\implies\sqrt[n_1]{a^{m_1}} \stackrel{\text{?}}\neq\sqrt[n_2]{m_2}$$La risposta è *"no"*. Ora vediamo di dimostrarla.
>
Partiamo dal presupposto che $$\frac{m_1}{n_1}=\frac{m_2}{n_2} \implies m_1n_2 = m_2n_1$$Allora $$\begin{align}\sqrt[n_1]{a^{m_1}} &\stackrel{?}= \sqrt[n_2]{a^{m_2}} \\ a^{m_1}&\stackrel{?}= ({\sqrt[n_2]{a^{m_2}}})^{n_1} = \sqrt[n_2]{a^{m_2 \cdot n_1}} \\ a^{m_1n_2} &\stackrel{}=a^{m_2n_1} \text{ OK } \blacksquare \end{align}$$

#Proposizione 
> [!prop] Proposizione 1.3. (ulteriori proprietà dell'esponenziale sui razionali)
Ora si potrebbe dimostrare che continuano a valere le proprietà di prima (*proposizioni 1.2, 1.3.*), ovvero $$\begin{align}a^{p_1}\cdot a^{p_2} = a^{p_1 + p_2}\ & \ | \  \ (a^{p_1})^{p_2} = a^{p_1p_2} \\ p_1 < p_2 \implies a^{p_1}< a^{p_2} \ & \ | \ \ 1 < a_1 < a_2 \implies a_1^p < a_2^p \\ \lim_{p \to +\infty} a^p = +\infty \ &\ | \ \ \lim_{p \to -\infty}a^p = 0 \\ \text{Novità} &: \lim_{p \to p_0}a^p = a^{p_0} \end{align}$$

^c127ca

**DIMOSTRAZIONE** dell'*ultima proprietà della proposizione 1.3.* ([[#^c127ca]]) 
Dimostriamo la *"nuova"* proprietà ovvero $$\lim_{p \to p_0}a^p = a^{p_0}$$Ai fini di questa dimostriamo utilizziamo il limite notevole di una successione ([[Esempi di Limiti di Successione#^492158]]), ovvero $$\lim_{n} \sqrt[n]{a} = 1$$Allora si potrebbe, secondo la *definizione 1.3.*, riscriverla come $$\lim_n a^{\frac{1}{n}} = 1 \implies \lim_{p \to 0}a^p = 1$$Adesso consideriamo $$\lim_{p \to p_0}a^p - a^{p_0} = \underbrace{a^{p_0}}_{\text{valore fisso}}\cdot\underbrace{(a^{p-p_0}-1)}_{\text{tende a }a^0-1=1-1=0} \to 0$$Pertanto $$\lim_{p \to p_0}a^p = a^{p_0} \ \blacksquare$$
## L'esponenziale sui reali
Finalmente definiamo l'esponenziale con l'esponente reale; in realtà sarebbe possibile definirla mediante gli assiomi dei numeri reali ([[Assiomi dei Numeri Reali]]), in particolare con i *tagli di Dedekind*, tuttavia ai fini didattici si sceglie di usare una definizione più semplice.

#Definizione 
> [!def] Definizione 1.4. (l'esponenziale sui reali)
 Adesso voglio definire $$a^x, x \in \mathbb{R}$$Posso usare il *teorema sulle successioni monotone* ([[Limite di Successione#^b438ed]]) che enuncia il seguente: *"Una successione monotona crescente e limitata è sempre convergente"*.
 >
Allora considero la successione a valori in $\mathbb{Q}$ $$(p_n)_n$$che sia *convergente* al valore $x$. Ci chiediamo se una successione del genere esiste; la risposta qui è sì. Infatti, sfruttando la densità dei razionali nei reali ([[Conseguenze dell'esistenza dell'estremo superiore#^e279b1]]) allora sappiamo che partendo da $1, x$ esiste un valore *razionale* tra questi due e questo può essere il candidato ideale per $p_0$; dopodiché prendiamo $p_1, x$ dove deve starci almeno $p_2$. 
Poi volendo si può andare all'infinito per la *densità di Q in R*. Quindi $(p_n)_n$ è definita su tutti i valori in $\mathbb{N}$.
>
Concludendo, definisco $$a^x := \lim_n a^{p_n}, \lim_n p_n = x$$Inoltre $$0<a<1 \implies a^x = (\frac{1}{a})^{-x}$$
Osserviamo poi che $a^{p_n}$ rimane monotona in quanto è necessaria per far valere il teorema.

#Proposizione 
> [!prop] Proposizione 1.4. (proprietà dell'esponenziale sui reali)
Si può mostrare che continuano a valere tutte le proprietà elencate sopra; $$\begin{align} \forall x_1, x_2; & \ a^{x_1} a^{x_2} = a^{x_1+x_2} \ | \  (a^{x_1})^{x_2} = a^{x_1x_2}  \\ & \ x_1 < x_2 \implies a^{x_1}<a^{x_2} \\ & \ 1 < a_1 <a_2 \implies a_1^x < a_2^x \\ & \lim_{x \to +\infty}a^x = +\infty \\ & \lim_{x \to -\infty}a^x = 0 \\ & \  \lim_{x \to x_0} a^x = a^{x_0}\end{align}$$
## Riassunto generale
Dopo il nostro viaggio odisseico per definire la funzione esponenziale, possiamo finalmente definire $a^x$ nella maniera più generale possibile.

#Definizione 
> [!def] Definizione 1.5. (funzione esponenziale)
Sia $a>1, a \in\mathbb{R}$, è definita una *funzione* ([[Funzioni]]) $$\exp_a : \mathbb{R} \longrightarrow (0, +\infty); x \to \exp_a(x)=a^x$$e la chiamo *funzione esponenziale di base $a$*. 
>
Da notare che se invece abbiamo $0 < a < 1$, allora basta definire $$\exp_a x:=(\frac{1}{a})^{-x}$$
Allora
$$\exp_a(x) = \begin{cases}a^x, x\geq 0 \\ \left(\frac{1}{a}\right)^{-x}, x < 0 \\ \end{cases}$$
^8c9812

#Teorema 
> [!thm] Teorema 1.5. (le proprietà della funzione esponenziale)
Valgono le seguenti:
>1. $\exp_a(0) = 1$ 
>2. $\exp_a(x_1) \cdot \exp_a(x_2) = \exp_a(x_1 + x_2)$
>3. $\exp_a(x_1)^{x_2} = \exp_{\exp_{a}(x_1)}(x_2)  = \exp_a(x_1x_2)$ 
>4. $\exp$ è *monotona crescente*
>5. $\exp$ è *suriettiva*
>6. I limiti di $\exp_a$ $$\begin{align} &\lim_{x \to -\infty}\exp_ax = 0 \ ; \ \lim_{x \to +\infty}\exp_a x = +\infty \\ &\lim_{x \to x_0} \exp_a x = \exp_a x_0 \end{align}$$

**FIGURA 1.5.** (*Grafico generale di $\exp$*)
Si propone il seguente grafico di $\exp$ realizzato col sito [Desmos](https://www.desmos.com/calculator/9zzgqcxd1r).
![[Pasted image 20231106214815.png]]

# 2. Funzione logaritmica
#Osservazione 
> [!oss] Osservazione 2.1. (l'esponenziale è biiettivo, dunque invertibile.)
Osservando dalle *proprietà dell'esponenziale*, sappiamo che se $\exp_a$ è sia *suriettiva* che *iniettiva*, allora deve esistere la funzione inversa $\exp_a^{-1}$. Allora possiamo definire la seguente funzione.

#Definizione 
> [!def] Defnizione 2.1. (funzione logaritmica)
Chiamo la *funzione logaritmica* la funzione inversa $\exp_a^{-1}$ come $\log_a$: $$\log_a : (0, +\infty) \longrightarrow \mathbb{R}$$e si ha $$\begin{align}&\forall x \in \mathbb{R}, \log_a(\exp_ax) = x \\ &\forall y \in (0, +\infty), \exp_a(\log_ay) =y\end{align}$$

#Teorema 
> [!thm] Teorema 2.1. (le proprietà del logaritmo)
Per un $a \in \mathbb{R}$, valgono le seguenti:
>1. $\log_a(1) = 0$ (*per definizione*)
>2. $\log_a(x_1) + \log_a(x_2) = \log_a(x_1x_2)$
>3. $\log_a(x^y) = y\log_a(x)$ 
>4. $a > 1 \land 0<x_1<x_2 \implies \log_a(x_1) < \log_a(x_2)$ 
>5. Limiti $$\begin{align}&\lim_{x \to 0^+}\log_ax = -\infty\ ; \ \lim_{x \to +\infty} \log_a x = +\infty \\ & \lim_{x \to x_0}\log_a x= \log_a x_0 \end{align}$$
^16fe54
# 3. Riassunto finale
**FIGURA 3.1.** Come riassunto finale si propongono i grafici di $\exp_a$ e $\log_a$ per $a=1.96$. Anche questo ultimo grafico è realizzato su [Desmos](https://www.desmos.com/calculator/jjd7ycm7gt). Inoltre con i limiti ([[Esempi di Limiti di Funzione]]) osserveremo che le funzioni $\exp, \log$ crescono e decrescono con una *"velocità"* più grande delle altre funzioni, in particolare le funzioni *razionali* per qualsiasi grado.
![[Pasted image 20231106220713.png]]