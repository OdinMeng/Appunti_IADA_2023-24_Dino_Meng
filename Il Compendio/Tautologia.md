---
data: 2023-09-25
corso: "[[Analisi Matematica I]]"
argomento: Tautologia
tipologia: appunti
---
*Tautologia: cos'è, alcuni esempi. Dimostrazione-esempio di una delle tautologie*
- - -
Una tautologia è una proposizione composta che è *sempre* vera, indipendentemente dai valori delle proposizioni.
Eccovi alcuni esempi.
- $p \vee \neg p$ : tertium non datur
- $\neg (p \wedge p)$: non contraddictio
- $(p \land (p \implies q)) \implies q$: modus ponens
- $(\neg q \land (p \implies q)) \implies \neg p$: modus tollens
- $((p \land \neg q)\implies(r \land \neg r)) \iff (p \implies q)$: reductio ad absurdum

**DIMOSTRAZIONE (EX. 5)** $((p \land \neg q)\implies(r \land \neg r)) \iff (p \implies q)$
1. Si osserva che $r \land \neg r$ è sempre falsa: di conseguenza si può riscriverla come $F$, per indicare che è una proposizione sempre falsa, indipendentemente dai valori $p, q, r$.
2. Si osservano le seguenti per $p \land \neg q$:
	1. Per la legge di De Morgan, $(p \land \neg q) \iff \neg(\neg p \vee q)$
	2. Per la definizione dell'implicazione in [[Connettivi]], $\neg p \vee q = p \implies q$
	3. Pertanto $p \land \neg q = \neg(p \implies q)$
3. Secondo le osservazioni appena svolte, si deduce che $((p \land \neg q)\implies(r \land \neg r)) \iff (\neg(p \implies q) \implies F)$
4. Inoltre, osservando che $p \implies q \iff \neg q \implies p$, $(\neg(p \implies q) \implies F) \iff (V \implies (p \implies q))$
5. Usando di nuovo la definizione dell'implicazione, $(V \implies (p \implies q)) \iff (F \vee (p \implies q))$
6. Osservando che $F \vee p \iff p$, si conclude che $(F \vee (p \implies q)) \iff (p \implies q)$
7. Pertanto $((p \land \neg q)\implies(r \land \neg r)) \iff (p \implies q)$ $\blacksquare$
