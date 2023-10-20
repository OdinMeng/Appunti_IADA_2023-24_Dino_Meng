#include <math.h>
#include <stdio.h>

void moltiplicazione(int a, int b, int a1, int b1)
{
	int p1, p2;
	p1 = a*a1 - b*b1;
	p2 = a*b1 + a1*b;
	printf("Il risultato di (%d+i%d)(%d+i%d) è (%d+i%d) \n", a, b, a1, b1, p1, p2);
}

void addizione(int a, int b, int a1, int b1)
{
	printf("Il risultato di (%d+i%d)+(%d+i%d) è (%d+i%d) \n", a, b, a1, b1, a+a1, b+b1);
}

void coniugo(int a, int b)
{
	printf("Il coniugo di (%d+i%d) è (%d+i%d) \n", a, b, a, (-1*b));
}

void modulo(int a, int b)
{
	printf("Il modulo di (%d+i%d) è (%d) \n", a, b, sqrt(a*a+b*b));
}

int main(void)
{
	moltiplicazione(0, 1, 0, 1);
	moltiplicazione(10, -2, -3, 1);
	coniugo(1, -5);
	modulo(1, 0);
	return 0;
}
