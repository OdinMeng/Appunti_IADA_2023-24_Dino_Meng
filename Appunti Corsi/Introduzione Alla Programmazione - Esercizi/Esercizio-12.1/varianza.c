#include <stdio.h>

float media_array(int A[], int dim)
{
	int s = 0;
	for(int i=0; i < dim; i++) s+=A[i];
	return (s)/(dim+0.0);
}

float varianza(int A[], int dim)
{
	float sigma = 0;
	float mu = media_array(A, dim);
	for(int i=0; i < dim; i++)
	{
		sigma += (A[i]-mu)*(A[i]-mu);
	}
	return (sigma)/(dim+0.0);
}

int main(void)
{
	int Array[5];
	Array[0] = 1; Array[1] = 3; Array[2] = 4; Array[3] = 6; Array[4] = 7;
	printf("Varianza dell'array è %f \n", varianza(Array, 5));
	return 0;
}
