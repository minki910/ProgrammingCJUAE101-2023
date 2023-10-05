#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num1, num2, result;
    char cal = 0;

    printf("사칙 연산 입력(정수) : ");
    scanf("%d%c%d", &num1, &cal, &num2);

    // 사칙 연산
    switch (cal)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    }

    // 결과값 출력
    printf("%d%c%d = %d\n", num1, cal, num2, result);

    return 0;
}