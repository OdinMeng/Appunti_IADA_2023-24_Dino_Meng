#include <stdio.h>

int divisore_di_tutti(int A[], int dim)
{
	int r = 0; // il risultato finale
	int streak = 0; // il contatore che conta il numero di numeri per cui lambda è divisore; se è uguale a dim sono contento
	int lambda;
	for(int j=0; j < dim && !r; j++) // indice di lambda_j per cui si confronterà il resto dell'array
	{
		streak = 0;
		lambda = A[j];
		if(lambda == 0) {} // skippa se l'elemento è 0 visto che nessun elemento è divisibile per 0
		else
		{
			for(int i=0; i < dim && !r; i++) // itero su A
			{
				if(A[i] % lambda == 0) streak++;
			}
			if(streak == dim) r=1;
		}
	}
	return r;
}

int main(void)
{
	int A[4];
	A[0] = 6;
	A[1] = 4;
	A[2] = 14;
	A[3] = 2;

	printf("%d \n", divisore_di_tutti(A, 4));
	return 0;
}
