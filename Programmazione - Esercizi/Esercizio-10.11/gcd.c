// Algoritmo di euclide versione ric.

#include <stdio.h>
int gcd(int a, int b, int contatore)
{
	if(a==b){ printf("gcd trovato dopo %d calcoli \n", contatore); return a; }
	else
	{
		if(a > b){ return gcd(a-b, b, contatore+1); }
		if(a < b){ return gcd(b, b-a, contatore+1); }
	}
}

int main(void)
{
	// testo la funzione
	int a; int b;
	printf("Seleziona il tuo intero positivo maggiore di zero a:");
	scanf("%d", &a);

	printf("Ora il b:");
	scanf("%d", &b);

	printf("gcd(%d,%d) = %d \n", a,b, gcd(a, b, 0));
	return 0;
}
