#include <stdio.h>
#define Pro2 6

int main(void)
{
	int nArrTest[Pro2] = { 1,2,3 };    // 3��° �迭������ �� ����
	int* pArrTest = nArrTest;

	for (unsigned int i = 0; i < Pro2; i++)
	{
		printf("nArrTest[%d] = %d\n", i, nArrTest[i]);    // �迭�� ǥ��
		//printf("nArrTest[%d] = %d\n", i, *(nArrTest +i));    // �����ͽ� ǥ��
		//printf("nArrTest[%d] = %d\n", i, pArrTest[i]);    // �迭�� ǥ��
		//printf("nArrTest[%d] = %d\n", i, *(pArrTest+i));    // �����ͽ� ǥ��
	}
	printf("\n");
	
	for (unsigned int i = 0; i < Pro2; i++)
	{
		printf("nArrTest[%d] = %d\n", i, *&nArrTest[i]);
		//printf("nArrTest[%d] = %d\n", i, *(nArrTest +i));
		//printf("nArrTest[%d] = %d\n", i, *&pArrTest[i]);
		//printf("nArrTest[%d] = %d\n", i, *(pArrTest+i));
	}
	return 0;
}