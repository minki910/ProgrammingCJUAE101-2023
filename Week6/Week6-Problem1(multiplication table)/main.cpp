/* 2�� ���� 9�ܱ����� ������ ����� ��� ���α׷� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	while (1)    // ���� ����
	{
		printf("���Ͻô� ������ ������ �Է����ּ���. (2 ~ 9)\n���α׷��� ������ �ʹٸ� 0�� �Է��ϼ���. : ");    // �� �Է� �ޱ�
		scanf("%d", &num);
		
		if (num == 0)    // ���� ����
		{
			printf("\n���α׷��� �����մϴ�.\n");
			break;
		}
		
		if (num < 2 || num > 9)    // �� ���� ����
		{
			printf("\n�ùٸ��� ���� ���Դϴ�. 2 ~ 9������ ���ڸ� �Է����ּ���.\n");
			continue;
		}

		int i;

		for (i = 1; i <= 9; i++)    // �Է¹��� ���� 1���� 9������ ��� 
		{
			printf("%d X %d = %d\n", num, i, num * i);
		}
	}
	return 0;
}