---
data: 2024-05-08
corso:
  - "[[Analisi Matematica II]]"
argomento: Esempi di Equazioni Differenziali
tipologia: appunti
stato: "1"
capitolo: Equazioni Differenziali
---
- - -
*Esempi di Modelli descritti da Equazioni Differenziali: legge di decadimento del radio, moto di un oggetto con forza elastica e resistenza laminare, il pendolo, circuito RC, e il moto di pianeti.*
- - -
# 0. Voci correlate
- [[Forza Elastica]]
- [[Resistenza dei Fluidi]]
- [[Esempi di Oscillazioni]]
- [[Forza Gravitazionale]]
# 1. Legge di Decadimento del Radio
*Nota: ricavato dal testo "Le Matematiche" di "A.D. Aleksandrov, A.N. Kolmogorov, M.A. Lavrent'ev", p.394, esempio 1*

#Esempio 
**ESEMPIO.** (*La legge di decadimento del radio*)
La legge di decadimento del radio consiste nel fatto che la velocità del decadimento è proporzionale alla quantità di radio presente. Sia $R(t)$ la quantità di radio (in grammi) nell'istante $t$. Ponendo $R(t=0)=R_0$, abbiamo l'equazione
$$
-\frac{\text{d}R}{\text{d}t}=kR
$$
dove $k$ è una *costante di proporzionalità*. Risolvendolo con un metodo che vedremo (per integrazione, Ansatz, quello che volete...) abbiamo la soluzione generale
$$
R(t)=e^{-kt+kC}=C_1e^{-kt}
$$
Considerando $R_0$, abbiamo la soluzione particolare
$$
R(t)=R_0e^{-k(t-t_0)}
$$
Notiamo che la soluzione appena ottenuta si trova in molti *campi di applicazione*, come ad esempio lo studio del raffreddamento di un corpo, con la quantità di calore perduta proporzionale alla differenza tra la temperatura del corpo e quelle dei mezzi circostanti.

# 2. Il Moto Armonico Smorzato
#Esempio 
**ESEMPIO.** (*Moto armonico smorzato*)
Vedere pagina [[Moto Armonico Smorzato]]. In sintesi abbiamo l'equazione differenziale
$$
\frac{\text{d} ^2 x}{\text{d}t^2}+2\gamma \frac{\text{d}x}{\text{d}t}+\omega^2 x = 0
$$
che viene risolta da una delle equazioni
$$
\begin{gather}
x(t)=Ae^{-\gamma t}\cos(\omega_st+\varphi)
\\ x(t)=e^{-\gamma t} \left(Ae^{-ct}+Be^{ct}\right)
\\ x(t)=e^{-\gamma t}\left(A+Bt\right)
\end{gather}
$$

# 3. Il Pendolo
#Esempio 
**ESEMPIO.** (*Il pendolo*)
Vedere pagina [[Esempi di Oscillazioni#^2b1c53]]. In sintesi abbiamo l'equazione differenziale
$$
L\frac{\text{d}^2 x}{\text{d}t^2}-g \sin x=0
$$
che non può presentare delle *equazioni esprimibile come una combinazione di funzioni elementari*, a meno che accettiamo l'approssimazione dei piccoli angoli $\sin x = x, x \to 0$.

# 4. Circuito RC
#Esempio 
**ESEMPIO.** (*Circuito RC*)
Presentiamo un *circuito elettrico* caricato da una batteria $\varepsilon$ di $V_0$ volt, collegandolo ad una *resistenza* di $R$ ohm ed un *condensatore* $C$ fahrad. 
![[Pasted image 20240508182206.png]]
Vogliamo trovare la *carica del condensatore* $V_c(t)$. Per le *leggi di Ohm* e la definizione di *resistenza* sappiamo che
$$
V_R(t)=Ri, V_C=\frac{q}{C}
$$
Per le *leggi di Kirchoff* che la somma delle tensioni si annullano sempre: abbiamo dunque
$$
V_0+V_R+V_C\equiv0
$$
che implica
$$
-V_0+Ri+\frac{q}{C}=0
$$
Sappiamo che $i$ non è altro che la derivata $q'(t)$. Allora lo presentiamo in forma
$$
\frac{\text{d}q}{\text{d}t}R+q\frac{1}{C}-V_0=0
$$
risolvendo per $q(t)$ abbiamo
$$
q(t)=Ae^{-\frac{t}{RC} }-V_0t
$$
e derivandolo otteniamo
$$
\boxed{i(t)=Ae^{-\frac{t}{RC} } }
$$
Poniamo $\tau = RC$ come la *costante del tempo* (si può dimostrare che è misurabile in secondi). Adesso troviamo $V_R(t)$ esplicitamente, sfruttando il fatto che $V_R(t=0)=V_0$ (infatti tutte le cariche vanno subito sulla resistenza), che ci dà la costante $A$
$$
V_R=RAe^{-\frac{t}{\tau} } \implies V_R(t=0)=V_0 = RAe^{-\frac{t}{\tau} } \implies A=\frac{V_0}{R}
$$
Ovvero abbiamo
$$
\boxed{V_R(t)=V_0e^{-\frac{t}{\tau} } }
$$
Adesso per trovare $V_C(t)$ basta sfruttare l'uguaglianza $V_C = V_0-V_R$ da cui si ricava
$$
V_C(t)=V_0-V_0e^{-\frac{t}{\tau} }\implies \boxed{V_C(t)=V_0\left(1-e^{-\frac{t}{\tau} }\right)}
$$
che finisce l'esempio. $\blacksquare$

# 5. Il moto dei pianeti
#Esempio 
**ESEMPIO.** (*Il moto dei pianeti*)
*Nota: Tratto dal Pagani-Salta, p. 179 esempio 1.8.*
Supponiamo che nell'origine del sistema in riferimento tridimensionale $\mathbb{R}^3$ sia posto un corpo di massa $M$ (sole) il cui campo gravitazionale di forza per unità di massa è dato dal vettore $MG\cdot \nabla\left(\frac{1}{r}\right)$, con $r$ definita come $r:=\sqrt{x^2+y^2+z^2}$, e $G$ una costante. 
Supponiamo inoltre che la massa del corpo $m$ sia significativamente più piccolo di $M$, ovvero $m \ll M$. In altre parole, consideriamo solo *il campo di forza generato dal sole* data da $\mathcal G(r)=MG\frac{1}{r^2}$.
Allora l'equazione differenziale che ci dà il moto del pianeta $m$ è dato dalle soluzioni per le posizioni $x,y,z$
$$
\left\{\begin{align}
& \ddot x = -MG \frac{x}{r^3} \\
& \ddot y = -MG \frac{y}{r^3} \\
& \ddot z = -MG \frac{z}{r^3}
\end{align}\right.
$$
Notiamo che dalle soluzioni possiamo ricavare le *leggi di Keplero*.
