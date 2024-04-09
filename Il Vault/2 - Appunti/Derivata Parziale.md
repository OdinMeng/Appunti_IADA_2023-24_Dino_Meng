---
data: 2024-03-29
corso:
  - "[[Analisi Matematica II]]"
argomento: Derivata Parziale
tipologia: appunti
stato: "1"
capitolo: Calcolo Differenziale Multivariata
---
- - -
*Definizione di derivata parziale per un campo scalare.*
- - -
# 0. Voci correlate
- [[Derivata Direzionale]]
- [[Campo Scalare e Insieme di Livello]]
# 1. Definizione di Derivata Parziale
#Definizione 
> [!def] derivata parziale per un campo scalare
> Sia $f: \mathbb{R}^N \longrightarrow \mathbb{R}$ un *campo scalare*. Sia $\mathcal{E}$ *base canonica* per il dominio $\mathbb{R}^N$.
> Denominiamo ogni elemento della base canonica come
> $$
> \mathcal{E} = \{\underline{e_1} \ldots, \underline{e_N}\} = \{\underline{v_1}, \ldots, \underline{v}_N\}
> $$
> Allora, prendendo un qualsiasi $\underline{v_i}$, si pone la *derivata parziale* come la *derivata direzionale* (qualora esista)
> $$
> \begin{align}
> \frac{\partial f}{\partial \underline{v_i}}(\underline{x_0}) := &\lim_{t \to 0}\frac{f(x_{0;1}, \ldots, x_{0;i-1}, x_{0;i}+t, x_{0;i+1}, \ldots, x_{0;N})-f(\underline{x_0})}{t} \\ \iff & \lim_{x_i \to x_{0;i} }\frac{f(x_{0;1},\ldots,x_{0;i-1},x_i, x_{0;i+1},\ldots, x_{0;N})-f(\underline{x_0})}{x_i-x_{0;i}} 
> \end{align}
> $$
> La denotiamo come
> $$
> \frac{\partial f}{\partial x_i}(\underline{x_0})=f_{x_i}(\underline{x_0})
> $$

#Osservazione 
> [!rmk] interpretazione pratica
> Per una *comodità pratica*, possiamo vedere la *derivata parziale* come una *derivata in una variabile reale*, trattando $x_i$ come la *sola variabile* e il resto come delle *costanti*. Applichiamo quest'osservazione con i seguenti esempi.

# 2. Esempi
#Esempio 
> [!exm] derivata parziale di campo scalare bidimensionale
> Sia $f(x,y)$ definita come $f(x_1,x_2)=x_1^2+3x_1x_2+4x_2^5$.
> Vogliamo calcolare la *derivata parziale* di $f$ rispetto a $x_1$; scriviamo quindi
> $$
> \frac{\partial f}{\partial x_1}(x)=2x_1+3x_2
> $$

#Esempio 
> [!exm] derivata parziale di un campo scalare tridimensionale
> Sia $f(x,y,z)$ definita come $f(x,y,z)=x^2+xz+zy+z^5$. Allora abbiamo
> $$
> \begin{gather} 
> \frac{\partial f}{\partial x}=2x+z \\
> \frac{\partial f}{\partial y}=y \\ 
> \frac{\partial f}{\partial z} = x+y+5z^4
> \end{gather}
> $$
> Notare che
> $$
> \frac{\partial f}{\partial z}\left(\frac{\partial f}{\partial y}\right) = 0 \neq  1 =\frac{\partial f}{\partial y}\left(\frac{\partial f}{\partial z}\right)
> $$
