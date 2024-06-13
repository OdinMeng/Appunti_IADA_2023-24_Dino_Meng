---
data: 2024-05-15
corso:
  - "[[Introduzione alla Fisica]]"
argomento: Calcolo di Entropia per un Gas Perfetto
tipologia: appunti
stato: "1"
capitolo: Termodinamica
---
- - -
*Calcolo di entropia per un gas perfetto.*
- - -
# 0. Voci correlate
- [[Definizione di Entropia]]
- [[Primo Principio della Termodinamica]]
# 1. Calcolo di Entropia per un Gas Perfetto
#Lemma 
> [!lem] entropia di un gas perfetto
> Dato un *sistema termodinamico* che rispetta le *leggi del gas perfetto*, abbiamo che la sua entropia viene calcolata come
> $$
> \boxed{S=nc_V \ln T + n R \ln V + S_0}
> $$
> con $S_0$ una *costante di integrazione*, che è difficile da calcolare.
^c1f29d

#Dimostrazione 
**DIMOSTRAZIONE** del [[#^c1f29d]]
Usiamo il *primo principio della termodinamica*, versione rivisitata.
$$
\text{d}U = T \ \text{d}S+P \ \text{d}V
$$
Adesso isolo la variazione d'entropia, dandoci
$$
\text{d}S=\frac{\text{d}U+P \ \text{d}V}{T}=n c_V \frac{\text{d}T}{T}+nR \frac{\text{d}V }{V}
$$
considerando che $PV=nRT$ e $\text{d}U = nc_V \text{ d}T$. Integrando tutto (ciò è consentito dato che abbiamo *due derivate parziali per l'entropia*), otteniamo la tesi. $\blacksquare$

