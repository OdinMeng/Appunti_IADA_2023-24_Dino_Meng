#include <stdio.h>

/* Cos'è un numero altamente composto? */

void printNAC(int k)
{
	int j = 2; //il contatore per cui parte da 2 e va fino a k
	int i = 2; //il contatore per cui verifichiamo se i è altamente composto o no
	int n_1; //il numero di divisori più alto fin'ora 'salvato'
	int n_i; //il numero di divisori del numero attuale
	// caso 1: numero 1 => Sì, i.q. primo numero. Allora
	n_1 = 1; n_i = 1;
	printf("1 è numero altamente composto \n");

	// altrimenti
	while( j <= k)
		{ // inizio contare tutti i numeri altamente composti finchè j non raggiunga k
			// creo e resetto n_i
			n_i = 1;
			// itero il numero attuale da 1 a i
			for(int p=1; p < i; p++)
			{
				if(i % p == 0){ n_i++; }
			}
			//ora faccio i conti per vedere se è altamente composto
			if(n_i > n_1)
			{
				j++;
				printf("%d è numero altamente composto \n", i);
				n_1 = n_i; //ora il numero più alto diventa quello attuale
			}
			i++; //andiamo al prossimo numero!
		} //fine blocco while

}

int main(void)
{
	int k;
	printf("Seleziona il tuo k: ");
	scanf("%d", &k);
	printNAC(k);
	return 1;
}
