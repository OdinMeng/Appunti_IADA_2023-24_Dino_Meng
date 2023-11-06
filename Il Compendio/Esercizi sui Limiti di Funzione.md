---
data: 2023-10-30
corso: "[[Analisi Matematica I]]"
argomento: Esercizi sui Limiti di Funzione
tipologia: appunti
stato: "0"
---
*Tutti gli esercizi sui limiti*
- - -
# 0. Propedeuticità
Questa parte (come è ben ovvia) richiede la conoscenza preliminare della parte teorica sui limiti; ovvero bisogna conoscere i contenuti di *tutti* i capitoli prima di poter affrontare gli esercizi.
- [[Definizione di Limite di funzione]]
- [[Teoremi sui Limiti di Funzione]]
- [[Esempi di Limiti di Funzione]]
# 1. Esercizi proposti in lezione
Qui si raccolgono *tutti* gli esercizi proposti da *D.D.S.* durante le lezioni dell'anno accademico 2023-2024.
*Giorno 30.10.2023*
**ESERCIZIO 1.1.**  $$\lim_{x \to 1}\frac{x^2+x+1}{x^3+x^2+x+1}$$
**ESERCIZIO 1.2.** $$\lim_{x \to 1}\frac{x^2+1}{x^3+x^2+x-3}$$
**ESERCIZIO 1.3.** $$\lim_{x \to +\infty}\frac{2x^3+3x^2+1}{x^3+7}$$

**ESERCIZIO 1.4.** $$\lim_{x \to +\infty}\frac{x+2}{x^2+2x+1}$$

**ESERCIZIO 1.5.** $$\lim_{x \to 0}\frac{\tan x}{x}$$
**ESERCIZIO 1.6.** $$\lim_{x \to 0}\frac{\tan x-\sin x}{x^3}$$
**ESERCIZIO 1.7.** $$\lim_{x \to 0^+}\frac{\sin{\sqrt{x}}}{\sqrt{x}}$$
**ESERCIZIO 1.8.** $$\lim_{x \to 0^+}\frac{\sin{\sqrt{x}}}{x}$$
**ESERCIZIO 1.9.** $$\lim_{x \to 0}\frac{\sin{x^2}}{x^2}$$
**ESERCIZIO 1.10.** $$\lim_{x \to +\infty}\sqrt{x +1}-\sqrt{x}$$
**ESERCIZIO 1.11.** $$\lim_{x \to +\infty}\sqrt{x}(\sqrt{x+1}-\sqrt{x})$$
**ESERCIZIO 1.12.** $$\lim_{x \to 0}\frac{\arcsin x}{x}$$
**ESERCIZIO 1.13.** $$\lim_{x \to 0}\frac{\sin x}{\arcsin x}$$
**ESERCIZIO 1.14.** $$\lim_{x \to +\infty}x(\frac{\pi}{2}-\arctan x)$$
**ESERCIZIO 1.15.** $$\lim_{x \to 1^-}\frac{\arccos x}{\sqrt{1 -x}}$$
*Giorno 06.11.2023* 
**ESERCIZIO 1.16.**
$$\lim_{x \to 0}(1+\sin(x))^\frac{1}{x}$$
**ESERCIZIO 1.17.** $$\lim_{x \to 0^+}x^x$$
**ESERCIZIO 1.18.** $$\lim_{x \to +\infty}\sqrt{x} \cdot {\sin(\frac{\pi}{2}-\arctan x)}$$
**ESERCIZIO 1.19.** $$\lim_{x \to 0}\frac{e^x - e ^{-x}}{x}$$
**ESERCIZIO 1.20.** $$\lim_{x \to 0}\frac{(1-\cos x)^2}{\log(1+\sin^4x)}$$
**ESERCIZIO 1.21.** $$\lim_{x \to 0}\frac{\sin2x}{\tan 3x}$$
**ESERCIZIO 1.22.** $$\lim_{x \to 0}\frac{\ln (\cos x)}{x^2}$$
- - -
# 2. Esercizi delle dispense
Qui si raccolgono *tutti* gli esercizi disponibili nella dispensa.

- - -
# 3. Esercizi dei papers
Qui si raccolgono *tutti* gli esercizi dei papers messi a disposizione.

- - -
# 4. Esercizi delle prove d'esame
Qui si prova a raccogliere *tutti* gli esercizi delle prove d'esame precedenti. Ovviamente questa sezione sarà la più *"sostanziale"* di tutte.

- - -
# 5. Esercizi del libro
*Fonte: Analisi Matematica (Vol. 1), E. Giusti*
**ESERCIZIO 12, PAG. 152.** $$\lim_{x \to 0}\frac{\sin{x}}{\sqrt{x^2}}$$
**ESERCIZIO 21, PAG. 152.** $$\lim_{x \to 0}\frac{\sin{(x+x^2)}}{x}$$
**ESERCIZIO 22, PAG 152.** $$\lim_{x \to 0}\frac{1-\cos{\sqrt{x}}}{x}$$
**ESERCIZIO 23, PAG 152.** $$\lim_{x \to 0}\frac{\frac{1}{1+x}-\cos{x}}{x}$$
- - -
# 6. Svolgimento degli esercizi
## 6.1. Esercizi delle lezioni
VOID

## 6.2. Esercizi delle dispense
VOID

## 6.3. Esercizi dei papers
VOID

## 6.4. Esercizi delle prove d'esame
VOID

## 6.5. Esercizi del libro
**ESERCIZIO 12, PAG. 152.** Ho il limite $$\lim_{x \to 0}\frac{\sin{x}}{\sqrt{x^2}}$$
Qui si tratta di ricordarsi di una *osservazione* del *valore assoluto* ([[Funzioni di potenza, radice e valore assoluto]], **OSS 3.1.1.**), ovvero che $$\sqrt{x^2} = |x|$$Rimpiazziamo dunque $\sqrt{x^2}$ con $|x|$. Allora ho $$\lim_{x \to 0}\frac{\sin x}{|x|}$$Ora basta richiamare la *definizione* del *valore assoluto*, avendo dunque $$\frac{\sin{x}}{|x|} = \begin{cases}\frac{\sin x}{x} \text{ per }x\geq0 \\ -\frac{\sin x}{x}\text{ per }x<0 \end{cases}$$Visto che stiamo studiando il comportamento di *questa* funzione attorno $0$, basta fare la restrizione del limite con il limite destro e sinistro ([[Definizione di Limite di funzione]]), in quanto approcciando a $0$ da *"destra"* abbiamo sempre valori positivi (in quanto abbiamo la semiretta $]0, +\infty[$), similmente da *"sinistra"* abbiamo sempre valori negativi. Allora $$\begin{align}&\lim_{x \to 0^+}\frac{\sin x}{x}=1 \text{ (limite fondamentale)} \\& \lim_{x \to 0^- }-\frac{\sin x}{x}=-\lim_{x \to 0^-}\frac{\sin x}{x} = -1\end{align}$$Dunque abbiamo $$\lim_{x \to 0^+} \frac{\sin x}{|x|} \neq \lim_{x \to 0^-}\frac{\sin x}{x}$$e ciò vuol dire che non esiste il limite per $x \to 0$.

**ESERCIZIO 21, PAG. 152.** Ho il limite $$\lim_{x \to 0}\frac{\sin(x + x^2)}{x}$$allora uso la *forma di addizione* per $\sin(a+b)$ ([[Funzioni trigonometriche]]). Poi manipolo opportunamente l'espressione ottenuta $$\begin{align}\lim_{x \to 0}& \ \frac{\sin x \cos x^2 + \sin x^2 \cos x}{x}\\ & \ \frac{\sin x}{x}\cos{x^2}+\frac{\sin x^2}{x}\cos x \\ & \ \ldots +\frac{\sin x^2}{x^2}x\cos x \\ & \ \ldots + x \cos x \lim_{y \to 0}\frac{\sin y}{y} (\text{sia }y = x^2 \text{)} \\ \lim_{x \to 0}& \ \frac{\sin{x}}{x}\cos x^2 + x \cos x \lim_{y \to 0}\frac{\sin y}{y} \\  & \ 1\cdot1^2 + 0\cdot 1 \cdot 1 = 1\end{align}$$Allora $$\lim_{x \to 0}\frac{\sin(x + x^2)}{x} = 1$$
**ESERCIZIO 22, PAG. 152.** Ho il limite $$\lim_{x \to 0}\frac{1-\cos\sqrt{x}}{x}$$Moltiplico sia sopra che sotto per $1+\cos{\sqrt{x}}$. Allora $$\begin{align} \lim_{x \to 0}& \ \frac{1-\cos\sqrt{x}}{x} \\ =& \ \frac{1-\cos^2{\sqrt{x}}}{x}\frac{1}{(1+\cos\sqrt{x})} \\ =& \ \frac{\sin^2{\sqrt{x}}}{x}\ldots\end{align}$$Ora il punto cruciale di questa manipolazione è di osservare che $$x = \sqrt{x^2} = \sqrt{x}^2, \forall x >0$$Questo passaggio presuppone di restringere il dominio della funzione a quello di tutti i *valori positivi*: tuttavia questa operazione non è restrittiva, in quanto la funzione radice quadrata $\sqrt{\cdot}$ presuppone già la restrizione ai valori positivi. Allora abbiamo $$\begin{align}\lim_{x \to 0^+}& \ \frac{\sin^2{\sqrt{x}}}{\sqrt{x}^2} \cdot \frac{1}{1+\cos\sqrt{x}}\\ \text{sia }y=\sqrt{x}; \lim_{y \to 0^+}& \  (\frac{\sin{y}}{y})^2 \cdot \frac{1}{1+\cos y} \\ = & \ 1^2 \cdot \frac{1}{2} =\frac{1}{2}\end{align}$$Abbiamo ottenuto infine $$\lim_{x \to 0}\frac{1-\cos\sqrt{x}}{x} = \frac{1}{2}$$
**ESERCIZIO 23, PAG. 152.** Ho il limite $$\lim_{x \to 0}\frac{\frac{1}{1+x}-\cos{x}}{x}$$Sviluppo l'espressione sul numeratore. $$\frac{1}{1+x}-\cos x = \frac{1-\cos(x)(1+x)}{1+x} = \frac{1-\cos x - x \cos x}{1+x}$$Ora raccolgo il numeratore del numeratore per $x$. $$\frac{1-\cos{x}-x\cos{x}}{1+x} = \frac{x(\frac{1}{x}-\frac{\cos x}{x}-\cos x)}{1+x}$$ Quindi sul limite ho $$\begin{align}\lim_{x \to 0}\frac{\frac{1}{1+x}-\cos{x}}{x} &= \frac{x (\frac{1-\cos x}{x}-\cos x)}{x}\cdot\frac{1}{1+x} \\ &= (\frac{1-\cos x}{x}-\cos x)(\frac{1}{1+x}) \\ &= (\frac{1-\cos x}{(x)(1+x)})- \frac{\cos x}{1+x} \\ \cdot\frac{1+\cos x}{1+\cos x} \to &= \frac{1-\cos^2x}{x}\frac{1}{(1+x)(1+\cos x)} - \frac{\cos x}{1+x}\cdot \frac{1+\cos x}{1+\cos x} \\ &= \frac{\sin^2 x}{x}\frac{1}{1+x}\frac{1}{1+\cos x}-\frac{\cos x}{1+x}\\ &= \frac{\sin x}{x}\frac{\sin x}{1+x}\frac{1}{1+\cos x}-\frac{\cos x}{1+x}\\ \lim_{x \to 0}\frac{\frac{1}{1+x}-\cos{x}}{x}  &= 0\cdot 0\cdot \frac{1}{2}-1 = -1  \end{align}$$
Allora $$\lim_{x \to 0}\frac{\frac{1}{1+x}-\cos{x}}{x} = -1$$
