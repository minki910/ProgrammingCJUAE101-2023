#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num1, num2, result;
    char cal = 0;

    printf("��Ģ ���� �Է�(����) : ");
    scanf("%d%c%d", &num1, &cal, &num2);

    // ��Ģ ����
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

    // ����� ���
    printf("%d%c%d = %d\n", num1, cal, num2, result);

    return 0;
}