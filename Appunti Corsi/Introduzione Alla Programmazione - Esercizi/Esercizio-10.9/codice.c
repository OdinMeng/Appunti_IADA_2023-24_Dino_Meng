/*

SOMMA DI CIFRE ITERATIVA

357 => i=1; 357 / 10 = 35, 357%10 = 7
35 => i=2; ...
3 => i=3; ...
i rappresenta il numero delle cifre da 1 ad n (w)
*/

#include <stdio.h>

int cric(int n)
{
	int w = 1;
	int nw = n;
	int s = 0;

	// trovo w
	while( (nw/10) != 0 )
	{
		w = w+1;
		nw = nw/10;
	}

	// calcolo somma
	for(int i=1; i <= w; i++)
	{
		s = s + n % 10;
		n = n/10;
	}

	return s;

	/*
	OSS. il for che io ho inserito è inutile, posso direttamente fare tutto col while;
	while(n > 0)
	{
		s = s + (n % 10);
		s = s / 10;
	}
	risparmiandoci così delle righe
	*/
}

int main(void)
{
	int n;
	printf("Inserisci il tuo numero cn: ");
	scanf("%d", &n);

	printf("La somma diviene %d \n", cric(n));

}

