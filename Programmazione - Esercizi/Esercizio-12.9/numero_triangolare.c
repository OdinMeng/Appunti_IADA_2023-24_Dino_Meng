#include <stdio.h>

int main(void)
{
	int dim = 1000; // da definire arbitrariamente
	int A[dim];
	for(int i=0; i < dim; i++)
	{
		A[i] = (i)*(i+1)*(0.5);
		printf(" %d ", A[i]);
	}
	printf("\n");
}

// Complessità: O(n)
