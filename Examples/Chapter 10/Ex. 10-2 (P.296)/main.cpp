#include <stdio.h>

int main(void)
{
	int ary[3] = { 0 };
	int* pa = ary;    
	int i = 0;

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}

	return 0;
}