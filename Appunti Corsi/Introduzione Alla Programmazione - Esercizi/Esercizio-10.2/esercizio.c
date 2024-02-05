/*
Esercizio 10.2

(potenza)
1. creare p_n(x) potenza ove n>0, a è intero; a^b
2. creare test che testa TUTTI i valori da i valori da 1 a 5

*/

#include <stdio.h>

int pot(int n, int x)
{
	int p = 1;
	for(int i=1; i <= n; i++)
	{
		p = p*x;
	}

	return p;
}

void test(void)
{
	for(int i = 1; i<=5; i++)
	{
		for(int j = 1; j<=5; j++)
		{
			printf("coppia (a = %d, b = %d) - a^b = %d^%d = %d\n", j,i,j,i, pot(i, j));
		}
	}
}


int main(void)
{
	int x, n;
	printf("Inserisci numero (base): ");
	scanf("%d", &x);

	printf("Inserisci numero(potenza): ");
	scanf("%d", &n);

	printf("%d^%d = %d\n", x, n, pot(n, x));

	test();
	return 0;
}
