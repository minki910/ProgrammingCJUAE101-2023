/* 문제.1 - 최대공약수(GCD) 최소공배수(LCM) 프로그램 */
#define _CRT_SECURE_NO_WARNINGS
#define ENDcode1 00
#define ENDcode2 99
#include <stdio.h>

int main(void)
{
	int num1, num2 = 0;    // 입력 받을 변수
	int GCD, LCM = 0;    // 최대공약수, 최소공배수
	int res = 0;    // 임시 결과 저장 변수

	printf("<최대공약수 최소공배수 계산 프로그램>\n\n");

	while (true)    // 무한 루프
	{
		printf("두 개의 정수를 입력하세요.(END : 00 99): ");    // 두 개의 정수 입력
		scanf("%d%d", &num1, &num2);

		if ((num1 == ENDcode1) && (num2 == ENDcode2))    // 프로그램 종료
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}

		int a = num1, b = num2;    // 입력 값을 유지하는 변수

		while (b != 0)    // 유클리드 호제법을 사용하여 최대공약수 계산
		{
			res = a % b;
			a = b;
			b = res;
		}
		GCD = a;
		LCM = ((num1 * num2) / GCD);    // 최소 공배수 계산

		printf("최대공약수 : %d\n", GCD);
		printf("최소공배수 : %d\n\n", LCM);
	}
	return 0;
}