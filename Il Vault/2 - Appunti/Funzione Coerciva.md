---
data: 2024-04-23
corso:
  - "[[Analisi Matematica II]]"
argomento: Funzione Coerciva
tipologia: appunti
stato: "1"
capitolo: Ottimizzazione in più variabili
---
- - -
*Definizione di funzione coerciva, proprietà fondamentale delle funzioni coerciva (forma debole del teorema di Weierstraß)*
- - -
# 0. Voci correlate
- [[Definizione di Spazio Metrico]]
# 1. Definizione di Funzione Coerciva
#Definizione 
> [!def] funzione coerciva
> Si dice che una funzione in più variabili definita come
> $$
> f:E=\mathbb{R}^N\longrightarrow \mathbb{R}
> $$
> è *coerciva* (o *anticoerciva, in rosso*) se vale il limite
> $$
> \lim_{\lVert \underline{x}\rVert \to +\infty}f(\underline{x})=+\infty \ (\textcolor{RED}{-\infty})
> $$
^219eda

L'idea della *coercitività* è di avere un *campo scalare* che si *"distanzia dall'origine all'infinito"* al salire di livello.
![[Pasted image 20240423175757.png|450]]


# 2. Proprietà delle Funzioni Coercive
#Teorema 
> [!thm] proprietà delle funzioni coercive, forma debole di Weierstraß
> Se $f:E = \mathbb{R}^N \longrightarrow \mathbb{R}$ è *continua* e *coerciva* (*anticoerciva, in rosso*) allora vale che
> $$
> \exists \min_{E=\mathbb{R}^2}f \ \left(\textcolor{red}{\exists \min_{E=\mathbb{R}^2} f}\right)
> $$
^74d787

**CASO D'USO (Idea).** Questa proprietà è utile nella *prassi*, in particolare per la *minimizzazione di funzioni*. 
Supponiamo di avere una funzione costo $f$ a variare su $N$ parametri. In particolare, questo *fitta dei dati*. Per minimizzare questa funzione in riferimento di un valore $y_{data}$, posso impostare la funzione $\phi$ definita come
$$
\phi(\underline{x})=\lVert f(\underline{x})- y_{data} \rVert
$$
e ricavarne dunque il *minimo* mediante operazione di ottimizzazioni. Tuttavia, il dato $y_{data}$ potrebbe essere *"sporco"* dato che è *prono ad errori*. Quindi il minimo trovato in $\phi$ non potrebbe coincidere col minimo effettivo.
Per risolvere questo problema, impostiamo un'altra funzione $\phi_\alpha$ definita come
$$
\phi_\alpha(\underline{x}) = \lVert f(\underline{x})-y_{data}\rVert + \textcolor{lime}{\alpha \lVert \underline{x}\rVert^2}
$$
dove $\alpha$ è il *"termine di correzione"*. Notiamo in particolare che il termine $\lVert \underline{x} \rVert^2$ tende a infinito, rendendo coercitiva la funzione: possiamo dunque applicare il macchinario appena visto per trovare il *minimo effettivo* della funzione, avendo
$$
\min \phi \sim \min \phi_\alpha 
$$
