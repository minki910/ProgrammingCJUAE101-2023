/* ����.5 - ����, �л�, ǥ������ ��� ���α׷� */
#define _CRT_SECURE_NO_WARNINGS
#define END_code 9999
#include <stdio.h>
#include <math.h>

int main(void)
{
	int i = 0;
	double count = 0.0;    // Ƚ�� ī��Ʈ ����
	double num[10];    // �Է� ���� �� ����
	double sum = 0;    // �� ����
	double avg = 0;    // ��� ����
	double variance = 0;    // �л� ����
	double standard_deviation = 0;    // ǥ������ ����
	
	printf("<����, �л�, �������� ��� ���α׷�>\n\n");

	while (1)    // ���ѷ���
	{
		for (i = 1; i < 11; i++)
		{
			printf("%d��° ���ڸ� �Է��ϼ��� (END : 9999) : ", i);
			scanf("%lf", &num[i]);

			count = i;
			sum += num[i];

			if (num[i] == END_code)
			{
				printf("���α׷��� �����մϴ�.\n");
				return 0;    // ���α׷� ����
			}
		}
		avg = (sum / count);    // ��� ���

		for (i = 1; i < count; i++)
		{
			variance += (num[i] - avg) * (num[i] - avg);
		}
		variance /= count;    // �л� ���
		standard_deviation = sqrt(variance);    // ǥ������ ���

		printf("���� : %.1lf\n", sum);
		printf("�л� : %.1lf\n", variance);
		printf("ǥ������ : %.1lf\n\n", standard_deviation);
	}
	return 0;
}