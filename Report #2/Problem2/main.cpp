/* 문제.2 - 한개의 정수를 입력 받아 피보나치 수열 구하기 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define END_code 0000

int main(void)
{
	int num = 0;    // 입력 받을 변수
	
	printf("<피보나치 수열 계산 프로그램>\n\n");

	while (true)    // 무한루프
	{
		printf("한개의 정수를 입력하세요.(END : 0000) : ");
		scanf("%d", &num);

		if (num == END_code)    // 종료
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}

		if (num < 0)
		{
			printf("올바르지 않은 값입니다.\n\n");
			continue;
		}

		printf("피보나치 수열: ");
		
		int i = 1;
		int first = 1;    // 첫번째 피보나치 항
		int second = 1;    // 두번째 피보나치 항
		int next = 0;    // 다음 피보나치 항

		for (i = 1; i <= num; i++)    // 입력 받은 수까지의 반복문 수행
		{
			printf("%d", first);

			if (i < num )
			{
				printf(", ");
			}
			next = first + second;    // 다음 피보나치 항 계산
			first = second;
			second = next;
		}
		printf("\n\n");
	}
	return 0;
}