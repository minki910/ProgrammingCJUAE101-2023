#include <stdio.h>
#define Pro1 5
#define Pro2 10
#define Pro3 3
#define Pro4 5

int main(void)
{
	int nAryTest[Pro1] = {};    // 정수 5개를 저장할 배열 (0으로 초기화)
	int* pAryTest = nAryTest;

	//double nAryTest[Pro2];    실수 10개를 저장할 배열
	//int nAryTest[Pro3]     배열 요소 개수가 3개인 int형 배열
	//char nAryTest[Pro4];    첨자의 최댓값이 4인 char형 배열

	for (unsigned int i = 0; i < Pro1; i++)    // 인덱스에 해당하는 값에 접근
	{
		printf("nAryTest[%d] = %d\n", i, nAryTest[i]);    // 배열식 표현
		//printf("nAryTest[%d] = %d\n", i, *(nAryTest + i));    // 포인터식 표현
		//printf("nAryTest[%d] = %d\n", i, pAryTest[i]);    // 배열식 표현
		//printf("nAryTest[%d] = %d\n", i, (pAryTest + i));    // 포인터식 표현
	}
	printf("\n");

	for (unsigned int i = 0; i < Pro1; i++)    // 인덱스에 해당하는 메모리에 접근
	{
		printf("nAryTest[%d] = %d\n", i, *&nAryTest[i]);
		//printf("nAryTest[%d] = %d\n", i, *(nAryTest + i));
		//printf("nAryTest[%d] = %d\n", i, *&pAryTest[i]);
		//printf("nAryTest[%d] = %d\n", i, *(pAryTest + i));
	}

	return 0;
}