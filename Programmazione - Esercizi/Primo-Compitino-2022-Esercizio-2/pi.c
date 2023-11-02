#include <stdio.h>

int primo_iter(int n)
{
	for(int i=2; i < n; i++)
	{
		if(n % i == 0){ return 0; }
	}
	return 1;
}

int pi(int k, int n)
{
	if(k == n){ return k * primo_iter(k); }
	return(pi(k+1, n)+(k*primo_iter(k)));
}

