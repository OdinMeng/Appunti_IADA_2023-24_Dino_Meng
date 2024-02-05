#include <stdio.h>

void sequenza(int a, int b)
{

	if(a > 0 && b > 0 && a < b)
	{
	for(int i=a; i <= b; i = i+2)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}

void main(void)
{
	sequenza(1, 35);
}
