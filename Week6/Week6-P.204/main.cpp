/* P.204 ����3 (�밢�� �� ����� ���α׷�) */
#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((i + j == 4) || (i == j))    // �밢�� �����ϱ�
			{
				printf("*");    // * ���
			}
			else
			{
				printf(" ");    // ��ĭ ���
			}
		}
		printf("\n");
	}

	return 0;
}