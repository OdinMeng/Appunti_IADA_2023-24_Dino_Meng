#include <stdio.h>

int stampa_array(int *A, int dim)
{
	printf("Array: [");
	for(int i=0; i < dim; i++)
	{
	printf(" %d ", *(A+i));
	}
	printf("] \n");
}

int main(void)
{
	int A[5];
	A[0] = 1; A[1] = 2; A[2] = 3; A[3] = 4; A[4] = 5;
	stampa_array(A, 5);
	return 0;
}

