/* ������ DNA �Ǵ� ���α׷� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0;    // �Է��� ���ڸ� �����ϴ� ����
	int i = 0;     // �ݺ������� ���Ǵ� ����
	int sum = 0;    // �Է��� ������ ���� �����ϴ� ����

	for (i = 1; i < 6; i++)    // 5�� �ݺ��ϴ� �ݺ���
	{
		printf("5�ڸ��� �� �� %d��° ���ڸ� �Է��ϼ���.: ", i);
		scanf("%d", &num);
		
		sum += num;    // �Է��� ���ڸ� �����Ͽ� �ջ�
	}
		if (sum % 5 == 3)    // �ջ��� ����� 5�� ���� �������� Ȯ��
		{
			printf("\nSuspect�Դϴ�.\n");
		}
		else
		{
			printf("\nCitizen�Դϴ�.\n");
		}
	return 0;
}