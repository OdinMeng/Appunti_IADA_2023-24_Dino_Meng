/* Se b è pari => printi i dispari; se b è dispari => printi i pari
? come faccio a vedere se è un numero è pari o dispari ? => uso mod n; ovvero x%2 ==> se 1, dispari; se 0, pari
b pari => considero dispari 1 (uso una specie di flag boolean?)
b dispari => considero i pari 0
ciclo for da a fino a b

*/

#include <stdio.h>

void printalternumero(int a, int b)
{
	if( a >= b)
	{
		printf("Errore \n");
	}
	else
	{
		for(int i=a; i<=b; i = i+2)
		{
			printf("%d \n", i);
		}
	}
}

void printalternumeroric(int a, int b)
{
	if(a > b) { }
	if(a == b) { printf("%d \n", a); }
	else
	{
	printf("%d \n", a);
	printalternumeroric(a+2, b);
	}

/* oppure
	if(a < b)
	{
		printf("%d\n", a);
		printalternumeroric(a+2, b);
	}
*/

}

int main(void)
{
	int a,b;
	printf("Salve, inserisca il numero a: ");
	scanf("%d", &a);
	printf("Ora il numero b: ");
	scanf("%d", &b);

	printf("a=%d, b=%d => \n", a, b);
	printalternumero(a, b);
	printf("VERSIONE RICORSIVA \n");
	printalternumeroric(a, b);
}
