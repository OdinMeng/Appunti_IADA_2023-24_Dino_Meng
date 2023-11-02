#include <stdio.h>

float SerieGRic(int n, float x, int j, float xpot) // la chiamo come SerieGRic(n, x, 0, 1);
{
	if(j == n){ return xpot;}
	return xpot + SerieGRic(n, x, j+1, xpot*x);
}

float SerieGIter(int n,float x)
{
	float sum = 0;
	float xpot = 1.0;
	for(int i=0; i <= n; i++)
	{
		sum = sum + xpot;
		xpot = xpot * x;
	}
	return sum;
}

int potenza(float x, int n)
{
	float pot = 1;
	for(int i = 1; i <= n; i++){ pot = pot * x; }
	return pot;
}

void main(void)
{
	// provo le funzioni
	float x = 2.0; int n = 10;
	printf("Ricorsiva %f; Iterativa %f \n", SerieGRic(n, x, 0, 1), SerieGIter(n, x));

	// provo l'equivalenza
	printf("Serie con formula chiusa: %f \n", (1-potenza(x, n+1))/(1-x));
	printf("Serie con sommatoria: %f \n", SerieGIter(n, x));
}
