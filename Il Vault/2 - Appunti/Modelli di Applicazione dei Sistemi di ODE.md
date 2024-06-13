---
data: 2024-05-16
corso:
  - "[[Analisi Matematica II]]"
argomento: Modelli di Applicazione dei Sistemi di ODE
tipologia: appunti
stato: "1"
capitolo: Equazioni Differenziali
---
- - -
*Esempio di modello che applica un sistema di ODE: il modello SIR per le epidemie.*
- - -
# 0. Voci correlate
- [[Sistema di Equazioni Differenziali del Primo Ordine]]
# 1. Ipotesi del Modello SIR
Prendiamo un *modello biologico noto*, che è in grado di descrivere la *propagazione di una malattia infettiva*. Poniamo le seguenti ipotesi:
**IPOTESI.** (*Modello SIR*)
- Si distingue la *popolazione* in *tre classi disgiunte*: *infetti*, *suscettibili* e *rimossi*,
	- *Infetti (Infected)*: sono infetti ($I$)
	- *Suscettibili (Susceptible)*: sono sani ma contagiabili $S$
	- *Rimossi (Removed)*: non è infetto e non può più ne ammalarsi ne trasmettere la malattia. O sono immunizzati alla malattia, o sono morti. $R$
- La *dinamica* della popolazione è unidirezionale, del tipo *S->I->R*
	- Posso *solo* infettare gli suscettibili
- Ho un *numero di individui* $N$ costante. Quindi si ha $I+S+R=N$, per una qualsiasi istanza del tempo.
- Ho $c$ un numero di *contatti* di ciascun individuo per l'unità di tempo $h$.
	- Ho $\xi=\frac{I}{N}$ la frazione degli infetti che un sano può incontrare
		- $\rho \in [0,1]$ è la probabilità che da tale contatto nasca un infezione
- Per ogni unità di tempo $h$ la probabilità $\gamma$ che un infetto diventi rimosso
# 2. Modello SIR
Adesso per modellizzare tutto, traduciamo le *ipotesi* in formule.
1. Notiamo che $S(t)$ dev'essere decrescente. Infatti valutando la sua variazione ho
$$
-\Delta S=S(t)-S(t+h)=\left(I(t)h\underbracket{\frac{c\rho}{N} }_{\beta}\right)S(t)
$$
Passando all'incremento infinitesimale, ottengo
$$
\frac{S(t)-S(t+h)}{h}=\left(\beta I(t)\right)S(t)
$$
Dunque ho l'equazione differenziale
$$
-S'(t)=\beta I(t) S(t) \implies \boxed{S'(t)=-\beta I(t)S(t)<0 \ (\ast)}
$$
2. Adesso studio la dinamica *I->R* (come gli infetti diventano rimossi). In questo caso è *crescente*. Valutando la sua variazione ottengo
$$
R(t+h)-R(t)=\gamma h I(t)>0 \implies \frac{R(t+h)-R(t)}{h}=\boxed{R'(t)=\gamma I(t) \ (\ast \ast)>0} 
$$
3. Dato che $I=N-R-S$, ottengo direttamente $I'(t)=\beta I(t)S(t) - \gamma I(t)$, permettendoci di passare direttamente al sistema, ponendo le condizioni iniziali $I(0)=I_0$ e $S(0)=S_0=N-I(0)-R(0)$. Nota che $R(0)$ non deve essere necessariamente $0$! Possiamo avere casi in cui ci sono già delle immunizzazioni.
$$
(PC_\Sigma):\left\{\begin{align}
& S'(t)=-\beta I(t) S(t) \ \ (1)\\
& I'(t)=\beta I(t) S(t)-\gamma I(t) \ \ (2) \\
& I(0)=I_0>0, S(0)=S_0>0
\end{align}\right.
$$
Qui $PC_\Sigma$ è un *sistema di equazioni differenziali del secondo grado e del primo ordine* ([[Sistema di Equazioni Differenziali del Primo Ordine#^e8b52e]]). Volendo possiamo porre $Y'=F(t, Y)$ con $Y(t)=(S(t), Y(t))$ e $Y^0 = (S_0, Y_0)$ ed eccetera.

# 3. Studio Qualitativo delle Soluzioni
Ho ottenuto il sistema. Adesso? Vogliamo capire *come* è fatto questo modello.
1. Per ora facciamo una serie di manipolazioni, per poter studiare qualitativamente le soluzioni. Manipolo la $(1)$ per ottenere
$$
S'(t)=-\beta I(t)S(t) \iff I(t)=-\frac{1}{\beta}\frac{S'(t)}{S(t)} \ \ (1.1)
$$
2. Sommo $(1)$, $(2)$ per ottenere
$$
S'(t)+I(t)=-\beta I(t) S(t) + \beta I(t) S(t)-\gamma I(t) = -\gamma I(t)
$$
da cui ho
$$
S'(t)+I'(t)-\gamma I(t)=0
$$
3. Uso la $(1.1)$ per ottenere
$$
S'(t)+I'(t)-\frac{\gamma}{\beta}\frac{S'(t)}{S(t)}=0
$$
Noto che tutte queste sono *derivate* di qualcosa. In particolare il terzo membro è una derivata del tipo $k \ln(S(t))$ (derivare per crederci!).
$$
\frac{\text{d} }{\text{d}t}\left(S(t)+I(t)-\frac{\gamma}{\beta}\ln(S(t))\right)=0
$$
Ovvero la *derivanda* è costante:
$$
S(t)+I(t)-\frac{\gamma}{\beta}\ln S(t) = \mu \in \mathbb{R}
$$
Esplicitando per $I$ ottengo la soluzione
$$
I(t)=-S(t)-\frac{\gamma}{\beta}\ln(S(t))+\mu
$$
4. Adesso vedo la soluzione-vettore $(S(t), I(t))$ come una *curva*. Ovvero stiamo considerando il *piano delle fasi*. Supponendo $R(0)=0$ si ha la retta $r: S(t)=N-I(t)$. Supponendo che la condizione iniziale $(S_0, I_0)$ sia *dentro* la retta, si ha una curva del tipo
![[Pasted image 20240518170043.png|500]]
5. Inoltre si dimostra che abbiamo i seguenti comportamenti asintotici: $I(t \to +\infty)=0$ e $S(t \to +\infty)=S_{\infty}>0$.
6. Per capire meglio l'andamento di $I(t)$, vedo il suo segno. Dalla $(2)$ ho
$$
I'(t)=\underbracket{\beta I(t)}_{>0}\left(S(t)-\frac{\gamma}{\beta}\right)
$$
Allora mi studio *solo* il segno di $S(t)-\frac{\gamma}{\beta}$. Se $S(t)$ supera tale parametro, è crescente; se no inizia a decresce, altrimenti se è uguale ho un *punto stazionario*. Concludo che se $S_0 \leq \frac{\gamma}{\beta}$, allora ho che l'infezione *non si propaga*, inizia subito a morire.
