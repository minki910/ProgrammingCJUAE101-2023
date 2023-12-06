/* 문제1 - 정렬 수행 프로그램 */
#include <stdio.h>
#define cnt 12

void sort_ascending(int* pnRawArr)     // 오름차순 정렬 함수
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

void sort_descending(int* pnRawArr)    // 내림차순 정렬 함수
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

	printf("오름차순 정렬: ");
	sort_ascending(nRawArr);

	printf("내림차순 정렬: ");
	sort_descending(nRawArr);

	return 0;
}