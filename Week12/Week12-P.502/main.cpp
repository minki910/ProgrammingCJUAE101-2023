#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, i , j= 0;
	int* pi = 0;
	
	printf("����� �Է��ϼ��� : ");
	scanf("%d", &num);

	pi = (int*)malloc((num - 1) * sizeof(int));    // ���� ���� �Ҵ�

	if (pi == NULL)    // �޸𸮰� ������ ���� ���� ó�� ����
	{
		printf("�޸� �����մϴ�.\n");
		exit(1);
	}

	for (i = 0; i < (num - 1); i++)
	{
		pi[i] = i + 2;
	}
	i = 0;

	while (1)    // ���� ����
	{
		while ((pi[i] == 0) && (i < (num - 2)))
		{
			i++;
		}
		
		if (i == (num - 2)) break;

		for (j = i + 1; j < (num - 1); j++)
		{
			if ((pi[j] % pi[i]) == 0)
			{
				pi[j] = 0;
			}
		}
		i++;
	}

	for (i = 0; i < (num - 1); i++)
	{
		if (pi[i] != 0)
		{
			printf("%5d", pi[i]);    // �Ҽ� ���
		}
		else
		{
			printf("%5c", 'X');    // X ���
		}

		if ((i + 1) % 5 == 0)
		{
			printf("\n");
		}
	}

	//free(pi)

	return 0;
}