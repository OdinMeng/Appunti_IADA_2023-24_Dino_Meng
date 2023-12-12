---
data: 2023-12-02
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Considerazioni Preliminari sulla Diagonalizzazione
tipologia: appunti
stato: "1"
---
*Introduzione alla Diagonalizzazione: problema della riflessione all'asse delle ordinate in R2, osservazioni.*
- - -
# 1. Considerazioni preliminari per la diagonalizzazione
## Problema della riflessione rispetto all'asse x
#Esempio 
> [!ex] Esempio 1.1. (riflessione rispetto all'asse delle ordinate)
> Consideriamo in $\mathbb{R}^2$ la *riflessione* rispetto all'asse delle ordinate, e chiamiamo questa applicazione $\rho$.
> Il *"funzionamento"* dell'applicazione $\rho$ viene illustrata nella *figura 1.1.*.
> Considerando $\mathcal{E} = \{e_1, e_2\}$ la *base canonica*, allora possiamo con un po' di intuizione geometrica si può calcolare la matrice associata a $\rho$ ([[Definizione della Matrice associata a un'Applicazione Lineare#^ea78d6]]).
> $$M^\mathcal{E}_{\mathcal E}(\rho) = \begin{pmatrix}-1 & 0 \\ 0 & 1 \end{pmatrix}$$

^e251c3

**FIGURA 1.1.** (*Idea grafica*)
![[Pasted image 20231202195820.png]]
## Problema della riflessione rispetto alla retta $l$
#Esempio 
> [!ex] Esempio 1.2. (riflessione rispetto alla retta $l$)
> Ora consideriamo una retta $l$ che passa per l'origine $(0,0)$; chiamiamo la *riflessione rispetto alla retta $l$* $\rho_l$. In *figura 1.2.* si illustra la *"trasformazione"* di un qualsiasi vettore mediante $\rho_l$.
> Dal disegno non è chiaro *"calcolare"* la matrice
> $$M^\mathcal{E}_\mathcal{E}(\rho_l)$$
> Bisognerebbe considerare eventuali angoli, seni, coseni e altre complicazioni.
> Questa difficolta proviene dal fatto che abbiamo scelto delle *"basi difficili"* su cui calcolare questa matrice: se scegliessimo una *"base adeguata"* all'applicazione lineare $\rho_l$, tutto divneterebbe più semplice!
> Consideriamo allora una *"base personalizzata"* per $\rho_l$, ovvero una è un vettore che *"giace sulla retta $l$"* è l'altra è un vettore ortogonale alla retta $l$: chiamiamo l'insieme di questi vettori come $\mathcal{B}$. Questa idea viene raffigurata nella *figura 1.3.*.
> Allora in questo caso diventa semplicissimo calcolare la *matrice associata* a $\rho_l$ per la base $\mathcal{B}$: infatti il *"calcolo"* diventa analogo a quello presentato nell'*esempio 1.1.* ([[#^e251c3]]).
> $$M^\mathcal{B}_\mathcal{B}(\rho_l) = \begin{pmatrix}1 & 0 \\ 0 & -1 \end{pmatrix}$$

^0ce141

**FIGURA 1.2.** (*Idea grafica parte 1*)
![[Pasted image 20231202200724.png]]

**FIGURA 1.3.** (*Idea grafica parte 2*)
![[Pasted image 20231202200858.png]]

# 2. Conclusione
#Osservazione 
> [!oss] Osservazione 2.1. (conclusione delle considerazioni)
> Alla fine notiamo che in entrambi gli esempi, gli *elementi della base* vengono mandati in *multipli* di sé stessi: infatti, nel primo esempio abbiamo
> $$\rho(e_1) = -1 \cdot e_1; \rho(e_2) = e_2$$
> Allora si può dire che quando abbiamo un comportamento del genere, la nostra scelta delle basi *"ha funzionato"* in quanto ci semplifica il calcolo delle matrici associate.
> Vedremo che questa diventerà l'idea chiave della *diagonalizzazione*: la procedura per determinare *"basi efficienti"* per certe *applicazioni lineari* sarà proprio il problema della *diagonalizzazione*.