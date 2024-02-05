#include <stdio.h>

void inverti_array(int A[], int dim)
{
	for(int i=0; i < (dim/2); i++)
	{
	int tmp = A[i];
	A[i] = A[dim-(i+1)];
	A[dim-(i+1)] = tmp;
	}
}

int main(void)
{
	int Array[5];
	for(int i=0; i < 5; i++)
	{
		printf("Inserisci elemento %d-esimo dell'array \n > ", i);
		scanf("%d", &Array[i]);
	}
	inverti_array(Array, 5);
	printf("L'array invertito è: ");
	for(int i=0; i<5; i++)
	{
		printf("%d ", Array[i]);
	}
	printf("\n");
	return 0;
}
