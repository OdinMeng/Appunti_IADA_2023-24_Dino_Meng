#include <stdio.h>

float fun_iter(float n)
{
	if(n == 1){ return -1.0; }
	if(n == 2){ return 0.0; }

	float a_i; float a_n1 = 0.0; float a_n2 = -1.0;
	for(float i=3.0; i <= n; i++)
	{
		if(a_n1 >= 2.0*a_n2){ a_i = (7+a_n1-1)/(i); }
		else{ a_i = (7-a_n1-1)/(i-1); }
		a_n2 = a_n1;
		a_n1 = a_i;
	}
	return a_i;
}

float fun_ric(float n)
{
	if(n == 1){ return -1.0; }
	if(n==2){ return 0.0; }
	if(fun_ric(n-1) >= 2.0*fun_ric(n-2)){ return (7+fun_ric(n-1)-1)/(n); }
	else{ return (7-fun_ric(n-1)-1)/(n-1); }
}

float val_ass(float x)
{
	if(x>0) return x;
	else return -1.0*x;
}

void main(void)
{
	// testo la differenza tra fun_ric e fun_iter per valori da 1 a 23
	for(float n=1; n <= 200; n++)
	{
		printf("a%f => %f \n", n, fun_iter(n));
	}
}
