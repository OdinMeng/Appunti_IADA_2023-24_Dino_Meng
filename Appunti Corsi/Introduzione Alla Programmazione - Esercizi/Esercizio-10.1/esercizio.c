/*
Esercizio 10.1 della dispensa di G. Caravagna

2 funzioni:
f(x,y,z) -> min(x,y,z)
g(x,y,w) ove w sono tutti i numeri naturali da 1 a max(x,y): f(x,y,w) ===> QUI HO SOLO 2 INPUT DELL'UTENTE
*/

#include <stdio.h>

int min(int x, int y, int z)
{
	if(x >= y)
	{
		if(y>=z) {return z;}
		else {return y;}
	}
	else
	{
		if(x>=z){ return z;}
		else{ return x; }
	}
}

void test(int x, int y)
{
	int w = min(x, y, x+y);
	if(w == x){ w = y ;}
	else{w = x;}

	for(int i=1; i <= w; i++)
	{
		printf("tripletta (%d, %d, %d) - minimo -> %d \n", x, y, i, min(x,y,i));
	}
}


int main(void)
{
	printf("Buonsalve, buonbenvenuto! \n");
	int x, y, z;
	printf("Inserisci un numero (x): ");
	scanf("%d", &x);

	printf("Inserisci un numero (y): ");
	scanf("%d", &y);

	printf("Inserisci un numero (z): ");
	scanf("%d", &z);

	printf("tripletta (%d, %d, %d) - minimo -> %d \n", x, y, z, min(x,y,z));

	test(x, y);
	return 0;
}
