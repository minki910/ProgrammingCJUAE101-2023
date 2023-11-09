#include <stdio.h>
#define Anum 3
#define Bnum 10

int main(void)
{
	int A[Anum] = { 1,2,3 };    // 초기화된 A 배열
	int B[Bnum];    // 초기화되지 않은 B 배열
	int i;

	for (i = 0; i < Bnum; i++)    // B 배열을 채우기 위해 B 배열 요소의 개수만큼 반복 
	{
		B[i] = A[i % Anum];    // A 배열 첨자가 0 ~ 2를 갖도록 나머지 연산자 사용
	}

	for (i = 0; i < Bnum; i++)
	{
		printf("%5d", B[i]);    // B 베열 출력
	}
	printf("\n");

	return 0;
}