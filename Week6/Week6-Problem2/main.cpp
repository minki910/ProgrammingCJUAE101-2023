/* 범죄자 DNA 판단 프로그램 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0;    // 입력한 숫자를 저장하는 변수
	int i = 0;     // 반복문에서 사용되는 변수
	int sum = 0;    // 입력한 숫자의 합을 저장하는 변수

	for (i = 1; i < 6; i++)    // 5번 반복하는 반복문
	{
		printf("5자리의 수 중 %d번째 숫자를 입력하세요.: ", i);
		scanf("%d", &num);
		
		sum += num;    // 입력한 숫자를 누적하여 합산
	}
		if (sum % 5 == 3)    // 합산한 결과를 5로 나눈 나머지를 확인
		{
			printf("\nSuspect입니다.\n");
		}
		else
		{
			printf("\nCitizen입니다.\n");
		}
	return 0;
}