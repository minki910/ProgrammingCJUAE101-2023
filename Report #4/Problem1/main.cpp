#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 0;
	int* pi = 0;
	int i, sum = 0;

	printf("������ ������ �Է����ּ��� : ");
	scanf("%d", &num);

	pi = (int*)malloc(num * sizeof(int));    // �޸� ���� �Ҵ�

	if (pi == NULL)    // ���� �Ҵ翡 ������ ���
	{
		printf("�޸𸮰� �����մϴ�.\n");
		exit(1);
	}

	printf("%d���� �Ǽ��� �Է��ϼ��� : ", num);

	for (i = 0; i < num; i++)    // �Է��� ���� ���� ���
	{
		scanf("%d", &pi[i]);
		sum += pi[i];
	}
	printf("���� : %d", sum);

	free(pi);    // ���� �Ҵ� ���� ��ȯ

	return 0;
}