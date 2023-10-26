/* 숫자 2개를 입력받아 사칙연산을 수행하는 프로그램 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int x, int y);    // 덧셈 함수 선언
int subtraction(int x, int y);    // 뺄셈
int division(int x, int y);    // 나눗셈 
int remainder(int x, int y);    // 나머지 
int multiplication(int x, int y);    // 곱셈

int sum(int x, int y)    // 함수 정의 시작
{
	return x + y;    // 값 반환
}

int subtraction(int x, int y)
{
	return x - y;
}

int division(int x, int y)
{
	return x / y;
}

int remainder(int x, int y)
{
	return x % y;
}

int multiplication(int x, int y)
{
	return x * y;
}

int main(void)
{
	int num1, num2 = 0;    // 입력 받을 변수
	int result = 0;    // 값 저장 변수

	printf("두개의 정수를 입력하세요: ");
	scanf("%d%d", &num1, &num2);

	result = sum(num1, num2);    // 덧셈
	printf("%d + %d : %d\n",num1, num2, result);    

	result = subtraction(num1, num2);    // 뺄셈
	printf("%d - %d : %d\n",num1, num2, result);

	result = division(num1, num2);    // 나눗셈
	printf("%d / %d : %d\n",num1, num2, result);

	result = remainder(num1, num2);    // 나머지 
	printf("%d %% %d : %d\n",num1, num2, result);

	result = multiplication(num1, num2);    // 곱셈
	printf("%d * %d : %d\n",num1, num2, result);

	return 0;
}