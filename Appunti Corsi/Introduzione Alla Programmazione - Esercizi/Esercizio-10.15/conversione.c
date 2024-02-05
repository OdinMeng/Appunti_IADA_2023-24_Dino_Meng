#include <stdio.h>

int conv_dec(int n)
{
	int r = 0;
	int pot = 1; // per la "posizione" di ogni cifra
	while(n != 0)
	{
		r = r+((n%2)*pot);
		pot = pot*10;
		n = n/2;
	}
	return r;
}

int conv_bin(int n)
{
	int r = 0;
	int pot = 1;
	while( n != 0)
	{
		r = r+((n%10)*pot);
		pot = pot*2;
		n = n/10;
	}
	return r;
}

// Esercizio personale: generalizzare la procedura (VALIDA SOLO PER BASI DA 1 A 10: non ho abbastanza "lettere" per rappresentare le ulteriori basi)
int conv_gen(int n, int da, int a)
{
	int r = 0;
	int pot = 1;
	while( n != 0)
	{
		r = r + ((n % a) * pot);
		pot = pot*da;
		n = n/a;
	}
	return r;
}

int conv_gen_ric(int n, int da, int a, int pot)
{
	if(n==0){ return 0;}
	return ((n%a) * pot) + conv_gen_ric(n/a, da, a, pot*da);
} // la chiamo così: conv_gen_ric(n, da, a, 1) => da := base di partenza || a := base di arrivo

// test da 1 a 100
void main(void)
{
	for(int i=1; i<=100; i++)
	{
	int i_bin = conv_dec(i);
	printf("Da %d decimale a binario: %d \n", i, i_bin);
	printf("Da %d binario a decimale: %d \n\n", i_bin, conv_bin(i_bin));
	}

}
