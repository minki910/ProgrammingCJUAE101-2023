#include <stdio.h>

int main(void)
{
	int chest = 95;
	char size;

	printf("�����ѷ��� �Է��ϼ���. : ");
	scanf_s("%d", &chest);

	if (chest <= 90)
	{
		size = 'S';
	}
	else if (chest <= 100)
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}

	printf("������� %c�Դϴ�.\n", size);
	
	return 0;
}