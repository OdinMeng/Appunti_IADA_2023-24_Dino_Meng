---
data: 2024-03-12
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Linguaggio Assembly
tipologia: appunti
stato: "0"
capitolo: Architetture degli elaboratori
---
- - -
*Funzionamento base del linguaggio Assembly: codifica delle istruzioni, program status register. Alcune istruzioni ARM del linguaggio Assembly. Istruzione MOV, ADD, SUB, B, BL, CMP, BEQ, LOAD, STORE. Chiamate di funzione con Assembly.*
- - -
# 1. Codifica delle Istruzioni
**LA CODIFICA DELLE ISTRUZIONI IN ASSEMBLY.** Come detto prima, ogni informazione dev'essere rappresentata come un numero (in particolare binario). Questo vale anche per le istruzioni del linguaggio Assembly (in particolare v7a): ogni istruzione occupa esattamente *4 byte*. Ora vediamo i *"ruoli"* di questi bit individuali

**BIT 1-6.** Sono dei bit di cui possiamo non occuparcene, dato che si trattano di dettagli.
**BIT 7.** (*Segno*) Questo bit è una specie di *"flag"* che ci dice se questa *"stringa"* binaria di numeri tratta il *secondo operando* come un *registro* o un *immediato*.
**BIT 8-11.** (*Opcode*) Indica l'operazione da eseguire
**BIT 12.** (*Set condition codes*) Dettagli.
**BIT 13-16.** (*Registro di destinazione*) Indirizzo del registro in cui salvare il risultato del calcolo.
**BIT 17-20.** (*Primo operando*) Sempre un registro
**IL RESTO DEI BIT.** (*Secondo operando*)

**FIGURA 1.1.** (*Schema riassuntivo*)
![[Pasted image 20240312220550.png]]

# 2. Program Status Register
**L'IDEA.** Il program status register è utile per *tenere conto* di operazioni di *comparazione*. I bit di questa componente verrà controllata dai comandi *branch condizionali*. In particolare tengono conto di quattro risultati: *negative result*, *zero result*, *carry set* e *overflow*.

# 3. Istruzioni Assembly
**MOV.** L'istruzione `MOV` permette di copiare un *valore* da un *registro* a un *altro registro* (oppure inserire un valore numerico in un registro). Viene scritta come `MOV dest, source`.

**ADD.** L'istruzione `ADD` permette di *sommare due valori* contenuti in due registri, o di *sommare un valore di un registro* con un *valore numerico*. Viene scritta come `ADD dest, op1, op2`.

**SUB.** L'istruzione `SUB` è analoga all'istruzione `ADD`, solo che al posto di *aggiungere numeri* si *sottrae* dei numeri.

**BRANCH.** L'istruzione branch `B` ci permette di saltare ad un'altra istruzione nel codice, che viene contrassegnata con un *label*. Viene scritta come `B label`. Notare che con *sola* questa istruzione, si può avere solo *cicli infiniti*.

**CMP.** L'istruzione `CMP` ci permette di comparare *due numeri* contenuti in *due registri* (o un numero di un registro con un valore numerico). Dal momento che *non serve* di nessuna destinazione di scrittura (infatti l'esito viene automaticamente salvato nel *PSR*), viene scritta solamente come `CMP op1 op2`.

**BEQ.** L'istruzione `BEQ` è *una delle istruzioni* di *branch condizionale*, ovvero del *branch* effettuata solo in certi casi. In questo caso, `BEQ` effettua un branch solo nel caso dell'uguaglianza di due valori precedentemente comparati con l'istruzione `CMP`.
Di altri tipi ce ne sono `BNE` che verifica la *disuguaglianza* di due valori.

**LOAD.** L'istruzione `LDR` permette al calcolatore di *accedere* alla *memoria del lavoro*. Dato che gli *indirizzi della memoria del lavoro* sono diversi da quelli dei *registri* (infatti se fossi così, avremmo solo $2^{24}$ locazioni di memoria che equivalgono a circa *16 MB*), l'indirizzo della memoria viene indicata mediante un *registro che contiene l'indirizzo da cui prendere il valore*. Ovvero si ha `LDR dest, [addr]`.

**STORE.** Analogamente al comando `LDR`, il comando `STR` ci permette di *salvare* un valore numerico di un registro in una locazione di memoria. Si ha quindi `STR src, [addr]`.

# 4. Chiamate di funzioni
**LO STACK.** Per effettuare una *"chiamata di funzione"* in Assembly, bisogna prima decidere le convenzioni per *"tradurre"* le seguenti:
- Come passare gli argomenti
- Come salvare lo stato prima della chiamata della funzione
- Come salvare lo stato della funzione
- Come ritornare il valore

Per far ciò usiamo una struttura particolare chiamata *"stack"*. Questa struttura di indirizzi inizia con un indirizzo di memoria fissato, noto come *"top of the stack"*; dopodiché il registro *R13* indica la *prima posizione libera sullo stack*. 

# 5. Esempio
**ESERCIZIO.** Effettuare una specie di *"conversione"* dal C in Assembly:
```C
int x = 5;
int y = 10;
while (y>0)
{
	x = x + y + 3;
	y = y - 1;
}
```

**SOLUZIONE.**
```nasm
MOV R0, #5
MOV R1, #10

loop:

CMP R1, 1
BEQ end
ADD R0, R0, R1
ADD R0, R0, #3
SUB R1, R1, #1
B loop

end:

```
