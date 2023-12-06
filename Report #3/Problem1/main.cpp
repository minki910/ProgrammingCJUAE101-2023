/* ����1 - ���� ���� ���α׷� */
#include <stdio.h>
#define cnt 12

void sort_ascending(int* pnRawArr)     // �������� ���� �Լ�
{
	int i, j ,temp = 0;

	for (i = 0; i < cnt; i++)
	{
		for (j = 0; j < cnt; j++)
		{
			if (pnRawArr[i] < pnRawArr[j])
			{
				temp = pnRawArr[i];
				pnRawArr[i] = pnRawArr[j];
				pnRawArr[j] = temp;
			}
		}
	}

	for (i = 0; i < cnt; i++)
	{
		printf("%d ", pnRawArr[i]);
	}
	printf("\n");
}

void sort_descending(int* pnRawArr)    // �������� ���� �Լ�
{
	int i, j, temp = 0;

	for (i = 0; i < cnt; i++)
	{
		for (j = 0; j < cnt; j++)
		{
			if (pnRawArr[i] > pnRawArr[j])
			{
				temp = pnRawArr[i];
				pnRawArr[i] = pnRawArr[j];
				pnRawArr[j] = temp;
			}
		}
	}

	for (i = 0; i < cnt; i++)
	{
		printf("%d ", pnRawArr[i]);
	}
	printf("\n");
}

int main(void)
{
	int nRawArr[] = { 232,244,878,817,754,351,481,137,115,253,986,236 };

	printf("�������� ����: ");
	sort_ascending(nRawArr);

	printf("�������� ����: ");
	sort_descending(nRawArr);

	return 0;
}