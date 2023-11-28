#include <stdio.h>

void ordinamento(int A[], int dim)
{
	int n = 0; // rappresenta la quantità dei numeri ordinati
	int lambda;
	int flag_restart = 0;
	while(n != (dim-1))
	{
		// setto le variabili "di confronto"
		lambda = A[n];
		flag_restart = 0; // rappresenta il segnale per cui avrò trovato degli "intrusi", dovendo swappare e ricominciare da capo
		// itero l'array da n+1 (primo elemento dopo n) a dim-1 confrontandoli con lambda (il primo elemento su n)
		for(int i=(n+1); (i < dim) && !flag_restart; i++)
		{
			if(lambda > A[i])
			{
				flag_restart = 1;
				// swappo
				A[n] = A[i];
				A[i] = lambda;
			}
		}
		if(!flag_restart) n++; // non ho individuato nessun bisogno di swappare numeri; quindi è tutto OK
	} // faccio questa procedurà finchè ho esattamente il numero dei numeri ordinati uguale a dim-1 (in quanto mi bastano tutti i numeri
	  // ordinati fino al penultimo elemento)
}

int main(void)
{
	int A[4];
	A[0] = 1;
	A[1] = 2;
	A[2] = 7;
	A[3] = 5;
	ordinamento(A, 4);
	for(int i=0; i < 4; i++)
	{
		printf(" %d ", A[i]);
	}
	printf("\n");
}
