#include <stdio.h>

void hailstone_printseq(int n)
{
	printf("n = %d \n", n);
	if( n == 1){ printf("TRAGUARDO: m = 1 \n\n"); }
		// Oppure semplicemente posso fare ( n != 1)
	else {
		int m;
		if( n % 2 == 0) { m = n/2;}
		else { m = n*3 + 1 ;}
		printf("m = %d \n\n", m);
		hailstone_printseq(m);
	}
}

int hailstone_printlen(int n, int len) // la si chiama come hailstone_printlen(n, 0);
{
	if( n == 1){ return len; }
	len = len +1 ;
	if( n % 2 == 0){ hailstone_printlen(n/2, len); }
	else{ hailstone_printlen(n*3 + 1, len); }
}

/* metodo alt. più elegante

int hailstone_printlenRIC(int n)
{
	if( n == 1){ return 1; }
	else
	{
		if(n%2 == 0){ return 1 + hailstone_printlenRIC(n/2);}
		else{ return 1 + hailtstone_printlenRIC(n*3 +1);}
	}
}

*/

int main(void)
{
	int n;

	printf("Inserisci il tuo n per Hailstonarlo \n");
	scanf("%d", &n);

	hailstone_printseq(n);
	printf("La lunghezza di Hailstone per %d è %d\n", n ,hailstone_printlen(n, 0));
}

/*
Versione iterativa => SEQUENZA ITERATIVA
int hailstone_seqiter(int n)
{
	int len = 0;
	while( n!= 1)
	{
		len++;
		if( n%2 == 0){ n = n/2; }
		else { n = 3*n + 1; }
	}

	return len;
}

*/
