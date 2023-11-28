#include <stdio.h>

int min(float x1, float x2)
{
	if(x1 >= x2) return x2;
	else return x1;
}

void area(int somma, int differenza, float *area)
{
	float b1 = (somma+differenza)/(2.0);
	float b2 = (somma-differenza)/(2.0);
	float h = min(b1, b2)*(0.666); // 0.666 è una buona approx. di 2/3
	*area = (0.5)*(somma)*h;
}

int main(void)
{
	float A;
	float b1;
	float b2;
	printf("Inserisci base grande: ");
	scanf("%f", &b1);

	printf("Inserisci base piccola: ");
	scanf("%f", &b2);

	area(b1+b2, b1-b2, &A);
	printf("L'area del trapezio è %f \n", A);
}
