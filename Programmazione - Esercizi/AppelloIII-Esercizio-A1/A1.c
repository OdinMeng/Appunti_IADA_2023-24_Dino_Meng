#include <stdio.h>

int is_inside(int x, int y, int z)
{
	if(x <= z && x >= y) return -1;
	else return 0;
}

int set_size(int i, int j, int t, int u)
{
	int ctr = 0;
	for(int lambda = i; lambda < j; lambda++)
		ctr += (1+is_inside(lambda, t+1, u));

	for(int mu = t+1; mu <= u; mu++)
		ctr += (1+is_inside(mu, i, j-1));

	return ctr;
}

int main(void)
{
	printf("%d \n", set_size(2,6,4,7));
}
