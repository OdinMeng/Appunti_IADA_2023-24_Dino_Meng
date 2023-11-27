---
data: 2023-11-22
corso: "[[Analisi Matematica I]]"
argomento: Teorema di Fermat
tipologia: appunti
stato: "1"
---
*Teorema di Fermat: cenno storico, enunciato e dimostrazione. Modello di applicazione (collegamento).*
- - -
# 0. Cenni storici alla figura di Pierre Fermat
*(Paragrafo scritto da me poi rielaborato da ChatGPT)*
Pierre de Fermat (_1601-1665_) è stato un giudice francese di notevole fama. Oltre al suo ruolo di giurista nelle corti francesi, Fermat coltivava la matematica come passatempo, dimostrando però di essere molto più di un dilettante: infatti si guadagno l'appellativo *"il principe dei dilettanti"*.

Tra i suoi contributi più significativi, possiamo citare la sua corrispondenza con Blaise Pascal sul problema della suddivisione della posta, il celebre teorema di Fermat (che esporremo a breve) e l'enigmatico ultimo teorema di Fermat.

Particolarmente noto è l'ultimo teorema di Fermat, su cui il matematico francese sostenne di avere una dimostrazione. Tuttavia, non la pubblicò mai, affermando che la dimostrazione _"non stava dentro nel margine dentro nella pagina"_$^{(1)}$.

Ai giorni nostri, il teorema è stato finalmente dimostrato dal matematico Sir Andrew J. Wiles, il cui trattato estende per più di 100 pagine. Insomma, forse questa *meravigliosa dimostrazione* era un po' troppo lunghetta? Forse, comparandoci a Fermat, potremmo scrivere sul nostro esame che la nostra dimostrazione è troppo meravigliosa e lunga per poter essere contenuta, ai fini di giustificare la nostra omissione di eventuali dimostrazioni.
- - -
$^{(1)}$ *«È impossibile separare un cubo in due cubi, o una potenza quarta in due potenze quarte, o in generale, tutte le potenze maggiori di 2 come somma della stessa potenza. Dispongo di una meravigliosa dimostrazione di questo teorema, che non può essere contenuta nel margine troppo stretto della pagina»* ("Arithmetica", Diofanto di Alessandria (note di P. de Fermat))
- - -
# 1. Enunciato del teorema di Fermat
#Teorema 
> [!thm] Teorema 1.1. (di Fermat)
Sia $f: I \longrightarrow \mathbb{R}$, $x_0 \in I$.
Se valgono che:
i. $x_0$ è punto di *massimo* (minimo) *relativo* ([[Funzioni#^f3e49c]]).
ii. $x_0$ è punto *interno* per il dominio $I$  ([[Punti interni, esterni e di frontiera#^c78831]]); quindi $x_0$ non si trova agli estremi.
iii. $f$ è *derivabile* in $x_0$ ([[Derivata e derivabilità#^6e7606]]).
Allora vale che
$$\boxed{f'(x_0) = 0} $$
ovvero $x_0$ è un *punto stazionario* (vedere la definizione sottostante)
A parole, questo teorema di dice che *"se $f$ è derivabile in un punto di massimo o minimo interno al dominio, allora la sua derivata è nulla."*
^8ab68b

**FIGURA 1.1.** (*Idea grafica*)
![[Pasted image 20231122213526.png]]
## Punto stazionario
#Definizione 
> [!def] Definizione 1.1. (punto stazionario, cenno)
> Se vale che $f'(x_0) = 0$, allora $x_0$ si dice *punto stazionario*
# 2. Dimostrazione del teorema di Fermat
#Dimostrazione 
**DIMOSTRAZIONE** del *teorema 1.1.* ([[#^8ab68b]])
Consideriamo un punto $x_0$ che sia *massimo relativo* per un certo intorno $r$, interno al dominio $I$ e per cui $f$ è derivabile.
Allora considero gli intervalli $I_- = [x_0-r, x_0]$ e $I_+ = [x_0, x_0+r]$.
- Nel primo intervallo abbiamo che $x_0 \geq x_0-r \implies x_0 \geq x \in I_-$ e che $f(x_0) \geq f(x) \in I_-$.
Allora considerando il rapporto incrementale $R^f_{x_0}(x)$, scopriamo che questa è sempre positiva in quanto $x-x_0 \leq 0$ e $f(x)-f(x_0) \leq 0$; allora per la *permanenza del segno* (usandone la contronominale) ([[Teoremi sui Limiti di Funzione#^06a2e3]])
$$\lim_{x \to x_0^-}R^f_{x_0}(x) \geq 0 $$
- Nel secondo intervallo abbiamo che $x_0+r \geq x_0 \implies x \in I_+, x \geq x_0$ ma comunque $f(x) \leq f(x_0)$ in quanto $x_0$ è di massimo.
Allora riconsiderando il rapporto incrementale $R^f_{x_0}(x)$ vediamo che questa è negativa, in quanto abbiamo il prodotto tra un segno *negativo* e *positivo*. Allora
$$ \lim_{x \to x_0^+}R^f_{x_0}(x) \leq 0 $$
Ma sappiamo che, in quanto $f$ è *derivabile* in $x_0$, deve esistere il limite
$$\lim_{x \to x_0}R^f_{x_0}(x) \in \mathbb{R} $$
Allora l'unico modo per far valere tutte le condizioni ottenute è quella di imporre
$$f'(x_0)  = 0 \ \blacksquare$$
# 3. Modello di applicazione
Questo teorema ci è utile in quanto ci permette di costruire un *modello* per risolvere un certo tipo di problemi: vedere dunque la *sezione 3* di [[Modelli di problemi su derivate]].