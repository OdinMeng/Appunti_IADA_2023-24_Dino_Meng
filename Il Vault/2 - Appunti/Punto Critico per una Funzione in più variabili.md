---
data: 2024-04-23
corso:
  - "[[Analisi Matematica II]]"
argomento: Punto Critico per una Funzione in più variabili
tipologia: appunti
stato: "1"
capitolo: Ottimizzazione in più variabili
---
- - -
*Definizione di punto critico per una funzione in più variabili. Classificazione dei punti critici: punti estremi e punti di sella.*
- - -
# 0. Voci correlate
- [[Test del Gradiente]]
- [[Definizione di Estremo per una Funzione in più variabili]]
# 1. Definizione di Punto Critico
Dal *test del gradiente* possiamo dare una definizione *ben posta* di un *punto critico*. 

#Definizione 
> [!def] punto critico per una funzione in più variabili
> Sia $f:E \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ una funzione *differenziabile*. Si sceglie un punto interno $\underline{x_0} \in E^\circ$.
> 
> Si dice che *"$\underline{x_0}$ è un punto critico per $f$"* se vale che
> $$
> \nabla f(\underline{x_0})=\underline{0}
> $$

Dal *test del gradiente* sappiamo che tutti i punti estremi sono *punti critici*. Ma vale il contrario? Prendiamo il seguente esempio dal *Pagani-Salsa* (esempio 1.5., p. 61)

#Esempio 
> [!exm] esempio 1.5. del pagani salsa, pagina 61
> Sia $f(x,y)=y^2-3x^2y+2x^4$. Si ha che $(0,0)$ è un *punto critico*. 
> 
> Tuttavia, è un punto estremo?
> 
> Se prendo le *"direzioni uscenti dall'origine"* ovvero del tipo $f(x,mx), m \in \mathbb{R}$ allora trovo che $(0,0)$ è un *punto di minimo locale*. Infatti ho
> $$
> f''(x)=2m^2-18mx+24x \implies f''(0)=2m^2 > 0
> $$
> Però il discorso cambia se prendiamo le *"direzioni uscenti dalle parabole"* (ovvero del tipo $f(x, mx^2)$). Infatti ho
> $$
> f''(x)=2m^2x-9mx^2+2x^4
> $$
> troviamo che considerando un qualsiasi punto dell'intorno $B(0)$, abbiamo che
> $$
> f''(x \in B(0)) < 0
> $$
> che dimostra $(0,0)$ *non essere* un punto critico.

**FIGURA 2.1.** (*Esempio 1.5. del Pagani-Salsa, p. 61*)
![[Untitled.jpg|350]]

**Conclusione.** Da qui c'è la necessità di classificare i *punti critici* in un altro modo, ovvero i *punti di sella*.

# 2. Definizione di Punto di Sella
#Definizione 
> [!def] punto di sella
>  Sia $f:E \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ una funzione *differenziabile*. Sia $\underline{x_0} \in E^\circ$ un *punto critico*. 
>  
>  Si dice che $\underline{x_0}$ *è di sella* se prendendo un qualsiasi intorno $B(\underline{x_0})$ *esistono sia punti* maggiore di $f(\underline{x_0})$ che minore di $f(\underline{x_0})$.
>  $$
>  \forall B(\underline{x_0}), \exists \underline{x^+}, \underline{x^-}: f(\underline{x^+}) > f(\underline{x}) \land f(\underline{x^-})<f(\underline{x})
>  $$

#Esempio 
> [!exm] le patatine delle Pringles
> Un esempio è $f(x,y)=x^2-y^2$ con $(0,0)$ un *punto di sella*. Infatti da un lato ho una *"curvatura positiva"* e dall'altro una *"curvatura negativa"*.
> 
> Se la figura della superficie dovesse sembrarvi familiare, molto probabilmente è dovuto al fatto che la funzione *assomiglia* alla forma delle patatine della Pringles. Infatti, la forma di questo cibo non è stato scelto a caso: questa forma conferisce una *robustezza maggiore*.

**FIGURA 2.1.** (*Pringles*)
![[Pasted image 20240423220853.png|450]]

# 3. Classificazione dei Punti Critici
Riassumiamo ciò che abbiamo visto col seguente teorema (nota questo teorema è stato scritto da me solamente per riassumere tutto).

#Teorema 
> [!thm] della classificazione dei punti critici
> Sia $f:E \subseteq \mathbb{R}^N \longrightarrow \mathbb{R}$ una funzione *differenziabile*. Si sceglie un punto interno $\underline{x_0} \in E^\circ$. Sia definito il valore del punto scelto come $\xi := f(\underline{x_0})$
> 
> Allora vale che:
> $$
> \nabla f(\underline{x_0})=0 \implies (\underbracket{\xi \in \{\max f, \min f\} }_{i.}\vee  \underbracket{\underline{x_0} \text{ è un punto di sella} }_{ii.})
> $$
> Ovvero o $\xi$ è l'*estremo* della funzione ($i.$) o $\underline{x_0}$ è il *punto di sella* ($ii.$) (ovviamente abbiamo un disgiuntivo *aut-aut*).
^7f84d0

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^7f84d0]]
Omessa, basta riferirsi alle definizioni. $\blacksquare$