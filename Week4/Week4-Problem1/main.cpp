#include <stdio.h>

int main(void)
{
	int year = 0, month = 0, day = 0, result = 0, lastnumber = 0;
	
	// ��������� �Է� �ޱ�
	printf("��������� �Է��ϼ��� : ");
	scanf_s("%d", &year);
	printf("������� �Է��ϼ��� : ");
	scanf_s("%d", &month);
	printf("������� �Է��ϼ��� : ");
	scanf_s("%d", &day);

	// (����⵵)-(��)+(��) ���
	result = year - month + day;

	// ������ �ڸ� ���� ���
	lastnumber = result % 10;

	if (lastnumber == 0)
	{
		printf("Very Good\n");
	}
	else
	{
		printf("SoSo\n");
	}

	return 0;
}