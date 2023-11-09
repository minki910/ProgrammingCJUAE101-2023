#include <stdio.h>
#define Pro2 6

int main(void)
{
	int nArrTest[Pro2] = { 1,2,3 };    // 3번째 배열까지만 수 설정
	int* pArrTest = nArrTest;

	for (unsigned int i = 0; i < Pro2; i++)
	{
		printf("nArrTest[%d] = %d\n", i, nArrTest[i]);    // 배열식 표현
		//printf("nArrTest[%d] = %d\n", i, *(nArrTest +i));    // 포인터식 표현
		//printf("nArrTest[%d] = %d\n", i, pArrTest[i]);    // 배열식 표현
		//printf("nArrTest[%d] = %d\n", i, *(pArrTest+i));    // 포인터식 표현
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