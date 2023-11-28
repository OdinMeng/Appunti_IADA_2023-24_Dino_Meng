#include <stdio.h>
// NOTA: Come nell'es. 12.11 ho svolto l'esercizio con int al posto di stringhe

int palindromo(int A[], int dim)
{
	int r = 1; // sono ottimista!
	for(int i=0; (i < (dim/2))&&r; i++)
	{
		if(A[i] != A[dim-(i+1)]) r = 0;
	}
	return r;
}

int main(void)
{
	int A[5];
	A[0] = 0; A[1] = 2; A[2] = 7; A[3] = 2; A[4] = 1; // 0 2 7 2 1
	printf("%d \n", palindromo(A, 5));
}
