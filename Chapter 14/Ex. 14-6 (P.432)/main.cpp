#include <stdio.h>

int main(void)
{
	char* pary[5] = { NULL };
	int i;

	pary[0] = 'a';
	pary[1] = 'b';
	pary[2] = 'c';
	pary[3] = 'd';
	pary[4] = 'e';

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]);
	}

	return 0;
}