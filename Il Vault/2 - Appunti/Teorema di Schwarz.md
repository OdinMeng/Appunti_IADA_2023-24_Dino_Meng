---
data: 2024-04-15
corso:
  - "[[Analisi Matematica II]]"
argomento: Teorema di Schwarz
tipologia: appunti
stato: "1"
capitolo: Calcolo Differenziale Multivariata
---
- - -
*Teorema di Schwarz: osservazione preliminare, enunciato e controesempio per i casi in cui non vale il teorema di Schwarz.*
- - -
# 0. Voci correlate
- [[Campi Scalari di Classe C]]
- [[Differenziabilità di Ordine Superiore su Campi Scalari]]
# 1. Osservazione preliminare
#Osservazione 
> [!rmk]
> Se avete svolto *l'esercizio sulla derivazione di funzioni di ordine $2$* ([[Esercizi sul Calcolo Differenziale Multivariata#^c15d7b|rif.]]), avrete notato che $f_{xy}=f_{yx}$. Questo non è un caso, infatti vedremo che è una condizione necessaria.

# 2. Teorema di Schwarz
#Teorema 
> [!thm] di Schwarz
> Se $f \in \mathcal{C}^2(A)$ ([[Campi Scalari di Classe C#^96cf34|1]]), allora le derivata $h$-esime con $2\leq h \leq k$ *non* dipendono dall'ordine seguito nell'eseguire la derivazione.

#Esempio 
> [!exm] caso $K=N=2$
> Sia $K=N=2$. Allora in questo caso ho
> $$
> f \in \mathcal{C}^2(A)\implies \frac{\partial^2 f}{\partial x \partial y}(\underline{x})=\frac{\partial^2 f}{\partial y \partial x}(\underline{x}), \forall \underline{x} \in A
> $$

# 3. Controesempio
#Osservazione 
> [!rmk] ci sono dei casi in cui non vale Schwarz
> Esistono delle funzioni che non soddisfano le *ipotesi* del teorema di Schwarz. Infatti prendiamo la funzione di Peano definita come
> $$
> f(x,y)=\left\{\begin{align}&xy \frac{x^2-y^2}{x^2+y^2}, (x,y)\neq (0,0) \\ &0, (x,y)=(0,0)\end{align}\right.
> $$
> Si dimostra che questa funzione *non* appartiene a classe $\mathcal{C}^2$; infatti ho
> $$
> f_{xy}(0,0)=-1 \neq f_{yx}(0,0)=1
> $$
> Lo svolgimento dei calcoli è stato lasciato per esercizio.

