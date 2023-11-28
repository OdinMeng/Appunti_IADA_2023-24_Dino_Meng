#include <stdio.h>
// Nota: al posto di trattare con stringhe ho deciso di trattare con array di numeri INTERI

int glue(int A1[], int A2[], int A3[], int dim1, int dim2, int dim3)
{
	for(int i=0; i < dim1; i++)
	{
		A3[i] = A1[i];
	}
	for(int i=0; i < dim2; i++)
	{
		A3[i+dim1] = A2[i];
	}
}

int main(void)
{
	int A1[5]; A1[0] = 0; A1[1] = 2; A1[2] = 6; A1[3] = 3; A1[4] = 5; // numero 0 2 6 3 5
	int A2[3]; A2[0] = 7; A2[1] = 2; A2[2] = 8; // numero 7 2 8

	int A3[5+3];
	glue(A1, A2, A3, 5, 3, 5+3);
	for(int i=0; i < 5+3; i++)
	{
		printf(" %d ", A3[i]);
	}
	printf("\n");
	return 0;
}
