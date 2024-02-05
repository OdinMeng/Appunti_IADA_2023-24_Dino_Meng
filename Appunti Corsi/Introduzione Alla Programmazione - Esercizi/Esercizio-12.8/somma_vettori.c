#include <stdio.h>

void somma_vettori(int *A1, int *A2, int *A3)
{
	for(int i=0; i < 3; i++)
	{
		*(A3+i) = *(A1+i) + *(A2+i);
	}
}

int main(void)
{
	int A1[3];
	int A2[3];
	int A3[3];
	// inserisco valori di A1, A2
	A1[0] = 1; A1[1] = 2; A1[2] = 5;
	A2[0] = 3; A2[1] = 5; A2[2] = 0;
	// sommo
	somma_vettori(A1, A2, A3);

	// printo A3
	for(int i=0; i < 3; i++)
	{
		printf(" %d ", A3[i]);
	}
	printf("\n");
}
