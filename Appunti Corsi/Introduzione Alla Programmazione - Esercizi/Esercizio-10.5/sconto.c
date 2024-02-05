/* Input = prezzo originale (float); sconto (int) => Ouput = prezzo scontato */
#include <stdio.h>

float sconta(float prezzo, int sconto)
{
	return(prezzo - (prezzo*((sconto+0.0)/100)));
}

void main()
{
	printf("Da 150 con 35 per cento di sconto diventa %f", sconta(150.0, 35));
}
