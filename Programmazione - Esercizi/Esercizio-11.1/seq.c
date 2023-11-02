#include <stdio.h>

float SuccRic(int n)
{
	if(n == 1){ return 0.5;}
	else{ return 0.5*(SuccRic(n-1)+1.0); }
}

float SuccIter(int n)
{
	float a_i = 0;
	float a_n_1 = 0.5;
	a_i = a_n_1;
	for(int i=2; i <= n; i++)
	{
		a_i = 0.5*(a_n_1 + 1);
		a_n_1 = a_i;
	}

	return a_i;
}

void main(void)
{
	// verifico le funzioni
	int n = 10;
	printf("Ricorsiva %f, iterativa %f", SuccRic(n), SuccIter(n));

	// verifico la convergenza
	n = 100;
	printf("La serie converge a %f", SuccIter(n));
}
