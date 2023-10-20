---
data: 2023-10-16
corso: "[[Analisi Matematica I]]"
argomento: Forma Trigonometrica dei Numeri Complessi
tipologia: appunti
stato: "0"
---
*Rappresentazione dei numeri complessi come un $z$ associato a modulo e argomento; argomento come la classe di equivalenza dell'argomento principale; nuova interpretazione della moltiplicazione; esempi; Formula di De Moivre.*
- - -
# 1. Rappresentazione trigonometrica
Oltre alla rappresentazione *"algebrica"* dei numeri complessi $\mathbb{C}$ ([[Rappresentazione dei Numeri Complessi]]), è possibile anche considerare un'altra rappresentazione che fa uso delle [[Funzioni trigonometriche]]. 

**NOZIONE.** Prendiamo un $z \in \mathbb{C}$, che geometricamente vuol dire
[ GRAFICO DA FARE ]
Allora secondo le definizioni del *seno* e del *coseno* ([[Funzioni trigonometriche]], **DEF 1.**) possiamo considerare $$\begin{align}&a = \cos\alpha \cdot |z| \\ &b = \sin\alpha \cdot |z| \end{align}$$dove $|z|$ rappresenta il *modulo* di $z$. ([[Operazioni sui Numeri Complessi]], **DEF 4.**)
Dunque $$z = a+ib = |z|(\cos\alpha+i\sin\alpha)$$
e lo si può scrivere come $$z \sim (|z|, [\alpha])$$che si legge come "$z$ *lo rappresento come* $(|z|, [\alpha])$".

**DEF 1.** Quindi definisco le due *componenti* che sono associate a $z$:
- **Modulo** come $|z|$, che d'ora in poi verrà genericamente chiamato come $\rho$. Ovviamente può essere solo maggiore o uguale a $0$.
- **Argomento** come l'angolo $\alpha$;
	- Dai risultati della *trigonometria*, sarebbe meglio considerare **l'argomento principale** come la classe di equivalenza $[a]_{\equiv 2\pi}$ dove $\alpha \in [0, 2\pi)$. Qui si parla della *congruenza modulo $2\pi$* ([[Relazioni]], **ESEMPIO 3.2**); questo in quanto $2\pi$ rappresenterebbe un giro intero, quindi $\alpha = \alpha + 2\pi$. Allora $$[\alpha] = \{\forall k\in\mathbb{Z}, \alpha+2k\pi\}$$

**OSS 1.1.** Inoltre possiamo definire l'applicazione $$\mathbb{C} \diagdown \{0\} \longrightarrow(0, + \infty) \times \{[\alpha]_{\equiv2\pi}, \alpha \in \mathbb{R}\}; z \mapsto (\rho, [\alpha])$$ed è *biiettiva*. Non si considera lo $0$ in quanto questo può creare dei problemi; infatti a $z = 0+i0$ può essere associato qualsiasi angolo, rendendo questa applicazione una *non funzione*.
## 1.1. Esempi
**ESEMPIO 1.1.a.** Prendendo $z = 1+i$, voglio trovare la sua rappresentazione trigonometrica.
Innanzitutto trovo il suo *modulo* $|z|$ che per definizione è $\sqrt{1^2+1^2} = \sqrt{2}$.
Dopodiché trovo il suo *argomento*. Per farlo bisogna considerare la *geometria elementare*, nel senso che se abbiamo un triangolo del tipo
[GRAFICO DA FARE]
allora chiaramente si evince che l'angolo $\alpha$ è $\frac{\pi}{4}$.

**ESEMPIO 1.1.b.** $z = 1+i0$; allora chiaramente $$z \sim (1,0)$$

**ESEMPIO 1.1.c.** $$z=0+i \sim (1, \frac{\pi}{2})$$

## 1.2. Interpretazione della moltiplicazione
**OSS 1.2.** Si osserva che secondo la *forma trigonometrica* possiamo interpretare la *moltiplicazione tra due numeri complessi* nel modo seguente:
$$\begin{align}&\forall z_1, z_2 \in\ \mathbb{C}\\ & z_1 \sim (\rho_1, \alpha_1) \\ &z_2 \sim(\rho_2, \alpha_2)\end{align}$$Allora $$z_1\cdot z_2 $$è uguale a
$$\begin{align} &\rho_1(\cos\alpha_1 + i\sin\alpha_1)\cdot\rho_2(\cos\alpha_2+i\sin\alpha_2) =\\ & (\rho_1\cos\alpha_1+\rho_1i\sin\alpha_1)(\rho_2\cos\alpha_1+\rho_2i\sin\alpha_2)= \\ &\rho_1\rho_2\cos\alpha_1\cos\alpha_2+\rho_1\rho_2i\cos\alpha_1\sin\alpha_2+\rho_1\rho_2i\sin\alpha_1\cos\alpha_2-\rho_1\rho_2\sin\alpha_2\cos\alpha_1\\\end{align}$$
poi raccogliamo per i termini dovuti, $$\rho_1\rho_2(\cos\alpha_1\cos\alpha_2-\sin\alpha_1\sin\alpha_2+i(\cos\alpha_1\sin\alpha_2+\sin\alpha_1\cos\alpha_2))$$e qui identifichiamo le *forme di addizione e sottrazione del seno e del coseno* ([[Funzioni trigonometriche]], **SEZIONE 2.3.**). Allora abbiamo infine $$z =\rho_1\rho_2(\cos(\alpha_1+\alpha_2)+i\sin(\alpha_1+\alpha_2)$$Quindi secondo questa *interpretazione* abbiamo che i *moduli* si moltiplicano e gli *angoli* si sommano. Ovvero: $$z_1z_2 \sim (\rho_1\rho_2, \alpha_1+\alpha_2)$$

# 2. Formula di de Moivre
**TEOREMA 2.** Sia $z=a+ib \sim (\rho, [\alpha])$; quindi $z = \rho(\cos\alpha+i\sin\alpha)$.
Allora $$z^n \sim (\rho^n, n[\alpha]) = \rho^n(\cos(n\alpha)+i\sin(n\alpha))$$ 
## 2.1. Esempi
Alcuni esempi in cui si applica la *formula di de Moivre*.

# 3. Le radici di un numero complesso
Consideriamo un caso fondamentale del *teorema fondamentale dell'algebra*, ovvero le *radici dell'unità*.

**PROBLEMA 3.** Dato un numero $n \in \mathbb{N} \diagdown \{0\}$, voglio trovare tutti i numeri $z \in \mathbb{C}$ tali che $$z^n = 1$$
**OSS 3.1.** Vediamo cosa succede in $\mathbb{R}$, ovvero se $\text{Im}(z)=0$. Allora devo trovare tutti i numeri $x \in \mathbb{R}$ tali che $$x^n = 1$$Se restringo ulteriormente il nostro insieme di considerazione a $[0, +\infty)$, allora posso considerare la funzione *potenza $n$-esima* ([[Funzioni di potenza, radice e valore assoluto]], **DEF 1.1.**).
Osservando di nuovo il grafico di *potenza*, ![[Pasted image 20231017172817.png]]
Si nota subito che $x^n=1$ ha un'unica soluzione in $[0, +\infty)$; ovvero $x_1=1$.
Ora se consideriamo pure i numeri negativi, allora:
- per $n$ pari, $x^n=1$ ha anche una soluzione secondaria $x_2=-1$.
- per $n$ dispari, $x^n=1$ ha come soluzione solo $x_1=1$.

**OSS 3.2.**
Invece su $\mathbb{C}$ ci sono esattamente $n$ soluzioni. $$z^n = 1$$
**DIM.** Consideriamo la forma trigonometrica di $z$ e $1$, ovvero $$z \sim(\rho, [\alpha]); 1 \sim(1, [0])$$e secondo l'equazione voglio che $$z^n \sim (\rho^n, n[\alpha]) = (1, [0])$$quindi deve essere vera la seguente: $$\rho^n = 1 \iff \rho = 1$$Da un punto di vista *geometrico*, questo vuol dire che non voglio avere né spirali che vanno fuori ($\rho > 1$) né quelli che vanno all'interno ($\rho < 1$).
Inoltre deve valere $$[n\alpha] = [0]$$cioè $$n\alpha = 0+2k\pi, \forall k \in \mathbb{Z}$$allora $$\alpha = \frac{2k\pi}{n}, \forall k \in \mathbb{Z}$$ora iniziamo a fissare dei valori di $k$, a partire da $0$. Allora $$\begin{align} &k= 0 \implies \alpha_1 = 0\\ &k=1 \implies \alpha_2 = \frac{2\pi}{n} \\ &k=2 \implies \alpha_3 = \frac{4\pi}{n}\\  &\ldots\\ &k= n-1 \implies \alpha_n = \frac{2(n-1)\pi}{n}\\ &k=n \implies \alpha_{n+1} = \frac{2n\pi}{n} = 2\pi \in [0]_{\equiv2\pi} \\&k=n+1 \implies \alpha_{n+2} = \frac{2(n+1)\pi}{n} = \frac{2n\pi+2\pi}{n}=2\pi+\frac{2\pi}{n} \in[\frac{2\pi}{n}]_{\equiv2\pi}\end{align}$$
Notiamo che da $k=n$ (ovvero dalla $n+1$-esima soluzione) in poi otteniamo elementi che appartengono alle classi equivalenza di soluzioni già trovate: ovvero non vanno considerate, in quanto le loro classi di equivalenza sono uguali. Quindi le radici dell'unità sono: $$\begin{align} &z_0 \sim(1, [0]) = \cos(0)+i\sin(0) = 1 \\&z_1 \sim (1, [\frac{2\pi}{n}]) = \cos(\frac{2\pi}{n})+i\sin(\frac{2\pi}{n})\\&\ldots \\ &z_n \sim(1, [\frac{2(n-1)\pi}{n}]) = \cos(\frac{2(n-1)\pi}{n})+i\sin(\frac{2(n-1)\pi}{n})\end{align} $$Allora vediamo che ci sono $n$ soluzioni; generalizzando da qui discende il *teorema fondamentale dell'algebra*.
## 3.1. Esempio
**ESEMPIO 3.1.** Trovare tutte le soluzioni $z \in \mathbb{C}$ tali che $$z^5=1$$
Considerando ciò detto prima, ho le soluzioni $$\begin{align}&z_1 \sim (1, [0])=1\\&z_2 \sim(1, [\frac{2\pi}{5}])= \cos(\frac{2\pi}{5})+i\sin(\frac{2\pi}{5})\\ &z_3 \sim (1, [\frac{2(2)\pi}{5}]) = (1, [\frac{4\pi}{5}])\\ &z_4 \sim (1, [\frac{2(3)\pi}{5}]) = (1, [\frac{6\pi}{5}]) \\ &z_5 \sim(1, [\frac{2(4)\pi}{5}]) =(1, [\frac{8\pi}{5}])\end{align}$$
Graficamente posso prendere il *piano di Argand-Gauss* ([[Rappresentazione dei Numeri Complessi]]), prendere un cerchio con $r=1$, dividere i due *semicerchi* in 5 parti, poi prendere l'$n$-esimo punto del cerchio tagliato. Inoltre se collego questi punti, ottengo un *pentagono*. 
[ GRAFICO DA INSERIRE ]

## 3.2. Teorema fondamentale dell'algebra
**TEOREMA 3.2.**
Siano $a_n$ dei numeri tali che: $$a_0, a_1, \ldots,a_n \in \mathbb{C}; a_n \neq 0$$e considerando *l'equazione* $$a_0+a_1z+a_2z^2+\ldots+a_nz^n = 0$$allora questa ha esattamente $n$ *soluzioni* in $\mathbb{C}$.

**OSS 3.2.1.** Allora possiamo riscrivere l'equazione come $$a_0+a_1z+a_2z^2+\ldots+a_nz^n = a_n(z-z_1)\ldots(z-z_n)$$con $\forall n , z_n \in \mathbb{C}$. Notiamo che *tutte* le soluzioni appartengono al *campo dei numeri complessi*; per questo si dice che $\mathbb{C}$ è un *campo chiuso*. 

# 4. (EXTRA) L'insieme di Mandelbrot
**PROBLEMA 4.** Considero il *piano di Argand-Gauss* e $z = c \in \mathbb{C}$; adesso considero una *successione* ([[Assiomi di Peano, il principio di induzione]], **DEF 4.2.1.**) di *punti su $\mathbb{C}$*, ovvero $$z_0 = c; z_1 = c^2+c; \forall n, z_{n+1} = (z_n)^2+c$$
Quindi scelgo un punto $c$, a cui applico la successione $z_n$.
Adesso distinguo i *punti di partenza $c$* in due famiglie principali:
1. I punti di partenza che rimangono in un *insieme limitato* (ovvero un raggio di palla) dopo un numero di iterazioni
2. I punti di partenza dei quali moduli vanno all'infinito
Graficamente posso colorare i punti della prima famiglia di colore nero, i secondi di colore bianco.
Tramite gli strumenti dell'*informatica* posso usare un *pixel* per rappresentare un punto *c*, poi di eseguire un numero preciso di iterazioni (come $500$) e infine di colorare i pixel a seconda del suo comportamento.
Così otteniamo il cosiddetto *frattale di Mandelbrot*.
![[1280px-Mandelset_hires.png]]