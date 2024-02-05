#include <stdio.h>

int solo_diversi(int lambda, int dim, int A[])
{
	if(dim == 0) return 1;
	else
	{
		for(int i=0; i < dim; i++)
		{
			if(lambda == A[i]) return 0;
			else {}
		}
		solo_diversi(A[dim-1], dim-1, A);
	}
} // chiamo questa funzione come solo_diversi(A[dim-1], dim-1, A);

int main(void)
{

	int Array[4];
	Array[0] = 1; Array[1] = 1; Array[2] = 0; Array[3] = 4;
	printf("%d \n", solo_diversi(Array[4-1],4-1,Array));
}
