---
data: 2024-05-16
corso:
  - "[[Analisi Matematica II]]"
argomento: Modello di Applicazione delle ODE lineari
tipologia: appunti
stato: "1"
capitolo: Equazioni Differenziali
---
- - -
*Modello biologico di applicazione delle ODE lineari: il decadimento del carbonio. Ipotesi, modellizzazione e risultato finale.*
- - -
# 0. Voci correlate
- [[Equazioni Differenziali Lineari del primo ordine]]
# 1. Ipotesi del Modello
Vediamo un *esempio biologico* per le *equazioni differenziali lineari*.

**IPOTESI.** (*Decadimento del carbonio degli organismi*)
- Gli organismi scambiano carbonio
	- Alla morte questo scambio *cessa*, dunque perdono *concentrazione di carbonio*
- Supponiamo di avere in $t_0$ una quantità $X$ di carbonio
- Poi in $t_0+5730$ (incremento di un periodo di tempo) una quantità $0.5 X$ di carbonio.

**MODELLO.** (*Decadimento del carbonio*)
- Dalle ipotesi possiamo ipotizzare il seguente modello matematico. Sia definita ricorsivamente $(C_n)_n$ la *successione* che indica la concentrazione del carbonio nei vari scarti temporali.
	- In particolare si definisce $C_N$ come la *"concentrazione del carbonio dopo $t_0 + N(5730)$ anni*.
	- Come caso base poniamo $C_0$ la concentrazione del carbonio al tempo $t_0$. Ovvero $C_0=X$.
- In base a questa legge ho che la *concentrazione* ha un andamento *"esponenziale"*, con base minore di uno. In particolare
$$
C_N = \frac{C_0}{2^N}
$$
- Per *trovare le variazioni istantanee*, passo dal *continuo al discreto*.
	- Prima di tutto calcolo lo scarto discreto, che è calcolata come
$$
	\begin{gather}
C_{K+1}-C_K = \frac{1}{2}C_K - C_K = -\frac{1}{2}C_K \\
\frac{C_{K+1}- C_K }{\Delta t}=-\frac{1}{2\Delta t}C_K
\end{gather}
$$
	- Adesso passo al discreto, ponendo il parametro $\frac{1}{2\Delta t}$ come un parametro sconosciuto $\tau$ e interpretando il membro sinistro come una derivata.
$$
C'(t)=-\frac{1}{\tau}C(t)
$$
	- Questa è un'*equazione differenziale ordinaria del primo ordine lineare omogenea* facilmente risolvibile, dandoci
$$
C(t)=C_0 e^{-\frac{t-t_0}{\tau} }
$$
	- Per trovare $\tau$ uso le condizioni iniziali e il fatto che $\Delta t=5730$. 
$$
\frac{C_0}{2}=\frac{C(t_0)}{2}= C(t_0+ \Delta t)=C_0 \exp\left(\frac{\Delta t}{\tau}\right)=C_0 \exp\left(-\frac{5730}{\tau}\right)
$$
	- Isolando la $\tau$ si ottiene
$$
\tau=\frac{5730}{\ln 2} \approx 8266.64
$$
- Abbiamo finito con la costruzione del modello, con l'*equazione della concentrazione del carbonio* data da
$$
C(t)=C_0 \exp\left(-\frac{t-t_0}{8266.64}\right)
$$
- Siamo pronti per rispondere ad eventuale domande.

**ESEMPIO.** (*Domanda*)
Supponiamo di aver scoperto un fossile vegetale, con $0.75$ concentrazione di carbonio rispetto ad altri organismi attualmente viventi. Vogliamo stimare l'età di questo fossile.
Applico il modello $C(t)$, ponendo $t=2024$. Così abbiamo
$$
C(2024)=(0.75)C_0
$$
Per trovare il suo tempo iniziale $t_0$ (ovvero la data in cui ha iniziato a cessare di vivere), usiamo il modello. In particolare
$$
\begin{align}
C(2024)&=C(t_0)\exp\left(-\frac{2024-t_0}{\tau}\right)
\\
&=C_0 \exp\left(-\frac{2024-t_0}{\tau}\right)
\end{align}
$$
Adesso pongo l'uguaglianza
$$
C_0 (0.75)=C_0\exp\left(-\frac{2024-t_0}{\tau}\right)
$$
Facendo i calcoli, ottengo
$$
t_0 = 2024 +\tau \ln (0.75)\approx -353
$$
Ovvero siamo circa nel 431 avanti cristo. $\blacksquare$