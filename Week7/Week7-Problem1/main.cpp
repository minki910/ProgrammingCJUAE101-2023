/* ���� 2���� �Է¹޾� ��Ģ������ �����ϴ� ���α׷� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int x, int y);    // ���� �Լ� ����
int subtraction(int x, int y);    // ����
int division(int x, int y);    // ������ 
int remainder(int x, int y);    // ������ 
int multiplication(int x, int y);    // ����

int sum(int x, int y)    // �Լ� ���� ����
{
	return x + y;    // �� ��ȯ
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
	int num1, num2 = 0;    // �Է� ���� ����
	int result = 0;    // �� ���� ����

	printf("�ΰ��� ������ �Է��ϼ���: ");
	scanf("%d%d", &num1, &num2);

	result = sum(num1, num2);    // ����
	printf("%d + %d : %d\n",num1, num2, result);    

	result = subtraction(num1, num2);    // ����
	printf("%d - %d : %d\n",num1, num2, result);

	result = division(num1, num2);    // ������
	printf("%d / %d : %d\n",num1, num2, result);

	result = remainder(num1, num2);    // ������ 
	printf("%d %% %d : %d\n",num1, num2, result);

	result = multiplication(num1, num2);    // ����
	printf("%d * %d : %d\n",num1, num2, result);

	return 0;
}