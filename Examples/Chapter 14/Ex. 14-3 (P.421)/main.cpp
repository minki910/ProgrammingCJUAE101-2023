#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char animal[5][20] = { NULL };
	int i = 0;
	int count = 0;

	count = sizeof(animal) / sizeof(animal[0]);
	printf("%zd\n", sizeof(animal));
	printf("%zd\n", sizeof(animal[0]));
	
	for (i = 0; i < count; i++)
	{
		scanf("%s", animal[i]);
	}

	for (i = 0; i < count; i++)
	{
		printf("%s ", animal[i]);
	}

	return 0;
}