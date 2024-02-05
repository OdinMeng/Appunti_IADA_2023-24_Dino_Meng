#include <stdio.h>

int stampa_indirizzo(int x)
{
	printf("l'indirizzo della variabile data è %d \n", &x);
}

int main(void)
{
	int delta = 10;
	printf("l'indirizzo di delta è %d \n", &delta);
	stampa_indirizzo(delta);
}

// OSS. Noto che gli indirizzi stampati NON sono gli stessi, in quanto abbiamo il passaggio di parametro per valori;
// ---. infatti aprendo il frame della funzion stampa_indirizzo, "copiamo" il valore dell'argomento passato ad un nuovo indirizzo.
// ---. Pertanto abbiamo due "case" diverse che ospitano lo stesso valore, ma hanno indirizzi diversi.

// Spiegazione grafica
//	rho		|	sigma
//	delta l0	|	l0 10
//----------------------------- => apro frame di parametri
//	x l1		|	l1 10
//----------------------------- => noto che l0 e l1 sono sicuramente diversi

