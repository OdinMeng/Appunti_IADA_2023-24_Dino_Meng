#include <stdio.h>

float serieRic(int n, float j) // j dev'essere 0
{
	if(j == n){ return 1/( (2*j+1)*(2*j+1) ); }
	return (1/( (2*j+1)*(2*j+1)) + (serieRic(n, j+1)));
}

float serieIter(int n)
{
	float si = 0;
	for(float i=0; i<=n; i = i+1.0)
	{
		si = si + (1/( (2*i+1)*(2*i+1)));
	}
	return si;
}

float valass(float x)
{
	if(x>=0){ return x; }
	if(x<0){ return -1*x; }
}

int main(void)
{
	// Testo le funzioni per n=10
	int n = 1000;
	printf("Ricorsiva = %f, Iterativa = %f \n", serieRic(n, 0), serieIter(n));

	// Testo la convergenza
	float target = 3.14159*3.14159*0.125;
	n = 10000000;
	float d = target-serieIter(n);
	printf("La distanza euclidea tra la successione e target è %f \n", valass(d));
	return 1;
}
