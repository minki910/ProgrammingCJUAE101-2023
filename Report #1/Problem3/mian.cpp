/* ���� Ȯ�� ���α׷� */

#include <stdio.h>

int main(void)
{
	int year = 0, result = 0;

	// ���� �Է�
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &year);

	// ���� �Ǵ�
	result = ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));   
	
	// ��� ���
	if(result == 0)
	{
		printf("������ �ƴմϴ�.\n");
	}
	else
	{
		printf("�����Դϴ�.\n");
	}

	return 0;
}