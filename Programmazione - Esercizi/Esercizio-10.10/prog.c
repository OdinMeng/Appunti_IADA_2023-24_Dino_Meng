#include <stdio.h>

int pi_iter(int n)
{
	int ris = 1;
	for(int i = 2; i <= (n/2) && ris; i++)
	{
		if(n % i == 0) { ris = 0; }
	}
	return ris;
}

int prime_ricor(int n, int j) // la funzione va chiamata come prime_ricor(n, 2);
{
	if ( n <= 2) return 1;
	if ( n%j == 0 ) return 0;
	if ( j > (n/2)) return 1;
	return prime_ricor(n, j+1);
}

void test()
{
	int partenza = 1;
	int traguardo = 5;
	float s=0.0;
	float k=-1.0;
	int p1 = 0;
	int p2 = 0;
	for(int i=partenza; i <= traguardo; i++)
	{
		if(pi_iter(i))
			{
				printf("%d è primo \n", i);
				k = k+1;
				s = s+(p1 - p2);
				// preparo per la prossima iterazione
				p2 = p1;
				p1 = i;
			}
	}
	printf("La distanza media di ciascuno dei numeri primi trovati è %f \n", s/k);
} //per casa rivedo questo pezzo
int main(void)
{
	int n;
	printf("Inserisci n");
	scanf("%d", &n);

	printf("Test ricorsivo/iterativo primo %d: %d, %d \n", n, pi_iter(n), prime_ricor(n, 2));
	test();
}
