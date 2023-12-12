---
data: 2023-11-27
corso: "[[Analisi Matematica I]]"
argomento: Studio di Funzione
tipologia: appunti
stato: "0"
---
*Schema "generale" e "riassuntivo" di quello che potrebbe essere lo svolgimento di uno studio di funzione*
- - -
# 0. Preambolo
In questo articolo si elencheranno dei *"step"* principali, che sono da svolgere generalmente in uno studio di funzione; ovviamente al variare di esercizio potranno sorgere delle necessità diverse. 
Quindi anche lo schema che presenterò dovrebbe essere generalmente valido, però bisogna comunque stare attenti ad eventuali *"sorprese"* da parte del testo.
# 1. Procedimento generale
Questo procedimento riguarderà la consegna *"principale"* di uno studio di funzione: ovvero quella di realizzare un *disegno* (approssimativo) della funzione richiesta
## I. Dominio della funzione
Trovare il dominio per cui è *definita* la funzione. 
Questo problema è elementare in quanto considerare il *dominio* delle *funzioni elementari* ([[Funzioni di potenza, radice e valore assoluto]], [[Funzioni trigonometriche]], [[Funzione esponenziale e Logaritmica]]), farci un sistema e prendere l'insieme più *"restrittivo"*.
## II. Incrocio con le assi
Trovare i *punti* in cui la funzione incrocia con l'asse dell'ascissa e delle ordinate.
Per trovare i punti per cui $f$ incrocia con la retta delle ordinate basta sostituire $f(x)$ con $x=0$. Ovviamente questo è possibile *solo se* $0$ appartiene al *dominio* di $f$.
Nel secondo caso si tratterebbe di trovare una *soluzione* all'*equazione* $f(x) = 0$; però non è sempre scontato che sia *sempre* possibile trovare punti in cui la funzione $f$ incontra l'asse $x$; infatti, ad esempio $f(x) = x^2+1$ non incrocia con $x$ da nessuna parte.
## III. Segno della funzione e parità
Anche qui il problema è elementare, in quanto di solito basta far *"ricondurre"* il segno delle funzioni complicate a quelle elementari.
Dopodiché è anche utile controllare se la funzione è *pari* o *dispari* calcolando $f(-x)$; in questo modo abbiamo un'*automatismo* utile per vedere se ciò che stiamo svolgendo sia giusto o meno, in quanto il segno della funzione e la parità sono correlate.
Ad esempio, una funzione pari ha i segni *"riflessi"*.
## IV. Limiti agli estremi e punti particolari
Qui bisogna sapere come calcolare i *limiti* ([[Definizione di Limite di funzione]]); allora questa parte richiederà un po' di tecnica con i limiti.
In particolare è utile calcolare i limiti per $x$ che tende a $\pm \infty$, e ad alcuni punti per cui *non* è *definita*. Ovviamente qui serve la discrezione personale, in quanto in alcuni casi non ci sarebbe neanche il senso di farlo.
A questo punto sarebbe già opportuno fare una *"bozza"* del disegno della funzione, giusto per avere un'idea generale.
## V. Trovare gli eventuali asintoti
In realtà questa parte è più una *"conseguenza"* di quella di calcolare i limiti; in particolare si vuole, se opportuno, trovare eventuali *asintoti obliqui* ([[Asintoto di una funzione#^74920d]]) mediante la tecnica descritta ([[Asintoto di una funzione#^8bab7e]]).
## VI. Funzione derivata (prima)
Qui basta sapere come calcolare la *derivata* ([[Derivata e derivabilità#^ae9417]]) di una qualsiasi funzione.
## VII. Segno della derivata prima (crescenza e decrescenza)
Analogamente qui bisogna trovare il *segno* della *derivata prima* per determinare la (*de*)*crescenza* della funzione $f$; questa è determinabile in questo modo in quanto conseguenza del *teorema di Lagrange* ([[Conseguenze del teorema di Cauchy e di Lagrange#^45aa1e]]).
## VIII. Funzione derivata (seconda)
Stessa cosa della *funzione derivata* (ovvero lo step *VI*), solo che si considera la *derivata* della *derivata*. Ovvero la *derivata seconda* di $f$. 
## IX. Segno della derivata seconda (concavità e convessità)
Secondo i risultati dell'analisi matematica ([[Caratterizzazione delle Funzioni Convesse]]), il *segno della seconda derivata della funzione* può determinare il *"modo"* in cui curva il grafico; se $f''$ è positiva, allora è *"concava in alto"*, altrimenti è *"concava in basso"*.
# 2. Esercizio particolare
Ogni tanto negli appelli si potrebbe trovare di fronte ad un quesito del tipo: al variare di una grandezza $\alpha$ reale, trovare quante soluzioni ci sono per la seguente equazione...
Solitamente l'equazione si presenta in una maniera analoga della funzione studiata nello stesso esercizio, quindi basta riportare l'equazione in *"forma"* della funzione.
Di solito conviene fare questo esercizio *alla fine* dello studio di funzione, quando si ha già un buon disegno della funzione; in questo modo si può *"tracciare"* la linea orizzontale $\alpha$ e vedere quante volte questa *"incrocia"* la funzione.
