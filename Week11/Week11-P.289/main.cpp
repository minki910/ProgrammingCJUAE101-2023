#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define count 10

void swap(double* pa, double* pb)    // �� �Ǽ��� �ٲٴ� �Լ�
{
	double temp = 0.0;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double number[count])    // �� ���� �Լ�
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

	printf("�Ǽ��� 10�� �Է� : ");
	
	for (int i = 0; i < count; i++)    // �ݺ����� ���� �� �Է�
	{
		scanf("%lf", &number[i]);
	}
	
	line_up(number);

	printf("���ĵ� �� ���: ");

	for (int i = 0; i < count; i++)    // �ݺ����� ���� �� ���
	{
		printf("%.1lf ", number[i]);
	}
	printf("\n");
	
	return 0;
}