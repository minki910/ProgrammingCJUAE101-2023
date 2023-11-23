#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define count 10

void swap(double* pa, double* pb)    // 두 실수를 바꾸는 함수
{
	double temp = 0.0;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double number[count])    // 수 나열 함수
{
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = 0; j < count - i - 1; j++)
		{
			if (number[j] < number[j + 1])
			{
				swap(&number[j], &number[j + 1]);
			}
		}
	}
}

int main(void)
{
	double number[count] = {};

	printf("실수값 10개 입력 : ");
	
	for (int i = 0; i < count; i++)    // 반복문을 통한 수 입력
	{
		scanf("%lf", &number[i]);
	}
	
	line_up(number);

	printf("정렬된 값 출력: ");

	for (int i = 0; i < count; i++)    // 반복문을 통한 수 출력
	{
		printf("%.1lf ", number[i]);
	}
	printf("\n");
	
	return 0;
}