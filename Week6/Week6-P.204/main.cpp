/* P.204 문제3 (대각선 별 만들기 프로그램) */
#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((i + j == 4) || (i == j))    // 대각선 설정하기
			{
				printf("*");    // * 출력
			}
			else
			{
				printf(" ");    // 빈칸 출력
			}
		}
		printf("\n");
	}

	return 0;
}