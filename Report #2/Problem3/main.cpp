/* ����.3 - 3 6 9 ���� ���α׷� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define END_code 0000

int main(void)
{
	int num = 0;
	int i = 0;
	
	printf("<369 ���� ����!>\n\n");

	while (1)
	{
		int count = 0;    // �ڼ� ���� ī��Ʈ ����

		printf("����(����)�� �Է��ϼ���! (END : 0000) :");
		scanf("%d", &num);

		if (num == END_code)  // ����
		{
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		
		if (num < 1)
		{
			printf("�ùٸ��� ���� ���Դϴ�.\n\n");
			continue;
		}

		for (i = 1; i <= num; i++)
		{
			if ((i % 3) == 0 || (i % 6) == 0 || (i % 9) == 0)    // 3, 6, 6�� ����� ���
			{
				printf("�ڼ� ");    // �ڼ� ���
				count++;    // ���� ī����
			}
			else
			{
				printf("%d ", i);    // ���� ���
			}
		}
		printf("\n");
		printf("%d�� �ڼ��� �ľ� �մϴ�.\n\n", count);
	}
	return 0;
}