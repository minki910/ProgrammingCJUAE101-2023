#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_ary(double* pa, int size)
{
	int i = 0;

	printf("%d개의 실수값 입력 : ", size);

	for (i = 0; i < size; i++)
	{
		scanf("%lf", pa + i);
	}
}

double find_max(double* pa, int size)
{
	double max = 0.0;
	int i = 0;

	max = pa[0];
	for (i = 1; i < size; i++)
	{
		if (pa[i] > max)
		{
			max = pa[i];
		}
	}
	return max;
}

int main(void)
{
	double ary[5] = { 0.0 };
	double max = 0.0;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	max = find_max(ary, size);
	printf("배열의 최댓값 : %.1lf\n", max);

	return 0;
}