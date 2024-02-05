#include <stdio.h>
// Implementazione ricorsiva di LCM
/*
Per definizione l'LCM tra due numeri è il multiplo più piccolo tra due numeri in comune.
Suppongo a>b; ora ho l'indice i, così posso tenere l'i-esimo multiplo di a.
Allora prendo l'i-esimo multiplo di a, vedo se b è divisibile per tale multiplo; se sì, ritorno quel multiplo
Altrimenti vado avanti con gli i-esimi multipli
Se b>a, basta scambiare le variabili.
*/

int lcm(int a, int b, int j)
{
	if(b > a){ return lcm(b, a, j); } // se b>a
	if((a*j) % b == 0 ){ return a*j; }
	return lcm(a, b, j+1);
}

// gcd dall'ES 10.11
int gcd(int a, int b)
{
        if(a==b){ return a; }
        else
        {
                if(a > b){ return gcd(a-b, b); }
                if(a < b){ return gcd(b, b-a); }
        }
}

// Testing con gcd
int main(void)
{
	int a,b;
	printf("int a:");
	scanf("%d", &a);

	printf("int b:");
	scanf("%d", &b);

	int lcm_test = (a*b)/gcd(a,b);
	int lcm_ric = lcm(a, b, 1);

	printf("lcm test: %d, lcm ricorsivo: %d \n", lcm_test, lcm_ric);

}
