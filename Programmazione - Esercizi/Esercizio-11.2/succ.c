#include <stdio.h>

float succric(int n, float p)
{
	if( n == 1){ return p; }
	else{
		return(0.5*(succric(n-1, p) + ( p/succric(n-1, p))));
	}
}
// posso ottimizzare il codice ponendo n1 = succricc(n-1, p);

float succiter(int n, float p)
{
	float sum = 0.0;
	float n1 = p; // caso n=1
	for(int i=2; i <= n; i++)
	{
		sum = 0.5*(n1 + (p / n1));
		n1 = sum;
	}
	return sum;
}

float valass(float n)
{
	if(n >= 0){ return n;}
	else{ return -1*n; }
}

void main(void)
{
	int n; float p;
	// testo le funzioni
	n = 10;
	p = 7;

	// calcolo succric, succiter
	printf("Iterativa %f, ricorsiva %f \n", succiter(n, p), succric(n,p));

	// testing convergenza
	n = 1000;
	p = 7;
	float ris = succiter(n, p);
	float risquad = ris * ris;

	// OSS. si può fare limite <=> sqrt(p) <===> limite^2 <=> p, giustificando le due righe di prima
	float diff = valass(p-risquad);
	printf("La distanza tra radice di p e limite di successione è %f \n", diff);
}
