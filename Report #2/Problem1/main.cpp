/* ����.1 - �ִ�����(GCD) �ּҰ����(LCM) ���α׷� */
#define _CRT_SECURE_NO_WARNINGS
#define ENDcode1 00
#define ENDcode2 99
#include <stdio.h>

int main(void)
{
	int num1, num2 = 0;    // �Է� ���� ����
	int GCD, LCM = 0;    // �ִ�����, �ּҰ����
	int res = 0;    // �ӽ� ��� ���� ����

	printf("<�ִ����� �ּҰ���� ��� ���α׷�>\n\n");

	while (true)    // ���� ����
	{
		printf("�� ���� ������ �Է��ϼ���.(END : 00 99): ");    // �� ���� ���� �Է�
		scanf("%d%d", &num1, &num2);

		if ((num1 == ENDcode1) && (num2 == ENDcode2))    // ���α׷� ����
		{
			printf("���α׷��� �����մϴ�.\n");
			break;
		}

		int a = num1, b = num2;    // �Է� ���� �����ϴ� ����

		while (b != 0)    // ��Ŭ���� ȣ������ ����Ͽ� �ִ����� ���
		{
			res = a % b;
			a = b;
			b = res;
		}
		GCD = a;
		LCM = ((num1 * num2) / GCD);    // �ּ� ����� ���

		printf("�ִ����� : %d\n", GCD);
		printf("�ּҰ���� : %d\n\n", LCM);
	}
	return 0;
}