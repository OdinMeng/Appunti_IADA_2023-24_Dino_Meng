---
data: 2023-09-28
corso: "[[Algebra Lineare ed Elementi di Geometria]]"
argomento: Vettori Liberi
tipologia: appunti
stato: "1"
---
*Costruzione dei vettori liberi, brevi richiami a relazioni e classi di equivalenza (in Analisi 1), significato di equipollenza, classe di equipollenza e definizione di somma tra vettori liberi.*
- - -
# Premessa
Come abbiamo osservato nei [[Vettori Applicati]], la costruzione di esse comportano delle *limitazioni* (**OSS 1.3.1** e **OSS 1.3.2**); quindi per ottenere una teoria più *"comprensiva"*, introduciamo un nuovo oggetto: i **vettori liberi**.
Tuttavia è necessario prima introdurre dei nuovi concetti, tra cui il concetto dell'*equipollenza*, della *classe di equipollenza* e i *rappresentanti di una classe di equipollenza*. 
# DEF 1. Equipollenza
Due vettori applicati $\overrightarrow{AB}, \overrightarrow{CD}$ si dicono **equipollenti** ($\overrightarrow{AB} \equiv\overrightarrow{CD}$) *se e solo se* i due vettori hanno:
- La medesima direzione
- Il medesimo verso
- Il medesimo modulo

**OSS 1.1.** Si verifica che l'*equipollenza* è una [relazione di equivalenza](Relazioni) (**DEF 5.**); ovvero essa è riflessiva, simmetrica e transitiva. Questo in quanto l'equipollenza è descritta dall'essere uguali $=$. 
# DEF 2. Classe di equipollenza
Dato un vettore applicato $\overrightarrow{AB}$, si definisce la sua **classe di equipollenza** $$[\overrightarrow{AB}]:=\{\text{tutti i vettori applicati } \overrightarrow{CD}: \overrightarrow{AB} \equiv\overrightarrow{CD}\}$$**PROP 2.1.** Dai risultati della *geometria euclidea* segue che dati un vettore applicato $\overrightarrow{AB}$ e un punto $C$, allora esiste *sempre* un **vettore applicato** $\overrightarrow{CD} \equiv \overrightarrow{AB}$; da questo segue che una classe di equipollenza denotata $\vec{v}$ e dato un punto $C$ nel piano, esiste *sempre* un vettore applicato che appartiene a $\vec{v}$ e che ha come punto iniziale $C$.
	**INTERPRETAZIONE GRAFICA.**
	![[Prop 2.1..png]]

**OSS 2.1.** Si nota che $$\overrightarrow{AB} \equiv\overrightarrow{CD} \iff[\overrightarrow{AB}]=[\overrightarrow{CD}]$$Quindi si dice che i vettori $\overrightarrow{AB}, \overrightarrow{CD}$ sono dei *rappresentanti* della medesima classe di equipollenza.

# DEF 3. Vettore libero
Ora finalmente si definisce il **vettore libero**, che si dice come una classe di **equipollenza**  $\vec{v}$. 
Infatti è una **quantità infinita** di vettori applicati, che condividono una medesima direzione, un medesimo verso e una medesima lunghezza; sostanzialmente si *"estrania"* dal vettore applicato il *punto di applicazione* e si considerano solo le tre proprietà appena elencate sopra.

## DEF 3.1. Vettore libero nullo
**OSS 3.1.1.** Tutti i *vettori applicati nulli* sono equipollenti e dunque formano una **sola classe di equipollenza** che si denota $\vec{0}$. Qui si vede superato la *prima limitazione* osservata nei [[Vettori Applicati]] (**OSS. 1.3.1**); quindi definiamo il *vettore libero nullo* come $$\vec{0} := [\overrightarrow{AA}] $$ovvero *tutti* i vettori per cui il punto di applicazione coincide con il punto di arrivo.

**OSS 3.1.2.** Tenendo in considerazione la definizione della [somma tra due vettori liberi](Operazioni%20sui%20vettori%20liberi), si ha $$\begin{align}&\vec{0} + \vec{v} = [\overrightarrow{AA}] + [\overrightarrow{AB}] = [\overrightarrow{AB}] \\& \vec{v} + \vec{0} = [\overrightarrow{AB}] + [\overrightarrow{BB}] =[\overrightarrow{AB}] \end{align}$$Quindi il *vettore libero nullo $\vec{0}$* si comporta come il numero $0$ rispetto all'operazione di *somma*.
