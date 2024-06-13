---
data: 2024-05-21
corso:
  - "[[Architetture degli elaboratori e Sistemi Operativi]]"
argomento: Comandi Bash per la Memoria
tipologia: appunti
stato: "1"
capitolo: Memoria
---
- - -
*Comandi bash per la memoria*
- - -
#  Gestione della memoria in Bash
Vediamo dei comandi per *gestire la memoria* in Bash.

**Lista.** (*Comandi Bash*)
- `free`: mostra quanta memoria è disponibile/utilizzata/libera nella macchina
- `top`: mostra varie informazioni sui processi
	- Colonna `RES`: *Resident Set Size* quante *pagine* dello spazio virtuale di un processo sono *caricate in memoria fisica* 
	- Colonna `VIRT`: *Virtual Set Size* quante *pagine sono state usate* dal processo nella sua storia
	- Colonna `%MEM`: `RES/totale`, ovvero *percentuale di memoria fisica* della macchina contente pagine del processo
- `cat /proc/meminfo`: mostra informazioni dettagliate su memoria della macchina (questa è la fonte del comando `free`
- `ldd eseguibile`: mostra quali librerie condivise esso richiede
- `objdump -p eseguibile`: dissector del formato ELF (*mostra* i campi dell'ELF)
