/* ����.2 - �Ѱ��� ������ �Է� �޾� �Ǻ���ġ ���� ���ϱ� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define END_code 0000

int main(void)
{
	int num = 0;    // �Է� ���� ����
	
	printf("<�Ǻ���ġ ���� ��� ���α׷�>\n\n");

	while (true)    // ���ѷ���
	{
		printf("�Ѱ��� ������ �Է��ϼ���.(END : 0000) : ");
		scanf("%d", &num);

		if (num == END_code)    // ����
		{
			printf("���α׷��� �����մϴ�.\n");
			break;
		}

		if (num < 0)
		{
			printf("�ùٸ��� ���� ���Դϴ�.\n\n");
			continue;
		}

		printf("�Ǻ���ġ ����: ");
		
		int i = 1;
		int first = 1;    // ù��° �Ǻ���ġ ��
		int second = 1;    // �ι�° �Ǻ���ġ ��
		int next = 0;    // ���� �Ǻ���ġ ��

		for (i = 1; i <= num; i++)    // �Է� ���� �������� �ݺ��� ����
		{
			printf("%d", first);

			if (i < num )
			{
				printf(", ");
			}
			next = first + second;    // ���� �Ǻ���ġ �� ���
			first = second;
			second = next;
		}
		printf("\n\n");
	}
	return 0;
}