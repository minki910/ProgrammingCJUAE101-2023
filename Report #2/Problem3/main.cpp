/* 문제.3 - 3 6 9 게임 프로그램 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define END_code 0000

int main(void)
{
	int num = 0;
	int i = 0;
	
	printf("<369 게임 시작!>\n\n");

	while (1)
	{
		int count = 0;    // 박수 숫자 카운트 변수

		printf("숫자(정수)를 입력하세요! (END : 0000) :");
		scanf("%d", &num);

		if (num == END_code)  // 종료
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}
		
		if (num < 1)
		{
			printf("올바르지 않은 값입니다.\n\n");
			continue;
		}

		for (i = 1; i <= num; i++)
		{
			if ((i % 3) == 0 || (i % 6) == 0 || (i % 9) == 0)    // 3, 6, 6의 배수일 경우
			{
				printf("박수 ");    // 박수 출력
				count++;    // 숫자 카운팅
			}
			else
			{
				printf("%d ", i);    // 숫자 출력
			}
		}
		printf("\n");
		printf("%d번 박수를 쳐야 합니다.\n\n", count);
	}
	return 0;
}