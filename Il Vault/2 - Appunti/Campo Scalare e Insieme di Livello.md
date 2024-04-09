---
data: 2024-03-28
corso:
  - "[[Analisi Matematica II]]"
argomento: Campo Scalare e Insieme di Livello
tipologia: appunti
stato: "1"
capitolo: Struttura di R^N
---
- - -
*Definizione di campo scalare, esempio grafico di campo scalare. Esempio fisico di campo scalare: potenziale elettrico nel vuoto generato da una carica puntiforme nell'origine. Definizione di insieme di livello per un campo scalare. Esempio geometrico.*
- - -
# 0. Voci correlate
- [[Definizione di RN]]
- [[Definizione di Funzione in più variabili]]
# 1. Campo Scalare
#Definizione 
> [!def] campo scalare
> Si definisce *campo scalare* come una *funzione in più variabili* particolare, con $N \geq 2$ e $M=1$ ([[Definizione di Funzione in più variabili#^e320a2|1]]). Ovvero, una funzione del tipo
> $$
> f: \mathbb{R}^{N\geq2}\longrightarrow \mathbb{R}
> $$

**FIGURA 1.1.** (*Esempio qualitativo di un campo scalare*)
![[Pasted image 20240328121002.png]]

#Esempio 
> [!exm] esempio fisico
> Consideriamo il *potenziale elettrico nel vuoto generato da una carica puntiforme nell'origine*: questo è un *campo scalare* in *tre dimensioni*, descritto come
> $$
> V(x,y,z)=\frac{Q_0}{4\pi \varepsilon_0}\frac{1}{\sqrt{x^2+y^2+z^2} }
> $$

# 2. Insiemi di livello per campo scalare
#Definizione 
> [!def] insieme di livello per un campo scalare
> Sia $f$ un *campo scalare* in $N$ dimensioni, con dominio $E \subseteq \mathbb{R}^N$. Sia $K \in \mathbb{R}$.
> Definiamo un *"insieme di livello $K$ di $f$"* come l'insieme
> $$
> L_K(f):=\left\{\underline{x} \in E: f(\underline{x})=K\right\}
> $$
> Graficamente, si tratta di prendere il grafico del campo scalare e prendere la proiezione dell'*intersezione* col piano $z=K$ (*figura 2.1.*)

**FIGURA 2.1.** (*Grafico qualitativo di un insieme di livello*)
![[Pasted image 20240328121608.png]]
