#include <math.h>
#include <stdio.h>

void moltiplica(int Rez1, int Rez2, int Imz1, int Imz2, int *Res, int *Ims) // Res, Ims => z risultante
{
	int Re = Rez1 * Rez2 - Imz1 * Imz2;
	int Im = Rez1 * Imz2 + Rez2 * Imz1;
	*Res = Re;
	*Ims = Im;
}

int main(void)
{
	int Rez1, Rez2, Imz1, Imz2;
	// input
	Rez1 = 1;
	Imz1 = 2;
	Rez2 = 5;
	Imz2 = 0;

	// moltiplica
	int Res, Ims;
	moltiplica(Rez1, Rez2, Imz1, Imz2, &Res, &Ims);
	printf("Il numero risultante è %d+i%d \n", Res, Ims);
}
