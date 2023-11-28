#include <stdio.h>

int main(void)
{
	int dim1 = 10;
	int dim2 = 3;
	int max_dim = dim1+dim2;

	int A[dim1];
	int B[dim2];
	int AB[max_dim];

	// l'utente inscerisce gli elementi di A
	for(int i=0; i < dim1; i++)
	{
		printf("Insersci a%d", i);
		scanf("%d", &A[i]);
	}
	// l'utente inserisce gli elementi di B
	for(int j=0; j < dim2; j++)
	{
		printf("Inserisci b%d", j);
		scanf("%d", &B[j]);
	}

	// calcola AUB
	for(int i=0; i < dim1; i++)
	{
		int flag = 1;
		for(int j=0; j < dim2; j++)
		{
			if(A[i] == B[j]) flag=0;
		}
		AB[i] = A[i]*flag;
	} // se è l'elemento comune => ti dà 0

	for(int j=0; j < dim2; j++)
	{
		int flag = 1;
		for(int i=0; i < dim1; i++)
		{
			if(A[i] == B[j]) flag=0;
		}
		AB[j+dim1] = B[j]*flag;
	}

	// Printa AUB
	for(int i=0; i < max_dim; i++)
	{
		printf("elemento %d-esimo di AuB è %d\n", i, AB[i]);
	}
} // non è giusta in quanto prendo A xor B
