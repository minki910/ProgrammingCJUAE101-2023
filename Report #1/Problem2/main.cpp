/* ���� Ȯ�� ���α׷� */

#include <stdio.h>

int main(void)
{
	int month = 0;

	// �� �Է�
	printf("���� �Է��ϼ���. : ");    
	scanf_s("%d", &month);

	// ���� �Ǵ�
	switch (month)
	{
	case 12: case 1: case 2:
		printf("�ܿ��Դϴ�.\n");
		break;

	case 3: case 4: case 5:
		printf("���Դϴ�.\n");
		break;

	case 6: case 7: case 8:
		printf("�����Դϴ�.\n");
		break;

	case 9: case 10: case 11:
		printf("�����Դϴ�.\n");
		break;

	default:
		printf("�ùٸ��� ���� ���Դϴ�.\n");
	}

	return 0;
}