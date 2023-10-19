/* 2단 부터 9단까지의 구구단 결과값 출력 프로그램 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	while (1)    // 무한 루프
	{
		printf("원하시는 구구단 숫자을 입력해주세요. (2 ~ 9)\n프로그램을 끝내고 싶다면 0을 입력하세요. : ");    // 값 입력 받기
		scanf("%d", &num);
		
		if (num == 0)    // 종료 설정
		{
			printf("\n프로그램을 종료합니다.\n");
			break;
		}
		
		if (num < 2 || num > 9)    // 값 범위 설정
		{
			printf("\n올바르지 않은 값입니다. 2 ~ 9사이의 숫자를 입력해주세요.\n");
			continue;
		}

		int i;

		for (i = 1; i <= 9; i++)    // 입력받은 값의 1부터 9까지의 계산 
		{
			printf("%d X %d = %d\n", num, i, num * i);
		}
	}
	return 0;
}